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
#include "MPIwriter.h"
void yyerror(char const *s);
extern int yylex (void);

int stateGlobal = 0;
int stateFuncion = 0;

extern ofstream logFile;
extern ofstream errFile;
int statePragma = 0;
bool saltaFor = true;
std::string last_iter(""), first_iter("");

std::ofstream generado;
MPI_Writer mpi_writer;
SymbolTable table(30);

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
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 4,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 5,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 6,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 7,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 8,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 9,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 10,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 11,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 12,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 13,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 14,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 15,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 16,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 17,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 18,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 19,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 20,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 21,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 22,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 23,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 24,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 25,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 26,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 27,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 28,                    /* EXTERN  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_AUTO = 30,                      /* AUTO  */
  YYSYMBOL_REGISTER = 31,                  /* REGISTER  */
  YYSYMBOL_INLINE = 32,                    /* INLINE  */
  YYSYMBOL_RESTRICT = 33,                  /* RESTRICT  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_BOOL = 45,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 46,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 47,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 48,                    /* STRUCT  */
  YYSYMBOL_UNION = 49,                     /* UNION  */
  YYSYMBOL_ENUM = 50,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 51,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 52,                      /* CASE  */
  YYSYMBOL_DEFAULT = 53,                   /* DEFAULT  */
  YYSYMBOL_IF = 54,                        /* IF  */
  YYSYMBOL_ELSE = 55,                      /* ELSE  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_WHILE = 57,                     /* WHILE  */
  YYSYMBOL_DO = 58,                        /* DO  */
  YYSYMBOL_FOR = 59,                       /* FOR  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 61,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 62,                     /* BREAK  */
  YYSYMBOL_RETURN = 63,                    /* RETURN  */
  YYSYMBOL_CONSTANT = 64,                  /* CONSTANT  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '['  */
  YYSYMBOL_68_ = 68,                       /* ']'  */
  YYSYMBOL_69_ = 69,                       /* '.'  */
  YYSYMBOL_70_ = 70,                       /* '{'  */
  YYSYMBOL_71_ = 71,                       /* '}'  */
  YYSYMBOL_72_ = 72,                       /* ','  */
  YYSYMBOL_73_ = 73,                       /* '&'  */
  YYSYMBOL_74_ = 74,                       /* '*'  */
  YYSYMBOL_75_ = 75,                       /* '+'  */
  YYSYMBOL_76_ = 76,                       /* '-'  */
  YYSYMBOL_77_ = 77,                       /* '~'  */
  YYSYMBOL_78_ = 78,                       /* '!'  */
  YYSYMBOL_79_ = 79,                       /* '/'  */
  YYSYMBOL_80_ = 80,                       /* '%'  */
  YYSYMBOL_81_ = 81,                       /* '<'  */
  YYSYMBOL_82_ = 82,                       /* '>'  */
  YYSYMBOL_83_ = 83,                       /* '^'  */
  YYSYMBOL_84_ = 84,                       /* '|'  */
  YYSYMBOL_85_ = 85,                       /* '?'  */
  YYSYMBOL_86_ = 86,                       /* ':'  */
  YYSYMBOL_87_ = 87,                       /* '='  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_primary_expression = 90,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 92,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 93,          /* unary_expression  */
  YYSYMBOL_unary_operator = 94,            /* unary_operator  */
  YYSYMBOL_cast_expression = 95,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 96, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 97,       /* additive_expression  */
  YYSYMBOL_shift_expression = 98,          /* shift_expression  */
  YYSYMBOL_relational_expression = 99,     /* relational_expression  */
  YYSYMBOL_equality_expression = 100,      /* equality_expression  */
  YYSYMBOL_and_expression = 101,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 102,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 103,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 104,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 105,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 106,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 107,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 108,      /* assignment_operator  */
  YYSYMBOL_expression = 109,               /* expression  */
  YYSYMBOL_constant_expression = 110,      /* constant_expression  */
  YYSYMBOL_declaration = 111,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 112,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 113,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 114,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 115,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 116,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 117, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 118,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 119,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 120,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 121, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 122,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 123,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 124,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 125,          /* enumerator_list  */
  YYSYMBOL_enumerator = 126,               /* enumerator  */
  YYSYMBOL_type_qualifier = 127,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 128,       /* function_specifier  */
  YYSYMBOL_declarator = 129,               /* declarator  */
  YYSYMBOL_direct_declarator = 130,        /* direct_declarator  */
  YYSYMBOL_131_1 = 131,                    /* $@1  */
  YYSYMBOL_132_2 = 132,                    /* $@2  */
  YYSYMBOL_133_3 = 133,                    /* $@3  */
  YYSYMBOL_pointer = 134,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 135,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 136,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 137,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 138,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 139,          /* identifier_list  */
  YYSYMBOL_type_name = 140,                /* type_name  */
  YYSYMBOL_abstract_declarator = 141,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 142, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 143,              /* initializer  */
  YYSYMBOL_initializer_list = 144,         /* initializer_list  */
  YYSYMBOL_designation = 145,              /* designation  */
  YYSYMBOL_designator_list = 146,          /* designator_list  */
  YYSYMBOL_designator = 147,               /* designator  */
  YYSYMBOL_statement = 148,                /* statement  */
  YYSYMBOL_149_4 = 149,                    /* $@4  */
  YYSYMBOL_150_5 = 150,                    /* $@5  */
  YYSYMBOL_labeled_statement = 151,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 152,       /* compound_statement  */
  YYSYMBOL_153_6 = 153,                    /* $@6  */
  YYSYMBOL_154_7 = 154,                    /* $@7  */
  YYSYMBOL_block_item_list = 155,          /* block_item_list  */
  YYSYMBOL_block_item = 156,               /* block_item  */
  YYSYMBOL_157_8 = 157,                    /* $@8  */
  YYSYMBOL_expression_statement = 158,     /* expression_statement  */
  YYSYMBOL_selection_statement = 159,      /* selection_statement  */
  YYSYMBOL_160_9 = 160,                    /* $@9  */
  YYSYMBOL_iteration_statement = 161,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 162,           /* jump_statement  */
  YYSYMBOL_163_10 = 163,                   /* $@10  */
  YYSYMBOL_164_11 = 164,                   /* $@11  */
  YYSYMBOL_translation_unit = 165,         /* translation_unit  */
  YYSYMBOL_166_12 = 166,                   /* $@12  */
  YYSYMBOL_external_declaration = 167,     /* external_declaration  */
  YYSYMBOL_function_definition = 168,      /* function_definition  */
  YYSYMBOL_169_13 = 169,                   /* $@13  */
  YYSYMBOL_170_14 = 170,                   /* $@14  */
  YYSYMBOL_171_15 = 171,                   /* $@15  */
  YYSYMBOL_declaration_list = 172          /* declaration_list  */
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
#define YYLAST   1249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      65,    66,    74,    75,    72,    76,    69,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    84,    71,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
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
     180,   181,   182,   183,   184,   188,   189,   193,   197,   198,
     211,   212,   218,   219,   225,   226,   232,   233,   242,   243,
     247,   248,   252,   253,   254,   255,   256,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   277,   283,   286,   294,   295,   299,   301,   311,   321,
     322,   323,   324,   328,   329,   333,   334,   335,   339,   340,
     341,   342,   343,   347,   348,   352,   353,   357,   358,   359,
     364,   368,   369,   374,   375,   376,   383,   387,   394,   401,
     408,   412,   416,   421,   420,   439,   438,   451,   450,   464,
     465,   466,   467,   471,   472,   477,   478,   482,   483,   487,
     491,   492,   496,   497,   501,   502,   506,   507,   508,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     526,   527,   528,   532,   533,   534,   535,   539,   543,   544,
     548,   549,   553,   554,   555,   556,   556,   557,   557,   564,
     568,   569,   570,   574,   574,   578,   578,   588,   589,   593,
     594,   594,   603,   604,   608,   609,   609,   610,   614,   615,
     616,   617,   618,   619,   623,   624,   625,   626,   626,   627,
     627,   631,   631,   632,   636,   637,   641,   648,   641,   659,
     659,   682,   686
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "RESTRICT",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "BOOL", "COMPLEX", "IMAGINARY", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "CONSTANT",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "$@1", "$@2", "$@3", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "$@4", "$@5", "labeled_statement", "compound_statement",
  "$@6", "$@7", "block_item_list", "block_item", "$@8",
  "expression_statement", "selection_statement", "$@9",
  "iteration_statement", "jump_statement", "$@10", "$@11",
  "translation_unit", "$@12", "external_declaration",
  "function_definition", "$@13", "$@14", "$@15", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-250)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -241,   891,  1199,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,    15,  -241,    10,
    1199,  1199,  -241,    43,  -241,  1199,  1199,  -241,  -241,  -241,
     -27,    53,  -241,    13,   114,  -241,   -36,  -241,   -28,   124,
      28,  -241,  -241,    -5,  1005,  -241,  -241,    53,    14,    83,
    -241,     6,  -241,  -241,   114,    13,  -241,   615,  1199,    48,
     963,   436,   124,  1005,  1005,  1111,  -241,    23,  1005,   243,
     749,  -241,    44,  -241,  -241,  -241,  -241,    88,  -241,  -241,
     755,   788,   788,  -241,   412,   539,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,   230,   179,   749,  -241,   153,     7,   307,
       9,   305,    92,   101,   125,   207,    11,  -241,  -241,  -241,
    -241,    10,  1199,   987,  -241,  -241,    12,   163,  -241,   185,
    -241,   187,   137,  -241,   209,   221,   463,  1129,  -241,  -241,
    -241,   749,   -18,  -241,   156,  -241,  -241,    45,  -241,  -241,
    -241,  -241,  -241,   412,  -241,   412,  -241,  -241,  -241,   141,
     147,   227,   749,   293,  -241,   286,   615,   -16,  -241,   295,
    -241,  -241,   594,   749,   303,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,   749,  -241,   749,   749,
     749,   749,   749,   749,   749,   749,   749,   749,   749,   749,
     749,   749,   749,   749,   749,   749,   749,  -241,    48,  -241,
     240,  1032,  -241,   348,   840,   630,  -241,    73,  -241,   143,
    -241,   260,  1174,   351,   297,   588,  -241,  -241,   749,  -241,
     298,   301,  -241,  -241,    23,  -241,   749,  -241,   306,   313,
    -241,   749,   915,   176,  -241,   670,   312,  -241,  -241,   490,
    -241,  -241,  -241,  -241,  -241,   159,  -241,   152,  -241,  -241,
    -241,  -241,  -241,   153,   153,     7,     7,   307,   307,   307,
     307,     9,     9,   305,    92,   101,   125,   207,    78,  -241,
    -241,   314,  -241,   310,   749,   311,   380,   296,   299,   315,
    -241,    -8,  -241,   238,    86,  -241,  -241,  -241,  -241,  -241,
     320,   323,  -241,   330,   331,   143,  1077,   706,  -241,  -241,
    -241,  -241,  -241,   338,   339,  -241,  -241,  -241,  -241,   344,
     344,  -241,   539,  -241,  -241,  -241,  -241,   615,  -241,   749,
    -241,   749,  -241,   348,   341,   348,   340,  -241,  -241,   342,
     749,  -241,   364,   366,  -241,   367,   348,   368,  -241,  -241,
    -241,  -241,  -241,  -241,   369,  -241,   370,   374,  -241,  -241,
     288,  -241,  -241,  -241,  -241,   348,  -241,  -241,  -241,    79,
     749,   749,   749,   377,   300,  -241,  -241,  -241,  -241,   512,
    -241,  -241,   173,   184,   198,   372,   317,   317,  -241,   348,
     348,   348,   749,   712,   734,   408,  -241,  -241,   202,   348,
     203,   348,   210,  -241,   376,  -241,   348,  -241,   348,   348,
    -241,  -241,  -241,  -241
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     241,     0,     0,     1,    92,    93,    94,    95,    96,   140,
     138,    98,    99,   100,   101,   104,   105,   102,   103,   137,
     139,    97,   106,   107,   108,   114,   115,     0,   245,     0,
      80,    82,   109,     0,   110,    84,    86,   243,   244,   242,
     132,     0,   143,     0,   159,    78,     0,    88,   246,   142,
       0,    81,    83,   113,     0,    85,    87,     0,   135,     0,
     133,     0,   163,   161,   160,     0,    79,     0,     0,     0,
     157,     0,   141,     0,   121,     0,   116,     0,   119,     0,
       0,   128,     0,   144,   164,   162,    89,    90,     2,     4,
       0,     0,     0,     3,     0,     0,    24,    25,    26,    27,
      28,    29,     6,    18,    30,     0,    32,    36,    39,    42,
      47,    50,    52,    54,    56,    58,    60,    62,   190,    91,
     251,     0,   247,   220,   250,   172,   171,     0,   153,   165,
     167,   155,     0,   152,    25,     0,     0,     0,   122,   112,
     117,     0,     0,   123,   125,   120,   129,     0,    30,    77,
     136,   130,   134,     0,    22,     0,    19,    20,    75,     0,
     174,     0,     0,     0,   193,     0,     0,     0,   198,     0,
      12,    13,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,   219,
       0,   220,   217,   207,     0,     0,   169,   176,   170,   177,
     158,     0,     0,     0,     0,     0,   151,   147,     0,   146,
      25,     0,   111,   126,     0,   118,     0,   131,     0,     0,
       5,     0,     0,   176,   175,     0,     0,   201,   191,     0,
     194,   197,   199,    11,     8,     0,    16,     0,    10,    63,
      33,    34,    35,    37,    38,    40,    41,    45,    46,    43,
      44,    48,    49,    51,    53,    55,    57,    59,     0,   248,
     214,     0,   218,     2,     0,     0,     0,     0,     0,   239,
     222,     0,   221,     0,     0,   202,   203,   204,   209,   186,
       0,     0,   180,    25,     0,   178,     0,     0,   154,   166,
     168,   173,   156,     0,     0,   150,   145,   124,   127,    23,
       0,    76,     0,    31,   200,   192,   195,     0,     9,     0,
       7,     0,   216,   207,     0,   207,     0,   235,   236,     0,
       0,   223,     0,     0,   206,     0,   207,     0,   208,   187,
     179,   184,   181,   188,     0,   182,    25,     0,   148,   149,
       0,   196,    17,    61,   210,   207,   212,   234,   238,     0,
       0,     0,     0,     0,     0,   189,   185,   183,    14,     0,
     211,   240,     0,     0,     0,     0,     0,     0,    15,   207,
     207,   207,     0,     0,     0,   224,   227,   228,     0,   207,
       0,   207,     0,   225,     0,   232,   207,   230,   207,   207,
     229,   233,   231,   226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  -241,   -68,  -241,   -86,   170,   174,    89,
     171,   271,   272,   270,   276,   277,  -241,   -73,   -67,  -241,
     -92,  -124,   -65,     4,  -241,   410,  -241,   112,  -241,  -241,
     411,   -20,   -45,  -241,   247,  -241,   426,   -52,    98,  -241,
     -15,   -39,  -241,  -241,  -241,   -19,    21,   -62,  -241,   269,
    -241,    99,   -94,  -176,   -66,   177,  -240,  -241,   335,  -118,
    -241,  -241,  -241,   -59,  -241,  -241,  -241,   292,  -241,  -193,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   505,  -241,
    -241,  -241,  -241,  -241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   102,   103,   255,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   158,   186,
     291,   150,    28,   121,    46,    47,    30,    31,    32,    33,
      75,    76,    77,   142,   143,    34,    59,    60,    35,    36,
      61,    49,   221,   224,   127,    50,    64,   300,   129,   130,
     131,   161,   301,   219,   164,   165,   166,   167,   168,   292,
     293,   294,   295,   296,   210,   281,   211,   212,   213,   297,
     344,   409,   348,   298,   339,   340,     1,     2,    37,    38,
      68,   208,    69,   122
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     118,   119,   159,   120,   135,    29,    29,   149,   128,   327,
     124,    72,   148,    42,    48,    42,    42,   233,    40,   187,
     195,   196,   154,   156,   157,    63,    42,   205,   118,   138,
     152,    42,   218,   145,    51,    52,    65,   148,   246,    55,
      56,   305,  -249,    57,   -90,    85,    53,    58,    58,   160,
      87,   162,    66,   163,   234,   140,    58,   207,   209,    67,
     -90,   159,   144,   159,   241,    73,   244,   305,   149,   231,
     235,   251,    83,   148,   126,    43,    42,   214,    43,   215,
     341,   257,   191,   192,    44,    41,    44,    44,    43,   149,
     197,   198,   136,    43,   148,   152,   206,    44,    45,   118,
     250,    80,   260,   261,   262,   256,    87,   217,   160,   141,
     160,   216,   318,    54,   278,   151,   237,   140,   123,   259,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   214,   327,
     215,   243,    62,   345,   346,   347,   209,    10,   304,   279,
     241,   241,    78,   225,    81,    82,    19,    20,   313,   323,
     334,   314,    84,   149,   331,   201,    74,   381,   148,    62,
      10,    78,    78,    78,   321,    67,    78,   148,    72,    19,
      20,   387,   118,   326,   202,    74,    74,    74,    44,    70,
      74,    71,    78,   393,   394,   217,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    74,   240,   306,   203,
     307,   149,   242,   241,   215,   364,   148,   366,   126,   144,
     330,    44,   204,   243,   241,   328,   126,   188,   373,   220,
      62,   329,   189,   190,    84,    78,   169,   170,   171,   389,
     357,   242,   236,   215,   354,   241,   126,   380,   369,    74,
     390,    78,   238,    78,   239,   118,   241,   222,   363,   223,
     118,   361,   362,   148,   391,    74,   185,    74,   404,   406,
     241,   395,   396,   397,   241,   241,   408,   226,   382,   383,
     384,   405,   241,   407,   267,   268,   269,   270,   411,   227,
     412,   413,   342,   245,   343,   172,   247,   173,   253,   174,
     398,   400,   402,    88,    89,    90,   258,    91,    92,   386,
     126,   280,   118,   326,   146,   147,   193,   194,   199,   200,
      88,    89,    90,    84,    91,    92,   308,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   283,    89,    90,   311,    91,    92,   248,   249,   378,
     379,   263,   264,   312,    93,    94,   315,   265,   266,   316,
     271,   272,   319,    96,    97,    98,    99,   100,   101,   320,
     324,    93,    94,   336,   337,   332,   349,   338,   290,   350,
      96,    97,    98,    99,   100,   101,   333,   335,   351,   352,
     284,   285,  -205,  -237,  -205,   290,   358,   359,   286,   287,
     288,   289,    93,    94,   322,    88,    89,    90,   123,    91,
      92,    96,    97,    98,    99,   100,   101,   365,   367,   370,
     368,   371,   372,   374,   385,   375,   290,   392,   376,    88,
      89,    90,   377,    91,    92,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   403,   410,   132,    88,    89,    90,    10,
      91,    92,   273,   275,   274,    86,    93,    94,    19,    20,
     276,   317,   277,    79,   137,    96,    97,    98,    99,   100,
     101,   310,   228,    88,    89,    90,    10,    91,    92,   360,
      93,    94,   252,   282,   133,    19,    20,    39,     0,    96,
     134,    98,    99,   100,   101,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,    93,    94,     0,
       0,   229,     0,     0,     0,     0,    96,   230,    98,    99,
     100,   101,    88,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,    93,    94,     0,   162,     0,   163,
      95,   325,     0,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,    93,    94,     0,   162,
       0,   163,    95,   388,     0,    96,    97,    98,    99,   100,
     101,    88,    89,    90,     0,    91,    92,    88,    89,    90,
       0,    91,    92,    93,    94,     0,   162,     0,   163,    95,
       0,     0,    96,    97,    98,    99,   100,   101,    88,    89,
      90,    10,    91,    92,     0,     0,     0,     0,     0,     0,
      19,    20,     0,    88,    89,    90,     0,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,     0,     0,     0,     0,    93,    94,
     254,    96,    97,    98,    99,   100,   101,    96,    97,    98,
      99,   100,   101,    88,    89,    90,     0,    91,    92,    93,
      94,     0,     0,     0,     0,    95,     0,     0,    96,    97,
      98,    99,   100,   101,    93,    94,     0,     0,   302,     0,
       0,     0,     0,    96,   303,    98,    99,   100,   101,    88,
      89,    90,     0,    91,    92,    88,    89,    90,     0,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,     0,    88,    89,    90,
     322,    91,    92,    96,    97,    98,    99,   100,   101,     0,
       0,     0,    88,    89,    90,     0,    91,    92,    88,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
      93,    94,     0,     0,   355,     0,    93,    94,   399,    96,
     356,    98,    99,   100,   101,    96,    97,    98,    99,   100,
     101,    88,    89,    90,     0,    91,    92,     0,    93,    94,
     401,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,    93,    94,     0,     0,     0,     0,    93,
     153,     0,    96,    97,    98,    99,   100,   101,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    93,   155,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,   299,   215,     0,     0,
       0,     0,     0,     0,    44,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   299,   215,     0,     0,     0,     0,     0,     0,    44,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,  -213,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -215,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   353,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     232,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   309,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27
};

