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
  YYSYMBOL_type_specifier = 121,           /* type_specifier  */
  YYSYMBOL_122_5 = 122,                    /* $@5  */
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
  YYSYMBOL_struct_or_union_specifier = 134, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 135,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 136,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 137,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 138, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 139,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 140,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 141,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 142,          /* enumerator_list  */
  YYSYMBOL_enumerator = 143,               /* enumerator  */
  YYSYMBOL_type_qualifier = 144,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 145,       /* function_specifier  */
  YYSYMBOL_declarator = 146,               /* declarator  */
  YYSYMBOL_direct_declarator = 147,        /* direct_declarator  */
  YYSYMBOL_pointer = 148,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 149,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 150,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 151,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 152,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 153,          /* identifier_list  */
  YYSYMBOL_type_name = 154,                /* type_name  */
  YYSYMBOL_abstract_declarator = 155,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 156, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 157,              /* initializer  */
  YYSYMBOL_initializer_list = 158,         /* initializer_list  */
  YYSYMBOL_designation = 159,              /* designation  */
  YYSYMBOL_designator_list = 160,          /* designator_list  */
  YYSYMBOL_designator = 161,               /* designator  */
  YYSYMBOL_statement = 162,                /* statement  */
  YYSYMBOL_163_17 = 163,                   /* $@17  */
  YYSYMBOL_164_18 = 164,                   /* $@18  */
  YYSYMBOL_labeled_statement = 165,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 166,       /* compound_statement  */
  YYSYMBOL_167_19 = 167,                   /* $@19  */
  YYSYMBOL_block_item_list = 168,          /* block_item_list  */
  YYSYMBOL_block_item = 169,               /* block_item  */
  YYSYMBOL_170_20 = 170,                   /* $@20  */
  YYSYMBOL_expression_statement = 171,     /* expression_statement  */
  YYSYMBOL_selection_statement = 172,      /* selection_statement  */
  YYSYMBOL_173_21 = 173,                   /* $@21  */
  YYSYMBOL_iteration_statement = 174,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 175,           /* jump_statement  */
  YYSYMBOL_176_22 = 176,                   /* $@22  */
  YYSYMBOL_177_23 = 177,                   /* $@23  */
  YYSYMBOL_translation_unit = 178,         /* translation_unit  */
  YYSYMBOL_179_24 = 179,                   /* $@24  */
  YYSYMBOL_external_declaration = 180,     /* external_declaration  */
  YYSYMBOL_function_definition = 181,      /* function_definition  */
  YYSYMBOL_182_25 = 182,                   /* $@25  */
  YYSYMBOL_183_26 = 183,                   /* $@26  */
  YYSYMBOL_184_27 = 184,                   /* $@27  */
  YYSYMBOL_declaration_list = 185          /* declaration_list  */
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
#define YYLAST   1374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

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
     289,   290,   294,   295,   295,   299,   299,   303,   303,   307,
     307,   314,   314,   318,   318,   322,   322,   326,   326,   330,
     330,   334,   334,   338,   338,   342,   342,   346,   346,   350,
     350,   354,   354,   358,   358,   362,   363,   364,   368,   385,
     386,   400,   401,   405,   411,   422,   432,   433,   434,   435,
     439,   440,   444,   445,   446,   450,   451,   452,   453,   454,
     458,   459,   463,   464,   468,   469,   470,   474,   478,   479,
     484,   485,   486,   493,   497,   504,   511,   518,   522,   526,
     530,   534,   535,   539,   540,   541,   542,   546,   547,   552,
     553,   557,   558,   562,   566,   567,   571,   572,   576,   577,
     581,   582,   583,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   601,   602,   603,   607,   608,   609,
     610,   614,   618,   619,   623,   624,   628,   629,   630,   631,
     631,   632,   632,   633,   637,   638,   639,   643,   644,   644,
     662,   663,   667,   669,   669,   679,   680,   684,   685,   685,
     686,   690,   691,   692,   693,   694,   695,   699,   700,   701,
     704,   703,   712,   711,   722,   722,   723,   727,   728,   732,
     747,   732,   762,   762,   803,   807
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
  "storage_class_specifier", "$@1", "$@2", "$@3", "$@4", "type_specifier",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement", "$@17",
  "$@18", "labeled_statement", "compound_statement", "$@19",
  "block_item_list", "block_item", "$@20", "expression_statement",
  "selection_statement", "$@21", "iteration_statement", "jump_statement",
  "$@22", "$@23", "translation_unit", "$@24", "external_declaration",
  "function_definition", "$@25", "$@26", "$@27", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-254)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-263)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -254,  1027,  1325,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,    53,  -254,   -40,  1300,     3,    29,    40,    45,
    1300,    -9,    62,   103,   131,    95,   112,   140,   163,   166,
     168,   176,   162,  -254,    99,  -254,  1300,  1300,  -254,  -254,
    -254,   152,   170,  -254,    69,     1,  -254,   -12,  -254,    -7,
     -15,   136,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
     183,  1117,  -254,  -254,   170,   153,    46,  -254,   204,  -254,
    -254,     1,    69,  -254,   627,  1325,   185,  1143,   504,   -15,
    1117,  1071,  1209,  -254,     5,  1071,   102,   794,  -254,    42,
    -254,  -254,  -254,  -254,   184,   811,   841,   841,  -254,  -254,
    -254,   451,   596,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
      39,   569,   794,  -254,    96,   174,   245,     8,   246,   199,
     190,   191,   266,    11,  -254,  -254,  -254,  -254,   -40,  1098,
     208,  -254,  -254,  -254,    59,   214,   209,  -254,    74,   114,
    -254,   215,   216,   531,  1228,  -254,  -254,  -254,   794,     6,
    -254,   196,  -254,  -254,    97,  -254,  -254,  -254,  -254,  -254,
     451,  -254,   451,  -254,  -254,  -254,   111,    63,   220,   794,
     224,  -254,   187,   627,   -18,  -254,   225,  -254,  -254,   675,
     794,   226,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,   794,  -254,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,  -254,   185,  -254,  1300,   927,   694,
    -254,   142,  -254,   164,  -254,  1274,  -254,   230,   648,  -254,
    -254,   794,  -254,   227,   228,  -254,  -254,     5,  -254,   794,
    -254,   231,   232,  -254,   794,   976,   172,  -254,   712,   233,
    -254,  -254,   548,  -254,  -254,  -254,  -254,  -254,   113,  -254,
      93,  -254,  -254,  -254,  -254,  -254,    96,    96,   174,   174,
     245,   245,   245,   245,     8,     8,   246,   199,   190,   191,
     266,   -27,  -254,  -254,  1052,  -254,   387,  -254,   236,   238,
    -254,   237,   242,   164,  1184,   729,  -254,  -254,  -254,   261,
     262,  -254,  -254,  -254,  -254,   263,   263,  -254,   596,  -254,
    -254,  -254,  -254,   627,  -254,   794,  -254,   794,  -254,  -254,
     794,   252,   268,   206,   244,   251,   254,  -254,    12,  -254,
     192,   169,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,   276,  -254,   283,   284,  -254,  -254,   189,  -254,  -254,
    -254,   267,   387,   269,  -254,  -254,   270,   794,   387,  -254,
     289,   291,  -254,   294,   387,   296,  -254,  -254,  -254,  -254,
    -254,   571,   387,  -254,  -254,  -254,    26,  -254,   794,   794,
     794,   307,   339,  -254,  -254,  -254,   116,   120,   123,   323,
     272,   272,   387,   387,   387,   794,   759,   776,   337,  -254,
    -254,   124,   387,   125,   387,   128,  -254,   305,  -254,   387,
    -254,   387,   387,  -254,  -254,  -254,  -254
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     254,    93,    93,     1,    92,   157,   155,   154,   156,   125,
     131,   132,     0,   258,     0,    80,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,   127,    84,    86,   256,   257,
     255,   149,     0,   160,     0,   173,    78,     0,    88,   259,
     159,     0,    81,    94,    96,    98,   100,    83,   102,   104,
     106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
     130,   101,    85,    87,     0,   152,     0,   150,     0,   177,
     175,   174,     0,    79,     0,    93,     0,    93,     0,   158,
     101,   138,   101,   133,     0,   136,     0,     0,   145,     0,
     161,   178,   176,    89,    90,     0,     0,     0,     3,     2,
       4,   101,     0,    24,    25,    26,    27,    28,    29,     6,
      18,    30,     0,    32,    36,    39,    42,    47,    50,    52,
      54,    56,    58,    60,    62,   204,    91,   264,     0,    93,
     228,   263,   186,   172,   185,     0,   179,   181,     0,     0,
     169,    25,     0,     0,   101,   139,   129,   134,     0,     0,
     140,   142,   137,   146,     0,    30,    77,   153,   147,   151,
     101,    22,   101,    19,    20,    75,     0,   188,     0,     0,
       0,   207,     0,     0,     0,   212,     0,    12,    13,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    64,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,   227,   233,    93,     0,
     183,   190,   184,   191,   170,    93,   171,     0,     0,   168,
     164,     0,   163,    25,     0,   128,   143,     0,   135,     0,
     148,     0,     0,     5,     0,    93,   190,   189,     0,     0,
     215,   205,     0,   208,   211,   213,    11,     8,     0,    16,
       0,    10,    63,    33,    34,    35,    37,    38,    40,    41,
      45,    46,    43,    44,    48,    49,    51,    53,    55,    57,
      59,     0,   261,   232,   233,   230,   221,   200,     0,     0,
     194,    25,     0,   192,    93,     0,   180,   182,   187,     0,
       0,   167,   162,   141,   144,    23,     0,    76,     0,    31,
     214,   206,   209,     0,     9,     0,     7,     0,   229,   231,
       0,     0,     0,     0,     0,   252,     2,   235,     0,   234,
       0,     0,   216,   217,   218,   223,   201,   193,   198,   195,
     202,     0,   196,    25,     0,   165,   166,     0,   210,    17,
      61,     0,   221,     0,   248,   249,     0,     0,   221,   236,
       0,     0,   220,     0,   221,     0,   222,   203,   199,   197,
      14,     0,   221,   226,   247,   251,     0,   224,     0,     0,
       0,     0,    93,    15,   225,   253,     0,     0,     0,     0,
       0,     0,   221,   221,   221,     0,     0,     0,   237,   240,
     241,     0,   221,     0,   221,     0,   238,     0,   245,   221,
     243,   221,   221,   242,   246,   244,   239
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,  -254,   107,  -254,   -94,    55,    56,     4,
      52,   177,   178,   179,   175,   186,  -254,   -91,   -81,  -254,
     -97,  -145,   -85,     0,  -254,   316,  -254,  -254,  -254,  -254,
    -254,    61,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   310,   -65,   -72,  -254,
     154,  -254,   332,   -78,   -33,  -254,     2,   -43,   -34,   -66,
     -82,  -254,   188,  -254,    76,  -114,  -191,   -80,    89,  -253,
    -254,   235,   529,  -254,  -254,  -254,   -76,  -254,  -254,   115,
    -254,  -233,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
     408,  -254,  -254,  -254,  -254,  -254
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   119,   120,   268,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   175,   203,
     338,   167,    13,   138,    47,    48,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    92,    93,    94,   159,
     160,    35,    76,    77,    36,    37,    78,    50,    51,    81,
     298,   146,   147,   148,   178,   299,   233,   181,   182,   183,
     184,   185,   339,   340,   341,   342,   343,   227,   294,   295,
     296,   344,   372,   422,   376,   345,   366,   367,     1,     2,
      38,    39,    85,   225,    86,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,    14,    14,   135,   136,   145,   166,   152,    89,   323,
     141,    80,    79,   246,   176,    52,    49,   212,   213,   155,
      57,   169,   153,   162,    43,   222,    44,   157,   204,    53,
     232,   135,     6,    58,   259,    45,    72,    73,    95,   177,
     303,     7,     8,   186,   187,   188,   254,   102,   101,    46,
     179,    87,   180,    88,   224,    79,    54,    95,    95,    95,
     327,    82,    95,   257,  -262,   303,   -90,   166,    55,    43,
     264,    44,   244,   176,    56,   176,    45,    83,    95,   247,
      45,    84,   -90,   238,   104,   254,   169,   144,   166,   157,
     214,   215,   158,   270,    59,   248,   161,   223,   177,   254,
     177,   369,   135,   263,   314,   189,    75,   190,   269,   191,
     231,   273,   274,   275,   168,   395,    79,    41,    98,    99,
     101,    95,   272,    43,    42,   228,   291,   229,   323,   255,
      62,   229,    91,    43,    45,    44,    60,    95,    45,    95,
     104,   236,   293,   256,    45,     6,   230,   237,   302,   292,
      63,    91,    91,    91,     7,     8,    91,   309,   166,   401,
     310,    75,   326,    70,   319,    61,   254,   406,   407,   250,
      71,   205,    91,   317,   163,   164,   206,   207,   253,    64,
     324,   135,   322,   402,   254,   361,   325,   403,    89,   254,
     404,   417,   419,   254,   231,   421,   254,   254,   254,    65,
      43,   254,    44,    66,   165,   101,    43,    69,   228,   293,
     229,    67,   171,   173,   174,    91,   280,   281,   282,   283,
      68,   256,   351,    74,   354,   373,   374,   375,   144,   165,
     304,    91,   305,    91,    75,   144,   360,   135,   255,   166,
     229,    97,   135,   358,   359,   370,   251,   371,   252,   161,
     208,   209,   210,   211,    90,   144,   140,   216,   217,   261,
     262,   380,   381,   276,   277,   165,   278,   279,   284,   285,
     386,   100,    84,   218,   219,   105,   220,   106,   107,   221,
     226,   234,   235,   249,   239,   240,   165,   258,   260,   266,
     271,   396,   397,   398,   308,   364,   311,   312,   315,   316,
     135,   322,   320,   346,   144,   347,   348,   400,   411,   413,
     415,   349,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     355,   356,   363,   365,   318,   108,   109,   110,   111,   362,
    -250,   368,   105,   377,   106,   107,   113,   114,   115,   116,
     117,   118,   378,   379,   382,   388,   165,   389,   384,   385,
     390,   337,   392,   399,     4,   165,   -95,   -97,   -99,     5,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,   405,
     105,   416,   106,   107,   423,   286,   289,   287,   103,   288,
     154,   313,   108,   109,   110,   111,    96,   357,   290,   329,
      40,     0,     0,   113,   114,   115,   116,   117,   118,   265,
       0,     0,     0,   307,     0,     0,     0,     0,   337,     0,
       0,     0,     0,     0,   165,     0,     0,   165,   330,   331,
    -219,     0,  -219,     0,     0,     0,   332,   333,   334,   335,
     108,   336,   110,   111,   105,     0,   106,   107,   140,     0,
       0,   113,   114,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,
    -113,     7,     8,     0,  -119,  -121,  -123,     9,    10,    11,
      12,     0,     0,     0,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   149,     0,     0,   105,     6,   106,   107,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,   241,     0,
       0,     0,     6,     0,     0,     0,     0,   108,   109,   110,
     111,     7,     8,   150,   105,     0,   106,   107,   113,   151,
     115,   116,   117,   118,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   108,   109,   110,   111,     0,   105,
     242,   106,   107,     0,     0,   113,   243,   115,   116,   117,
     118,   108,   109,   110,   111,     0,   179,     0,   180,   112,
     321,     0,   113,   114,   115,   116,   117,   118,     0,     0,
     105,     0,   106,   107,   108,   109,   110,   111,     0,   179,
       0,   180,   112,   393,     0,   113,   114,   115,   116,   117,
     118,   105,     0,   106,   107,     0,     0,   202,     0,   108,
     109,   110,   111,     0,   179,     0,   180,   112,     0,     0,
     113,   114,   115,   116,   117,   118,     0,     0,   105,     6,
     106,   107,     0,     0,     0,     0,     0,     0,     7,     8,
     108,   109,   110,   111,     0,     0,     0,   105,   112,   106,
     107,   113,   114,   115,   116,   117,   118,     0,     0,     0,
       0,   108,   109,   110,   111,   105,     0,   106,   107,     0,
       0,     0,   113,   114,   115,   116,   117,   118,     0,     0,
       0,     0,   105,     0,   106,   107,     0,     0,   108,   109,
     110,   111,   267,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   117,   118,     0,     0,   108,   109,   110,
     111,     0,   105,   300,   106,   107,     0,     0,   113,   301,
     115,   116,   117,   118,     0,   108,   109,   110,   111,   105,
       0,   106,   107,   318,     0,     0,   113,   114,   115,   116,
     117,   118,   108,   109,   110,   111,     0,   105,   352,   106,
     107,     0,     0,   113,   353,   115,   116,   117,   118,     0,
       0,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   412,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   116,   117,   118,   108,
     109,   110,   111,   414,   105,     0,   106,   107,     0,     0,
     113,   114,   115,   116,   117,   118,     0,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,   117,   118,   108,   109,   110,   170,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   383,     0,     0,     0,     0,     0,   387,     0,     0,
       0,     0,     0,   391,   108,   109,   110,   172,     0,     0,
       0,   394,     0,     0,     0,   113,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,   409,   410,     0,     0,     0,     0,     0,     0,
       0,   418,     0,   420,     0,     0,     0,     0,   424,     0,
     425,   426,     4,     0,   -95,   -97,   -99,     5,     6,  -103,
    -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,  -101,
    -119,  -121,  -123,     9,    10,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,   228,   297,   229,     0,     0,     0,     0,
       0,     4,    45,   -95,   -97,   -99,     5,     6,  -103,  -105,
    -107,  -109,  -115,  -117,  -111,  -113,     7,     8,  -101,  -119,
    -121,  -123,     9,    10,    11,    12,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   297,   229,     0,     0,     0,     0,     0,
       0,    45,     4,     0,   -95,   -97,   -99,     5,     6,  -103,
    -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,  -101,
    -119,  -121,  -123,     9,    10,    11,    12,     4,   -93,   -95,
     -97,   -99,     5,     6,  -103,  -105,  -107,  -109,  -115,  -117,
    -111,  -113,     7,     8,  -101,  -119,  -121,  -123,     9,    10,
      11,    12,     6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,
    -113,     7,     8,  -101,  -119,  -121,  -123,     9,    10,    11,
      12,     0,     0,     4,   328,   -95,   -97,   -99,     5,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
    -101,  -119,  -121,  -123,     9,    10,    11,    12,     6,  -103,
    -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,     0,
    -119,  -121,  -123,     9,    10,    11,    12,     0,     4,  -260,
     -95,   -97,   -99,     5,     6,  -103,  -105,  -107,  -109,  -115,
    -117,  -111,  -113,     7,     8,  -101,  -119,  -121,  -123,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,     4,
     143,   -95,   -97,   -99,     5,     6,  -103,  -105,  -107,  -109,
    -115,  -117,  -111,  -113,     7,     8,  -101,  -119,  -121,  -123,
       9,    10,    11,    12,     0,     0,     0,     0,     0,     0,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,   350,  -119,  -121,  -123,     9,    10,    11,    12,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
       0,  -119,  -121,  -123,     9,    10,    11,    12,     0,     0,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     245,   -95,   -97,   -99,     5,     6,  -103,  -105,  -107,  -109,
    -115,  -117,  -111,  -113,     7,     8,  -101,  -119,  -121,  -123,
       9,    10,    11,    12,   306,     4,   -93,   -95,   -97,   -99,
       5,     6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,
       7,     8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,
       4,     0,   -95,   -97,   -99,     5,     6,  -103,  -105,  -107,
    -109,  -115,  -117,  -111,  -113,     7,     8,  -101,  -119,  -121,
    -123,     9,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
      85,     1,     2,    84,    84,    87,    97,    88,    51,   262,
      86,    45,    45,   158,   111,    15,    14,     9,    10,    91,
      20,    99,    88,    95,    64,    14,    66,    92,   122,    26,
     144,   112,    31,    42,   179,    75,    36,    37,    71,   111,
     231,    40,    41,     4,     5,     6,    73,    81,    81,    89,
      68,    66,    70,    68,   139,    88,    27,    90,    91,    92,
      87,    73,    95,   177,    71,   256,    73,   158,    28,    64,
      88,    66,   153,   170,    29,   172,    75,    89,   111,    73,
      75,    88,    89,   149,    82,    73,   164,    87,   179,   154,
      82,    83,    87,   190,    32,    89,    94,    86,   170,    73,
     172,    89,   183,   183,   249,    66,    64,    68,   189,    70,
     144,   205,   206,   207,    72,    89,   149,    64,    72,    73,
     153,   154,   203,    64,    71,    66,   223,    68,   381,    66,
      35,    68,    71,    64,    75,    66,    33,   170,    75,   172,
     138,    67,   227,   177,    75,    31,   144,    73,   229,   225,
      38,    90,    91,    92,    40,    41,    95,   238,   249,   392,
     241,    64,    69,    64,   258,    34,    73,   400,   401,    72,
      71,    75,   111,   254,    72,    73,    80,    81,    67,    39,
      67,   262,   262,    67,    73,   330,    73,    67,   231,    73,
      67,    67,    67,    73,   228,    67,    73,    73,    73,    36,
      64,    73,    66,    37,    97,   238,    64,    45,    66,   294,
      68,    43,   105,   106,   107,   154,   212,   213,   214,   215,
      44,   255,   304,    71,   305,    56,    57,    58,   228,   122,
      66,   170,    68,   172,    64,   235,   327,   318,    66,   330,
      68,    88,   323,   323,   325,    53,   170,    55,   172,   247,
      76,    77,     7,     8,    71,   255,    71,    11,    12,    72,
      73,    72,    73,   208,   209,   158,   210,   211,   216,   217,
     367,    67,    88,    74,    84,     3,    85,     5,     6,    13,
      72,    67,    73,    87,    69,    69,   179,    67,    64,    64,
      64,   388,   389,   390,    64,    89,    69,    69,    67,    67,
     381,   381,    69,    67,   304,    67,    69,   392,   405,   406,
     407,    69,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      69,    69,    64,    89,    71,    63,    64,    65,    66,    87,
      89,    87,     3,    67,     5,     6,    74,    75,    76,    77,
      78,    79,    69,    69,    87,    66,   249,    66,    89,    89,
      66,    89,    66,    56,    25,   258,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    66,
       3,    54,     5,     6,    89,   218,   221,   219,    82,   220,
      90,   247,    63,    64,    65,    66,    74,   318,   222,   294,
       2,    -1,    -1,    74,    75,    76,    77,    78,    79,   184,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,   327,    -1,    -1,   330,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,     3,    -1,     5,     6,    71,    -1,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    27,    -1,    -1,     3,    31,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    40,    41,    69,     3,    -1,     5,     6,    74,    75,
      76,    77,    78,    79,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    63,    64,    65,    66,    -1,     3,
      69,     5,     6,    -1,    -1,    74,    75,    76,    77,    78,
      79,    63,    64,    65,    66,    -1,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
       3,    -1,     5,     6,    63,    64,    65,    66,    -1,    68,
      -1,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,     3,    -1,     5,     6,    -1,    -1,    88,    -1,    63,
      64,    65,    66,    -1,    68,    -1,    70,    71,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,     3,    31,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      63,    64,    65,    66,    -1,    -1,    -1,     3,    71,     5,
       6,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,     3,    -1,     5,     6,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,     3,    -1,     5,     6,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    63,    64,    65,
      66,    -1,     3,    69,     5,     6,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    63,    64,    65,    66,     3,
      -1,     5,     6,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    63,    64,    65,    66,    -1,     3,    69,     5,
       6,    -1,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    67,     3,    -1,     5,     6,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,   362,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,   374,    63,    64,    65,    66,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   402,   403,   404,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   412,    -1,   414,    -1,    -1,    -1,    -1,   419,    -1,
     421,   422,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    25,    75,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    25,    72,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    -1,    25,    71,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    25,
      67,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    67,    43,    44,    45,    46,    47,    48,    49,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      72,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   178,   179,     0,    25,    30,    31,    40,    41,    46,
      47,    48,    49,   112,   113,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   141,   144,   145,   180,   181,
     180,    64,    71,    64,    66,    75,    89,   114,   115,   146,
     147,   148,   113,    26,    27,    28,    29,   113,    42,    32,
      33,    34,    35,    38,    39,    36,    37,    43,    44,    45,
      64,    71,   113,   113,    71,    64,   142,   143,   146,   144,
     148,   149,    73,    89,    88,   182,   184,    66,    68,   147,
      71,   121,   136,   137,   138,   144,   142,    88,    72,    73,
      67,   144,   148,   115,   146,     3,     5,     6,    63,    64,
      65,    66,    71,    74,    75,    76,    77,    78,    79,    91,
      92,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   157,   112,   113,   185,
      71,   166,    64,    67,   113,   150,   151,   152,   153,    27,
      69,    75,   108,   149,   136,   138,    72,   137,    87,   139,
     140,   146,   138,    72,    73,    94,   107,   111,    72,   143,
      66,    94,    66,    94,    94,   108,   110,   138,   154,    68,
      70,   157,   158,   159,   160,   161,     4,     5,     6,    66,
      68,    70,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    88,   109,    96,    75,    80,    81,    76,    77,
       7,     8,     9,    10,    82,    83,    11,    12,    74,    84,
      85,    13,    14,    86,   112,   183,    72,   167,    66,    68,
     146,   148,   155,   156,    67,    73,    67,    73,   149,    69,
      69,    27,    69,    75,   108,    72,   111,    73,    89,    87,
      72,   154,   154,    67,    73,    66,   148,   155,    67,   111,
      64,    72,    73,   157,    88,   161,    64,    67,    93,   108,
     110,    64,   108,    96,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   102,   103,   104,
     105,   110,   166,   112,   168,   169,   170,    67,   150,   155,
      69,    75,   108,   156,    66,    68,    50,   152,    64,   108,
     108,    69,    69,   140,   111,    67,    67,   108,    71,    96,
      69,    72,   157,   159,    67,    73,    69,    87,    72,   169,
      51,    52,    59,    60,    61,    62,    64,    89,   110,   162,
     163,   164,   165,   166,   171,   175,    67,    67,    69,    69,
      67,   150,    69,    75,   108,    69,    69,   158,   157,   108,
     107,   111,    87,    64,    89,    89,   176,   177,    87,    89,
      53,    55,   172,    56,    57,    58,   174,    67,    69,    69,
      72,    73,    87,   162,    89,    89,   110,   162,    66,    66,
      66,   162,    66,    72,   162,    89,   110,   110,   110,    56,
     112,   171,    67,    67,    67,    66,   171,   171,   162,   162,
     162,   110,    67,   110,    67,   110,    54,    67,   162,    67,
     162,    67,   173,    89,   162,   162,   162
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
     115,   115,   116,   117,   116,   118,   116,   119,   116,   120,
     116,   122,   121,   123,   121,   124,   121,   125,   121,   126,
     121,   127,   121,   128,   121,   129,   121,   130,   121,   131,
     121,   132,   121,   133,   121,   121,   121,   121,   134,   134,
     134,   135,   135,   136,   136,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   146,   146,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   158,
     158,   159,   160,   160,   161,   161,   162,   162,   162,   163,
     162,   164,   162,   162,   165,   165,   165,   166,   167,   166,
     168,   168,   169,   170,   169,   171,   171,   172,   173,   172,
     172,   174,   174,   174,   174,   174,   174,   175,   175,   175,
     176,   175,   177,   175,   179,   178,   178,   180,   180,   182,
     183,   181,   184,   181,   185,   185
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
       1,     3,     1,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     3,     1,     2,     1,     2,
       1,     3,     1,     2,     3,     4,     5,     5,     6,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     5,     4,     4,     6,     6,     5,     4,     3,
       4,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     3,     4,
       2,     3,     3,     4,     1,     3,     4,     1,     2,     3,
       4,     2,     1,     2,     3,     2,     1,     1,     1,     0,
       2,     0,     2,     1,     3,     4,     3,     2,     0,     4,
       1,     2,     1,     0,     2,     1,     2,     5,     0,     8,
       5,     5,     7,     6,     7,     6,     7,     3,     2,     2,
       0,     3,     0,     4,     0,     2,     2,     1,     1,     0,
       0,     6,     0,     4,     1,     2
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
#line 1791 "y.tab.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 62 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[-1].sym);}
#line 1797 "y.tab.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 66 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1803 "y.tab.cc"
    break;

  case 14: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 74 "C99-parser.yacc"
                                                     {(yyval.sym) = (yyvsp[-1].sym);}
