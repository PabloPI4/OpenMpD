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

extern ofstream logFile;
extern ofstream errFile;

SymbolTable table(38);

#line 92 "y.tab.cc"

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
  YYSYMBOL_block_item_list = 167,          /* block_item_list  */
  YYSYMBOL_block_item = 168,               /* block_item  */
  YYSYMBOL_169_19 = 169,                   /* $@19  */
  YYSYMBOL_expression_statement = 170,     /* expression_statement  */
  YYSYMBOL_selection_statement = 171,      /* selection_statement  */
  YYSYMBOL_172_20 = 172,                   /* $@20  */
  YYSYMBOL_iteration_statement = 173,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 174,           /* jump_statement  */
  YYSYMBOL_175_21 = 175,                   /* $@21  */
  YYSYMBOL_176_22 = 176,                   /* $@22  */
  YYSYMBOL_translation_unit = 177,         /* translation_unit  */
  YYSYMBOL_178_23 = 178,                   /* $@23  */
  YYSYMBOL_external_declaration = 179,     /* external_declaration  */
  YYSYMBOL_function_definition = 180,      /* function_definition  */
  YYSYMBOL_181_24 = 181,                   /* $@24  */
  YYSYMBOL_182_25 = 182,                   /* $@25  */
  YYSYMBOL_183_26 = 183,                   /* $@26  */
  YYSYMBOL_declaration_list = 184          /* declaration_list  */
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
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

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
       0,    58,    58,    59,    60,    61,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    78,    79,    83,    84,
      85,    86,    87,    88,    92,    93,    94,    95,    96,    97,
     101,   102,   106,   107,   108,   109,   113,   114,   115,   119,
     120,   121,   125,   126,   127,   128,   129,   133,   134,   135,
     139,   140,   144,   145,   149,   150,   154,   155,   159,   160,
     164,   165,   169,   170,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   188,   189,   193,   197,   207,
     248,   249,   256,   257,   264,   265,   272,   273,   283,   284,
     288,   289,   293,   294,   294,   298,   298,   302,   302,   306,
     306,   313,   313,   317,   317,   321,   321,   325,   325,   329,
     329,   333,   333,   337,   337,   341,   341,   345,   345,   349,
     349,   353,   353,   357,   357,   361,   362,   363,   367,   384,
     385,   399,   400,   404,   410,   421,   431,   432,   433,   434,
     438,   439,   443,   444,   445,   449,   450,   451,   452,   453,
     457,   458,   462,   463,   467,   468,   469,   473,   477,   478,
     483,   484,   485,   492,   496,   503,   510,   517,   521,   525,
     529,   533,   534,   538,   539,   540,   541,   545,   546,   551,
     552,   556,   557,   561,   565,   566,   570,   571,   575,   576,
     580,   581,   582,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   600,   601,   602,   606,   607,   608,
     609,   613,   617,   618,   622,   623,   627,   628,   629,   630,
     630,   631,   631,   632,   636,   637,   638,   642,   643,   649,
     650,   654,   656,   656,   666,   667,   671,   672,   672,   673,
     677,   678,   679,   680,   681,   682,   686,   687,   688,   691,
     690,   699,   698,   709,   709,   710,   714,   715,   719,   734,
     719,   743,   743,   778,   782
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
  "$@18", "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "$@19", "expression_statement", "selection_statement",
  "$@20", "iteration_statement", "jump_statement", "$@21", "$@22",
  "translation_unit", "$@23", "external_declaration",
  "function_definition", "$@24", "$@25", "$@26", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-262)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -246,   852,  1320,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,    90,  -246,    -2,  1295,    27,     7,    29,    89,
    1295,   136,   113,   131,   170,   146,   200,   203,   227,   236,
     258,   234,   268,  -246,   101,  -246,  1295,  1295,  -246,  -246,
    -246,   247,   255,  -246,    42,    -9,  -246,    -5,  -246,   106,
     120,   163,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     250,  1066,  -246,  -246,   255,   260,   213,  -246,   256,  -246,
    -246,    -9,    42,  -246,   584,  1320,   281,  1138,   461,   120,
    1066,  1018,  1204,  -246,   -20,  1018,   215,   734,  -246,   -25,
    -246,  -246,  -246,  -246,   263,   751,   768,   768,  -246,  -246,
    -246,   408,   553,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     165,   526,   734,  -246,   122,   190,   282,    41,   280,   284,
     275,   285,   364,    -4,  -246,  -246,  -246,  -246,    -2,  1093,
     999,  -246,  -246,  -246,   121,   311,   306,  -246,    93,   160,
    -246,   312,   313,   488,  1223,  -246,  -246,  -246,   734,     8,
    -246,   293,  -246,  -246,    16,  -246,  -246,  -246,  -246,  -246,
     408,  -246,   408,  -246,  -246,  -246,   132,    23,   316,   734,
     320,  -246,   232,   584,   -16,  -246,   321,  -246,  -246,   290,
     734,   323,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,   734,  -246,   734,   734,   734,   734,   734,
     734,   734,   734,   734,   734,   734,   734,   734,   734,   734,
     734,   734,   734,   734,  -246,   281,  -246,  -246,  1047,  -246,
     344,   899,   632,  -246,   168,  -246,   173,  -246,  1269,  -246,
     324,   605,  -246,  -246,   734,  -246,   322,   325,  -246,  -246,
     -20,  -246,   734,  -246,   326,   331,  -246,   734,   948,   188,
    -246,   651,   332,  -246,  -246,   505,  -246,  -246,  -246,  -246,
    -246,   139,  -246,     1,  -246,  -246,  -246,  -246,  -246,   122,
     122,   190,   190,   282,   282,   282,   282,    41,    41,   280,
     284,   275,   285,   364,   -49,  -246,  -246,  -246,   734,   302,
     328,   301,   327,   335,   315,  -246,    30,  -246,   209,   194,
    -246,  -246,  -246,  -246,  -246,   333,   345,  -246,   348,   356,
     173,  1179,   669,  -246,  -246,  -246,   357,   358,  -246,  -246,
    -246,  -246,   359,   359,  -246,   553,  -246,  -246,  -246,  -246,
     584,  -246,   734,  -246,   734,   341,   344,   340,  -246,  -246,
     342,   734,   344,  -246,   366,   368,  -246,   369,   344,   370,
    -246,  -246,  -246,  -246,  -246,  -246,   371,  -246,   381,   389,
    -246,  -246,   235,  -246,  -246,  -246,   344,  -246,  -246,  -246,
      36,  -246,   734,   734,   734,   403,   297,  -246,  -246,  -246,
    -246,   528,  -246,  -246,   140,   147,   148,   394,   205,   205,
    -246,   344,   344,   344,   734,   686,   715,   383,  -246,  -246,
     149,   344,   150,   344,   151,  -246,   372,  -246,   344,  -246,
     344,   344,  -246,  -246,  -246,  -246
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     253,    93,    93,     1,    92,   157,   155,   154,   156,   125,
     131,   132,     0,   257,     0,    80,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,   127,    84,    86,   255,   256,
     254,   149,     0,   160,     0,   173,    78,     0,    88,   258,
     159,     0,    81,    94,    96,    98,   100,    83,   102,   104,
     106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
     130,   101,    85,    87,     0,   152,     0,   150,     0,   177,
     175,   174,     0,    79,     0,    93,     0,    93,     0,   158,
     101,   138,   101,   133,     0,   136,     0,     0,   145,     0,
     161,   178,   176,    89,    90,     0,     0,     0,     3,     2,
       4,   101,     0,    24,    25,    26,    27,    28,    29,     6,
      18,    30,     0,    32,    36,    39,    42,    47,    50,    52,
      54,    56,    58,    60,    62,   204,    91,   263,     0,    93,
     232,   262,   186,   172,   185,     0,   179,   181,     0,     0,
     169,    25,     0,     0,   101,   139,   129,   134,     0,     0,
     140,   142,   137,   146,     0,    30,    77,   153,   147,   151,
     101,    22,   101,    19,    20,    75,     0,   188,     0,     0,
       0,   207,     0,     0,     0,   212,     0,    12,    13,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    64,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   264,     0,   227,   231,   232,   229,
     221,    93,     0,   183,   190,   184,   191,   170,    93,   171,
       0,     0,   168,   164,     0,   163,    25,     0,   128,   143,
       0,   135,     0,   148,     0,     0,     5,     0,    93,   190,
     189,     0,     0,   215,   205,     0,   208,   211,   213,    11,
       8,     0,    16,     0,    10,    63,    33,    34,    35,    37,
      38,    40,    41,    45,    46,    43,    44,    48,    49,    51,
      53,    55,    57,    59,     0,   260,   228,   230,     0,     0,
       0,     0,     0,   251,     2,   234,     0,   233,     0,     0,
     216,   217,   218,   223,   200,     0,     0,   194,    25,     0,
     192,    93,     0,   180,   182,   187,     0,     0,   167,   162,
     141,   144,    23,     0,    76,     0,    31,   214,   206,   209,
       0,     9,     0,     7,     0,     0,   221,     0,   247,   248,
       0,     0,   221,   235,     0,     0,   220,     0,   221,     0,
     222,   201,   193,   198,   195,   202,     0,   196,    25,     0,
     165,   166,     0,   210,    17,    61,   221,   226,   246,   250,
       0,   224,     0,     0,     0,     0,    93,   203,   199,   197,
      14,     0,   225,   252,     0,     0,     0,     0,     0,     0,
      15,   221,   221,   221,     0,     0,     0,   236,   239,   240,
       0,   221,     0,   221,     0,   237,     0,   244,   221,   242,
     221,   221,   241,   245,   243,   238
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,  -246,   -79,  -246,   -93,   103,   104,    34,
     100,   244,   246,   243,   248,   253,  -246,   -89,   -82,  -246,
    -107,  -142,   -80,    -1,  -246,   386,  -246,  -246,  -246,  -246,
    -246,   -50,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,   380,   -77,    56,  -246,
     226,  -246,   404,   -88,     4,  -246,    11,   -44,   -33,   -71,
     -78,  -246,   239,  -246,   102,  -121,  -201,   -81,   144,  -245,
    -246,   296,   502,  -246,  -246,  -246,   -73,  -246,   261,  -246,
    -206,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   479,
    -246,  -246,  -246,  -246,  -246
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   119,   120,   271,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   175,   203,
     306,   167,    13,   138,    47,    48,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    92,    93,    94,   159,
     160,    35,    76,    77,    36,    37,    78,    50,    51,    81,
     315,   146,   147,   148,   178,   316,   236,   181,   182,   183,
     184,   185,   307,   308,   309,   310,   311,   228,   229,   230,
     312,   356,   421,   360,   313,   350,   351,     1,     2,    38,
      39,    85,   225,    86,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    14,   135,   136,   176,   137,   152,    89,   166,   145,
     222,   169,    80,   141,    52,   157,   249,   153,   165,    57,
     340,    91,     6,   235,   257,    49,   171,   173,   174,   204,
     135,     7,     8,   320,    54,    72,    73,   262,   344,    75,
      91,    91,    91,   165,    43,    91,    44,   168,   102,    79,
     212,   213,   179,    53,   180,    45,   260,    55,   320,   224,
     227,    91,    43,   176,    44,   176,    45,   158,    82,   166,
     343,   247,   267,    45,   257,    95,   169,   157,   241,   165,
      75,   250,   223,   273,    83,   101,   144,    46,   253,   258,
     166,   232,    79,   104,    95,    95,    95,   251,    45,    95,
     165,   135,   266,   257,    91,   161,    43,   272,    44,   257,
     331,   234,   276,   277,   278,    95,   294,    45,    56,   353,
      91,   275,    91,   214,   215,   393,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   259,    59,   340,   155,   227,   104,
     319,   162,   295,    79,    41,   233,   345,   101,    95,   326,
     239,    42,   327,   166,    60,    70,   240,   177,   336,   186,
     187,   188,    71,   165,    95,   334,    95,  -261,    58,   -90,
     399,    62,   165,   135,   339,    43,    87,   231,    88,   232,
      89,     6,   405,   406,    84,   -90,    45,   205,   234,   256,
       7,     8,   206,   207,    61,   257,   341,   401,   105,   166,
     106,   107,   342,   257,   402,   403,   416,   418,   420,   165,
     257,   257,   257,   257,   257,   259,   177,    43,   177,    44,
     144,   189,    43,   190,   231,   191,   232,   144,    63,   321,
     369,   322,    64,   366,   380,   101,   283,   284,   285,   286,
     357,   358,   359,   135,   258,   375,   232,   144,   135,   373,
     374,   161,   354,    65,   355,   165,   208,   209,   108,   109,
     110,   111,   254,    66,   255,   394,   395,   396,    68,   113,
     114,   115,   116,   117,   118,    98,    99,   163,   164,   210,
     211,   216,   217,   105,   305,   106,   107,   410,   412,   414,
     105,    67,   106,   107,   264,   265,   398,   390,   391,   135,
     339,   279,   280,    69,   281,   282,   287,   288,    74,    75,
     144,    90,     4,   100,   -95,   -97,   -99,     5,     6,  -103,
    -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,  -101,
    -119,  -121,  -123,     9,    10,    11,    12,   105,    97,   106,
     107,    84,   140,   108,   109,   110,   111,   270,   218,   219,
     108,   109,   110,   111,   113,   114,   115,   116,   117,   118,
     220,   113,   114,   115,   116,   117,   118,   221,   237,   238,
     252,   242,   243,   261,   263,   269,   305,   274,   325,   346,
     348,   328,   347,   332,   329,   298,   299,  -219,   333,  -219,
     361,   337,   352,   300,   301,   302,   303,   108,   304,   110,
     111,   105,   362,   106,   107,   140,   349,   363,   113,   114,
     115,   116,   117,   118,  -249,   364,   370,   371,   376,   378,
     335,   379,   382,   305,   383,   384,   386,   415,   387,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
     388,  -119,  -121,  -123,     9,    10,    11,    12,   389,   397,
     404,   422,   289,   291,   105,   290,   106,   107,   103,   292,
     154,   108,   109,   110,   111,   293,   330,   324,    96,   372,
     268,    40,   113,   114,   115,   116,   117,   118,   149,   297,
       0,   105,     6,   106,   107,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     0,     0,   105,     0,
     106,   107,     0,     0,     0,   244,     0,     0,     0,     6,
       0,     0,     0,     0,   108,   109,   110,   111,     7,     8,
     150,   105,     0,   106,   107,   113,   151,   115,   116,   117,
     118,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   108,   109,   110,   111,     0,   105,   245,   106,   107,
       0,     0,   113,   246,   115,   116,   117,   118,   108,   109,
     110,   111,     0,   179,     0,   180,   112,   338,     0,   113,
     114,   115,   116,   117,   118,     0,     0,   105,     0,   106,
     107,   108,   109,   110,   111,     0,   179,     0,   180,   112,
     400,     0,   113,   114,   115,   116,   117,   118,   105,     0,
     106,   107,     0,     0,   202,     0,   108,   109,   110,   111,
       0,   179,     0,   180,   112,     0,     0,   113,   114,   115,
     116,   117,   118,     0,     0,   105,     6,   106,   107,     0,
       0,     0,     0,     0,     0,     7,     8,   108,   109,   110,
     111,     0,     0,     0,   105,   112,   106,   107,   113,   114,
     115,   116,   117,   118,     0,     0,     0,     0,   108,   109,
     110,   111,   105,     0,   106,   107,     0,     0,     0,   113,
     114,   115,   116,   117,   118,     0,     0,     0,     0,   105,
       0,   106,   107,     0,     0,   108,   109,   110,   111,     0,
       0,   317,     0,     0,     0,     0,   113,   318,   115,   116,
     117,   118,     0,     0,   108,   109,   110,   111,   105,     0,
     106,   107,   335,     0,     0,   113,   114,   115,   116,   117,
     118,     0,   108,   109,   110,   111,     0,   105,   367,   106,
     107,     0,     0,   113,   368,   115,   116,   117,   118,   108,
     109,   110,   111,   411,   105,     0,   106,   107,     0,     0,
     113,   114,   115,   116,   117,   118,     0,     0,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,   108,   109,
     110,   111,   413,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   117,   118,     0,     0,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,   117,   118,   108,   109,   110,   170,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   108,   109,   110,   172,     0,     0,     0,     0,     0,
       0,     0,   113,   114,   115,   116,   117,   118,   377,     0,
       0,     0,     3,     0,   381,     0,     0,     0,     0,     0,
     385,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,   392,   -95,
     -97,   -99,     5,     6,  -103,  -105,  -107,  -109,  -115,  -117,
    -111,  -113,     7,     8,  -101,  -119,  -121,  -123,     9,    10,
      11,    12,     0,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,   417,     0,   419,     0,     0,     0,     0,
     423,     0,   424,   425,     4,     0,   -95,   -97,   -99,     5,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,   231,   314,   232,     0,     0,
       0,     0,     0,     4,    45,   -95,   -97,   -99,     5,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
    -101,  -119,  -121,  -123,     9,    10,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   314,   232,     0,     0,     0,
       0,     0,     0,    45,     4,   -93,   -95,   -97,   -99,     5,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
    -101,  -119,  -121,  -123,     9,    10,    11,    12,     0,     0,
       0,   226,     4,   -93,   -95,   -97,   -99,     5,     6,  -103,
    -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,  -101,
    -119,  -121,  -123,     9,    10,    11,    12,     6,  -103,  -105,
    -107,  -109,  -115,  -117,  -111,  -113,     7,     8,     0,  -119,
    -121,  -123,     9,    10,    11,    12,     0,     0,     4,   296,
     -95,   -97,   -99,     5,     6,  -103,  -105,  -107,  -109,  -115,
    -117,  -111,  -113,     7,     8,  -101,  -119,  -121,  -123,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,  -259,   -95,   -97,   -99,     5,     6,
    -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,     8,
    -101,  -119,  -121,  -123,     9,    10,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     4,   143,   -95,   -97,   -99,     5,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     6,  -103,  -105,  -107,  -109,
    -115,  -117,  -111,  -113,     7,     8,   365,  -119,  -121,  -123,
       9,    10,    11,    12,     6,  -103,  -105,  -107,  -109,  -115,
    -117,  -111,  -113,     7,     8,     0,  -119,  -121,  -123,     9,
      10,    11,    12,     0,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,   248,   -95,   -97,   -99,     5,
       6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,     7,
       8,  -101,  -119,  -121,  -123,     9,    10,    11,    12,   323,
       4,   -93,   -95,   -97,   -99,     5,     6,  -103,  -105,  -107,
    -109,  -115,  -117,  -111,  -113,     7,     8,  -101,  -119,  -121,
    -123,     9,    10,    11,    12,     4,     0,   -95,   -97,   -99,
       5,     6,  -103,  -105,  -107,  -109,  -115,  -117,  -111,  -113,
       7,     8,  -101,  -119,  -121,  -123,     9,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
       1,     2,    84,    84,   111,    85,    88,    51,    97,    87,
      14,    99,    45,    86,    15,    92,   158,    88,    97,    20,
     265,    71,    31,   144,    73,    14,   105,   106,   107,   122,
     112,    40,    41,   234,    27,    36,    37,   179,    87,    64,
      90,    91,    92,   122,    64,    95,    66,    72,    81,    45,
       9,    10,    68,    26,    70,    75,   177,    28,   259,   139,
     140,   111,    64,   170,    66,   172,    75,    87,    73,   158,
      69,   153,    88,    75,    73,    71,   164,   154,   149,   158,
      64,    73,    86,   190,    89,    81,    87,    89,    72,    66,
     179,    68,    88,    82,    90,    91,    92,    89,    75,    95,
     179,   183,   183,    73,   154,    94,    64,   189,    66,    73,
     252,   144,   205,   206,   207,   111,   223,    75,    29,    89,
     170,   203,   172,    82,    83,    89,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   177,    32,   391,    91,   228,   138,
     232,    95,   225,   149,    64,   144,   298,   153,   154,   241,
      67,    71,   244,   252,    33,    64,    73,   111,   261,     4,
       5,     6,    71,   252,   170,   257,   172,    71,    42,    73,
     386,    35,   261,   265,   265,    64,    66,    66,    68,    68,
     234,    31,   398,   399,    88,    89,    75,    75,   231,    67,
      40,    41,    80,    81,    34,    73,    67,    67,     3,   298,
       5,     6,    73,    73,    67,    67,    67,    67,    67,   298,
      73,    73,    73,    73,    73,   258,   170,    64,   172,    66,
     231,    66,    64,    68,    66,    70,    68,   238,    38,    66,
     322,    68,    39,   321,   351,   241,   212,   213,   214,   215,
      56,    57,    58,   335,    66,   344,    68,   258,   340,   340,
     342,   250,    53,    36,    55,   344,    76,    77,    63,    64,
      65,    66,   170,    37,   172,   382,   383,   384,    44,    74,
      75,    76,    77,    78,    79,    72,    73,    72,    73,     7,
       8,    11,    12,     3,    89,     5,     6,   404,   405,   406,
       3,    43,     5,     6,    72,    73,   386,    72,    73,   391,
     391,   208,   209,    45,   210,   211,   216,   217,    71,    64,
     321,    71,    25,    67,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     3,    88,     5,
       6,    88,    71,    63,    64,    65,    66,    67,    74,    84,
      63,    64,    65,    66,    74,    75,    76,    77,    78,    79,
      85,    74,    75,    76,    77,    78,    79,    13,    67,    73,
      87,    69,    69,    67,    64,    64,    89,    64,    64,    87,
      89,    69,    64,    67,    69,    51,    52,    53,    67,    55,
      67,    69,    87,    59,    60,    61,    62,    63,    64,    65,
      66,     3,    67,     5,     6,    71,    89,    69,    74,    75,
      76,    77,    78,    79,    89,    69,    69,    69,    87,    89,
      71,    89,    66,    89,    66,    66,    66,    54,    67,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      69,    43,    44,    45,    46,    47,    48,    49,    69,    56,
      66,    89,   218,   220,     3,   219,     5,     6,    82,   221,
      90,    63,    64,    65,    66,   222,   250,   238,    74,   335,
     184,     2,    74,    75,    76,    77,    78,    79,    27,   228,
      -1,     3,    31,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    40,    41,
      69,     3,    -1,     5,     6,    74,    75,    76,    77,    78,
      79,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    63,    64,    65,    66,    -1,     3,    69,     5,     6,
      -1,    -1,    74,    75,    76,    77,    78,    79,    63,    64,
      65,    66,    -1,    68,    -1,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,     3,    -1,     5,
       6,    63,    64,    65,    66,    -1,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,     3,    -1,
       5,     6,    -1,    -1,    88,    -1,    63,    64,    65,    66,
      -1,    68,    -1,    70,    71,    -1,    -1,    74,    75,    76,
      77,    78,    79,    -1,    -1,     3,    31,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    63,    64,    65,
      66,    -1,    -1,    -1,     3,    71,     5,     6,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,     3,    -1,     5,     6,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    63,    64,    65,    66,     3,    -1,
       5,     6,    71,    -1,    -1,    74,    75,    76,    77,    78,
      79,    -1,    63,    64,    65,    66,    -1,     3,    69,     5,
       6,    -1,    -1,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    67,     3,    -1,     5,     6,    -1,    -1,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,   346,    -1,
      -1,    -1,     0,    -1,   352,    -1,    -1,    -1,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   376,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,   401,   402,   403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   411,    -1,   413,    -1,    -1,    -1,    -1,
     418,    -1,   420,   421,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    25,    75,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    72,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    25,    72,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    71,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    25,    67,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    67,    43,    44,    45,
      46,    47,    48,    49,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    72,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   177,   178,     0,    25,    30,    31,    40,    41,    46,
      47,    48,    49,   112,   113,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   141,   144,   145,   179,   180,
     179,    64,    71,    64,    66,    75,    89,   114,   115,   146,
     147,   148,   113,    26,    27,    28,    29,   113,    42,    32,
      33,    34,    35,    38,    39,    36,    37,    43,    44,    45,
      64,    71,   113,   113,    71,    64,   142,   143,   146,   144,
     148,   149,    73,    89,    88,   181,   183,    66,    68,   147,
      71,   121,   136,   137,   138,   144,   142,    88,    72,    73,
      67,   144,   148,   115,   146,     3,     5,     6,    63,    64,
      65,    66,    71,    74,    75,    76,    77,    78,    79,    91,
      92,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   157,   112,   113,   184,
      71,   166,    64,    67,   113,   150,   151,   152,   153,    27,
      69,    75,   108,   149,   136,   138,    72,   137,    87,   139,
     140,   146,   138,    72,    73,    94,   107,   111,    72,   143,
      66,    94,    66,    94,    94,   108,   110,   138,   154,    68,
      70,   157,   158,   159,   160,   161,     4,     5,     6,    66,
      68,    70,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    88,   109,    96,    75,    80,    81,    76,    77,
       7,     8,     9,    10,    82,    83,    11,    12,    74,    84,
      85,    13,    14,    86,   112,   182,    72,   112,   167,   168,
     169,    66,    68,   146,   148,   155,   156,    67,    73,    67,
      73,   149,    69,    69,    27,    69,    75,   108,    72,   111,
      73,    89,    87,    72,   154,   154,    67,    73,    66,   148,
     155,    67,   111,    64,    72,    73,   157,    88,   161,    64,
      67,    93,   108,   110,    64,   108,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     102,   103,   104,   105,   110,   166,    72,   168,    51,    52,
      59,    60,    61,    62,    64,    89,   110,   162,   163,   164,
     165,   166,   170,   174,    67,   150,   155,    69,    75,   108,
     156,    66,    68,    50,   152,    64,   108,   108,    69,    69,
     140,   111,    67,    67,   108,    71,    96,    69,    72,   157,
     159,    67,    73,    69,    87,   111,    87,    64,    89,    89,
     175,   176,    87,    89,    53,    55,   171,    56,    57,    58,
     173,    67,    67,    69,    69,    67,   150,    69,    75,   108,
      69,    69,   158,   157,   108,   107,    87,   162,    89,    89,
     110,   162,    66,    66,    66,   162,    66,    67,    69,    69,
      72,    73,   162,    89,   110,   110,   110,    56,   112,   170,
      72,    67,    67,    67,    66,   170,   170,   162,   162,   162,
     110,    67,   110,    67,   110,    54,    67,   162,    67,   162,
      67,   172,    89,   162,   162,   162
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
     162,   164,   162,   162,   165,   165,   165,   166,   166,   167,
     167,   168,   169,   168,   170,   170,   171,   172,   171,   171,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   175,
     174,   176,   174,   178,   177,   177,   179,   179,   181,   182,
     180,   183,   180,   184,   184
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
       2,     0,     2,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     0,     2,     1,     2,     5,     0,     8,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     0,
       3,     0,     4,     0,     2,     2,     1,     1,     0,     0,
       6,     0,     4,     1,     2
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
#line 59 "C99-parser.yacc"
               {(yyval.sym) = (yyvsp[0].sym);}