static const yytype_int16 yycheck[] =
{
      67,    67,    94,    68,    71,     1,     2,    80,    70,   249,
      69,    50,    80,     3,    29,     3,     3,   141,     3,   105,
      11,    12,    90,    91,    92,    44,     3,    16,    95,    74,
      82,     3,   126,    78,    30,    31,    72,   105,   162,    35,
      36,   217,    70,    70,    72,    64,     3,     3,     3,    94,
      65,    67,    88,    69,    72,    75,     3,   122,   123,    87,
      88,   153,    77,   155,    72,    70,   160,   243,   141,   136,
      88,    87,    66,   141,    70,    65,     3,    65,    65,    67,
      88,   173,    75,    76,    74,    70,    74,    74,    65,   162,
      81,    82,    71,    65,   162,   147,    85,    74,    88,   166,
     166,    87,   188,   189,   190,   172,   121,   126,   153,    86,
     155,   126,   236,    70,   206,    71,    71,   137,    70,   186,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,    65,   379,
      67,   160,    44,    57,    58,    59,   211,    33,   215,   208,
      72,    72,    54,   132,    71,    72,    42,    43,   225,   245,
     284,   228,    64,   236,    86,    73,    54,    88,   236,    71,
      33,    73,    74,    75,   241,    87,    78,   245,   217,    42,
      43,   374,   249,   249,    83,    73,    74,    75,    74,    65,
      78,    67,    94,   386,   387,   214,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    94,    66,    65,    84,
      67,   284,    65,    72,    67,   333,   284,   335,   214,   234,
      68,    74,    15,   242,    72,    66,   222,    74,   346,    66,
     132,    72,    79,    80,   136,   137,     6,     7,     8,    66,
     307,    65,    86,    67,   306,    72,   242,   365,   340,   137,
      66,   153,   153,   155,   155,   322,    72,    72,   331,    72,
     327,   327,   329,   331,    66,   153,    87,   155,    66,    66,
      72,   389,   390,   391,    72,    72,    66,    68,   370,   371,
     372,   399,    72,   401,   195,   196,   197,   198,   406,    68,
     408,   409,    54,    66,    56,    65,     3,    67,     3,    69,
     392,   393,   394,     3,     4,     5,     3,     7,     8,   374,
     306,    71,   379,   379,    71,    72,     9,    10,    13,    14,
       3,     4,     5,   225,     7,     8,    66,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     3,     4,     5,     3,     7,     8,    71,    72,    71,
      72,   191,   192,    66,    64,    65,    68,   193,   194,    68,
     199,   200,    66,    73,    74,    75,    76,    77,    78,    66,
      68,    64,    65,     3,    88,    71,    66,    88,    88,    66,
      73,    74,    75,    76,    77,    78,    86,    86,    68,    68,
      52,    53,    54,    88,    56,    88,    68,    68,    60,    61,
      62,    63,    64,    65,    70,     3,     4,     5,    70,     7,
       8,    73,    74,    75,    76,    77,    78,    86,    88,    65,
      88,    65,    65,    65,    57,    66,    88,    65,    68,     3,
       4,     5,    68,     7,     8,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    55,    88,    29,     3,     4,     5,    33,
       7,     8,   201,   203,   202,    65,    64,    65,    42,    43,
     204,   234,   205,    57,    73,    73,    74,    75,    76,    77,
      78,   222,    29,     3,     4,     5,    33,     7,     8,   322,
      64,    65,   167,   211,    68,    42,    43,     2,    -1,    73,
      74,    75,    76,    77,    78,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    -1,    69,
      70,    71,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      -1,    69,    70,    71,    -1,    73,    74,    75,    76,    77,
      78,     3,     4,     5,    -1,     7,     8,     3,     4,     5,
      -1,     7,     8,    64,    65,    -1,    67,    -1,    69,    70,
      -1,    -1,    73,    74,    75,    76,    77,    78,     3,     4,
       5,    33,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    64,    65,
      66,    73,    74,    75,    76,    77,    78,    73,    74,    75,
      76,    77,    78,     3,     4,     5,    -1,     7,     8,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    64,    65,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,     3,
       4,     5,    -1,     7,     8,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,     3,     4,     5,
      70,     7,     8,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    68,    -1,    64,    65,    66,    73,
      74,    75,    76,    77,    78,    73,    74,    75,    76,    77,
      78,     3,     4,     5,    -1,     7,     8,    -1,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    64,    65,    -1,    -1,    -1,    -1,    64,
      65,    -1,    73,    74,    75,    76,    77,    78,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    71,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   165,   166,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   111,   112,
     115,   116,   117,   118,   124,   127,   128,   167,   168,   167,
       3,    70,     3,    65,    74,    88,   113,   114,   129,   130,
     134,   112,   112,     3,    70,   112,   112,    70,     3,   125,
     126,   129,   127,   134,   135,    72,    88,    87,   169,   171,
      65,    67,   130,    70,   116,   119,   120,   121,   127,   125,
      87,    71,    72,    66,   127,   134,   114,   129,     3,     4,
       5,     7,     8,    64,    65,    70,    73,    74,    75,    76,
      77,    78,    90,    91,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   143,
     111,   112,   172,    70,   152,     3,   112,   133,   136,   137,
     138,   139,    29,    68,    74,   107,   135,   119,   121,    71,
     120,    86,   122,   123,   129,   121,    71,    72,    93,   106,
     110,    71,   126,    65,    93,    65,    93,    93,   107,   109,
     121,   140,    67,    69,   143,   144,   145,   146,   147,     6,
       7,     8,    65,    67,    69,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    87,   108,    95,    74,    79,
      80,    75,    76,     9,    10,    11,    12,    81,    82,    13,
      14,    73,    83,    84,    15,    16,    85,   111,   170,   111,
     153,   155,   156,   157,    65,    67,   129,   134,   141,   142,
      66,   131,    72,    72,   132,   135,    68,    68,    29,    68,
      74,   107,    71,   110,    72,    88,    86,    71,   140,   140,
      66,    72,    65,   134,   141,    66,   110,     3,    71,    72,
     143,    87,   147,     3,    66,    92,   107,   109,     3,   107,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      98,    99,    99,   100,   101,   102,   103,   104,   109,   152,
      71,   154,   156,     3,    52,    53,    60,    61,    62,    63,
      88,   109,   148,   149,   150,   151,   152,   158,   162,    66,
     136,   141,    68,    74,   107,   142,    65,    67,    66,    51,
     138,     3,    66,   107,   107,    68,    68,   123,   110,    66,
      66,   107,    70,    95,    68,    71,   143,   145,    66,    72,
      68,    86,    71,    86,   110,    86,     3,    88,    88,   163,
     164,    88,    54,    56,   159,    57,    58,    59,   161,    66,
      66,    68,    68,    66,   136,    68,    74,   107,    68,    68,
     144,   143,   107,   106,   148,    86,   148,    88,    88,   109,
      65,    65,    65,   148,    65,    66,    68,    68,    71,    72,
     148,    88,   109,   109,   109,    57,   111,   158,    71,    66,
      66,    66,    65,   158,   158,   148,   148,   148,   109,    66,
     109,    66,   109,    55,    66,   148,    66,   148,    66,   160,
      88,   148,   148,   148
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   130,   132,   130,   133,   130,   134,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   144,   144,   144,   144,   145,   146,   146,
     147,   147,   148,   148,   148,   149,   148,   150,   148,   148,
     151,   151,   151,   153,   152,   154,   152,   155,   155,   156,
     157,   156,   158,   158,   159,   160,   159,   159,   161,   161,
     161,   161,   161,   161,   162,   162,   162,   163,   162,   164,
     162,   166,   165,   165,   167,   167,   169,   170,   168,   171,
     168,   172,   172
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
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     1,
       2,     1,     2,     1,     3,     1,     2,     3,     4,     5,
       5,     6,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     6,     6,
       5,     4,     3,     0,     5,     0,     5,     0,     4,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     2,     3,     4,     2,     1,     2,
       3,     2,     1,     1,     1,     0,     2,     0,     2,     1,
       3,     4,     3,     0,     3,     0,     4,     1,     2,     1,
       0,     2,     1,     2,     5,     0,     8,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     0,     3,     0,
       4,     0,     2,     2,     1,     1,     0,     0,     6,     0,
       4,     1,     2
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
#line 1741 "y.tab.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 65 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1747 "y.tab.cc"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 83 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1753 "y.tab.cc"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 101 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1759 "y.tab.cc"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 106 "C99-parser.yacc"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1765 "y.tab.cc"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 113 "C99-parser.yacc"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1771 "y.tab.cc"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 119 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1777 "y.tab.cc"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 125 "C99-parser.yacc"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1783 "y.tab.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 133 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1789 "y.tab.cc"
    break;

  case 50: /* and_expression: equality_expression  */
#line 139 "C99-parser.yacc"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1795 "y.tab.cc"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 144 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1801 "y.tab.cc"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 149 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1807 "y.tab.cc"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 154 "C99-parser.yacc"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1813 "y.tab.cc"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 159 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1819 "y.tab.cc"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 164 "C99-parser.yacc"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1825 "y.tab.cc"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 169 "C99-parser.yacc"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1831 "y.tab.cc"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 198 "C99-parser.yacc"
                                                          {
		(yyval.symList) = new vector<SymbolInfo*>();
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
			SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].symList)->at(i));
			(yyval.symList)->push_back(symbol);
			table.insert((yyvsp[-1].symList)->at(i));
			
		}
	}