#line 1809 "y.tab.cc"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 75 "C99-parser.yacc"
                                                        {(yyval.sym) = (yyvsp[-2].sym);}
#line 1815 "y.tab.cc"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 84 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1821 "y.tab.cc"
    break;

  case 19: /* unary_expression: INC_OP unary_expression  */
#line 85 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1827 "y.tab.cc"
    break;

  case 20: /* unary_expression: DEC_OP unary_expression  */
#line 86 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1833 "y.tab.cc"
    break;

  case 21: /* unary_expression: unary_operator cast_expression  */
#line 87 "C99-parser.yacc"
                                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1839 "y.tab.cc"
    break;

  case 22: /* unary_expression: SIZEOF unary_expression  */
#line 88 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1845 "y.tab.cc"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 89 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 1851 "y.tab.cc"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 102 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1857 "y.tab.cc"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 103 "C99-parser.yacc"
                                            {(yyval.sym) = (yyvsp[0].sym);}
#line 1863 "y.tab.cc"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 107 "C99-parser.yacc"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1869 "y.tab.cc"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 114 "C99-parser.yacc"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1875 "y.tab.cc"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 120 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1881 "y.tab.cc"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 126 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1887 "y.tab.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 134 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1893 "y.tab.cc"
    break;

  case 50: /* and_expression: equality_expression  */