#line 1787 "y.tab.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 61 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[-1].sym);}
#line 1793 "y.tab.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 65 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1799 "y.tab.cc"
    break;

  case 14: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 73 "C99-parser.yacc"
                                                     {(yyval.sym) = (yyvsp[-1].sym);}
#line 1805 "y.tab.cc"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 74 "C99-parser.yacc"
                                                        {(yyval.sym) = (yyvsp[-2].sym);}
#line 1811 "y.tab.cc"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 83 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1817 "y.tab.cc"
    break;

  case 19: /* unary_expression: INC_OP unary_expression  */
#line 84 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1823 "y.tab.cc"
    break;

  case 20: /* unary_expression: DEC_OP unary_expression  */
#line 85 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1829 "y.tab.cc"
    break;

  case 21: /* unary_expression: unary_operator cast_expression  */
#line 86 "C99-parser.yacc"
                                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1835 "y.tab.cc"
    break;

  case 22: /* unary_expression: SIZEOF unary_expression  */
#line 87 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1841 "y.tab.cc"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 88 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 1847 "y.tab.cc"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 101 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1853 "y.tab.cc"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 102 "C99-parser.yacc"
                                            {(yyval.sym) = (yyvsp[0].sym);}
#line 1859 "y.tab.cc"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 106 "C99-parser.yacc"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1865 "y.tab.cc"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 113 "C99-parser.yacc"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1871 "y.tab.cc"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 119 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1877 "y.tab.cc"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 125 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1883 "y.tab.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 133 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1889 "y.tab.cc"
    break;

  case 50: /* and_expression: equality_expression  */