#line 1846 "y.tab.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 212 "C99-parser.yacc"
                                                         {
		std::ostringstream oss;
		oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
		(yyvsp[0].sym)->setSymbolType(oss.str());
		(yyval.sym) = (yyvsp[0].sym); 
	}
#line 1857 "y.tab.cc"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 218 "C99-parser.yacc"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 1863 "y.tab.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 219 "C99-parser.yacc"
                                                { 
		std::ostringstream oss;
		oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
		(yyvsp[0].sym)->setSymbolType(oss.str());
		(yyval.sym) = (yyvsp[0].sym); 
	}
#line 1874 "y.tab.cc"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 225 "C99-parser.yacc"
                         {(yyval.sym) = (yyvsp[0].sym); }
#line 1880 "y.tab.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 226 "C99-parser.yacc"
                                                {
		std::ostringstream oss;
		oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
		(yyvsp[0].sym)->setSymbolType(oss.str());
		(yyval.sym) = (yyvsp[0].sym); 
	}
#line 1891 "y.tab.cc"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 232 "C99-parser.yacc"
                             {(yyval.sym) = (yyvsp[0].sym); }
#line 1897 "y.tab.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 233 "C99-parser.yacc"
                                                    { 
		std::ostringstream oss;
		oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
		(yyvsp[0].sym)->setSymbolType(oss.str());
		(yyval.sym) = (yyvsp[0].sym); 
	}
