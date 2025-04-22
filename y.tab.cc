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
#line 1 "C99-parser.yacc"

#include<bits/stdc++.h>
#include "SymbolTable.h"
#include "templates.h"
void yyerror(char const *s);
extern int yylex (void);

int error_count = 0;

int main_init = 0;
int main_end = 0;
int MPIInitDone = 0;
int MPIInitMainDone = 0;
long posInit = -100;
long posVarsInit = -100;
int enMain = 0;
int enFuncion = 0;
int llamadaFuncion = 0;
int activarDeclaracion = 0;
int escribirSeq = 0;
int enSecuencial = 0;
extern int enCluster;

extern ofstream logFile;
extern ofstream errFile;

extern SymbolTable table;

#line 100 "y.tab.cc"

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

#include "y.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SIZEOF = 3,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 4,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 5,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 6,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 7,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 8,                   /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 9,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 10,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 11,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 12,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 13,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 14,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 15,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 16,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 17,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 20,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 21,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 22,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 23,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 24,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 25,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 26,                    /* EXTERN  */
  YYSYMBOL_STATIC = 27,                    /* STATIC  */
  YYSYMBOL_AUTO = 28,                      /* AUTO  */
  YYSYMBOL_REGISTER = 29,                  /* REGISTER  */
  YYSYMBOL_INLINE = 30,                    /* INLINE  */
  YYSYMBOL_RESTRICT = 31,                  /* RESTRICT  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_SHORT = 33,                     /* SHORT  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_LONG = 35,                      /* LONG  */
  YYSYMBOL_SIGNED = 36,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 37,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 38,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_CONST = 40,                     /* CONST  */
  YYSYMBOL_VOLATILE = 41,                  /* VOLATILE  */
  YYSYMBOL_VOID = 42,                      /* VOID  */
  YYSYMBOL_BOOL = 43,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 44,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 45,                 /* IMAGINARY  */
  YYSYMBOL_USER_DEFINED = 46,              /* USER_DEFINED  */
  YYSYMBOL_STRUCT = 47,                    /* STRUCT  */
  YYSYMBOL_UNION = 48,                     /* UNION  */
  YYSYMBOL_ENUM = 49,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 50,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 51,                      /* CASE  */
  YYSYMBOL_DEFAULT = 52,                   /* DEFAULT  */
  YYSYMBOL_IF = 53,                        /* IF  */
  YYSYMBOL_ELSE = 54,                      /* ELSE  */
  YYSYMBOL_SWITCH = 55,                    /* SWITCH  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_FOR = 58,                       /* FOR  */
  YYSYMBOL_GOTO = 59,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 60,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 61,                     /* BREAK  */
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
  YYSYMBOL_CONSTANT = 63,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 64,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 65,            /* STRING_LITERAL  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_68_ = 68,                       /* '['  */
  YYSYMBOL_69_ = 69,                       /* ']'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_71_ = 71,                       /* '{'  */
  YYSYMBOL_72_ = 72,                       /* '}'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* '&'  */
  YYSYMBOL_75_ = 75,                       /* '*'  */
  YYSYMBOL_76_ = 76,                       /* '+'  */
  YYSYMBOL_77_ = 77,                       /* '-'  */
  YYSYMBOL_78_ = 78,                       /* '~'  */
  YYSYMBOL_79_ = 79,                       /* '!'  */
  YYSYMBOL_80_ = 80,                       /* '/'  */
  YYSYMBOL_81_ = 81,                       /* '%'  */
  YYSYMBOL_82_ = 82,                       /* '<'  */
  YYSYMBOL_83_ = 83,                       /* '>'  */
  YYSYMBOL_84_ = 84,                       /* '^'  */
  YYSYMBOL_85_ = 85,                       /* '|'  */
  YYSYMBOL_86_ = 86,                       /* '?'  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
  YYSYMBOL_88_ = 88,                       /* '='  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_primary_expression = 91,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 92,        /* postfix_expression  */
  YYSYMBOL_93_1 = 93,                      /* $@1  */
  YYSYMBOL_argument_expression_list = 94,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 95,          /* unary_expression  */
  YYSYMBOL_unary_operator = 96,            /* unary_operator  */
  YYSYMBOL_cast_expression = 97,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 98, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 99,       /* additive_expression  */
  YYSYMBOL_shift_expression = 100,         /* shift_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_equality_expression = 102,      /* equality_expression  */
  YYSYMBOL_and_expression = 103,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 104,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 105,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 106,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 107,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 108,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 110,      /* assignment_operator  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 114,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 116,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 117,  /* storage_class_specifier  */
  YYSYMBOL_118_2 = 118,                    /* $@2  */
  YYSYMBOL_119_3 = 119,                    /* $@3  */
  YYSYMBOL_120_4 = 120,                    /* $@4  */
  YYSYMBOL_121_5 = 121,                    /* $@5  */
  YYSYMBOL_122_6 = 122,                    /* $@6  */
  YYSYMBOL_type_specifier = 123,           /* type_specifier  */
  YYSYMBOL_124_7 = 124,                    /* $@7  */
  YYSYMBOL_125_8 = 125,                    /* $@8  */
  YYSYMBOL_126_9 = 126,                    /* $@9  */
  YYSYMBOL_127_10 = 127,                   /* $@10  */
  YYSYMBOL_128_11 = 128,                   /* $@11  */
  YYSYMBOL_129_12 = 129,                   /* $@12  */
  YYSYMBOL_130_13 = 130,                   /* $@13  */
  YYSYMBOL_131_14 = 131,                   /* $@14  */
  YYSYMBOL_132_15 = 132,                   /* $@15  */
  YYSYMBOL_133_16 = 133,                   /* $@16  */
  YYSYMBOL_134_17 = 134,                   /* $@17  */
  YYSYMBOL_135_18 = 135,                   /* $@18  */
  YYSYMBOL_struct_or_union_specifier = 136, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 137,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 138,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 139,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 140, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 141,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 142,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 143,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 144,          /* enumerator_list  */
  YYSYMBOL_enumerator = 145,               /* enumerator  */
  YYSYMBOL_type_qualifier = 146,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 147,       /* function_specifier  */
  YYSYMBOL_declarator = 148,               /* declarator  */
  YYSYMBOL_direct_declarator = 149,        /* direct_declarator  */
  YYSYMBOL_pointer = 150,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 151,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 152,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 153,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 154,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 155,          /* identifier_list  */
  YYSYMBOL_type_name = 156,                /* type_name  */
  YYSYMBOL_abstract_declarator = 157,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 158, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 159,              /* initializer  */
  YYSYMBOL_initializer_list = 160,         /* initializer_list  */
  YYSYMBOL_designation = 161,              /* designation  */
  YYSYMBOL_designator_list = 162,          /* designator_list  */
  YYSYMBOL_designator = 163,               /* designator  */
  YYSYMBOL_statement = 164,                /* statement  */
  YYSYMBOL_165_19 = 165,                   /* $@19  */
  YYSYMBOL_166_20 = 166,                   /* $@20  */
  YYSYMBOL_labeled_statement = 167,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 168,       /* compound_statement  */
  YYSYMBOL_169_21 = 169,                   /* $@21  */
  YYSYMBOL_block_item_list = 170,          /* block_item_list  */
  YYSYMBOL_block_item = 171,               /* block_item  */
  YYSYMBOL_172_22 = 172,                   /* $@22  */
  YYSYMBOL_173_23 = 173,                   /* $@23  */
  YYSYMBOL_expression_statement = 174,     /* expression_statement  */
  YYSYMBOL_selection_statement = 175,      /* selection_statement  */
  YYSYMBOL_176_24 = 176,                   /* $@24  */
  YYSYMBOL_iteration_statement = 177,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 178,           /* jump_statement  */
  YYSYMBOL_179_25 = 179,                   /* $@25  */
  YYSYMBOL_180_26 = 180,                   /* $@26  */
  YYSYMBOL_translation_unit = 181,         /* translation_unit  */
  YYSYMBOL_182_27 = 182,                   /* $@27  */
  YYSYMBOL_external_declaration = 183,     /* external_declaration  */
  YYSYMBOL_function_definition = 184,      /* function_definition  */
  YYSYMBOL_185_28 = 185,                   /* $@28  */
  YYSYMBOL_186_29 = 186,                   /* $@29  */
  YYSYMBOL_187_30 = 187,                   /* $@30  */
  YYSYMBOL_declaration_list = 188          /* declaration_list  */
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
typedef yytype_int16 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1371

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
       2,     2,     2,    79,     2,     2,     2,    81,    74,     2,
      66,    67,    75,    76,    73,    77,    70,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    89,
      82,    88,    83,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    85,    72,    78,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    73,    74,    75,    76,
      76,    77,    78,    79,    80,    81,    82,    86,    87,    91,
      92,    93,    94,    95,    96,   100,   101,   102,   103,   104,
     105,   109,   110,   114,   115,   116,   117,   121,   122,   123,
     127,   128,   129,   133,   134,   135,   136,   137,   141,   142,
     143,   147,   148,   152,   153,   157,   158,   162,   163,   167,
     168,   172,   173,   177,   178,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   196,   197,   201,   205,
     215,   256,   257,   264,   265,   272,   273,   280,   281,   291,
     292,   296,   297,   301,   301,   305,   305,   309,   309,   313,
     313,   317,   317,   324,   324,   328,   328,   332,   332,   336,
     336,   340,   340,   344,   344,   348,   348,   352,   352,   356,
     356,   360,   360,   364,   364,   368,   368,   372,   373,   374,
     378,   395,   396,   415,   416,   420,   426,   437,   447,   448,
     449,   450,   454,   455,   459,   460,   461,   465,   466,   467,
     468,   469,   473,   474,   478,   479,   483,   484,   485,   489,
     493,   494,   499,   500,   501,   508,   512,   519,   526,   533,
     537,   541,   545,   549,   550,   554,   555,   556,   557,   561,
     562,   567,   568,   572,   573,   577,   581,   582,   586,   587,
     591,   592,   596,   597,   598,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   616,   617,   618,   622,
     623,   624,   625,   629,   633,   634,   638,   639,   643,   644,
     645,   646,   646,   647,   647,   648,   652,   653,   654,   658,
     659,   659,   690,   691,   695,   695,   697,   697,   720,   721,
     725,   726,   726,   727,   731,   732,   733,   734,   735,   736,
     740,   741,   742,   745,   744,   757,   756,   771,   771,   772,
     776,   777,   781,   796,   781,   818,   818,   866,   870
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "BOOL", "COMPLEX", "IMAGINARY", "USER_DEFINED", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "'('", "')'", "'['", "']'", "'.'", "'{'",
  "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "postfix_expression", "$@1",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "$@2", "$@3", "$@4", "$@5", "$@6",
  "type_specifier", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement", "$@19",
  "$@20", "labeled_statement", "compound_statement", "$@21",
  "block_item_list", "block_item", "$@22", "$@23", "expression_statement",
  "selection_statement", "$@24", "iteration_statement", "jump_statement",
  "$@25", "$@26", "translation_unit", "$@27", "external_declaration",
  "function_definition", "$@28", "$@29", "$@30", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-248)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-266)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -248,   996,  1322,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   -41,  -248,   -23,  1248,     3,    25,   119,   141,   155,
    1248,   158,   183,   202,   206,   220,   219,   224,   222,   227,
     223,   232,   233,  -248,    87,  -248,  1248,  1248,  -248,  -248,
    -248,   197,   203,  -248,    86,    -2,  -248,   -47,  -248,     5,
     128,   140,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   209,  1040,  -248,  -248,   203,   189,   104,  -248,   214,
    -248,  -248,    -2,    86,  -248,   596,  1322,   211,  1114,   473,
     128,  1040,   851,  1181,  -248,   -17,   851,   137,   746,  -248,
      10,  -248,  -248,  -248,  -248,   195,   763,   780,   780,  -248,
    -248,  -248,   420,   565,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,    55,   538,   746,  -248,    20,   -43,   212,    36,   226,
     210,   207,   201,   279,     4,  -248,  -248,  -248,  -248,   -23,
    1068,   221,  -248,  -248,  -248,    74,   228,   225,  -248,    59,
      93,  -248,   230,   231,   500,  1200,  -248,  -248,  -248,   746,
      15,  -248,   216,  -248,  -248,    83,  -248,  -248,  -248,  -248,
    -248,   420,  -248,   420,  -248,  -248,  -248,    64,    88,   229,
     746,   243,  -248,   173,   596,   -13,  -248,   244,  -248,  -248,
     242,   746,   246,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,   746,  -248,   746,   746,   746,   746,
     746,   746,   746,   746,   746,   746,   746,   746,   746,   746,
     746,   746,   746,   746,   746,  -248,   211,  -248,  1273,   896,
     644,  -248,   139,  -248,   162,  -248,  1297,  -248,   249,   617,
    -248,  -248,   746,  -248,   265,   294,  -248,  -248,   -17,  -248,
     746,  -248,   297,   298,  -248,   746,   946,   163,  -248,   663,
     299,  -248,  -248,   517,  -248,  -248,  -248,  -248,  -248,   746,
       8,  -248,  -248,  -248,  -248,  -248,    20,    20,   -43,   -43,
     212,   212,   212,   212,    36,    36,   226,   210,   207,   201,
     279,   -33,  -248,  1021,  -248,  1322,   356,  -248,   300,   303,
    -248,   302,   307,   162,  1156,   681,  -248,  -248,  -248,   308,
     310,  -248,  -248,  -248,  -248,   295,   295,  -248,   565,  -248,
    -248,  -248,  -248,   596,    92,  -248,  -248,   746,  -248,  -248,
    -248,   746,   291,   316,   208,   292,   293,   304,  -248,    39,
    -248,    52,   156,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,   322,  -248,   321,   323,  -248,  -248,   175,  -248,
    -248,   746,  -248,   306,   356,   311,  -248,  -248,   312,   746,
     356,  -248,   329,   330,  -248,   331,   356,   333,  -248,  -248,
    -248,  -248,  -248,   540,  -248,   356,  -248,  -248,  -248,    41,
    -248,   746,   746,   746,   346,   309,  -248,  -248,  -248,    97,
     112,   113,   337,   196,   196,   356,   356,   356,   746,   698,
     727,   350,  -248,  -248,   116,   356,   124,   356,   125,  -248,
     317,  -248,   356,  -248,   356,   356,  -248,  -248,  -248,  -248
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     257,    93,    93,     1,   159,   157,   156,   158,   127,   133,
     134,     0,   261,     0,    81,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,     0,   129,    85,    87,   259,   260,
     258,   151,     0,   162,     0,   175,    79,     0,    89,   262,
     161,     0,    82,    94,    96,    98,   100,   102,    84,   104,
     106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
     126,   132,   103,    86,    88,     0,   154,     0,   152,     0,
     179,   177,   176,     0,    80,     0,    93,     0,    93,     0,
     160,   103,   140,   103,   135,     0,   138,     0,     0,   147,
       0,   163,   180,   178,    90,    91,     0,     0,     0,     3,
       2,     4,   103,     0,    25,    26,    27,    28,    29,    30,
       6,    19,    31,     0,    33,    37,    40,    43,    48,    51,
      53,    55,    57,    59,    61,    63,   206,    92,   267,     0,
      93,   230,   266,   188,   174,   187,     0,   181,   183,     0,
       0,   171,    26,     0,     0,   103,   141,   131,   136,     0,
       0,   142,   144,   139,   148,     0,    31,    78,   155,   149,
     153,   103,    23,   103,    20,    21,    76,     0,   190,     0,
       0,     0,   209,     0,     0,     0,   214,     0,    13,    14,
       9,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    65,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,     0,   229,   236,    93,
       0,   185,   192,   186,   193,   172,    93,   173,     0,     0,
     170,   166,     0,   165,    26,     0,   130,   145,     0,   137,
       0,   150,     0,     0,     5,     0,    93,   192,   191,     0,
       0,   217,   207,     0,   210,   213,   215,    12,     8,     0,
       0,    11,    64,    34,    35,    36,    38,    39,    41,    42,
      46,    47,    44,    45,    49,    50,    52,    54,    56,    58,
      60,     0,   264,   236,   232,    93,   223,   202,     0,     0,
     196,    26,     0,   194,    93,     0,   182,   184,   189,     0,
       0,   169,   164,   143,   146,    24,     0,    77,     0,    32,
     216,   208,   211,     0,     0,    17,     7,     0,   231,   233,
     235,     0,     0,     0,     0,     0,   255,     2,   238,     0,
     237,     0,     0,   218,   219,   220,   225,   203,   195,   200,
     197,   204,     0,   198,    26,     0,   167,   168,     0,   212,
      10,     0,    62,     0,   223,     0,   251,   252,     0,     0,
     223,   239,     0,     0,   222,     0,   223,     0,   224,   205,
     201,   199,    15,     0,    18,   223,   228,   250,   254,     0,
     226,     0,     0,     0,     0,    93,    16,   227,   256,     0,
       0,     0,     0,     0,     0,   223,   223,   223,     0,     0,
       0,   240,   243,   244,     0,   223,     0,   223,     0,   241,
       0,   248,   223,   246,   223,   223,   245,   249,   247,   242
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,  -248,   110,  -248,   -91,    40,    42,
      11,    34,   186,   190,   191,   192,   205,  -248,   -88,   -82,
    -248,  -104,  -153,   -84,    -1,  -248,   341,  -248,  -248,  -248,
    -248,  -248,  -248,   -28,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   338,   -69,
     -75,  -248,   165,  -248,   361,   -85,    17,  -248,    -4,   -39,
     -34,   -67,   -83,  -248,   204,  -248,    61,  -125,  -207,   -81,
     120,  -247,  -248,   254,   496,  -248,  -248,  -248,   -73,  -248,
    -248,   149,  -248,  -248,  -229,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,   441,  -248,  -248,  -248,  -248,  -248
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   120,   121,   269,   324,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   176,
     204,   339,   168,    12,   145,    47,    48,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    93,    94,
      95,   160,   161,    35,    77,    78,    36,    37,    79,    50,
      51,    82,   298,   147,   148,   149,   179,   299,   234,   182,
     183,   184,   185,   186,   340,   341,   342,   343,   344,   228,
     293,   294,   295,   296,   345,   374,   425,   378,   346,   368,
     369,     1,     2,    38,    39,    86,   226,    87,   140
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    13,   138,   136,   137,   146,   247,   153,   177,    49,
     167,    81,    90,    52,   142,   170,   323,   156,   223,    58,
     233,   163,   154,    41,   158,   303,    83,   260,    53,     5,
      42,   136,   205,   209,   210,    73,    74,   178,     6,     7,
     255,    43,    84,    44,    92,   213,   214,    43,   103,    44,
     303,    54,    45,   258,   327,   180,   225,   181,    45,   187,
     188,   189,    80,    92,    92,    92,    46,   177,    92,   177,
     159,   167,   245,    45,    76,   265,  -265,   326,   -91,   105,
     170,   255,   169,   239,    92,   139,   158,   270,   248,    96,
     224,   162,   167,    85,   -91,   206,   178,   314,   178,   102,
     207,   208,   136,   264,   249,   372,    80,   373,    96,    96,
      96,   232,   255,    96,   255,   273,   274,   275,   215,   216,
     291,   190,   272,   191,     5,   192,   237,    92,   371,    96,
     398,   254,   238,     6,     7,   105,   323,   255,    43,   139,
     229,   231,   230,    92,   257,    92,    55,    76,   302,    45,
      43,    71,    44,   292,   256,   251,   230,   309,    72,   360,
     310,    45,   167,    45,   405,   361,   404,    80,   319,    56,
     255,   102,    96,   317,   409,   410,    99,   100,   363,   406,
     407,   136,   322,   420,    57,   255,   255,   325,    96,   255,
      96,   422,   424,    90,    88,   232,    89,   255,   255,   106,
      59,   107,   108,    43,    43,   229,    44,   230,   166,   164,
     165,   330,   375,   376,   377,    60,   172,   174,   175,   211,
     212,   352,   257,   355,   280,   281,   282,   283,   304,   256,
     305,   230,   252,   166,   253,    61,   136,   217,   218,   362,
      62,   136,   359,   167,   162,   262,   263,   382,   383,   276,
     277,   284,   285,   278,   279,    63,   102,    64,    66,   109,
     110,   111,   112,    65,    67,   389,    68,    76,    75,   166,
     114,   115,   116,   117,   118,   119,    69,    98,    70,   384,
      91,   101,   141,    85,   219,   338,   221,   399,   400,   401,
     166,   220,   222,   227,   139,   235,   259,   366,   236,   240,
     241,   136,   322,   250,   414,   416,   418,   261,   267,   268,
     271,   403,   106,   308,   107,   108,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   311,   -95,   -97,   -99,  -101,     4,
       5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,     6,
       7,  -103,  -121,  -123,  -125,     8,     9,    10,    11,   106,
     166,   107,   108,   312,   315,   316,   318,   347,   320,   166,
     348,   349,   109,   110,   111,   112,   350,   356,   364,   357,
     365,   367,  -253,   114,   115,   116,   117,   118,   119,   379,
     380,   370,   381,   385,   139,   391,   392,   393,   338,   395,
     387,   388,   402,   408,   419,   286,   426,   331,   332,  -221,
     287,  -221,   288,   313,   289,   333,   334,   335,   336,   109,
     337,   111,   112,   106,   104,   107,   108,   141,   290,   155,
     114,   115,   116,   117,   118,   119,    97,   166,   358,   266,
     307,   166,   329,    40,     0,   338,     0,     0,     0,     0,
       0,     5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,
       6,     7,     0,  -121,  -123,  -125,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,   106,     0,   107,   108,
       0,     0,     0,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     150,     0,     0,   106,     5,   107,   108,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     0,     0,
     106,     0,   107,   108,     0,     0,     0,   242,     0,     0,
       0,     5,     0,     0,     0,     0,   109,   110,   111,   112,
       6,     7,   151,   106,     0,   107,   108,   114,   152,   116,
     117,   118,   119,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   109,   110,   111,   112,     0,   106,   243,
     107,   108,     0,     0,   114,   244,   116,   117,   118,   119,
     109,   110,   111,   112,     0,   180,     0,   181,   113,   321,
       0,   114,   115,   116,   117,   118,   119,     0,     0,   106,
       0,   107,   108,   109,   110,   111,   112,     0,   180,     0,
     181,   113,   396,     0,   114,   115,   116,   117,   118,   119,
     106,     0,   107,   108,     0,     0,   203,     0,   109,   110,
     111,   112,     0,   180,     0,   181,   113,     0,     0,   114,
     115,   116,   117,   118,   119,     0,     0,   106,     5,   107,
     108,     0,     0,     0,     0,     0,     0,     6,     7,   109,
     110,   111,   112,     0,     0,     0,   106,   113,   107,   108,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
     109,   110,   111,   112,   106,     0,   107,   108,     0,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,   106,     0,   107,   108,     0,     0,   109,   110,   111,
     112,     0,     0,   300,     0,     0,     0,     0,   114,   301,
     116,   117,   118,   119,     0,     0,   109,   110,   111,   112,
     106,     0,   107,   108,   318,     0,     0,   114,   115,   116,
     117,   118,   119,     0,   109,   110,   111,   112,     0,   106,
     353,   107,   108,     0,     0,   114,   354,   116,   117,   118,
     119,   109,   110,   111,   112,   415,   106,     0,   107,   108,
       0,     0,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,   106,     0,   107,   108,     0,     0,     0,
     109,   110,   111,   112,   417,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   118,   119,   109,   110,   111,   171,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
     117,   118,   119,   109,   110,   111,   173,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     386,     0,     0,     0,     0,     0,   390,     0,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,   397,     5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,
    -115,     6,     7,  -103,  -121,  -123,  -125,     8,     9,    10,
      11,   411,   412,   413,     0,     0,     0,     0,     0,     0,
       0,   421,     0,   423,     0,     0,     0,     0,   427,     0,
     428,   429,   -95,   -97,   -99,  -101,     4,     5,  -105,  -107,
    -109,  -111,  -117,  -119,  -113,  -115,     6,     7,  -103,  -121,
    -123,  -125,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,   229,   297,   230,     0,     0,     0,     0,     0,
       0,    45,   -95,   -97,   -99,  -101,     4,     5,  -105,  -107,
    -109,  -111,  -117,  -119,  -113,  -115,     6,     7,  -103,  -121,
    -123,  -125,     8,     9,    10,    11,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,   297,   230,     0,     0,     0,     0,     0,
       0,    45,   -95,   -97,   -99,  -101,     4,     5,  -105,  -107,
    -109,  -111,  -117,  -119,  -113,  -115,     6,     7,  -103,  -121,
    -123,  -125,     8,     9,    10,    11,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,     5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,
       6,     7,     0,  -121,  -123,  -125,     8,     9,    10,    11,
       0,     0,     0,   328,   -95,   -97,   -99,  -101,     4,     5,
    -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,     6,     7,
    -103,  -121,  -123,  -125,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -263,
     -95,   -97,   -99,  -101,     4,     5,  -105,  -107,  -109,  -111,
    -117,  -119,  -113,  -115,     6,     7,  -103,  -121,  -123,  -125,
       8,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,   144,   -95,   -97,   -99,  -101,     4,     5,  -105,  -107,
    -109,  -111,  -117,  -119,  -113,  -115,     6,     7,  -103,  -121,
    -123,  -125,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,
    -115,     6,     7,   351,  -121,  -123,  -125,     8,     9,    10,
      11,     5,  -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,
       6,     7,     0,  -121,  -123,  -125,     8,     9,    10,    11,
       0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   -93,   -95,   -97,   -99,  -101,     4,     5,
    -105,  -107,  -109,  -111,  -117,  -119,  -113,  -115,     6,     7,
    -103,  -121,  -123,  -125,     8,     9,    10,    11,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,   -95,   -97,   -99,  -101,     4,     5,  -105,
    -107,  -109,  -111,  -117,  -119,  -113,  -115,     6,     7,  -103,
    -121,  -123,  -125,     8,     9,    10,    11,   306,   -95,   -97,
     -99,  -101,     4,     5,  -105,  -107,  -109,  -111,  -117,  -119,
    -113,  -115,     6,     7,  -103,  -121,  -123,  -125,     8,     9,
      10,    11
};

