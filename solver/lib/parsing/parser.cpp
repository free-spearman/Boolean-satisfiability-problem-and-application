/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parsing/parser.y"

#include <string>
#include <sstream>
#include <stack>
#include <assert.h>

#include "parsing_context.h"

void yyerror (const char *);
int yylex();
  extern FILE *yyin;

using namespace parsing_context;

#line 86 "parsing/parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_N_IDENTIFIER = 3,               /* "identifier"  */
  YYSYMBOL_N_INTEGER = 4,                  /* "integer number"  */
  YYSYMBOL_N_RATIONAL = 5,                 /* "rational number"  */
  YYSYMBOL_N_BOOLEAN = 6,                  /* "boolean"  */
  YYSYMBOL_N_UNSIGNED = 7,                 /* "unsigned"  */
  YYSYMBOL_N_SIGNED = 8,                   /* "signed"  */
  YYSYMBOL_N_REAL = 9,                     /* "real"  */
  YYSYMBOL_N_INT = 10,                     /* "int"  */
  YYSYMBOL_N_BV = 11,                      /* "bv"  */
  YYSYMBOL_N_AXIOM = 12,                   /* "axiom"  */
  YYSYMBOL_N_FORMULA = 13,                 /* "formula"  */
  YYSYMBOL_N_REGRESSION = 14,              /* "regression"  */
  YYSYMBOL_N_THEOREM = 15,                 /* "theorem"  */
  YYSYMBOL_N_DECLARATION = 16,             /* "declaration"  */
  YYSYMBOL_N_FORMULA_DEFINITION = 17,      /* "formula definition"  */
  YYSYMBOL_N_TERM_DEFINITION = 18,         /* "term definition"  */
  YYSYMBOL_N_CONJUNCTION = 19,             /* "&"  */
  YYSYMBOL_N_DISJUNCTION = 20,             /* "|"  */
  YYSYMBOL_N_NEGATION = 21,                /* "!"  */
  YYSYMBOL_N_BIIMPLICATION = 22,           /* "<=>"  */
  YYSYMBOL_N_IMPLICATION = 23,             /* "=>"  */
  YYSYMBOL_N_TRUE = 24,                    /* "true"  */
  YYSYMBOL_N_FALSE = 25,                   /* "false"  */
  YYSYMBOL_N_ADDITION = 26,                /* "+"  */
  YYSYMBOL_N_SUBTRACTION = 27,             /* "-"  */
  YYSYMBOL_N_MULTIPLICATION = 28,          /* "*"  */
  YYSYMBOL_N_DIVISION = 29,                /* "/"  */
  YYSYMBOL_N_MODULO = 30,                  /* "%"  */
  YYSYMBOL_N_UMINUS = 31,                  /* "U-"  */
  YYSYMBOL_N_LOWER = 32,                   /* "<"  */
  YYSYMBOL_N_GREATER = 33,                 /* ">"  */
  YYSYMBOL_N_LOWEREQUAL = 34,              /* "<="  */
  YYSYMBOL_N_GREATEREQUAL = 35,            /* ">="  */
  YYSYMBOL_N_EQUAL = 36,                   /* "="  */
  YYSYMBOL_N_NOTEQUAL = 37,                /* "!="  */
  YYSYMBOL_N_IF = 38,                      /* "IF"  */
  YYSYMBOL_N_THEN = 39,                    /* "THEN"  */
  YYSYMBOL_N_ELSE = 40,                    /* "ELSE"  */
  YYSYMBOL_N_ENDIF = 41,                   /* "ENDIF"  */
  YYSYMBOL_N_FORALL = 42,                  /* "forall"  */
  YYSYMBOL_N_EXISTS = 43,                  /* "exists"  */
  YYSYMBOL_N_LIST = 44,                    /* "list"  */
  YYSYMBOL_N_PREDICATE = 45,               /* "predicate"  */
  YYSYMBOL_N_FUNCTION = 46,                /* "function"  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_all = 55,                       /* all  */
  YYSYMBOL_declarations = 56,              /* declarations  */
  YYSYMBOL_identifier = 57,                /* identifier  */
  YYSYMBOL_identifiers = 58,               /* identifiers  */
  YYSYMBOL_declaration = 59,               /* declaration  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_formula = 61,                   /* formula  */
  YYSYMBOL_terms = 62,                     /* terms  */
  YYSYMBOL_term = 63                       /* term  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    94,    94,    95,    99,   100,   104,   104,   108,   109,
     114,   118,   123,   128,   130,   132,   134,   136,   138,   140,
     142,   144,   149,   151,   153,   155,   157,   159,   161,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   184,   186,
     188,   190,   192,   194,   196,   198,   200,   203,   204,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   227,   228,
     229
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"identifier\"",
  "\"integer number\"", "\"rational number\"", "\"boolean\"",
  "\"unsigned\"", "\"signed\"", "\"real\"", "\"int\"", "\"bv\"",
  "\"axiom\"", "\"formula\"", "\"regression\"", "\"theorem\"",
  "\"declaration\"", "\"formula definition\"", "\"term definition\"",
  "\"&\"", "\"|\"", "\"!\"", "\"<=>\"", "\"=>\"", "\"true\"", "\"false\"",
  "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"%\"", "\"U-\"", "\"<\"", "\">\"",
  "\"<=\"", "\">=\"", "\"=\"", "\"!=\"", "\"IF\"", "\"THEN\"", "\"ELSE\"",
  "\"ENDIF\"", "\"forall\"", "\"exists\"", "\"list\"", "\"predicate\"",
  "\"function\"", "';'", "','", "':'", "'['", "']'", "'('", "')'",
  "$accept", "all", "declarations", "identifier", "identifiers",
  "declaration", "type", "formula", "terms", "term", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-43)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,   -24,   -43,   -43,    96,    96,    96,    96,    96,   -43,
     -43,    80,    96,     2,     2,   -12,    96,     9,   -40,   -43,
      25,   -43,   141,   157,    80,   -17,   -11,   141,   141,   141,
     141,   -43,    80,   -43,    -6,   -43,   -43,    41,    47,    80,
       7,   117,   -43,    67,     2,   165,    96,    96,    96,    96,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,   -42,    38,   129,    80,    96,    96,   -14,   -43,   -43,
     -43,   -43,   -43,   -43,    -2,    19,   -43,   -43,    43,    96,
      96,    96,    96,    10,   -43,    78,    95,    95,    74,    74,
     -43,   -43,   -43,    38,    38,    38,    38,    38,    38,    80,
     -43,    -8,   141,   141,   -43,   102,   112,   118,   141,   141,
     141,   141,    96,    38,    80,    79,    82,    84,   141,   157,
      99,   -43,   -43,   -43,   -43
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    60,    58,    59,     0,     0,     0,     0,     0,    36,
      37,     0,     0,     0,     0,    46,     0,     0,     2,     8,
       0,     4,    15,     0,     0,    60,    46,    17,    19,    21,
      14,    35,     0,    55,     0,     6,     7,     0,     0,     0,
       0,     0,     1,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,    38,    54,
       5,     9,    22,    23,     0,     0,    26,    25,     0,     0,
       0,     0,     0,    10,    34,    33,    32,    31,    49,    50,
      51,    52,    53,    39,    40,    41,    42,    43,    44,     0,
      56,     0,    29,    30,    45,     0,     0,     0,    16,    18,
      20,    13,     0,    48,     0,     0,     0,     0,    11,    12,
       0,    28,    27,    24,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -43,    87,    73,    81,   -43,    -4,    97,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,    18,    19,    20,    21,    83,    22,    61,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      27,    28,    29,    30,    31,    35,    99,    43,    34,    42,
      33,   100,    40,    46,    47,    41,    48,    49,    50,    51,
      52,    53,    54,    62,    -6,    -6,    46,    47,    24,    48,
      49,    63,   114,    64,    99,    24,    -7,    -7,    62,   104,
      39,    39,    84,    85,    86,    87,   112,    36,   105,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      68,   102,   103,   101,    50,    51,    52,    53,    54,   106,
       1,     2,     3,    44,    45,   108,   109,   110,   111,     4,
       5,     6,     7,    25,     2,     3,    37,    38,     8,    44,
      65,     9,    10,   107,    11,    44,    66,    46,   113,    25,
       2,     3,    52,    53,    54,    12,   115,    11,   118,    13,
      14,   119,    15,   120,    46,    47,   116,     8,    12,    16,
       9,    10,   117,    11,    70,    50,    51,    52,    53,    54,
     121,    71,    32,   122,    12,   123,    67,     0,    13,    14,
     124,    26,     0,    50,    51,    52,    53,    54,    16,    55,
      56,    57,    58,    59,    60,    50,    51,    52,    53,    54,
      46,    47,     0,    48,    49,     0,     0,     0,    72,     0,
      69,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,     0,    69,    50,    51,    52,    53,    54,     0,    55,
      56,    57,    58,    59,    60
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,     7,     8,     3,    48,    47,    12,     0,
      11,    53,    16,    19,    20,    16,    22,    23,    26,    27,
      28,    29,    30,    24,    48,    49,    19,    20,    52,    22,
      23,    32,    40,    39,    48,    52,    48,    49,    39,    53,
      52,    52,    46,    47,    48,    49,    36,    45,    50,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      53,    65,    66,    64,    26,    27,    28,    29,    30,    50,
       3,     4,     5,    48,    49,    79,    80,    81,    82,    12,
      13,    14,    15,     3,     4,     5,    13,    14,    21,    48,
      49,    24,    25,    50,    27,    48,    49,    19,    99,     3,
       4,     5,    28,    29,    30,    38,     4,    27,   112,    42,
      43,   112,    45,   114,    19,    20,     4,    21,    38,    52,
      24,    25,     4,    27,    43,    26,    27,    28,    29,    30,
      51,    44,    52,    51,    38,    51,    39,    -1,    42,    43,
      41,    45,    -1,    26,    27,    28,    29,    30,    52,    32,
      33,    34,    35,    36,    37,    26,    27,    28,    29,    30,
      19,    20,    -1,    22,    23,    -1,    -1,    -1,     3,    -1,
      53,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    53,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    12,    13,    14,    15,    21,    24,
      25,    27,    38,    42,    43,    45,    52,    55,    56,    57,
      58,    59,    61,    63,    52,     3,    45,    61,    61,    61,
      61,    61,    52,    63,    61,     3,    45,    58,    58,    52,
      61,    63,     0,    47,    48,    49,    19,    20,    22,    23,
      26,    27,    28,    29,    30,    32,    33,    34,    35,    36,
      37,    62,    63,    63,    39,    49,    49,    62,    53,    53,
      59,    57,     3,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    60,    61,    61,    61,    61,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    48,
      53,    63,    61,    61,    53,    50,    50,    50,    61,    61,
      61,    61,    36,    63,    40,     4,     4,     4,    61,    63,
      63,    51,    51,    51,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     3,
       3,     5,     5,     4,     2,     1,     4,     2,     4,     2,
       4,     2,     1,     1,     4,     1,     1,     4,     4,     4,
       4,     3,     3,     3,     3,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     4,     7,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= END)
    {
      yychar = END;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* declarations: declarations ';' declaration  */
