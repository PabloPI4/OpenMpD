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

#ifndef YY_YY_Y_TAB_HH_INCLUDED
# define YY_YY_Y_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRING_LITERAL = 259,          /* STRING_LITERAL  */
    SIZEOF = 260,                  /* SIZEOF  */
    PTR_OP = 261,                  /* PTR_OP  */
    INC_OP = 262,                  /* INC_OP  */
    DEC_OP = 263,                  /* DEC_OP  */
    LEFT_OP = 264,                 /* LEFT_OP  */
    RIGHT_OP = 265,                /* RIGHT_OP  */
    LE_OP = 266,                   /* LE_OP  */
    GE_OP = 267,                   /* GE_OP  */
    EQ_OP = 268,                   /* EQ_OP  */
    NE_OP = 269,                   /* NE_OP  */
    AND_OP = 270,                  /* AND_OP  */
    OR_OP = 271,                   /* OR_OP  */
    MUL_ASSIGN = 272,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 273,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 274,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 275,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 276,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 277,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 278,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 279,              /* AND_ASSIGN  */
    XOR_ASSIGN = 280,              /* XOR_ASSIGN  */
    OR_ASSIGN = 281,               /* OR_ASSIGN  */
    TYPEDEF = 282,                 /* TYPEDEF  */
    EXTERN = 283,                  /* EXTERN  */
    STATIC = 284,                  /* STATIC  */
    AUTO = 285,                    /* AUTO  */
    REGISTER = 286,                /* REGISTER  */
    INLINE = 287,                  /* INLINE  */
    RESTRICT = 288,                /* RESTRICT  */
    CHAR = 289,                    /* CHAR  */
    SHORT = 290,                   /* SHORT  */
    INT = 291,                     /* INT  */
    LONG = 292,                    /* LONG  */
    SIGNED = 293,                  /* SIGNED  */
    UNSIGNED = 294,                /* UNSIGNED  */
    FLOAT = 295,                   /* FLOAT  */
    DOUBLE = 296,                  /* DOUBLE  */
    CONST = 297,                   /* CONST  */
    VOLATILE = 298,                /* VOLATILE  */
    VOID = 299,                    /* VOID  */
    BOOL = 300,                    /* BOOL  */
    COMPLEX = 301,                 /* COMPLEX  */
    IMAGINARY = 302,               /* IMAGINARY  */
    STRUCT = 303,                  /* STRUCT  */
    UNION = 304,                   /* UNION  */
    ENUM = 305,                    /* ENUM  */
    ELLIPSIS = 306,                /* ELLIPSIS  */
    CASE = 307,                    /* CASE  */
    DEFAULT = 308,                 /* DEFAULT  */
    IF = 309,                      /* IF  */
    ELSE = 310,                    /* ELSE  */
    SWITCH = 311,                  /* SWITCH  */
    WHILE = 312,                   /* WHILE  */
    DO = 313,                      /* DO  */
    FOR = 314,                     /* FOR  */
    GOTO = 315,                    /* GOTO  */
    CONTINUE = 316,                /* CONTINUE  */
    BREAK = 317,                   /* BREAK  */
    RETURN = 318,                  /* RETURN  */
    CONSTANT = 319                 /* CONSTANT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "C99-parser.yacc"

	SymbolInfo * sym;
	vector <SymbolInfo*> *symList;

#line 133 "y.tab.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_HH_INCLUDED  */