static const yytype_int16 yycheck[] =
{
       1,     2,    86,    85,    85,    88,   159,    89,   112,    13,
      98,    45,    51,    14,    87,   100,   263,    92,    14,    20,
     145,    96,    89,    64,    93,   232,    73,   180,    25,    31,
      71,   113,   123,    76,    77,    36,    37,   112,    40,    41,
      73,    64,    89,    66,    72,     9,    10,    64,    82,    66,
     257,    26,    75,   178,    87,    68,   140,    70,    75,     4,
       5,     6,    45,    91,    92,    93,    89,   171,    96,   173,
      87,   159,   154,    75,    64,    88,    71,    69,    73,    83,
     165,    73,    72,   150,   112,    86,   155,   191,    73,    72,
      86,    95,   180,    88,    89,    75,   171,   250,   173,    82,
      80,    81,   184,   184,    89,    53,    89,    55,    91,    92,
      93,   145,    73,    96,    73,   206,   207,   208,    82,    83,
     224,    66,   204,    68,    31,    70,    67,   155,    89,   112,
      89,    67,    73,    40,    41,   139,   383,    73,    64,   140,
      66,   145,    68,   171,   178,   173,    27,    64,   230,    75,
      64,    64,    66,   226,    66,    72,    68,   239,    71,    67,
     242,    75,   250,    75,    67,    73,   395,   150,   259,    28,
      73,   154,   155,   255,   403,   404,    72,    73,   331,    67,
      67,   263,   263,    67,    29,    73,    73,   269,   171,    73,
     173,    67,    67,   232,    66,   229,    68,    73,    73,     3,
      42,     5,     6,    64,    64,    66,    66,    68,    98,    72,
      73,   295,    56,    57,    58,    32,   106,   107,   108,     7,
       8,   304,   256,   305,   213,   214,   215,   216,    66,    66,
      68,    68,   171,   123,   173,    33,   318,    11,    12,   327,
      34,   323,   323,   331,   248,    72,    73,    72,    73,   209,
     210,   217,   218,   211,   212,    35,   239,    38,    36,    63,
      64,    65,    66,    39,    37,   369,    43,    64,    71,   159,
      74,    75,    76,    77,    78,    79,    44,    88,    45,   361,
      71,    67,    71,    88,    74,    89,    85,   391,   392,   393,
     180,    84,    13,    72,   295,    67,    67,    89,    73,    69,
      69,   383,   383,    87,   408,   409,   410,    64,    64,    67,
      64,   395,     3,    64,     5,     6,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    69,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
     250,     5,     6,    69,    67,    67,    71,    67,    69,   259,
      67,    69,    63,    64,    65,    66,    69,    69,    87,    69,
      64,    89,    89,    74,    75,    76,    77,    78,    79,    67,
      69,    87,    69,    87,   395,    66,    66,    66,    89,    66,
      89,    89,    56,    66,    54,   219,    89,    51,    52,    53,
     220,    55,   221,   248,   222,    59,    60,    61,    62,    63,
      64,    65,    66,     3,    83,     5,     6,    71,   223,    91,
      74,    75,    76,    77,    78,    79,    75,   327,   318,   185,
     236,   331,   293,     2,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      27,    -1,    -1,     3,    31,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      40,    41,    69,     3,    -1,     5,     6,    74,    75,    76,
      77,    78,    79,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    63,    64,    65,    66,    -1,     3,    69,
       5,     6,    -1,    -1,    74,    75,    76,    77,    78,    79,
      63,    64,    65,    66,    -1,    68,    -1,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,     3,
      -1,     5,     6,    63,    64,    65,    66,    -1,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
       3,    -1,     5,     6,    -1,    -1,    88,    -1,    63,    64,
      65,    66,    -1,    68,    -1,    70,    71,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,     3,    31,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    63,
      64,    65,    66,    -1,    -1,    -1,     3,    71,     5,     6,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,     3,    -1,     5,     6,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    63,    64,    65,    66,
       3,    -1,     5,     6,    71,    -1,    -1,    74,    75,    76,
      77,    78,    79,    -1,    63,    64,    65,    66,    -1,     3,
      69,     5,     6,    -1,    -1,    74,    75,    76,    77,    78,
      79,    63,    64,    65,    66,    67,     3,    -1,     5,     6,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
     364,    -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,    -1,
      -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   405,   406,   407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,    -1,   417,    -1,    -1,    -1,    -1,   422,    -1,
     424,   425,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    72,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    67,    43,    44,    45,    46,    47,    48,
      49,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   181,   182,     0,    30,    31,    40,    41,    46,    47,
      48,    49,   113,   114,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   143,   146,   147,   183,   184,
     183,    64,    71,    64,    66,    75,    89,   115,   116,   148,
     149,   150,   114,    25,    26,    27,    28,    29,   114,    42,
      32,    33,    34,    35,    38,    39,    36,    37,    43,    44,
      45,    64,    71,   114,   114,    71,    64,   144,   145,   148,
     146,   150,   151,    73,    89,    88,   185,   187,    66,    68,
     149,    71,   123,   138,   139,   140,   146,   144,    88,    72,
      73,    67,   146,   150,   116,   148,     3,     5,     6,    63,
      64,    65,    66,    71,    74,    75,    76,    77,    78,    79,
      91,    92,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   159,   113,   114,
     188,    71,   168,    64,    67,   114,   152,   153,   154,   155,
      27,    69,    75,   109,   151,   138,   140,    72,   139,    87,
     141,   142,   148,   140,    72,    73,    95,   108,   112,    72,
     145,    66,    95,    66,    95,    95,   109,   111,   140,   156,
      68,    70,   159,   160,   161,   162,   163,     4,     5,     6,
      66,    68,    70,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    88,   110,    97,    75,    80,    81,    76,
      77,     7,     8,     9,    10,    82,    83,    11,    12,    74,
      84,    85,    13,    14,    86,   113,   186,    72,   169,    66,
      68,   148,   150,   157,   158,    67,    73,    67,    73,   151,
      69,    69,    27,    69,    75,   109,    72,   112,    73,    89,
      87,    72,   156,   156,    67,    73,    66,   150,   157,    67,
     112,    64,    72,    73,   159,    88,   163,    64,    67,    93,
     111,    64,   109,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   103,   104,   105,
     106,   111,   168,   170,   171,   172,   173,    67,   152,   157,
      69,    75,   109,   158,    66,    68,    50,   154,    64,   109,
     109,    69,    69,   142,   112,    67,    67,   109,    71,    97,
      69,    72,   159,   161,    94,   109,    69,    87,    72,   171,
     113,    51,    52,    59,    60,    61,    62,    64,    89,   111,
     164,   165,   166,   167,   168,   174,   178,    67,    67,    69,
      69,    67,   152,    69,    75,   109,    69,    69,   160,   159,
      67,    73,   108,   112,    87,    64,    89,    89,   179,   180,
      87,    89,    53,    55,   175,    56,    57,    58,   177,    67,
      69,    69,    72,    73,   109,    87,   164,    89,    89,   111,
     164,    66,    66,    66,   164,    66,    72,   164,    89,   111,
     111,   111,    56,   113,   174,    67,    67,    67,    66,   174,
     174,   164,   164,   164,   111,    67,   111,    67,   111,    54,
      67,   164,    67,   164,    67,   176,    89,   164,   164,   164
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    93,
      92,    92,    92,    92,    92,    92,    92,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   118,   117,   119,   117,   120,   117,   121,
     117,   122,   117,   124,   123,   125,   123,   126,   123,   127,
     123,   128,   123,   129,   123,   130,   123,   131,   123,   132,
     123,   133,   123,   134,   123,   135,   123,   123,   123,   123,
     136,   136,   136,   137,   137,   138,   138,   139,   140,   140,
     140,   140,   141,   141,   142,   142,   142,   143,   143,   143,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   160,
     160,   160,   160,   161,   162,   162,   163,   163,   164,   164,
     164,   165,   164,   166,   164,   164,   167,   167,   167,   168,
     169,   168,   170,   170,   172,   171,   173,   171,   174,   174,
     175,   176,   175,   175,   177,   177,   177,   177,   177,   177,
     178,   178,   178,   179,   178,   180,   178,   182,   181,   181,
     183,   183,   185,   186,   184,   187,   184,   188,   188
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     0,
       5,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     1,     3,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     1,     2,
       1,     2,     1,     3,     1,     2,     3,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     4,     4,     6,     6,     5,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     0,     2,     0,     2,     1,     3,     4,     3,     2,
       0,     4,     1,     2,     0,     2,     0,     2,     1,     2,
       5,     0,     8,     5,     5,     7,     6,     7,     6,     7,
       3,     2,     2,     0,     3,     0,     4,     0,     2,     2,
       1,     1,     0,     0,     6,     0,     4,     1,     2
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 3: /* primary_expression: CONSTANT  */
#line 67 "C99-parser.yacc"
               {(yyval.sym) = (yyvsp[0].sym);}
#line 1801 "y.tab.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 69 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[-1].sym);}
#line 1807 "y.tab.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 73 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1813 "y.tab.cc"
    break;

  case 9: /* $@1: %empty  */
#line 76 "C99-parser.yacc"
                                 {/*if($1->isFunction() && !enCluster){output << "}" << endl; llamadaFuncion = 1;}*/}
#line 1819 "y.tab.cc"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 81 "C99-parser.yacc"
                                                     {(yyval.sym) = (yyvsp[-1].sym);}
#line 1825 "y.tab.cc"
    break;

  case 16: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 82 "C99-parser.yacc"
                                                        {(yyval.sym) = (yyvsp[-2].sym);}
#line 1831 "y.tab.cc"
    break;

  case 19: /* unary_expression: postfix_expression  */
#line 91 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1837 "y.tab.cc"
    break;

  case 20: /* unary_expression: INC_OP unary_expression  */
#line 92 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1843 "y.tab.cc"
    break;

  case 21: /* unary_expression: DEC_OP unary_expression  */
#line 93 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1849 "y.tab.cc"
    break;

  case 22: /* unary_expression: unary_operator cast_expression  */
#line 94 "C99-parser.yacc"
                                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1855 "y.tab.cc"
    break;

  case 23: /* unary_expression: SIZEOF unary_expression  */
#line 95 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1861 "y.tab.cc"
    break;

  case 24: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 96 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 1867 "y.tab.cc"
    break;

  case 31: /* cast_expression: unary_expression  */
#line 109 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1873 "y.tab.cc"
    break;

  case 32: /* cast_expression: '(' type_name ')' cast_expression  */
#line 110 "C99-parser.yacc"
                                            {(yyval.sym) = (yyvsp[0].sym);}
#line 1879 "y.tab.cc"
    break;

  case 33: /* multiplicative_expression: cast_expression  */
#line 114 "C99-parser.yacc"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1885 "y.tab.cc"
    break;

  case 37: /* additive_expression: multiplicative_expression  */
#line 121 "C99-parser.yacc"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1891 "y.tab.cc"
    break;

  case 40: /* shift_expression: additive_expression  */
#line 127 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1897 "y.tab.cc"
    break;

  case 43: /* relational_expression: shift_expression  */
#line 133 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1903 "y.tab.cc"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 141 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1909 "y.tab.cc"
    break;

  case 51: /* and_expression: equality_expression  */
#line 147 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1915 "y.tab.cc"
    break;

  case 53: /* exclusive_or_expression: and_expression  */
#line 152 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1921 "y.tab.cc"
    break;

  case 55: /* inclusive_or_expression: exclusive_or_expression  */
#line 157 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1927 "y.tab.cc"
    break;

  case 57: /* logical_and_expression: inclusive_or_expression  */
#line 162 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1933 "y.tab.cc"
    break;

  case 59: /* logical_or_expression: logical_and_expression  */
#line 167 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1939 "y.tab.cc"
    break;

  case 61: /* conditional_expression: logical_or_expression  */
#line 172 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1945 "y.tab.cc"
    break;

  case 63: /* assignment_expression: conditional_expression  */
#line 177 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1951 "y.tab.cc"
    break;

  case 79: /* declaration: declaration_specifiers ';'  */
#line 206 "C99-parser.yacc"
        {
		if((yyvsp[-1].sym)->isStruct()){
			(yyval.symList) = new vector<SymbolInfo*>();
			SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].sym));
			(yyval.symList)->push_back(symbol);
			table.insert((yyvsp[-1].sym));
		}
	}