#line 101 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_LIST, yyvsp[-2], yyvsp[0]); }
#line 1499 "parsing/parser.cpp"
    break;

  case 9: /* identifiers: identifiers ',' identifier  */
#line 110 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_LIST, yyvsp[-2], yyvsp[0]); }
#line 1505 "parsing/parser.cpp"
    break;

  case 10: /* declaration: identifiers ':' type  */
#line 115 "parsing/parser.y"
           { parsing_ast.set_type(yyvsp[-2], yyvsp[0]);
             yyval=parsing_ast.new_node(N_DECLARATION, yyvsp[-2], yyvsp[0]);
           }
#line 1513 "parsing/parser.cpp"
    break;

  case 11: /* declaration: identifiers ':' type "=" formula  */
#line 119 "parsing/parser.y"
           { parsing_ast.set_type(yyvsp[-4], yyvsp[-2]);
             yyval=parsing_ast.new_node(N_FORMULA_DEFINITION,
                  parsing_ast.new_node(N_DECLARATION, yyvsp[-4], yyvsp[-2]), yyvsp[0]);
           }
#line 1522 "parsing/parser.cpp"
    break;

  case 12: /* declaration: identifiers ':' type "=" term  */
#line 124 "parsing/parser.y"
           { parsing_ast.set_type(yyvsp[-4], yyvsp[-2]);
             yyval=parsing_ast.new_node(N_TERM_DEFINITION,
                  parsing_ast.new_node(N_DECLARATION, yyvsp[-4], yyvsp[-2]), yyvsp[0]);
           }
