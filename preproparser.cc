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

/* Substitute the type names.  */
#define YYSTYPE         PREPRO_STYPE
/* Substitute the variable and function names.  */
#define yyparse         prepro_parse
#define yylex           prepro_lex
#define yyerror         prepro_error
#define yydebug         prepro_debug
#define yynerrs         prepro_nerrs
#define yylval          prepro_lval
#define yychar          prepro_char

/* First part of user prologue.  */
#line 1 "preproparser.yy"

#include<bits/stdc++.h>
#include "SymbolTable.h"
void yyerror(char const *s);
extern int yylex (void);
extern void start_lexer_prepro(FILE *input_file);

extern ofstream logFile;
extern ofstream errFile;

extern SymbolTable table;
extern int elcuentadordelineas;

#line 93 "preproparser.cc"

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

#include "preproparser.hh"
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
  YYSYMBOL_type_specifier = 117,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 118, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 119,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 120,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 121,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 123,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 124,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 125,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 126,          /* enumerator_list  */
  YYSYMBOL_enumerator = 127,               /* enumerator  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 129,       /* function_specifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_direct_declarator = 131,        /* direct_declarator  */
  YYSYMBOL_pointer = 132,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 133,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 134,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 135,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 136,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 137,          /* identifier_list  */
  YYSYMBOL_type_name = 138,                /* type_name  */
  YYSYMBOL_abstract_declarator = 139,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 140, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 141,              /* initializer  */
  YYSYMBOL_initializer_list = 142,         /* initializer_list  */
  YYSYMBOL_designation = 143,              /* designation  */
  YYSYMBOL_designator_list = 144,          /* designator_list  */
  YYSYMBOL_designator = 145,               /* designator  */
  YYSYMBOL_statement = 146,                /* statement  */
  YYSYMBOL_147_1 = 147,                    /* $@1  */
  YYSYMBOL_148_2 = 148,                    /* $@2  */
  YYSYMBOL_labeled_statement = 149,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 150,       /* compound_statement  */
  YYSYMBOL_block_item_list = 151,          /* block_item_list  */
  YYSYMBOL_block_item = 152,               /* block_item  */
  YYSYMBOL_expression_statement = 153,     /* expression_statement  */
  YYSYMBOL_selection_statement = 154,      /* selection_statement  */
  YYSYMBOL_155_3 = 155,                    /* $@3  */
  YYSYMBOL_iteration_statement = 156,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 157,           /* jump_statement  */
  YYSYMBOL_translation_unit = 158,         /* translation_unit  */
  YYSYMBOL_external_declaration = 159,     /* external_declaration  */
  YYSYMBOL_function_definition = 160,      /* function_definition  */
  YYSYMBOL_161_4 = 161,                    /* $@4  */
  YYSYMBOL_162_5 = 162,                    /* $@5  */
  YYSYMBOL_163_6 = 163,                    /* $@6  */
  YYSYMBOL_declaration_list = 164          /* declaration_list  */
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
         || (defined PREPRO_STYPE_IS_TRIVIAL && PREPRO_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  406

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

#if PREPRO_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    54,    55,    56,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    73,    74,    78,    79,
      80,    81,    82,    83,    87,    88,    89,    90,    91,    92,
      96,    97,   101,   102,   103,   104,   108,   109,   110,   114,
     115,   116,   120,   121,   122,   123,   124,   128,   129,   130,
     134,   135,   139,   140,   144,   145,   149,   150,   154,   155,
     159,   160,   164,   165,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   183,   184,   188,   192,   202,
     241,   242,   249,   250,   257,   258,   265,   266,   276,   277,
     281,   282,   286,   287,   288,   289,   290,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   312,   319,   320,   332,   333,   337,   338,   348,
     358,   359,   360,   361,   365,   366,   370,   371,   372,   376,
     377,   378,   379,   380,   384,   385,   389,   390,   394,   395,
     396,   400,   404,   405,   410,   411,   412,   419,   423,   430,
     437,   444,   448,   452,   456,   460,   461,   465,   466,   467,
     468,   472,   473,   478,   479,   483,   484,   488,   492,   493,
     497,   498,   502,   503,   507,   508,   509,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   527,   528,
     529,   533,   534,   535,   536,   540,   544,   545,   549,   550,
     554,   555,   556,   557,   557,   558,   558,   559,   563,   564,
     565,   569,   570,   576,   577,   581,   583,   587,   588,   592,
     593,   593,   594,   598,   599,   600,   601,   602,   603,   607,
     608,   609,   611,   614,   619,   620,   624,   625,   629,   634,
     629,   640,   640,   652,   656
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if PREPRO_DEBUG || 1
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
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement", "$@1",
  "$@2", "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement", "$@3",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@4", "$@5", "$@6",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-302)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-242)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1338,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,    31,  -302,    -1,  1338,  1338,
    -302,    85,  -302,  1338,  1338,  1140,  -302,  -302,   -51,    58,
    -302,    42,     9,  -302,   -36,  -302,    96,   112,    -9,  -302,
    -302,    97,  1357,  -302,  -302,  -302,  -302,    58,    70,    17,
    -302,   104,  -302,  -302,     9,    42,  -302,   495,  1338,   120,
    1165,   676,   112,  1357,  1357,  1245,  -302,   -19,  1357,   162,
     949,  -302,     5,  -302,  -302,  -302,  -302,   132,   966,   983,
     983,  -302,  -302,  -302,   623,   768,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,   148,   188,   949,  -302,    95,   194,   234,
       3,   270,   177,   116,   189,   249,    -7,  -302,  -302,  -302,
    -302,    -1,  1338,   324,  -302,  -302,  -302,    30,   210,   218,
    -302,   121,    78,  -302,   230,   240,   703,  1264,  -302,  -302,
    -302,   949,   -29,  -302,   196,  -302,  -302,    48,  -302,  -302,
    -302,  -302,  -302,   623,  -302,   623,  -302,  -302,  -302,   126,
      98,   243,   949,   247,  -302,   214,   495,   -47,  -302,   248,
    -302,  -302,   799,   949,   252,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,   949,  -302,   949,   949,
     949,   949,   949,   949,   949,   949,   949,   949,   949,   949,
     949,   949,   949,   949,   949,   949,   949,  -302,   120,   949,
     231,   256,   232,   237,   542,   236,  -302,  -302,     8,  -302,
    -302,   160,    87,  -302,  -302,   401,  -302,  -302,  -302,  1038,
     847,  -302,   182,  -302,   181,  -302,  1312,  -302,   267,   820,
    -302,  -302,   949,  -302,   263,   264,  -302,  -302,   -19,  -302,
     949,  -302,   268,   269,  -302,   949,  1089,   186,  -302,   864,
     265,  -302,  -302,   720,  -302,  -302,  -302,  -302,  -302,   128,
    -302,    90,  -302,  -302,  -302,  -302,  -302,    95,    95,   194,
     194,   234,   234,   234,   234,     3,     3,   270,   177,   116,
     189,   249,   -49,  -302,   250,   525,   251,  -302,  -302,  -302,
      14,   525,  -302,   272,   273,  -302,   275,   525,   276,  -302,
    -302,  -302,  -302,   278,   281,  -302,   274,   305,   181,  1208,
     884,  -302,  -302,  -302,   309,   311,  -302,  -302,  -302,  -302,
     310,   310,  -302,   768,  -302,  -302,  -302,  -302,   495,  -302,
     949,  -302,   949,   525,  -302,  -302,  -302,  -302,   949,   949,
     949,   326,   478,  -302,  -302,  -302,  -302,  -302,   325,  -302,
     322,   328,  -302,  -302,   217,  -302,  -302,  -302,  -302,   150,
     154,   155,   327,   559,   559,  -302,  -302,  -302,  -302,   743,
     525,   525,   525,   949,   901,   928,  -302,   340,  -302,  -302,
     157,   525,   165,   525,   166,  -302,   316,  -302,   525,  -302,
     525,   525,  -302,  -302,  -302,  -302
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    93,    94,    95,    96,   141,   139,    98,    99,
     100,   101,   104,   105,   102,   103,   138,   140,    97,   106,
     107,   108,   109,   115,   116,     0,   237,     0,    80,    82,
     110,     0,   111,    84,    86,     0,   234,   236,   133,     0,
     144,     0,   157,    78,     0,    88,   238,   143,     0,    81,
      83,   114,     0,    85,    87,     1,   235,     0,   136,     0,
     134,     0,   161,   159,   158,     0,    79,     0,     0,     0,
       0,     0,   142,     0,   122,     0,   117,     0,   120,     0,
       0,   129,     0,   145,   162,   160,    89,    90,     0,     0,
       0,     3,     2,     4,     0,     0,    24,    25,    26,    27,
      28,    29,     6,    18,    30,     0,    32,    36,    39,    42,
      47,    50,    52,    54,    56,    58,    60,    62,   188,    91,
     243,     0,   239,   205,   242,   170,   156,   169,     0,   163,
     165,     0,     0,   153,    25,     0,     0,     0,   123,   113,
     118,     0,     0,   124,   126,   121,   130,     0,    30,    77,
     137,   131,   135,     0,    22,     0,    19,    20,    75,     0,
     172,     0,     0,     0,   191,     0,     0,     0,   196,     0,
      12,    13,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,     0,     0,
       0,     0,     0,     0,     0,     2,   211,   217,     0,   215,
     216,     0,     0,   200,   201,   205,   213,   202,   207,     0,
       0,   167,   174,   168,   175,   154,     0,   155,     0,     0,
     152,   148,     0,   147,    25,     0,   112,   127,     0,   119,
       0,   132,     0,     0,     5,     0,     0,   174,   173,     0,
       0,   199,   189,     0,   192,   195,   197,    11,     8,     0,
      16,     0,    10,    63,    33,    34,    35,    37,    38,    40,
      41,    45,    46,    43,    44,    48,    49,    51,    53,    55,
      57,    59,     0,   240,     0,   205,     0,   230,   231,   232,
       0,   205,   218,     0,     0,   204,     0,   205,     0,   206,
     212,   214,   184,     0,     0,   178,    25,     0,   176,     0,
       0,   164,   166,   171,     0,     0,   151,   146,   125,   128,
      23,     0,    76,     0,    31,   198,   190,   193,     0,     9,
       0,     7,     0,   205,   210,   229,   233,   208,     0,     0,
       0,     0,     0,   185,   177,   182,   179,   186,     0,   180,
      25,     0,   149,   150,     0,   194,    17,    61,   209,     0,
       0,     0,     0,     0,     0,   187,   183,   181,    14,     0,
     205,   205,   205,     0,     0,     0,    15,   219,   222,   223,
       0,   205,     0,   205,     0,   220,     0,   227,   205,   225,
     205,   205,   224,   228,   226,   221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,  -302,  -302,   -63,  -302,   -97,   109,   114,   100,
     103,   207,   208,   206,   211,   209,  -302,   -58,   -65,  -302,
     -91,   -95,   -64,     0,  -302,   346,  -302,   191,  -302,  -302,
     339,   -61,   -42,  -302,   168,  -302,   360,   -72,   108,  -302,
     -11,   -43,    -3,   -52,   -59,  -302,   183,  -302,   125,  -112,
    -214,   -66,    88,  -232,  -302,   253,   -76,  -302,  -302,  -302,
     -60,  -302,   193,  -301,  -302,  -302,  -302,  -302,  -302,   387,
    -302,  -302,  -302,  -302,  -302
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   102,   103,   269,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   158,   186,
     218,   150,    26,   121,    44,    45,    28,    29,    30,    31,
      75,    76,    77,   142,   143,    32,    59,    60,    33,    34,
      61,    47,    48,    64,   313,   129,   130,   131,   161,   314,
     234,   164,   165,   166,   167,   168,   220,   221,   222,   223,
     224,   225,   226,   227,   305,   401,   309,   228,    35,    36,
      37,    68,   208,    69,   122
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   119,   118,   159,   120,    72,   135,   205,   187,   124,
     152,   128,   195,   196,   140,   233,    46,   148,   318,   136,
      57,   162,   149,   163,   255,   154,   156,   157,    49,    50,
     118,   338,   138,    53,    54,    27,   145,    65,   342,    63,
       7,   265,   148,   318,   248,    40,   247,    41,   258,    16,
      17,   374,   160,    66,    87,    40,    42,    41,   207,   219,
     249,    85,   159,    40,   159,    41,   144,   260,   141,    58,
     127,   245,   384,   385,    42,   152,   140,   151,   148,   206,
     239,   255,   271,   149,    42,   197,   198,   255,    43,    81,
      82,   274,   275,   276,    40,    38,   229,   302,   230,   148,
     264,   118,    39,   346,   149,    42,    40,   270,    41,     7,
      87,   160,    58,   160,   294,   292,   231,    42,    16,    17,
     251,   273,    58,   300,   232,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   306,   307,   308,   148,   338,   293,    51,
      62,   149,   169,   170,   171,   329,    52,   257,    80,   341,
      78,   219,   334,   255,   256,   317,   230,  -241,    73,   -90,
     188,    83,    84,    42,   324,   189,   190,   325,    70,    62,
      71,    78,    78,    78,    67,   -90,    78,   148,   237,    72,
     332,   123,   149,   254,   238,   339,   148,   337,   118,   255,
     202,   340,    78,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   303,   172,   304,   173,   380,   174,   344,
      67,   381,   382,   255,   396,   347,   232,   255,   255,   127,
     255,   351,   398,   400,   146,   147,   127,   144,   255,   255,
      62,   193,   194,    74,    84,    78,    40,   319,   229,   320,
     230,   201,   256,   257,   230,   361,   127,   369,   370,   371,
     358,    78,   204,    78,    74,    74,    74,   368,   118,    74,
     191,   192,   365,   118,   203,   366,   185,   235,   252,   148,
     253,   199,   200,   250,   367,    74,   262,   263,   373,   378,
     379,   236,   390,   392,   394,   281,   282,   283,   284,   240,
     277,   278,   285,   286,   387,   388,   389,   279,   280,   241,
     259,   261,   267,   337,   118,   397,   272,   399,   295,   127,
     296,   297,   403,   301,   404,   405,   298,    88,    74,    89,
      90,   323,   326,   327,   335,   330,   331,   343,   348,   349,
     345,   350,   352,   355,    74,   353,    74,    84,   354,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   356,   209,   210,  -203,   362,  -203,
     363,   333,   372,   211,   212,   213,   214,    91,   215,    93,
      94,   376,   375,   383,   395,   123,   216,   377,    96,    97,
      98,    99,   100,   101,    88,   402,    89,    90,   287,   289,
     288,    86,   137,   217,   291,   290,   328,    79,   311,   322,
     266,   364,    56,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   209,   210,  -203,     0,  -203,     0,     0,     0,
     211,   212,   213,   214,    91,   215,    93,    94,     0,     0,
       0,     0,   123,   310,     0,    96,    97,    98,    99,   100,
     101,    88,     0,    89,    90,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,    90,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    88,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    88,     0,    89,    90,     0,
       0,     0,    96,    97,    98,    99,   100,   101,    91,    92,
      93,    94,    88,     0,    89,    90,    95,   217,     0,    96,
      97,    98,    99,   100,   101,     0,   209,   210,  -203,     0,
    -203,     0,     0,     0,   211,   212,   213,   214,    91,   215,
      93,    94,     0,     0,     0,     0,   123,     0,     0,    96,
      97,    98,    99,   100,   101,    91,    92,    93,    94,     0,
       0,     0,     0,     0,   217,     0,    96,    97,    98,    99,
     100,   101,    91,    92,    93,    94,    88,     0,    89,    90,
       0,   299,     0,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    88,
       0,    89,    90,     0,     0,     0,    91,    92,    93,    94,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,   132,     0,     0,    88,     7,    89,    90,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,     0,    88,     0,    89,    90,     0,     0,     0,
     242,     0,     0,     0,     7,     0,     0,     0,     0,    91,
      92,    93,    94,    16,    17,   133,    88,     0,    89,    90,
      96,   134,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,    88,   243,    89,    90,     0,     0,    96,   244,    98,
      99,   100,   101,    91,    92,    93,    94,     0,   162,     0,
     163,    95,   336,     0,    96,    97,    98,    99,   100,   101,
       0,     0,    88,     0,    89,    90,    91,    92,    93,    94,
       0,   162,     0,   163,    95,   386,     0,    96,    97,    98,
      99,   100,   101,    88,     0,    89,    90,     0,     0,     0,
       0,    91,    92,    93,    94,     0,   162,     0,   163,    95,
       0,     0,    96,    97,    98,    99,   100,   101,     0,     0,
      88,     7,    89,    90,     0,     0,     0,     0,     0,     0,
      16,    17,    91,    92,    93,    94,   268,    88,     0,    89,
      90,     0,     0,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,    91,    92,    93,    94,    88,     0,    89,
      90,     0,     0,     0,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,    88,     0,    89,    90,     0,     0,
      91,    92,    93,    94,     0,     0,   315,     0,     0,     0,
       0,    96,   316,    98,    99,   100,   101,    91,    92,    93,
      94,    88,     0,    89,    90,   333,     0,     0,    96,    97,
      98,    99,   100,   101,     0,     0,     0,    91,    92,    93,
      94,     0,    88,   359,    89,    90,     0,     0,    96,   360,
      98,    99,   100,   101,    91,    92,    93,    94,   391,    88,
       0,    89,    90,     0,     0,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,    88,     0,    89,    90,
       0,    91,    92,    93,    94,   393,     0,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,     0,     0,
       0,     0,    91,    92,    93,    94,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,    91,
      92,    93,   153,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,    91,    92,    93,   155,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,   229,   312,   230,     0,     0,     0,
       0,     0,     0,    42,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   312,   230,     0,     0,
       0,     0,     0,     0,    42,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,   126,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   357,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   321,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       0,    67,    67,    94,    68,    48,    71,    14,   105,    69,
      82,    70,     9,    10,    75,   127,    27,    80,   232,    71,
      71,    68,    80,    70,    73,    88,    89,    90,    28,    29,
      95,   263,    74,    33,    34,    35,    78,    73,    87,    42,
      31,    88,   105,   257,    73,    64,   141,    66,   160,    40,
      41,   352,    94,    89,    65,    64,    75,    66,   122,   123,
      89,    64,   153,    64,   155,    66,    77,   162,    87,    64,
      70,   136,   373,   374,    75,   147,   137,    72,   141,    86,
     132,    73,   173,   141,    75,    82,    83,    73,    89,    72,
      73,   188,   189,   190,    64,    64,    66,    89,    68,   162,
     166,   166,    71,    89,   162,    75,    64,   172,    66,    31,
     121,   153,    64,   155,   209,   206,   127,    75,    40,    41,
      72,   186,    64,   214,   127,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    56,    57,    58,   209,   379,   208,    64,
      42,   209,     4,     5,     6,   250,    71,   160,    88,    69,
      52,   225,   259,    73,    66,   230,    68,    71,    71,    73,
      75,    67,    64,    75,   239,    80,    81,   242,    66,    71,
      68,    73,    74,    75,    88,    89,    78,   250,    67,   232,
     255,    71,   250,    67,    73,    67,   259,   263,   263,    73,
      84,    73,    94,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    53,    66,    55,    68,    67,    70,   295,
      88,    67,    67,    73,    67,   301,   229,    73,    73,   229,
      73,   307,    67,    67,    72,    73,   236,   248,    73,    73,
     132,     7,     8,    52,   136,   137,    64,    66,    66,    68,
      68,    74,    66,   256,    68,   320,   256,   348,   349,   350,
     319,   153,    13,   155,    73,    74,    75,   343,   333,    78,
      76,    77,   338,   338,    85,   340,    88,    67,   153,   342,
     155,    11,    12,    87,   342,    94,    72,    73,   352,    72,
      73,    73,   383,   384,   385,   195,   196,   197,   198,    69,
     191,   192,   199,   200,   380,   381,   382,   193,   194,    69,
      67,    64,    64,   379,   379,   391,    64,   393,    87,   319,
      64,    89,   398,    87,   400,   401,    89,     3,   137,     5,
       6,    64,    69,    69,    69,    67,    67,    87,    66,    66,
      89,    66,    66,    69,   153,    67,   155,   239,    67,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    69,    51,    52,    53,    69,    55,
      69,    71,    56,    59,    60,    61,    62,    63,    64,    65,
      66,    69,    67,    66,    54,    71,    72,    69,    74,    75,
      76,    77,    78,    79,     3,    89,     5,     6,   201,   203,
     202,    65,    73,    89,   205,   204,   248,    57,   225,   236,
     167,   333,    35,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,     3,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     3,    -1,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,     3,    -1,     5,     6,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    63,    64,
      65,    66,     3,    -1,     5,     6,    71,    89,    -1,    74,
      75,    76,    77,    78,    79,    -1,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      75,    76,    77,    78,    79,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    74,    75,    76,    77,
      78,    79,    63,    64,    65,    66,     3,    -1,     5,     6,
      -1,    89,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    27,    -1,    -1,     3,    31,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    40,    41,    69,     3,    -1,     5,     6,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,     3,    69,     5,     6,    -1,    -1,    74,    75,    76,
      77,    78,    79,    63,    64,    65,    66,    -1,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,     3,    -1,     5,     6,    63,    64,    65,    66,
      -1,    68,    -1,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,     3,    -1,     5,     6,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    -1,    70,    71,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
       3,    31,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    63,    64,    65,    66,    67,     3,    -1,     5,
       6,    -1,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,     3,    -1,     5,
       6,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    63,    64,    65,
      66,     3,    -1,     5,     6,    71,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,     3,    69,     5,     6,    -1,    -1,    74,    75,
      76,    77,    78,    79,    63,    64,    65,    66,    67,     3,
      -1,     5,     6,    -1,    -1,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   112,   113,   116,   117,
     118,   119,   125,   128,   129,   158,   159,   160,    64,    71,
      64,    66,    75,    89,   114,   115,   130,   131,   132,   113,
     113,    64,    71,   113,   113,     0,   159,    71,    64,   126,
     127,   130,   128,   132,   133,    73,    89,    88,   161,   163,
      66,    68,   131,    71,   117,   120,   121,   122,   128,   126,
      88,    72,    73,    67,   128,   132,   115,   130,     3,     5,
       6,    63,    64,    65,    66,    71,    74,    75,    76,    77,
      78,    79,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   141,
     112,   113,   164,    71,   150,    64,    67,   113,   134,   135,
     136,   137,    27,    69,    75,   108,   133,   120,   122,    72,
     121,    87,   123,   124,   130,   122,    72,    73,    94,   107,
     111,    72,   127,    66,    94,    66,    94,    94,   108,   110,
     122,   138,    68,    70,   141,   142,   143,   144,   145,     4,
       5,     6,    66,    68,    70,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    88,   109,    96,    75,    80,
      81,    76,    77,     7,     8,     9,    10,    82,    83,    11,
      12,    74,    84,    85,    13,    14,    86,   112,   162,    51,
      52,    59,    60,    61,    62,    64,    72,    89,   110,   112,
     146,   147,   148,   149,   150,   151,   152,   153,   157,    66,
      68,   130,   132,   139,   140,    67,    73,    67,    73,   133,
      69,    69,    27,    69,    75,   108,    72,   111,    73,    89,
      87,    72,   138,   138,    67,    73,    66,   132,   139,    67,
     111,    64,    72,    73,   141,    88,   145,    64,    67,    93,
     108,   110,    64,   108,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   102,   103,
     104,   105,   110,   150,   111,    87,    64,    89,    89,    89,
     110,    87,    89,    53,    55,   154,    56,    57,    58,   156,
      72,   152,    67,   134,   139,    69,    75,   108,   140,    66,
      68,    50,   136,    64,   108,   108,    69,    69,   124,   111,
      67,    67,   108,    71,    96,    69,    72,   141,   143,    67,
      73,    69,    87,    87,   146,    89,    89,   146,    66,    66,
      66,   146,    66,    67,    67,    69,    69,    67,   134,    69,
      75,   108,    69,    69,   142,   141,   108,   107,   146,   110,
     110,   110,    56,   112,   153,    67,    69,    69,    72,    73,
      67,    67,    67,    66,   153,   153,    72,   146,   146,   146,
     110,    67,   110,    67,   110,    54,    67,   146,    67,   146,
      67,   155,    89,   146,   146,   146
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
     115,   115,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   121,
     122,   122,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   143,   144,   144,   145,   145,
     146,   146,   146,   147,   146,   148,   146,   146,   149,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     155,   154,   154,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   161,   162,
     160,   163,   160,   164,   164
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
       1,     1,     5,     4,     2,     1,     1,     1,     2,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     3,     4,
       5,     5,     6,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     0,     2,     0,     2,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     5,
       0,     8,     5,     5,     7,     6,     7,     6,     7,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     0,     0,
       6,     0,     4,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = PREPRO_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == PREPRO_EMPTY)                                        \
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
   Use PREPRO_error or PREPRO_UNDEF. */