#line 1964 "y.tab.cc"
    break;

  case 80: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 215 "C99-parser.yacc"
                                                          {
		(yyval.symList) = new vector<SymbolInfo*>();
		bool hasTypedef = (strstr((yyvsp[-2].sym)->getSymbolType().c_str(), "TYPEDEF") != NULL);
		if((yyvsp[-2].sym)->isStruct()){
			if((yyvsp[-2].sym)->getParamList() != nullptr){
				for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
					logFile << "Debug: " << (yyvsp[-2].sym)->getSymbolType() << " Debug: " << (yyvsp[-1].symList)->at(i)->getSymbolName() << " Debug: " << (yyvsp[-1].symList)->at(i)->getVariableType() << endl;
					if(hasTypedef) (yyvsp[-1].symList)->at(i)->setSymIsType(true);
					(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());				
					(yyvsp[-1].symList)->at(i)->setIsStruct(true);
					(yyvsp[-1].symList)->at(i)->setParamList((yyvsp[-2].sym)->getParamList());
					SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].symList)->at(i));
					(yyval.symList)->push_back(symbol);
					table.insert((yyvsp[-1].symList)->at(i));
				}
			}
			else {
				(yyvsp[-2].sym)->setParamList((yyvsp[-1].symList));
				(yyval.symList)->push_back((yyvsp[-2].sym));
				for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
					(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolName());
					table.insert((yyvsp[-1].symList)->at(i));
				}
			}
		}
		else{
			for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
				logFile << "Debug: " << (yyvsp[-2].sym)->getSymbolType() << " Debug: " << (yyvsp[-1].symList)->at(i)->getSymbolName() << " Debug: " << (yyvsp[-1].symList)->at(i)->getVariableType() << endl;
				(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
				if(hasTypedef) (yyvsp[-1].symList)->at(i)->setSymIsType(true);
				if(!(yyvsp[-1].symList)->at(i)->isFunction()){
					SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].symList)->at(i));
					(yyval.symList)->push_back(symbol);
					table.insert((yyvsp[-1].symList)->at(i));
				}
			}
		}
	}
