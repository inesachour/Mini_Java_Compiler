
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
#line 1 "SyntaxicAnalyzer.y"

	

#include <stdio.h>	
#include "Semantic.c"

extern char *yytext;
char nom[256];

int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;



/* Line 189 of yacc.c  */
#line 89 "SyntaxicAnalyzer.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     parenthese_ouvrante = 258,
     parenthese_fermante = 259,
     accolade_ouvrante = 260,
     accolade_fermante = 261,
     crochet_ouvrant = 262,
     crochet_fermant = 263,
     point_virgule = 264,
     virgule = 265,
     point = 266,
     VISIBILITE_PUBLIC = 267,
     VISIBILITE_PROTECTED = 268,
     VISIBILITE_PRIVATE = 269,
     IF_KEYWORD = 270,
     ELSE_KEYWORD = 271,
     WHILE_KEYWORD = 272,
     NEW_KEYWORD = 273,
     THIS_KEYWORD = 274,
     MAIN_KEYWORD = 275,
     RETURN_KEYWORD = 276,
     CLASS_KEYWORD = 277,
     EXTENDS_KEYWORD = 278,
     STATIC_KEYWORD = 279,
     LENGTH_KEYWORD = 280,
     AFFICHAGE = 281,
     TYPE_INT = 282,
     TYPE_BOOLEAN = 283,
     TYPE_STRING = 284,
     TYPE_VOID = 285,
     Integer = 286,
     IntegerNeg = 287,
     Boolean = 288,
     String = 289,
     OP_AND = 290,
     OP_OR = 291,
     OP_PLUS = 292,
     OP_MOINS = 293,
     OP_MULTIPLICATION = 294,
     OPP_AFFECT = 295,
     OPP_NEG = 296,
     OP_SUP = 297,
     OP_SUP_EG = 298,
     OP_INF = 299,
     OP_INF_EG = 300,
     OP_EG = 301,
     OP_DIFF = 302,
     Identifier = 303,
     COMMENT_LINE = 304,
     COMMENT_MULTI_LINE = 305,
     EndOfFile = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 182 "SyntaxicAnalyzer.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    11,    12,    13,    14,
      38,    41,    42,    45,    46,    49,    50,    51,    60,    61,
      66,    70,    74,    78,    79,    85,    86,    87,    92,    93,
      94,    95,    96,   113,   117,   119,   121,   123,   126,   127,
     131,   139,   145,   151,   152,   153,   154,   155,   164,   165,
     166,   167,   178,   180,   182,   184,   186,   188,   192,   195,
     200,   201,   206,   207,   208,   217,   218,   221,   222,   225,
     226,   229,   230,   231,   232,   233,   239,   240,   243,   249,
     254,   255,   259,   263,   267,   268,   271,   272
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    55,    54,    -1,    63,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    22,   101,    56,     5,    60,    12,
      24,    30,    20,    57,     3,    29,     7,     8,   101,    58,
       4,     5,    60,    76,     6,    59,     6,    -1,    65,    60,
      -1,    -1,    71,    61,    -1,    -1,    23,   101,    -1,    -1,
      -1,    22,   101,    64,    62,     5,    60,    61,     6,    -1,
      -1,    75,   101,    66,     9,    -1,     1,   101,     9,    -1,
      75,     1,     9,    -1,    75,   101,     1,    -1,    -1,    10,
      75,   101,    68,    67,    -1,    -1,    -1,    75,   101,    70,
      67,    -1,    -1,    -1,    -1,    -1,    12,    75,   101,    72,
       3,    73,    69,    74,     4,     5,    60,    76,    21,    86,
       9,     6,    -1,    27,     7,     8,    -1,    28,    -1,    27,
      -1,    29,    -1,    77,    76,    -1,    -1,     5,    76,     6,
      -1,    15,     3,    86,     4,    77,    16,    77,    -1,    17,
       3,    86,     4,    77,    -1,    26,     3,    86,     4,     9,
      -1,    -1,    -1,    -1,    -1,   101,    78,    79,    40,    80,
      86,    81,     9,    -1,    -1,    -1,    -1,   101,     7,    86,
       8,    82,    83,    84,    40,    86,     9,    -1,    35,    -1,
      44,    -1,    37,    -1,    38,    -1,    39,    -1,    86,    85,
      86,    -1,    86,    32,    -1,    86,     7,    86,     8,    -1,
      -1,    86,    11,    25,    87,    -1,    -1,    -1,    86,    11,
     101,    88,    89,     3,   100,     4,    -1,    -1,    31,    90,
      -1,    -1,    33,    91,    -1,    -1,    34,    92,    -1,    -1,
      -1,    -1,    -1,   101,    93,    94,    95,    96,    -1,    -1,
      19,    97,    -1,    18,    27,     7,    86,     8,    -1,    18,
     101,     3,     4,    -1,    -1,    41,    86,    98,    -1,     3,
      86,     4,    -1,    10,    86,    99,    -1,    -1,    86,    99,
      -1,    -1,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    74,    74,    76,    76,    76,    76,    76,
      78,    78,    80,    80,    82,    82,    84,    84,    86,    86,
      87,    88,    89,    91,    91,    91,    93,    93,    93,    95,
      95,    95,    95,    97,    98,    99,   100,   103,   103,   105,
     106,   107,   108,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   112,   112,   112,   112,   112,   114,   115,   116,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   123,   123,   124,   125,
     126,   126,   127,   129,   129,   131,   131,   133
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "parenthese_ouvrante",
  "parenthese_fermante", "accolade_ouvrante", "accolade_fermante",
  "crochet_ouvrant", "crochet_fermant", "point_virgule", "virgule",
  "point", "VISIBILITE_PUBLIC", "VISIBILITE_PROTECTED",
  "VISIBILITE_PRIVATE", "IF_KEYWORD", "ELSE_KEYWORD", "WHILE_KEYWORD",
  "NEW_KEYWORD", "THIS_KEYWORD", "MAIN_KEYWORD", "RETURN_KEYWORD",
  "CLASS_KEYWORD", "EXTENDS_KEYWORD", "STATIC_KEYWORD", "LENGTH_KEYWORD",
  "AFFICHAGE", "TYPE_INT", "TYPE_BOOLEAN", "TYPE_STRING", "TYPE_VOID",
  "Integer", "IntegerNeg", "Boolean", "String", "OP_AND", "OP_OR",
  "OP_PLUS", "OP_MOINS", "OP_MULTIPLICATION", "OPP_AFFECT", "OPP_NEG",
  "OP_SUP", "OP_SUP_EG", "OP_INF", "OP_INF_EG", "OP_EG", "OP_DIFF",
  "Identifier", "COMMENT_LINE", "COMMENT_MULTI_LINE", "EndOfFile",
  "$accept", "Program", "classdec", "MainClass", "$@1", "$@2", "$@3",
  "$@4", "vardec", "methoddec", "extend_key_id", "ClassDeclaration", "$@5",
  "VarDeclaration", "$@6", "virgule_type_ID", "$@7", "type_ID", "$@8",
  "MethodDeclaration", "$@9", "$@10", "$@11", "Type", "stat", "Statement",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "op",
  "Expression", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25",
  "$@26", "$@27", "$@28", "$@29", "$@30", "virgule_expression", "expr",
  "ID", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    56,    57,    58,    59,    55,
      60,    60,    61,    61,    62,    62,    64,    63,    66,    65,
      65,    65,    65,    68,    67,    67,    70,    69,    69,    72,
      73,    74,    71,    75,    75,    75,    75,    76,    76,    77,
      77,    77,    77,    78,    79,    80,    81,    77,    82,    83,
      84,    77,    85,    85,    85,    85,    85,    86,    86,    86,
      87,    86,    88,    89,    86,    90,    86,    91,    86,    92,
      86,    93,    94,    95,    96,    86,    97,    86,    86,    86,
      98,    86,    86,    99,    99,   100,   100,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     0,     0,     0,    23,
       2,     0,     2,     0,     2,     0,     0,     8,     0,     4,
       3,     3,     3,     0,     5,     0,     0,     4,     0,     0,
       0,     0,    16,     3,     1,     1,     1,     2,     0,     3,
       7,     5,     5,     0,     0,     0,     0,     8,     0,     0,
       0,    10,     1,     1,     1,     1,     1,     3,     2,     4,
       0,     4,     0,     0,     8,     0,     2,     0,     2,     0,
       2,     0,     0,     0,     0,     5,     0,     2,     5,     4,
       0,     3,     3,     3,     0,     2,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,    87,     5,     1,     0,     2,     4,
       0,    16,     3,     0,    15,     0,    35,    34,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
      14,     0,    20,    33,     0,    21,    22,     0,    13,     0,
      19,     0,     0,    13,     6,     0,    17,    12,     0,    29,
       0,     0,     0,    30,     0,    28,     0,    31,     0,     7,
       0,    26,     0,     0,    25,     0,     0,     0,    27,     0,
      38,     0,    38,    38,     0,     0,     0,     0,    38,    43,
      23,     0,     0,     0,     0,     0,     0,    37,     0,    44,
      25,     8,    39,     0,     0,    76,    65,    67,    69,     0,
       0,    71,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,    77,    66,    68,    70,    80,     0,     0,     0,
      58,    52,    54,    55,    56,    53,     0,    72,     0,     0,
       0,    48,    45,     9,    82,     0,     0,    81,     0,     0,
      60,    62,    57,    73,    41,    42,    32,    49,     0,     0,
      79,     0,    59,    61,    63,    74,    50,    46,    78,    40,
       0,    75,     0,     0,    86,     0,    47,    84,     0,     0,
       0,    85,    64,    51,    84,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     3,    10,    48,    62,   108,    19,    42,
      23,     9,    14,    20,    37,    68,    90,    57,    64,    43,
      51,    55,    60,    21,    77,    78,    89,   106,   148,   163,
     147,   156,   162,   126,   100,   153,   154,   160,   113,   114,
     115,   127,   143,   155,   161,   112,   137,   171,   168,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -110