#line 1531 "parsing/parser.cpp"
    break;

  case 13: /* declaration: identifiers ':' "theorem" formula  */
#line 129 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_THEOREM, yyvsp[-3], yyvsp[0]); }
#line 1537 "parsing/parser.cpp"
    break;

  case 14: /* declaration: "theorem" formula  */
#line 131 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_THEOREM, 0, yyvsp[0]); }
#line 1543 "parsing/parser.cpp"
    break;

  case 15: /* declaration: formula  */
#line 133 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_THEOREM, 0, yyvsp[0]); }
#line 1549 "parsing/parser.cpp"
    break;

  case 16: /* declaration: identifiers ':' "axiom" formula  */
#line 135 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_AXIOM, yyvsp[-3], yyvsp[0]); }
#line 1555 "parsing/parser.cpp"
    break;

  case 17: /* declaration: "axiom" formula  */
#line 137 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_AXIOM, 0, yyvsp[0]); }
#line 1561 "parsing/parser.cpp"
    break;

  case 18: /* declaration: identifiers ':' "formula" formula  */
#line 139 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_FORMULA, yyvsp[-3], yyvsp[0]); }
#line 1567 "parsing/parser.cpp"
    break;

  case 19: /* declaration: "formula" formula  */
#line 141 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_FORMULA, 0, yyvsp[0]); }
#line 1573 "parsing/parser.cpp"
    break;

  case 20: /* declaration: identifiers ':' "regression" formula  */