#line 2007 "y.tab.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier  */
#line 256 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2013 "y.tab.cc"
    break;

  case 82: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 258 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2024 "y.tab.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier  */
#line 264 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2030 "y.tab.cc"
    break;

  case 84: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 266 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2041 "y.tab.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier  */
#line 272 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2047 "y.tab.cc"
    break;

  case 86: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 274 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2058 "y.tab.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 280 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[0].sym); }
#line 2064 "y.tab.cc"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 282 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2075 "y.tab.cc"
    break;

  case 89: /* init_declarator_list: init_declarator  */
#line 291 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2081 "y.tab.cc"
    break;

  case 90: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 292 "C99-parser.yacc"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2087 "y.tab.cc"
    break;

  case 91: /* init_declarator: declarator  */
#line 296 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2093 "y.tab.cc"
    break;

  case 92: /* init_declarator: declarator '=' initializer  */
#line 297 "C99-parser.yacc"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 2099 "y.tab.cc"
    break;

  case 93: /* $@2: %empty  */
#line 301 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2108 "y.tab.cc"
    break;

  case 94: /* storage_class_specifier: $@2 TYPEDEF  */
#line 304 "C99-parser.yacc"
                            { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 2114 "y.tab.cc"
    break;

  case 95: /* $@3: %empty  */
#line 305 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2123 "y.tab.cc"
    break;

  case 96: /* storage_class_specifier: $@3 EXTERN  */
#line 308 "C99-parser.yacc"
                           { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 2129 "y.tab.cc"
    break;

  case 97: /* $@4: %empty  */
#line 309 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2138 "y.tab.cc"
    break;

  case 98: /* storage_class_specifier: $@4 STATIC  */
#line 312 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 2144 "y.tab.cc"
    break;

  case 99: /* $@5: %empty  */
#line 313 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2153 "y.tab.cc"
    break;

  case 100: /* storage_class_specifier: $@5 AUTO  */
#line 316 "C99-parser.yacc"
                         { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 2159 "y.tab.cc"
    break;

  case 101: /* $@6: %empty  */
#line 317 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2168 "y.tab.cc"
    break;

  case 102: /* storage_class_specifier: $@6 REGISTER  */
#line 320 "C99-parser.yacc"
                             { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 2174 "y.tab.cc"
    break;

  case 103: /* $@7: %empty  */
#line 324 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2183 "y.tab.cc"
    break;

  case 104: /* type_specifier: $@7 VOID  */
#line 327 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 2189 "y.tab.cc"
    break;

  case 105: /* $@8: %empty  */
#line 328 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2198 "y.tab.cc"
    break;

  case 106: /* type_specifier: $@8 CHAR  */
#line 331 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 2204 "y.tab.cc"
    break;

  case 107: /* $@9: %empty  */
#line 332 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2213 "y.tab.cc"
    break;

  case 108: /* type_specifier: $@9 SHORT  */
#line 335 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 2219 "y.tab.cc"
    break;

  case 109: /* $@10: %empty  */
#line 336 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2228 "y.tab.cc"
    break;

  case 110: /* type_specifier: $@10 INT  */
#line 339 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 2234 "y.tab.cc"
    break;

  case 111: /* $@11: %empty  */
#line 340 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2243 "y.tab.cc"
    break;

  case 112: /* type_specifier: $@11 LONG  */
#line 343 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 2249 "y.tab.cc"
    break;

  case 113: /* $@12: %empty  */
#line 344 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2258 "y.tab.cc"
    break;

  case 114: /* type_specifier: $@12 FLOAT  */
#line 347 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 2264 "y.tab.cc"
    break;

  case 115: /* $@13: %empty  */
#line 348 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2273 "y.tab.cc"
    break;

  case 116: /* type_specifier: $@13 DOUBLE  */
#line 351 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2279 "y.tab.cc"
    break;

  case 117: /* $@14: %empty  */
#line 352 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2288 "y.tab.cc"
    break;

  case 118: /* type_specifier: $@14 SIGNED  */
#line 355 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2294 "y.tab.cc"
    break;

  case 119: /* $@15: %empty  */
#line 356 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2303 "y.tab.cc"
    break;

  case 120: /* type_specifier: $@15 UNSIGNED  */
#line 359 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2309 "y.tab.cc"
    break;

  case 121: /* $@16: %empty  */
#line 360 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2318 "y.tab.cc"
    break;

  case 122: /* type_specifier: $@16 BOOL  */
#line 363 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2324 "y.tab.cc"
    break;

  case 123: /* $@17: %empty  */
#line 364 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2333 "y.tab.cc"
    break;

  case 124: /* type_specifier: $@17 COMPLEX  */
#line 367 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2339 "y.tab.cc"
    break;

  case 125: /* $@18: %empty  */
#line 368 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		}}
#line 2348 "y.tab.cc"
    break;

  case 126: /* type_specifier: $@18 IMAGINARY  */
#line 371 "C99-parser.yacc"
                                 { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2354 "y.tab.cc"
    break;

  case 127: /* type_specifier: USER_DEFINED  */
#line 372 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym);}
#line 2360 "y.tab.cc"
    break;

  case 128: /* type_specifier: struct_or_union_specifier  */
#line 373 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym);}
#line 2366 "y.tab.cc"
    break;

  case 129: /* type_specifier: enum_specifier  */
#line 374 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym);}
#line 2372 "y.tab.cc"
    break;

  case 130: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 379 "C99-parser.yacc"
        { 
		(yyvsp[-3].sym)->setIsStruct(true);
		(yyvsp[-3].sym)->setVariableType((yyvsp[-4].sym)->getSymbolType() + "_" + (yyvsp[-3].sym)->getSymbolName());
		if (table.insert((yyvsp[-3].sym))) {
			logFile << "Inserted: " << (yyvsp[-3].sym)->getSymbolName() << " in scope " << table.printScopeId() << endl;
		}else {
			logFile << "Error: " << (yyvsp[-3].sym)->getSymbolName() << " already exists in scope " << endl;
			errFile << "Error: " << (yyvsp[-3].sym)->getSymbolName() << " already exists in scope " << endl;
			error_count++;
		}
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			logFile << "Struct item 2: " << (yyvsp[-1].symList)->at(i)->getSymbolName() << endl;
		} 
	
	}
#line 2393 "y.tab.cc"
    break;

  case 132: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 397 "C99-parser.yacc"
        { 
		(yyvsp[0].sym)->setIsStruct(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType() + "_" + (yyvsp[0].sym)->getSymbolName());
		(yyvsp[0].sym)->setSymbolName((yyvsp[-1].sym)->getSymbolType() + "_" + (yyvsp[0].sym)->getSymbolName());

		if (table.insert((yyvsp[0].sym))) {
			logFile << "Inserted: " << (yyvsp[0].sym)->getSymbolName() << " in scope " << table.printScopeId() << endl;
		}else {
			logFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			errFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			error_count++;
		}

		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2413 "y.tab.cc"
    break;

  case 133: /* struct_or_union: STRUCT  */
#line 415 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2419 "y.tab.cc"
    break;

  case 134: /* struct_or_union: UNION  */
#line 416 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2425 "y.tab.cc"
    break;

  case 135: /* struct_declaration_list: struct_declaration  */
#line 420 "C99-parser.yacc"
                             { (yyval.symList) = (yyvsp[0].symList); 
	for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
	}
#line 2435 "y.tab.cc"
    break;

  case 136: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 427 "C99-parser.yacc"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2447 "y.tab.cc"
    break;

  case 137: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 438 "C99-parser.yacc"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2458 "y.tab.cc"
    break;

  case 142: /* struct_declarator_list: struct_declarator  */
#line 454 "C99-parser.yacc"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2464 "y.tab.cc"
    break;

  case 143: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 455 "C99-parser.yacc"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2470 "y.tab.cc"
    break;

  case 144: /* struct_declarator: declarator  */
#line 459 "C99-parser.yacc"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2476 "y.tab.cc"
    break;

  case 145: /* struct_declarator: ':' constant_expression  */
#line 460 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2482 "y.tab.cc"
    break;

  case 146: /* struct_declarator: declarator ':' constant_expression  */
#line 461 "C99-parser.yacc"
                                             { (yyval.sym) = (yyvsp[-2].sym); }
#line 2488 "y.tab.cc"
    break;

  case 160: /* declarator: pointer direct_declarator  */
#line 493 "C99-parser.yacc"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2494 "y.tab.cc"
    break;

  case 161: /* declarator: direct_declarator  */
#line 494 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym);}
#line 2500 "y.tab.cc"
    break;

  case 162: /* direct_declarator: IDENTIFIER  */
#line 499 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2506 "y.tab.cc"
    break;

  case 163: /* direct_declarator: '(' declarator ')'  */
#line 500 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2512 "y.tab.cc"
    break;

  case 164: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 501 "C99-parser.yacc"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2524 "y.tab.cc"
    break;

  case 165: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 508 "C99-parser.yacc"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2533 "y.tab.cc"
    break;

  case 166: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 512 "C99-parser.yacc"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2545 "y.tab.cc"
    break;

  case 167: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 519 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2557 "y.tab.cc"
    break;

  case 168: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 526 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2569 "y.tab.cc"
    break;

  case 169: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 533 "C99-parser.yacc"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2578 "y.tab.cc"
    break;

  case 170: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 537 "C99-parser.yacc"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2587 "y.tab.cc"
    break;

  case 171: /* direct_declarator: direct_declarator '[' ']'  */
#line 541 "C99-parser.yacc"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2596 "y.tab.cc"
    break;

  case 172: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 545 "C99-parser.yacc"
                                                        {
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2605 "y.tab.cc"
    break;

  case 173: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 549 "C99-parser.yacc"
                                                    { (yyval.sym) = (yyvsp[-3].sym);}
#line 2611 "y.tab.cc"
    break;

  case 174: /* direct_declarator: direct_declarator '(' ')'  */
#line 550 "C99-parser.yacc"
                                    { (yyval.sym) = (yyvsp[-2].sym); }
#line 2617 "y.tab.cc"
    break;

  case 181: /* parameter_type_list: parameter_list  */
#line 567 "C99-parser.yacc"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2623 "y.tab.cc"
    break;

  case 183: /* parameter_list: parameter_declaration  */
#line 572 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2629 "y.tab.cc"
    break;

  case 184: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 573 "C99-parser.yacc"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2635 "y.tab.cc"
    break;

  case 185: /* parameter_declaration: declaration_specifiers declarator  */
#line 577 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2644 "y.tab.cc"
    break;

  case 188: /* identifier_list: IDENTIFIER  */
#line 586 "C99-parser.yacc"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2650 "y.tab.cc"
    break;

  case 189: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 587 "C99-parser.yacc"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2656 "y.tab.cc"
    break;

  case 207: /* initializer: '{' initializer_list '}'  */
#line 617 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 2662 "y.tab.cc"
    break;

  case 208: /* initializer: '{' initializer_list ',' '}'  */
#line 618 "C99-parser.yacc"
                                       {(yyval.sym) = (yyvsp[-2].sym);}
#line 2668 "y.tab.cc"
    break;

  case 210: /* initializer_list: designation initializer  */
#line 623 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 2674 "y.tab.cc"
    break;

  case 221: /* $@19: %empty  */
#line 646 "C99-parser.yacc"
          { table.enterScope(); }
#line 2680 "y.tab.cc"
    break;

  case 222: /* statement: $@19 selection_statement  */
#line 646 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2686 "y.tab.cc"
    break;

  case 223: /* $@20: %empty  */
#line 647 "C99-parser.yacc"
          { table.enterScope(); }
#line 2692 "y.tab.cc"
    break;

  case 224: /* statement: $@20 iteration_statement  */
#line 647 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2698 "y.tab.cc"
    break;

  case 230: /* $@21: %empty  */
#line 659 "C99-parser.yacc"
              {
			if (enMain > 0) {
				enMain++;
			}
			else {
				enFuncion++;
			}
		}
#line 2711 "y.tab.cc"
    break;

  case 231: /* compound_statement: '{' $@21 block_item_list '}'  */
#line 668 "C99-parser.yacc"
            {
			if (enMain == 2 && MPIInitDone == 1 && main_end == 1) {
				MPIFinalize();
				main_end = 0;
			}
			else if (enMain > 0) {
				enMain--;
			}

			if (!enMain){
				if (enFuncion == 2) {
					output << "}" << endl;
					enFuncion = 0;
				}
				else if (enFuncion > 0) {
					enFuncion--;
				}
			}
		}
#line 2735 "y.tab.cc"
    break;

  case 234: /* $@22: %empty  */
#line 695 "C99-parser.yacc"
          {if((enFuncion == 2 || enMain == 2) && activarDeclaracion && enSecuencial){output << "}" << endl; enSecuencial = 0;}}
#line 2741 "y.tab.cc"
    break;

  case 235: /* block_item: $@22 declaration  */
#line 695 "C99-parser.yacc"
                                                                                                                                            {if ((enFuncion == 2 || enMain == 2) && activarDeclaracion) {escribirSeq = 1;}}
#line 2747 "y.tab.cc"
    break;

  case 236: /* $@23: %empty  */
#line 697 "C99-parser.yacc"
        {
		if(enMain && MPIInitMainDone == 0 && posInit == -100){
			posInit = output.tellp();
			output.write("                                                                                                                                                      \n", 151);
		}
		else if (enMain && MPIInitMainDone == 1 && posInit == -100) {
			long posActual = output.tellp();
			posInit = output.tellp();
			MPIInitParte2();
			output.seekp(posActual + 151);
		}

		if (!enCluster && (enMain == 2 || enFuncion == 2) && !enSecuencial) {
			output << "if (__taskid == 0) {" << endl;
			enSecuencial = 1;
		}

		activarDeclaracion = 1;
	}
#line 2771 "y.tab.cc"
    break;

  case 241: /* $@24: %empty  */
#line 726 "C99-parser.yacc"
                                               { table.exitScope(); table.enterScope(); }
#line 2777 "y.tab.cc"
    break;

  case 253: /* $@25: %empty  */
#line 745 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1 && enMain){
			MPIFinalize();
			main_end = 0;
		}
		if (enFuncion == 2) {
			output << "}" << endl;
			enFuncion = 0;
		}
	}
#line 2792 "y.tab.cc"
    break;

  case 255: /* $@26: %empty  */
#line 757 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1 && enMain){
			MPIFinalize();
			main_end = 0;
		}
		if (enFuncion == 2) {
			output << "}" << endl;
			enFuncion = 0;
		}
	}
#line 2807 "y.tab.cc"
    break;

  case 257: /* $@27: %empty  */
#line 771 "C99-parser.yacc"
          {output.write("                   \n                                    \n", 57);}
#line 2813 "y.tab.cc"
    break;

  case 262: /* $@28: %empty  */
#line 781 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		if (table.insert((yyvsp[0].sym))) {
			logFile << "Inserted Function: " << (yyvsp[0].sym)->getSymbolName() << " in scope " << table.printScopeId() << endl;
			if((yyvsp[0].sym)->getSymbolName() == "main"){
				main_init = 1;
			}
		}
		else {
			logFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			errFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			error_count++;
		}
		table.enterScope();
	}