#line 1908 "y.tab.cc"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 242 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 1914 "y.tab.cc"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 243 "C99-parser.yacc"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 1920 "y.tab.cc"
    break;

  case 90: /* init_declarator: declarator  */
#line 247 "C99-parser.yacc"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 1926 "y.tab.cc"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 248 "C99-parser.yacc"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 1932 "y.tab.cc"
    break;

  case 92: /* storage_class_specifier: TYPEDEF  */
#line 252 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 1938 "y.tab.cc"
    break;

  case 93: /* storage_class_specifier: EXTERN  */
#line 253 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 1944 "y.tab.cc"
    break;

  case 94: /* storage_class_specifier: STATIC  */
#line 254 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 1950 "y.tab.cc"
    break;

  case 95: /* storage_class_specifier: AUTO  */
#line 255 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 1956 "y.tab.cc"
    break;

  case 96: /* storage_class_specifier: REGISTER  */
#line 256 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 1962 "y.tab.cc"
    break;

  case 97: /* type_specifier: VOID  */
#line 260 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 1968 "y.tab.cc"
    break;

  case 98: /* type_specifier: CHAR  */
#line 261 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 1974 "y.tab.cc"
    break;

  case 99: /* type_specifier: SHORT  */
#line 262 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 1980 "y.tab.cc"
    break;

  case 100: /* type_specifier: INT  */