#line 143 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_REGRESSION, yyvsp[-3], yyvsp[0]); }
#line 1579 "parsing/parser.cpp"
    break;

  case 21: /* declaration: "regression" formula  */
#line 145 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_REGRESSION, 0, yyvsp[0]); }
#line 1585 "parsing/parser.cpp"
    break;

  case 22: /* type: "identifier"  */
#line 150 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_IDENTIFIER); }
#line 1591 "parsing/parser.cpp"
    break;

  case 23: /* type: "boolean"  */
#line 152 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_BOOLEAN); }
#line 1597 "parsing/parser.cpp"
    break;

  case 24: /* type: "bv" '[' "integer number" ']'  */
#line 154 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_BV, yyvsp[-1]); }
#line 1603 "parsing/parser.cpp"
    break;

  case 25: /* type: "int"  */
#line 156 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_INT); }
#line 1609 "parsing/parser.cpp"
    break;

  case 26: /* type: "real"  */
#line 158 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_REAL); }
#line 1615 "parsing/parser.cpp"
    break;

  case 27: /* type: "signed" '[' "integer number" ']'  */
#line 160 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_SIGNED, yyvsp[-1]); }
#line 1621 "parsing/parser.cpp"
    break;

  case 28: /* type: "unsigned" '[' "integer number" ']'  */
#line 162 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_UNSIGNED, yyvsp[-1]); }
#line 1627 "parsing/parser.cpp"
    break;

  case 29: /* formula: "forall" identifiers ':' formula  */
#line 167 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_FORALL, yyvsp[-2], yyvsp[0]); }
#line 1633 "parsing/parser.cpp"
    break;

  case 30: /* formula: "exists" identifiers ':' formula  */
#line 169 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_EXISTS, yyvsp[-2], yyvsp[0]); }
#line 1639 "parsing/parser.cpp"
    break;

  case 31: /* formula: formula "=>" formula  */
#line 171 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_IMPLICATION, yyvsp[-2], yyvsp[0]); }
#line 1645 "parsing/parser.cpp"
    break;

  case 32: /* formula: formula "<=>" formula  */
#line 173 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_BIIMPLICATION, yyvsp[-2], yyvsp[0]); }
#line 1651 "parsing/parser.cpp"
    break;

  case 33: /* formula: formula "|" formula  */
#line 175 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_DISJUNCTION, yyvsp[-2], yyvsp[0]); }
#line 1657 "parsing/parser.cpp"
    break;

  case 34: /* formula: formula "&" formula  */
#line 177 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_CONJUNCTION, yyvsp[-2], yyvsp[0]); }
#line 1663 "parsing/parser.cpp"
    break;

  case 35: /* formula: "!" formula  */
#line 179 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_NEGATION, yyvsp[0]); }
#line 1669 "parsing/parser.cpp"
    break;

  case 36: /* formula: "true"  */
