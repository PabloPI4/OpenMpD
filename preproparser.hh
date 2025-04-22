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

#ifndef YY_PREPRO_PREPROPARSER_HH_INCLUDED
# define YY_PREPRO_PREPROPARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef PREPRO_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PREPRO_DEBUG 1
#  else
#   define PREPRO_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PREPRO_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PREPRO_DEBUG */
#if PREPRO_DEBUG
extern int prepro_debug;
#endif

/* Token kinds.  */
#ifndef PREPRO_TOKENTYPE
# define PREPRO_TOKENTYPE
  enum prepro_tokentype
  {
    PREPRO_EMPTY = -2,
    PREPRO_EOF = 0,                /* "end of file"  */
    PREPRO_error = 256,            /* error  */
    PREPRO_UNDEF = 257,            /* "invalid token"  */
    SIZEOF = 258,                  /* SIZEOF  */
    PTR_OP = 259,                  /* PTR_OP  */
    INC_OP = 260,                  /* INC_OP  */
    DEC_OP = 261,                  /* DEC_OP  */
    LEFT_OP = 262,                 /* LEFT_OP  */
    RIGHT_OP = 263,                /* RIGHT_OP  */
    LE_OP = 264,                   /* LE_OP  */
    GE_OP = 265,                   /* GE_OP  */
    EQ_OP = 266,                   /* EQ_OP  */
    NE_OP = 267,                   /* NE_OP  */
    AND_OP = 268,                  /* AND_OP  */
    OR_OP = 269,                   /* OR_OP  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 275,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 276,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 277,              /* AND_ASSIGN  */
    XOR_ASSIGN = 278,              /* XOR_ASSIGN  */
    OR_ASSIGN = 279,               /* OR_ASSIGN  */
    TYPEDEF = 280,                 /* TYPEDEF  */
    EXTERN = 281,                  /* EXTERN  */
    STATIC = 282,                  /* STATIC  */
    AUTO = 283,                    /* AUTO  */
    REGISTER = 284,                /* REGISTER  */
    INLINE = 285,                  /* INLINE  */
    RESTRICT = 286,                /* RESTRICT  */
    CHAR = 287,                    /* CHAR  */
    SHORT = 288,                   /* SHORT  */
    INT = 289,                     /* INT  */
    LONG = 290,                    /* LONG  */
    SIGNED = 291,                  /* SIGNED  */
    UNSIGNED = 292,                /* UNSIGNED  */
    FLOAT = 293,                   /* FLOAT  */
    DOUBLE = 294,                  /* DOUBLE  */
    CONST = 295,                   /* CONST  */
    VOLATILE = 296,                /* VOLATILE  */
    VOID = 297,                    /* VOID  */
    BOOL = 298,                    /* BOOL  */
    COMPLEX = 299,                 /* COMPLEX  */
    IMAGINARY = 300,               /* IMAGINARY  */
    USER_DEFINED = 301,            /* USER_DEFINED  */
    STRUCT = 302,                  /* STRUCT  */
    UNION = 303,                   /* UNION  */
    ENUM = 304,                    /* ENUM  */
    ELLIPSIS = 305,                /* ELLIPSIS  */
    CASE = 306,                    /* CASE  */
    DEFAULT = 307,                 /* DEFAULT  */
    IF = 308,                      /* IF  */
    ELSE = 309,                    /* ELSE  */
    SWITCH = 310,                  /* SWITCH  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    FOR = 313,                     /* FOR  */
    GOTO = 314,                    /* GOTO  */
    CONTINUE = 315,                /* CONTINUE  */
    BREAK = 316,                   /* BREAK  */
    RETURN = 317,                  /* RETURN  */
    CONSTANT = 318,                /* CONSTANT  */
    IDENTIFIER = 319,              /* IDENTIFIER  */
    STRING_LITERAL = 320           /* STRING_LITERAL  */
  };
  typedef enum prepro_tokentype prepro_token_kind_t;
#endif

/* Value type.  */
#if ! defined PREPRO_STYPE && ! defined PREPRO_STYPE_IS_DECLARED
union PREPRO_STYPE
{
#line 17 "preproparser.yy"

	SymbolInfo * sym;
	vector <SymbolInfo*> *symList;

#line 142 "preproparser.hh"

};
typedef union PREPRO_STYPE PREPRO_STYPE;
# define PREPRO_STYPE_IS_TRIVIAL 1
# define PREPRO_STYPE_IS_DECLARED 1
#endif


extern PREPRO_STYPE prepro_lval;


int prepro_parse (void);


#endif /* !YY_PREPRO_PREPROPARSER_HH_INCLUDED  */