#line 263 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 1986 "y.tab.cc"
    break;

  case 101: /* type_specifier: LONG  */
#line 264 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 1992 "y.tab.cc"
    break;

  case 102: /* type_specifier: FLOAT  */
#line 265 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 1998 "y.tab.cc"
    break;

  case 103: /* type_specifier: DOUBLE  */
#line 266 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2004 "y.tab.cc"
    break;

  case 104: /* type_specifier: SIGNED  */
#line 267 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2010 "y.tab.cc"
    break;

  case 105: /* type_specifier: UNSIGNED  */
#line 268 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2016 "y.tab.cc"
    break;

  case 106: /* type_specifier: BOOL  */
#line 269 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2022 "y.tab.cc"
    break;

  case 107: /* type_specifier: COMPLEX  */
#line 270 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2028 "y.tab.cc"
    break;

  case 108: /* type_specifier: IMAGINARY  */
#line 271 "C99-parser.yacc"
                    { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2034 "y.tab.cc"
    break;

  case 109: /* type_specifier: struct_or_union_specifier  */
#line 272 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2040 "y.tab.cc"
    break;

  case 110: /* type_specifier: enum_specifier  */
#line 273 "C99-parser.yacc"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 2046 "y.tab.cc"
    break;

  case 111: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 278 "C99-parser.yacc"
        { 
		(yyvsp[-3].sym)->setIsStruct(true);
		(yyvsp[-3].sym)->setVariableType((yyvsp[-4].sym)->getSymbolType());
		table.insert((yyvsp[-3].sym));
	}
#line 2056 "y.tab.cc"
    break;

  case 112: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 283 "C99-parser.yacc"
                                                          {

	}
#line 2064 "y.tab.cc"
    break;

  case 113: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 287 "C99-parser.yacc"
        { 
		(yyvsp[0].sym)->setIsStruct(true);
		table.insert((yyvsp[0].sym));
	}
#line 2073 "y.tab.cc"
    break;

  case 114: /* struct_or_union: STRUCT  */
#line 294 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2079 "y.tab.cc"
    break;

  case 115: /* struct_or_union: UNION  */
#line 295 "C99-parser.yacc"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2085 "y.tab.cc"
    break;

  case 116: /* struct_declaration_list: struct_declaration  */
#line 299 "C99-parser.yacc"
                             { 	(yyval.symList) = (yyvsp[0].symList); }
#line 2091 "y.tab.cc"
    break;

  case 117: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 302 "C99-parser.yacc"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2102 "y.tab.cc"
    break;

  case 118: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 312 "C99-parser.yacc"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2113 "y.tab.cc"
    break;

  case 123: /* struct_declarator_list: struct_declarator  */
#line 328 "C99-parser.yacc"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2119 "y.tab.cc"
    break;

  case 124: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 329 "C99-parser.yacc"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2125 "y.tab.cc"
    break;

  case 125: /* struct_declarator: declarator  */
#line 333 "C99-parser.yacc"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2131 "y.tab.cc"
    break;

  case 137: /* type_qualifier: CONST  */
#line 357 "C99-parser.yacc"
                { (yyval.sym) = new SymbolInfo("const", "CONST"); }
#line 2137 "y.tab.cc"
    break;

  case 138: /* type_qualifier: RESTRICT  */
#line 358 "C99-parser.yacc"
                   { (yyval.sym) = new SymbolInfo("restrict", "RESTRICT"); }
#line 2143 "y.tab.cc"
    break;

  case 139: /* type_qualifier: VOLATILE  */
#line 359 "C99-parser.yacc"
                   { (yyval.sym) = new SymbolInfo("volatile", "VOLATILE"); }
#line 2149 "y.tab.cc"
    break;

  case 140: /* function_specifier: INLINE  */
#line 364 "C99-parser.yacc"
                  { (yyval.sym) = new SymbolInfo("inline", "INLINE"); }
#line 2155 "y.tab.cc"
    break;

  case 141: /* declarator: pointer direct_declarator  */
#line 368 "C99-parser.yacc"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2161 "y.tab.cc"
    break;

  case 142: /* declarator: direct_declarator  */
#line 369 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2167 "y.tab.cc"
    break;

  case 143: /* direct_declarator: IDENTIFIER  */
#line 374 "C99-parser.yacc"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2173 "y.tab.cc"
    break;

  case 144: /* direct_declarator: '(' declarator ')'  */
#line 375 "C99-parser.yacc"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2179 "y.tab.cc"
    break;

  case 145: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 376 "C99-parser.yacc"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2191 "y.tab.cc"
    break;

  case 146: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 383 "C99-parser.yacc"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2200 "y.tab.cc"
    break;

  case 147: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 387 "C99-parser.yacc"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2212 "y.tab.cc"
    break;

  case 148: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 394 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2224 "y.tab.cc"
    break;

  case 149: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 401 "C99-parser.yacc"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2236 "y.tab.cc"
    break;

  case 150: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 408 "C99-parser.yacc"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2245 "y.tab.cc"
    break;

  case 151: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 412 "C99-parser.yacc"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2254 "y.tab.cc"
    break;

  case 152: /* direct_declarator: direct_declarator '[' ']'  */
#line 416 "C99-parser.yacc"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2263 "y.tab.cc"
    break;

  case 153: /* $@1: %empty  */
#line 421 "C99-parser.yacc"
        {
		/*comprobar si es main o una funcion normal */
		stateFuncion = 0;
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}

	}
