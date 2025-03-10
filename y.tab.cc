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
long posInit = -100;
long posVarsInit = -100;
int enMain = 0;

extern ofstream logFile;
extern ofstream errFile;

SymbolTable table(38);

#line 93 "y.tab.cc"

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
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_and_expression = 102,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 103,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 104,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 105,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 106,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 107,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 108,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 109,      /* assignment_operator  */
  YYSYMBOL_expression = 110,               /* expression  */
  YYSYMBOL_constant_expression = 111,      /* constant_expression  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 113,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 114,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 115,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 116,  /* storage_class_specifier  */
  YYSYMBOL_117_1 = 117,                    /* $@1  */
  YYSYMBOL_118_2 = 118,                    /* $@2  */
  YYSYMBOL_119_3 = 119,                    /* $@3  */
  YYSYMBOL_120_4 = 120,                    /* $@4  */
  YYSYMBOL_121_5 = 121,                    /* $@5  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_123_6 = 123,                    /* $@6  */
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
  YYSYMBOL_struct_or_union_specifier = 135, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 136,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 137,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 138,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 139, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 140,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 141,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 142,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 143,          /* enumerator_list  */
  YYSYMBOL_enumerator = 144,               /* enumerator  */
  YYSYMBOL_type_qualifier = 145,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 146,       /* function_specifier  */
  YYSYMBOL_declarator = 147,               /* declarator  */
  YYSYMBOL_direct_declarator = 148,        /* direct_declarator  */
  YYSYMBOL_pointer = 149,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 150,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 151,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 152,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 153,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 154,          /* identifier_list  */
  YYSYMBOL_type_name = 155,                /* type_name  */
  YYSYMBOL_abstract_declarator = 156,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 157, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 158,              /* initializer  */
  YYSYMBOL_initializer_list = 159,         /* initializer_list  */
  YYSYMBOL_designation = 160,              /* designation  */
  YYSYMBOL_designator_list = 161,          /* designator_list  */
  YYSYMBOL_designator = 162,               /* designator  */
  YYSYMBOL_statement = 163,                /* statement  */
  YYSYMBOL_164_18 = 164,                   /* $@18  */
  YYSYMBOL_165_19 = 165,                   /* $@19  */
  YYSYMBOL_labeled_statement = 166,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 167,       /* compound_statement  */
  YYSYMBOL_168_20 = 168,                   /* $@20  */
  YYSYMBOL_block_item_list = 169,          /* block_item_list  */
  YYSYMBOL_block_item = 170,               /* block_item  */
  YYSYMBOL_171_21 = 171,                   /* $@21  */
  YYSYMBOL_expression_statement = 172,     /* expression_statement  */
  YYSYMBOL_selection_statement = 173,      /* selection_statement  */
  YYSYMBOL_174_22 = 174,                   /* $@22  */
  YYSYMBOL_iteration_statement = 175,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 176,           /* jump_statement  */
  YYSYMBOL_177_23 = 177,                   /* $@23  */
  YYSYMBOL_178_24 = 178,                   /* $@24  */
  YYSYMBOL_translation_unit = 179,         /* translation_unit  */
  YYSYMBOL_180_25 = 180,                   /* $@25  */
  YYSYMBOL_external_declaration = 181,     /* external_declaration  */
  YYSYMBOL_function_definition = 182,      /* function_definition  */
  YYSYMBOL_183_26 = 183,                   /* $@26  */
  YYSYMBOL_184_27 = 184,                   /* $@27  */
  YYSYMBOL_185_28 = 185,                   /* $@28  */
  YYSYMBOL_declaration_list = 186          /* declaration_list  */
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
#define YYLAST   1383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  428

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
       0,    59,    59,    60,    61,    62,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    79,    80,    84,    85,
      86,    87,    88,    89,    93,    94,    95,    96,    97,    98,
     102,   103,   107,   108,   109,   110,   114,   115,   116,   120,
     121,   122,   126,   127,   128,   129,   130,   134,   135,   136,
     140,   141,   145,   146,   150,   151,   155,   156,   160,   161,
     165,   166,   170,   171,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   189,   190,   194,   198,   208,
     249,   250,   257,   258,   265,   266,   273,   274,   284,   285,
     289,   290,   294,   294,   298,   298,   302,   302,   306,   306,
     310,   310,   317,   317,   321,   321,   325,   325,   329,   329,
     333,   333,   337,   337,   341,   341,   345,   345,   349,   349,
     353,   353,   357,   357,   361,   361,   365,   366,   367,   371,
     388,   389,   408,   409,   413,   419,   430,   440,   441,   442,
     443,   447,   448,   452,   453,   454,   458,   459,   460,   461,
     462,   466,   467,   471,   472,   476,   477,   478,   482,   486,
     487,   492,   493,   494,   501,   505,   512,   519,   526,   530,
     534,   538,   542,   543,   547,   548,   549,   550,   554,   555,
     560,   561,   565,   566,   570,   574,   575,   579,   580,   584,
     585,   589,   590,   591,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   609,   610,   611,   615,   616,
     617,   618,   622,   626,   627,   631,   632,   636,   637,   638,
     639,   639,   640,   640,   641,   645,   646,   647,   651,   652,
     652,   670,   671,   675,   677,   677,   687,   688,   692,   693,
     693,   694,   698,   699,   700,   701,   702,   703,   707,   708,
     709,   712,   711,   720,   719,   730,   730,   731,   735,   736,
     740,   755,   740,   770,   770,   811,   815
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
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "$@1", "$@2", "$@3", "$@4", "$@5",
  "type_specifier", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "$@14", "$@15", "$@16", "$@17", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement", "$@18",
  "$@19", "labeled_statement", "compound_statement", "$@20",
  "block_item_list", "block_item", "$@21", "expression_statement",
  "selection_statement", "$@22", "iteration_statement", "jump_statement",
  "$@23", "$@24", "translation_unit", "$@25", "external_declaration",
  "function_definition", "$@26", "$@27", "$@28", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-264)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -270,  1052,  1334,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,    28,  -270,   -19,  1285,    32,     6,    35,    54,    67,
    1285,    59,   122,    79,   127,   129,    92,   137,   148,   181,
     188,   194,   196,  -270,    76,  -270,  1285,  1285,  -270,  -270,
    -270,   192,   201,  -270,    41,    -1,  -270,   -48,  -270,   -25,
      29,   -37,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,   221,  1143,  -270,  -270,   201,   207,    73,  -270,   230,
    -270,  -270,    -1,    41,  -270,   653,  1334,   235,  1170,   530,
      29,  1143,  1096,   167,  -270,    11,  1096,   124,   820,  -270,
      77,  -270,  -270,  -270,  -270,   224,   837,   867,   867,  -270,
    -270,  -270,   477,   622,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,    55,   476,   820,  -270,    75,   173,   250,     7,   248,
     240,   229,   231,   302,     5,  -270,  -270,  -270,  -270,   -19,
    1124,   245,  -270,  -270,  -270,    63,   251,   247,  -270,    86,
      95,  -270,   253,   254,   557,  1237,  -270,  -270,  -270,   820,
     -45,  -270,   237,  -270,  -270,    80,  -270,  -270,  -270,  -270,
    -270,   477,  -270,   477,  -270,  -270,  -270,    96,    10,   258,
     820,   262,  -270,   189,   653,   -35,  -270,   263,  -270,  -270,
     701,   820,   265,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,   820,  -270,   820,   820,   820,   820,
     820,   820,   820,   820,   820,   820,   820,   820,   820,   820,
     820,   820,   820,   820,   820,  -270,   235,  -270,  1285,   952,
     720,  -270,   164,  -270,   157,  -270,  1309,  -270,   269,   674,
    -270,  -270,   820,  -270,   267,   268,  -270,  -270,    11,  -270,
     820,  -270,   271,   272,  -270,   820,  1002,   179,  -270,   738,
     273,  -270,  -270,   574,  -270,  -270,  -270,  -270,  -270,    98,
    -270,   106,  -270,  -270,  -270,  -270,  -270,    75,    75,   173,
     173,   250,   250,   250,   250,     7,     7,   248,   240,   229,
     231,   302,   -22,  -270,  -270,  1077,  -270,   293,  -270,   274,
     276,  -270,   278,   280,   157,  1212,   755,  -270,  -270,  -270,
     281,   291,  -270,  -270,  -270,  -270,   290,   290,  -270,   622,
    -270,  -270,  -270,  -270,   653,  -270,   820,  -270,   820,  -270,
    -270,   820,   275,   270,   277,   284,   285,   288,  -270,   -23,
    -270,    18,   177,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   296,  -270,   307,   308,  -270,  -270,   216,  -270,
    -270,  -270,   292,   293,   289,  -270,  -270,   294,   820,   293,
    -270,   299,   314,  -270,   315,   293,   318,  -270,  -270,  -270,
    -270,  -270,   597,   293,  -270,  -270,  -270,   -21,  -270,   820,
     820,   820,   329,   392,  -270,  -270,  -270,   105,   107,   119,
     320,   398,   398,   293,   293,   293,   820,   785,   802,   286,
    -270,  -270,   121,   293,   153,   293,   154,  -270,   298,  -270,
     293,  -270,   293,   293,  -270,  -270,  -270,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     255,    92,    92,     1,   158,   156,   155,   157,   126,   132,
     133,     0,   259,     0,    80,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127,     0,   128,    84,    86,   257,   258,
     256,   150,     0,   161,     0,   174,    78,     0,    88,   260,
     160,     0,    81,    93,    95,    97,    99,   101,    83,   103,
     105,   107,   109,   111,   113,   115,   117,   119,   121,   123,
     125,   131,   102,    85,    87,     0,   153,     0,   151,     0,
     178,   176,   175,     0,    79,     0,    92,     0,    92,     0,
     159,   102,   139,   102,   134,     0,   137,     0,     0,   146,
       0,   162,   179,   177,    89,    90,     0,     0,     0,     3,
       2,     4,   102,     0,    24,    25,    26,    27,    28,    29,
       6,    18,    30,     0,    32,    36,    39,    42,    47,    50,
      52,    54,    56,    58,    60,    62,   205,    91,   265,     0,
      92,   229,   264,   187,   173,   186,     0,   180,   182,     0,
       0,   170,    25,     0,     0,   102,   140,   130,   135,     0,
       0,   141,   143,   138,   147,     0,    30,    77,   154,   148,
     152,   102,    22,   102,    19,    20,    75,     0,   189,     0,
       0,     0,   208,     0,     0,     0,   213,     0,    12,    13,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    64,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,     0,   228,   234,    92,
       0,   184,   191,   185,   192,   171,    92,   172,     0,     0,
     169,   165,     0,   164,    25,     0,   129,   144,     0,   136,
       0,   149,     0,     0,     5,     0,    92,   191,   190,     0,
       0,   216,   206,     0,   209,   212,   214,    11,     8,     0,
      16,     0,    10,    63,    33,    34,    35,    37,    38,    40,
      41,    45,    46,    43,    44,    48,    49,    51,    53,    55,
      57,    59,     0,   262,   233,   234,   231,   222,   201,     0,
       0,   195,    25,     0,   193,    92,     0,   181,   183,   188,
       0,     0,   168,   163,   142,   145,    23,     0,    76,     0,
      31,   215,   207,   210,     0,     9,     0,     7,     0,   230,
     232,     0,     0,     0,     0,     0,   253,     2,   236,     0,
     235,     0,     0,   217,   218,   219,   224,   202,   194,   199,
     196,   203,     0,   197,    25,     0,   166,   167,     0,   211,
      17,    61,     0,   222,     0,   249,   250,     0,     0,   222,
     237,     0,     0,   221,     0,   222,     0,   223,   204,   200,
     198,    14,     0,   222,   227,   248,   252,     0,   225,     0,
       0,     0,     0,    92,    15,   226,   254,     0,     0,     0,
       0,     0,     0,   222,   222,   222,     0,     0,     0,   238,
     241,   242,     0,   222,     0,   222,     0,   239,     0,   246,
     222,   244,   222,   222,   243,   247,   245,   240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,    60,  -270,   -97,    81,    82,    39,
      91,   171,   172,   175,   178,   176,  -270,   -80,   -82,  -270,
    -104,  -146,   -86,     0,  -270,   319,  -270,  -270,  -270,  -270,
    -270,  -270,    22,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,   316,   -72,   -54,
    -270,   158,  -270,   330,   -85,   239,  -270,    -2,   -41,   -39,
     -66,   -83,  -270,   180,  -270,    16,  -123,  -208,   -81,    89,
    -254,  -270,   226,   554,  -270,  -270,  -270,   -75,  -270,  -270,
     114,  -270,  -269,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,   411,  -270,  -270,  -270,  -270,  -270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   120,   121,   269,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   176,   204,
     339,   168,    12,   139,    47,    48,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    93,    94,    95,
     160,   161,    35,    77,    78,    36,    37,    79,    50,    51,
      82,   299,   147,   148,   149,   179,   300,   234,   182,   183,
     184,   185,   186,   340,   341,   342,   343,   344,   228,   295,
     296,   297,   345,   373,   423,   377,   346,   367,   368,     1,
       2,    38,    39,    86,   226,    87,   140
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,    13,    13,   136,   137,   146,    81,   153,   177,   324,
      90,    49,   142,   247,    52,   170,   213,   214,   167,   223,
      58,   158,   233,   154,   304,    83,   205,    43,   248,    44,
       5,   136,    54,   180,   260,   181,    73,    74,   156,     6,
       7,    84,   163,   103,   249,    43,  -263,    44,   -90,   304,
     255,   255,   255,   265,   225,   258,    45,    53,   178,   187,
     188,   189,    55,    85,   -90,   328,   370,   177,   396,   177,
      46,   371,   245,   372,    45,    43,   256,    44,   230,   167,
     170,   105,    56,   158,   239,    45,    45,   271,   145,   215,
     216,   224,    41,   162,    92,    88,    57,    89,   159,    42,
     167,    59,   136,   264,   315,    43,   232,    44,   270,   274,
     275,   276,    61,    92,    92,    92,    45,   178,    92,   178,
     292,   190,   273,   191,   402,   192,     5,    43,   324,   229,
      64,   230,   407,   408,    92,     6,     7,   105,    45,   257,
      71,    76,   294,   231,    76,    99,   100,    72,   303,   169,
     206,   293,   251,   237,    60,   207,   208,   310,   166,   238,
     311,    62,   320,   254,    63,   325,   172,   174,   175,   255,
     167,   326,   403,   318,   404,   327,    65,    92,   255,   255,
     255,   136,   323,   166,    66,   362,   405,   252,   418,   253,
     232,    90,   255,    92,   255,    92,   164,   165,     5,  -104,
    -106,  -108,  -110,  -116,  -118,  -112,  -114,     6,     7,   294,
    -120,  -122,  -124,     8,     9,    10,    11,   257,    67,   166,
     420,   422,   352,   305,   355,   306,   255,   255,    43,   145,
     229,    68,   230,   374,   375,   376,   145,   136,    69,   157,
     166,    70,   136,   359,   360,   256,   162,   230,   361,   209,
     210,   167,   281,   282,   283,   284,   145,   211,   212,   217,
     218,   262,   263,    75,   387,    76,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,    80,   397,   398,   399,   381,   382,
     277,   278,    91,   279,   280,    98,   106,   101,   107,   108,
     136,   323,   412,   414,   416,   145,   141,   401,   285,   286,
     166,    96,    85,   220,   219,   222,   221,   227,   235,   166,
     236,   102,   240,   241,   250,   259,   261,   267,    80,   272,
      96,    96,    96,   309,   364,    96,   312,   313,   316,   317,
     417,   347,   321,   348,   331,   332,  -220,   349,  -220,   350,
     356,    96,   333,   334,   335,   336,   109,   337,   111,   112,
     357,   319,   363,   378,   141,   389,   365,   114,   115,   116,
     117,   118,   119,   366,  -251,   369,   379,   380,   385,   383,
     390,   391,   338,   386,   393,   400,   406,   424,   166,    80,
     287,   166,   288,   102,    96,   106,   289,   107,   108,   291,
     290,   106,   104,   107,   108,    97,   314,   155,   358,   330,
      96,   266,    96,    40,     0,     0,   308,     0,   -94,   -96,
     -98,  -100,     4,     5,  -104,  -106,  -108,  -110,  -116,  -118,
    -112,  -114,     6,     7,  -102,  -120,  -122,  -124,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
       0,   109,   110,   111,   112,     0,   114,   115,   116,   117,
     118,   119,   114,   115,   116,   117,   118,   119,   102,     0,
     106,   338,   107,   108,     0,     0,     0,   338,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,     0,     0,     0,     0,     0,     0,     5,  -104,
    -106,  -108,  -110,  -116,  -118,  -112,  -114,     6,     7,     0,
    -120,  -122,  -124,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,   106,     0,   107,   108,     0,     0,     0,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,   119,   150,     0,     0,
     106,     5,   107,   108,   203,     0,     0,     0,     0,     0,
       6,     7,     0,     0,     0,     0,     0,   106,     0,   107,
     108,     0,     0,     0,   242,     0,     0,     0,     5,     0,
       0,     0,     0,   109,   110,   111,   112,     6,     7,   151,
     106,     0,   107,   108,   114,   152,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   106,   243,   107,   108,     0,
       0,   114,   244,   116,   117,   118,   119,   109,   110,   111,
     112,     0,   180,     0,   181,   113,   322,     0,   114,   115,
     116,   117,   118,   119,     0,     0,   106,     0,   107,   108,
     109,   110,   111,   112,     0,   180,     0,   181,   113,   394,
       0,   114,   115,   116,   117,   118,   119,   106,     0,   107,
     108,     0,     0,     0,     0,   109,   110,   111,   112,     0,
     180,     0,   181,   113,     0,     0,   114,   115,   116,   117,
     118,   119,     0,     0,   106,     5,   107,   108,     0,     0,
       0,     0,     0,     0,     6,     7,   109,   110,   111,   112,
       0,     0,     0,   106,   113,   107,   108,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,   109,   110,   111,
     112,   106,     0,   107,   108,     0,     0,     0,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,   106,     0,
     107,   108,     0,     0,   109,   110,   111,   112,   268,     0,
       0,     0,     0,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,   109,   110,   111,   112,     0,   106,   301,
     107,   108,     0,     0,   114,   302,   116,   117,   118,   119,
       0,   109,   110,   111,   112,   106,     0,   107,   108,   319,
       0,     0,   114,   115,   116,   117,   118,   119,   109,   110,
     111,   112,     0,   106,   353,   107,   108,     0,     0,   114,
     354,   116,   117,   118,   119,     0,     0,     0,     0,     0,
     106,     0,   107,   108,     0,     0,     0,     0,   109,   110,
     111,   112,   413,     0,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,   119,   109,   110,   111,   112,   415,
     106,     0,   107,   108,     0,     0,   114,   115,   116,   117,
     118,   119,     0,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     109,   110,   111,   171,     0,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,   119,   384,     0,     0,
       0,     0,     0,   388,     0,     0,     0,     0,     0,   392,
     109,   110,   111,   173,     0,     0,     0,   395,     0,     0,
       0,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   410,   411,
       0,     0,     0,     0,     0,     0,     0,   419,     0,   421,
       0,     0,     0,     0,   425,     0,   426,   427,   -94,   -96,
     -98,  -100,     4,     5,  -104,  -106,  -108,  -110,  -116,  -118,
    -112,  -114,     6,     7,  -102,  -120,  -122,  -124,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,   229,   298,
     230,     0,     0,     0,     0,     0,     0,    45,   -94,   -96,
     -98,  -100,     4,     5,  -104,  -106,  -108,  -110,  -116,  -118,
    -112,  -114,     6,     7,  -102,  -120,  -122,  -124,     8,     9,
      10,    11,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   298,
     230,     0,     0,     0,     0,     0,     0,    45,   -94,   -96,
     -98,  -100,     4,     5,  -104,  -106,  -108,  -110,  -116,  -118,
    -112,  -114,     6,     7,  -102,  -120,  -122,  -124,     8,     9,
      10,    11,   -92,   -94,   -96,   -98,  -100,     4,     5,  -104,
    -106,  -108,  -110,  -116,  -118,  -112,  -114,     6,     7,  -102,
    -120,  -122,  -124,     8,     9,    10,    11,     5,  -104,  -106,
    -108,  -110,  -116,  -118,  -112,  -114,     6,     7,  -102,  -120,
    -122,  -124,     8,     9,    10,    11,     0,     0,     0,   329,
     -94,   -96,   -98,  -100,     4,     5,  -104,  -106,  -108,  -110,
    -116,  -118,  -112,  -114,     6,     7,  -102,  -120,  -122,  -124,
       8,     9,    10,    11,     5,  -104,  -106,  -108,  -110,  -116,
    -118,  -112,  -114,     6,     7,     0,  -120,  -122,  -124,     8,
       9,    10,    11,     0,     0,  -261,   -94,   -96,   -98,  -100,
       4,     5,  -104,  -106,  -108,  -110,  -116,  -118,  -112,  -114,
       6,     7,  -102,  -120,  -122,  -124,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,   144,   -94,   -96,
     -98,  -100,     4,     5,  -104,  -106,  -108,  -110,  -116,  -118,
    -112,  -114,     6,     7,  -102,  -120,  -122,  -124,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     5,  -104,
    -106,  -108,  -110,  -116,  -118,  -112,  -114,     6,     7,   351,
    -120,  -122,  -124,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     -92,   -94,   -96,   -98,  -100,     4,     5,  -104,  -106,  -108,
    -110,  -116,  -118,  -112,  -114,     6,     7,  -102,  -120,  -122,
    -124,     8,     9,    10,    11,   -94,   -96,   -98,  -100,     4,
       5,  -104,  -106,  -108,  -110,  -116,  -118,  -112,  -114,     6,
       7,  -102,  -120,  -122,  -124,     8,     9,    10,    11,   307,
     -94,   -96,   -98,  -100,     4,     5,  -104,  -106,  -108,  -110,
    -116,  -118,  -112,  -114,     6,     7,  -102,  -120,  -122,  -124,
       8,     9,    10,    11
};