static const yytype_int16 yypact[] =
{
     -10,   -22,    28,    10,  -110,  -110,  -110,   -22,  -110,    10,
      29,  -110,  -110,    46,    13,   -22,    39,  -110,  -110,    36,
      12,     6,   -22,    44,    42,    48,    35,  -110,    54,    22,
    -110,   308,  -110,  -110,    49,  -110,  -110,    57,    64,    66,
    -110,    73,    77,    64,  -110,   -22,  -110,  -110,    85,  -110,
      67,   100,    97,  -110,    99,    73,   -22,  -110,   -22,  -110,
     101,  -110,   108,   109,   103,   110,    63,    73,  -110,    93,
      80,   -22,    80,    80,   114,   120,   123,   112,    80,   124,
    -110,   128,   129,   106,   106,   106,   106,  -110,   106,  -110,
     103,  -110,  -110,   106,   -18,  -110,  -110,  -110,  -110,   106,
     125,  -110,   138,   148,   195,   203,    90,  -110,   132,   161,
     136,   141,  -110,  -110,  -110,  -110,   295,    80,   106,    -3,
    -110,  -110,  -110,  -110,  -110,  -110,   106,  -110,    80,   137,
     142,  -110,  -110,  -110,  -110,   106,   147,  -110,   140,   211,
    -110,  -110,   295,  -110,  -110,  -110,  -110,  -110,   106,   245,
    -110,    80,  -110,  -110,  -110,  -110,  -110,   295,  -110,  -110,
     150,  -110,   118,   152,   106,   106,  -110,   253,   162,   261,
     106,  -110,  -110,  -110,   253,  -110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,   158,  -110,  -110,  -110,  -110,  -110,   -16,   131,
    -110,  -110,  -110,  -110,  -110,    81,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,   -30,   -11,  -109,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,   -83,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,     4,  -110,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -19
static const yytype_int16 yytable[] =
{
       5,   102,   103,   104,    27,   105,    11,    28,   138,   110,
     109,    45,     1,    15,    24,    38,   116,   -11,   -11,   144,
      29,    30,   140,    36,   -11,    58,     4,   -11,     6,   -11,
       4,   -18,     7,   -11,    13,   139,    22,    71,   -11,    16,
      17,    18,   159,   142,    49,     4,    25,    15,    26,    31,
      70,    32,   149,    72,     4,    59,    33,    61,   -11,    34,
     -11,    81,    82,    35,    15,   157,    40,    87,   -11,    79,
      80,    79,    79,    16,    17,    18,    41,    79,   -11,    39,
     -11,   167,   169,    46,   -11,    73,    44,   174,    50,   -11,
      16,    17,    18,   111,    15,    74,    52,    75,   -11,   -11,
      16,    17,    18,    53,    54,    63,    76,    56,   -11,    93,
     -11,   -11,    65,    67,    66,    69,    79,    83,   141,   -11,
      16,    17,    18,    84,    94,    95,    85,    79,     4,   117,
     132,    88,   118,    86,    91,    92,   119,    96,   133,    97,
      98,   -11,   128,   135,   136,   118,   145,    99,   146,   119,
      79,   150,   129,   164,     4,   118,   151,   120,   165,   119,
     121,   166,   122,   123,   124,   134,   172,    12,   118,   125,
     120,   107,   119,   121,    47,   122,   123,   124,   175,     0,
     120,     0,   125,   121,     0,   122,   123,   124,     0,     0,
       0,     0,   125,   120,     0,     0,   121,     0,   122,   123,
     124,     0,   118,     0,   130,   125,   119,     0,     0,     0,
     118,   131,     0,     0,   119,     0,     0,     0,   118,   152,
       0,     0,   119,     0,     0,     0,     0,   120,     0,     0,
     121,     0,   122,   123,   124,   120,     0,     0,   121,   125,
     122,   123,   124,   120,     0,     0,   121,   125,   122,   123,
     124,     0,   118,   158,     0,   125,   119,     0,     0,     0,
     118,     0,     0,   170,   119,     0,     0,     0,   118,     0,
     173,     0,   119,     0,     0,     0,     0,   120,     0,     0,
     121,     0,   122,   123,   124,   120,     0,     0,   121,   125,
     122,   123,   124,   120,     0,     0,   121,   125,   122,   123,
     124,     0,   118,     0,     0,   125,   119,     0,     0,    15,
       0,     0,     0,     0,   -11,     0,     0,     0,     0,     0,
     -11,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     121,     0,   122,   123,   124,    16,    17,    18,     0,   125
};

static const yytype_int16 yycheck[] =
{
       1,    84,    85,    86,    20,    88,     7,     1,   117,    27,
      93,    41,    22,     1,    15,    31,    99,     5,     6,   128,
      21,    22,    25,     1,    12,    55,    48,    15,     0,    17,
      48,     9,    22,    21,     5,   118,    23,    67,    26,    27,
      28,    29,   151,   126,    45,    48,     7,     1,    12,     5,
      66,     9,   135,    69,    48,    56,     8,    58,    12,    24,
      48,    72,    73,     9,     1,   148,     9,    78,     5,    70,
      71,    72,    73,    27,    28,    29,    12,    78,    15,    30,
      17,   164,   165,     6,    21,     5,    20,   170,     3,    26,
      27,    28,    29,    94,     1,    15,    29,    17,     5,     6,
      27,    28,    29,     3,     7,     4,    26,     8,    15,     3,
      17,    48,     4,    10,     5,     5,   117,     3,   119,    26,
      27,    28,    29,     3,    18,    19,     3,   128,    48,     4,
      40,     7,     7,    21,     6,     6,    11,    31,     6,    33,
      34,    48,     4,     7,     3,     7,     9,    41,     6,    11,
     151,     4,     4,     3,    48,     7,    16,    32,    40,    11,
      35,     9,    37,    38,    39,     4,     4,     9,     7,    44,
      32,    90,    11,    35,    43,    37,    38,    39,   174,    -1,
      32,    -1,    44,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,    32,    -1,    -1,    35,    -1,    37,    38,
      39,    -1,     7,    -1,     9,    44,    11,    -1,    -1,    -1,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    37,    38,    39,    32,    -1,    -1,    35,    44,
      37,    38,    39,    32,    -1,    -1,    35,    44,    37,    38,
      39,    -1,     7,     8,    -1,    44,    11,    -1,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    37,    38,    39,    32,    -1,    -1,    35,    44,
      37,    38,    39,    32,    -1,    -1,    35,    44,    37,    38,
      39,    -1,     7,    -1,    -1,    44,    11,    -1,    -1,     1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    37,    38,    39,    27,    28,    29,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    53,    55,    48,   101,     0,    22,    54,    63,
      56,   101,    54,     5,    64,     1,    27,    28,    29,    60,
      65,    75,    23,    62,   101,     7,    12,    60,     1,   101,
     101,     5,     9,     8,    24,     9,     1,    66,    60,    30,
       9,    12,    61,    71,    20,    75,     6,    61,    57,   101,
       3,    72,    29,     3,     7,    73,     8,    69,    75,   101,
      74,   101,    58,     4,    70,     4,     5,    10,    67,     5,
      60,    75,    60,     5,    15,    17,    26,    76,    77,   101,
     101,    76,    76,     3,     3,     3,    21,    76,     7,    78,
      68,     6,     6,     3,    18,    19,    31,    33,    34,    41,
      86,   101,    86,    86,    86,    86,    79,    67,    59,    86,
      27,   101,    97,    90,    91,    92,    86,     4,     7,    11,
      32,    35,    37,    38,    39,    44,    85,    93,     4,     4,
       9,     8,    40,     6,     4,     7,     3,    98,    77,    86,
      25,   101,    86,    94,    77,     9,     6,    82,    80,    86,
       4,    16,     8,    87,    88,    95,    83,    86,     8,    77,
      89,    96,    84,    81,     3,    40,     9,    86,   100,    86,
      10,    99,     4,     9,    86,    99
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
        case 5:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, tOther ,class, yylineno);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyzer.y"
    { checkIdentifier("main", tVoid, fonction, yylineno); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, tString, parametre, yylineno);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyzer.y"
    {fonctionEnd();;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyzer.y"
    {classEnd();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 84 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, tOther ,class, yylineno);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 84 "SyntaxicAnalyzer.y"
    {classEnd();;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, type ,variable , yylineno);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 87 "SyntaxicAnalyzer.y"
    {yyerror (" Error : Type attendu en ligne : "); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyzer.y"
    {yyerror (" Error : Identifier attendu en ligne : "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 89 "SyntaxicAnalyzer.y"
    {yyerror (" Error : Point virgule attendu en ligne : "); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 91 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, type ,variable , yylineno);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 93 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, type ,variable , yylineno);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyzer.y"
    {checkIdentifier(nom, type , fonction, yylineno);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyzer.y"
    {inParam();;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyzer.y"
    {outParam();;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyzer.y"
    {fonctionEnd();;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxicAnalyzer.y"
    {type=tInt;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyzer.y"
    {type=tBoolean;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 99 "SyntaxicAnalyzer.y"
    {type=tInt;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyzer.y"
    {type=tString;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyzer.y"
    {verifierVarDeclared(nom, yylineno);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyzer.y"
    {useVar(nom);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyzer.y"
    {initVar(nom, yylineno);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyzer.y"
    {verifierTypeAffectation(nom, typeAffect, yylineno);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyzer.y"
    {verifierVarDeclared(nom, yylineno);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyzer.y"
    {initVar(nom, yylineno);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyzer.y"
    {useVar(nom);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 115 "SyntaxicAnalyzer.y"
    {typeAffect = tInt;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tInt, NULL, yylineno);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyzer.y"
    {typeAffect = tInt;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyzer.y"
    {fonctionCallStart(nom, type, yylineno);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyzer.y"
    {typeAffect = type;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyzer.y"
    {verifierFonctionArguments(yylineno);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tInt, NULL, yylineno);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyzer.y"
    {typeAffect = tInt;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tBoolean, NULL, yylineno);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyzer.y"
    {typeAffect = tBoolean;;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tString, NULL, yylineno);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyzer.y"
    {typeAffect = tString;;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyzer.y"
    {(verifierVarDeclared(nom, yylineno));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyzer.y"
    {verifierVarInitialise(nom, yylineno);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyzer.y"
    {useVar(nom);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tInt, nom, yylineno);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyzer.y"
    {typeAffect = type;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tOther, NULL, yylineno);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyzer.y"
    {typeAffect = tOther;;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tOther, NULL, yylineno);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyzer.y"
    {fonctionCallParameter(tBoolean, NULL, yylineno);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyzer.y"
    {typeAffect = tBoolean;;}
    break;



/* Line 1455 of yacc.c  */
#line 1921 "SyntaxicAnalyzer.tab.c"
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
#line 137 "SyntaxicAnalyzer.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	exit(0);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
	table_global = NULL;
	table_local = NULL;
	table_total = NULL;
	actual_local = NULL;
	actual_global = NULL;
	type = tOther;
	isLocal =0;
	yyparse();
	printf("\n");
	endProgram();
	printf("\n");
	DisplaySymbolsTable(table_global);
	printf("\n");
	DisplaySymbolsTable(table_local);
	destructSymbolsTable(table_local);
	destructSymbolsTable(table_global);
 
}

  
                   
char *yyget_text(char *start) {
    size_t size =  1;
    char *text = malloc(size + 1);
    strncpy(text, start, size);
    text[size] = '\0';
    return text;
}
