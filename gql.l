%{
#include "gql.tab.h"
#include <string.h>

%}

%option yylineno

%x LINE_COMMENT
%x MULTI_LINE_COMMENT

%%

"QUERY"                 { return T_QUERY; }
"EXEC"                  { return T_EXEC; }
"IF"                    { return T_IF; }
"FOR"                   { return T_FOR; }
"IN"                    { return T_IN; }
"BEGIN"                 { return T_BEGIN_; }
"END"                   { return T_END; }
"RESULT_OF_QUERY"       { return T_RESULT_OF_QUERY; }
"EMPTY"                 { return T_EMPTY; }
"NOT_EMPTY"             { return T_NOT_EMPTY; }
"URL_EXISTS"            { return T_URL_EXISTS; }

"++"                    { return T_UNION; }
"--"                    { return T_DIFF; }
"**"                    { return T_INTERSECTION; }

"+"                     { return T_PLUS; }
"-"                     { return T_MINUS; }
"*"                     { return T_STAR; }
"|"                     { return T_PIPE; }

"<"                     { return T_LT; }
">"                     { return T_GT; }
"["                     { return T_LBRACK; }
"]"                     { return T_RBRACK; }
"("                     { return T_LPAREN; }
")"                     { return T_RPAREN; }
"="                     { return T_EQ; }
":"                     { return T_COLON; }
";"                     { return T_SEMI; }
","                     { return T_COMMA; }

\"([^"])*\"             { yylval.str = strdup(yytext);
                            return T_STRING; }
[a-zA-Z0-9_]+           { yylval.str = strdup(yytext);
                            return T_WORD; }

[ \t\r\n]+              {}
"//"                    { BEGIN(LINE_COMMENT); }
"/*"                    { BEGIN(MULTI_LINE_COMMENT); }

.                       { printf("Unexpected character: %s\n", yytext); }

<LINE_COMMENT>\n       { BEGIN(INITIAL); }
<LINE_COMMENT>.        {}

<MULTI_LINE_COMMENT>"*/"  { BEGIN(INITIAL); }
<MULTI_LINE_COMMENT>.     {}
<MULTI_LINE_COMMENT>\n    {}

%%
