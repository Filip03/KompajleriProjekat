%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void yyerror(const char *s);

typedef enum {
    NODE_PROGRAM, NODE_DECLARATION, NODE_QUERY, NODE_RESULT,
    NODE_EXEC, NODE_ASSIGN, NODE_IF, NODE_FOR,
    NODE_COND_EMPTY, NODE_COND_NOT_EMPTY, NODE_COND_URL_EXISTS,
    NODE_LIST, NODE_TERM, NODE_DIRECTIVE,
    NODE_PLUS, NODE_MINUS, NODE_STAR, NODE_PIPE, NODE_JUXTAPOSITION,
    NODE_SET_OP
} NodeType;

typedef struct Node {
    NodeType type;
    char *value;
    struct Node **children;
    int child_count;
} Node;

Node* create_node(NodeType type, char *value, int count, ...) {
    Node *n = malloc(sizeof(Node));
    if (n == NULL) {
        perror("Failed to allocate Node");
        exit(EXIT_FAILURE);
    }
    n->type = type;
    n->value = value ? strdup(value) : NULL;
    n->child_count = count;
    n->children = NULL;
    if (count > 0) {
        n->children = malloc(sizeof(Node*) * count);
        if (n->children == NULL) {
            perror("Failed to allocate Node children");
            exit(EXIT_FAILURE);
        }
    }

    va_list args;
    va_start(args, count);
    int i = 0;
    for (i = 0; i < count; i++) {
        n->children[i] = va_arg(args, Node*);
    }
    va_end(args);
    return n;
}

void print_ast(Node *n, int indent) {
    if (!n) return;
    int i = 0;
    for (i = 0; i < indent; i++) printf("|   ");
    printf("|-> Node %d", n->type);
    if (n->value) printf(" (%s)", n->value);
    printf("\n");
    for (i = 0; i < n->child_count; i++)
        print_ast(n->children[i], indent + 1);
}

extern int yylex(void);
extern int yyparse(void);
extern FILE *yyin;

%}

%union {
    char* str;
    struct Node* node;
}

%token <str> T_WORD T_STRING
%token T_QUERY T_RESULT_OF_QUERY T_EXEC T_IF T_FOR T_IN T_BEGIN_ T_END
%token T_EMPTY T_NOT_EMPTY T_URL_EXISTS
%token T_PLUS T_UNION T_MINUS T_DIFF T_STAR T_INTERSECTION T_PIPE
%token T_LT T_GT T_LBRACK T_RBRACK T_LPAREN T_RPAREN T_EQ T_COLON T_SEMI T_COMMA

%right T_PLUS T_MINUS T_STAR
%left T_PIPE

%type <node> query_expression juxtaposition_expression unary_expression primary_expression
%type <node> program declarations declaration commands command assign_command
%type <node> condition list_of_queries query_list query_item query directive operator
%type <str> identifier key value

%%

program: declarations commands  {
                                    Node *prog = create_node(NODE_PROGRAM, NULL, 2, $1, $2);
                                    print_ast(prog, 0);
                                }
;

declarations: declaration
| declarations declaration      {
                                    $$ = create_node(NODE_DECLARATION, NULL, 2, $1, $2);
                                }
;

declaration: T_QUERY identifier T_EQ query T_SEMI   {
                                                        $$ = create_node(NODE_QUERY, $2, 1, $4);
                                                    }
| T_RESULT_OF_QUERY identifier T_SEMI               {
                                                        $$ = create_node(NODE_RESULT, $2, 0);
                                                    }
;

commands: command
| commands command      {
                            $$ = create_node(NODE_PROGRAM, NULL, 2, $1, $2);
                        }
;

command: T_EXEC identifier T_SEMI           {
                                                $$ = create_node(NODE_EXEC, $2, 0);
                                            }
| assign_command T_SEMI                     {
                                                $$ = $1;
                                            }
| T_IF condition T_BEGIN_ commands T_END    {
                                                $$ = create_node(NODE_IF, NULL, 2, $2, $4);
                                            }
| T_FOR identifier T_IN list_of_queries T_BEGIN_ commands T_END {
                                                $$ = create_node(NODE_FOR, $2, 2, $4, $6);
                                            }
;