#line 140 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1899 "y.tab.cc"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 145 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1905 "y.tab.cc"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 150 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1911 "y.tab.cc"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 155 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1917 "y.tab.cc"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 160 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1923 "y.tab.cc"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 165 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1929 "y.tab.cc"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 170 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1935 "y.tab.cc"
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
#line 1948 "y.tab.cc"
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
#line 1991 "y.tab.cc"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier  */
#line 249 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 1997 "y.tab.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 251 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2008 "y.tab.cc"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 257 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2014 "y.tab.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 259 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2025 "y.tab.cc"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 265 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2031 "y.tab.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 267 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2042 "y.tab.cc"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 273 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[0].sym); }
#line 2048 "y.tab.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 275 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2059 "y.tab.cc"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 284 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2065 "y.tab.cc"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 285 "C99-parser.yacc"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2071 "y.tab.cc"
    break;

  case 90: /* init_declarator: declarator  */
#line 289 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2077 "y.tab.cc"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 290 "C99-parser.yacc"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 2083 "y.tab.cc"
    break;

  case 92: /* storage_class_specifier: TYPEDEF  */
#line 294 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 2089 "y.tab.cc"
    break;

  case 93: /* $@1: %empty  */
#line 295 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2098 "y.tab.cc"
    break;

  case 94: /* storage_class_specifier: $@1 EXTERN  */