static const yytype_int16 yycheck[] =
{
      86,     1,     2,    85,    85,    88,    45,    89,   112,   263,
      51,    13,    87,   159,    14,   100,     9,    10,    98,    14,
      20,    93,   145,    89,   232,    73,   123,    64,    73,    66,
      31,   113,    26,    68,   180,    70,    36,    37,    92,    40,
      41,    89,    96,    82,    89,    64,    71,    66,    73,   257,
      73,    73,    73,    88,   140,   178,    75,    25,   112,     4,
       5,     6,    27,    88,    89,    87,    89,   171,    89,   173,
      89,    53,   154,    55,    75,    64,    66,    66,    68,   159,
     165,    83,    28,   155,   150,    75,    75,   191,    88,    82,
      83,    86,    64,    95,    72,    66,    29,    68,    87,    71,
     180,    42,   184,   184,   250,    64,   145,    66,   190,   206,
     207,   208,    33,    91,    92,    93,    75,   171,    96,   173,
     224,    66,   204,    68,   393,    70,    31,    64,   382,    66,
      38,    68,   401,   402,   112,    40,    41,   139,    75,   178,
      64,    64,   228,   145,    64,    72,    73,    71,   230,    72,
      75,   226,    72,    67,    32,    80,    81,   239,    98,    73,
     242,    34,   259,    67,    35,    67,   106,   107,   108,    73,
     250,    73,    67,   255,    67,    69,    39,   155,    73,    73,
      73,   263,   263,   123,    36,   331,    67,   171,    67,   173,
     229,   232,    73,   171,    73,   173,    72,    73,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   295,
      43,    44,    45,    46,    47,    48,    49,   256,    37,   159,
      67,    67,   305,    66,   306,    68,    73,    73,    64,   229,
      66,    43,    68,    56,    57,    58,   236,   319,    44,    72,
     180,    45,   324,   324,   326,    66,   248,    68,   328,    76,
      77,   331,   213,   214,   215,   216,   256,     7,     8,    11,
      12,    72,    73,    71,   368,    64,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    45,   389,   390,   391,    72,    73,
     209,   210,    71,   211,   212,    88,     3,    67,     5,     6,
     382,   382,   406,   407,   408,   305,    71,   393,   217,   218,
     250,    72,    88,    84,    74,    13,    85,    72,    67,   259,
      73,    82,    69,    69,    87,    67,    64,    64,    89,    64,
      91,    92,    93,    64,    64,    96,    69,    69,    67,    67,
      54,    67,    69,    67,    51,    52,    53,    69,    55,    69,
      69,   112,    59,    60,    61,    62,    63,    64,    65,    66,
      69,    71,    87,    67,    71,    66,    89,    74,    75,    76,
      77,    78,    79,    89,    89,    87,    69,    69,    89,    87,
      66,    66,    89,    89,    66,    56,    66,    89,   328,   150,
     219,   331,   220,   154,   155,     3,   221,     5,     6,   223,
     222,     3,    83,     5,     6,    75,   248,    91,   319,   295,
     171,   185,   173,     2,    -1,    -1,   236,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    63,    64,    65,    66,    -1,    74,    75,    76,    77,
      78,    79,    74,    75,    76,    77,    78,    79,   239,    -1,
       3,    89,     5,     6,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    27,    -1,    -1,
       3,    31,     5,     6,    88,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    40,    41,    69,
       3,    -1,     5,     6,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    -1,     3,    69,     5,     6,    -1,
      -1,    74,    75,    76,    77,    78,    79,    63,    64,    65,
      66,    -1,    68,    -1,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,     3,    -1,     5,     6,
      63,    64,    65,    66,    -1,    68,    -1,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,     3,    -1,     5,
       6,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    -1,    70,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,     3,    31,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    63,    64,    65,    66,
      -1,    -1,    -1,     3,    71,     5,     6,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,     3,    -1,     5,     6,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    -1,    -1,    63,    64,    65,    66,    -1,     3,    69,
       5,     6,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    63,    64,    65,    66,     3,    -1,     5,     6,    71,
      -1,    -1,    74,    75,    76,    77,    78,    79,    63,    64,
      65,    66,    -1,     3,    69,     5,     6,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    63,    64,    65,    66,    67,
       3,    -1,     5,     6,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,   363,    -1,    -1,
      -1,    -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,   375,
      63,    64,    65,    66,    -1,    -1,    -1,   383,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,   404,   405,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,   415,
      -1,    -1,    -1,    -1,   420,    -1,   422,   423,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    72,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    71,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    67,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   179,   180,     0,    30,    31,    40,    41,    46,    47,
      48,    49,   112,   113,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   142,   145,   146,   181,   182,
     181,    64,    71,    64,    66,    75,    89,   114,   115,   147,
     148,   149,   113,    25,    26,    27,    28,    29,   113,    42,
      32,    33,    34,    35,    38,    39,    36,    37,    43,    44,
      45,    64,    71,   113,   113,    71,    64,   143,   144,   147,
     145,   149,   150,    73,    89,    88,   183,   185,    66,    68,
     148,    71,   122,   137,   138,   139,   145,   143,    88,    72,
      73,    67,   145,   149,   115,   147,     3,     5,     6,    63,
      64,    65,    66,    71,    74,    75,    76,    77,    78,    79,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   158,   112,   113,
     186,    71,   167,    64,    67,   113,   151,   152,   153,   154,
      27,    69,    75,   108,   150,   137,   139,    72,   138,    87,
     140,   141,   147,   139,    72,    73,    94,   107,   111,    72,
     144,    66,    94,    66,    94,    94,   108,   110,   139,   155,
      68,    70,   158,   159,   160,   161,   162,     4,     5,     6,
      66,    68,    70,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    88,   109,    96,    75,    80,    81,    76,
      77,     7,     8,     9,    10,    82,    83,    11,    12,    74,
      84,    85,    13,    14,    86,   112,   184,    72,   168,    66,
      68,   147,   149,   156,   157,    67,    73,    67,    73,   150,
      69,    69,    27,    69,    75,   108,    72,   111,    73,    89,
      87,    72,   155,   155,    67,    73,    66,   149,   156,    67,
     111,    64,    72,    73,   158,    88,   162,    64,    67,    93,
     108,   110,    64,   108,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   102,   103,
     104,   105,   110,   167,   112,   169,   170,   171,    67,   151,
     156,    69,    75,   108,   157,    66,    68,    50,   153,    64,
     108,   108,    69,    69,   141,   111,    67,    67,   108,    71,
      96,    69,    72,   158,   160,    67,    73,    69,    87,    72,
     170,    51,    52,    59,    60,    61,    62,    64,    89,   110,
     163,   164,   165,   166,   167,   172,   176,    67,    67,    69,
      69,    67,   151,    69,    75,   108,    69,    69,   159,   158,
     108,   107,   111,    87,    64,    89,    89,   177,   178,    87,
      89,    53,    55,   173,    56,    57,    58,   175,    67,    69,
      69,    72,    73,    87,   163,    89,    89,   110,   163,    66,
      66,    66,   163,    66,    72,   163,    89,   110,   110,   110,
      56,   112,   172,    67,    67,    67,    66,   172,   172,   163,
     163,   163,   110,    67,   110,    67,   110,    54,    67,   163,
      67,   163,    67,   174,    89,   163,   163,   163
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   117,   116,   118,   116,   119,   116,   120,   116,
     121,   116,   123,   122,   124,   122,   125,   122,   126,   122,
     127,   122,   128,   122,   129,   122,   130,   122,   131,   122,
     132,   122,   133,   122,   134,   122,   122,   122,   122,   135,
     135,   135,   136,   136,   137,   137,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   158,   158,   158,   159,   159,
     159,   159,   160,   161,   161,   162,   162,   163,   163,   163,
     164,   163,   165,   163,   163,   166,   166,   166,   167,   168,
     167,   169,   169,   170,   171,   170,   172,   172,   173,   174,
     173,   173,   175,   175,   175,   175,   175,   175,   176,   176,
     176,   177,   176,   178,   176,   180,   179,   179,   181,   181,
     183,   184,   182,   185,   182,   186,   186
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     3,     1,     2,     1,
       2,     1,     3,     1,     2,     3,     4,     5,     5,     6,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     5,     4,     4,     6,     6,     5,     4,
       3,     4,     4,     3,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       0,     2,     0,     2,     1,     3,     4,     3,     2,     0,
       4,     1,     2,     1,     0,     2,     1,     2,     5,     0,
       8,     5,     5,     7,     6,     7,     6,     7,     3,     2,
       2,     0,     3,     0,     4,     0,     2,     2,     1,     1,
       0,     0,     6,     0,     4,     1,     2
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
#line 60 "C99-parser.yacc"
               {(yyval.sym) = (yyvsp[0].sym);}
#line 1794 "y.tab.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 62 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[-1].sym);}
#line 1800 "y.tab.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 66 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1806 "y.tab.cc"
    break;

  case 14: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 74 "C99-parser.yacc"
                                                     {(yyval.sym) = (yyvsp[-1].sym);}
#line 1812 "y.tab.cc"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 75 "C99-parser.yacc"
                                                        {(yyval.sym) = (yyvsp[-2].sym);}
#line 1818 "y.tab.cc"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 84 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1824 "y.tab.cc"
    break;

  case 19: /* unary_expression: INC_OP unary_expression  */
#line 85 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1830 "y.tab.cc"
    break;

  case 20: /* unary_expression: DEC_OP unary_expression  */
#line 86 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1836 "y.tab.cc"
    break;

  case 21: /* unary_expression: unary_operator cast_expression  */
#line 87 "C99-parser.yacc"
                                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1842 "y.tab.cc"
    break;

  case 22: /* unary_expression: SIZEOF unary_expression  */
#line 88 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1848 "y.tab.cc"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 89 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 1854 "y.tab.cc"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 102 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1860 "y.tab.cc"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 103 "C99-parser.yacc"
                                            {(yyval.sym) = (yyvsp[0].sym);}
#line 1866 "y.tab.cc"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 107 "C99-parser.yacc"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1872 "y.tab.cc"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 114 "C99-parser.yacc"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1878 "y.tab.cc"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 120 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1884 "y.tab.cc"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 126 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1890 "y.tab.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 134 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1896 "y.tab.cc"
    break;

  case 50: /* and_expression: equality_expression  */
#line 140 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1902 "y.tab.cc"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 145 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1908 "y.tab.cc"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 150 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1914 "y.tab.cc"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 155 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1920 "y.tab.cc"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 160 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1926 "y.tab.cc"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 165 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1932 "y.tab.cc"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 170 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1938 "y.tab.cc"
    break;

  case 78: /* declaration: declaration_specifiers ';'  */
#line 199 "C99-parser.yacc"
        {
		if((yyvsp[-1].sym)->isStruct()){
			(yyval.symList) = new vector<SymbolInfo*>();
			SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].sym));
			(yyval.symList)->push_back(symbol);
			table.insert((yyvsp[-1].sym));
		}
	}