assign_command: identifier T_EQ T_EXEC identifier   {
                                                        Node *exec = create_node(NODE_EXEC, $4, 0);
                                                        $$ = create_node(NODE_ASSIGN, $1, 1, exec);
                                                    }
| identifier T_EQ identifier T_UNION identifier     {
                                                        $$ = create_node(NODE_SET_OP, "++", 2,
                                                            create_node(NODE_TERM, $3, 0),
                                                            create_node(NODE_TERM, $5, 0));
                                                    }
| identifier T_EQ identifier T_DIFF identifier      {
                                                        $$ = create_node(NODE_SET_OP, "--", 2,
                                                            create_node(NODE_TERM, $3, 0),
                                                            create_node(NODE_TERM, $5, 0));
                                                    }
| identifier T_EQ identifier T_INTERSECTION identifier  {
                                                        $$ = create_node(NODE_SET_OP, "**", 2,
                                                            create_node(NODE_TERM, $3, 0),
                                                            create_node(NODE_TERM, $5, 0));
                                                        }
;

condition: T_EMPTY T_LPAREN identifier T_RPAREN     {
                                                        $$ = create_node(NODE_COND_EMPTY, $3, 0);
                                                    }
| T_NOT_EMPTY T_LPAREN identifier T_RPAREN          {
                                                        $$ = create_node(NODE_COND_NOT_EMPTY, $3, 0);
                                                    }
| T_URL_EXISTS T_LPAREN identifier T_COMMA T_STRING T_RPAREN {
                                                Node *arg1 = create_node(NODE_TERM, $3, 0);
                                                Node *arg2 = create_node(NODE_TERM, $5, 0);
                                                $$ = create_node(NODE_COND_URL_EXISTS, NULL, 2, arg1, arg2);
                                            }
;

list_of_queries: T_LBRACK query_list T_RBRACK       {
                                                        $$ = $2;
                                                    }
;

query_list: query_item                  {
                                            $$ = $1;
                                        }
| query_list T_COMMA query_item         {
                                            $$ = create_node(NODE_LIST, NULL, 2, $1, $3);
                                        }
;

query_item: query                       {
                                            $$ = $1;
                                        }
| identifier                            {
                                            $$ = create_node(NODE_QUERY, $1, 0);
                                        }
;

query: T_LT query_expression T_GT       {
                                            $$ = $2;
                                        }
;

query_expression: juxtaposition_expression
                | query_expression T_PIPE juxtaposition_expression {
                    $$ = create_node(NODE_PIPE, NULL, 2, $1, $3);
                }
;

juxtaposition_expression: unary_expression
                        | juxtaposition_expression unary_expression {
                            $$ = create_node(NODE_JUXTAPOSITION, NULL, 2, $1, $2);
                        }
;

unary_expression: primary_expression
                | operator unary_expression {
                    $$ = create_node($1->type, NULL, 1, $2);
                    free($1);
                }
;

primary_expression: T_WORD      {
                                    $$ = create_node(NODE_TERM, $1, 0);
                                }
                  | T_STRING    {
                                    $$ = create_node(NODE_TERM, $1, 0);
                                }
                  | directive   {
                                    $$ = $1;
                                }
;

directive: key T_COLON value    {
                                    Node *k = create_node(NODE_TERM, $1, 0);
                                    Node *v = create_node(NODE_TERM, $3, 0);
                                    $$ = create_node(NODE_DIRECTIVE, NULL, 2, k, v);
                                }
;

operator: T_PLUS                {
                                    $$ = create_node(NODE_PLUS, NULL, 0);
                                }
| T_MINUS                       {
                                    $$ = create_node(NODE_MINUS, NULL, 0);
                                }
| T_STAR                        {
                                    $$ = create_node(NODE_STAR, NULL, 0);
                                }
;

identifier: T_WORD              {
                                    $$ = $1;
                                }
;

key: T_WORD                     {
                                    $$ = $1;
                                }
;

value: T_WORD                   {
                                    $$ = $1;
                                }
| T_STRING                      {
                                    $$ = $1;
                                }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    int res = yyparse();
    if(res == 0){
        printf("Ulaz je ispravan.\n");
    }else{
        printf("Ulaz nije ispravan.\n");
    }
    return 0;
}
