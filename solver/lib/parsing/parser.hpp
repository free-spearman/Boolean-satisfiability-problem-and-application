/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSING_PARSER_HPP_INCLUDED
# define YY_YY_PARSING_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    N_IDENTIFIER = 258,            /* "identifier"  */
    N_INTEGER = 259,               /* "integer number"  */
    N_RATIONAL = 260,              /* "rational number"  */
    N_BOOLEAN = 261,               /* "boolean"  */
    N_UNSIGNED = 262,              /* "unsigned"  */
    N_SIGNED = 263,                /* "signed"  */
    N_REAL = 264,                  /* "real"  */
    N_INT = 265,                   /* "int"  */
    N_BV = 266,                    /* "bv"  */
    N_AXIOM = 267,                 /* "axiom"  */
    N_FORMULA = 268,               /* "formula"  */
    N_REGRESSION = 269,            /* "regression"  */
    N_THEOREM = 270,               /* "theorem"  */
    N_DECLARATION = 271,           /* "declaration"  */
    N_FORMULA_DEFINITION = 272,    /* "formula definition"  */
    N_TERM_DEFINITION = 273,       /* "term definition"  */
    N_CONJUNCTION = 274,           /* "&"  */
    N_DISJUNCTION = 275,           /* "|"  */
    N_NEGATION = 276,              /* "!"  */
    N_BIIMPLICATION = 277,         /* "<=>"  */
    N_IMPLICATION = 278,           /* "=>"  */
    N_TRUE = 279,                  /* "true"  */
    N_FALSE = 280,                 /* "false"  */
    N_ADDITION = 281,              /* "+"  */
    N_SUBTRACTION = 282,           /* "-"  */
    N_MULTIPLICATION = 283,        /* "*"  */
    N_DIVISION = 284,              /* "/"  */
    N_MODULO = 285,                /* "%"  */
    N_UMINUS = 286,                /* "U-"  */
    N_LOWER = 287,                 /* "<"  */
    N_GREATER = 288,               /* ">"  */
    N_LOWEREQUAL = 289,            /* "<="  */
    N_GREATEREQUAL = 290,          /* ">="  */
    N_EQUAL = 291,                 /* "="  */
    N_NOTEQUAL = 292,              /* "!="  */
    N_IF = 293,                    /* "IF"  */
    N_THEN = 294,                  /* "THEN"  */
    N_ELSE = 295,                  /* "ELSE"  */
    N_ENDIF = 296,                 /* "ENDIF"  */
    N_FORALL = 297,                /* "forall"  */
    N_EXISTS = 298,                /* "exists"  */
    N_LIST = 299,                  /* "list"  */
    N_PREDICATE = 300,             /* "predicate"  */
    N_FUNCTION = 301               /* "function"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSING_PARSER_HPP_INCLUDED  */