#line 139 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1895 "y.tab.cc"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 144 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1901 "y.tab.cc"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 149 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1907 "y.tab.cc"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 154 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1913 "y.tab.cc"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 159 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1919 "y.tab.cc"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 164 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1925 "y.tab.cc"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 169 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1931 "y.tab.cc"
    break;

  case 78: /* declaration: declaration_specifiers ';'  */
#line 198 "C99-parser.yacc"
        {
		if((yyvsp[-1].sym)->isStruct()){
			(yyval.symList) = new vector<SymbolInfo*>();
			SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].sym));
			(yyval.symList)->push_back(symbol);
			table.insert((yyvsp[-1].sym));
		}
	}
#line 1944 "y.tab.cc"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 207 "C99-parser.yacc"
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
#line 1987 "y.tab.cc"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier  */
#line 248 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 1993 "y.tab.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 250 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2004 "y.tab.cc"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 256 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2010 "y.tab.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 258 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2021 "y.tab.cc"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 264 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 2027 "y.tab.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 266 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2038 "y.tab.cc"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 272 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[0].sym); }
#line 2044 "y.tab.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 274 "C99-parser.yacc"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2055 "y.tab.cc"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 283 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2061 "y.tab.cc"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 284 "C99-parser.yacc"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2067 "y.tab.cc"
    break;

  case 90: /* init_declarator: declarator  */