#line 2834 "y.tab.cc"
    break;

  case 263: /* $@29: %empty  */
#line 796 "C99-parser.yacc"
                           {
	// 	for (auto symbol : *$4) {
    //     logFile << "Debug Simbol: " << symbol->getSymbolName() << "\n";
    // }
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 1;
		}

		enFuncion = 1;
		activarDeclaracion = 0;
		enSecuencial = 0;
	}
#line 2852 "y.tab.cc"
    break;

  case 264: /* function_definition: declaration_specifiers declarator $@28 declaration_list $@29 compound_statement  */
#line 808 "C99-parser.yacc"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-4].sym)->getSymbolName() == "main"){
			enMain = 0;
		}

		enFuncion = 0;
		activarDeclaracion = 0;
	}
#line 2867 "y.tab.cc"
    break;

  case 265: /* $@30: %empty  */
#line 818 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		if (table.insert((yyvsp[0].sym))) {
			logFile << "Inserted Function: " << (yyvsp[0].sym)->getSymbolName() << " in scope " << table.printScopeId() << endl;
			if((yyvsp[0].sym)->getSymbolName() == "main"){
				main_init = 1;
			}
		}
		else {
			logFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			errFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			error_count++;
		}
		table.enterScope();
		if ((yyvsp[0].sym)->getParamList() != nullptr) {
			for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].sym)->getParamList()->size(); i++){
				SymbolInfo* symbol = new SymbolInfo(*(yyvsp[0].sym)->getParamList()->at(i));
				if (table.insert(symbol)) {
					logFile << "Inserted Parameter: " << symbol->getSymbolName() << " in scope " << table.printScopeId() << endl;
				}
				else {
					logFile << "Error: " << symbol->getSymbolName() << " already exists in scope " << endl;
					errFile << "Error: " << symbol->getSymbolName() << " already exists in scope " << endl;
					error_count++;
				}
			}
		}
		if((yyvsp[0].sym)->getSymbolName() == "main"){
			enMain = 1;
		}

		enFuncion = 1;
		activarDeclaracion = 0;
		enSecuencial = 0;
	}
#line 2908 "y.tab.cc"
    break;

  case 266: /* function_definition: declaration_specifiers declarator $@30 compound_statement  */
#line 853 "C99-parser.yacc"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 0;
		}

		enFuncion = 0;
		activarDeclaracion = 0;
	}
#line 2923 "y.tab.cc"
    break;

  case 267: /* declaration_list: declaration  */
#line 866 "C99-parser.yacc"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2932 "y.tab.cc"
    break;

  case 268: /* declaration_list: declaration_list declaration  */
#line 870 "C99-parser.yacc"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2941 "y.tab.cc"
    break;


#line 2945 "y.tab.cc"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 877 "C99-parser.yacc"

#include <stdio.h>

extern char yytext[];
extern int column;
extern int line_count;

void yyerror(char const *s)
{
	logFile << "Error at line " << line_count << " column: " << column << ": syntax error" << endl << endl;
	errFile << "Error at line " << line_count << " column: " << column << ": syntax error" << endl << endl;
	error_count++;

	/* fflush(stdout);
	printf("\n%*s\n%*s\n", line_count, "^", column, s); */
}
