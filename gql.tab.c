
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "gql.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void yyerror(const char *msg);

typedef enum {
    NODE_PROGRAM, NODE_DECLARATION, NODE_SEQUENCE, NODE_QUERY, NODE_QUERY_REF,
    NODE_EXEC, NODE_ASSIGN, NODE_IF, NODE_FOR, NODE_RESULT,
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

Node* create_node(NodeType type, char *value, int count, ...);
const char* get_node_type_name(NodeType type);
void print_ast(Node *n, int indent);
void free_ast(Node *n);

extern int yylex(void);
extern int yyparse(void);
extern int yylineno;
extern char *yytext; 



/* Line 189 of yacc.c  */
#line 110 "gql.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_WORD = 258,
     T_STRING = 259,
     T_QUERY = 260,
     T_RESULT_OF_QUERY = 261,
     T_EXEC = 262,
     T_IF = 263,
     T_FOR = 264,
     T_IN = 265,
     T_BEGIN_ = 266,
     T_END = 267,
     T_EMPTY = 268,
     T_NOT_EMPTY = 269,
     T_URL_EXISTS = 270,
     T_PLUS = 271,
     T_UNION = 272,
     T_MINUS = 273,
     T_DIFF = 274,
     T_STAR = 275,
     T_INTERSECTION = 276,
     T_PIPE = 277,
     T_LT = 278,
     T_GT = 279,
     T_LBRACK = 280,
     T_RBRACK = 281,
     T_LPAREN = 282,
     T_RPAREN = 283,
     T_EQ = 284,
     T_COLON = 285,
     T_SEMI = 286,
     T_COMMA = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "gql.y"

    char* str;
    struct Node* node;



/* Line 214 of yacc.c  */
#line 185 "gql.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "gql.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  44
/* YYNRULES -- Number of states.  */
#define YYNSTATES  95

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    17,    23,    27,    29,
      32,    36,    39,    45,    53,    58,    64,    70,    76,    81,
      86,    93,    97,    99,   103,   105,   107,   111,   113,   117,
     119,   122,   124,   127,   129,   131,   133,   137,   141,   143,
     145,   147,   149,   151,   153
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    35,    37,    -1,    36,    -1,    35,    36,
      -1,     5,    51,    29,    44,    31,    -1,     5,    51,    29,
      41,    31,    -1,     6,    51,    31,    -1,    38,    -1,    37,
      38,    -1,     7,    51,    31,    -1,    39,    31,    -1,     8,
      40,    11,    37,    12,    -1,     9,    51,    10,    41,    11,
      37,    12,    -1,    51,    29,     7,    51,    -1,    51,    29,
      51,    17,    51,    -1,    51,    29,    51,    19,    51,    -1,
      51,    29,    51,    21,    51,    -1,    13,    27,    51,    28,
      -1,    14,    27,    51,    28,    -1,    15,    27,    51,    32,
       4,    28,    -1,    25,    42,    26,    -1,    43,    -1,    42,
      32,    43,    -1,    44,    -1,    51,    -1,    23,    45,    24,
      -1,    46,    -1,    45,    22,    46,    -1,    47,    -1,    46,
      47,    -1,    48,    -1,    50,    47,    -1,     3,    -1,     4,
      -1,    49,    -1,    27,    45,    28,    -1,    52,    30,    53,
      -1,    16,    -1,    18,    -1,    20,    -1,     3,    -1,     3,
      -1,     3,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    65,    66,    71,    75,    79,    84,    85,
      90,    93,    96,    99,   104,   108,   114,   120,   128,   131,
     134,   141,   146,   149,   154,   157,   162,   167,   168,   173,
     174,   179,   181,   187,   190,   193,   196,   202,   211,   214,
     217,   222,   227,   232,   235
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_WORD", "T_STRING", "T_QUERY",
  "T_RESULT_OF_QUERY", "T_EXEC", "T_IF", "T_FOR", "T_IN", "T_BEGIN_",
  "T_END", "T_EMPTY", "T_NOT_EMPTY", "T_URL_EXISTS", "T_PLUS", "T_UNION",
  "T_MINUS", "T_DIFF", "T_STAR", "T_INTERSECTION", "T_PIPE", "T_LT",
  "T_GT", "T_LBRACK", "T_RBRACK", "T_LPAREN", "T_RPAREN", "T_EQ",
  "T_COLON", "T_SEMI", "T_COMMA", "$accept", "program", "declarations",
  "declaration", "commands", "command", "assign_command", "condition",
  "list_of_queries", "query_list", "query_item", "query",
  "query_expression", "juxtaposition_expression", "unary_expression",
  "primary_expression", "directive", "operator", "identifier", "key",
  "value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    37,    37,
      38,    38,    38,    38,    39,    39,    39,    39,    40,    40,
      40,    41,    42,    42,    43,    43,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    49,    50,    50,
      50,    51,    52,    53,    53
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     5,     5,     3,     1,     2,
       3,     2,     5,     7,     4,     5,     5,     5,     4,     4,
       6,     3,     1,     3,     1,     1,     3,     1,     3,     1,
       2,     1,     2,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,    41,     0,     0,     1,
       0,     0,     0,     4,     2,     8,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     9,    11,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    38,    39,    40,     0,     0,    27,    29,
      31,    35,     0,     0,     0,    22,    24,    25,     6,     5,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,    26,    30,    32,     0,    21,     0,    18,    19,     0,
      12,     0,    15,    16,    17,    36,    28,    43,    44,    37,
      23,     0,     0,    20,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    14,    15,    16,    24,    31,    54,
      55,    56,    47,    48,    49,    50,    51,    52,    17,    53,
      89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int8 yypact[] =
{
      59,     6,     6,    21,     8,   -45,   -45,    -3,    17,   -45,
       6,    56,     6,   -45,    16,   -45,    29,    45,    31,   -45,
      44,    52,    53,    54,    22,    67,   -45,   -45,    37,     2,
       4,    51,    55,   -45,     6,     6,     6,    16,    58,     6,
      24,    57,   -45,   -45,   -45,   -45,     2,    39,     2,   -45,
     -45,   -45,     2,    60,     5,   -45,   -45,   -45,   -45,   -45,
      61,    63,    62,    43,    73,   -45,     6,     6,     6,    10,
       2,   -45,   -45,   -45,    69,   -45,     4,   -45,   -45,    81,
     -45,    16,   -45,   -45,   -45,   -45,     2,   -45,   -45,   -45,
     -45,    64,    50,   -45,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,    84,   -34,   -14,   -45,   -45,    65,   -45,
      19,    75,    66,    26,   -44,   -45,   -45,   -45,     0,   -45,
     -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int8 yytable[] =
{
      26,     7,     8,    63,    72,    41,    42,     6,    73,     6,
      20,     6,    25,     1,     2,    10,    11,    12,    43,     6,
      44,     9,    45,    10,    11,    12,    18,    29,    40,    46,
      57,    75,    70,    37,    60,    61,    62,    76,    85,    65,
       6,    66,    72,    67,    39,    68,     6,    92,    19,    26,
      10,    11,    12,     6,    29,    80,    30,    10,    11,    12,
      27,    70,    94,    71,     1,     2,    82,    83,    84,    21,
      22,    23,    87,    88,    28,    33,    57,    38,    26,    34,
      35,    36,    58,    30,    81,    91,    59,   -42,    13,    77,
      74,    78,    93,    32,    79,    90,    86,     0,     0,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    69
};

static const yytype_int8 yycheck[] =
{
      14,     1,     2,    37,    48,     3,     4,     3,    52,     3,
      10,     3,    12,     5,     6,     7,     8,     9,    16,     3,
      18,     0,    20,     7,     8,     9,    29,    23,    28,    27,
      30,    26,    22,    11,    34,    35,    36,    32,    28,    39,
       3,    17,    86,    19,     7,    21,     3,    81,    31,    63,
       7,     8,     9,     3,    23,    12,    25,     7,     8,     9,
      31,    22,    12,    24,     5,     6,    66,    67,    68,    13,
      14,    15,     3,     4,    29,    31,    76,    10,    92,    27,
      27,    27,    31,    25,    11,     4,    31,    30,     4,    28,
      30,    28,    28,    18,    32,    76,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,    34,    35,    36,     3,    51,    51,     0,
       7,     8,     9,    36,    37,    38,    39,    51,    29,    31,
      51,    13,    14,    15,    40,    51,    38,    31,    29,    23,
      25,    41,    44,    31,    27,    27,    27,    11,    10,     7,
      51,     3,     4,    16,    18,    20,    27,    45,    46,    47,
      48,    49,    50,    52,    42,    43,    44,    51,    31,    31,
      51,    51,    51,    37,    41,    51,    17,    19,    21,    45,
      22,    24,    47,    47,    30,    26,    32,    28,    28,    32,
      12,    11,    51,    51,    51,    28,    46,     3,     4,    53,
      43,     4,    37,    28,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 58 "gql.y"
    {
                                    Node *prog = create_node(NODE_PROGRAM, NULL, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                                    print_ast(prog, 0);
                                    free_ast(prog);
                                ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 66 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_DECLARATION, NULL, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                                ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 71 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_QUERY, (yyvsp[(2) - (5)].str), 1, (yyvsp[(4) - (5)].node));
                                                    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_QUERY, (yyvsp[(2) - (5)].str), 1, (yyvsp[(4) - (5)].node));
                                                    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_RESULT, (yyvsp[(2) - (3)].str), 0);
                                                    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 85 "gql.y"
    {
                            (yyval.node) = create_node(NODE_SEQUENCE, NULL, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 90 "gql.y"
    {
                                                (yyval.node) = create_node(NODE_EXEC, (yyvsp[(2) - (3)].str), 0);
                                            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 93 "gql.y"
    {
                                                (yyval.node) = (yyvsp[(1) - (2)].node);
                                            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 96 "gql.y"
    {
                                                (yyval.node) = create_node(NODE_IF, NULL, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
                                            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 99 "gql.y"
    {
                                                (yyval.node) = create_node(NODE_FOR, (yyvsp[(2) - (7)].str), 2, (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node));
                                            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 104 "gql.y"
    {
                                                        Node *exec = create_node(NODE_EXEC, (yyvsp[(4) - (4)].str), 0);
                                                        (yyval.node) = create_node(NODE_ASSIGN, (yyvsp[(1) - (4)].str), 1, exec);
                                                        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 108 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_SET_OP, "++", 3,
                                                            create_node(NODE_TERM, (yyvsp[(1) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(3) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(5) - (5)].str), 0));
                                                        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 114 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_SET_OP, "--", 3,
                                                            create_node(NODE_TERM, (yyvsp[(1) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(3) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(5) - (5)].str), 0));
                                                        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 120 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_SET_OP, "**", 3,
                                                            create_node(NODE_TERM, (yyvsp[(1) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(3) - (5)].str), 0),
                                                            create_node(NODE_TERM, (yyvsp[(5) - (5)].str), 0));
                                                        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 128 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_COND_EMPTY, (yyvsp[(3) - (4)].str), 0);
                                                    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 131 "gql.y"
    {
                                                        (yyval.node) = create_node(NODE_COND_NOT_EMPTY, (yyvsp[(3) - (4)].str), 0);
                                                    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 134 "gql.y"
    {
                                                Node *arg1 = create_node(NODE_TERM, (yyvsp[(3) - (6)].str), 0);
                                                Node *arg2 = create_node(NODE_TERM, (yyvsp[(5) - (6)].str), 0);
                                                (yyval.node) = create_node(NODE_COND_URL_EXISTS, NULL, 2, arg1, arg2);
                                            ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 141 "gql.y"
    {
                                                        (yyval.node) = (yyvsp[(2) - (3)].node);
                                                    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 146 "gql.y"
    {
                                            (yyval.node) = (yyvsp[(1) - (1)].node);
                                        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 149 "gql.y"
    {
                                            (yyval.node) = create_node(NODE_LIST, NULL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                                        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 154 "gql.y"
    {
                                            (yyval.node) = (yyvsp[(1) - (1)].node);
                                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 157 "gql.y"
    {
                                            (yyval.node) = create_node(NODE_QUERY_REF, (yyvsp[(1) - (1)].str), 0);
                                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 162 "gql.y"
    {
                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 168 "gql.y"
    {
                                            (yyval.node) = create_node(NODE_PIPE, NULL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                                                    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 174 "gql.y"
    {
                                        (yyval.node) = create_node(NODE_JUXTAPOSITION, NULL, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                                            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 181 "gql.y"
    {
                                        (yyval.node) = create_node((yyvsp[(1) - (2)].node)->type, NULL, 1, (yyvsp[(2) - (2)].node));
                                        free((yyvsp[(1) - (2)].node));
                                    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 187 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_TERM, (yyvsp[(1) - (1)].str), 0);
                                ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 190 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_TERM, (yyvsp[(1) - (1)].str), 0);
                                ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 193 "gql.y"
    {
                                    (yyval.node) = (yyvsp[(1) - (1)].node);
                                ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 196 "gql.y"
    {

                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 202 "gql.y"
    {
                                    size_t len = strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(3) - (3)].str)) + 2;
                                    char* combined = malloc(len);
                                    snprintf(combined, len, "%s:%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
                                    (yyval.node) = create_node(NODE_DIRECTIVE, combined, 0);
                                    free(combined);
                                ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 211 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_PLUS, NULL, 0);
                                ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 214 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_MINUS, NULL, 0);
                                ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 217 "gql.y"
    {
                                    (yyval.node) = create_node(NODE_STAR, NULL, 0);
                                ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 222 "gql.y"
    {
                                    (yyval.str) = (yyvsp[(1) - (1)].str);
                                ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 227 "gql.y"
    {
                                    (yyval.str) = (yyvsp[(1) - (1)].str);
                                ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 232 "gql.y"
    {
                                    (yyval.str) = (yyvsp[(1) - (1)].str);
                                ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 235 "gql.y"
    {
                                    (yyval.str) = (yyvsp[(1) - (1)].str);
                                ;}
    break;



/* Line 1455 of yacc.c  */
#line 1835 "gql.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 240 "gql.y"


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

const char* get_node_type_name(NodeType type) {
    switch (type) {
        case NODE_PROGRAM: return "PROGRAM";
        case NODE_DECLARATION: return "DECLARATION_SEQUENCE";
        case NODE_QUERY: return "QUERY_DECLARATION";
        case NODE_QUERY_REF: return "QUERY_REFERENCE";
        case NODE_RESULT: return "RESULT_OF_QUERY_DECLARATION";
        case NODE_EXEC: return "EXEC_COMMAND";
        case NODE_ASSIGN: return "ASSIGN_COMMAND";
        case NODE_IF: return "IF_COMMAND";
        case NODE_FOR: return "FOR_COMMAND";
        case NODE_COND_EMPTY: return "CONDITION_EMPTY";
        case NODE_COND_NOT_EMPTY: return "CONDITION_NOT_EMPTY";
        case NODE_COND_URL_EXISTS: return "CONDITION_URL_EXISTS";
        case NODE_LIST: return "QUERY_LIST";
        case NODE_TERM: return "TERM";
        case NODE_DIRECTIVE: return "DIRECTIVE";
        case NODE_PLUS: return "PLUS";
        case NODE_MINUS: return "MINUS";
        case NODE_STAR: return "STAR";
        case NODE_PIPE: return "OR";
        case NODE_JUXTAPOSITION: return "JUXTAPOSITION";
        case NODE_SET_OP: return "SET_OPERATION";
        case NODE_SEQUENCE: return "BODY";
        default: return "UNKNOWN_NODE";
    }
}

void print_ast(Node *n, int indent) {
    if (!n) return;
    int i = 0;
    for (i = 0; i < indent; i++) {
        printf("|  "); 
    }

    printf("|->%s", get_node_type_name(n->type));

    if (n->value) {
        if (n->type == NODE_TERM && (strchr(n->value, ' ') || strchr(n->value, ':'))) {
            printf(" (\"%s\")", n->value);
        } else {
            printf(" (%s)", n->value);
        }
    }

    printf("\n");

    for (i = 0; i < n->child_count; i++) {
        print_ast(n->children[i], indent + 1);
    }
}

void free_ast(Node *n) {
    if (!n) return;

    int i = 0;
    for (i = 0; i < n->child_count; i++) {
        free_ast(n->children[i]);
    }

    if (n->children) {
        free(n->children);
    }

    if (n->value) {
        free(n->value);
    }

    free(n);
}

void yyerror(const char *msg) {
    fprintf(stderr, "\033[31mError: %s at line %d, near '%s'\033[0m\n", msg, yylineno, yytext);
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