#line 288 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2073 "y.tab.cc"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 289 "C99-parser.yacc"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 2079 "y.tab.cc"
    break;

  case 92: /* storage_class_specifier: TYPEDEF  */
#line 293 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 2085 "y.tab.cc"
    break;

  case 93: /* $@1: %empty  */
#line 294 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2094 "y.tab.cc"
    break;

  case 94: /* storage_class_specifier: $@1 EXTERN  */
#line 297 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 2100 "y.tab.cc"
    break;

  case 95: /* $@2: %empty  */
#line 298 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2109 "y.tab.cc"
    break;

  case 96: /* storage_class_specifier: $@2 STATIC  */
#line 301 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 2115 "y.tab.cc"
    break;

  case 97: /* $@3: %empty  */
#line 302 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2124 "y.tab.cc"
    break;

  case 98: /* storage_class_specifier: $@3 AUTO  */
#line 305 "C99-parser.yacc"
                                                { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 2130 "y.tab.cc"
    break;

  case 99: /* $@4: %empty  */
#line 306 "C99-parser.yacc"
          { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2139 "y.tab.cc"
    break;

  case 100: /* storage_class_specifier: $@4 REGISTER  */
#line 309 "C99-parser.yacc"
                                        { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 2145 "y.tab.cc"
    break;

  case 101: /* $@5: %empty  */
#line 313 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2154 "y.tab.cc"
    break;

  case 102: /* type_specifier: $@5 VOID  */
#line 316 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 2160 "y.tab.cc"
    break;

  case 103: /* $@6: %empty  */
#line 317 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2169 "y.tab.cc"
    break;

  case 104: /* type_specifier: $@6 CHAR  */
#line 320 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 2175 "y.tab.cc"
    break;

  case 105: /* $@7: %empty  */
#line 321 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2184 "y.tab.cc"
    break;

  case 106: /* type_specifier: $@7 SHORT  */
#line 324 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 2190 "y.tab.cc"
    break;

  case 107: /* $@8: %empty  */
#line 325 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2199 "y.tab.cc"
    break;

  case 108: /* type_specifier: $@8 INT  */
#line 328 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 2205 "y.tab.cc"
    break;

  case 109: /* $@9: %empty  */
#line 329 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2214 "y.tab.cc"
    break;

  case 110: /* type_specifier: $@9 LONG  */
#line 332 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 2220 "y.tab.cc"
    break;

  case 111: /* $@10: %empty  */
#line 333 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2229 "y.tab.cc"
    break;

  case 112: /* type_specifier: $@10 FLOAT  */
#line 336 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 2235 "y.tab.cc"
    break;

  case 113: /* $@11: %empty  */
#line 337 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2244 "y.tab.cc"
    break;

  case 114: /* type_specifier: $@11 DOUBLE  */
#line 340 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2250 "y.tab.cc"
    break;

  case 115: /* $@12: %empty  */
#line 341 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2259 "y.tab.cc"
    break;

  case 116: /* type_specifier: $@12 SIGNED  */
#line 344 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2265 "y.tab.cc"
    break;

  case 117: /* $@13: %empty  */
#line 345 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2274 "y.tab.cc"
    break;

  case 118: /* type_specifier: $@13 UNSIGNED  */
#line 348 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2280 "y.tab.cc"
    break;

  case 119: /* $@14: %empty  */
#line 349 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2289 "y.tab.cc"
    break;

  case 120: /* type_specifier: $@14 BOOL  */
#line 352 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2295 "y.tab.cc"
    break;

  case 121: /* $@15: %empty  */
#line 353 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2304 "y.tab.cc"
    break;

  case 122: /* type_specifier: $@15 COMPLEX  */
#line 356 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2310 "y.tab.cc"
    break;

  case 123: /* $@16: %empty  */
#line 357 "C99-parser.yacc"
      { if (posVarsInit == -100 && !MPIInitDone) {
			posVarsInit = output.tellp();
			output.write("                                                            \n", 61);
		} }
#line 2319 "y.tab.cc"
    break;

  case 124: /* type_specifier: $@16 IMAGINARY  */
#line 360 "C99-parser.yacc"
                                  { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2325 "y.tab.cc"
    break;

  case 125: /* type_specifier: USER_DEFINED  */
#line 361 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2331 "y.tab.cc"
    break;

  case 126: /* type_specifier: struct_or_union_specifier  */
#line 362 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2337 "y.tab.cc"
    break;

  case 127: /* type_specifier: enum_specifier  */
#line 363 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2343 "y.tab.cc"
    break;

  case 128: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 368 "C99-parser.yacc"
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
#line 2364 "y.tab.cc"
    break;

  case 130: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 386 "C99-parser.yacc"
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
#line 2379 "y.tab.cc"
    break;

  case 131: /* struct_or_union: STRUCT  */
#line 399 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2385 "y.tab.cc"
    break;

  case 132: /* struct_or_union: UNION  */
#line 400 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2391 "y.tab.cc"
    break;

  case 133: /* struct_declaration_list: struct_declaration  */
#line 404 "C99-parser.yacc"
                             { (yyval.symList) = (yyvsp[0].symList); 
	for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
	}
#line 2401 "y.tab.cc"
    break;

  case 134: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 411 "C99-parser.yacc"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
			logFile << "Struct item: " << (yyvsp[0].symList)->at(i)->getSymbolName() << endl;
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2413 "y.tab.cc"
    break;

  case 135: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 422 "C99-parser.yacc"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2424 "y.tab.cc"
    break;

  case 140: /* struct_declarator_list: struct_declarator  */
#line 438 "C99-parser.yacc"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2430 "y.tab.cc"
    break;

  case 141: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 439 "C99-parser.yacc"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2436 "y.tab.cc"
    break;

  case 142: /* struct_declarator: declarator  */
#line 443 "C99-parser.yacc"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2442 "y.tab.cc"
    break;

  case 143: /* struct_declarator: ':' constant_expression  */
#line 444 "C99-parser.yacc"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2448 "y.tab.cc"
    break;

  case 144: /* struct_declarator: declarator ':' constant_expression  */
#line 445 "C99-parser.yacc"
                                             { (yyval.sym) = (yyvsp[-2].sym); }
#line 2454 "y.tab.cc"
    break;

  case 158: /* declarator: pointer direct_declarator  */
#line 477 "C99-parser.yacc"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2460 "y.tab.cc"
    break;

  case 159: /* declarator: direct_declarator  */
#line 478 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2466 "y.tab.cc"
    break;

  case 160: /* direct_declarator: IDENTIFIER  */
#line 483 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2472 "y.tab.cc"
    break;

  case 161: /* direct_declarator: '(' declarator ')'  */
#line 484 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2478 "y.tab.cc"
    break;

  case 162: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 485 "C99-parser.yacc"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2490 "y.tab.cc"
    break;

  case 163: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 492 "C99-parser.yacc"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2499 "y.tab.cc"
    break;

  case 164: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 496 "C99-parser.yacc"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2511 "y.tab.cc"
    break;

  case 165: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 503 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2523 "y.tab.cc"
    break;

  case 166: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 510 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2535 "y.tab.cc"
    break;

  case 167: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 517 "C99-parser.yacc"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2544 "y.tab.cc"
    break;

  case 168: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 521 "C99-parser.yacc"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2553 "y.tab.cc"
    break;

  case 169: /* direct_declarator: direct_declarator '[' ']'  */
#line 525 "C99-parser.yacc"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2562 "y.tab.cc"
    break;

  case 170: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 529 "C99-parser.yacc"
                                                        {
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2571 "y.tab.cc"
    break;

  case 171: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 533 "C99-parser.yacc"
                                                    { (yyval.sym) = (yyvsp[-3].sym); }
#line 2577 "y.tab.cc"
    break;

  case 172: /* direct_declarator: direct_declarator '(' ')'  */
#line 534 "C99-parser.yacc"
                                    { (yyval.sym) = (yyvsp[-2].sym); }
#line 2583 "y.tab.cc"
    break;

  case 179: /* parameter_type_list: parameter_list  */
#line 551 "C99-parser.yacc"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2589 "y.tab.cc"
    break;

  case 181: /* parameter_list: parameter_declaration  */
#line 556 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2595 "y.tab.cc"
    break;

  case 182: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 557 "C99-parser.yacc"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2601 "y.tab.cc"
    break;

  case 183: /* parameter_declaration: declaration_specifiers declarator  */
#line 561 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2610 "y.tab.cc"
    break;

  case 186: /* identifier_list: IDENTIFIER  */
#line 570 "C99-parser.yacc"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2616 "y.tab.cc"
    break;

  case 187: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 571 "C99-parser.yacc"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2622 "y.tab.cc"
    break;

  case 205: /* initializer: '{' initializer_list '}'  */
#line 601 "C99-parser.yacc"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 2628 "y.tab.cc"
    break;

  case 206: /* initializer: '{' initializer_list ',' '}'  */
#line 602 "C99-parser.yacc"
                                       {(yyval.sym) = (yyvsp[-2].sym);}
#line 2634 "y.tab.cc"
    break;

  case 208: /* initializer_list: designation initializer  */
#line 607 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 2640 "y.tab.cc"
    break;

  case 219: /* $@17: %empty  */
#line 630 "C99-parser.yacc"
          { table.enterScope(); }
#line 2646 "y.tab.cc"
    break;

  case 220: /* statement: $@17 selection_statement  */
#line 630 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2652 "y.tab.cc"
    break;

  case 221: /* $@18: %empty  */
#line 631 "C99-parser.yacc"
          { table.enterScope(); }
#line 2658 "y.tab.cc"
    break;

  case 222: /* statement: $@18 iteration_statement  */
#line 631 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2664 "y.tab.cc"
    break;

  case 232: /* $@19: %empty  */
#line 656 "C99-parser.yacc"
        {
		if(main_init == 1 && MPIInitDone == 0 && posInit == -100){
			posInit = output.tellp();
			output.write("                                                                                                                                                      \n", 151);
		}
	}
#line 2675 "y.tab.cc"
    break;

  case 237: /* $@20: %empty  */
#line 672 "C99-parser.yacc"
                                               { table.exitScope(); table.enterScope(); }
#line 2681 "y.tab.cc"
    break;

  case 249: /* $@21: %empty  */
#line 691 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2692 "y.tab.cc"
    break;

  case 251: /* $@22: %empty  */
#line 699 "C99-parser.yacc"
        {	
		if(main_end == 1 && MPIInitDone == 1){
			MPIFinalize();
			main_end = 0;
		}
	}
#line 2703 "y.tab.cc"
    break;

  case 253: /* $@23: %empty  */
#line 709 "C99-parser.yacc"
          {output.write("                                    \n", 37); }
#line 2709 "y.tab.cc"
    break;

  case 258: /* $@24: %empty  */
#line 719 "C99-parser.yacc"
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
#line 2730 "y.tab.cc"
    break;

  case 259: /* $@25: %empty  */
#line 734 "C99-parser.yacc"
                           {
	// 	for (auto symbol : *$4) {
    //     logFile << "Debug Simbol: " << symbol->getSymbolName() << "\n";
    // }
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));
	}
#line 2741 "y.tab.cc"
    break;

  case 260: /* function_definition: declaration_specifiers declarator $@24 declaration_list $@25 compound_statement  */
#line 739 "C99-parser.yacc"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope(); 
	}
#line 2750 "y.tab.cc"
    break;

  case 261: /* $@26: %empty  */
#line 743 "C99-parser.yacc"
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
	}
#line 2784 "y.tab.cc"
    break;

  case 262: /* function_definition: declaration_specifiers declarator $@26 compound_statement  */
#line 771 "C99-parser.yacc"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
	}
#line 2793 "y.tab.cc"
    break;

  case 263: /* declaration_list: declaration  */
#line 778 "C99-parser.yacc"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2802 "y.tab.cc"
    break;

  case 264: /* declaration_list: declaration_list declaration  */
#line 782 "C99-parser.yacc"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2811 "y.tab.cc"
    break;


#line 2815 "y.tab.cc"

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

#line 789 "C99-parser.yacc"

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