#line 2280 "y.tab.cc"
    break;

  case 154: /* direct_declarator: direct_declarator '(' parameter_type_list $@1 ')'  */
#line 432 "C99-parser.yacc"
              {
		
		(yyvsp[-4].sym)->setParamList((yyvsp[-2].symList));
		(yyvsp[-4].sym)->setIsFunction(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2291 "y.tab.cc"
    break;

  case 155: /* $@2: %empty  */
#line 439 "C99-parser.yacc"
        {
		/*comprobar si es main o una funcion normal */
		stateFuncion = 0;
		if((yyvsp[-2].sym)->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}
	}
#line 2307 "y.tab.cc"
    break;

  case 156: /* direct_declarator: direct_declarator '(' identifier_list $@2 ')'  */
#line 449 "C99-parser.yacc"
              { (yyval.sym) = (yyvsp[-4].sym); }
#line 2313 "y.tab.cc"
    break;

  case 157: /* $@3: %empty  */
#line 451 "C99-parser.yacc"
        {
		stateFuncion = 0;
		if((yyvsp[-1].sym)->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}
	}
#line 2328 "y.tab.cc"
    break;

  case 158: /* direct_declarator: direct_declarator '(' $@3 ')'  */
#line 460 "C99-parser.yacc"
             { (yyval.sym) = (yyvsp[-3].sym); }
#line 2334 "y.tab.cc"
    break;

  case 165: /* parameter_type_list: parameter_list  */
#line 477 "C99-parser.yacc"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2340 "y.tab.cc"
    break;

  case 167: /* parameter_list: parameter_declaration  */
#line 482 "C99-parser.yacc"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2346 "y.tab.cc"
    break;

  case 168: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 483 "C99-parser.yacc"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2352 "y.tab.cc"
    break;

  case 169: /* parameter_declaration: declaration_specifiers declarator  */
#line 487 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2361 "y.tab.cc"
    break;

  case 172: /* identifier_list: IDENTIFIER  */
#line 496 "C99-parser.yacc"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2367 "y.tab.cc"
    break;

  case 173: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 497 "C99-parser.yacc"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2373 "y.tab.cc"
    break;

  case 205: /* $@4: %empty  */
#line 556 "C99-parser.yacc"
          { table.enterScope(); }
#line 2379 "y.tab.cc"
    break;

  case 206: /* statement: $@4 selection_statement  */
#line 556 "C99-parser.yacc"
                                                      { table.exitScope(); }
#line 2385 "y.tab.cc"
    break;

  case 207: /* $@5: %empty  */
#line 557 "C99-parser.yacc"
          { table.enterScope(); }
#line 2391 "y.tab.cc"
    break;

  case 208: /* statement: $@5 iteration_statement  */
#line 558 "C99-parser.yacc"
        {
		if(table.getTableSchedule() == true){
			statePragma = 6; 
		}
		table.exitScope(); 
	}
#line 2402 "y.tab.cc"
    break;

  case 213: /* $@6: %empty  */
#line 574 "C99-parser.yacc"
              { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }
#line 2408 "y.tab.cc"
    break;

  case 214: /* compound_statement: '{' $@6 '}'  */
#line 575 "C99-parser.yacc"
        { 
		
	}
#line 2416 "y.tab.cc"
    break;

  case 215: /* $@7: %empty  */
#line 578 "C99-parser.yacc"
                              { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }
#line 2422 "y.tab.cc"
    break;

  case 216: /* compound_statement: '{' block_item_list $@7 '}'  */
#line 579 "C99-parser.yacc"
        { 
		 if (stateFuncion == 2 && saltaFor == false){
		 	logFile << "avanzo la maquina de estados de pragma de " << statePragma << " a 5 " << endl;
		 	statePragma = 5;
		 }
	}
#line 2433 "y.tab.cc"
    break;

  case 220: /* $@8: %empty  */
#line 594 "C99-parser.yacc"
          {  //AVANZAMOS LA MAQUINA DE ESTADOS 
		if(stateFuncion == 0 ){
			logFile << "avanzo la maquina de estados de " << stateFuncion << " a " << stateFuncion+1 << endl;
			stateFuncion++;
		}
	  }
#line 2444 "y.tab.cc"
    break;

  case 225: /* $@9: %empty  */
#line 609 "C99-parser.yacc"
                                               { table.exitScope(); table.enterScope(); }
#line 2450 "y.tab.cc"
    break;

  case 237: /* $@10: %empty  */
#line 626 "C99-parser.yacc"
                 { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }
#line 2456 "y.tab.cc"
    break;

  case 239: /* $@11: %empty  */
#line 627 "C99-parser.yacc"
                 { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }
#line 2462 "y.tab.cc"
    break;

  case 241: /* $@12: %empty  */
#line 631 "C99-parser.yacc"
          { mpi_writer.write_MPI_Includes(); stateFuncion = 0; }
#line 2468 "y.tab.cc"
    break;

  case 246: /* $@13: %empty  */
#line 641 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		table.insert((yyvsp[0].sym));
		table.enterScope();
		table.setIsScopeReturn(true);

	}
#line 2481 "y.tab.cc"
    break;

  case 247: /* $@14: %empty  */
#line 648 "C99-parser.yacc"
                           {
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));

	}