#line 181 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_TRUE); }
#line 1675 "parsing/parser.cpp"
    break;

  case 37: /* formula: "false"  */
#line 183 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_FALSE); }
#line 1681 "parsing/parser.cpp"
    break;

  case 38: /* formula: '(' formula ')'  */
#line 185 "parsing/parser.y"
           { yyval = yyvsp[-1]; }
#line 1687 "parsing/parser.cpp"
    break;

  case 39: /* formula: term "<" term  */
#line 187 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_LOWER, yyvsp[-2], yyvsp[0]); }
#line 1693 "parsing/parser.cpp"
    break;

  case 40: /* formula: term ">" term  */
#line 189 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_GREATER, yyvsp[-2], yyvsp[0]); }
#line 1699 "parsing/parser.cpp"
    break;

  case 41: /* formula: term "<=" term  */
#line 191 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_LOWEREQUAL, yyvsp[-2], yyvsp[0]); }
#line 1705 "parsing/parser.cpp"
    break;

  case 42: /* formula: term ">=" term  */
#line 193 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_GREATEREQUAL, yyvsp[-2], yyvsp[0]); }
#line 1711 "parsing/parser.cpp"
    break;

  case 43: /* formula: term "=" term  */
#line 195 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_EQUAL, yyvsp[-2], yyvsp[0]); }
#line 1717 "parsing/parser.cpp"
    break;

  case 44: /* formula: term "!=" term  */
#line 197 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_NOTEQUAL, yyvsp[-2], yyvsp[0]); }
#line 1723 "parsing/parser.cpp"
    break;

  case 45: /* formula: "predicate" '(' terms ')'  */
#line 199 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_PREDICATE, yyvsp[-1]); }
#line 1729 "parsing/parser.cpp"
    break;

  case 48: /* terms: terms ',' term  */
#line 205 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_LIST, yyvsp[-2], yyvsp[-1]); }
#line 1735 "parsing/parser.cpp"
    break;

  case 49: /* term: term "+" term  */
#line 209 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_ADDITION, yyvsp[-2], yyvsp[0]); }
#line 1741 "parsing/parser.cpp"
    break;

  case 50: /* term: term "-" term  */
#line 211 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_SUBTRACTION, yyvsp[-2], yyvsp[0]); }
#line 1747 "parsing/parser.cpp"
    break;

  case 51: /* term: term "*" term  */
#line 213 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_MULTIPLICATION, yyvsp[-2], yyvsp[0]); }
#line 1753 "parsing/parser.cpp"
    break;

  case 52: /* term: term "/" term  */
#line 215 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_DIVISION, yyvsp[-2], yyvsp[0]); }
#line 1759 "parsing/parser.cpp"
    break;

  case 53: /* term: term "%" term  */
#line 217 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_MODULO, yyvsp[-2], yyvsp[0]); }
#line 1765 "parsing/parser.cpp"
    break;

  case 54: /* term: '(' term ')'  */
#line 219 "parsing/parser.y"
           { yyval = yyvsp[-1]; }
#line 1771 "parsing/parser.cpp"
    break;

  case 55: /* term: "-" term  */
#line 221 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_UMINUS, yyvsp[0]); }
#line 1777 "parsing/parser.cpp"
    break;

  case 56: /* term: "identifier" '(' terms ')'  */
#line 223 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_FUNCTION, yyvsp[-1]); }
#line 1783 "parsing/parser.cpp"
    break;

  case 57: /* term: "IF" formula "THEN" term "ELSE" term "ENDIF"  */
#line 225 "parsing/parser.y"
           { yyval=parsing_ast.new_node(N_IF, yyvsp[-5],
                parsing_ast.new_node(N_THEN, yyvsp[-3], yyvsp[-1])); }
#line 1790 "parsing/parser.cpp"
    break;


#line 1794 "parsing/parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 231 "parsing/parser.y"


void yyerror(const char *message)
{
  extern int yylineno;
  *err << "(line " << yylineno << ") " << message << std::endl;
}

bool parsing_context::parse_file(const std::string &file)
{

  if(!(yyin=fopen(file.c_str(), "r")))
  {
    *err << "Could not open " << file << std::endl;
    return true;
  }
  
  int result=yyparse();

  fclose(yyin);
  
  return result;
}