#line 298 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 2104 "y.tab.cc"
    break;

  case 95: /* $@2: %empty  */
#line 299 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2113 "y.tab.cc"
    break;

  case 96: /* storage_class_specifier: $@2 STATIC  */
#line 302 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 2119 "y.tab.cc"
    break;

  case 97: /* $@3: %empty  */
#line 303 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2128 "y.tab.cc"
    break;

  case 98: /* storage_class_specifier: $@3 AUTO  */
#line 306 "C99-parser.yacc"
                                                { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 2134 "y.tab.cc"
    break;

  case 99: /* $@4: %empty  */
#line 307 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2143 "y.tab.cc"
    break;

  case 100: /* storage_class_specifier: $@4 REGISTER  */
#line 310 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 2149 "y.tab.cc"
    break;

  case 101: /* $@5: %empty  */
#line 314 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2158 "y.tab.cc"
    break;

  case 102: /* type_specifier: $@5 VOID  */
#line 317 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 2164 "y.tab.cc"
    break;

  case 103: /* $@6: %empty  */
#line 318 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2173 "y.tab.cc"
    break;

  case 104: /* type_specifier: $@6 CHAR  */
#line 321 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 2179 "y.tab.cc"
    break;

  case 105: /* $@7: %empty  */
#line 322 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2188 "y.tab.cc"
    break;

  case 106: /* type_specifier: $@7 SHORT  */
#line 325 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 2194 "y.tab.cc"
    break;

  case 107: /* $@8: %empty  */
#line 326 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2203 "y.tab.cc"
    break;

  case 108: /* type_specifier: $@8 INT  */
#line 329 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 2209 "y.tab.cc"
    break;

  case 109: /* $@9: %empty  */
#line 330 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2218 "y.tab.cc"
    break;

  case 110: /* type_specifier: $@9 LONG  */
#line 333 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 2224 "y.tab.cc"
    break;

  case 111: /* $@10: %empty  */
#line 334 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2233 "y.tab.cc"
    break;

  case 112: /* type_specifier: $@10 FLOAT  */
#line 337 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 2239 "y.tab.cc"
    break;

  case 113: /* $@11: %empty  */
#line 338 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2248 "y.tab.cc"
    break;

  case 114: /* type_specifier: $@11 DOUBLE  */
#line 341 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2254 "y.tab.cc"
    break;

  case 115: /* $@12: %empty  */
#line 342 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2263 "y.tab.cc"
    break;

  case 116: /* type_specifier: $@12 SIGNED  */
#line 345 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2269 "y.tab.cc"
    break;

  case 117: /* $@13: %empty  */
#line 346 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2278 "y.tab.cc"
    break;

  case 118: /* type_specifier: $@13 UNSIGNED  */
#line 349 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2284 "y.tab.cc"
    break;

  case 119: /* $@14: %empty  */
#line 350 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2293 "y.tab.cc"
    break;

  case 120: /* type_specifier: $@14 BOOL  */
#line 353 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2299 "y.tab.cc"
    break;

  case 121: /* $@15: %empty  */
#line 354 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2308 "y.tab.cc"
    break;

  case 122: /* type_specifier: $@15 COMPLEX  */
#line 357 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2314 "y.tab.cc"
    break;

  case 123: /* $@16: %empty  */
#line 358 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2323 "y.tab.cc"
    break;

  case 124: /* type_specifier: $@16 IMAGINARY  */
#line 361 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2329 "y.tab.cc"
    break;

  case 125: /* type_specifier: USER_DEFINED  */
#line 362 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2335 "y.tab.cc"
    break;

  case 126: /* type_specifier: struct_or_union_specifier  */
#line 363 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2341 "y.tab.cc"
    break;

  case 127: /* type_specifier: enum_specifier  */
#line 364 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2347 "y.tab.cc"
    break;

  case 128: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 369 "C99-parser.yacc"
        { 
		(yyvsp[-3].sym)->setIsStruct(true);
		(yyvsp[-3].sym)->setVariableType((yyvsp[-4].sym)->getSymbolType());
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
#line 2368 "y.tab.cc"
    break;

  case 130: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 387 "C99-parser.yacc"
        { 
		(yyvsp[0].sym)->setIsStruct(true);
		if (table.insert((yyvsp[0].sym))) {
			logFile << "Inserted: " << (yyvsp[0].sym)->getSymbolName() << " in scope " << table.printScopeId() << endl;
		}else {
			logFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			errFile << "Error: " << (yyvsp[0].sym)->getSymbolName() << " already exists in scope " << endl;
			error_count++;
		}
	}
#line 2383 "y.tab.cc"
    break;

  case 131: /* struct_or_union: STRUCT  */
#line 400 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2389 "y.tab.cc"
    break;

  case 132: /* struct_or_union: UNION  */
#line 401 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2395 "y.tab.cc"
    break;

  case 133: /* struct_declaration_list: struct_declaration  */
#line 405 "C99-parser.yacc"
                             { (yyval.symList) = (yyvsp[0].symList); 
	for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
	}
#line 2405 "y.tab.cc"
    break;

  case 134: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 412 "C99-parser.yacc"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2417 "y.tab.cc"
    break;

  case 135: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 423 "C99-parser.yacc"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2428 "y.tab.cc"
    break;

  case 140: /* struct_declarator_list: struct_declarator  */
#line 439 "C99-parser.yacc"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2434 "y.tab.cc"
    break;

  case 141: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 440 "C99-parser.yacc"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2440 "y.tab.cc"
    break;

  case 142: /* struct_declarator: declarator  */
#line 444 "C99-parser.yacc"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2446 "y.tab.cc"
    break;

  case 143: /* struct_declarator: ':' constant_expression  */
#line 445 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2452 "y.tab.cc"
    break;

  case 144: /* struct_declarator: declarator ':' constant_expression  */
#line 446 "C99-parser.yacc"
                                             { (yyval.sym) = (yyvsp[-2].sym); }
#line 2458 "y.tab.cc"
    break;

  case 158: /* declarator: pointer direct_declarator  */
#line 478 "C99-parser.yacc"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2464 "y.tab.cc"
    break;

  case 159: /* declarator: direct_declarator  */
#line 479 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2470 "y.tab.cc"
    break;

  case 160: /* direct_declarator: IDENTIFIER  */
#line 484 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2476 "y.tab.cc"
    break;

  case 161: /* direct_declarator: '(' declarator ')'  */
#line 485 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2482 "y.tab.cc"
    break;

  case 162: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 486 "C99-parser.yacc"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2494 "y.tab.cc"
    break;

  case 163: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 493 "C99-parser.yacc"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2503 "y.tab.cc"
    break;

  case 164: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 497 "C99-parser.yacc"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2515 "y.tab.cc"
    break;

  case 165: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 504 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2527 "y.tab.cc"
    break;

  case 166: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 511 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2539 "y.tab.cc"
    break;

  case 167: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 518 "C99-parser.yacc"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2548 "y.tab.cc"
    break;

  case 168: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 522 "C99-parser.yacc"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2557 "y.tab.cc"
    break;

  case 169: /* direct_declarator: direct_declarator '[' ']'  */
#line 526 "C99-parser.yacc"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2566 "y.tab.cc"
    break;

  case 170: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 530 "C99-parser.yacc"
                                                        {
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2575 "y.tab.cc"
    break;

  case 171: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 534 "C99-parser.yacc"
                                                    { (yyval.sym) = (yyvsp[-3].sym); }
#line 2581 "y.tab.cc"
    break;

  case 172: /* direct_declarator: direct_declarator '(' ')'  */
#line 535 "C99-parser.yacc"
                                    { (yyval.sym) = (yyvsp[-2].sym); }
#line 2587 "y.tab.cc"
    break;

  case 179: /* parameter_type_list: parameter_list  */
#line 552 "C99-parser.yacc"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2593 "y.tab.cc"
    break;

  case 181: /* parameter_list: parameter_declaration  */
#line 557 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2599 "y.tab.cc"
    break;

  case 182: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 558 "C99-parser.yacc"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2605 "y.tab.cc"
    break;

  case 183: /* parameter_declaration: declaration_specifiers declarator  */
#line 562 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2614 "y.tab.cc"
    break;

  case 186: /* identifier_list: IDENTIFIER  */
#line 571 "C99-parser.yacc"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2620 "y.tab.cc"
    break;

  case 187: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 572 "C99-parser.yacc"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2626 "y.tab.cc"
    break;

  case 205: /* initializer: '{' initializer_list '}'  */
#line 602 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 2632 "y.tab.cc"
    break;

  case 206: /* initializer: '{' initializer_list ',' '}'  */
#line 603 "C99-parser.yacc"
                                       {(yyval.sym) = (yyvsp[-2].sym);}
#line 2638 "y.tab.cc"
    break;

  case 208: /* initializer_list: designation initializer  */
#line 608 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 2644 "y.tab.cc"
    break;

  case 219: /* $@17: %empty  */
#line 631 "C99-parser.yacc"
          { table.enterScope(); }
#line 2650 "y.tab.cc"
    break;

  case 220: /* statement: $@17 selection_statement  */
#line 631 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2656 "y.tab.cc"
    break;

  case 221: /* $@18: %empty  */
#line 632 "C99-parser.yacc"
          { table.enterScope(); }
#line 2662 "y.tab.cc"
    break;

  case 222: /* statement: $@18 iteration_statement  */
#line 632 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2668 "y.tab.cc"
    break;

  case 228: /* $@19: %empty  */
#line 644 "C99-parser.yacc"
              {
			if (enMain > 0) {
				enMain++;
			}
		}
#line 2678 "y.tab.cc"
    break;

  case 229: /* compound_statement: '{' $@19 block_item_list '}'  */
#line 650 "C99-parser.yacc"
            {
			if (enMain == 2 && MPIInitDone == 1 && main_end == 1) {
				MPIFinalize();
				main_end = 0;
			}
			else if (enMain > 0) {
				enMain--;
			}
		}
#line 2692 "y.tab.cc"
    break;

  case 233: /* $@20: %empty  */
#line 669 "C99-parser.yacc"
        {
		if(main_init == 1 && MPIInitDone == 0 && posInit == -100){
			posInit = output.tellp();
			output.write("                                                                                                                                                      \n", 151);
		}
	}
#line 2703 "y.tab.cc"
    break;

  case 238: /* $@21: %empty  */
#line 685 "C99-parser.yacc"
                                               { table.exitScope(); table.enterScope(); }
#line 2709 "y.tab.cc"
    break;

  case 250: /* $@22: %empty  */
#line 704 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2720 "y.tab.cc"
    break;

  case 252: /* $@23: %empty  */
#line 712 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2731 "y.tab.cc"
    break;

  case 254: /* $@24: %empty  */
#line 722 "C99-parser.yacc"
          {output.write("                                    \n", 37); }
#line 2737 "y.tab.cc"
    break;

  case 259: /* $@25: %empty  */
#line 732 "C99-parser.yacc"
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
#line 2758 "y.tab.cc"
    break;

  case 260: /* $@26: %empty  */
#line 747 "C99-parser.yacc"
                           {
	// 	for (auto symbol : *$4) {
    //     logFile << "Debug Simbol: " << symbol->getSymbolName() << "\n";
    // }
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 1;
		}
	}
#line 2772 "y.tab.cc"
    break;

  case 261: /* function_definition: declaration_specifiers declarator $@25 declaration_list $@26 compound_statement  */
#line 755 "C99-parser.yacc"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-4].sym)->getSymbolName() == "main"){
			enMain = 0;
		}
	}
#line 2784 "y.tab.cc"
    break;

  case 262: /* $@27: %empty  */
#line 762 "C99-parser.yacc"
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
#line 2821 "y.tab.cc"
    break;

  case 263: /* function_definition: declaration_specifiers declarator $@27 compound_statement  */
#line 793 "C99-parser.yacc"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			enMain = 0;
		}
	}
#line 2833 "y.tab.cc"
    break;

  case 264: /* declaration_list: declaration  */
#line 803 "C99-parser.yacc"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2842 "y.tab.cc"
    break;

  case 265: /* declaration_list: declaration_list declaration  */
#line 807 "C99-parser.yacc"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2851 "y.tab.cc"
    break;


#line 2855 "y.tab.cc"

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

#line 814 "C99-parser.yacc"

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