#line 1951 "y.tab.cc"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 208 "C99-parser.yacc"
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
#line 1994 "y.tab.cc"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier  */
#line 249 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2000 "y.tab.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 251 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2011 "y.tab.cc"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 257 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2017 "y.tab.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 259 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2028 "y.tab.cc"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 265 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2034 "y.tab.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 267 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2045 "y.tab.cc"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 273 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[0].sym); }
#line 2051 "y.tab.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 275 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2062 "y.tab.cc"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 284 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2068 "y.tab.cc"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 285 "C99-parser.yacc"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2074 "y.tab.cc"
    break;

  case 90: /* init_declarator: declarator  */
#line 289 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2080 "y.tab.cc"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 290 "C99-parser.yacc"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 2086 "y.tab.cc"
    break;

  case 92: /* $@1: %empty  */
#line 294 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2095 "y.tab.cc"
    break;

  case 93: /* storage_class_specifier: $@1 TYPEDEF  */
#line 297 "C99-parser.yacc"
                            { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 2101 "y.tab.cc"
    break;

  case 94: /* $@2: %empty  */
#line 298 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2110 "y.tab.cc"
    break;

  case 95: /* storage_class_specifier: $@2 EXTERN  */
#line 301 "C99-parser.yacc"
                           { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 2116 "y.tab.cc"
    break;

  case 96: /* $@3: %empty  */
#line 302 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2125 "y.tab.cc"
    break;

  case 97: /* storage_class_specifier: $@3 STATIC  */
#line 305 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 2131 "y.tab.cc"
    break;

  case 98: /* $@4: %empty  */
#line 306 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2140 "y.tab.cc"
    break;

  case 99: /* storage_class_specifier: $@4 AUTO  */
#line 309 "C99-parser.yacc"
                         { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 2146 "y.tab.cc"
    break;

  case 100: /* $@5: %empty  */
#line 310 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2155 "y.tab.cc"
    break;

  case 101: /* storage_class_specifier: $@5 REGISTER  */
#line 313 "C99-parser.yacc"
                             { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 2161 "y.tab.cc"
    break;

  case 102: /* $@6: %empty  */
#line 317 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2170 "y.tab.cc"
    break;

  case 103: /* type_specifier: $@6 VOID  */
#line 320 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 2176 "y.tab.cc"
    break;

  case 104: /* $@7: %empty  */
#line 321 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2185 "y.tab.cc"
    break;

  case 105: /* type_specifier: $@7 CHAR  */
#line 324 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 2191 "y.tab.cc"
    break;

  case 106: /* $@8: %empty  */
#line 325 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2200 "y.tab.cc"
    break;

  case 107: /* type_specifier: $@8 SHORT  */
#line 328 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 2206 "y.tab.cc"
    break;

  case 108: /* $@9: %empty  */
#line 329 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2215 "y.tab.cc"
    break;

  case 109: /* type_specifier: $@9 INT  */
#line 332 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 2221 "y.tab.cc"
    break;

  case 110: /* $@10: %empty  */
#line 333 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2230 "y.tab.cc"
    break;

  case 111: /* type_specifier: $@10 LONG  */
#line 336 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 2236 "y.tab.cc"
    break;

  case 112: /* $@11: %empty  */
#line 337 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2245 "y.tab.cc"
    break;

  case 113: /* type_specifier: $@11 FLOAT  */
#line 340 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 2251 "y.tab.cc"
    break;

  case 114: /* $@12: %empty  */
#line 341 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2260 "y.tab.cc"
    break;

  case 115: /* type_specifier: $@12 DOUBLE  */
#line 344 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2266 "y.tab.cc"
    break;

  case 116: /* $@13: %empty  */
#line 345 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2275 "y.tab.cc"
    break;

  case 117: /* type_specifier: $@13 SIGNED  */
#line 348 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2281 "y.tab.cc"
    break;

  case 118: /* $@14: %empty  */
#line 349 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2290 "y.tab.cc"
    break;

  case 119: /* type_specifier: $@14 UNSIGNED  */
#line 352 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2296 "y.tab.cc"
    break;

  case 120: /* $@15: %empty  */
#line 353 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2305 "y.tab.cc"
    break;

  case 121: /* type_specifier: $@15 BOOL  */
#line 356 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2311 "y.tab.cc"
    break;

  case 122: /* $@16: %empty  */
#line 357 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2320 "y.tab.cc"
    break;

  case 123: /* type_specifier: $@16 COMPLEX  */
#line 360 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2326 "y.tab.cc"
    break;

  case 124: /* $@17: %empty  */
#line 361 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2335 "y.tab.cc"
    break;

  case 125: /* type_specifier: $@17 IMAGINARY  */
#line 364 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2341 "y.tab.cc"
    break;

  case 126: /* type_specifier: USER_DEFINED  */
#line 365 "C99-parser.yacc"
                        { (yyval.sym) = new SymbolInfo("user_defined", "USER_DEFINED"); }
#line 2347 "y.tab.cc"
    break;

  case 127: /* type_specifier: struct_or_union_specifier  */
#line 366 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2353 "y.tab.cc"
    break;

  case 128: /* type_specifier: enum_specifier  */
#line 367 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2359 "y.tab.cc"
    break;

  case 129: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 372 "C99-parser.yacc"
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
#line 2380 "y.tab.cc"
    break;

  case 131: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 390 "C99-parser.yacc"
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
#line 2400 "y.tab.cc"
    break;

  case 132: /* struct_or_union: STRUCT  */
#line 408 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2406 "y.tab.cc"
    break;

  case 133: /* struct_or_union: UNION  */
#line 409 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2412 "y.tab.cc"
    break;

  case 134: /* struct_declaration_list: struct_declaration  */
#line 413 "C99-parser.yacc"
                             { (yyval.symList) = (yyvsp[0].symList); 
	for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
	}
#line 2422 "y.tab.cc"
    break;

  case 135: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 420 "C99-parser.yacc"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2434 "y.tab.cc"
    break;

  case 136: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 431 "C99-parser.yacc"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2445 "y.tab.cc"
    break;

  case 141: /* struct_declarator_list: struct_declarator  */
#line 447 "C99-parser.yacc"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2451 "y.tab.cc"
    break;

  case 142: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 448 "C99-parser.yacc"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2457 "y.tab.cc"
    break;

  case 143: /* struct_declarator: declarator  */
#line 452 "C99-parser.yacc"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2463 "y.tab.cc"
    break;

  case 144: /* struct_declarator: ':' constant_expression  */
#line 453 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2469 "y.tab.cc"
    break;

  case 145: /* struct_declarator: declarator ':' constant_expression  */
#line 454 "C99-parser.yacc"
                                             { (yyval.sym) = (yyvsp[-2].sym); }
#line 2475 "y.tab.cc"
    break;

  case 159: /* declarator: pointer direct_declarator  */
#line 486 "C99-parser.yacc"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2481 "y.tab.cc"
    break;

  case 160: /* declarator: direct_declarator  */
#line 487 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym);}
#line 2487 "y.tab.cc"
    break;

  case 161: /* direct_declarator: IDENTIFIER  */
#line 492 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2493 "y.tab.cc"
    break;

  case 162: /* direct_declarator: '(' declarator ')'  */
#line 493 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2499 "y.tab.cc"
    break;

  case 163: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 494 "C99-parser.yacc"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2511 "y.tab.cc"
    break;

  case 164: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 501 "C99-parser.yacc"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2520 "y.tab.cc"
    break;

  case 165: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 505 "C99-parser.yacc"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2532 "y.tab.cc"
    break;

  case 166: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 512 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2544 "y.tab.cc"
    break;

  case 167: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 519 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2556 "y.tab.cc"
    break;

  case 168: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 526 "C99-parser.yacc"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2565 "y.tab.cc"
    break;

  case 169: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 530 "C99-parser.yacc"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2574 "y.tab.cc"
    break;

  case 170: /* direct_declarator: direct_declarator '[' ']'  */
#line 534 "C99-parser.yacc"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2583 "y.tab.cc"
    break;

  case 171: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 538 "C99-parser.yacc"
                                                        {
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2592 "y.tab.cc"
    break;

  case 172: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 542 "C99-parser.yacc"
                                                    { (yyval.sym) = (yyvsp[-3].sym); }
#line 2598 "y.tab.cc"
    break;

  case 173: /* direct_declarator: direct_declarator '(' ')'  */
#line 543 "C99-parser.yacc"
                                    { (yyval.sym) = (yyvsp[-2].sym); }
#line 2604 "y.tab.cc"
    break;

  case 180: /* parameter_type_list: parameter_list  */
#line 560 "C99-parser.yacc"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2610 "y.tab.cc"
    break;

  case 182: /* parameter_list: parameter_declaration  */
#line 565 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2616 "y.tab.cc"
    break;

  case 183: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 566 "C99-parser.yacc"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2622 "y.tab.cc"
    break;

  case 184: /* parameter_declaration: declaration_specifiers declarator  */
#line 570 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2631 "y.tab.cc"
    break;

  case 187: /* identifier_list: IDENTIFIER  */
#line 579 "C99-parser.yacc"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2637 "y.tab.cc"
    break;

  case 188: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 580 "C99-parser.yacc"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2643 "y.tab.cc"
    break;

  case 206: /* initializer: '{' initializer_list '}'  */
#line 610 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 2649 "y.tab.cc"
    break;

  case 207: /* initializer: '{' initializer_list ',' '}'  */
#line 611 "C99-parser.yacc"
                                       {(yyval.sym) = (yyvsp[-2].sym);}
#line 2655 "y.tab.cc"
    break;

  case 209: /* initializer_list: designation initializer  */
#line 616 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 2661 "y.tab.cc"
    break;

  case 220: /* $@18: %empty  */
#line 639 "C99-parser.yacc"
          { table.enterScope(); }
#line 2667 "y.tab.cc"
    break;

  case 221: /* statement: $@18 selection_statement  */
#line 639 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2673 "y.tab.cc"
    break;

  case 222: /* $@19: %empty  */
#line 640 "C99-parser.yacc"
          { table.enterScope(); }
#line 2679 "y.tab.cc"
    break;

  case 223: /* statement: $@19 iteration_statement  */
#line 640 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2685 "y.tab.cc"
    break;

  case 229: /* $@20: %empty  */
#line 652 "C99-parser.yacc"
              {
			if (enMain > 0) {
				enMain++;
			}
		}
#line 2695 "y.tab.cc"
    break;

  case 230: /* compound_statement: '{' $@20 block_item_list '}'  */
#line 658 "C99-parser.yacc"
            {
			if (enMain == 2 && MPIInitDone == 1 && main_end == 1) {
				MPIFinalize();
				main_end = 0;
			}
			else if (enMain > 0) {
				enMain--;
			}
		}
#line 2709 "y.tab.cc"
    break;

  case 234: /* $@21: %empty  */
#line 677 "C99-parser.yacc"
        {
		if(main_init == 1 && MPIInitDone == 0 && posInit == -100){
			posInit = output.tellp();
			output.write("                                                                                                                                                      \n", 151);
		}
	}
#line 2720 "y.tab.cc"
    break;

  case 239: /* $@22: %empty  */
#line 693 "C99-parser.yacc"
                                               { table.exitScope(); table.enterScope(); }
#line 2726 "y.tab.cc"
    break;

  case 251: /* $@23: %empty  */
#line 712 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2737 "y.tab.cc"
    break;

  case 253: /* $@24: %empty  */
#line 720 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2748 "y.tab.cc"
    break;

  case 255: /* $@25: %empty  */
#line 730 "C99-parser.yacc"
          {output.write("                   \n                                    \n", 57);}
#line 2754 "y.tab.cc"
    break;

  case 257: /* translation_unit: translation_unit external_declaration  */
#line 731 "C99-parser.yacc"
                                                {logFile << "SE METE AQUI" << endl;}
#line 2760 "y.tab.cc"
    break;

  case 260: /* $@26: %empty  */
#line 740 "C99-parser.yacc"
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
#line 2781 "y.tab.cc"
    break;

  case 261: /* $@27: %empty  */
#line 755 "C99-parser.yacc"
                           {
	// 	for (auto symbol : *$4) {
    //     logFile << "Debug Simbol: " << symbol->getSymbolName() << "\n";
    // }
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 1;
		}
	}
#line 2795 "y.tab.cc"
    break;

  case 262: /* function_definition: declaration_specifiers declarator $@26 declaration_list $@27 compound_statement  */
#line 763 "C99-parser.yacc"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-4].sym)->getSymbolName() == "main"){
			enMain = 0;
		}
	}
#line 2807 "y.tab.cc"
    break;

  case 263: /* $@28: %empty  */
#line 770 "C99-parser.yacc"
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
	}
#line 2844 "y.tab.cc"
    break;

  case 264: /* function_definition: declaration_specifiers declarator $@28 compound_statement  */
#line 801 "C99-parser.yacc"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 0;
		}
	}
#line 2856 "y.tab.cc"
    break;

  case 265: /* declaration_list: declaration  */
#line 811 "C99-parser.yacc"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2865 "y.tab.cc"
    break;

  case 266: /* declaration_list: declaration_list declaration  */
#line 815 "C99-parser.yacc"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2874 "y.tab.cc"
    break;


#line 2878 "y.tab.cc"

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

#line 822 "C99-parser.yacc"

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