#define YYERRCODE PREPRO_UNDEF


/* Enable debugging if requested.  */
#if PREPRO_DEBUG

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
#else /* !PREPRO_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PREPRO_DEBUG */


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

  yychar = PREPRO_EMPTY; /* Cause a token to be read.  */

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
  if (yychar == PREPRO_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= PREPRO_EOF)
    {
      yychar = PREPRO_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == PREPRO_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = PREPRO_UNDEF;
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
  yychar = PREPRO_EMPTY;
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
#line 54 "preproparser.yy"
               {(yyval.sym) = (yyvsp[0].sym);}
#line 1758 "preproparser.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 56 "preproparser.yy"
                         {(yyval.sym) = (yyvsp[-1].sym);}
#line 1764 "preproparser.cc"
    break;

  case 6: /* postfix_expression: primary_expression  */
#line 60 "preproparser.yy"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1770 "preproparser.cc"
    break;

  case 14: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 68 "preproparser.yy"
                                                     {(yyval.sym) = (yyvsp[-1].sym);}
#line 1776 "preproparser.cc"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 69 "preproparser.yy"
                                                        {(yyval.sym) = (yyvsp[-2].sym);}
#line 1782 "preproparser.cc"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 78 "preproparser.yy"
                             {(yyval.sym) = (yyvsp[0].sym);}
#line 1788 "preproparser.cc"
    break;

  case 19: /* unary_expression: INC_OP unary_expression  */
#line 79 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1794 "preproparser.cc"
    break;

  case 20: /* unary_expression: DEC_OP unary_expression  */
#line 80 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1800 "preproparser.cc"
    break;

  case 21: /* unary_expression: unary_operator cast_expression  */
#line 81 "preproparser.yy"
                                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1806 "preproparser.cc"
    break;

  case 22: /* unary_expression: SIZEOF unary_expression  */
#line 82 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1812 "preproparser.cc"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 83 "preproparser.yy"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 1818 "preproparser.cc"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 96 "preproparser.yy"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1824 "preproparser.cc"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 97 "preproparser.yy"
                                            {(yyval.sym) = (yyvsp[0].sym);}
#line 1830 "preproparser.cc"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 101 "preproparser.yy"
                          {(yyval.sym) = (yyvsp[0].sym);}
#line 1836 "preproparser.cc"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 108 "preproparser.yy"
                                    {(yyval.sym) = (yyvsp[0].sym);}
#line 1842 "preproparser.cc"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 114 "preproparser.yy"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1848 "preproparser.cc"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 120 "preproparser.yy"
                           {(yyval.sym) = (yyvsp[0].sym);}
#line 1854 "preproparser.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 128 "preproparser.yy"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1860 "preproparser.cc"
    break;

  case 50: /* and_expression: equality_expression  */
#line 134 "preproparser.yy"
                              {(yyval.sym) = (yyvsp[0].sym);}
#line 1866 "preproparser.cc"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 139 "preproparser.yy"
                         {(yyval.sym) = (yyvsp[0].sym);}
#line 1872 "preproparser.cc"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 144 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1878 "preproparser.cc"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 149 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 1884 "preproparser.cc"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 154 "preproparser.yy"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1890 "preproparser.cc"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 159 "preproparser.yy"
                                {(yyval.sym) = (yyvsp[0].sym);}
#line 1896 "preproparser.cc"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 164 "preproparser.yy"
                                 {(yyval.sym) = (yyvsp[0].sym);}
#line 1902 "preproparser.cc"
    break;

  case 78: /* declaration: declaration_specifiers ';'  */
#line 193 "preproparser.yy"
        {
		if((yyvsp[-1].sym)->isStruct()){
			(yyval.symList) = new vector<SymbolInfo*>();
			SymbolInfo* symbol = new SymbolInfo(*(yyvsp[-1].sym));
			(yyval.symList)->push_back(symbol);
			table.insert((yyvsp[-1].sym));
		}
	}
#line 1915 "preproparser.cc"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 202 "preproparser.yy"
                                                          {
		(yyval.symList) = new vector<SymbolInfo*>();
		bool hasTypedef = (strstr((yyvsp[-2].sym)->getSymbolType().c_str(), "TYPEDEF") != NULL);
		if((yyvsp[-2].sym)->isStruct()){
			if((yyvsp[-2].sym)->getParamList() != nullptr){
				for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
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
#line 1956 "preproparser.cc"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier  */
#line 241 "preproparser.yy"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 1962 "preproparser.cc"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 243 "preproparser.yy"
                {
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 1973 "preproparser.cc"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 249 "preproparser.yy"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 1979 "preproparser.cc"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 251 "preproparser.yy"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 1990 "preproparser.cc"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 257 "preproparser.yy"
                         { (yyval.sym) = (yyvsp[0].sym); }
#line 1996 "preproparser.cc"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 259 "preproparser.yy"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2007 "preproparser.cc"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 265 "preproparser.yy"
                             { (yyval.sym) = (yyvsp[0].sym); }
#line 2013 "preproparser.cc"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 267 "preproparser.yy"
                { 
			std::ostringstream oss;
			oss << (yyvsp[-1].sym)->getSymbolType() << "_" << (yyvsp[0].sym)->getSymbolType();
			(yyvsp[0].sym)->setSymbolType(oss.str());
			(yyval.sym) = (yyvsp[0].sym);
		}
#line 2024 "preproparser.cc"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 276 "preproparser.yy"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2030 "preproparser.cc"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 277 "preproparser.yy"
                                                        { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2036 "preproparser.cc"
    break;

  case 90: /* init_declarator: declarator  */
#line 281 "preproparser.yy"
                        { (yyval.sym) = (yyvsp[0].sym); }
#line 2042 "preproparser.cc"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 282 "preproparser.yy"
                                        { (yyvsp[-2].sym)->setIsDefined(true); (yyval.sym) = (yyvsp[-2].sym);}
#line 2048 "preproparser.cc"
    break;

  case 92: /* storage_class_specifier: TYPEDEF  */
#line 286 "preproparser.yy"
                  { (yyval.sym) = new SymbolInfo("typedef", "TYPEDEF"); }
#line 2054 "preproparser.cc"
    break;

  case 93: /* storage_class_specifier: EXTERN  */
#line 287 "preproparser.yy"
                 { (yyval.sym) = new SymbolInfo("extern", "EXTERN"); }
#line 2060 "preproparser.cc"
    break;

  case 94: /* storage_class_specifier: STATIC  */
#line 288 "preproparser.yy"
                                { (yyval.sym) = new SymbolInfo("static", "STATIC"); }
#line 2066 "preproparser.cc"
    break;

  case 95: /* storage_class_specifier: AUTO  */
#line 289 "preproparser.yy"
               { (yyval.sym) = new SymbolInfo("auto", "AUTO"); }
#line 2072 "preproparser.cc"
    break;

  case 96: /* storage_class_specifier: REGISTER  */
#line 290 "preproparser.yy"
                   { (yyval.sym) = new SymbolInfo("register", "REGISTER"); }
#line 2078 "preproparser.cc"
    break;

  case 97: /* type_specifier: VOID  */
#line 294 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("void", "VOID"); }
#line 2084 "preproparser.cc"
    break;

  case 98: /* type_specifier: CHAR  */
#line 295 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("char", "CHAR"); }
#line 2090 "preproparser.cc"
    break;

  case 99: /* type_specifier: SHORT  */
#line 296 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("short", "SHORT"); }
#line 2096 "preproparser.cc"
    break;

  case 100: /* type_specifier: INT  */
#line 297 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("int", "INT"); }
#line 2102 "preproparser.cc"
    break;

  case 101: /* type_specifier: LONG  */
#line 298 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("long", "LONG"); }
#line 2108 "preproparser.cc"
    break;

  case 102: /* type_specifier: FLOAT  */
#line 299 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("float", "FLOAT"); }
#line 2114 "preproparser.cc"
    break;

  case 103: /* type_specifier: DOUBLE  */
#line 300 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("double", "DOUBLE"); }
#line 2120 "preproparser.cc"
    break;

  case 104: /* type_specifier: SIGNED  */
#line 301 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("signed", "SIGNED"); }
#line 2126 "preproparser.cc"
    break;

  case 105: /* type_specifier: UNSIGNED  */
#line 302 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("unsigned", "UNSIGNED"); }
#line 2132 "preproparser.cc"
    break;

  case 106: /* type_specifier: BOOL  */
#line 303 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("bool", "BOOL"); }
#line 2138 "preproparser.cc"
    break;

  case 107: /* type_specifier: COMPLEX  */
#line 304 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("complex", "COMPLEX"); }
#line 2144 "preproparser.cc"
    break;

  case 108: /* type_specifier: IMAGINARY  */
#line 305 "preproparser.yy"
                    { (yyval.sym) = new SymbolInfo("imaginary", "IMAGINARY"); }
#line 2150 "preproparser.cc"
    break;

  case 109: /* type_specifier: USER_DEFINED  */
#line 306 "preproparser.yy"
                        { (yyval.sym) = (yyvsp[0].sym);}
#line 2156 "preproparser.cc"
    break;

  case 110: /* type_specifier: struct_or_union_specifier  */
#line 307 "preproparser.yy"
                                 { (yyval.sym) = (yyvsp[0].sym);}
#line 2162 "preproparser.cc"
    break;

  case 111: /* type_specifier: enum_specifier  */
#line 308 "preproparser.yy"
                                 { (yyval.sym) = (yyvsp[0].sym);}
#line 2168 "preproparser.cc"
    break;

  case 112: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 313 "preproparser.yy"
        { 
		(yyvsp[-3].sym)->setIsStruct(true);
		(yyvsp[-3].sym)->setVariableType((yyvsp[-4].sym)->getSymbolType() + "_" + (yyvsp[-3].sym)->getSymbolName());
		table.insert((yyvsp[-3].sym));
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
	}
#line 2179 "preproparser.cc"
    break;

  case 114: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 321 "preproparser.yy"
        { 
		(yyvsp[0].sym)->setIsStruct(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType() + "_" + (yyvsp[0].sym)->getSymbolName());
		(yyvsp[0].sym)->setSymbolName((yyvsp[-1].sym)->getSymbolType() + "_" + (yyvsp[0].sym)->getSymbolName());

		table.insert((yyvsp[0].sym));
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2192 "preproparser.cc"
    break;

  case 115: /* struct_or_union: STRUCT  */
#line 332 "preproparser.yy"
                                { (yyval.sym) = new SymbolInfo("struct", "STRUCT"); }
#line 2198 "preproparser.cc"
    break;

  case 116: /* struct_or_union: UNION  */
#line 333 "preproparser.yy"
                                { (yyval.sym) = new SymbolInfo("union", "UNION"); }
#line 2204 "preproparser.cc"
    break;

  case 117: /* struct_declaration_list: struct_declaration  */
#line 337 "preproparser.yy"
                             { (yyval.symList) = (yyvsp[0].symList); }
#line 2210 "preproparser.cc"
    break;

  case 118: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 339 "preproparser.yy"
        { 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[0].symList)->size(); i++){
			(yyvsp[-1].symList)->push_back((yyvsp[0].symList)->at(i));
		} 
		(yyval.symList) = (yyvsp[-1].symList); 
	}
#line 2221 "preproparser.cc"
    break;

  case 119: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 349 "preproparser.yy"
        {
		for(std::vector<SymbolInfo*>::size_type i = 0; i < (yyvsp[-1].symList)->size(); i++){
			(yyvsp[-1].symList)->at(i)->setVariableType((yyvsp[-2].sym)->getSymbolType());
		}
		(yyval.symList) = (yyvsp[-1].symList);
	}
#line 2232 "preproparser.cc"
    break;

  case 124: /* struct_declarator_list: struct_declarator  */
#line 365 "preproparser.yy"
                            { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2238 "preproparser.cc"
    break;

  case 125: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 366 "preproparser.yy"
                                                       { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2244 "preproparser.cc"
    break;

  case 126: /* struct_declarator: declarator  */
#line 370 "preproparser.yy"
                     { (yyval.sym) = (yyvsp[0].sym); }
#line 2250 "preproparser.cc"
    break;

  case 127: /* struct_declarator: ':' constant_expression  */
#line 371 "preproparser.yy"
                                  { (yyval.sym) = (yyvsp[0].sym); }
#line 2256 "preproparser.cc"
    break;

  case 128: /* struct_declarator: declarator ':' constant_expression  */
#line 372 "preproparser.yy"
                                             { (yyval.sym) = (yyvsp[-2].sym); }
#line 2262 "preproparser.cc"
    break;

  case 142: /* declarator: pointer direct_declarator  */
#line 404 "preproparser.yy"
                                    { (yyvsp[0].sym)->setIsPointer(true); (yyval.sym) = (yyvsp[0].sym); }
#line 2268 "preproparser.cc"
    break;

  case 143: /* declarator: direct_declarator  */
#line 405 "preproparser.yy"
                                { (yyval.sym) = (yyvsp[0].sym);}
#line 2274 "preproparser.cc"
    break;

  case 144: /* direct_declarator: IDENTIFIER  */
#line 410 "preproparser.yy"
                                { (yyval.sym) = (yyvsp[0].sym); }
#line 2280 "preproparser.cc"
    break;

  case 145: /* direct_declarator: '(' declarator ')'  */
#line 411 "preproparser.yy"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 2286 "preproparser.cc"
    break;

  case 146: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 412 "preproparser.yy"
                                                                             {
		if(!(yyvsp[-4].sym)->isArray()){
			(yyvsp[-4].sym)->setIsArray(true);
		}
		(yyvsp[-4].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2298 "preproparser.cc"
    break;

  case 147: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 419 "preproparser.yy"
                                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2307 "preproparser.cc"
    break;

  case 148: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 423 "preproparser.yy"
                                                          {
		if(!(yyvsp[-3].sym)->isArray()){
			(yyvsp[-3].sym)->setIsArray(true);
		}
		(yyvsp[-3].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2319 "preproparser.cc"
    break;

  case 149: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 430 "preproparser.yy"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2331 "preproparser.cc"
    break;

  case 150: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 437 "preproparser.yy"
                                                                                    {
		if(!(yyvsp[-5].sym)->isArray()){
			(yyvsp[-5].sym)->setIsArray(true);
		}
		(yyvsp[-5].sym)->addArrSize(((yyvsp[-1].sym)->getSymbolName()));
		(yyval.sym) = (yyvsp[-5].sym);
	}
#line 2343 "preproparser.cc"
    break;

  case 151: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 444 "preproparser.yy"
                                                           {
		(yyvsp[-4].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-4].sym);
	}
#line 2352 "preproparser.cc"
    break;

  case 152: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 448 "preproparser.yy"
                                       {
		(yyvsp[-3].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2361 "preproparser.cc"
    break;

  case 153: /* direct_declarator: direct_declarator '[' ']'  */
#line 452 "preproparser.yy"
                                    {
		(yyvsp[-2].sym)->setIsArray(true);
		(yyval.sym) = (yyvsp[-2].sym);
	}
#line 2370 "preproparser.cc"
    break;

  case 154: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 456 "preproparser.yy"
                                                        {
		(yyvsp[-3].sym)->setParamList((yyvsp[-1].symList));
		(yyval.sym) = (yyvsp[-3].sym);
	}
#line 2379 "preproparser.cc"
    break;

  case 155: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 460 "preproparser.yy"
                                                    { (yyval.sym) = (yyvsp[-3].sym);}
#line 2385 "preproparser.cc"
    break;

  case 156: /* direct_declarator: direct_declarator '(' ')'  */
#line 461 "preproparser.yy"
                                    { (yyval.sym) = (yyvsp[-2].sym); }
#line 2391 "preproparser.cc"
    break;

  case 163: /* parameter_type_list: parameter_list  */
#line 478 "preproparser.yy"
                         { (yyval.symList) = (yyvsp[0].symList); }
#line 2397 "preproparser.cc"
    break;

  case 165: /* parameter_list: parameter_declaration  */
#line 483 "preproparser.yy"
                                { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2403 "preproparser.cc"
    break;

  case 166: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 484 "preproparser.yy"
                                                   { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2409 "preproparser.cc"
    break;

  case 167: /* parameter_declaration: declaration_specifiers declarator  */
#line 488 "preproparser.yy"
                                            {
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		(yyval.sym) = (yyvsp[0].sym);
	}
#line 2418 "preproparser.cc"
    break;

  case 170: /* identifier_list: IDENTIFIER  */
#line 497 "preproparser.yy"
                     { (yyval.symList) = new vector<SymbolInfo*>(); (yyval.symList)->push_back((yyvsp[0].sym)); }
#line 2424 "preproparser.cc"
    break;

  case 171: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 498 "preproparser.yy"
                                         { (yyvsp[-2].symList)->push_back((yyvsp[0].sym)); (yyval.symList) = (yyvsp[-2].symList); }
#line 2430 "preproparser.cc"
    break;

  case 189: /* initializer: '{' initializer_list '}'  */
#line 528 "preproparser.yy"
                                   {(yyval.sym) = (yyvsp[-1].sym);}
#line 2436 "preproparser.cc"
    break;

  case 190: /* initializer: '{' initializer_list ',' '}'  */
#line 529 "preproparser.yy"
                                       {(yyval.sym) = (yyvsp[-2].sym);}
#line 2442 "preproparser.cc"
    break;

  case 192: /* initializer_list: designation initializer  */
#line 534 "preproparser.yy"
                                  {(yyval.sym) = (yyvsp[0].sym);}
#line 2448 "preproparser.cc"
    break;

  case 203: /* $@1: %empty  */
#line 557 "preproparser.yy"
          { table.enterScope(); }
#line 2454 "preproparser.cc"
    break;

  case 204: /* statement: $@1 selection_statement  */
#line 557 "preproparser.yy"
                                                      { table.exitScope(); }
#line 2460 "preproparser.cc"
    break;

  case 205: /* $@2: %empty  */
#line 558 "preproparser.yy"
          { table.enterScope(); }
#line 2466 "preproparser.cc"
    break;

  case 206: /* statement: $@2 iteration_statement  */
#line 558 "preproparser.yy"
                                                      { table.exitScope(); }
#line 2472 "preproparser.cc"
    break;

  case 220: /* $@3: %empty  */
#line 593 "preproparser.yy"
                                               { table.exitScope(); table.enterScope(); }
#line 2478 "preproparser.cc"
    break;

  case 238: /* $@4: %empty  */
#line 629 "preproparser.yy"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		table.insert((yyvsp[0].sym));
		table.enterScope();
	}
#line 2489 "preproparser.cc"
    break;

  case 239: /* $@5: %empty  */
#line 634 "preproparser.yy"
                           {
		table.getSymbolInfo((yyvsp[-2].sym)->getSymbolName())->setParamList((yyvsp[0].symList));
	}
#line 2497 "preproparser.cc"
    break;

  case 240: /* function_definition: declaration_specifiers declarator $@4 declaration_list $@5 compound_statement  */
#line 636 "preproparser.yy"
                             {
		(yyvsp[-4].sym)->setIsDefined(true);
		table.exitScope();
	}
#line 2506 "preproparser.cc"
    break;

  case 241: /* $@6: %empty  */
#line 640 "preproparser.yy"
                                            {
		(yyvsp[0].sym)->setIsFunction(true);
		(yyvsp[0].sym)->setVariableType((yyvsp[-1].sym)->getSymbolType());
		table.insert((yyvsp[0].sym));
		table.enterScope();
	}
#line 2517 "preproparser.cc"
    break;

  case 242: /* function_definition: declaration_specifiers declarator $@6 compound_statement  */
#line 645 "preproparser.yy"
                             {
		(yyvsp[-2].sym)->setIsDefined(true);
		table.exitScope();
	}
#line 2526 "preproparser.cc"
    break;

  case 243: /* declaration_list: declaration  */
#line 652 "preproparser.yy"
                  { 
        (yyval.symList) = new vector<SymbolInfo*>();
        (yyval.symList)->insert((yyval.symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
    }
#line 2535 "preproparser.cc"
    break;

  case 244: /* declaration_list: declaration_list declaration  */
#line 656 "preproparser.yy"
                                   { 
        (yyvsp[-1].symList)->insert((yyvsp[-1].symList)->end(), (yyvsp[0].symList)->begin(), (yyvsp[0].symList)->end());
        (yyval.symList) = (yyvsp[-1].symList);
    }
#line 2544 "preproparser.cc"
    break;


#line 2548 "preproparser.cc"

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
  yytoken = yychar == PREPRO_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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

      if (yychar <= PREPRO_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == PREPRO_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = PREPRO_EMPTY;
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
  if (yychar != PREPRO_EMPTY)
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

#line 663 "preproparser.yy"

#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char const *s)
{
	logFile << "Error in preprocesador at line " << elcuentadordelineas << " column: " << column << ": syntax error" << endl << endl;
	errFile << "Error in preprocesador at line " << elcuentadordelineas << " column: " << column << ": syntax error" << endl << endl;

	/* fflush(stdout);
	printf("\n%*s\n%*s\n", elcuentadordelineas, "^", column, s); */
}