#line 2490 "y.tab.cc"
    break;

  case 248: /* function_definition: declaration_specifiers declarator $@13 declaration_list $@14 compound_statement  */
#line 651 "C99-parser.yacc"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope();
		mpi_writer.mpi_write_caracter("\n",stateGlobal,stateFuncion);
		stateGlobal = 1; 
		stateFuncion =  0;
			
	}
#line 2503 "y.tab.cc"
    break;

  case 249: /* $@15: %empty  */
#line 659 "C99-parser.yacc"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		table.insert((yyvsp[0].sym));
		table.enterScope();
		table.setIsScopeReturn(true);
		if ((yyvsp[0].sym)->getParamList() != nullptr) {
			for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].sym)->getParamList()->size(); i++){
				SymbolInfo* symbol = new SymbolInfo(*(yyvsp[0].sym)->getParamList()->at(i));
				table.insert(symbol);
			}
		}
	}
#line 2521 "y.tab.cc"
    break;

  case 250: /* function_definition: declaration_specifiers declarator $@15 compound_statement  */
#line 671 "C99-parser.yacc"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
		mpi_writer.mpi_write_caracter("\n",stateGlobal,stateFuncion);
		stateGlobal = 1; 
		stateFuncion = 0; 
			
	}
#line 2534 "y.tab.cc"
    break;

  case 251: /* declaration_list: declaration  */
#line 682 "C99-parser.yacc"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2543 "y.tab.cc"
    break;

  case 252: /* declaration_list: declaration_list declaration  */
#line 686 "C99-parser.yacc"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2552 "y.tab.cc"
    break;


#line 2556 "y.tab.cc"

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

#line 693 "C99-parser.yacc"

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
