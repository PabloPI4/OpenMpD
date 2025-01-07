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
#define YYSTYPE         OPENMP_STYPE
#define YYLTYPE         OPENMP_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         openmp_parse
#define yylex           openmp_lex
#define yyerror         openmp_error
#define yydebug         openmp_debug
#define yynerrs         openmp_nerrs
#define yylval          openmp_lval
#define yychar          openmp_char
#define yylloc          openmp_lloc

/* First part of user prologue.  */
#line 15 "ompparser.yy"

/* DQ (2/10/2014): IF is conflicting with Boost template IF. */
#undef IF

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <assert.h>
#include <bits/stdc++.h>
#include "SymbolTable.h"
#include "MPIwriter.h"

int error_count = 0;

/*the scanner function*/
extern int openmp_lex(); 

/*A customized initialization function for the scanner, str is the string to be scanned.*/
extern void openmp_lexer_init(const char* str);

/* Standalone ompparser */
extern void start_lexer(const char* input);
extern void end_lexer(void);

extern ofstream logFile;
extern ofstream errFile;

extern void openmp_parse_expr();
static int openmp_error(const char*);
void * (*exprParse)(const char*) = NULL;

extern int statePragma;
extern SymbolTable table;
extern MPI_Writer mpi_writer;
bool enCluster = false;
bool enDistribute = true;
bool enReduce = false;


#line 121 "ompparser.cc"

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

#include "ompparser.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OMP = 3,                        /* OMP  */
  YYSYMBOL_PARALLEL = 4,                   /* PARALLEL  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_DO = 6,                         /* DO  */
  YYSYMBOL_DECLARE = 7,                    /* DECLARE  */
  YYSYMBOL_DISTRIBUTE = 8,                 /* DISTRIBUTE  */
  YYSYMBOL_LOOP = 9,                       /* LOOP  */
  YYSYMBOL_SCAN = 10,                      /* SCAN  */
  YYSYMBOL_SECTIONS = 11,                  /* SECTIONS  */
  YYSYMBOL_SECTION = 12,                   /* SECTION  */
  YYSYMBOL_SINGLE = 13,                    /* SINGLE  */
  YYSYMBOL_CANCEL = 14,                    /* CANCEL  */
  YYSYMBOL_TASKGROUP = 15,                 /* TASKGROUP  */
  YYSYMBOL_CANCELLATION = 16,              /* CANCELLATION  */
  YYSYMBOL_POINT = 17,                     /* POINT  */
  YYSYMBOL_THREAD = 18,                    /* THREAD  */
  YYSYMBOL_VARIANT = 19,                   /* VARIANT  */
  YYSYMBOL_THREADPRIVATE = 20,             /* THREADPRIVATE  */
  YYSYMBOL_METADIRECTIVE = 21,             /* METADIRECTIVE  */
  YYSYMBOL_MAPPER = 22,                    /* MAPPER  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_NUM_THREADS = 24,               /* NUM_THREADS  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_PRIVATE = 26,                   /* PRIVATE  */
  YYSYMBOL_FIRSTPRIVATE = 27,              /* FIRSTPRIVATE  */
  YYSYMBOL_SHARED = 28,                    /* SHARED  */
  YYSYMBOL_COPYIN = 29,                    /* COPYIN  */
  YYSYMBOL_REDUCTION = 30,                 /* REDUCTION  */
  YYSYMBOL_PROC_BIND = 31,                 /* PROC_BIND  */
  YYSYMBOL_ALLOCATE = 32,                  /* ALLOCATE  */
  YYSYMBOL_SIMD = 33,                      /* SIMD  */
  YYSYMBOL_TASK = 34,                      /* TASK  */
  YYSYMBOL_LASTPRIVATE = 35,               /* LASTPRIVATE  */
  YYSYMBOL_WHEN = 36,                      /* WHEN  */
  YYSYMBOL_MATCH = 37,                     /* MATCH  */
  YYSYMBOL_LINEAR = 38,                    /* LINEAR  */
  YYSYMBOL_SCHEDULE = 39,                  /* SCHEDULE  */
  YYSYMBOL_COLLAPSE = 40,                  /* COLLAPSE  */
  YYSYMBOL_NOWAIT = 41,                    /* NOWAIT  */
  YYSYMBOL_ORDER = 42,                     /* ORDER  */
  YYSYMBOL_ORDERED = 43,                   /* ORDERED  */
  YYSYMBOL_MODIFIER_CONDITIONAL = 44,      /* MODIFIER_CONDITIONAL  */
  YYSYMBOL_MODIFIER_MONOTONIC = 45,        /* MODIFIER_MONOTONIC  */
  YYSYMBOL_MODIFIER_NONMONOTONIC = 46,     /* MODIFIER_NONMONOTONIC  */
  YYSYMBOL_STATIC = 47,                    /* STATIC  */
  YYSYMBOL_DYNAMIC = 48,                   /* DYNAMIC  */
  YYSYMBOL_GUIDED = 49,                    /* GUIDED  */
  YYSYMBOL_AUTO = 50,                      /* AUTO  */
  YYSYMBOL_RUNTIME = 51,                   /* RUNTIME  */
  YYSYMBOL_MODOFIER_VAL = 52,              /* MODOFIER_VAL  */
  YYSYMBOL_MODOFIER_REF = 53,              /* MODOFIER_REF  */
  YYSYMBOL_MODOFIER_UVAL = 54,             /* MODOFIER_UVAL  */
  YYSYMBOL_MODIFIER_SIMD = 55,             /* MODIFIER_SIMD  */
  YYSYMBOL_SAFELEN = 56,                   /* SAFELEN  */
  YYSYMBOL_SIMDLEN = 57,                   /* SIMDLEN  */
  YYSYMBOL_ALIGNED = 58,                   /* ALIGNED  */
  YYSYMBOL_ALIGN = 59,                     /* ALIGN  */
  YYSYMBOL_NONTEMPORAL = 60,               /* NONTEMPORAL  */
  YYSYMBOL_UNIFORM = 61,                   /* UNIFORM  */
  YYSYMBOL_INBRANCH = 62,                  /* INBRANCH  */
  YYSYMBOL_NOTINBRANCH = 63,               /* NOTINBRANCH  */
  YYSYMBOL_DIST_SCHEDULE = 64,             /* DIST_SCHEDULE  */
  YYSYMBOL_BIND = 65,                      /* BIND  */
  YYSYMBOL_INCLUSIVE = 66,                 /* INCLUSIVE  */
  YYSYMBOL_EXCLUSIVE = 67,                 /* EXCLUSIVE  */
  YYSYMBOL_COPYPRIVATE = 68,               /* COPYPRIVATE  */
  YYSYMBOL_ALLOCATOR = 69,                 /* ALLOCATOR  */
  YYSYMBOL_INITIALIZER = 70,               /* INITIALIZER  */
  YYSYMBOL_OMP_PRIV = 71,                  /* OMP_PRIV  */
  YYSYMBOL_IDENTIFIER_DEFAULT = 72,        /* IDENTIFIER_DEFAULT  */
  YYSYMBOL_WORKSHARE = 73,                 /* WORKSHARE  */
  YYSYMBOL_NONE = 74,                      /* NONE  */
  YYSYMBOL_MASTER = 75,                    /* MASTER  */
  YYSYMBOL_CLOSE = 76,                     /* CLOSE  */
  YYSYMBOL_SPREAD = 77,                    /* SPREAD  */
  YYSYMBOL_MODIFIER_INSCAN = 78,           /* MODIFIER_INSCAN  */
  YYSYMBOL_MODIFIER_TASK = 79,             /* MODIFIER_TASK  */
  YYSYMBOL_MODIFIER_DEFAULT = 80,          /* MODIFIER_DEFAULT  */
  YYSYMBOL_PLUS = 81,                      /* PLUS  */
  YYSYMBOL_MINUS = 82,                     /* MINUS  */
  YYSYMBOL_STAR = 83,                      /* STAR  */
  YYSYMBOL_BITAND = 84,                    /* BITAND  */
  YYSYMBOL_BITOR = 85,                     /* BITOR  */
  YYSYMBOL_BITXOR = 86,                    /* BITXOR  */
  YYSYMBOL_LOGAND = 87,                    /* LOGAND  */
  YYSYMBOL_LOGOR = 88,                     /* LOGOR  */
  YYSYMBOL_EQV = 89,                       /* EQV  */
  YYSYMBOL_NEQV = 90,                      /* NEQV  */
  YYSYMBOL_MAX = 91,                       /* MAX  */
  YYSYMBOL_MIN = 92,                       /* MIN  */
  YYSYMBOL_DEFAULT_MEM_ALLOC = 93,         /* DEFAULT_MEM_ALLOC  */
  YYSYMBOL_LARGE_CAP_MEM_ALLOC = 94,       /* LARGE_CAP_MEM_ALLOC  */
  YYSYMBOL_CONST_MEM_ALLOC = 95,           /* CONST_MEM_ALLOC  */
  YYSYMBOL_HIGH_BW_MEM_ALLOC = 96,         /* HIGH_BW_MEM_ALLOC  */
  YYSYMBOL_LOW_LAT_MEM_ALLOC = 97,         /* LOW_LAT_MEM_ALLOC  */
  YYSYMBOL_CGROUP_MEM_ALLOC = 98,          /* CGROUP_MEM_ALLOC  */
  YYSYMBOL_PTEAM_MEM_ALLOC = 99,           /* PTEAM_MEM_ALLOC  */
  YYSYMBOL_THREAD_MEM_ALLOC = 100,         /* THREAD_MEM_ALLOC  */
  YYSYMBOL_TEAMS = 101,                    /* TEAMS  */
  YYSYMBOL_NUM_TEAMS = 102,                /* NUM_TEAMS  */
  YYSYMBOL_THREAD_LIMIT = 103,             /* THREAD_LIMIT  */
  YYSYMBOL_END = 104,                      /* END  */
  YYSYMBOL_USER = 105,                     /* USER  */
  YYSYMBOL_CONSTRUCT = 106,                /* CONSTRUCT  */
  YYSYMBOL_DEVICE = 107,                   /* DEVICE  */
  YYSYMBOL_IMPLEMENTATION = 108,           /* IMPLEMENTATION  */
  YYSYMBOL_CONDITION = 109,                /* CONDITION  */
  YYSYMBOL_SCORE = 110,                    /* SCORE  */
  YYSYMBOL_VENDOR = 111,                   /* VENDOR  */
  YYSYMBOL_KIND = 112,                     /* KIND  */
  YYSYMBOL_HOST = 113,                     /* HOST  */
  YYSYMBOL_NOHOST = 114,                   /* NOHOST  */
  YYSYMBOL_ANY = 115,                      /* ANY  */
  YYSYMBOL_CPU = 116,                      /* CPU  */
  YYSYMBOL_GPU = 117,                      /* GPU  */
  YYSYMBOL_FPGA = 118,                     /* FPGA  */
  YYSYMBOL_ISA = 119,                      /* ISA  */
  YYSYMBOL_ARCH = 120,                     /* ARCH  */
  YYSYMBOL_EXTENSION = 121,                /* EXTENSION  */
  YYSYMBOL_AMD = 122,                      /* AMD  */
  YYSYMBOL_ARM = 123,                      /* ARM  */
  YYSYMBOL_BSC = 124,                      /* BSC  */
  YYSYMBOL_CRAY = 125,                     /* CRAY  */
  YYSYMBOL_FUJITSU = 126,                  /* FUJITSU  */
  YYSYMBOL_GNU = 127,                      /* GNU  */
  YYSYMBOL_IBM = 128,                      /* IBM  */
  YYSYMBOL_INTEL = 129,                    /* INTEL  */
  YYSYMBOL_LLVM = 130,                     /* LLVM  */
  YYSYMBOL_PGI = 131,                      /* PGI  */
  YYSYMBOL_TI = 132,                       /* TI  */
  YYSYMBOL_UNKNOWN = 133,                  /* UNKNOWN  */
  YYSYMBOL_FINAL = 134,                    /* FINAL  */
  YYSYMBOL_UNTIED = 135,                   /* UNTIED  */
  YYSYMBOL_MERGEABLE = 136,                /* MERGEABLE  */
  YYSYMBOL_IN_REDUCTION = 137,             /* IN_REDUCTION  */
  YYSYMBOL_DEPEND = 138,                   /* DEPEND  */
  YYSYMBOL_PRIORITY = 139,                 /* PRIORITY  */
  YYSYMBOL_AFFINITY = 140,                 /* AFFINITY  */
  YYSYMBOL_DETACH = 141,                   /* DETACH  */
  YYSYMBOL_MODIFIER_ITERATOR = 142,        /* MODIFIER_ITERATOR  */
  YYSYMBOL_DEPOBJ = 143,                   /* DEPOBJ  */
  YYSYMBOL_FINAL_CLAUSE = 144,             /* FINAL_CLAUSE  */
  YYSYMBOL_IN = 145,                       /* IN  */
  YYSYMBOL_INOUT = 146,                    /* INOUT  */
  YYSYMBOL_MUTEXINOUTSET = 147,            /* MUTEXINOUTSET  */
  YYSYMBOL_OUT = 148,                      /* OUT  */
  YYSYMBOL_TASKLOOP = 149,                 /* TASKLOOP  */
  YYSYMBOL_GRAINSIZE = 150,                /* GRAINSIZE  */
  YYSYMBOL_NUM_TASKS = 151,                /* NUM_TASKS  */
  YYSYMBOL_NOGROUP = 152,                  /* NOGROUP  */
  YYSYMBOL_TASKYIELD = 153,                /* TASKYIELD  */
  YYSYMBOL_REQUIRES = 154,                 /* REQUIRES  */
  YYSYMBOL_REVERSE_OFFLOAD = 155,          /* REVERSE_OFFLOAD  */
  YYSYMBOL_UNIFIED_ADDRESS = 156,          /* UNIFIED_ADDRESS  */
  YYSYMBOL_UNIFIED_SHARED_MEMORY = 157,    /* UNIFIED_SHARED_MEMORY  */
  YYSYMBOL_ATOMIC_DEFAULT_MEM_ORDER = 158, /* ATOMIC_DEFAULT_MEM_ORDER  */
  YYSYMBOL_DYNAMIC_ALLOCATORS = 159,       /* DYNAMIC_ALLOCATORS  */
  YYSYMBOL_SEQ_CST = 160,                  /* SEQ_CST  */
  YYSYMBOL_ACQ_REL = 161,                  /* ACQ_REL  */
  YYSYMBOL_RELAXED = 162,                  /* RELAXED  */
  YYSYMBOL_USE_DEVICE_PTR = 163,           /* USE_DEVICE_PTR  */
  YYSYMBOL_USE_DEVICE_ADDR = 164,          /* USE_DEVICE_ADDR  */
  YYSYMBOL_TARGET = 165,                   /* TARGET  */
  YYSYMBOL_DATA = 166,                     /* DATA  */
  YYSYMBOL_ENTER = 167,                    /* ENTER  */
  YYSYMBOL_EXIT = 168,                     /* EXIT  */
  YYSYMBOL_ANCESTOR = 169,                 /* ANCESTOR  */
  YYSYMBOL_DEVICE_NUM = 170,               /* DEVICE_NUM  */
  YYSYMBOL_IS_DEVICE_PTR = 171,            /* IS_DEVICE_PTR  */
  YYSYMBOL_HAS_DEVICE_ADDR = 172,          /* HAS_DEVICE_ADDR  */
  YYSYMBOL_DEFAULTMAP = 173,               /* DEFAULTMAP  */
  YYSYMBOL_BEHAVIOR_ALLOC = 174,           /* BEHAVIOR_ALLOC  */
  YYSYMBOL_BEHAVIOR_TO = 175,              /* BEHAVIOR_TO  */
  YYSYMBOL_BEHAVIOR_FROM = 176,            /* BEHAVIOR_FROM  */
  YYSYMBOL_BEHAVIOR_TOFROM = 177,          /* BEHAVIOR_TOFROM  */
  YYSYMBOL_BEHAVIOR_FIRSTPRIVATE = 178,    /* BEHAVIOR_FIRSTPRIVATE  */
  YYSYMBOL_BEHAVIOR_NONE = 179,            /* BEHAVIOR_NONE  */
  YYSYMBOL_BEHAVIOR_DEFAULT = 180,         /* BEHAVIOR_DEFAULT  */
  YYSYMBOL_CATEGORY_SCALAR = 181,          /* CATEGORY_SCALAR  */
  YYSYMBOL_CATEGORY_AGGREGATE = 182,       /* CATEGORY_AGGREGATE  */
  YYSYMBOL_CATEGORY_POINTER = 183,         /* CATEGORY_POINTER  */
  YYSYMBOL_CATEGORY_ALLOCATABLE = 184,     /* CATEGORY_ALLOCATABLE  */
  YYSYMBOL_UPDATE = 185,                   /* UPDATE  */
  YYSYMBOL_TO = 186,                       /* TO  */
  YYSYMBOL_FROM = 187,                     /* FROM  */
  YYSYMBOL_TO_MAPPER = 188,                /* TO_MAPPER  */
  YYSYMBOL_FROM_MAPPER = 189,              /* FROM_MAPPER  */
  YYSYMBOL_USES_ALLOCATORS = 190,          /* USES_ALLOCATORS  */
  YYSYMBOL_LINK = 191,                     /* LINK  */
  YYSYMBOL_DEVICE_TYPE = 192,              /* DEVICE_TYPE  */
  YYSYMBOL_MAP = 193,                      /* MAP  */
  YYSYMBOL_MAP_MODIFIER_ALWAYS = 194,      /* MAP_MODIFIER_ALWAYS  */
  YYSYMBOL_MAP_MODIFIER_CLOSE = 195,       /* MAP_MODIFIER_CLOSE  */
  YYSYMBOL_MAP_MODIFIER_MAPPER = 196,      /* MAP_MODIFIER_MAPPER  */
  YYSYMBOL_MAP_TYPE_TO = 197,              /* MAP_TYPE_TO  */
  YYSYMBOL_MAP_TYPE_FROM = 198,            /* MAP_TYPE_FROM  */
  YYSYMBOL_MAP_TYPE_TOFROM = 199,          /* MAP_TYPE_TOFROM  */
  YYSYMBOL_MAP_TYPE_ALLOC = 200,           /* MAP_TYPE_ALLOC  */
  YYSYMBOL_MAP_TYPE_RELEASE = 201,         /* MAP_TYPE_RELEASE  */
  YYSYMBOL_MAP_TYPE_DELETE = 202,          /* MAP_TYPE_DELETE  */
  YYSYMBOL_EXT_ = 203,                     /* EXT_  */
  YYSYMBOL_BARRIER = 204,                  /* BARRIER  */
  YYSYMBOL_TASKWAIT = 205,                 /* TASKWAIT  */
  YYSYMBOL_FLUSH = 206,                    /* FLUSH  */
  YYSYMBOL_RELEASE = 207,                  /* RELEASE  */
  YYSYMBOL_ACQUIRE = 208,                  /* ACQUIRE  */
  YYSYMBOL_ATOMIC = 209,                   /* ATOMIC  */
  YYSYMBOL_READ = 210,                     /* READ  */
  YYSYMBOL_WRITE = 211,                    /* WRITE  */
  YYSYMBOL_CAPTURE = 212,                  /* CAPTURE  */
  YYSYMBOL_HINT = 213,                     /* HINT  */
  YYSYMBOL_CRITICAL = 214,                 /* CRITICAL  */
  YYSYMBOL_SOURCE = 215,                   /* SOURCE  */
  YYSYMBOL_SINK = 216,                     /* SINK  */
  YYSYMBOL_DESTROY = 217,                  /* DESTROY  */
  YYSYMBOL_THREADS = 218,                  /* THREADS  */
  YYSYMBOL_CONCURRENT = 219,               /* CONCURRENT  */
  YYSYMBOL_CLUSTER = 220,                  /* CLUSTER  */
  YYSYMBOL_ALLOC = 221,                    /* ALLOC  */
  YYSYMBOL_BROAD = 222,                    /* BROAD  */
  YYSYMBOL_SCATTER = 223,                  /* SCATTER  */
  YYSYMBOL_GATHER = 224,                   /* GATHER  */
  YYSYMBOL_ALLGATHER = 225,                /* ALLGATHER  */
  YYSYMBOL_ALLREDUCTION = 226,             /* ALLREDUCTION  */
  YYSYMBOL_CHUNK = 227,                    /* CHUNK  */
  YYSYMBOL_HALO = 228,                     /* HALO  */
  YYSYMBOL_TASK_ASYNC = 229,               /* TASK_ASYNC  */
  YYSYMBOL_ICONSTANT = 230,                /* ICONSTANT  */
  YYSYMBOL_EXPRESSION = 231,               /* EXPRESSION  */
  YYSYMBOL_ID_EXPRESSION = 232,            /* ID_EXPRESSION  */
  YYSYMBOL_EXPR_STRING = 233,              /* EXPR_STRING  */
  YYSYMBOL_VAR_STRING = 234,               /* VAR_STRING  */
  YYSYMBOL_TASK_REDUCTION = 235,           /* TASK_REDUCTION  */
  YYSYMBOL_236_ = 236,                     /* '<'  */
  YYSYMBOL_237_ = 237,                     /* '>'  */
  YYSYMBOL_238_ = 238,                     /* '='  */
  YYSYMBOL_239_ = 239,                     /* "!="  */
  YYSYMBOL_240_ = 240,                     /* "<="  */
  YYSYMBOL_241_ = 241,                     /* ">="  */
  YYSYMBOL_242_ = 242,                     /* '+'  */
  YYSYMBOL_243_ = 243,                     /* '-'  */
  YYSYMBOL_244_ = 244,                     /* '*'  */
  YYSYMBOL_245_ = 245,                     /* '/'  */
  YYSYMBOL_246_ = 246,                     /* '%'  */
  YYSYMBOL_247_ = 247,                     /* ','  */
  YYSYMBOL_248_ = 248,                     /* ':'  */
  YYSYMBOL_249_ = 249,                     /* '('  */
  YYSYMBOL_250_ = 250,                     /* ')'  */
  YYSYMBOL_251_ = 251,                     /* '{'  */
  YYSYMBOL_252_ = 252,                     /* '}'  */
  YYSYMBOL_253_ = 253,                     /* '&'  */
  YYSYMBOL_254_ = 254,                     /* '|'  */
  YYSYMBOL_255_ = 255,                     /* '^'  */
  YYSYMBOL_256_ = 256,                     /* ","  */
  YYSYMBOL_YYACCEPT = 257,                 /* $accept  */
  YYSYMBOL_expression = 258,               /* expression  */
  YYSYMBOL_variable = 259,                 /* variable  */
  YYSYMBOL_var_list = 260,                 /* var_list  */
  YYSYMBOL_var_list_broad = 261,           /* var_list_broad  */
  YYSYMBOL_var_list_reduction = 262,       /* var_list_reduction  */
  YYSYMBOL_var_chunk = 263,                /* var_chunk  */
  YYSYMBOL_var_chunk_list = 264,           /* var_chunk_list  */
  YYSYMBOL_openmp_directive = 265,         /* openmp_directive  */
  YYSYMBOL_variant_directive = 266,        /* variant_directive  */
  YYSYMBOL_fortran_paired_directive = 267, /* fortran_paired_directive  */
  YYSYMBOL_end_directive = 268,            /* end_directive  */
  YYSYMBOL_269_1 = 269,                    /* $@1  */
  YYSYMBOL_end_clause_seq = 270,           /* end_clause_seq  */
  YYSYMBOL_metadirective_directive = 271,  /* metadirective_directive  */
  YYSYMBOL_272_2 = 272,                    /* $@2  */
  YYSYMBOL_metadirective_clause_optseq = 273, /* metadirective_clause_optseq  */
  YYSYMBOL_metadirective_clause_seq = 274, /* metadirective_clause_seq  */
  YYSYMBOL_metadirective_clause = 275,     /* metadirective_clause  */
  YYSYMBOL_when_clause = 276,              /* when_clause  */
  YYSYMBOL_277_3 = 277,                    /* $@3  */
  YYSYMBOL_278_4 = 278,                    /* $@4  */
  YYSYMBOL_279_5 = 279,                    /* $@5  */
  YYSYMBOL_when_variant_directive = 280,   /* when_variant_directive  */
  YYSYMBOL_context_selector_specification = 281, /* context_selector_specification  */
  YYSYMBOL_trait_set_selector = 282,       /* trait_set_selector  */
  YYSYMBOL_283_6 = 283,                    /* $@6  */
  YYSYMBOL_284_7 = 284,                    /* $@7  */
  YYSYMBOL_trait_set_selector_name = 285,  /* trait_set_selector_name  */
  YYSYMBOL_trait_selector_list = 286,      /* trait_selector_list  */
  YYSYMBOL_trait_selector = 287,           /* trait_selector  */
  YYSYMBOL_condition_selector = 288,       /* condition_selector  */
  YYSYMBOL_289_8 = 289,                    /* $@8  */
  YYSYMBOL_device_selector = 290,          /* device_selector  */
  YYSYMBOL_context_kind = 291,             /* context_kind  */
  YYSYMBOL_context_kind_name = 292,        /* context_kind_name  */
  YYSYMBOL_context_isa = 293,              /* context_isa  */
  YYSYMBOL_context_arch = 294,             /* context_arch  */
  YYSYMBOL_implementation_selector = 295,  /* implementation_selector  */
  YYSYMBOL_context_vendor_name = 296,      /* context_vendor_name  */
  YYSYMBOL_construct_selector = 297,       /* construct_selector  */
  YYSYMBOL_parallel_selector = 298,        /* parallel_selector  */
  YYSYMBOL_299_9 = 299,                    /* $@9  */
  YYSYMBOL_parallel_selector_parameter = 300, /* parallel_selector_parameter  */
  YYSYMBOL_trait_score = 301,              /* trait_score  */
  YYSYMBOL_302_10 = 302,                   /* $@10  */
  YYSYMBOL_declare_variant_directive = 303, /* declare_variant_directive  */
  YYSYMBOL_304_11 = 304,                   /* $@11  */
  YYSYMBOL_variant_func_id = 305,          /* variant_func_id  */
  YYSYMBOL_306_12 = 306,                   /* $@12  */
  YYSYMBOL_declare_variant_clause_optseq = 307, /* declare_variant_clause_optseq  */
  YYSYMBOL_declare_variant_clause_seq = 308, /* declare_variant_clause_seq  */
  YYSYMBOL_declare_variant_clause = 309,   /* declare_variant_clause  */
  YYSYMBOL_match_clause = 310,             /* match_clause  */
  YYSYMBOL_311_13 = 311,                   /* $@13  */
  YYSYMBOL_parallel_directive = 312,       /* parallel_directive  */
  YYSYMBOL_313_14 = 313,                   /* $@14  */
  YYSYMBOL_cluster_directive = 314,        /* cluster_directive  */
  YYSYMBOL_315_15 = 315,                   /* $@15  */
  YYSYMBOL_declare_cluster_directive = 316, /* declare_cluster_directive  */
  YYSYMBOL_end_declare_cluster_directive = 317, /* end_declare_cluster_directive  */
  YYSYMBOL_cluster_data_directive = 318,   /* cluster_data_directive  */
  YYSYMBOL_319_16 = 319,                   /* $@16  */
  YYSYMBOL_cluster_update_directive = 320, /* cluster_update_directive  */
  YYSYMBOL_321_17 = 321,                   /* $@17  */
  YYSYMBOL_cluster_teams_directive = 322,  /* cluster_teams_directive  */
  YYSYMBOL_323_18 = 323,                   /* $@18  */
  YYSYMBOL_cluster_distribute_directive = 324, /* cluster_distribute_directive  */
  YYSYMBOL_325_19 = 325,                   /* $@19  */
  YYSYMBOL_cluster_teams_distribute_directive = 326, /* cluster_teams_distribute_directive  */
  YYSYMBOL_327_20 = 327,                   /* $@20  */
  YYSYMBOL_cluster_teams_master_directive = 328, /* cluster_teams_master_directive  */
  YYSYMBOL_task_async_directive = 329,     /* task_async_directive  */
  YYSYMBOL_330_21 = 330,                   /* $@21  */
  YYSYMBOL_task_directive = 331,           /* task_directive  */
  YYSYMBOL_332_22 = 332,                   /* $@22  */
  YYSYMBOL_taskloop_directive = 333,       /* taskloop_directive  */
  YYSYMBOL_334_23 = 334,                   /* $@23  */
  YYSYMBOL_taskloop_simd_directive = 335,  /* taskloop_simd_directive  */
  YYSYMBOL_336_24 = 336,                   /* $@24  */
  YYSYMBOL_taskyield_directive = 337,      /* taskyield_directive  */
  YYSYMBOL_requires_directive = 338,       /* requires_directive  */
  YYSYMBOL_339_25 = 339,                   /* $@25  */
  YYSYMBOL_target_data_directive = 340,    /* target_data_directive  */
  YYSYMBOL_341_26 = 341,                   /* $@26  */
  YYSYMBOL_target_enter_data_directive = 342, /* target_enter_data_directive  */
  YYSYMBOL_343_27 = 343,                   /* $@27  */
  YYSYMBOL_target_exit_data_directive = 344, /* target_exit_data_directive  */
  YYSYMBOL_345_28 = 345,                   /* $@28  */
  YYSYMBOL_target_directive = 346,         /* target_directive  */
  YYSYMBOL_347_29 = 347,                   /* $@29  */
  YYSYMBOL_target_update_directive = 348,  /* target_update_directive  */
  YYSYMBOL_349_30 = 349,                   /* $@30  */
  YYSYMBOL_declare_target_directive = 350, /* declare_target_directive  */
  YYSYMBOL_351_31 = 351,                   /* $@31  */
  YYSYMBOL_flush_directive = 352,          /* flush_directive  */
  YYSYMBOL_353_32 = 353,                   /* $@32  */
  YYSYMBOL_end_declare_target_directive = 354, /* end_declare_target_directive  */
  YYSYMBOL_master_directive = 355,         /* master_directive  */
  YYSYMBOL_barrier_directive = 356,        /* barrier_directive  */
  YYSYMBOL_taskwait_directive = 357,       /* taskwait_directive  */
  YYSYMBOL_358_33 = 358,                   /* $@33  */
  YYSYMBOL_taskgroup_directive = 359,      /* taskgroup_directive  */
  YYSYMBOL_360_34 = 360,                   /* $@34  */
  YYSYMBOL_critical_directive = 361,       /* critical_directive  */
  YYSYMBOL_362_35 = 362,                   /* $@35  */
  YYSYMBOL_depobj_directive = 363,         /* depobj_directive  */
  YYSYMBOL_364_36 = 364,                   /* $@36  */
  YYSYMBOL_ordered_directive = 365,        /* ordered_directive  */
  YYSYMBOL_366_37 = 366,                   /* $@37  */
  YYSYMBOL_critical_clause_optseq = 367,   /* critical_clause_optseq  */
  YYSYMBOL_depobj_clause_optseq = 368,     /* depobj_clause_optseq  */
  YYSYMBOL_depobj = 369,                   /* depobj  */
  YYSYMBOL_depobj_clause = 370,            /* depobj_clause  */
  YYSYMBOL_destroy_clause = 371,           /* destroy_clause  */
  YYSYMBOL_depobj_update_clause = 372,     /* depobj_update_clause  */
  YYSYMBOL_update_dependence_type = 373,   /* update_dependence_type  */
  YYSYMBOL_critical_name = 374,            /* critical_name  */
  YYSYMBOL_task_clause_optseq = 375,       /* task_clause_optseq  */
  YYSYMBOL_taskloop_clause_optseq = 376,   /* taskloop_clause_optseq  */
  YYSYMBOL_taskloop_simd_clause_optseq = 377, /* taskloop_simd_clause_optseq  */
  YYSYMBOL_requires_clause_optseq = 378,   /* requires_clause_optseq  */
  YYSYMBOL_target_data_clause_optseq = 379, /* target_data_clause_optseq  */
  YYSYMBOL_target_enter_data_clause_optseq = 380, /* target_enter_data_clause_optseq  */
  YYSYMBOL_target_exit_data_clause_optseq = 381, /* target_exit_data_clause_optseq  */
  YYSYMBOL_target_clause_optseq = 382,     /* target_clause_optseq  */
  YYSYMBOL_target_update_clause_optseq = 383, /* target_update_clause_optseq  */
  YYSYMBOL_declare_target_clause_optseq = 384, /* declare_target_clause_optseq  */
  YYSYMBOL_extended_variable = 385,        /* extended_variable  */
  YYSYMBOL_declare_target_extended_list = 386, /* declare_target_extended_list  */
  YYSYMBOL_flush_clause_optseq = 387,      /* flush_clause_optseq  */
  YYSYMBOL_flush_list = 388,               /* flush_list  */
  YYSYMBOL_flush_variable = 389,           /* flush_variable  */
  YYSYMBOL_flush_clause_seq = 390,         /* flush_clause_seq  */
  YYSYMBOL_flush_memory_order_clause = 391, /* flush_memory_order_clause  */
  YYSYMBOL_atomic_directive = 392,         /* atomic_directive  */
  YYSYMBOL_393_38 = 393,                   /* $@38  */
  YYSYMBOL_atomic_clause_optseq = 394,     /* atomic_clause_optseq  */
  YYSYMBOL_atomic_clause_seq = 395,        /* atomic_clause_seq  */
  YYSYMBOL_memory_order_clause_seq = 396,  /* memory_order_clause_seq  */
  YYSYMBOL_memory_order_clause_seq_after = 397, /* memory_order_clause_seq_after  */
  YYSYMBOL_atomic_clause = 398,            /* atomic_clause  */
  YYSYMBOL_memory_order_clause = 399,      /* memory_order_clause  */
  YYSYMBOL_hint_clause = 400,              /* hint_clause  */
  YYSYMBOL_401_39 = 401,                   /* $@39  */
  YYSYMBOL_read_clause = 402,              /* read_clause  */
  YYSYMBOL_write_clause = 403,             /* write_clause  */
  YYSYMBOL_update_clause = 404,            /* update_clause  */
  YYSYMBOL_capture_clause = 405,           /* capture_clause  */
  YYSYMBOL_seq_cst_clause = 406,           /* seq_cst_clause  */
  YYSYMBOL_acq_rel_clause = 407,           /* acq_rel_clause  */
  YYSYMBOL_release_clause = 408,           /* release_clause  */
  YYSYMBOL_acquire_clause = 409,           /* acquire_clause  */
  YYSYMBOL_relaxed_clause = 410,           /* relaxed_clause  */
  YYSYMBOL_taskwait_clause_optseq = 411,   /* taskwait_clause_optseq  */
  YYSYMBOL_taskgroup_clause_optseq = 412,  /* taskgroup_clause_optseq  */
  YYSYMBOL_task_clause_seq = 413,          /* task_clause_seq  */
  YYSYMBOL_taskloop_clause_seq = 414,      /* taskloop_clause_seq  */
  YYSYMBOL_taskloop_simd_clause_seq = 415, /* taskloop_simd_clause_seq  */
  YYSYMBOL_requires_clause_seq = 416,      /* requires_clause_seq  */
  YYSYMBOL_target_data_clause_seq = 417,   /* target_data_clause_seq  */
  YYSYMBOL_target_enter_data_clause_seq = 418, /* target_enter_data_clause_seq  */
  YYSYMBOL_target_exit_data_clause_seq = 419, /* target_exit_data_clause_seq  */
  YYSYMBOL_target_clause_seq = 420,        /* target_clause_seq  */
  YYSYMBOL_target_update_clause_seq = 421, /* target_update_clause_seq  */
  YYSYMBOL_declare_target_seq = 422,       /* declare_target_seq  */
  YYSYMBOL_taskwait_clause_seq = 423,      /* taskwait_clause_seq  */
  YYSYMBOL_taskgroup_clause_seq = 424,     /* taskgroup_clause_seq  */
  YYSYMBOL_task_clause = 425,              /* task_clause  */
  YYSYMBOL_taskloop_clause = 426,          /* taskloop_clause  */
  YYSYMBOL_taskloop_simd_clause = 427,     /* taskloop_simd_clause  */
  YYSYMBOL_requires_clause = 428,          /* requires_clause  */
  YYSYMBOL_target_data_clause = 429,       /* target_data_clause  */
  YYSYMBOL_target_enter_data_clause = 430, /* target_enter_data_clause  */
  YYSYMBOL_target_exit_data_clause = 431,  /* target_exit_data_clause  */
  YYSYMBOL_target_clause = 432,            /* target_clause  */
  YYSYMBOL_target_update_clause = 433,     /* target_update_clause  */
  YYSYMBOL_motion_clause = 434,            /* motion_clause  */
  YYSYMBOL_target_update_other_clause = 435, /* target_update_other_clause  */
  YYSYMBOL_declare_target_clause = 436,    /* declare_target_clause  */
  YYSYMBOL_taskwait_clause = 437,          /* taskwait_clause  */
  YYSYMBOL_taskgroup_clause = 438,         /* taskgroup_clause  */
  YYSYMBOL_final_clause = 439,             /* final_clause  */
  YYSYMBOL_440_40 = 440,                   /* $@40  */
  YYSYMBOL_untied_clause = 441,            /* untied_clause  */
  YYSYMBOL_mergeable_clause = 442,         /* mergeable_clause  */
  YYSYMBOL_in_reduction_clause = 443,      /* in_reduction_clause  */
  YYSYMBOL_in_reduction_identifier = 444,  /* in_reduction_identifier  */
  YYSYMBOL_in_reduction_enum_identifier = 445, /* in_reduction_enum_identifier  */
  YYSYMBOL_depend_with_modifier_clause = 446, /* depend_with_modifier_clause  */
  YYSYMBOL_447_41 = 447,                   /* $@41  */
  YYSYMBOL_depend_parameter = 448,         /* depend_parameter  */
  YYSYMBOL_dependence_type = 449,          /* dependence_type  */
  YYSYMBOL_depend_modifier = 450,          /* depend_modifier  */
  YYSYMBOL_451_42 = 451,                   /* $@42  */
  YYSYMBOL_depend_iterators_definition = 452, /* depend_iterators_definition  */
  YYSYMBOL_depend_iterator_specifier = 453, /* depend_iterator_specifier  */
  YYSYMBOL_454_43 = 454,                   /* $@43  */
  YYSYMBOL_455_44 = 455,                   /* $@44  */
  YYSYMBOL_depend_range_specification = 456, /* depend_range_specification  */
  YYSYMBOL_457_45 = 457,                   /* $@45  */
  YYSYMBOL_458_46 = 458,                   /* $@46  */
  YYSYMBOL_depend_range_step = 459,        /* depend_range_step  */
  YYSYMBOL_depend_enum_type = 460,         /* depend_enum_type  */
  YYSYMBOL_depend_depobj_clause = 461,     /* depend_depobj_clause  */
  YYSYMBOL_462_47 = 462,                   /* $@47  */
  YYSYMBOL_dependence_depobj_parameter = 463, /* dependence_depobj_parameter  */
  YYSYMBOL_dependence_depobj_type = 464,   /* dependence_depobj_type  */
  YYSYMBOL_depend_ordered_clause = 465,    /* depend_ordered_clause  */
  YYSYMBOL_466_48 = 466,                   /* $@48  */
  YYSYMBOL_dependence_ordered_parameter = 467, /* dependence_ordered_parameter  */
  YYSYMBOL_dependence_ordered_type = 468,  /* dependence_ordered_type  */
  YYSYMBOL_469_49 = 469,                   /* $@49  */
  YYSYMBOL_priority_clause = 470,          /* priority_clause  */
  YYSYMBOL_471_50 = 471,                   /* $@50  */
  YYSYMBOL_affinity_clause = 472,          /* affinity_clause  */
  YYSYMBOL_affinity_parameter = 473,       /* affinity_parameter  */
  YYSYMBOL_474_51 = 474,                   /* $@51  */
  YYSYMBOL_affinity_modifier = 475,        /* affinity_modifier  */
  YYSYMBOL_476_52 = 476,                   /* $@52  */
  YYSYMBOL_iterators_definition = 477,     /* iterators_definition  */
  YYSYMBOL_iterator_specifier = 478,       /* iterator_specifier  */
  YYSYMBOL_479_53 = 479,                   /* $@53  */
  YYSYMBOL_480_54 = 480,                   /* $@54  */
  YYSYMBOL_range_specification = 481,      /* range_specification  */
  YYSYMBOL_482_55 = 482,                   /* $@55  */
  YYSYMBOL_483_56 = 483,                   /* $@56  */
  YYSYMBOL_range_step = 484,               /* range_step  */
  YYSYMBOL_detach_clause = 485,            /* detach_clause  */
  YYSYMBOL_486_57 = 486,                   /* $@57  */
  YYSYMBOL_grainsize_clause = 487,         /* grainsize_clause  */
  YYSYMBOL_488_58 = 488,                   /* $@58  */
  YYSYMBOL_num_tasks_clause = 489,         /* num_tasks_clause  */
  YYSYMBOL_490_59 = 490,                   /* $@59  */
  YYSYMBOL_nogroup_clause = 491,           /* nogroup_clause  */
  YYSYMBOL_reverse_offload_clause = 492,   /* reverse_offload_clause  */
  YYSYMBOL_unified_address_clause = 493,   /* unified_address_clause  */
  YYSYMBOL_unified_shared_memory_clause = 494, /* unified_shared_memory_clause  */
  YYSYMBOL_atomic_default_mem_order_clause = 495, /* atomic_default_mem_order_clause  */
  YYSYMBOL_atomic_default_mem_order_parameter = 496, /* atomic_default_mem_order_parameter  */
  YYSYMBOL_dynamic_allocators_clause = 497, /* dynamic_allocators_clause  */
  YYSYMBOL_ext_implementation_defined_requirement_clause = 498, /* ext_implementation_defined_requirement_clause  */
  YYSYMBOL_device_clause = 499,            /* device_clause  */
  YYSYMBOL_device_parameter = 500,         /* device_parameter  */
  YYSYMBOL_501_60 = 501,                   /* $@60  */
  YYSYMBOL_device_modifier_parameter = 502, /* device_modifier_parameter  */
  YYSYMBOL_device_without_modifier_clause = 503, /* device_without_modifier_clause  */
  YYSYMBOL_device_without_modifier_parameter = 504, /* device_without_modifier_parameter  */
  YYSYMBOL_505_61 = 505,                   /* $@61  */
  YYSYMBOL_use_device_ptr_clause = 506,    /* use_device_ptr_clause  */
  YYSYMBOL_507_62 = 507,                   /* $@62  */
  YYSYMBOL_use_device_addr_clause = 508,   /* use_device_addr_clause  */
  YYSYMBOL_509_63 = 509,                   /* $@63  */
  YYSYMBOL_is_device_ptr_clause = 510,     /* is_device_ptr_clause  */
  YYSYMBOL_511_64 = 511,                   /* $@64  */
  YYSYMBOL_has_device_addr_clause = 512,   /* has_device_addr_clause  */
  YYSYMBOL_513_65 = 513,                   /* $@65  */
  YYSYMBOL_defaultmap_clause = 514,        /* defaultmap_clause  */
  YYSYMBOL_515_66 = 515,                   /* $@66  */
  YYSYMBOL_defaultmap_parameter = 516,     /* defaultmap_parameter  */
  YYSYMBOL_defaultmap_behavior = 517,      /* defaultmap_behavior  */
  YYSYMBOL_defaultmap_category = 518,      /* defaultmap_category  */
  YYSYMBOL_uses_allocators_clause = 519,   /* uses_allocators_clause  */
  YYSYMBOL_520_67 = 520,                   /* $@67  */
  YYSYMBOL_uses_allocators_parameter = 521, /* uses_allocators_parameter  */
  YYSYMBOL_allocators_list = 522,          /* allocators_list  */
  YYSYMBOL_allocators_list_parameter_enum = 523, /* allocators_list_parameter_enum  */
  YYSYMBOL_allocators_list_parameter_user = 524, /* allocators_list_parameter_user  */
  YYSYMBOL_to_clause = 525,                /* to_clause  */
  YYSYMBOL_to_parameter = 526,             /* to_parameter  */
  YYSYMBOL_527_68 = 527,                   /* $@68  */
  YYSYMBOL_to_mapper = 528,                /* to_mapper  */
  YYSYMBOL_529_69 = 529,                   /* $@69  */
  YYSYMBOL_from_clause = 530,              /* from_clause  */
  YYSYMBOL_from_parameter = 531,           /* from_parameter  */
  YYSYMBOL_532_70 = 532,                   /* $@70  */
  YYSYMBOL_from_mapper = 533,              /* from_mapper  */
  YYSYMBOL_534_71 = 534,                   /* $@71  */
  YYSYMBOL_link_clause = 535,              /* link_clause  */
  YYSYMBOL_536_72 = 536,                   /* $@72  */
  YYSYMBOL_device_type_clause = 537,       /* device_type_clause  */
  YYSYMBOL_device_type_parameter = 538,    /* device_type_parameter  */
  YYSYMBOL_map_clause = 539,               /* map_clause  */
  YYSYMBOL_540_73 = 540,                   /* $@73  */
  YYSYMBOL_map_parameter = 541,            /* map_parameter  */
  YYSYMBOL_542_74 = 542,                   /* $@74  */
  YYSYMBOL_map_modifier_type = 543,        /* map_modifier_type  */
  YYSYMBOL_map_modifier_parameter1 = 544,  /* map_modifier_parameter1  */
  YYSYMBOL_map_modifier_parameter2 = 545,  /* map_modifier_parameter2  */
  YYSYMBOL_map_modifier1 = 546,            /* map_modifier1  */
  YYSYMBOL_map_modifier2 = 547,            /* map_modifier2  */
  YYSYMBOL_map_modifier3 = 548,            /* map_modifier3  */
  YYSYMBOL_map_type = 549,                 /* map_type  */
  YYSYMBOL_map_modifier_mapper = 550,      /* map_modifier_mapper  */
  YYSYMBOL_task_reduction_clause = 551,    /* task_reduction_clause  */
  YYSYMBOL_task_reduction_identifier = 552, /* task_reduction_identifier  */
  YYSYMBOL_task_reduction_enum_identifier = 553, /* task_reduction_enum_identifier  */
  YYSYMBOL_ordered_clause_optseq = 554,    /* ordered_clause_optseq  */
  YYSYMBOL_ordered_clause_threads_simd_seq = 555, /* ordered_clause_threads_simd_seq  */
  YYSYMBOL_ordered_clause_depend_seq = 556, /* ordered_clause_depend_seq  */
  YYSYMBOL_ordered_clause_depend = 557,    /* ordered_clause_depend  */
  YYSYMBOL_ordered_clause_threads_simd = 558, /* ordered_clause_threads_simd  */
  YYSYMBOL_threads_clause = 559,           /* threads_clause  */
  YYSYMBOL_simd_ordered_clause = 560,      /* simd_ordered_clause  */
  YYSYMBOL_teams_distribute_directive = 561, /* teams_distribute_directive  */
  YYSYMBOL_562_75 = 562,                   /* $@75  */
  YYSYMBOL_teams_distribute_clause_optseq = 563, /* teams_distribute_clause_optseq  */
  YYSYMBOL_teams_distribute_clause_seq = 564, /* teams_distribute_clause_seq  */
  YYSYMBOL_teams_distribute_clause = 565,  /* teams_distribute_clause  */
  YYSYMBOL_teams_distribute_simd_directive = 566, /* teams_distribute_simd_directive  */
  YYSYMBOL_567_76 = 567,                   /* $@76  */
  YYSYMBOL_teams_distribute_simd_clause_optseq = 568, /* teams_distribute_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_simd_clause_seq = 569, /* teams_distribute_simd_clause_seq  */
  YYSYMBOL_teams_distribute_simd_clause = 570, /* teams_distribute_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_for_directive = 571, /* teams_distribute_parallel_for_directive  */
  YYSYMBOL_572_77 = 572,                   /* $@77  */
  YYSYMBOL_teams_distribute_parallel_for_clause_optseq = 573, /* teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_clause_seq = 574, /* teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_clause = 575, /* teams_distribute_parallel_for_clause  */
  YYSYMBOL_teams_distribute_parallel_do_directive = 576, /* teams_distribute_parallel_do_directive  */
  YYSYMBOL_577_78 = 577,                   /* $@78  */
  YYSYMBOL_teams_distribute_parallel_do_clause_optseq = 578, /* teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_clause_seq = 579, /* teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_clause = 580, /* teams_distribute_parallel_do_clause  */
  YYSYMBOL_teams_distribute_parallel_for_simd_directive = 581, /* teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_582_79 = 582,                   /* $@79  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_optseq = 583, /* teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_seq = 584, /* teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause = 585, /* teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_do_simd_directive = 586, /* teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_587_80 = 587,                   /* $@80  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_optseq = 588, /* teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_seq = 589, /* teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause = 590, /* teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_teams_loop_directive = 591,     /* teams_loop_directive  */
  YYSYMBOL_592_81 = 592,                   /* $@81  */
  YYSYMBOL_teams_loop_clause_optseq = 593, /* teams_loop_clause_optseq  */
  YYSYMBOL_teams_loop_clause_seq = 594,    /* teams_loop_clause_seq  */
  YYSYMBOL_teams_loop_clause = 595,        /* teams_loop_clause  */
  YYSYMBOL_target_parallel_directive = 596, /* target_parallel_directive  */
  YYSYMBOL_597_82 = 597,                   /* $@82  */
  YYSYMBOL_target_parallel_clause_optseq = 598, /* target_parallel_clause_optseq  */
  YYSYMBOL_target_parallel_clause_seq = 599, /* target_parallel_clause_seq  */
  YYSYMBOL_target_parallel_clause = 600,   /* target_parallel_clause  */
  YYSYMBOL_target_parallel_for_directive = 601, /* target_parallel_for_directive  */
  YYSYMBOL_602_83 = 602,                   /* $@83  */
  YYSYMBOL_target_parallel_for_clause_optseq = 603, /* target_parallel_for_clause_optseq  */
  YYSYMBOL_target_parallel_for_clause_seq = 604, /* target_parallel_for_clause_seq  */
  YYSYMBOL_target_parallel_for_clause = 605, /* target_parallel_for_clause  */
  YYSYMBOL_target_parallel_do_directive = 606, /* target_parallel_do_directive  */
  YYSYMBOL_607_84 = 607,                   /* $@84  */
  YYSYMBOL_target_parallel_do_clause_optseq = 608, /* target_parallel_do_clause_optseq  */
  YYSYMBOL_target_parallel_do_clause_seq = 609, /* target_parallel_do_clause_seq  */
  YYSYMBOL_target_parallel_do_clause = 610, /* target_parallel_do_clause  */
  YYSYMBOL_target_parallel_for_simd_directive = 611, /* target_parallel_for_simd_directive  */
  YYSYMBOL_612_85 = 612,                   /* $@85  */
  YYSYMBOL_target_parallel_for_simd_clause_optseq = 613, /* target_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_parallel_for_simd_clause_seq = 614, /* target_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_parallel_for_simd_clause = 615, /* target_parallel_for_simd_clause  */
  YYSYMBOL_target_parallel_do_simd_directive = 616, /* target_parallel_do_simd_directive  */
  YYSYMBOL_617_86 = 617,                   /* $@86  */
  YYSYMBOL_target_parallel_do_simd_clause_optseq = 618, /* target_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_parallel_do_simd_clause_seq = 619, /* target_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_parallel_do_simd_clause = 620, /* target_parallel_do_simd_clause  */
  YYSYMBOL_target_parallel_loop_directive = 621, /* target_parallel_loop_directive  */
  YYSYMBOL_622_87 = 622,                   /* $@87  */
  YYSYMBOL_target_parallel_loop_clause_optseq = 623, /* target_parallel_loop_clause_optseq  */
  YYSYMBOL_target_parallel_loop_clause_seq = 624, /* target_parallel_loop_clause_seq  */
  YYSYMBOL_target_parallel_loop_clause = 625, /* target_parallel_loop_clause  */
  YYSYMBOL_target_simd_directive = 626,    /* target_simd_directive  */
  YYSYMBOL_627_88 = 627,                   /* $@88  */
  YYSYMBOL_target_simd_clause_optseq = 628, /* target_simd_clause_optseq  */
  YYSYMBOL_target_simd_clause_seq = 629,   /* target_simd_clause_seq  */
  YYSYMBOL_target_simd_clause = 630,       /* target_simd_clause  */
  YYSYMBOL_target_teams_directive = 631,   /* target_teams_directive  */
  YYSYMBOL_632_89 = 632,                   /* $@89  */
  YYSYMBOL_target_teams_clause_optseq = 633, /* target_teams_clause_optseq  */
  YYSYMBOL_target_teams_clause_seq = 634,  /* target_teams_clause_seq  */
  YYSYMBOL_target_teams_clause = 635,      /* target_teams_clause  */
  YYSYMBOL_target_teams_distribute_directive = 636, /* target_teams_distribute_directive  */
  YYSYMBOL_637_90 = 637,                   /* $@90  */
  YYSYMBOL_target_teams_distribute_clause_optseq = 638, /* target_teams_distribute_clause_optseq  */
  YYSYMBOL_target_teams_distribute_clause_seq = 639, /* target_teams_distribute_clause_seq  */
  YYSYMBOL_target_teams_distribute_clause = 640, /* target_teams_distribute_clause  */
  YYSYMBOL_target_teams_distribute_simd_directive = 641, /* target_teams_distribute_simd_directive  */
  YYSYMBOL_642_91 = 642,                   /* $@91  */
  YYSYMBOL_target_teams_distribute_simd_clause_optseq = 643, /* target_teams_distribute_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_simd_clause_seq = 644, /* target_teams_distribute_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_simd_clause = 645, /* target_teams_distribute_simd_clause  */
  YYSYMBOL_target_teams_loop_directive = 646, /* target_teams_loop_directive  */
  YYSYMBOL_647_92 = 647,                   /* $@92  */
  YYSYMBOL_target_teams_loop_clause_optseq = 648, /* target_teams_loop_clause_optseq  */
  YYSYMBOL_target_teams_loop_clause_seq = 649, /* target_teams_loop_clause_seq  */
  YYSYMBOL_target_teams_loop_clause = 650, /* target_teams_loop_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_directive = 651, /* target_teams_distribute_parallel_for_directive  */
  YYSYMBOL_652_93 = 652,                   /* $@93  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_optseq = 653, /* target_teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_seq = 654, /* target_teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause = 655, /* target_teams_distribute_parallel_for_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_directive = 656, /* target_teams_distribute_parallel_do_directive  */
  YYSYMBOL_657_94 = 657,                   /* $@94  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_optseq = 658, /* target_teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_seq = 659, /* target_teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause = 660, /* target_teams_distribute_parallel_do_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_directive = 661, /* target_teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_662_95 = 662,                   /* $@95  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_optseq = 663, /* target_teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_seq = 664, /* target_teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause = 665, /* target_teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_directive = 666, /* target_teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_667_96 = 667,                   /* $@96  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_optseq = 668, /* target_teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_seq = 669, /* target_teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause = 670, /* target_teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_for_directive = 671,            /* for_directive  */
  YYSYMBOL_672_97 = 672,                   /* $@97  */
  YYSYMBOL_do_directive = 673,             /* do_directive  */
  YYSYMBOL_674_98 = 674,                   /* $@98  */
  YYSYMBOL_do_paired_directive = 675,      /* do_paired_directive  */
  YYSYMBOL_676_99 = 676,                   /* $@99  */
  YYSYMBOL_simd_directive = 677,           /* simd_directive  */
  YYSYMBOL_678_100 = 678,                  /* $@100  */
  YYSYMBOL_for_simd_directive = 679,       /* for_simd_directive  */
  YYSYMBOL_680_101 = 680,                  /* $@101  */
  YYSYMBOL_do_simd_directive = 681,        /* do_simd_directive  */
  YYSYMBOL_682_102 = 682,                  /* $@102  */
  YYSYMBOL_do_simd_paired_directive = 683, /* do_simd_paired_directive  */
  YYSYMBOL_684_103 = 684,                  /* $@103  */
  YYSYMBOL_parallel_for_simd_directive = 685, /* parallel_for_simd_directive  */
  YYSYMBOL_686_104 = 686,                  /* $@104  */
  YYSYMBOL_parallel_do_simd_directive = 687, /* parallel_do_simd_directive  */
  YYSYMBOL_688_105 = 688,                  /* $@105  */
  YYSYMBOL_declare_simd_directive = 689,   /* declare_simd_directive  */
  YYSYMBOL_690_106 = 690,                  /* $@106  */
  YYSYMBOL_declare_simd_fortran_directive = 691, /* declare_simd_fortran_directive  */
  YYSYMBOL_692_107 = 692,                  /* $@107  */
  YYSYMBOL_proc_name = 693,                /* proc_name  */
  YYSYMBOL_distribute_directive = 694,     /* distribute_directive  */
  YYSYMBOL_695_108 = 695,                  /* $@108  */
  YYSYMBOL_distribute_simd_directive = 696, /* distribute_simd_directive  */
  YYSYMBOL_697_109 = 697,                  /* $@109  */
  YYSYMBOL_distribute_parallel_for_directive = 698, /* distribute_parallel_for_directive  */
  YYSYMBOL_699_110 = 699,                  /* $@110  */
  YYSYMBOL_distribute_parallel_do_directive = 700, /* distribute_parallel_do_directive  */
  YYSYMBOL_701_111 = 701,                  /* $@111  */
  YYSYMBOL_distribute_parallel_for_simd_directive = 702, /* distribute_parallel_for_simd_directive  */
  YYSYMBOL_703_112 = 703,                  /* $@112  */
  YYSYMBOL_distribute_parallel_do_simd_directive = 704, /* distribute_parallel_do_simd_directive  */
  YYSYMBOL_705_113 = 705,                  /* $@113  */
  YYSYMBOL_parallel_for_directive = 706,   /* parallel_for_directive  */
  YYSYMBOL_707_114 = 707,                  /* $@114  */
  YYSYMBOL_parallel_do_directive = 708,    /* parallel_do_directive  */
  YYSYMBOL_709_115 = 709,                  /* $@115  */
  YYSYMBOL_parallel_loop_directive = 710,  /* parallel_loop_directive  */
  YYSYMBOL_711_116 = 711,                  /* $@116  */
  YYSYMBOL_parallel_sections_directive = 712, /* parallel_sections_directive  */
  YYSYMBOL_713_117 = 713,                  /* $@117  */
  YYSYMBOL_parallel_workshare_directive = 714, /* parallel_workshare_directive  */
  YYSYMBOL_715_118 = 715,                  /* $@118  */
  YYSYMBOL_parallel_master_directive = 716, /* parallel_master_directive  */
  YYSYMBOL_717_119 = 717,                  /* $@119  */
  YYSYMBOL_master_taskloop_directive = 718, /* master_taskloop_directive  */
  YYSYMBOL_719_120 = 719,                  /* $@120  */
  YYSYMBOL_master_taskloop_simd_directive = 720, /* master_taskloop_simd_directive  */
  YYSYMBOL_721_121 = 721,                  /* $@121  */
  YYSYMBOL_parallel_master_taskloop_directive = 722, /* parallel_master_taskloop_directive  */
  YYSYMBOL_723_122 = 723,                  /* $@122  */
  YYSYMBOL_parallel_master_taskloop_simd_directive = 724, /* parallel_master_taskloop_simd_directive  */
  YYSYMBOL_725_123 = 725,                  /* $@123  */
  YYSYMBOL_loop_directive = 726,           /* loop_directive  */
  YYSYMBOL_727_124 = 727,                  /* $@124  */
  YYSYMBOL_scan_directive = 728,           /* scan_directive  */
  YYSYMBOL_729_125 = 729,                  /* $@125  */
  YYSYMBOL_sections_directive = 730,       /* sections_directive  */
  YYSYMBOL_731_126 = 731,                  /* $@126  */
  YYSYMBOL_sections_paired_directive = 732, /* sections_paired_directive  */
  YYSYMBOL_733_127 = 733,                  /* $@127  */
  YYSYMBOL_section_directive = 734,        /* section_directive  */
  YYSYMBOL_single_directive = 735,         /* single_directive  */
  YYSYMBOL_736_128 = 736,                  /* $@128  */
  YYSYMBOL_single_paired_directive = 737,  /* single_paired_directive  */
  YYSYMBOL_738_129 = 738,                  /* $@129  */
  YYSYMBOL_workshare_directive = 739,      /* workshare_directive  */
  YYSYMBOL_workshare_paired_directive = 740, /* workshare_paired_directive  */
  YYSYMBOL_741_130 = 741,                  /* $@130  */
  YYSYMBOL_cancel_directive = 742,         /* cancel_directive  */
  YYSYMBOL_743_131 = 743,                  /* $@131  */
  YYSYMBOL_cancellation_point_directive = 744, /* cancellation_point_directive  */
  YYSYMBOL_745_132 = 745,                  /* $@132  */
  YYSYMBOL_teams_directive = 746,          /* teams_directive  */
  YYSYMBOL_747_133 = 747,                  /* $@133  */
  YYSYMBOL_allocate_directive = 748,       /* allocate_directive  */
  YYSYMBOL_749_134 = 749,                  /* $@134  */
  YYSYMBOL_allocate_list = 750,            /* allocate_list  */
  YYSYMBOL_directive_variable = 751,       /* directive_variable  */
  YYSYMBOL_directive_varlist = 752,        /* directive_varlist  */
  YYSYMBOL_threadprivate_directive = 753,  /* threadprivate_directive  */
  YYSYMBOL_754_135 = 754,                  /* $@135  */
  YYSYMBOL_threadprivate_variable = 755,   /* threadprivate_variable  */
  YYSYMBOL_threadprivate_list = 756,       /* threadprivate_list  */
  YYSYMBOL_declare_reduction_directive = 757, /* declare_reduction_directive  */
  YYSYMBOL_758_136 = 758,                  /* $@136  */
  YYSYMBOL_reduction_list = 759,           /* reduction_list  */
  YYSYMBOL_reduction_identifiers = 760,    /* reduction_identifiers  */
  YYSYMBOL_typername_variable = 761,       /* typername_variable  */
  YYSYMBOL_typername_list = 762,           /* typername_list  */
  YYSYMBOL_combiner = 763,                 /* combiner  */
  YYSYMBOL_declare_mapper_directive = 764, /* declare_mapper_directive  */
  YYSYMBOL_765_137 = 765,                  /* $@137  */
  YYSYMBOL_mapper_list = 766,              /* mapper_list  */
  YYSYMBOL_mapper_identifier_optseq = 767, /* mapper_identifier_optseq  */
  YYSYMBOL_mapper_identifier = 768,        /* mapper_identifier  */
  YYSYMBOL_type_var = 769,                 /* type_var  */
  YYSYMBOL_parallel_clause_optseq = 770,   /* parallel_clause_optseq  */
  YYSYMBOL_cluster_clause_optseq = 771,    /* cluster_clause_optseq  */
  YYSYMBOL_cluster_data_clause_optseq = 772, /* cluster_data_clause_optseq  */
  YYSYMBOL_cluster_update_clause_optseq = 773, /* cluster_update_clause_optseq  */
  YYSYMBOL_cluster_teams_clause_optseq = 774, /* cluster_teams_clause_optseq  */
  YYSYMBOL_cluster_distribute_clause_optseq = 775, /* cluster_distribute_clause_optseq  */
  YYSYMBOL_cluster_teams_distribute_clause_optseq = 776, /* cluster_teams_distribute_clause_optseq  */
  YYSYMBOL_task_async_clause_optseq = 777, /* task_async_clause_optseq  */
  YYSYMBOL_teams_clause_optseq = 778,      /* teams_clause_optseq  */
  YYSYMBOL_for_clause_optseq = 779,        /* for_clause_optseq  */
  YYSYMBOL_do_clause_optseq = 780,         /* do_clause_optseq  */
  YYSYMBOL_do_paried_clause_optseq = 781,  /* do_paried_clause_optseq  */
  YYSYMBOL_simd_clause_optseq = 782,       /* simd_clause_optseq  */
  YYSYMBOL_for_simd_clause_optseq = 783,   /* for_simd_clause_optseq  */
  YYSYMBOL_do_simd_clause_optseq = 784,    /* do_simd_clause_optseq  */
  YYSYMBOL_do_simd_paried_clause_optseq = 785, /* do_simd_paried_clause_optseq  */
  YYSYMBOL_parallel_for_simd_clause_optseq = 786, /* parallel_for_simd_clause_optseq  */
  YYSYMBOL_declare_simd_clause_optseq = 787, /* declare_simd_clause_optseq  */
  YYSYMBOL_distribute_clause_optseq = 788, /* distribute_clause_optseq  */
  YYSYMBOL_distribute_simd_clause_optseq = 789, /* distribute_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_clause_optseq = 790, /* distribute_parallel_for_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_clause_optseq = 791, /* distribute_parallel_do_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_optseq = 792, /* distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_optseq = 793, /* distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_parallel_for_clause_optseq = 794, /* parallel_for_clause_optseq  */
  YYSYMBOL_parallel_do_clause_optseq = 795, /* parallel_do_clause_optseq  */
  YYSYMBOL_parallel_loop_clause_optseq = 796, /* parallel_loop_clause_optseq  */
  YYSYMBOL_parallel_sections_clause_optseq = 797, /* parallel_sections_clause_optseq  */
  YYSYMBOL_parallel_workshare_clause_optseq = 798, /* parallel_workshare_clause_optseq  */
  YYSYMBOL_parallel_master_clause_optseq = 799, /* parallel_master_clause_optseq  */
  YYSYMBOL_master_taskloop_clause_optseq = 800, /* master_taskloop_clause_optseq  */
  YYSYMBOL_master_taskloop_simd_clause_optseq = 801, /* master_taskloop_simd_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_clause_optseq = 802, /* parallel_master_taskloop_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_optseq = 803, /* parallel_master_taskloop_simd_clause_optseq  */
  YYSYMBOL_loop_clause_optseq = 804,       /* loop_clause_optseq  */
  YYSYMBOL_scan_clause_optseq = 805,       /* scan_clause_optseq  */
  YYSYMBOL_sections_clause_optseq = 806,   /* sections_clause_optseq  */
  YYSYMBOL_sections_paired_clause_optseq = 807, /* sections_paired_clause_optseq  */
  YYSYMBOL_single_clause_optseq = 808,     /* single_clause_optseq  */
  YYSYMBOL_single_paired_clause_optseq = 809, /* single_paired_clause_optseq  */
  YYSYMBOL_workshare_paired_clause_optseq = 810, /* workshare_paired_clause_optseq  */
  YYSYMBOL_cancel_clause_optseq = 811,     /* cancel_clause_optseq  */
  YYSYMBOL_cancellation_point_clause_optseq = 812, /* cancellation_point_clause_optseq  */
  YYSYMBOL_allocate_clause_optseq = 813,   /* allocate_clause_optseq  */
  YYSYMBOL_allocate_clause_seq = 814,      /* allocate_clause_seq  */
  YYSYMBOL_declare_reduction_clause_optseq = 815, /* declare_reduction_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_optseq = 816, /* declare_mapper_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_seq = 817, /* declare_mapper_clause_seq  */
  YYSYMBOL_parallel_clause_seq = 818,      /* parallel_clause_seq  */
  YYSYMBOL_cluster_clause_seq = 819,       /* cluster_clause_seq  */
  YYSYMBOL_cluster_data_clause_seq = 820,  /* cluster_data_clause_seq  */
  YYSYMBOL_cluster_update_clause_seq = 821, /* cluster_update_clause_seq  */
  YYSYMBOL_cluster_teams_clause_seq = 822, /* cluster_teams_clause_seq  */
  YYSYMBOL_cluster_distribute_clause_seq = 823, /* cluster_distribute_clause_seq  */
  YYSYMBOL_cluster_teams_distribute_clause_seq = 824, /* cluster_teams_distribute_clause_seq  */
  YYSYMBOL_task_async_clause_seq = 825,    /* task_async_clause_seq  */
  YYSYMBOL_teams_clause_seq = 826,         /* teams_clause_seq  */
  YYSYMBOL_for_clause_seq = 827,           /* for_clause_seq  */
  YYSYMBOL_do_clause_seq = 828,            /* do_clause_seq  */
  YYSYMBOL_simd_clause_seq = 829,          /* simd_clause_seq  */
  YYSYMBOL_for_simd_clause_seq = 830,      /* for_simd_clause_seq  */
  YYSYMBOL_do_simd_clause_seq = 831,       /* do_simd_clause_seq  */
  YYSYMBOL_parallel_for_simd_clause_seq = 832, /* parallel_for_simd_clause_seq  */
  YYSYMBOL_declare_simd_clause_seq = 833,  /* declare_simd_clause_seq  */
  YYSYMBOL_distribute_clause_seq = 834,    /* distribute_clause_seq  */
  YYSYMBOL_distribute_simd_clause_seq = 835, /* distribute_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_for_clause_seq = 836, /* distribute_parallel_for_clause_seq  */
  YYSYMBOL_distribute_parallel_do_clause_seq = 837, /* distribute_parallel_do_clause_seq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_seq = 838, /* distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_seq = 839, /* distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_parallel_for_clause_seq = 840,  /* parallel_for_clause_seq  */
  YYSYMBOL_parallel_do_clause_seq = 841,   /* parallel_do_clause_seq  */
  YYSYMBOL_parallel_loop_clause_seq = 842, /* parallel_loop_clause_seq  */
  YYSYMBOL_parallel_sections_clause_seq = 843, /* parallel_sections_clause_seq  */
  YYSYMBOL_parallel_workshare_clause_seq = 844, /* parallel_workshare_clause_seq  */
  YYSYMBOL_parallel_master_clause_seq = 845, /* parallel_master_clause_seq  */
  YYSYMBOL_master_taskloop_clause_seq = 846, /* master_taskloop_clause_seq  */
  YYSYMBOL_master_taskloop_simd_clause_seq = 847, /* master_taskloop_simd_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_clause_seq = 848, /* parallel_master_taskloop_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_seq = 849, /* parallel_master_taskloop_simd_clause_seq  */
  YYSYMBOL_loop_clause_seq = 850,          /* loop_clause_seq  */
  YYSYMBOL_scan_clause_seq = 851,          /* scan_clause_seq  */
  YYSYMBOL_sections_clause_seq = 852,      /* sections_clause_seq  */
  YYSYMBOL_single_clause_seq = 853,        /* single_clause_seq  */
  YYSYMBOL_single_paired_clause_seq = 854, /* single_paired_clause_seq  */
  YYSYMBOL_cancel_clause_seq = 855,        /* cancel_clause_seq  */
  YYSYMBOL_cancellation_point_clause_seq = 856, /* cancellation_point_clause_seq  */
  YYSYMBOL_allocate_directive_clause = 857, /* allocate_directive_clause  */
  YYSYMBOL_declare_reduction_clause_seq = 858, /* declare_reduction_clause_seq  */
  YYSYMBOL_declare_mapper_clause = 859,    /* declare_mapper_clause  */
  YYSYMBOL_parallel_clause = 860,          /* parallel_clause  */
  YYSYMBOL_cluster_clause = 861,           /* cluster_clause  */
  YYSYMBOL_862_138 = 862,                  /* $@138  */
  YYSYMBOL_cluster_data_clause = 863,      /* cluster_data_clause  */
  YYSYMBOL_cluster_update_clause = 864,    /* cluster_update_clause  */
  YYSYMBOL_cluster_teams_clause = 865,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 866, /* cluster_distribute_clause  */
  YYSYMBOL_cluster_teams_distribute_clause = 867, /* cluster_teams_distribute_clause  */
  YYSYMBOL_task_async_clause = 868,        /* task_async_clause  */
  YYSYMBOL_869_139 = 869,                  /* $@139  */
  YYSYMBOL_dependance_type = 870,          /* dependance_type  */
  YYSYMBOL_teams_clause = 871,             /* teams_clause  */
  YYSYMBOL_for_clause = 872,               /* for_clause  */
  YYSYMBOL_do_clause = 873,                /* do_clause  */
  YYSYMBOL_simd_clause = 874,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 875,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 876,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 877, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 878,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 879,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 880,   /* distribute_simd_clause  */
  YYSYMBOL_distribute_parallel_for_clause = 881, /* distribute_parallel_for_clause  */
  YYSYMBOL_distribute_parallel_do_clause = 882, /* distribute_parallel_do_clause  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 883, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 884, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_parallel_for_clause = 885,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 886,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 887,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 888, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 889, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 890,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 891,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 892, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 893, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 894, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 895,              /* loop_clause  */
  YYSYMBOL_scan_clause = 896,              /* scan_clause  */
  YYSYMBOL_sections_clause = 897,          /* sections_clause  */
  YYSYMBOL_single_clause = 898,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 899,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 900,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 901,       /* if_parallel_clause  */
  YYSYMBOL_if_parallel_parameter = 902,    /* if_parallel_parameter  */
  YYSYMBOL_903_140 = 903,                  /* $@140  */
  YYSYMBOL_if_task_clause = 904,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 905,        /* if_task_parameter  */
  YYSYMBOL_906_141 = 906,                  /* $@141  */
  YYSYMBOL_if_taskloop_clause = 907,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 908,    /* if_taskloop_parameter  */
  YYSYMBOL_909_142 = 909,                  /* $@142  */
  YYSYMBOL_if_target_data_clause = 910,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 911, /* if_target_data_parameter  */
  YYSYMBOL_912_143 = 912,                  /* $@143  */
  YYSYMBOL_if_target_parallel_clause = 913, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 914, /* if_target_parallel_parameter  */
  YYSYMBOL_915_144 = 915,                  /* $@144  */
  YYSYMBOL_916_145 = 916,                  /* $@145  */
  YYSYMBOL_if_target_simd_clause = 917,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 918, /* if_target_simd_parameter  */
  YYSYMBOL_919_146 = 919,                  /* $@146  */
  YYSYMBOL_920_147 = 920,                  /* $@147  */
  YYSYMBOL_if_target_enter_data_clause = 921, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 922, /* if_target_enter_data_parameter  */
  YYSYMBOL_923_148 = 923,                  /* $@148  */
  YYSYMBOL_if_target_exit_data_clause = 924, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 925, /* if_target_exit_data_parameter  */
  YYSYMBOL_926_149 = 926,                  /* $@149  */
  YYSYMBOL_if_target_clause = 927,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 928,      /* if_target_parameter  */
  YYSYMBOL_929_150 = 929,                  /* $@150  */
  YYSYMBOL_if_target_update_clause = 930,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 931, /* if_target_update_parameter  */
  YYSYMBOL_932_151 = 932,                  /* $@151  */
  YYSYMBOL_if_taskloop_simd_clause = 933,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 934, /* if_taskloop_simd_parameter  */
  YYSYMBOL_935_152 = 935,                  /* $@152  */
  YYSYMBOL_936_153 = 936,                  /* $@153  */
  YYSYMBOL_if_simd_clause = 937,           /* if_simd_clause  */
  YYSYMBOL_if_simd_parameter = 938,        /* if_simd_parameter  */
  YYSYMBOL_939_154 = 939,                  /* $@154  */
  YYSYMBOL_if_parallel_simd_clause = 940,  /* if_parallel_simd_clause  */
  YYSYMBOL_if_parallel_simd_parameter = 941, /* if_parallel_simd_parameter  */
  YYSYMBOL_942_155 = 942,                  /* $@155  */
  YYSYMBOL_943_156 = 943,                  /* $@156  */
  YYSYMBOL_if_target_parallel_simd_clause = 944, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 945, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_946_157 = 946,                  /* $@157  */
  YYSYMBOL_947_158 = 947,                  /* $@158  */
  YYSYMBOL_948_159 = 948,                  /* $@159  */
  YYSYMBOL_if_cancel_clause = 949,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 950,      /* if_cancel_parameter  */
  YYSYMBOL_951_160 = 951,                  /* $@160  */
  YYSYMBOL_if_parallel_taskloop_clause = 952, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 953, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_954_161 = 954,                  /* $@161  */
  YYSYMBOL_955_162 = 955,                  /* $@162  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 956, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 957, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_958_163 = 958,                  /* $@163  */
  YYSYMBOL_959_164 = 959,                  /* $@164  */
  YYSYMBOL_960_165 = 960,                  /* $@165  */
  YYSYMBOL_num_threads_clause = 961,       /* num_threads_clause  */
  YYSYMBOL_962_166 = 962,                  /* $@166  */
  YYSYMBOL_num_teams_clause = 963,         /* num_teams_clause  */
  YYSYMBOL_964_167 = 964,                  /* $@167  */
  YYSYMBOL_align_clause = 965,             /* align_clause  */
  YYSYMBOL_966_168 = 966,                  /* $@168  */
  YYSYMBOL_thread_limit_clause = 967,      /* thread_limit_clause  */
  YYSYMBOL_968_169 = 968,                  /* $@169  */
  YYSYMBOL_copyin_clause = 969,            /* copyin_clause  */
  YYSYMBOL_970_170 = 970,                  /* $@170  */
  YYSYMBOL_default_clause = 971,           /* default_clause  */
  YYSYMBOL_default_parameter = 972,        /* default_parameter  */
  YYSYMBOL_default_variant_clause = 973,   /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 974, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 975,         /* proc_bind_clause  */
  YYSYMBOL_proc_bind_parameter = 976,      /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 977,              /* bind_clause  */
  YYSYMBOL_bind_parameter = 978,           /* bind_parameter  */
  YYSYMBOL_allocate_clause = 979,          /* allocate_clause  */
  YYSYMBOL_allocate_parameter = 980,       /* allocate_parameter  */
  YYSYMBOL_981_171 = 981,                  /* $@171  */
  YYSYMBOL_982_172 = 982,                  /* $@172  */
  YYSYMBOL_allocator_parameter = 983,      /* allocator_parameter  */
  YYSYMBOL_private_clause = 984,           /* private_clause  */
  YYSYMBOL_985_173 = 985,                  /* $@173  */
  YYSYMBOL_alloc_clause = 986,             /* alloc_clause  */
  YYSYMBOL_987_174 = 987,                  /* $@174  */
  YYSYMBOL_broad_clause = 988,             /* broad_clause  */
  YYSYMBOL_989_175 = 989,                  /* $@175  */
  YYSYMBOL_scatter_clause = 990,           /* scatter_clause  */
  YYSYMBOL_991_176 = 991,                  /* $@176  */
  YYSYMBOL_halo_clause = 992,              /* halo_clause  */
  YYSYMBOL_993_177 = 993,                  /* $@177  */
  YYSYMBOL_gather_clause = 994,            /* gather_clause  */
  YYSYMBOL_995_178 = 995,                  /* $@178  */
  YYSYMBOL_allgather_clause = 996,         /* allgather_clause  */
  YYSYMBOL_997_179 = 997,                  /* $@179  */
  YYSYMBOL_allreduction_clause = 998,      /* allreduction_clause  */
  YYSYMBOL_999_180 = 999,                  /* $@180  */
  YYSYMBOL_firstprivate_clause = 1000,     /* firstprivate_clause  */
  YYSYMBOL_1001_181 = 1001,                /* $@181  */
  YYSYMBOL_copyprivate_clause = 1002,      /* copyprivate_clause  */
  YYSYMBOL_1003_182 = 1003,                /* $@182  */
  YYSYMBOL_fortran_copyprivate_clause = 1004, /* fortran_copyprivate_clause  */
  YYSYMBOL_1005_183 = 1005,                /* $@183  */
  YYSYMBOL_lastprivate_clause = 1006,      /* lastprivate_clause  */
  YYSYMBOL_lastprivate_parameter = 1007,   /* lastprivate_parameter  */
  YYSYMBOL_1008_184 = 1008,                /* $@184  */
  YYSYMBOL_1009_185 = 1009,                /* $@185  */
  YYSYMBOL_lastprivate_distribute_clause = 1010, /* lastprivate_distribute_clause  */
  YYSYMBOL_1011_186 = 1011,                /* $@186  */
  YYSYMBOL_lastprivate_modifier = 1012,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1013,           /* linear_clause  */
  YYSYMBOL_1014_187 = 1014,                /* $@187  */
  YYSYMBOL_linear_parameter = 1015,        /* linear_parameter  */
  YYSYMBOL_1016_188 = 1016,                /* $@188  */
  YYSYMBOL_linear_modifier = 1017,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1018,          /* aligned_clause  */
  YYSYMBOL_1019_189 = 1019,                /* $@189  */
  YYSYMBOL_aligned_parameter = 1020,       /* aligned_parameter  */
  YYSYMBOL_1021_190 = 1021,                /* $@190  */
  YYSYMBOL_initializer_clause = 1022,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1023,        /* initializer_expr  */
  YYSYMBOL_expr = 1024,                    /* expr  */
  YYSYMBOL_safelen_clause = 1025,          /* safelen_clause  */
  YYSYMBOL_1026_191 = 1026,                /* $@191  */
  YYSYMBOL_simdlen_clause = 1027,          /* simdlen_clause  */
  YYSYMBOL_1028_192 = 1028,                /* $@192  */
  YYSYMBOL_nontemporal_clause = 1029,      /* nontemporal_clause  */
  YYSYMBOL_1030_193 = 1030,                /* $@193  */
  YYSYMBOL_collapse_clause = 1031,         /* collapse_clause  */
  YYSYMBOL_1032_194 = 1032,                /* $@194  */
  YYSYMBOL_ordered_clause = 1033,          /* ordered_clause  */
  YYSYMBOL_1034_195 = 1034,                /* $@195  */
  YYSYMBOL_fortran_nowait_clause = 1035,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1036,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1037,            /* order_clause  */
  YYSYMBOL_order_parameter = 1038,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1039,          /* uniform_clause  */
  YYSYMBOL_1040_196 = 1040,                /* $@196  */
  YYSYMBOL_inbranch_clause = 1041,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1042,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1043,        /* inclusive_clause  */
  YYSYMBOL_1044_197 = 1044,                /* $@197  */
  YYSYMBOL_exclusive_clause = 1045,        /* exclusive_clause  */
  YYSYMBOL_1046_198 = 1046,                /* $@198  */
  YYSYMBOL_allocator_clause = 1047,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1048,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1049,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1050, /* dist_schedule_parameter  */
  YYSYMBOL_1051_199 = 1051,                /* $@199  */
  YYSYMBOL_schedule_clause = 1052,         /* schedule_clause  */
  YYSYMBOL_1053_200 = 1053,                /* $@200  */
  YYSYMBOL_schedule_parameter = 1054,      /* schedule_parameter  */
  YYSYMBOL_schedule_kind = 1055,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1056,       /* schedule_modifier  */
  YYSYMBOL_schedule_modifier2 = 1057,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1058,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1059,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1060,           /* shared_clause  */
  YYSYMBOL_1061_201 = 1061,                /* $@201  */
  YYSYMBOL_reduction_clause = 1062,        /* reduction_clause  */
  YYSYMBOL_1063_202 = 1063,                /* $@202  */
  YYSYMBOL_reduction_parameter = 1064,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1065,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1066,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1067, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1068, /* reduction_default_only_clause  */
  YYSYMBOL_1069_203 = 1069,                /* $@203  */
  YYSYMBOL_reduction_default_only_parameter = 1070, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1071 /* reduction_default_only_modifier  */
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
         || (defined OPENMP_LTYPE_IS_TRIVIAL && OPENMP_LTYPE_IS_TRIVIAL \
             && defined OPENMP_STYPE_IS_TRIVIAL && OPENMP_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  193
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  815
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2476
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3109

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   494


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   246,   253,     2,
     249,   250,   244,   242,   247,   243,     2,   245,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   248,     2,
     236,   238,   237,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   251,   254,   252,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   239,   240,   241,   256
};

#if OPENMP_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   104,   119,   120,   123,   124,   127,   128,
     131,   137,   138,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   178,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   314,   314,
     317,   320,   320,   324,   325,   328,   329,   330,   333,   334,
     337,   337,   337,   337,   340,   341,   344,   345,   346,   349,
     349,   349,   352,   353,   354,   355,   358,   359,   360,   363,
     364,   365,   366,   369,   369,   372,   373,   374,   377,   380,
     381,   382,   383,   384,   385,   388,   391,   394,   395,   396,
     397,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   414,   417,   418,   418,   421,   424,   425,
     425,   428,   428,   432,   432,   435,   436,   439,   440,   441,
     444,   447,   447,   452,   452,   455,   455,   458,   461,   464,
     464,   467,   467,   470,   470,   474,   473,   482,   481,   489,
     492,   492,   497,   497,   499,   499,   501,   501,   503,   505,
     505,   507,   507,   509,   509,   511,   511,   513,   513,   515,
     515,   517,   517,   519,   519,   522,   524,   526,   528,   528,
     530,   530,   532,   532,   534,   534,   536,   536,   538,   539,
     540,   541,   543,   545,   548,   549,   550,   552,   555,   557,
     558,   559,   560,   561,   562,   563,   566,   568,   569,   571,
     572,   574,   575,   577,   579,   581,   582,   584,   585,   587,
     588,   590,   592,   593,   594,   597,   599,   600,   602,   603,
     604,   606,   607,   609,   611,   612,   614,   615,   616,   619,
     619,   621,   622,   623,   624,   625,   626,   627,   628,   631,
     632,   635,   636,   637,   638,   639,   641,   642,   643,   644,
     645,   646,   647,   649,   650,   651,   652,   655,   656,   657,
     658,   659,   662,   662,   665,   667,   669,   671,   674,   676,
     678,   680,   682,   685,   686,   688,   689,   692,   693,   694,
     696,   697,   698,   700,   701,   702,   704,   705,   706,   709,
     710,   711,   713,   714,   715,   717,   718,   719,   721,   722,
     723,   725,   726,   727,   729,   730,   731,   733,   734,   735,
     737,   738,   739,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,   769,
     770,   771,   772,   773,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   799,   800,   801,
     802,   803,   804,   806,   807,   808,   809,   810,   812,   813,
     814,   815,   816,   818,   819,   820,   821,   822,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   839,   840,   842,   843,   845,   846,   847,   848,
     850,   851,   852,   854,   856,   857,   859,   859,   861,   863,
     865,   867,   868,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   883,   883,   886,   887,   889,   891,   891,
     893,   894,   896,   896,   897,   897,   899,   899,   899,   901,
     902,   904,   905,   906,   907,   908,   911,   911,   914,   916,
     917,   918,   919,   921,   921,   924,   926,   927,   927,   930,
     930,   933,   935,   936,   936,   937,   940,   940,   942,   943,
     945,   945,   946,   946,   948,   948,   948,   951,   952,   955,
     955,   957,   957,   959,   959,   961,   963,   965,   967,   969,
     971,   972,   973,   975,   977,   979,   981,   982,   982,   983,
     986,   987,   990,   992,   993,   993,   996,   996,   999,   999,
    1001,  1001,  1005,  1005,  1008,  1008,  1010,  1011,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1022,  1023,  1024,  1025,  1027,
    1027,  1028,  1029,  1032,  1033,  1034,  1035,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1047,  1049,  1050,  1051,  1051,
    1052,  1054,  1054,  1057,  1058,  1059,  1059,  1060,  1062,  1062,
    1064,  1064,  1067,  1069,  1070,  1071,  1074,  1074,  1076,  1077,
    1077,  1078,  1080,  1081,  1082,  1083,  1084,  1086,  1087,  1088,
    1089,  1091,  1092,  1095,  1096,  1097,  1099,  1100,  1101,  1103,
    1104,  1105,  1107,  1108,  1109,  1110,  1111,  1112,  1114,  1117,
    1119,  1120,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1134,  1135,  1136,  1138,  1139,  1140,  1142,  1143,
    1144,  1146,  1148,  1149,  1151,  1153,  1155,  1155,  1162,  1163,
    1165,  1166,  1167,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1182,  1181,  1188,  1189,  1191,  1192,
    1193,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,
    1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1215,
    1214,  1222,  1223,  1225,  1226,  1227,  1229,  1230,  1231,  1232,
    1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,
    1243,  1244,  1245,  1246,  1247,  1248,  1251,  1250,  1258,  1259,
    1261,  1262,  1263,  1265,  1266,  1267,  1268,  1269,  1270,  1271,
    1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,  1281,
    1282,  1283,  1284,  1287,  1286,  1294,  1295,  1297,  1298,  1299,
    1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,
    1321,  1322,  1323,  1324,  1327,  1326,  1334,  1335,  1337,  1338,
    1339,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,
    1360,  1361,  1362,  1363,  1364,  1366,  1366,  1368,  1369,  1371,
    1372,  1373,  1375,  1376,  1377,  1378,  1379,  1380,  1381,  1382,
    1383,  1384,  1385,  1386,  1388,  1388,  1390,  1391,  1393,  1394,
    1395,  1397,  1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,
    1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,  1417,
    1417,  1419,  1420,  1422,  1423,  1424,  1426,  1427,  1428,  1429,
    1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,  1439,
    1440,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,
    1450,  1452,  1452,  1454,  1455,  1457,  1458,  1459,  1461,  1462,
    1463,  1464,  1465,  1466,  1467,  1468,  1469,  1470,  1471,  1472,
    1473,  1474,  1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,
    1483,  1484,  1485,  1487,  1487,  1489,  1490,  1492,  1493,  1494,
    1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,
    1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,
    1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1525,  1525,
    1527,  1528,  1530,  1531,  1532,  1534,  1535,  1536,  1537,  1538,
    1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,  1547,  1548,
    1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,
    1559,  1560,  1561,  1563,  1563,  1565,  1566,  1568,  1569,  1570,
    1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,  1580,  1581,
    1582,  1583,  1584,  1585,  1586,  1587,  1588,  1589,  1590,  1591,
    1592,  1593,  1595,  1595,  1597,  1598,  1600,  1601,  1602,  1604,
    1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,  1614,
    1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,  1623,  1624,
    1626,  1626,  1628,  1629,  1631,  1632,  1633,  1635,  1636,  1637,
    1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1651,  1653,  1653,  1655,  1656,  1658,  1659,
    1660,  1662,  1663,  1664,  1665,  1666,  1667,  1668,  1669,  1670,
    1671,  1672,  1673,  1674,  1675,  1676,  1677,  1678,  1679,  1680,
    1681,  1683,  1683,  1685,  1686,  1688,  1689,  1690,  1692,  1693,
    1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,
    1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,
    1714,  1715,  1716,  1717,  1719,  1719,  1721,  1722,  1724,  1725,
    1726,  1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,
    1737,  1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,
    1747,  1748,  1750,  1750,  1752,  1753,  1755,  1756,  1757,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1787,  1787,  1789,  1790,
    1792,  1793,  1794,  1796,  1797,  1798,  1799,  1800,  1801,  1802,
    1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1811,  1812,
    1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,  1822,
    1824,  1824,  1826,  1827,  1829,  1830,  1831,  1833,  1834,  1835,
    1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,
    1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,  1855,
    1856,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1865,  1865,
    1867,  1868,  1870,  1871,  1872,  1874,  1875,  1876,  1877,  1878,
    1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,  1888,
    1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,  1897,  1898,
    1899,  1900,  1901,  1902,  1903,  1904,  1908,  1908,  1910,  1910,
    1912,  1912,  1914,  1914,  1916,  1916,  1918,  1918,  1920,  1920,
    1923,  1922,  1930,  1930,  1932,  1932,  1934,  1934,  1936,  1937,
    1939,  1939,  1941,  1941,  1943,  1943,  1945,  1945,  1947,  1947,
    1949,  1949,  1951,  1951,  1953,  1953,  1955,  1955,  1957,  1957,
    1959,  1959,  1961,  1961,  1963,  1963,  1967,  1967,  1971,  1971,
    1975,  1975,  1979,  1979,  1981,  1981,  1983,  1983,  1985,  1985,
    1987,  1989,  1989,  1991,  1991,  1993,  1995,  1995,  1997,  1997,
    2004,  2004,  2011,  2011,  2014,  2014,  2016,  2019,  2021,  2022,
    2025,  2025,  2027,  2029,  2030,  2033,  2033,  2036,  2039,  2040,
    2041,  2042,  2043,  2044,  2045,  2046,  2049,  2051,  2052,  2054,
    2057,  2057,  2060,  2063,  2064,  2067,  2068,  2071,  2074,  2075,
    2078,  2079,  2082,  2086,  2089,  2090,  2093,  2094,  2097,  2098,
    2101,  2102,  2105,  2106,  2109,  2110,  2112,  2113,  2115,  2116,
    2118,  2119,  2121,  2122,  2124,  2125,  2127,  2128,  2130,  2131,
    2133,  2134,  2136,  2137,  2139,  2140,  2142,  2143,  2145,  2146,
    2148,  2149,  2151,  2152,  2154,  2155,  2157,  2158,  2160,  2161,
    2163,  2164,  2166,  2167,  2169,  2170,  2172,  2173,  2175,  2176,
    2178,  2179,  2181,  2182,  2184,  2185,  2187,  2189,  2190,  2192,
    2193,  2195,  2196,  2198,  2199,  2201,  2202,  2204,  2205,  2210,
    2211,  2216,  2217,  2219,  2220,  2221,  2226,  2227,  2229,  2230,
    2232,  2233,  2234,  2236,  2237,  2238,  2241,  2242,  2243,  2246,
    2247,  2248,  2251,  2252,  2253,  2256,  2257,  2258,  2261,  2262,
    2263,  2266,  2267,  2268,  2271,  2272,  2273,  2276,  2277,  2278,
    2281,  2282,  2283,  2286,  2287,  2288,  2291,  2292,  2293,  2296,
    2297,  2298,  2300,  2301,  2302,  2304,  2305,  2306,  2308,  2309,
    2310,  2312,  2313,  2314,  2316,  2317,  2318,  2320,  2321,  2322,
    2324,  2325,  2326,  2328,  2329,  2330,  2332,  2333,  2334,  2336,
    2337,  2338,  2340,  2341,  2342,  2344,  2345,  2346,  2348,  2349,
    2350,  2352,  2353,  2354,  2356,  2357,  2358,  2360,  2361,  2362,
    2364,  2365,  2366,  2368,  2369,  2370,  2372,  2373,  2374,  2376,
    2377,  2378,  2380,  2382,  2383,  2384,  2390,  2391,  2392,  2394,
    2395,  2396,  2398,  2399,  2400,  2406,  2410,  2411,  2413,  2415,
    2417,  2418,  2419,  2420,  2421,  2422,  2423,  2424,  2425,  2426,
    2429,  2430,  2431,  2432,  2433,  2434,  2435,  2435,  2436,  2437,
    2440,  2441,  2442,  2443,  2444,  2445,  2446,  2447,  2449,  2450,
    2451,  2452,  2453,  2454,  2455,  2456,  2459,  2460,  2461,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,  2478,  2479,  2480,  2481,  2482,  2483,  2486,
    2487,  2488,  2489,  2490,  2491,  2492,  2493,  2494,  2495,  2496,
    2497,  2498,  2499,  2500,  2501,  2502,  2503,  2504,  2505,  2506,
    2509,  2509,  2512,  2513,  2517,  2518,  2519,  2520,  2521,  2522,
    2523,  2524,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,
    2535,  2536,  2537,  2540,  2541,  2542,  2543,  2544,  2545,  2546,
    2547,  2548,  2549,  2552,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2560,  2561,  2562,  2565,  2566,  2567,  2568,  2569,  2570,
    2571,  2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,
    2582,  2583,  2584,  2585,  2586,  2587,  2588,  2589,  2590,  2591,
    2592,  2593,  2594,  2595,  2596,  2598,  2599,  2600,  2601,  2602,
    2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,  2611,  2612,
    2613,  2614,  2615,  2616,  2617,  2620,  2621,  2622,  2623,  2624,
    2625,  2628,  2629,  2630,  2631,  2632,  2633,  2635,  2636,  2637,
    2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,
    2648,  2650,  2651,  2652,  2653,  2654,  2655,  2656,  2657,  2658,
    2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,  2669,
    2670,  2671,  2672,  2673,  2674,  2675,  2676,  2677,  2678,  2679,
    2680,  2681,  2682,  2683,  2684,  2685,  2687,  2688,  2689,  2690,
    2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,  2699,  2700,
    2701,  2702,  2703,  2704,  2705,  2706,  2707,  2708,  2710,  2711,
    2712,  2713,  2714,  2715,  2716,  2717,  2718,  2719,  2720,  2721,
    2722,  2723,  2724,  2725,  2726,  2727,  2728,  2729,  2730,  2732,
    2733,  2734,  2735,  2736,  2737,  2738,  2739,  2740,  2741,  2742,
    2743,  2744,  2745,  2746,  2747,  2748,  2750,  2751,  2752,  2753,
    2754,  2755,  2756,  2757,  2758,  2759,  2760,  2761,  2762,  2763,
    2764,  2765,  2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,
    2775,  2776,  2777,  2778,  2779,  2780,  2782,  2783,  2784,  2785,
    2786,  2787,  2788,  2789,  2790,  2791,  2792,  2794,  2795,  2796,
    2797,  2798,  2799,  2800,  2801,  2802,  2803,  2805,  2806,  2807,
    2808,  2809,  2810,  2811,  2812,  2813,  2814,  2816,  2817,  2818,
    2819,  2820,  2821,  2822,  2823,  2824,  2825,  2826,  2827,  2828,
    2829,  2830,  2831,  2832,  2834,  2835,  2836,  2837,  2838,  2839,
    2840,  2841,  2842,  2843,  2844,  2845,  2846,  2847,  2848,  2849,
    2850,  2851,  2852,  2853,  2854,  2855,  2856,  2858,  2859,  2860,
    2861,  2862,  2863,  2864,  2865,  2866,  2867,  2868,  2869,  2870,
    2871,  2872,  2873,  2874,  2875,  2876,  2877,  2879,  2880,  2881,
    2882,  2883,  2884,  2885,  2886,  2887,  2888,  2889,  2890,  2891,
    2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,  2900,  2901,
    2902,  2903,  2904,  2906,  2907,  2908,  2909,  2910,  2911,  2913,
    2914,  2916,  2917,  2918,  2919,  2920,  2921,  2923,  2924,  2925,
    2926,  2927,  2929,  2930,  2932,  2933,  2934,  2935,  2936,  2943,
    2946,  2946,  2948,  2950,  2953,  2953,  2954,  2956,  2959,  2959,
    2960,  2962,  2965,  2965,  2966,  2968,  2971,  2971,  2972,  2972,
    2973,  2975,  2978,  2978,  2979,  2979,  2980,  2982,  2985,  2985,
    2986,  2988,  2991,  2991,  2992,  2994,  2997,  2997,  2998,  3000,
    3003,  3003,  3004,  3006,  3009,  3009,  3010,  3010,  3011,  3013,
    3015,  3015,  3016,  3018,  3020,  3020,  3021,  3021,  3022,  3024,
    3026,  3026,  3027,  3027,  3028,  3028,  3029,  3031,  3033,  3033,
    3034,  3036,  3038,  3038,  3039,  3039,  3040,  3042,  3044,  3044,
    3045,  3045,  3046,  3046,  3047,  3058,  3058,  3061,  3061,  3064,
    3064,  3068,  3068,  3070,  3070,  3074,  3077,  3078,  3079,  3080,
    3083,  3086,  3089,  3091,  3092,  3093,  3095,  3097,  3098,  3099,
    3101,  3103,  3104,  3104,  3105,  3105,  3107,  3108,  3109,  3110,
    3111,  3112,  3113,  3114,  3115,  3118,  3118,  3121,  3121,  3123,
    3123,  3125,  3125,  3127,  3127,  3129,  3129,  3131,  3131,  3133,
    3133,  3135,  3135,  3138,  3138,  3140,  3140,  3142,  3144,  3145,
    3145,  3146,  3146,  3149,  3149,  3151,  3154,  3155,  3155,  3158,
    3159,  3159,  3160,  3162,  3163,  3164,  3167,  3168,  3168,  3172,
    3173,  3173,  3176,  3178,  3180,  3182,  3182,  3185,  3185,  3188,
    3188,  3191,  3191,  3194,  3194,  3195,  3197,  3199,  3201,  3204,
    3207,  3207,  3210,  3213,  3215,  3215,  3217,  3217,  3219,  3220,
    3221,  3222,  3223,  3224,  3225,  3226,  3227,  3228,  3231,  3239,
    3240,  3240,  3242,  3242,  3246,  3247,  3251,  3252,  3255,  3256,
    3259,  3260,  3261,  3263,  3264,  3265,  3268,  3269,  3270,  3271,
    3272,  3274,  3274,  3277,  3277,  3281,  3282,  3285,  3286,  3289,
    3290,  3291,  3294,  3295,  3296,  3297,  3298,  3299,  3300,  3301,
    3302,  3303,  3306,  3306,  3310,  3311,  3314
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
  "\"end of file\"", "error", "\"invalid token\"", "OMP", "PARALLEL",
  "FOR", "DO", "DECLARE", "DISTRIBUTE", "LOOP", "SCAN", "SECTIONS",
  "SECTION", "SINGLE", "CANCEL", "TASKGROUP", "CANCELLATION", "POINT",
  "THREAD", "VARIANT", "THREADPRIVATE", "METADIRECTIVE", "MAPPER", "IF",
  "NUM_THREADS", "DEFAULT", "PRIVATE", "FIRSTPRIVATE", "SHARED", "COPYIN",
  "REDUCTION", "PROC_BIND", "ALLOCATE", "SIMD", "TASK", "LASTPRIVATE",
  "WHEN", "MATCH", "LINEAR", "SCHEDULE", "COLLAPSE", "NOWAIT", "ORDER",
  "ORDERED", "MODIFIER_CONDITIONAL", "MODIFIER_MONOTONIC",
  "MODIFIER_NONMONOTONIC", "STATIC", "DYNAMIC", "GUIDED", "AUTO",
  "RUNTIME", "MODOFIER_VAL", "MODOFIER_REF", "MODOFIER_UVAL",
  "MODIFIER_SIMD", "SAFELEN", "SIMDLEN", "ALIGNED", "ALIGN", "NONTEMPORAL",
  "UNIFORM", "INBRANCH", "NOTINBRANCH", "DIST_SCHEDULE", "BIND",
  "INCLUSIVE", "EXCLUSIVE", "COPYPRIVATE", "ALLOCATOR", "INITIALIZER",
  "OMP_PRIV", "IDENTIFIER_DEFAULT", "WORKSHARE", "NONE", "MASTER", "CLOSE",
  "SPREAD", "MODIFIER_INSCAN", "MODIFIER_TASK", "MODIFIER_DEFAULT", "PLUS",
  "MINUS", "STAR", "BITAND", "BITOR", "BITXOR", "LOGAND", "LOGOR", "EQV",
  "NEQV", "MAX", "MIN", "DEFAULT_MEM_ALLOC", "LARGE_CAP_MEM_ALLOC",
  "CONST_MEM_ALLOC", "HIGH_BW_MEM_ALLOC", "LOW_LAT_MEM_ALLOC",
  "CGROUP_MEM_ALLOC", "PTEAM_MEM_ALLOC", "THREAD_MEM_ALLOC", "TEAMS",
  "NUM_TEAMS", "THREAD_LIMIT", "END", "USER", "CONSTRUCT", "DEVICE",
  "IMPLEMENTATION", "CONDITION", "SCORE", "VENDOR", "KIND", "HOST",
  "NOHOST", "ANY", "CPU", "GPU", "FPGA", "ISA", "ARCH", "EXTENSION", "AMD",
  "ARM", "BSC", "CRAY", "FUJITSU", "GNU", "IBM", "INTEL", "LLVM", "PGI",
  "TI", "UNKNOWN", "FINAL", "UNTIED", "MERGEABLE", "IN_REDUCTION",
  "DEPEND", "PRIORITY", "AFFINITY", "DETACH", "MODIFIER_ITERATOR",
  "DEPOBJ", "FINAL_CLAUSE", "IN", "INOUT", "MUTEXINOUTSET", "OUT",
  "TASKLOOP", "GRAINSIZE", "NUM_TASKS", "NOGROUP", "TASKYIELD", "REQUIRES",
  "REVERSE_OFFLOAD", "UNIFIED_ADDRESS", "UNIFIED_SHARED_MEMORY",
  "ATOMIC_DEFAULT_MEM_ORDER", "DYNAMIC_ALLOCATORS", "SEQ_CST", "ACQ_REL",
  "RELAXED", "USE_DEVICE_PTR", "USE_DEVICE_ADDR", "TARGET", "DATA",
  "ENTER", "EXIT", "ANCESTOR", "DEVICE_NUM", "IS_DEVICE_PTR",
  "HAS_DEVICE_ADDR", "DEFAULTMAP", "BEHAVIOR_ALLOC", "BEHAVIOR_TO",
  "BEHAVIOR_FROM", "BEHAVIOR_TOFROM", "BEHAVIOR_FIRSTPRIVATE",
  "BEHAVIOR_NONE", "BEHAVIOR_DEFAULT", "CATEGORY_SCALAR",
  "CATEGORY_AGGREGATE", "CATEGORY_POINTER", "CATEGORY_ALLOCATABLE",
  "UPDATE", "TO", "FROM", "TO_MAPPER", "FROM_MAPPER", "USES_ALLOCATORS",
  "LINK", "DEVICE_TYPE", "MAP", "MAP_MODIFIER_ALWAYS",
  "MAP_MODIFIER_CLOSE", "MAP_MODIFIER_MAPPER", "MAP_TYPE_TO",
  "MAP_TYPE_FROM", "MAP_TYPE_TOFROM", "MAP_TYPE_ALLOC", "MAP_TYPE_RELEASE",
  "MAP_TYPE_DELETE", "EXT_", "BARRIER", "TASKWAIT", "FLUSH", "RELEASE",
  "ACQUIRE", "ATOMIC", "READ", "WRITE", "CAPTURE", "HINT", "CRITICAL",
  "SOURCE", "SINK", "DESTROY", "THREADS", "CONCURRENT", "CLUSTER", "ALLOC",
  "BROAD", "SCATTER", "GATHER", "ALLGATHER", "ALLREDUCTION", "CHUNK",
  "HALO", "TASK_ASYNC", "ICONSTANT", "EXPRESSION", "ID_EXPRESSION",
  "EXPR_STRING", "VAR_STRING", "TASK_REDUCTION", "'<'", "'>'", "'='",
  "\"!=\"", "\"<=\"", "\">=\"", "'+'", "'-'", "'*'", "'/'", "'%'", "','",
  "':'", "'('", "')'", "'{'", "'}'", "'&'", "'|'", "'^'", "\",\"",
  "$accept", "expression", "variable", "var_list", "var_list_broad",
  "var_list_reduction", "var_chunk", "var_chunk_list", "openmp_directive",
  "variant_directive", "fortran_paired_directive", "end_directive", "$@1",
  "end_clause_seq", "metadirective_directive", "$@2",
  "metadirective_clause_optseq", "metadirective_clause_seq",
  "metadirective_clause", "when_clause", "$@3", "$@4", "$@5",
  "when_variant_directive", "context_selector_specification",
  "trait_set_selector", "$@6", "$@7", "trait_set_selector_name",
  "trait_selector_list", "trait_selector", "condition_selector", "$@8",
  "device_selector", "context_kind", "context_kind_name", "context_isa",
  "context_arch", "implementation_selector", "context_vendor_name",
  "construct_selector", "parallel_selector", "$@9",
  "parallel_selector_parameter", "trait_score", "$@10",
  "declare_variant_directive", "$@11", "variant_func_id", "$@12",
  "declare_variant_clause_optseq", "declare_variant_clause_seq",
  "declare_variant_clause", "match_clause", "$@13", "parallel_directive",
  "$@14", "cluster_directive", "$@15", "declare_cluster_directive",
  "end_declare_cluster_directive", "cluster_data_directive", "$@16",
  "cluster_update_directive", "$@17", "cluster_teams_directive", "$@18",
  "cluster_distribute_directive", "$@19",
  "cluster_teams_distribute_directive", "$@20",
  "cluster_teams_master_directive", "task_async_directive", "$@21",
  "task_directive", "$@22", "taskloop_directive", "$@23",
  "taskloop_simd_directive", "$@24", "taskyield_directive",
  "requires_directive", "$@25", "target_data_directive", "$@26",
  "target_enter_data_directive", "$@27", "target_exit_data_directive",
  "$@28", "target_directive", "$@29", "target_update_directive", "$@30",
  "declare_target_directive", "$@31", "flush_directive", "$@32",
  "end_declare_target_directive", "master_directive", "barrier_directive",
  "taskwait_directive", "$@33", "taskgroup_directive", "$@34",
  "critical_directive", "$@35", "depobj_directive", "$@36",
  "ordered_directive", "$@37", "critical_clause_optseq",
  "depobj_clause_optseq", "depobj", "depobj_clause", "destroy_clause",
  "depobj_update_clause", "update_dependence_type", "critical_name",
  "task_clause_optseq", "taskloop_clause_optseq",
  "taskloop_simd_clause_optseq", "requires_clause_optseq",
  "target_data_clause_optseq", "target_enter_data_clause_optseq",
  "target_exit_data_clause_optseq", "target_clause_optseq",
  "target_update_clause_optseq", "declare_target_clause_optseq",
  "extended_variable", "declare_target_extended_list",
  "flush_clause_optseq", "flush_list", "flush_variable",
  "flush_clause_seq", "flush_memory_order_clause", "atomic_directive",
  "$@38", "atomic_clause_optseq", "atomic_clause_seq",
  "memory_order_clause_seq", "memory_order_clause_seq_after",
  "atomic_clause", "memory_order_clause", "hint_clause", "$@39",
  "read_clause", "write_clause", "update_clause", "capture_clause",
  "seq_cst_clause", "acq_rel_clause", "release_clause", "acquire_clause",
  "relaxed_clause", "taskwait_clause_optseq", "taskgroup_clause_optseq",
  "task_clause_seq", "taskloop_clause_seq", "taskloop_simd_clause_seq",
  "requires_clause_seq", "target_data_clause_seq",
  "target_enter_data_clause_seq", "target_exit_data_clause_seq",
  "target_clause_seq", "target_update_clause_seq", "declare_target_seq",
  "taskwait_clause_seq", "taskgroup_clause_seq", "task_clause",
  "taskloop_clause", "taskloop_simd_clause", "requires_clause",
  "target_data_clause", "target_enter_data_clause",
  "target_exit_data_clause", "target_clause", "target_update_clause",
  "motion_clause", "target_update_other_clause", "declare_target_clause",
  "taskwait_clause", "taskgroup_clause", "final_clause", "$@40",
  "untied_clause", "mergeable_clause", "in_reduction_clause",
  "in_reduction_identifier", "in_reduction_enum_identifier",
  "depend_with_modifier_clause", "$@41", "depend_parameter",
  "dependence_type", "depend_modifier", "$@42",
  "depend_iterators_definition", "depend_iterator_specifier", "$@43",
  "$@44", "depend_range_specification", "$@45", "$@46",
  "depend_range_step", "depend_enum_type", "depend_depobj_clause", "$@47",
  "dependence_depobj_parameter", "dependence_depobj_type",
  "depend_ordered_clause", "$@48", "dependence_ordered_parameter",
  "dependence_ordered_type", "$@49", "priority_clause", "$@50",
  "affinity_clause", "affinity_parameter", "$@51", "affinity_modifier",
  "$@52", "iterators_definition", "iterator_specifier", "$@53", "$@54",
  "range_specification", "$@55", "$@56", "range_step", "detach_clause",
  "$@57", "grainsize_clause", "$@58", "num_tasks_clause", "$@59",
  "nogroup_clause", "reverse_offload_clause", "unified_address_clause",
  "unified_shared_memory_clause", "atomic_default_mem_order_clause",
  "atomic_default_mem_order_parameter", "dynamic_allocators_clause",
  "ext_implementation_defined_requirement_clause", "device_clause",
  "device_parameter", "$@60", "device_modifier_parameter",
  "device_without_modifier_clause", "device_without_modifier_parameter",
  "$@61", "use_device_ptr_clause", "$@62", "use_device_addr_clause",
  "$@63", "is_device_ptr_clause", "$@64", "has_device_addr_clause", "$@65",
  "defaultmap_clause", "$@66", "defaultmap_parameter",
  "defaultmap_behavior", "defaultmap_category", "uses_allocators_clause",
  "$@67", "uses_allocators_parameter", "allocators_list",
  "allocators_list_parameter_enum", "allocators_list_parameter_user",
  "to_clause", "to_parameter", "$@68", "to_mapper", "$@69", "from_clause",
  "from_parameter", "$@70", "from_mapper", "$@71", "link_clause", "$@72",
  "device_type_clause", "device_type_parameter", "map_clause", "$@73",
  "map_parameter", "$@74", "map_modifier_type", "map_modifier_parameter1",
  "map_modifier_parameter2", "map_modifier1", "map_modifier2",
  "map_modifier3", "map_type", "map_modifier_mapper",
  "task_reduction_clause", "task_reduction_identifier",
  "task_reduction_enum_identifier", "ordered_clause_optseq",
  "ordered_clause_threads_simd_seq", "ordered_clause_depend_seq",
  "ordered_clause_depend", "ordered_clause_threads_simd", "threads_clause",
  "simd_ordered_clause", "teams_distribute_directive", "$@75",
  "teams_distribute_clause_optseq", "teams_distribute_clause_seq",
  "teams_distribute_clause", "teams_distribute_simd_directive", "$@76",
  "teams_distribute_simd_clause_optseq",
  "teams_distribute_simd_clause_seq", "teams_distribute_simd_clause",
  "teams_distribute_parallel_for_directive", "$@77",
  "teams_distribute_parallel_for_clause_optseq",
  "teams_distribute_parallel_for_clause_seq",
  "teams_distribute_parallel_for_clause",
  "teams_distribute_parallel_do_directive", "$@78",
  "teams_distribute_parallel_do_clause_optseq",
  "teams_distribute_parallel_do_clause_seq",
  "teams_distribute_parallel_do_clause",
  "teams_distribute_parallel_for_simd_directive", "$@79",
  "teams_distribute_parallel_for_simd_clause_optseq",
  "teams_distribute_parallel_for_simd_clause_seq",
  "teams_distribute_parallel_for_simd_clause",
  "teams_distribute_parallel_do_simd_directive", "$@80",
  "teams_distribute_parallel_do_simd_clause_optseq",
  "teams_distribute_parallel_do_simd_clause_seq",
  "teams_distribute_parallel_do_simd_clause", "teams_loop_directive",
  "$@81", "teams_loop_clause_optseq", "teams_loop_clause_seq",
  "teams_loop_clause", "target_parallel_directive", "$@82",
  "target_parallel_clause_optseq", "target_parallel_clause_seq",
  "target_parallel_clause", "target_parallel_for_directive", "$@83",
  "target_parallel_for_clause_optseq", "target_parallel_for_clause_seq",
  "target_parallel_for_clause", "target_parallel_do_directive", "$@84",
  "target_parallel_do_clause_optseq", "target_parallel_do_clause_seq",
  "target_parallel_do_clause", "target_parallel_for_simd_directive",
  "$@85", "target_parallel_for_simd_clause_optseq",
  "target_parallel_for_simd_clause_seq", "target_parallel_for_simd_clause",
  "target_parallel_do_simd_directive", "$@86",
  "target_parallel_do_simd_clause_optseq",
  "target_parallel_do_simd_clause_seq", "target_parallel_do_simd_clause",
  "target_parallel_loop_directive", "$@87",
  "target_parallel_loop_clause_optseq", "target_parallel_loop_clause_seq",
  "target_parallel_loop_clause", "target_simd_directive", "$@88",
  "target_simd_clause_optseq", "target_simd_clause_seq",
  "target_simd_clause", "target_teams_directive", "$@89",
  "target_teams_clause_optseq", "target_teams_clause_seq",
  "target_teams_clause", "target_teams_distribute_directive", "$@90",
  "target_teams_distribute_clause_optseq",
  "target_teams_distribute_clause_seq", "target_teams_distribute_clause",
  "target_teams_distribute_simd_directive", "$@91",
  "target_teams_distribute_simd_clause_optseq",
  "target_teams_distribute_simd_clause_seq",
  "target_teams_distribute_simd_clause", "target_teams_loop_directive",
  "$@92", "target_teams_loop_clause_optseq",
  "target_teams_loop_clause_seq", "target_teams_loop_clause",
  "target_teams_distribute_parallel_for_directive", "$@93",
  "target_teams_distribute_parallel_for_clause_optseq",
  "target_teams_distribute_parallel_for_clause_seq",
  "target_teams_distribute_parallel_for_clause",
  "target_teams_distribute_parallel_do_directive", "$@94",
  "target_teams_distribute_parallel_do_clause_optseq",
  "target_teams_distribute_parallel_do_clause_seq",
  "target_teams_distribute_parallel_do_clause",
  "target_teams_distribute_parallel_for_simd_directive", "$@95",
  "target_teams_distribute_parallel_for_simd_clause_optseq",
  "target_teams_distribute_parallel_for_simd_clause_seq",
  "target_teams_distribute_parallel_for_simd_clause",
  "target_teams_distribute_parallel_do_simd_directive", "$@96",
  "target_teams_distribute_parallel_do_simd_clause_optseq",
  "target_teams_distribute_parallel_do_simd_clause_seq",
  "target_teams_distribute_parallel_do_simd_clause", "for_directive",
  "$@97", "do_directive", "$@98", "do_paired_directive", "$@99",
  "simd_directive", "$@100", "for_simd_directive", "$@101",
  "do_simd_directive", "$@102", "do_simd_paired_directive", "$@103",
  "parallel_for_simd_directive", "$@104", "parallel_do_simd_directive",
  "$@105", "declare_simd_directive", "$@106",
  "declare_simd_fortran_directive", "$@107", "proc_name",
  "distribute_directive", "$@108", "distribute_simd_directive", "$@109",
  "distribute_parallel_for_directive", "$@110",
  "distribute_parallel_do_directive", "$@111",
  "distribute_parallel_for_simd_directive", "$@112",
  "distribute_parallel_do_simd_directive", "$@113",
  "parallel_for_directive", "$@114", "parallel_do_directive", "$@115",
  "parallel_loop_directive", "$@116", "parallel_sections_directive",
  "$@117", "parallel_workshare_directive", "$@118",
  "parallel_master_directive", "$@119", "master_taskloop_directive",
  "$@120", "master_taskloop_simd_directive", "$@121",
  "parallel_master_taskloop_directive", "$@122",
  "parallel_master_taskloop_simd_directive", "$@123", "loop_directive",
  "$@124", "scan_directive", "$@125", "sections_directive", "$@126",
  "sections_paired_directive", "$@127", "section_directive",
  "single_directive", "$@128", "single_paired_directive", "$@129",
  "workshare_directive", "workshare_paired_directive", "$@130",
  "cancel_directive", "$@131", "cancellation_point_directive", "$@132",
  "teams_directive", "$@133", "allocate_directive", "$@134",
  "allocate_list", "directive_variable", "directive_varlist",
  "threadprivate_directive", "$@135", "threadprivate_variable",
  "threadprivate_list", "declare_reduction_directive", "$@136",
  "reduction_list", "reduction_identifiers", "typername_variable",
  "typername_list", "combiner", "declare_mapper_directive", "$@137",
  "mapper_list", "mapper_identifier_optseq", "mapper_identifier",
  "type_var", "parallel_clause_optseq", "cluster_clause_optseq",
  "cluster_data_clause_optseq", "cluster_update_clause_optseq",
  "cluster_teams_clause_optseq", "cluster_distribute_clause_optseq",
  "cluster_teams_distribute_clause_optseq", "task_async_clause_optseq",
  "teams_clause_optseq", "for_clause_optseq", "do_clause_optseq",
  "do_paried_clause_optseq", "simd_clause_optseq",
  "for_simd_clause_optseq", "do_simd_clause_optseq",
  "do_simd_paried_clause_optseq", "parallel_for_simd_clause_optseq",
  "declare_simd_clause_optseq", "distribute_clause_optseq",
  "distribute_simd_clause_optseq", "distribute_parallel_for_clause_optseq",
  "distribute_parallel_do_clause_optseq",
  "distribute_parallel_for_simd_clause_optseq",
  "distribute_parallel_do_simd_clause_optseq",
  "parallel_for_clause_optseq", "parallel_do_clause_optseq",
  "parallel_loop_clause_optseq", "parallel_sections_clause_optseq",
  "parallel_workshare_clause_optseq", "parallel_master_clause_optseq",
  "master_taskloop_clause_optseq", "master_taskloop_simd_clause_optseq",
  "parallel_master_taskloop_clause_optseq",
  "parallel_master_taskloop_simd_clause_optseq", "loop_clause_optseq",
  "scan_clause_optseq", "sections_clause_optseq",
  "sections_paired_clause_optseq", "single_clause_optseq",
  "single_paired_clause_optseq", "workshare_paired_clause_optseq",
  "cancel_clause_optseq", "cancellation_point_clause_optseq",
  "allocate_clause_optseq", "allocate_clause_seq",
  "declare_reduction_clause_optseq", "declare_mapper_clause_optseq",
  "declare_mapper_clause_seq", "parallel_clause_seq", "cluster_clause_seq",
  "cluster_data_clause_seq", "cluster_update_clause_seq",
  "cluster_teams_clause_seq", "cluster_distribute_clause_seq",
  "cluster_teams_distribute_clause_seq", "task_async_clause_seq",
  "teams_clause_seq", "for_clause_seq", "do_clause_seq", "simd_clause_seq",
  "for_simd_clause_seq", "do_simd_clause_seq",
  "parallel_for_simd_clause_seq", "declare_simd_clause_seq",
  "distribute_clause_seq", "distribute_simd_clause_seq",
  "distribute_parallel_for_clause_seq",
  "distribute_parallel_do_clause_seq",
  "distribute_parallel_for_simd_clause_seq",
  "distribute_parallel_do_simd_clause_seq", "parallel_for_clause_seq",
  "parallel_do_clause_seq", "parallel_loop_clause_seq",
  "parallel_sections_clause_seq", "parallel_workshare_clause_seq",
  "parallel_master_clause_seq", "master_taskloop_clause_seq",
  "master_taskloop_simd_clause_seq", "parallel_master_taskloop_clause_seq",
  "parallel_master_taskloop_simd_clause_seq", "loop_clause_seq",
  "scan_clause_seq", "sections_clause_seq", "single_clause_seq",
  "single_paired_clause_seq", "cancel_clause_seq",
  "cancellation_point_clause_seq", "allocate_directive_clause",
  "declare_reduction_clause_seq", "declare_mapper_clause",
  "parallel_clause", "cluster_clause", "$@138", "cluster_data_clause",
  "cluster_update_clause", "cluster_teams_clause",
  "cluster_distribute_clause", "cluster_teams_distribute_clause",
  "task_async_clause", "$@139", "dependance_type", "teams_clause",
  "for_clause", "do_clause", "simd_clause", "for_simd_clause",
  "do_simd_clause", "parallel_for_simd_clause", "declare_simd_clause",
  "distribute_clause", "distribute_simd_clause",
  "distribute_parallel_for_clause", "distribute_parallel_do_clause",
  "distribute_parallel_for_simd_clause",
  "distribute_parallel_do_simd_clause", "parallel_for_clause",
  "parallel_do_clause", "parallel_loop_clause", "parallel_sections_clause",
  "parallel_workshare_clause", "parallel_master_clause",
  "master_taskloop_clause", "master_taskloop_simd_clause",
  "parallel_master_taskloop_clause",
  "parallel_master_taskloop_simd_clause", "loop_clause", "scan_clause",
  "sections_clause", "single_clause", "single_paired_clause",
  "construct_type_clause", "if_parallel_clause", "if_parallel_parameter",
  "$@140", "if_task_clause", "if_task_parameter", "$@141",
  "if_taskloop_clause", "if_taskloop_parameter", "$@142",
  "if_target_data_clause", "if_target_data_parameter", "$@143",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@144",
  "$@145", "if_target_simd_clause", "if_target_simd_parameter", "$@146",
  "$@147", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@148", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@149", "if_target_clause", "if_target_parameter", "$@150",
  "if_target_update_clause", "if_target_update_parameter", "$@151",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@152",
  "$@153", "if_simd_clause", "if_simd_parameter", "$@154",
  "if_parallel_simd_clause", "if_parallel_simd_parameter", "$@155",
  "$@156", "if_target_parallel_simd_clause",
  "if_target_parallel_simd_parameter", "$@157", "$@158", "$@159",
  "if_cancel_clause", "if_cancel_parameter", "$@160",
  "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter", "$@161",
  "$@162", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@163", "$@164", "$@165",
  "num_threads_clause", "$@166", "num_teams_clause", "$@167",
  "align_clause", "$@168", "thread_limit_clause", "$@169", "copyin_clause",
  "$@170", "default_clause", "default_parameter", "default_variant_clause",
  "default_variant_directive", "proc_bind_clause", "proc_bind_parameter",
  "bind_clause", "bind_parameter", "allocate_clause", "allocate_parameter",
  "$@171", "$@172", "allocator_parameter", "private_clause", "$@173",
  "alloc_clause", "$@174", "broad_clause", "$@175", "scatter_clause",
  "$@176", "halo_clause", "$@177", "gather_clause", "$@178",
  "allgather_clause", "$@179", "allreduction_clause", "$@180",
  "firstprivate_clause", "$@181", "copyprivate_clause", "$@182",
  "fortran_copyprivate_clause", "$@183", "lastprivate_clause",
  "lastprivate_parameter", "$@184", "$@185",
  "lastprivate_distribute_clause", "$@186", "lastprivate_modifier",
  "linear_clause", "$@187", "linear_parameter", "$@188", "linear_modifier",
  "aligned_clause", "$@189", "aligned_parameter", "$@190",
  "initializer_clause", "initializer_expr", "expr", "safelen_clause",
  "$@191", "simdlen_clause", "$@192", "nontemporal_clause", "$@193",
  "collapse_clause", "$@194", "ordered_clause", "$@195",
  "fortran_nowait_clause", "nowait_clause", "order_clause",
  "order_parameter", "uniform_clause", "$@196", "inbranch_clause",
  "notinbranch_clause", "inclusive_clause", "$@197", "exclusive_clause",
  "$@198", "allocator_clause", "allocator1_parameter",
  "dist_schedule_clause", "dist_schedule_parameter", "$@199",
  "schedule_clause", "$@200", "schedule_parameter", "schedule_kind",
  "schedule_modifier", "schedule_modifier2", "schedule_enum_modifier",
  "schedule_enum_kind", "shared_clause", "$@201", "reduction_clause",
  "$@202", "reduction_parameter", "reduction_identifier",
  "reduction_modifier", "reduction_enum_identifier",
  "reduction_default_only_clause", "$@203",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2585)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2431)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3771,   887,   172,   250,   741,   532, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,   288, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   170,   427,   406, -2585,   398, -2585, -2585,  1038, -2585,
   -2585, -2585, -2585, -2585,   722, -2585,   461, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   471,   510, -2585, -2585, -2585,   399,  3856, -2585,
    3053, -2585,  3160, -2585, -2585, -2585,   320, -2585, -2585,   479,
   -2585,  1153,  1653,   539,  2146,  1143,  1428,   199, -2585,   335,
     583,   350,  2178,  2289,   227,   581,   535, -2585,  2107,   220,
    4109,   378, -2585,  3576,  1138,   742, -2585,   912, -2585,   466,
     470, -2585,  3223,   590,   600,   950,   490, -2585,   163, -2585,
   -2585,  1307,   605, -2585, -2585,  6268, -2585,  6794,  3631,  3018,
    3856,   725,  3856,   520, -2585,   526, -2585, -2585, -2585, -2585,
   -2585,   560,   575, -2585,   981, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  3662,   592,   599, -2585,
   -2585, -2585,   640,   646, -2585,   787, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5031, -2585,
     884, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   648,   652,   663,   919,   676,   606,   800,   821,
    3799, -2585,   697, -2585,   727, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,   714, -2585,   381, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   291, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   298, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   133,   721, -2585,   235,
   -2585, -2585, -2585,  1428,   628,   737, -2585, -2585,   167, -2585,
   -2585, -2585,   768,   379,   765, -2585, -2585,   771, -2585, -2585,
     156, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,   783, -2585, -2585, -2585,   786, -2585, -2585,
     792, -2585, -2585,  2459, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   178,   196, -2585, -2585, -2585, -2585,
   -2585,  6500,   788, -2585,  3393,  3372, -2585, -2585, -2585,  1345,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   856,   925,   591, -2585, -2585, -2585,   966,   424, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   804, -2585,  7017,   797, -2585, -2585, -2585, -2585,  1856,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   816, -2585,   834, -2585,   860, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1039,  1044, -2585,  6947,  4433,   596, -2585,
    4348,   144, -2585, -2585,  1622,   830,   839, -2585, -2585, -2585,
   -2585, -2585, -2585,  1621, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     224, -2585, -2585, -2585, -2585, -2585,   865, -2585, -2585,   878,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1064,   209,  1442,
   -2585, -2585, -2585, -2585, -2585,   896, -2585,  1153, -2585, -2585,
    4348,   766,   766, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   557, -2585,   900, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   286, -2585,  7701, -2585,  1586, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  7701, -2585,  1741,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1377, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,   484, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   218,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  5480, -2585,   550, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   160,   917,   831,   918,
     924,   929,   934,   941,  1467,   395,  3856, -2585, -2585,  1990,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,   162,   236,   947,
     949,   886,   951,  3053, -2585, -2585,  1526, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  3160, -2585,   928,  1178,    89,  1472, -2585,
   -2585, -2585, -2585,   310, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   989,   975, -2585,   977,  1009, -2585,   619, -2585, -2585,
   -2585, -2585, -2585,  7279, -2585,  6216, -2585,  1452, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1008,  1212,  1153, -2585,  1017,   440,  1653,
   -2585,  1019,  1023,  2146, -2585,  1033,  1143, -2585,  1042,  1257,
   -2585,  1819,   199, -2585, -2585, -2585, -2585, -2585, -2585,    16,
   -2585,  1054,   583, -2585, -2585, -2585,   336, -2585,  1056, -2585,
     215, -2585, -2585, -2585,   145,  1068,  1074,  1102,  1090,  2178,
   -2585,   165,  1100,  2672,  1104,  1114,    58,  1118,  2289, -2585,
    1144,   219, -2585,  1207, -2585,  7017, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  1714, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1352,  1361,  3327, -2585,
    2596, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  1294, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1161,  1167,
    2107, -2585, -2585,  1381,  1418,  1381,   493,  1381,   733,   612,
    1041, -2585,  1181,  1187, -2585,  2126, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     284,  1188,  1192,  3576, -2585,  1514, -2585,  1138, -2585, -2585,
    5758, -2585,  5758,  6973,  1197, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1806, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1213, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  1927, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  1087, -2585,  6454,  5955, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  2241, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  1214, -2585, -2585, -2585,   256,
   -2585, -2585, -2585, -2585, -2585, -2585,   419,   779,  1225,  1227,
    1231, -2585,   861, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,     1,    38,  1232,  1236,  1237,  1242,  1248,  3223,
   -2585,   590, -2585, -2585,   584, -2585,   865,  1258, -2585, -2585,
   -2585, -2585, -2585,   994, -2585, -2585, -2585, -2585,  1171, -2585,
    1386, -2585, -2585,  1263, -2585,   709, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  6763, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  3086, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  1022, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1652, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1265,  1302,  1306,  1314,
    1321,  1323,  1342,  1634, -2585, -2585,  1346,   605, -2585,  1351,
   -2585,   197, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  6268, -2585, -2585,  6794, -2585,  3631, -2585,
    3018, -2585,  3856, -2585,  7237,  1357, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   329, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  3856,
   -2585,  1328, -2585,  1330,  1356, -2585, -2585, -2585, -2585,  1370,
    1374,  1374,  1374,  1374,  2207, -2585, -2585, -2585,  1372, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,   895,  1373,  1403,
   -2585,  3662, -2585, -2585,  1387,  1410,  1413, -2585, -2585, -2585,
    1417,   -65,  1422,  2354,  1356, -2585,  1416,  1356, -2585,  5031,
   -2585, -2585, -2585, -2585, -2585,   132, -2585, -2585, -2585,  1431,
    1434, -2585,  1424, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  1451,  1444,  1453,   919, -2585, -2585,  1454,   242,
    1456,  1583, -2585, -2585,   595,   883, -2585,  5688, -2585,  1429,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  7654,
   -2585,  2513, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    3799, -2585,  1374,  1460,  1459, -2585,  2628, -2585, -2585, -2585,
    1461, -2585,  1374,  1374, -2585,  1374, -2585,   143, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    1462, -2585, -2585,   628, -2585,  1463,  1549, -2585,   768, -2585,
    1471,  1136,   379, -2585,  1475, -2585,  1469,  1374,  1374,  1483,
     551,  1374, -2585,  1487, -2585,  1486,  1356, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1490, -2585,
    2158,  1356, -2585,  1496,  1497,  1500,  1356, -2585,   936, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    2055, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  6500, -2585, -2585,
    6994, -2585,  6994, -2585,  2334, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  3393, -2585,  3372, -2585,  1356,  1356,
   -2585,  1381, -2585, -2585, -2585, -2585, -2585, -2585,   136, -2585,
   -2585, -2585, -2585, -2585,  1744,   785,   339,   184,  7017, -2585,
    1503, -2585,  1502,  1356,  1356, -2585, -2585, -2585, -2585,  1506,
   -2585,  6042, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    5455, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    6042, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5635,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5362, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   176,  6947, -2585,   182,  4433, -2585,
    1724,  1728,  6709, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  4482, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  3867, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    4348, -2585,   103,  1513,  1528,   144, -2585,  1529, -2585,   360,
   -2585, -2585, -2585, -2585, -2585, -2585,  1536, -2585,   749, -2585,
   -2585, -2585, -2585, -2585, -2585,   267,  1530,   240,  1622, -2585,
    1538, -2585,  1539, -2585, -2585,  1541,  1540,  1552,  1374,  1374,
    2323,  1837,  2702, -2585, -2585,   865, -2585,   621,  1356,   950,
   -2585,   239,  1470, -2585,  1053, -2585,  1203,   283,  1153, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  4889,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  4348, -2585,   766, -2585,   766,
   -2585,  1374,  1374,  1374,  1374,  1374,  2207,  1374, -2585,   724,
   -2585,   185,  7701, -2585, -2585, -2585, -2585, -2585, -2585,  1555,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   998, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   193,
    5480, -2585, -2585, -2585, -2585, -2585,  1551, -2585, -2585, -2585,
     753,   784,   810,   812, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1558, -2585,
    1563, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  1579, -2585,  1374, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  1565, -2585,  1568,  1572,  1574,  1576, -2585,  1578,
   -2585,  1590,  1573,  1178, -2585,  1631,  1608,  1773,  1611,  1374,
   -2585,   919, -2585,  1605,  1604,  1615,  1374, -2585, -2585, -2585,
    1617,  1009, -2585, -2585, -2585,   271, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  7279,
   -2585, -2585,   909, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  6216, -2585, -2585,   836,  1623,
   -2585, -2585, -2585,  1637,  1624, -2585,   840,   871,   872,  1639,
   -2585,  1642,  1374, -2585, -2585, -2585, -2585, -2585, -2585,   731,
   -2585, -2585, -2585,  1356, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1645, -2585, -2585, -2585,   881,   888, -2585,
    1668, -2585,   897, -2585, -2585,  1654,  1374, -2585, -2585, -2585,
   -2585, -2585, -2585,  1657, -2585,  1661, -2585,  1659,  1663, -2585,
   -2585,  1374,  1670, -2585, -2585,  1672, -2585,  7017, -2585, -2585,
    7372, -2585,  3279, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  7372, -2585,  3708, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  3327, -2585,
   -2585, -2585,  1675,  1677, -2585, -2585,  1689,   493, -2585,  1933,
   -2585,  1691, -2585, -2585, -2585, -2585, -2585,  1694,  1697, -2585,
    1696, -2585, -2585, -2585,  1701,  1705, -2585,  1707, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  4800, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5758,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5085,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  5758, -2585,  6973, -2585,  1712,  1713, -2585,  1716,
   -2585,  1723,  1725, -2585,  1722, -2585, -2585,  5984, -2585,  5984,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  5270, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  6454,
   -2585,  5955, -2585, -2585,  1798, -2585,  1726,  1374,  1374, -2585,
     307,   419, -2585,   318,   779, -2585,  1789, -2585,  1730,  1731,
    1738, -2585,  1734,  1739,  1750, -2585, -2585, -2585, -2585, -2585,
    1374,   944,  1031, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    1760,  1764, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  1765,  1771,  1772,  1774, -2585, -2585,  1778, -2585, -2585,
   -2585, -2585, -2585, -2585,  1788,  1786,  1790,  2364, -2585, -2585,
   -2585, -2585,  1787, -2585,  1826, -2585,  1125, -2585,  1064, -2585,
    1064, -2585,  1826, -2585, -2585,  6763, -2585, -2585, -2585, -2585,
    1060, -2585,  1078,  1793,  1796,  1795,  1799,  1801,  1810,  1804,
   -2585, -2585,  1812,  1818,  1821, -2585,  1817, -2585,   155,  7237,
   -2585,  1827,  1828, -2585,  1829, -2585,  1356, -2585,  1374, -2585,
   -2585, -2585, -2585,  1374,  2819,  1374,  1374,  1374,  1374,  1374,
   -2585,  1096, -2585,  1489,   845,  1844, -2585, -2585, -2585,  1549,
   -2585, -2585, -2585,   204, -2585, -2585, -2585,  1835, -2585, -2585,
   -2585, -2585, -2585,  1004,  1108, -2585,  1839, -2585, -2585,  1374,
    1110, -2585, -2585,  5688, -2585, -2585,  7654, -2585, -2585, -2585,
    1853,  1374,  2819, -2585, -2585, -2585, -2585, -2585,  1142,  1549,
   -2585, -2585,  1854,  1846, -2585,  1356, -2585, -2585,  1374, -2585,
   -2585,  1356, -2585,  1176,  1845,  1374,  1857, -2585,  1868,  1374,
    1858, -2585,  1859, -2585, -2585, -2585,  2792, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  6994, -2585, -2585,  3109, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  6994, -2585, -2585, -2585, -2585,  1374, -2585,  1855,   956,
   -2585, -2585, -2585,  1356, -2585, -2585,   226,  6042, -2585, -2585,
    6042, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    6410, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  2482,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  6410, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    4606, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  6709, -2585, -2585, -2585,  1862, -2585,  1249,  1254,
    1947, -2585,  1866, -2585,  1950, -2585,  1871, -2585,  1874, -2585,
   -2585, -2585,  1877, -2585, -2585,  1374,  1356,  1374,  1858, -2585,
   -2585, -2585,  1614, -2585,  1837,  1894,  1895,  1897, -2585, -2585,
    1374, -2585, -2585,  4042, -2585,  2581, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1374, -2585,  1911,  1374,
   -2585, -2585, -2585,  1374, -2585,  1374, -2585, -2585, -2585,  1898,
    1899,  1900, -2585,  1893, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  1256, -2585,  1858,  1858,  1858,  1858,  1858,  1905, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   626,  1631, -2585,  2074,
    1611,  1917, -2585,  1924,  1374,  1858, -2585, -2585, -2585, -2585,
    1268, -2585,  1356, -2585, -2585,  3003,  1912, -2585, -2585,  1858,
    1915, -2585, -2585,  1934,  1272, -2585,  1937,  1276, -2585,  1858,
    1374,  7372, -2585, -2585,  7372, -2585, -2585,  1277,  1770, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1921,  1356,  1356, -2585,
    1929,  1931,  1932, -2585,  1935, -2585, -2585,  1356,  1356,  1356,
    1356, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  2930,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  5984, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  4192, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  5984, -2585, -2585, -2585, -2585, -2585,  2022, -2585,  2027,
   -2585, -2585,  1374,  1962,  1374,  1858, -2585,  1858, -2585, -2585,
   -2585, -2585, -2585, -2585,  1948,  1952,  1953,  1374,  1858, -2585,
   -2585, -2585, -2585,  4067, -2585,   681, -2585, -2585, -2585,  1963,
   -2585,  1327,  1331,  1356,  1356, -2585, -2585, -2585, -2585,  1356,
    1356,  1374, -2585, -2585, -2585, -2585,  1959,  1961, -2585, -2585,
   -2585,  1964,  1858, -2585, -2585, -2585,   577,   799, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   166, -2585,  1984,  1340, -2585, -2585, -2585,  1983,  1868,
   -2585,  1858, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1972,
    1975, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  6410, -2585, -2585,  6410, -2585, -2585,  1356,  1976,
    1977,  1356,  1858,  1978,  1858, -2585, -2585, -2585,  1858, -2585,
   -2585,  2186, -2585,  1374, -2585, -2585, -2585, -2585,  1356,  1356,
    1356, -2585, -2585, -2585,  1994, -2585, -2585, -2585,  2224,  1982,
    1991,  1993,  1996,  1998,  1999,  2001,  2002,  2003,   161, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1995,
    1934, -2585,  2005,  2006, -2585, -2585,  1356,  1356,  1356,  1356,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  2009, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  2160,  2160,  2160,  2160,
    2160,  2160,  2160,   166,  2020, -2585,  2036,  2046, -2585,  2006,
   -2585, -2585, -2585, -2585, -2585, -2585,  1356,  1356, -2585,  2160,
    2034,  2051,  3107,  2356,  2058,  2059,  2069,  2038, -2585, -2585,
    2046, -2585, -2585, -2585,  2060, -2585, -2585,  2063,  3856,  2076,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  2070, -2585, -2585, -2585, -2585, -2585, -2585,
    2073, -2585, -2585, -2585, -2585, -2585,  2071,  2091, -2585, -2585,
   -2585,  2077, -2585, -2585,  2093, -2585,  2078, -2585, -2585,  2082,
    2083,  2085,  2102, -2585, -2585,  2104, -2585, -2585, -2585
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   263,  1426,  1428,     0,  1450,  1482,  1484,  1486,  1490,
    1491,  1498,   310,     0,  1510,   181,  1504,  1432,   282,   316,
    1495,   306,  1502,   178,   314,   284,   288,   289,   297,   307,
     308,   303,   369,   312,   265,   280,     0,    67,    14,    15,
      13,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    71,    62,    63,    68,    69,    70,    73,    74,
      75,    72,    76,    77,    78,    92,    79,    93,    80,    81,
      82,    94,    83,    95,    84,    85,    86,    87,    88,    89,
      90,    96,    91,    97,    16,    17,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    19,    50,    64,
      65,    66,  1462,  1464,  1466,  1468,  1470,  1472,  1538,  1434,
    1554,  1436,  1556,   251,  1530,  1515,  1444,   301,   267,     0,
    1452,  1572,  1604,     0,  1607,  1611,  1617,   415,  1500,     0,
     183,     0,  1560,   337,   762,  1474,   776,   935,  1552,     0,
       0,     0,   286,   339,     0,   954,  1142,  1170,   291,     0,
       0,   299,   349,   413,   358,   381,   318,   275,   273,   269,
     271,  1540,  1550,     1,  1440,  1584,  1442,  1586,  1588,  1590,
    1592,  1478,  1594,     0,  2305,     0,  2345,  2361,  2451,  2313,
    2453,     0,     0,   264,  1539,  1633,  1750,  1751,  1756,  1752,
    1758,  1759,  1753,  1754,  1755,  1757,  1562,     0,     0,  2432,
    2401,  2407,     0,  2405,  1427,  1555,  1660,  1851,  1842,  1843,
    1844,  1845,  1848,  1849,  1850,  1852,  1847,  1846,  1564,  1429,
    1557,  1663,  1861,  1853,  1854,  1855,  1856,  1859,  1860,  1862,
    1858,  1857,     0,     0,     0,  1570,     0,   352,  1454,  1456,
    1574,  2373,     0,  1451,  1573,  1681,  1936,  1931,  1932,  1933,
    1934,  1935,  2472,     0,  1483,  1605,  1729,  2193,  2196,  2197,
    2194,  2195,  2198,  2414,  2416,  1485,  1606,  1732,  2199,  2200,
    2406,  1487,  1608,  1733,  2205,  2201,  2202,  2203,  2206,  2204,
    2365,  1492,  1612,  1736,  2210,  2207,  2208,  2209,  2211,  2214,
    2216,  2217,  2215,  2218,  1499,  1618,  1742,     0,   311,   416,
     450,   554,   555,  1619,     0,     0,   190,   182,   184,   185,
     188,   189,     0,  1621,     0,  2395,  2397,     0,  2399,  1433,
    1561,  1666,  1863,  1869,  1870,  1866,  1867,  1864,  1865,  1868,
    1872,  1873,  1871,     0,   556,   558,   559,     0,   573,   609,
       0,   629,   283,   338,   417,   454,   455,   457,   461,   462,
     463,   465,   466,   453,   456,   464,   458,   459,   460,   775,
     603,   774,   771,   317,   763,   764,   768,   765,   772,   773,
    1476,  1596,     0,   794,   778,   937,  2307,  2311,  1503,  1553,
    1657,  1834,  1835,  1836,  1841,  1837,  1838,  1839,  1840,   305,
     268,   263,  1430,  1450,  1488,  1493,  1496,  1502,   297,   180,
     179,   130,   128,   153,   154,   155,   157,   156,   131,   159,
     158,   161,   160,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   129,
     135,   136,   144,   137,   138,   139,   140,   141,   142,   143,
     145,   146,   147,   148,   149,   150,   134,   133,   151,   152,
     132,     0,   315,   341,     0,   631,   633,   635,   285,   340,
     420,   478,   480,   481,   473,   479,   475,   476,   482,   467,
     474,   483,   469,   470,   471,   477,   468,   472,   636,   637,
     638,     0,   643,     0,   290,   343,   426,   507,   508,   509,
     510,   511,   512,   979,  1011,  1113,   956,  1144,  1194,  1254,
    1172,     0,   293,   295,     0,     0,     0,   660,   662,   664,
     679,   716,   298,   350,   438,   533,   540,   529,   535,   536,
     537,   541,   534,   528,   530,   539,   531,   532,   538,   309,
     414,   447,   553,   409,   410,   411,     0,   304,   360,   364,
     366,   367,   368,   408,   412,   402,   370,   371,   384,   385,
     397,   398,   399,   400,   401,     0,   313,  1546,   277,   279,
    1544,     0,     0,  2347,  2349,  2351,  2355,  2357,  2359,  2353,
    1769,   266,  1541,  1636,     0,  1760,  1761,  1762,  1765,  1763,
    1764,  1768,  1830,   281,  1551,  1654,  1568,  1463,  1585,  1699,
    2029,  2030,  2035,  2031,  2037,  2038,  2032,  2033,  2039,  2040,
    2042,  2043,  2044,  2045,  2041,  2034,  2036,  1568,  1465,  1587,
    1702,  2046,  2047,  2052,  2048,  2054,  2055,  2049,  2050,  2056,
    2057,  2059,  2060,  2061,  2058,  2051,  2053,  1467,  1589,  1705,
    2062,  2063,  2068,  2064,  2070,  2074,  2071,  2065,  2066,  2072,
    2073,  2075,  2067,  2069,  1469,  1591,  1708,  2076,  2077,  2082,
    2078,  2084,  2085,  2079,  2080,  2086,  2081,  2083,  1471,  1593,
    1711,  2087,  2088,  2093,  2089,  2095,  2096,  2090,  2091,  2092,
    2094,  1480,  1600,  1473,  1595,  1714,  2097,  2098,  2103,  2099,
    2105,  2106,  2100,  2101,  2102,  2104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1634,  1435,  1563,
    1669,  1874,  1887,  1879,  1880,  1881,  1877,  1878,  1875,  1876,
    1889,  1884,  1885,  1886,  1888,  1883,  1882,     0,     0,     0,
       0,     0,     0,     0,  1661,  1437,  1565,  1672,  1890,  1902,
    1895,  1896,  1897,  1893,  1894,  1891,  1892,  1904,  1900,  1901,
    1903,  1899,  1898,     0,  1664,     0,   255,     0,     0,  2410,
    2412,  2413,  1445,  1571,  1678,  1926,  1927,  1925,  1928,  1929,
    1930,  1448,     0,   710,     0,     0,   302,   354,   444,   550,
     551,   552,  1458,  1576,  1460,  1578,  1453,  1575,  1684,  1943,
    1942,  1937,  1938,  1939,  1946,  1947,  1944,  1945,  1948,  1940,
    1950,  1941,  1949,     0,     0,     0,  1682,     0,     0,     0,
    1730,     0,     0,     0,  1734,     0,     0,  1737,     0,     0,
    1743,     0,     0,   451,  1501,  1620,  1745,  1512,  1513,     0,
    2321,     0,     0,   186,  1507,  1508,     0,  2309,     0,  1505,
    1622,  1623,  1747,  1746,     0,     0,     0,     0,     0,     0,
    1667,     0,     0,     0,     0,     0,     0,     0,     0,   418,
       0,     0,   766,     0,   769,  1598,  2118,  2120,  2121,  2113,
    2119,  2115,  2116,  2122,  1475,  1597,  1717,  2107,  2114,  2123,
    2109,  2110,  2111,  2117,  2108,  2112,   819,   846,   796,   777,
     779,   780,   783,   784,   785,   790,   786,   787,   791,   792,
     793,   788,   789,   936,   938,   939,   942,   943,   944,   950,
     949,   945,   946,   953,   951,   952,   947,   948,     0,     0,
       0,  1658,  1438,  1558,     0,  1609,  1613,  1615,   776,   954,
    1170,   323,     0,     0,   287,   342,   423,   495,   497,   498,
     490,   496,   492,   493,   499,   484,   491,   500,   486,   487,
     488,   503,   504,   501,   502,   505,   494,   506,   485,   489,
       0,     0,     0,     0,   421,     0,   644,     0,   427,  1043,
     981,  1078,  1013,  1115,     0,   965,   971,   962,   967,   968,
     972,   966,   955,   957,   958,   961,   973,   976,   974,   978,
     970,   963,   964,   969,   975,   977,     0,  1153,  1159,  1150,
    1155,  1156,  1160,  1154,  1143,  1145,  1146,  1149,  1158,  1151,
    1152,  1166,  1163,  1164,  1161,  1162,  1165,  1168,  1157,  1169,
    1167,     0,  1221,  1196,  1256,  1181,  1187,  1178,  1183,  1184,
    1188,  1182,  1171,  1173,  1174,  1177,  1189,  1190,  1191,  1186,
    1179,  1180,  1185,  1192,  1193,     0,   656,   658,   292,   344,
     429,   514,   516,   517,   515,   513,   345,   347,     0,     0,
       0,   300,   351,   441,   542,   543,   548,   547,   544,   545,
     546,   549,     0,     0,     0,     0,     0,     0,     0,     0,
     439,     0,   448,   363,     0,   361,     0,     0,   406,   404,
     405,   407,   372,   386,   393,   394,   395,   396,     0,   382,
       0,   383,   336,     0,   276,  1547,  1648,  1808,  1803,  1804,
    1805,  1806,  1807,  1548,  1790,  1796,  1787,  1792,  1793,  1797,
    1791,   274,  1545,  1645,  1786,  1798,  1799,  1800,  1795,  1788,
    1789,  1794,  1801,  1802,   270,  1542,  1639,  1770,  1771,  1772,
    1775,  1773,  1774,  1777,  1776,   272,  1543,  1642,  1778,  1779,
    1780,  1783,  1781,  1782,  1785,  1784,     0,     0,     0,     0,
       0,     0,     0,  1766,  1637,  1767,     0,     0,  1655,     0,
    1441,  1569,  1675,  1905,  1906,  1911,  1907,  1913,  1914,  1908,
    1909,  1915,  1916,  1923,  1921,  1922,  1924,  1918,  1919,  1920,
    1917,  1910,  1912,     0,  1700,  1443,     0,  1703,     0,  1706,
       0,  1709,     0,  1712,  1602,     0,  2162,  2164,  2165,  2163,
    2159,  2160,  2166,  1479,  1601,  1723,  2147,  2148,  2153,  2149,
    2155,  2156,  2150,  2151,  2157,  2161,  2158,  2152,  2154,     0,
    1715,     0,  2222,     0,     0,  2319,  2318,  2316,  2317,     0,
       0,     0,     0,     0,     0,  2323,  2324,  2325,     0,  2336,
    2337,  2338,  2339,  2340,  2341,  2342,  2343,  2331,     0,     0,
    1635,     0,  1670,  2375,  2368,     0,     0,  2383,  2384,  2385,
    2379,     0,     0,     0,     0,  2409,     0,     0,  1662,     0,
    1673,  1665,   253,   261,   252,   256,   257,   260,  1535,  1536,
       0,  1532,     0,  1533,  1524,  1525,  1518,  1519,  1520,  1521,
    1522,  1523,     0,     0,     0,     0,  1679,  1449,     0,     0,
       0,     0,   355,   356,     0,     0,   445,  1580,  1455,  1577,
    1687,  1951,  1952,  1957,  1953,  1959,  1960,  1954,  1955,  1961,
    1962,  1964,  1965,  1966,  1967,  1968,  1963,  1956,  1958,  1582,
    1457,  1579,  1690,  1969,  1970,  1975,  1971,  1977,  1978,  1972,
    1973,  1979,  1980,  1982,  1983,  1984,  1985,  1981,  1974,  1976,
       0,  1685,     0,  2429,     0,  1683,     0,  2328,  2329,  2327,
       0,  1731,     0,     0,  1735,     0,  1738,     0,  1744,   758,
     759,   760,   761,   751,   752,   753,   754,   755,   756,   757,
       0,   750,   452,     0,  1511,     0,     0,   187,     0,  1506,
       0,     0,     0,  1624,     0,  2272,     0,     0,     0,  2389,
       0,     0,  1668,     0,  2226,     0,     0,   569,   570,   571,
     572,   562,   563,   564,   565,   566,   567,   568,     0,   561,
       0,     0,   616,   612,     0,     0,     0,   419,     0,   767,
     770,  2135,  2137,  2138,  2130,  2136,  2132,  2133,  2139,  1477,
    1599,  1720,  2124,  2131,  2140,  2126,  2127,  2128,  2143,  2144,
    2141,  2142,  2145,  2134,  2146,  2125,  2129,     0,  1718,   873,
     821,   904,   848,   795,   797,   798,   812,   801,   802,   803,
     808,   804,   805,   809,   815,   816,   813,   814,   817,   810,
     818,   811,   806,   807,     0,   781,     0,   940,     0,     0,
    1659,  1566,  1431,  1559,  1489,  1610,  2363,  1494,  1614,  1739,
    2212,  2213,  1497,  1616,     0,  1194,     0,     0,     0,   424,
       0,  2230,     0,     0,     0,   422,   640,   641,   642,     0,
     428,  1045,   990,   996,   987,   992,   993,   997,   991,   980,
     982,   983,   986,   998,  1001,   999,  1003,   995,   988,   989,
    1004,  1005,  1007,  1008,   994,  1009,  1010,  1006,  1000,  1002,
    1080,  1022,  1028,  1019,  1024,  1025,  1029,  1023,  1012,  1014,
    1015,  1018,  1030,  1033,  1031,  1035,  1027,  1020,  1021,  1036,
    1037,  1039,  1040,  1026,  1041,  1042,  1038,  1032,  1034,  1124,
    1130,  1121,  1126,  1127,  1131,  1125,  1114,  1116,  1117,  1120,
    1132,  1135,  1133,  1137,  1140,  1129,  1122,  1123,  1138,  1139,
    1128,  1141,  1134,  1136,     0,     0,   959,     0,     0,  1147,
    1282,  1316,  1223,  1205,  1211,  1202,  1207,  1208,  1212,  1206,
    1195,  1197,  1198,  1201,  1213,  1214,  1215,  1210,  1203,  1204,
    1218,  1219,  1209,  1220,  1216,  1217,  1265,  1271,  1262,  1267,
    1268,  1272,  1266,  1255,  1257,  1258,  1261,  1273,  1274,  1275,
    1278,  1270,  1263,  1264,  1281,  1279,  1269,  1280,  1276,  1277,
       0,  1175,     0,     0,     0,     0,   430,     0,   294,   346,
     432,   521,   519,   520,   518,   522,     0,   296,   348,   435,
     526,   524,   525,   523,   527,     0,     0,     0,     0,   442,
       0,  2258,     0,   650,   651,   646,     0,     0,     0,     0,
       0,     0,     0,   440,   449,     0,   359,     0,     0,   386,
     379,   391,   392,   375,     0,   378,     0,   319,     0,  1649,
    2453,  1813,  1819,  1810,  1815,  1816,  1820,  1814,   278,  1549,
    1651,  1809,  1821,  1822,  1823,  1818,  1811,  1812,  1826,  1827,
    1817,  1828,  1824,  1829,  1825,     0,  1646,     0,  1640,     0,
    1643,     0,     0,     0,     0,     0,     0,     0,  1638,     0,
    1656,     0,     0,  1676,  1701,  1704,  1707,  1710,  1713,     0,
    2182,  2184,  2185,  2183,  2179,  2180,  2186,  1481,  1603,  1726,
    2167,  2168,  2173,  2169,  2175,  2176,  2170,  2171,  2177,  2189,
    2190,  2187,  2188,  2191,  2181,  2178,  2192,  2172,  2174,     0,
       0,  1724,  1716,  2220,  2219,     2,     0,  2315,     3,     4,
       0,     0,     0,     0,  2459,  2460,  2461,  2468,  2469,  2470,
    2471,  2458,  2462,  2463,  2464,  2465,  2466,  2467,     0,  2455,
       0,  2457,  2322,  2332,  2330,  2334,  1671,  2369,  2367,  2371,
    2380,     0,  2376,     0,  2443,  2444,  2446,  2447,  2448,  2449,
    2450,  2445,     0,  2434,     0,  2439,  2436,     0,  2408,     0,
    1674,     0,     0,     0,   258,  1628,     0,  1626,     0,     0,
    1680,  1570,   701,   697,     0,     0,     0,   713,   714,   715,
       0,     0,   353,   446,  1459,  1581,  1693,  1986,  1987,  1992,
    1988,  1994,  1995,  1989,  1990,  1996,  1997,  2006,  2004,  2005,
    2007,  1999,  2000,  2001,  2002,  2003,  1998,  1991,  1993,     0,
    1688,  1461,  1583,  1696,  2008,  2009,  2014,  2010,  2016,  2017,
    2011,  2012,  2018,  2019,  2027,  2025,  2026,  2028,  2021,  2022,
    2023,  2024,  2020,  2013,  2015,     0,  1691,  1686,     0,     0,
    2428,  2476,  2474,     0,     0,  2326,     0,     0,     0,     0,
    2290,     0,     0,  1514,  2320,   202,   203,   204,   205,     0,
     196,   199,  1509,     0,  2419,  2420,  2421,  2422,  2423,  2424,
    2425,  2426,  2427,     0,  1625,  2270,  2269,     0,     0,  2390,
       0,  2386,     0,  2224,  2223,     0,     0,   578,   595,   591,
     593,   594,   592,     0,   575,     0,   577,     0,     0,   613,
     611,     0,     0,   606,   607,     0,   605,     0,  1721,  1719,
     875,   820,   822,   823,   834,   835,   826,   827,   836,   828,
     837,   833,   829,   830,   838,   839,   841,   842,   843,   844,
     845,   840,   831,   832,   906,   847,   849,   850,   861,   862,
     853,   854,   863,   855,   864,   860,   856,   857,   865,   866,
     868,   869,   870,   871,   872,   867,   858,   859,     0,   799,
     782,   941,     0,     0,  1439,  1567,     0,     0,  1740,     0,
     596,     0,   327,   322,   325,   326,   324,     0,     0,  2268,
       0,   425,  2228,  2227,     0,     0,   639,     0,  1054,  1060,
    1051,  1056,  1057,  1061,  1055,  1044,  1046,  1047,  1050,  1062,
    1065,  1063,  1067,  1059,  1052,  1053,  1068,  1069,  1076,  1074,
    1075,  1077,  1071,  1072,  1058,  1073,  1070,  1064,  1066,     0,
     984,  1089,  1095,  1086,  1091,  1092,  1096,  1090,  1079,  1081,
    1082,  1085,  1097,  1100,  1098,  1102,  1094,  1087,  1088,  1103,
    1104,  1111,  1109,  1110,  1112,  1106,  1107,  1093,  1108,  1105,
    1099,  1101,     0,  1016,     0,  1118,     0,     0,  2240,     0,
     960,     0,     0,  2246,     0,  1148,  1350,  1284,  1388,  1318,
    1232,  1238,  1229,  1234,  1235,  1239,  1233,  1222,  1224,  1225,
    1228,  1240,  1241,  1242,  1237,  1230,  1231,  1245,  1250,  1251,
    1248,  1249,  1252,  1246,  1236,  1253,  1247,  1243,  1244,     0,
    1199,     0,  1259,  1176,     0,  2234,     0,     0,     0,   431,
       0,     0,   433,     0,     0,   436,     0,  2262,     0,   653,
       0,   708,   704,     0,     0,   443,  2256,  2255,   647,   645,
       0,     0,     0,   668,   669,   670,   671,   672,   673,   674,
       0,   666,   687,   688,   689,   690,   691,   692,   693,   694,
     695,     0,   681,   683,   685,   733,   734,     0,   742,   743,
     744,   745,   746,   747,   718,     0,     0,     0,   722,   735,
     362,   365,     0,   380,     0,   387,     0,   388,     0,   377,
       0,   376,     0,   320,  1650,     0,  1652,  1647,  1641,  1644,
       0,     6,     0,     0,    11,     0,     0,     0,     0,     0,
    1832,  1833,     0,     0,     0,  2278,     0,  1677,     0,     0,
    1727,     0,     0,  2296,     0,  1725,     0,  2306,     0,  2346,
    2362,  2452,  2314,     0,     0,     0,     0,     0,     0,     0,
    2377,     0,  2433,     0,     0,     0,  2402,  2404,   254,     0,
     259,  1749,  1531,  1629,  1630,  1537,  1534,     0,  1516,  1627,
    1748,  1526,  1527,     0,     0,  1447,     0,   698,   696,     0,
       0,   712,   357,     0,  1694,  1689,     0,  1697,  1692,  2374,
       0,     0,     0,  2415,  2417,  2366,  2288,  2287,     0,     0,
     191,   197,     0,     0,  2418,     0,  2396,  2398,     0,  2387,
    2400,     0,   557,     0,     0,     0,     0,   610,     0,     0,
     615,   630,     0,   604,  1722,   874,   876,   877,   888,   889,
     880,   881,   890,   882,   891,   887,   883,   884,   892,   893,
     902,   900,   901,   903,   895,   896,   897,   898,   899,   894,
     885,   886,     0,   824,   905,   907,   908,   919,   920,   911,
     912,   921,   913,   922,   918,   914,   915,   923,   924,   933,
     931,   932,   934,   926,   927,   928,   929,   930,   925,   916,
     917,     0,   851,   800,  2308,  2312,     0,  1741,     0,     0,
    2266,  2264,  2263,     0,   632,   634,     0,     0,  1048,   985,
       0,  1083,  1017,  1119,  2238,  2236,  2235,  2244,  2242,  2241,
    1352,  1293,  1299,  1290,  1295,  1296,  1300,  1294,  1283,  1285,
    1286,  1289,  1306,  1301,  1302,  1307,  1303,  1308,  1298,  1291,
    1292,  1309,  1310,  1312,  1313,  1297,  1314,  1315,  1311,  1304,
    1305,  1390,  1327,  1333,  1324,  1329,  1330,  1334,  1328,  1317,
    1319,  1320,  1323,  1340,  1335,  1336,  1341,  1337,  1342,  1332,
    1325,  1326,  1343,  1344,  1346,  1347,  1331,  1348,  1349,  1345,
    1338,  1339,     0,  1226,  1200,  1260,     0,  2231,     0,     0,
       0,  2250,     0,   434,     0,  2254,     0,   437,     0,  2259,
     654,   652,     0,   705,   703,     0,     0,     0,   649,   661,
     663,   665,     0,   680,     0,     0,     0,     0,   719,   717,
       0,   736,   737,     0,   726,     0,   723,   738,   403,   389,
     390,   374,   373,   321,  1653,  2348,     0,  2350,     0,     0,
    2352,  2356,  2358,     0,  2354,     0,  2276,  2274,  2273,     0,
       0,     0,  2304,     0,  1728,  2292,  2294,  2291,  2221,     5,
       8,     0,  2456,  2333,  2335,  2370,  2372,  2381,     0,  2382,
    2435,  2440,  2441,  2442,  2438,  2437,     0,     0,  1631,     0,
       0,     0,  2411,     0,     0,   700,   711,  1695,  1698,  2431,
       0,  2475,     0,   749,   198,   195,     0,  2310,  2271,  2391,
       0,  2225,   560,     0,     0,   576,   622,     0,   618,   614,
       0,     0,   878,   825,     0,   909,   852,     0,     0,   334,
     330,   332,   333,   331,   329,   335,     0,     0,     0,  2229,
       0,     0,     0,  2286,     0,  1049,  1084,     0,     0,     0,
       0,  1361,  1367,  1358,  1363,  1364,  1368,  1362,  1351,  1353,
    1354,  1357,  1374,  1369,  1370,  1375,  1371,  1376,  1366,  1359,
    1360,  1377,  1378,  1386,  1384,  1385,  1387,  1380,  1381,  1365,
    1382,  1383,  1379,  1372,  1373,     0,  1287,  1399,  1405,  1396,
    1401,  1402,  1406,  1400,  1389,  1391,  1392,  1395,  1412,  1407,
    1408,  1413,  1409,  1414,  1404,  1397,  1398,  1415,  1416,  1424,
    1422,  1423,  1425,  1418,  1419,  1403,  1420,  1421,  1417,  1410,
    1411,     0,  1321,  1227,  2232,   657,   659,     0,  2247,     0,
    2251,  2260,     0,     0,     0,   707,  2257,   648,   675,   676,
     677,   678,   667,   682,     0,     0,     0,     0,   721,   725,
     724,   739,   740,     0,   729,     0,   727,   741,     7,     0,
      12,     0,     0,     0,     0,  2298,  2302,  2300,  2297,     0,
       0,     0,  2454,  2378,   262,  1632,     0,     0,  1528,  1529,
    1517,     0,   699,  2473,  2289,   263,     0,  1450,  1502,   194,
     109,   192,   110,   108,   111,   112,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   113,
     127,     0,  2388,   584,     0,   580,   574,   620,     0,     0,
     617,   608,   879,   910,  2364,   599,   601,   602,   600,     0,
       0,   328,  2267,  2265,  2282,  2280,  2284,  2279,  2239,  2237,
    2245,  2243,     0,  1355,  1288,     0,  1393,  1322,     0,     0,
       0,     0,   655,     0,   706,   684,   686,   748,   720,   730,
     728,     0,   731,     0,  2360,  1831,  2277,  2275,     0,     0,
       0,  2293,  2295,     9,     0,  2392,   702,  1444,     0,     0,
     244,     0,     0,     0,     0,     0,     0,   229,   200,   206,
     209,   211,   215,   216,   217,   212,   210,   243,   582,     0,
       0,   579,     0,     0,   619,   597,     0,     0,     0,     0,
    1356,  1394,  2233,  2248,  2252,  2261,   709,   732,     0,  2299,
    2303,  2301,  2394,  2393,   193,   245,   248,   248,   248,   248,
     248,   248,   248,     0,     0,   207,     0,     0,   581,     0,
     624,   623,   598,  2283,  2281,  2285,     0,     0,    10,   248,
       0,     0,     0,     0,     0,     0,     0,     0,   208,   201,
       0,   586,   585,   621,     0,  2249,  2253,     0,  1538,     0,
     213,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   219,   220,   221,   222,   223,   224,
       0,   225,   226,   228,   230,   583,     0,     0,   246,   247,
     249,     0,   227,   218,     0,   625,     0,   214,   587,   627,
       0,   589,     0,   626,   250,     0,   588,   628,   590
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2585,  3423, -1641,   862, -2585, -2585,   554, -1731, -2585, -2585,
   -2585, -2585, -2585, -2585,  -169, -2585, -2585, -2585,  -211, -2585,
   -2585, -2585, -2585, -2585,   -27, -1954, -2585, -2585, -2585, -2585,
   -2473, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -1381, -2585,  -350, -2585, -2585, -2585,
   -2585, -2585, -1190, -2585, -2585,  -167, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  2176, -2585,  2177, -2585,  2179, -2585,
   -2585, -2585, -2585,  2182, -2585, -2585, -2585, -2585, -2585,  2183,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  2184, -2585,
   -2585, -2585,  2185, -2585,  2188, -2585, -2585, -2585,  2193, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   445, -2585,
   -2585,  1262,   636, -2585, -2585,  2205, -2585, -2585, -1094, -2585,
     638, -2585,  -175,  -168, -2585, -2585, -2585, -2585, -2585, -2585,
    2197,  2209,  2211, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  -244,  -358,
    -833,  -378,  -998, -1524, -1590,  -441, -1016, -2585, -2585,  -616,
    -386,  -194,  -143, -2585,  -139,  -109,  7968, -2585, -2585,  8245,
   -2585, -2585,   -30, -2585, -2585, -2585,  -580, -2585, -2585,  -643,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  -108, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  -496, -2585, -2585,  -613, -2585, -2585, -2585, -2585, -2585,
    -364, -2585,  -357, -2585,  -325, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, 12848, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, 12769, -2585, -2585, -2585, 12959, -2585, -2585,
   -2585, -2585, 13622, -2585,  -197, -2585, -2585, -2585,  -515, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, 10448, -2585, -2585, -2585, -2585,  -205,  -424, -2585,
   -2585, -2585, -2241, -1707, -2585, -2585, -2585, -2585, -2585, -2585,
    -263,  -258, -2585, -2585,  2251, -2585, -2585, -2585,  -832,  2252,
   -2585, -2585, -2585, -1414, -2585, -2585, -2585, -2585, -1904,  2263,
   -2585, -2585, -2585, -1919, -2585, -2585, -2585, -2585, -2284,  2265,
   -2585, -2585, -2585, -2312,  2268, -2585, -2585, -2585,  -818,  2269,
   -2585, -2585, -2585,  -954, -2585, -2585, -2585, -2585, -1479,  2271,
   -2585, -2585, -2585, -1492, -2585, -2585, -2585, -2585, -1987,  2273,
   -2585, -2585, -2585, -2008,  2274, -2585, -2585, -2585, -1523,  2275,
   -2585, -2585, -2585,  -952,  2277, -2585, -2585, -2585, -1014,  2278,
   -2585, -2585, -2585, -1558,  2282, -2585, -2585, -2585, -2060,  2284,
   -2585, -2585, -2585, -1574, -2585, -2585, -2585, -2585, -2369,  2286,
   -2585, -2585, -2585, -2406, -2585, -2585, -2585, -2585, -2493,  2287,
   -2585, -2585, -2585, -2584,  -237, -2585, -2585, -2585, -2585, -2585,
    -166, -2585,  -236, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    2293, -2585,  -231, -2585, -2585, -2585, -2585,  -165, -2585,  -164,
   -2585,  -230, -2585,  2297, -2585,  -217, -2585,  2309, -2585, -2585,
   -2585,  2310, -2585,  2311, -2585, -2585, -2585,  2313, -2585,  2322,
   -2585,  2324, -2585,  2325, -2585,  2345, -2585,  2346, -2585,  -163,
   -2585,  -202, -2585,  -191, -2585, -2585, -2585,  -162,  -176, -2585,
   -2585, -2585, -2585, -2585, -2585,  -160, -2585,  -148, -2585,  -161,
   -2585,  -146, -2585, -2585,  1109, -2585, -2585, -2585,  1137, -2585,
   -2585, -2585, -2585, -2585,  -126, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   661,  -491, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1936,
     667, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    -762, -2585, -2223,   -86,  -477, -2585, -1085, -1078, -1102, -1048,
   -1604,  -525, -2585, -2585,  -219,   -26,   -48,  -226,  -626,  -583,
   -1109,  -607,  -111,  -711, -1267, -1271, -1782, -1793,  -509,  -552,
    -559,  -574,  -502,  -536,  -788, -1359, -1143, -1615,  -173, -2585,
    -107,  -189, -1388,  2236,  -152, -2585, -2585, -2585, -2585, -2585,
    -363, -2585, -2585, -2585, -2585, -2585,  -972, -2585, -2585, -2585,
   -1611, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    -498, -2585, -2585, -2585, -2585, -2585,  -869, -2585, -2585, -2585,
    -185, -2585, -2585, -1276, -2585, -2585, -2585, -1567, -2585, -2585,
   -2585, -2585,  1733, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, 11120, -2585,  1876, -2585, -2585, -2585,
    4128, -2585, 12058, -2585,  9165, -2585, -2585, -2585, 12353, -2585,
    -129, -2585,  1116, -2585, -2585, -2585, -2585,  -140, -2585,  -540,
   -2585,  -524, -2585,  -517, -2585,  -487, -2585,  -478, -2585,  -475,
   -2585,  -471, -2585,  2539, -2585, -2585, -2585, -2585, -2585,  6002,
   -2585, -2585, -2585,  -368, -2585, -2585,  6712, -2585, -2585, -2585,
   -2585,   938, -2585, -2585, -2585, -2585, -2585, -2585,  6939, -2585,
    2220, -2585,  7649, -2585,  5051, -2585,  3398, -2585,  -128, 10434,
    6698, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, 12131, -2585, -2585,  7353, -2585, -2585,   212, -2585,
   -2585, -2585, -2585,  9653, -2585,  3795, -2585,   793, -1357, -2585,
   -2585,   -89, -2585, -2585, -2585
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1836,  1839,  1840,  2322,  2661,  2324,  2325,    36,  2879,
     429,    37,   170,   430,    38,   160,   337,   338,   339,   340,
     851,  2695,  2969,  2881,  1989,  1990,  2412,  3024,  1991,  2978,
    2979,  2980,  3091,  2981,  2982,  3080,  2983,  2984,  2985,  3073,
    2986,  2987,  3039,  3057,  3041,  3096,    39,   262,   776,  1891,
    1304,  1305,  1306,  1307,  1892,    40,   138,    41,   191,    42,
      43,    44,   591,    45,   592,    46,   590,    47,   587,    48,
    1133,    49,    50,   192,    51,   163,    52,   173,    53,   483,
      54,    55,   174,    56,   531,    57,  1076,    58,  1077,    59,
     182,    60,   534,    61,   267,    62,   184,    63,    64,    65,
      66,   183,    67,   157,    68,   186,    69,   171,    70,   164,
     586,   482,   952,  2103,  2104,  2105,  2726,  1123,   372,   488,
     954,   514,  1068,  1698,  1707,   542,  1081,   796,  1333,  1334,
     567,  1104,  1105,   568,   569,    71,   185,   576,  1112,   577,
    1740,  1113,  1741,  1742,  1107,  1114,  1115,  1116,  1117,   580,
     581,   582,   583,   584,   559,   328,   373,   489,   955,   515,
    1069,  1699,  1708,   543,  1082,   797,   560,   329,   374,   490,
     956,   516,  1070,  1700,  1709,   544,  1083,  1084,  1085,   798,
     561,   330,   375,   872,   376,   377,   378,  1448,  1449,   379,
     874,  2023,  2024,  2025,  2424,  2904,  2905,  3026,  2989,  3052,
    3086,  3101,  3106,  2026,  2106,  2498,  2919,  2920,   392,   880,
    2035,  2036,  2432,   380,   875,   381,  1454,  2429,  1455,  2028,
    2707,  2708,  2992,  2908,  3031,  3054,  3099,  3103,   382,   877,
     496,   981,   497,   982,   498,   517,   518,   519,   520,  1549,
     521,   522,   547,  1726,  2607,  1727,  1087,  2250,  2822,  1072,
    1693,  1073,  1694,   548,  1094,   549,  1095,   550,  1096,  2270,
    2271,  2832,   551,  1097,  2281,  2282,  2283,  2284,   799,  1904,
    2684,  1905,  2386,  1089,  2253,  2824,  2254,  2602,   800,  1330,
     801,  1910,   552,  1098,  2295,  2837,  2296,  2624,  2844,  2297,
    2625,  2845,  2298,  2627,   331,  1410,  1411,   393,   394,   395,
     396,   397,   398,   399,    72,   404,   909,   910,   911,    73,
     908,  1493,  1494,  1495,    74,  1490,  2041,  2042,  2043,    75,
    1492,  2065,  2066,  2067,    76,  2040,  2435,  2436,  2437,    77,
    2064,  2464,  2465,  2466,    78,   405,   923,   924,   925,    79,
     526,  1002,  1003,  1004,    80,   990,  1559,  1560,  1561,    81,
     992,  1588,  1589,  1590,    82,  1551,  2125,  2126,  2127,    83,
    1580,  2158,  2159,  2160,    84,   993,  1616,  1617,  1618,    85,
     527,  1024,  1025,  1026,    86,   530,  1052,  1053,  1054,    87,
    1043,  1650,  1651,  1652,    88,  1642,  2207,  2208,  2209,    89,
    1044,  1673,  1674,  1675,    90,  2197,  2528,  2529,  2530,    91,
    2199,  2559,  2560,  2561,    92,  2520,  2748,  2749,  2750,    93,
    2551,  2784,  2785,  2786,    94,   140,    95,   142,   459,   943,
      96,   162,    97,   226,    98,   248,   461,  1521,    99,   616,
     100,   637,   101,   265,   102,   266,  1328,   103,   151,   104,
     270,   105,   803,   106,   805,   107,  1337,   108,  1359,   109,
     195,   110,   197,   111,   198,   112,   199,   113,   200,   114,
     202,   115,   401,   116,   885,   117,   702,   118,  1224,   119,
     152,   120,   153,   121,   154,   476,   945,   122,   123,   155,
     478,   946,   124,   479,   947,   125,   156,   126,   333,   127,
     168,   128,   161,   343,   855,   856,   129,   159,   848,   849,
     130,   264,  1322,  1323,  2382,  2383,  2870,   131,   263,  1310,
    1311,  1312,  1313,   213,   601,  1154,  1165,  1141,  1124,  1758,
     613,   408,   234,   249,  1522,   349,   728,   755,  2094,  1190,
     782,   273,   806,  1338,  1360,  1914,  1941,   617,   638,   657,
     674,   688,   703,   894,  1469,  1233,  1807,   284,   295,   301,
    1524,   311,  1527,  1532,   324,   844,   859,   860,  2378,  2372,
    2373,   214,   602,  1155,  1166,  1142,  1125,  1759,   614,   409,
     235,   250,   350,   729,   756,  1191,   783,   274,   807,  1339,
    1361,  1915,  1942,   618,   639,   658,   675,   689,   704,   895,
    1470,  1234,  1808,   285,   296,   302,   312,  1528,   325,   845,
     861,  2379,  2374,   215,   603,   604,  1156,  1167,  1143,  1126,
    1760,   615,  1186,  2332,   410,   236,   251,   351,   730,   757,
    1192,   784,   275,   808,  1340,  1362,  1916,  1943,   619,   640,
     659,   676,   690,   705,   896,  1471,  1235,  1809,   286,   297,
     303,   313,  1529,   326,   216,  1253,  2346,   383,  1435,  2421,
     499,  1542,  2503,  1075,  2236,  2938,  1005,  2189,  2738,  2737,
    1027,  2194,  2740,  2739,  1704,  2592,  3036,  1713,  2596,  3037,
     553,  1722,  2606,  1090,  2248,  2941,   965,  2110,  2728,  2727,
     352,  1426,  2415,  1193,  2336,  2854,  2853,  2128,  2734,  2998,
    2997,  2999,   840,  1981,  2692,  1236,  2344,  2859,  2860,  1810,
    2653,  2958,  2960,  2959,   217,   717,   411,   938,   862,  1420,
     412,   939,   218,   722,   219,  1259,   341,  1415,   220,  1268,
     287,  1390,   221,  1278,  2355,  2356,  1279,   222,   719,   605,
    1176,   606,  1177,   607,  1178,   608,  1182,   609,  1179,   610,
    1180,   611,  1181,   223,   720,  1530,  2096,   317,   835,  1201,
    1285,  2357,  2358,   279,   823,  1286,   785,  2668,  1291,  2359,
    1292,   786,  2700,  1430,  2418,  2380,  2867,  3013,  1204,   865,
     787,   866,  1206,   868,  1207,   750,  1208,   752,   308,   244,
    1209,  1296,   788,  1324,   789,   790,   298,   831,   299,   832,
     863,  2003,   281,  1384,  1969,  1210,   749,  1882,  1883,  1884,
    2674,  1885,  1886,   224,   721,   225,   723,  1858,  1859,  1860,
    1861,   292,   827,  1973,  1974
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     238,   431,   253,   432,   460,   463,   464,   475,   477,   480,
     578,   277,   288,  2161,   305,   315,  1472,   579,  1562,  1088,
    1591,  1619,   353,   386,  1743,  2299,  1745,   318,   415,  1972,
     491,  2210,  1055,   502,   492,  2411,   918,   891,   897,  1691,
    1776,   731,   556,   620,   892,   641,   660,   677,   691,  1636,
     706,  1157,  1168,  2326,  2327,   626,  2626,   647,   667,   683,
     697,  1917,   712,   758,   493,   495,  1719,  1158,  1169,   665,
    1778,  1696,  1940,  1639,  1159,  1170,   893,  1749,  1515,   418,
    2089,  2150,  1793,  1944,   507,   809,   733,  1217,  1780,  1188,
    1966,  1831,  1144,  2230,  2185,   238,  1381,  2183,  1423,  1219,
    2232,  1221,  1100,  1282,  1160,  1171,  1517,  1488,   760,  1214,
     253,  2038,   830,  1161,  1172,  1894,  1162,  1173,  2245,   962,
    1163,  1174,  1539,   837,   870,  1184,   963,   853,   727,   879,
     811,   984,   884,  2394,   277,   843,   882,   988,  2463,  2508,
    2098,  2321,  2323,  2323,  2323,   288,  2323,  2492,  2583,  2397,
    2678,  2511,  2712,  2715,  2812,  2316,   838,  1979,   964,  2649,
    2776,  1308,   305,   826,  1251,  2970,  1720,  1065,  1250,  1303,
    2970,   588,   315,  1300,  1102,  2242,  1326,   231,  1424,   344,
    2186,  1336,   206,  1871,   318,  1872,   210,  1223,  2650,  2333,
     941,   227,   335,  2340,   228,   834,   230,  2341,   232,  1433,
    1452,  2936,   774,   336,  1526,   139,  1283,  1723,  1724,   754,
     353,   389,   345,   346,   347,  2191,   348,  2107,  2334,  1130,
    1189,   204,   205,   206,   207,   208,   209,   210,   211,   212,
    2730,   212,   227,   386,  1721,   228,   229,   230,   589,   232,
     233,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   536,   389,   345,   346,   347,  2933,   348,   886,  2731,
     389,   900,   887,  1413,   916,   931,  1414,   212,  2234,   415,
    2971,  1725,  2972,  2973,   857,  2971,   929,  2972,  2973,  1065,
    2974,  2975,  2976,   141,   858,  2974,  2975,  2976,  1287,  1288,
    1289,  1453,   888,   890,  1189,   204,   205,   206,   207,   208,
     209,   210,   211,   212,  2651,   158,   227,  1066,  1067,   228,
     229,   230,   231,   232,   233,   922,   937,   206,   207,   165,
     418,   210,  1309,   212,   206,   207,   227,   345,   346,   347,
     212,   348,   300,  2108,   390,   272,  2235,   541,  1230,   300,
     957,  2187,  2342,   968,   958,  1231,   491,  2192,   228,   502,
     492,  3001,  1225,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   368,   536,   227,   390,   310,   346,   347,   230,
     231,   779,   780,   781,   959,   961,  1980,  1232,  1425,  1893,
     493,   495,  2840,  1697,  2846,   419,  1011,  1029,  2652,   839,
    1060,  2732,  2097,  1252,  2977,  1284,   391,   541,  1434,  2977,
     507,   231,  2913,   556,  1121,  2937,  2934,   206,  3023,  2188,
    1119,   282,   869,   169,   852,  2193,   227,  2109,  2335,  1066,
    1067,   230,   575,   232,   612,   881,  2343,  2912,   949,  2251,
    1902,   172,  2246,  1540,   327,   166,   167,   391,   857,  3000,
     420,  1064,  1697,   883,  1387,   391,   283,  1128,   858,   541,
    1149,  2677,   575,  1792,  2865,  2694,  1118,   176,  1388,  2733,
     231,   193,  1422,   364,   365,   366,   620,   536,   369,  1290,
     327,  1101,  2590,  2252,  1222,  1903,  1199,  2100,   626,   485,
     486,   487,   842,  2594,   268,   269,  2304,   641,  1269,  1270,
    1271,  1272,  1273,  1274,  1275,  1276,   575,  1199,   368,   647,
    2247,  1153,  2736,  1695,   194,  3025,   660,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,  1541,   667,   227,
    2735,  1466,  2813,   677,  2101,   950,   536,  2393,  1467,   665,
    2312,   891,   897,  1187,   231,   683,   149,   691,   892,   402,
    2591,  1389,   918,   196,   731,  1653,  1676,   833,   201,   697,
    3048,  2595,   706,   541,   836,  1055,  2102,   368,  2713,  1226,
    1468,  1526,  1242,  1227,   712,   150,  1325,  1088,   403, -1446,
     893,   758,  2716,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,  1418,   334,  1830,  1419, -1766,  1562,   733,
     178,   962,  2161,  1228,  1229,   944,   143,  2210,   963,   342,
    1041,  1472,  2950,  2688,  2952,   293,   294,  2241,   335,  1550,
    2967,  2687,   541,   238,   400,  1157,   760,  1591,   524,   336,
    1460,   525,   809,  1459,   150,  1545,  1168,   481,  1277,  1042,
     964,  1158,   532,   253,  1457,  1761,   533,   829,  1159,  1917,
    1280,  1417,  1169,  1432,  1144,  1619,  1797,  1396,  1412,  1170,
    2309,  1341,  2311,  1363,  2597,  1866,  1391,  2585,  1733,  1796,
    2004,  2513,  1790,  1347,  1795,  1369,  1944,   811,  1160,  1967,
    2509,  2584,  2395,  2317,  2493,  1660,  2233,  1161,  2434,  1171,
    1162,  2190,  2090,  2337,  1163,   277,  2195,  2345,  1172,   288,
    2512,  1173,  2318,   305,  2398,  1174,   315,  2239,  2091,  2039,
    2314,  2319,  2255,  2370,  1794,  2111,  1788,  2659,   318,  2497,
    3007,  2634,  2660,  1832,  1385,  1734,  1890,  2593,  1900,  1913,
    1798,  1520,  2411,  1496,  2654,  1301,  1394,  1298,   368,   353,
     187,  1985,  1986,  1987,  1988,   206,   207,  1534,   386,   585,
    1220,   212,  1461,   612,   271,  1475,  1462,   523,   524,   230,
     541,   525,   886,   206,   207,   900,   887,  1130,   701,   212,
     143,   563,   271,   144,  2438,  1768,   403,   230,  1501,   716,
     916,   145,  1706,   272,   146,   718,  1463,  1465,   593,   594,
     595,   596,   597,   598,   931,   599,   888,   890,  2467,  2099,
     231,   272,   792,   906,   907,   929,   210,   793,   794,  2010,
     415,  2011,  1706,  2968,  1183,   792,  1249,   564,   565,   724,
     793,   794,   957,   206,   207,   968,   958,   210,  1042,   212,
     231,   922,   227,   188,   725,   228,   229,   230,   231,   232,
     233,  1735,   150,   802,  1736,   937,  1985,  1986,  1987,  1988,
     491,   747,  1911,   502,   492,  1912,   959,   961,   748,   566,
    1568,   418,  1597,  1626,   804,   795,   536,  1255,  1256,  1257,
    1804,   847,   133,  1011,  1624,   134,  1335,  1805,  1735,  2330,
    1230,  2301,  2331,  2409,   493,   495,  2864,  1231,  2288,  2289,
    2290,  2291,  2292,  2293,  1078,  1029,   536,   368,   189,   751,
    2671,  2672,   132,   133,   507, -2403,   134,   775,   135,  1806,
    2673,   777,   231,  1658,  1682,  1258,   147,   190,  2850,  1232,
     206,   207,   778,  1060,   210,  1680,   212,   368,  2847,   227,
     528,   529,   228,   229,   230,   791,   232,   233,  2951,   136,
     210,   137,  1189,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   541,  2161,   227,  1746,   824,   228,   229,   230,
    1744,   232,   233,  2751,  1665,  1689,  1748,   228,   942,   556,
     136,   148,   137,   828,  1064,   345,   346,   347,  1079,   348,
     841,  2210,   541,   272,   948,   167,   346,   347,  2409,  2410,
     779,   780,   781,   825,  2787,  1128,   850,   593,   594,   595,
     596,   597,   598,  1766,   599,  2848,  2244,  2662,  2323,   368,
    2348,   854,  1149,  2349,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   864,   508,   509,   510,   511,   512,
     867,  1799,   204,   205,   206,   207,   208,   209,   210,   211,
     212,  2348,   871,   227,  2350,   873,   228,   951,   230,   231,
     232,   876,   175,   753,  1774,  2691,   980,   792,  1080,  1535,
     529,  1199,   210,  1153,   345,   346,   347,  2348,   348,  2348,
    2351,   620,  2352,   513,   641,   985,   660,   986,   677,   792,
     691,   176,   989,   626,   793,   794,   647,   991,   667,  1092,
     683,  1800,   697,  2348,  1816,  1801,  2399,  2348,  1093,   665,
    2403,  1226,  1640,  1641,  1242,  1227,   731,   706,  1103,  2719,
     356,  2720,  2721,  2722,  2723,  1295,  1466,   987,  1718,   712,
     573,   563,   574,  1467,   758,  1802,  1803,  1917,  2348,  2348,
    1944,  2404,  2405,   891,   897,  1228,  1229,  1106,  2348,  1122,
     892,  2416,   364,   365,   366,  2348,  2847,   369,  2417,   177,
     773,   733,  1863, -2344,  2348,  1468,   918,  2420,   485,   486,
     487,  2033,  2034,  1653,   573,   563,   574,   564,   565,   760,
    2438,  1302,   893,   575,   737,  2396,  1254,  1260,  1472,   206,
     207,  2724,  2725,  1261,   962,   212,  1676,  1562,  1262,   206,
     207,   963,  2751,  1263,   300,   212,   764,  1341,   271,  2467,
    1264,  2348,  1055,   230,  2609,   809,  1293,  1923,  1294,  1347,
    1297,   564,   565,  1088,   178,   179,   180,   575,   815,  1363,
    1591,   310,  1619,   964,  2631,  1303,  2632,   272,  2787,  1950,
    2963,  1369,  1327,   181,  1329,  2531,  1331,  2562,   726,  1994,
    1995,  1996,  1997,  1998,  1999,  2000,  2001,  1157,  1108,  1168,
     811,  1739,  1332,   593,   594,   595,   596,   597,   598,  1108,
     599,  2680,  2681,  1158,  2339,  1169,   237,  1382,   252,  1383,
    1159,  1761,  1170,  1109,  1110,  1111,  1386,   276,  1392,  1777,
     304,   314,  1393,   332,  1109,  1110,  1111,  1144,  2348,   385,
     838,  2610,  1395,  1660,   414,   573,   563,   574,   356,   501,
    1160,  1397,  1171,   508,   509,   510,   511,   512,   555,  1161,
    2308,  1172,  1162,  1416,  1173,  1421,  1163,  2348,  1174,  1496,
    2635,   625,  3008,   646,   666,   682,   696,  1427,   711,   205,
     206,   207,   208,  1428,   282,  2636,   212,  1461,  2637,   227,
    1475,  1462,   564,   565,   230,  1429,   232, -1766,  2044,  1431,
    2068,   513,   732,  2348,   886,   390,  2669,   900,   887,  1436,
    2052,   237,  2076,  1450,  1501,  2348,  1108,  2348,  2682,   283,
    2686,  1463,  1465,  1451,   759,  2751,   252,  1456,  2787,  2002,
     205,   206,   207,   208,   916,   282,   931,   212,   888,   890,
    1130,  1109,  1110,  1111,   575,  1489,   810,   929,  1108,  2348,
     276,  1768,  2693,  1458,  1491,   957,   406,   407,   968,   958,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
    1518,  2134,   227,  1109,  1110,  1111,  1519,   230,   304,   232,
    1568,   972,   231,  2348,   269,   922,  2702,   937,   314,   959,
     961,  1536,   319,   320,   321,  2438,  1537,  1543,  2467,   322,
    2167,  1544,   283,   323,  1804,   332,  1634,   406,   407,  1597,
    2310,  1805,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,  1637,  1692,   227,  1033,  1230,   228,   229,   230,
     231,   232,   233,  1231,  1715,   344,  1716,  1626,   206,   207,
    1717,  1728,   210,  1806,   212,  1729,  1730,   227,  1624,   385,
     228,  1731,   230,   272,   232,  1011,  2348,  1732,  1029,  2815,
     541,  2348,  2215,  2861,  2816,  1232,  2862,  1738,   345,   346,
     347,  1658,   348,  1747,  1781,  2348,   272,   899,  2873,  2348,
     915,   930,  2906,  2909,  2348,   414,  2910,  2914,   593,   594,
     595,   596,   597,   598,  1682,   599,  1876,  1877,  1878,  1879,
    1880,  1516,  1265,  1266,  1267,  1680,   573,   563,   574,   344,
    1060,  1782,   206,   207,  1203,  1783,   210,  2531,   212,  1314,
    1315,   227,  1665,  1784,   228,   229,   230,  2307,   232,   233,
    1785,  1108,  1786,  2305,  2348,  1203,  1833,  2954,  2348,  2313,
    1834,  2955,   345,   346,   347,  1689,   348,  2990,  2562,  1835,
    2991,  1787,   940,   564,   565,  1789,  1109,  1110,  1111,   967,
    1791,  1064,   573,   563,   574,   501,  1829,  1838,  1128,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,  1766,
    1837,   227,  1862,  1864,   228,   229,   230,   231,   232,   233,
     573,   563,   574,  1218,  1867,  1149,  3042,  3043,  3044,  3045,
    3046,  3047,  1010,  1028,   535,  1078,  1059,   206,   207,   564,
     565,  1865,  1199,   212,  1985,  1986,  1987,  1988,  3058,   555,
    1868,  1869,   231,   231,  1870,  1800,  1888,   737,  1816,  1801,
    1774,  1873,  1896,  1466,  1546,  1547,  1548,   564,   565,   206,
    1467, -1537,   210,   282,  1895,  1939,  1153,  1226,   227,  1120,
    1242,  1227,  1898,   230,   764,   232,  1907,  1908,  1909,  1802,
    1803,  1897,  1899,  1127,  1901,  1906,  1148, -2430,  1380,  1970,
    1982,  1975,  1468,  1984,  1316,  1317,  1318,  2306,   283,  2006,
    1993,  1228,  1229,  2005,   407,  1319,  1320,  1321,   536,  1079,
    2009,  1653,  1198,  1676,   625,  2013,  2014,   484,  2016,   205,
     206,   207,   208,  2029,   210,   815,   212,  2030,  2031,   227,
     907,  2112,  2113,  1198,   230,   646,  2116,  2196,   367,   368,
     368,  2198,  2237,  2249,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   666,  1923,   227,  2238,  2240,   228,
     229,   230,  1299,   232,   233,  2243,  2256,  1341,  2258,  2257,
    2259,   682,   537,   538,   539,  2828,  2829,  2830,  2831,  1347,
    2260,  2347,  1950,  2531,  2338,   696,  2353,   356,   792,  1080,
    2354,   540,  2360,  1363,   541,  2362,  2363,  1761,  1241,  2364,
     711,  2365,  2369,  1479,   541,  1369,  2366,   541,  2367,   994,
     204,   205,   206,   207,   208,   209,   210,   211,   212,  2562,
    2368,  2375,  1213,  2377,  2381,   732,  1505,   231,   364,   365,
     366,   367,  2387,   369,  2388,   593,   594,   595,   596,   597,
     598,  1660,   599,  2389,   485,   486,   487,  2391,  1099,   237,
    2400,  2402,   759,   593,   594,   595,   596,   597,   598,   484,
     599,   205,   206,   207,   208,  2401,   282,  2406,   212,   252,
    2044,   227,  2407,   972,  1461,  2414,   230,  1475,  1462,  1779,
    2446,  2419,  2052,  1496,  2422,  2425,  1399,  1400,  2426,  2427,
    1401,  1402,  2428,   536,  2068,  2915,  2916,  2917,  2918,  1346,
    2431,  1368,  2433,   810,  2475,  2494,  2076,  2495,  1463,  1465,
    2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2496,  1641,
    2499,   276,  2500,   367,   368,  2501,  2502,  1768,  1501,   304,
    1016,  2504,   314,   206,   207,  2505,  2506,   210,   332,   212,
    2514,  2515,   227,  1033,  2586,   228,  2516,   230,   231,   232,
    1487,  2517,  2519,  2518,  2598,  1804,  2587,   537,  2600,   539,
    2599,  2603,  1805,   345,   346,   347,  2134,   348,  2601,  2604,
     364,   365,   366,   367,   385,   369,   540,  1216,  2605,   541,
    2018,  1474,  2019,  2020,  2021,  2022,   485,   486,   487,  1568,
    2611,   899,  2612,   344,  1806,  2613,   206,   207,  2614,  2167,
     210,  2615,   212,  2616,  1500,   227,   915,  2617,   228,   229,
     230,   231,   232,   233,   536,  2618,  2619,  2628,  2620,   575,
     930,  2638,  1597,  2639,  1626,  2640,   345,   346,   347,  2641,
     348,  2642,  1403,  1635,  2644,  1624,   414,  2539,  2643,  2570,
    2645,  1404,  1405,  1406,   367,   368,  2646,  2648,  2215,  2647,
    2280,   967,  1407,  1408,  1409,  2655,  2656,  2675,   953,  2657,
     205,   206,   207,   208,  2679,   210,  2689,   212,  2683,  1658,
     227,  1682,  2696,   228,  2703,   230,  2697,   232,   537,   501,
     539,  2706,  1680,   983,  2718,  2348,  1567,  2710,  1596,  1625,
    2814,   345,   346,   347,  2817,   348,  2818,   540,  2819,  1010,
     541,  2820,  2821,  1841,  1842,  1843,  2823,  2834,  2835,  1203,
    2836,  2630,   205,   206,   207,   208,  2629,   282,  2849,   212,
    1665,  1028,  1689,  2858,  2633,  2866,  2855,  2856,  2857,   953,
    2869,   205,   206,   207,   208,  2863,   210,  2871,   212,  1657,
    1681,   227,  1820,  2901,   228,  2902,   230,  2903,   232,  1059,
    2907,  2921,   206,   207,  1638,  1766,   210,  2924,   212,  2925,
    2926,   227,   345,   346,   347,  2927,   348,   300,  2939,   364,
     365,   366,   367,  2940,   369,  2943,  1800,  2964,  2945,  1816,
    1801,   344,  2946,  2947,   206,   485,   486,   487,   210,   406,
     407,  2965,  2953,   227,  2966,   555,   228,  2988,   230,   737,
     232,  2993,  2995,  2996,  3003,  3004,  1774,  3012,  3006,   268,
    1802,  1803,  3014,  3027,   345,   346,   347,   764,   348,  3030,
    3015,  1127,  3016,  3029,  1968,  3017,  1281,  3018,  3019,  1765,
    3020,  3021,  3022,  1923,  1976,  1977,  1950,  1978,  1148,  3038,
     364,   365,   366,   367,   535,   369,   205,   206,   207,   208,
    3040,   282,  3049,   212,  3050,  1927,   485,   486,   487,  3051,
     912,   926,   231,  3059,  3060,  1844,  1845,  1846,  3084,  2007,
    2008,  3081,  3082,  2012,  1847,  1848,  2446,  1954,  1849,  1850,
    2017,  2018,  3083,  2019,  2020,  2021,  2022,  1198,  3087,  3090,
    2044,  2037,   363,  3088,   205,   206,   207,   208,   815,  3094,
    3092,   212,  2052,  3093,  3095,  2475,  3098,  3097,  3100,   625,
    3102,  3104,   646,  3105,   666,  3107,   682,  3108,   696,  2068,
    1815,  2329,  2676,   406,   407,  2882,   433,   434,   536,   435,
    1241,  2076,   436,   437,   438,   439,  2392,   344,   440,   205,
     206,   207,   208,   441,   210,   711,   212,  2134,  1737,   227,
    2167,  2300,   228,  1538,   230,   442,   232,  2303,   367,   368,
    2759,   570,   358,  2288,  2289,  2290,  2291,  2292,  2293,  2539,
     345,   346,   347,   571,   348,   572,  2705,   732,   272,  1874,
    1875,  1876,  1877,  1878,  1879,  1880,  1056,  3085,  1479,  1881,
    3028,  2795,   537,  2994,   539,   759,  3053,  2833,  2839,  2949,
    2570,   443,   444,   364,   365,   366,   367,   368,   369,   370,
     371,   540,  1505,   445,   541,   446,   406,   407,   447,   448,
    1851,   449,  2215,   450,   451,   452,   739,   453,   454,  1852,
    1853,  1854,   455,  1922,   456,  1346,   457,   458,  2884,  2886,
    1855,  1856,  1857,   462,  2887,  2890,  1145,   465,   766,  3074,
    3075,  3076,  3077,  3078,  3079,  1949,   972,  1368,  2891,   466,
     467,   468,   363,   469,   205,   206,   207,   208,  1690,  2138,
     817,   212,   470,  2893,   471,   472,   810,  2263,  2264,  2265,
    2266,  2267,  2268,  2269,  2894,   994,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   473,   474,   227,  2171,  2896,
     228,   229,   230,   231,   232,   233,  2880,  1992,  2883,  2885,
    2888,  2889,  2892,  2895,  2899,  2897,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   272,  2898,   227,  2900,
    1983,   228,   229,   230,  2868,   232,   233,  2376,  2621,  2622,
    2287,  2288,  2289,  2290,  2291,  2292,  2293,  3089,  2385,   846,
     358,  2446,  1398,  1215,  2475,  2670,  1033,   272,     0,  2328,
    2219,  2088,     0,     0,   406,   407,  1474,     0,     0,   536,
    2261,  2262,     0,   364,   365,   366,   367,   368,   369,   370,
     371,     0,     0,   899,     0,     0,  2051,     0,  2075,  2759,
    1500,  2623,     0,     0,     0,     0,     0,     0,     0,   367,
     368,   205,   206,   207,   208,     0,   282,     0,   212,     0,
     915,   271,   930,     0,     0,  2539,   230,     0,     0,     0,
       0,     0,     0,  2320,     0,  2795,     0,     0,     0,     0,
       0,     0,     0,   537,   967,   539,     0,     0,     0,     0,
     272,     0,     0,     0,     0,     0,     0,  2133,     0,     0,
       0,  2570,   540,     0,     0,   541,  1567,     0,     0,   239,
       0,   254,     0,     0,     0,     0,     0,     0,     0,     0,
     278,     0,     0,   306,   316,     0,  2166,     0,   406,   407,
       0,     0,   387,   974,     0,  1596,   878,   416,  1971,     0,
       0,     0,   503,     0,     0,  1847,  1848,     0,     0,  1849,
    1850,   557,     0,     0,     0,     0,     0,     0,     0,  2775,
    1203,     0,     0,  1625,   627,  2361,   648,   668,   684,   698,
       0,   713,     0,     0,     0,     0,  1820,  1035,     0,     0,
       0,  1010,     0,     0,  1028,     0,     0,     0,  2214,  1437,
    1438,  2384,     0,  1439,  1440,   734,     0,  1657,  2390,  1965,
       0,     0,     0,     0,   239,  2841,  2842,  2287,  2288,  2289,
    2290,  2291,  2292,  2293,  1497,     0,   912,   761,     0,   254,
    1681,     0,  2759,     0,     0,  2795,     0,     0,     0,     0,
     926,     0,     0,     0,     0,     0,  1059,     0,     0,   812,
       0,     0,     0,   278,     0,  1189,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,  2843,     0,
     228,   229,   230,   231,   232,   233,  1205,     0,     0,     0,
       0,   306,     0,  1514,  2408,     0,     0,     0,   345,   346,
     347,   316,   348,  1927,     0,     0,   272,  1205,     0,     0,
       0,  1851,     0,     0,  1127,     0,     0,     0,     0,     0,
    1852,  1853,  1854,     0,     0,  1765,     0,     0,  2423,     0,
    1954,  1855,  1856,  1857,     0,     0,     0,     0,     0,     0,
       0,  1148,     0,  2430,   406,   407,  2285,  2286,  2287,  2288,
    2289,  2290,  2291,  2292,  2293,  1441,  1847,  1848,  1198,     0,
    1849,  1850,   387,     0,  1442,  1443,  1444,     0,     0,  1654,
    1677,     0,     0,     0,  1815,  1445,  1446,  1447,     0,  1056,
       0,     0,     0,     0,     0,  2294,     0,     0,     0,     0,
     901,     0,     0,   917,   932,     0,  1241,     0,   416,   739,
       0,     0,     0,  2117,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,     0,   227,     0,     0,   228,   229,
     230,   231,   232,   233,     0,  1479,   766,     0,  2450,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,     0,
     348,     0,     0,     0,   272,     0,     0,     0,     0,     0,
       0,     0,  2479,     0,     0,     0,     0,  2875,     2,  1762,
    2876,  2877,     6,     7,     8,     9,    10,    11,  1145,    13,
       0,     0,   969,     0,    15,     0,  1505,   817,   503,     0,
       0,  1922,   406,   407,     0,    16,    17,   536,     0,  2711,
       0,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,  1851,   227,     0,  1346,     0,     0,  1949,     0,
       0,  1852,  1853,  1854,  2138,  1012,  1030,   367,   368,  1061,
       0,     0,  1855,  1856,  1857,     0,     0,     0,     0,   206,
     207,  1368,   557,   210,     0,   212,     0,     0,   227,   358,
       0,   228,   229,   230,   231,   232,   233,  2171,     0,  2588,
    2589,   537,     0,   539,  2878,  1481,     0,     0,     0,   535,
       0,   205,   206,   207,   208,     0,   282,     0,   212,     0,
     540,     0,  2608,   541,     0,     0,  1129,   231,  1507,  1150,
       0,     0,  1189,   204,   205,   206,   207,   208,   209,   210,
     211,   212,     0,     0,   227,     0,  2219,   228,   229,   230,
     231,   232,   233,  1474,     0,  1200,  2445,   627,  2051,     0,
       0,     0,     0,     0,     0,   345,   346,   347,     0,   348,
       0,     0,     0,   272,     0,   974,  1200,  2932,   648,     0,
    2474,     0,  2075,     0,     0,     0,   206,   207,   406,   407,
     210,     0,   212,   536,     0,   227,     0,   668,   228,   229,
     230,     0,   232,   233,  1500,     0,     0,     0,     0,     0,
       0,   406,   407,     0,   684,     0,     0,  2663,  2664,  2665,
    2666,  2667,     0,   367,   368,     0,     0,     0,   698,  3061,
    3062,  3063,  3064,  3065,  3066,  3067,  3068,  3069,  3070,  3071,
    3072,  1243,  2133,   713,     0,  1035,   535,     0,     0,   206,
     207,  2685,     0,     0,     0,   212,     0,   537,     0,   539,
       0,     0,     0,  2690,   231,  1567,     0,     0,   734,     0,
       0,     0,     0,     0,     0,  2166,   540,  1820,     0,   541,
    2699,     0,     0,     0,     0,     0,     0,  2704,     0,     0,
       0,  2709,   239,     0,     0,   761,     0,     0,  1596,     0,
    1625,     0,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   254,  2538,   227,  2569,     0,   228,   229,   230,
     231,   232,   233,     0,  2214,     0,   407,     0,     0,     0,
     536,  1927,     0,  1775,  1954,     0,     0,     0,     0,     0,
       0,     0,  1348,   272,  1370,  1657,   812,  1681,     0,     0,
     344,     0,   205,   206,   207,   208,  2714,   210,  2717,   212,
     367,   368,   227,     0,   278,   228,  2046,   230,  2070,   232,
    1497,     0,   306,     0,  2450,   316,     0,     0,     0,     0,
       0,   406,   407,   345,   346,   347,     0,   348,     0,     0,
     912,   272,   926,     0,   537,   538,   539,   205,   206,   207,
     208,     0,   282,  2479,   212,     0,     0,   227,     0,     0,
       0,  1205,   230,   540,   232,     0,   541,   387,   205,   206,
     207,   208,     0,   282,  1476,   212,     0,     0,   271,   406,
     407,  1765,     0,   230,   901,     0,     0,   283,     0,     0,
       0,     0,     0,     0,  1822,  2138,     0,  1502,  2171,   917,
       0,     0,     0,     0,     0,  1815,     0,   272,  2763,     0,
       0,     0,     0,   932,     0,     0,     0,  2825,     0,  2827,
       0,     0,     0,     0,   406,   407,     0,     0,     0,   416,
       0,     0,  2838,     0,     0,     0,     0,     0,     0,  2799,
       0,     0,     0,     0,   969,   406,   407,     0,     0,     0,
       0,   739,     0,     0,     0,  2851,     0,  2852,     0,  1922,
       0,     0,  1949,     0,     0,     0,     0,     0,  2211,   766,
    2219,     0,   503,     0,     0,     0,  2462,  1654,     0,  1569,
       0,  1598,  1627,     0,     0,     0,     0,     0,   243,     0,
     258,     0,  1012,     0,     0,     0,  2872,     0,     0,     0,
    1677,     0,  2445,     0,     0,     0,     0,  1929,     0,     0,
       0,     0,     0,     0,  1030,     0,  1056,     0,     0,     0,
       0,     0,  2911,     0,     0,     0,     0,     0,  2051,  1956,
       0,  2474,  1659,  1683,     0,     0,     0,     0,     0,     0,
       0,     0,  1061,   631,     0,   652,     0,     0,     0,   484,
     817,   205,   206,   207,   208,     0,   282,  2075,   212,     0,
       0,   227,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,  2133,   742,     0,  2166,     0,     0,     0,
       0,     0,     0,   243,     0,  1762,  2758,     0,   557,     0,
       0,     0,     0,     0,     0,  2538,   769,     0,   258,  2450,
       0,  1145,  2479,     0,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,  1129,     0,   227,  2794,     0,     0,
       0,   230,  1767,   232,     0,     0,  2569,     0,     0,     0,
       0,  1150,     0,     0,  2942,   344,  2944,  2763,   206,   207,
    1481,     0,   210,     0,   212,     0,   283,   227,  2214,  2948,
     228,   229,   230,   231,   232,   233,     0,     0,     0,     0,
     364,   365,   366,   367,  1507,   369,     0,     0,   345,   346,
     347,     0,   348,  2799,     0,     0,   485,   486,   487,     0,
    1200,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,     0,   227,     0,     0,   228,   229,   230,   231,
     232,   233,   627,     0,     0,   648,     0,   668,   974,   684,
       0,   698,     0,  1817,     0,     0,     0,     0,     0,     0,
       0,  2140,   272,  1243,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   713,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
    2173,     0,     0,    16,    17,    18,     0,     0,     0,     0,
     406,   407,     0,     0,    19,     0,     0,     0,     0,     0,
     734,     0,   344,     0,     0,   206,   207,  2445,     0,   210,
    2474,   212,     0,     0,   227,     0,     0,   228,   761,   230,
       0,   232,     0,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   346,   347,  1035,   348,
       0,     0,  2221,   272,     0,  2758,     0,     0,     0,     0,
    2763,     0,    22,  2799,     0,    23,  1924,     0,  1348,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
     535,  2538,   205,   206,   207,   208,     0,   282,  1951,   212,
    1370,  2794,   227,     0,     0,     0,     0,   230,   231,   232,
       0,     0,     0,     0,    24,     0,  2440,     0,  2046,   812,
      25,     0,     0,     0,    26,    27,     0,  2569,     0,     0,
       0,     0,   283,     0,     0,   247,    28,   261,     0,     0,
    2469,     0,  2070,     0,     0,     0,     0,     0,     0,   309,
       0,     0,     0,     0,     0,  2491,     0,   362,     0,     0,
       0,     0,     0,     0,  1497,     0,     0,     0,     0,   406,
     407,     0,     0,     0,   536,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,     0,     0,
     636,    34,   656,   673,   687,   700,     0,   715,     0,     0,
      35,     0,     0,     0,   367,   368,     0,     0,     0,  1476,
       0,     0,  1205,     0,     0,     0,   631,     0,     0,     0,
       0,   746,     0,     0,     0,     0,   901,     0,  1822,  2053,
     247,  2077,     0,  1502,     0,     0,     0,   652,   537,     0,
     539,     0,     0,   772,     0,   261,     0,     0,  2758,     0,
       0,  2794,     0,   917,     0,   932,     0,   540,     0,     0,
     541,     0,     0,     0,     0,   822,     0,     0,     0,     0,
       0,     0,     0,  2533,     0,  2564,     0,   969,     0,     0,
       0,     0,     0,     0,  2211,     0,     0,     0,     0,     0,
    2135,     0,     0,     0,     0,     0,     0,   309,     0,  1569,
       0,     0,     0,     0,     0,  1654,     0,  1677,     0,     0,
       0,     0,     0,   421,  2231,   422,     0,   423,     6,  2168,
     424,     9,   425,     0,    12,     0,     0,   742,  1598,     0,
      15,     0,     0,     0,     0,  1929,     0,     0,     0,     0,
       0,     0,    17,    18,     0,   362,     0,     0,     0,     0,
       0,   243,    19,     0,   769,     0,  1627,     0,     0,     0,
       0,     0,  1956,     0,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,  1012,     0,     0,  1030,     0,     0,
       0,  2216,   426,     0,    21,     0,     0,     0,     0,     0,
    1659,  1762,     0,     0,     0,     0,   905,     0,     0,     0,
       0,  1352,     0,  1374,     0,     0,     0,     0,     0,     0,
     427,     0,     0,  1683,     0,  2117,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,     0,  1061,
     228,   229,   230,   231,   232,   233,  2621,  2622,  2287,  2288,
    2289,  2290,  2291,  2292,  2293,     0,     0,     0,   345,   346,
     347,     0,   348,     0,     0,     0,   272,  1481,    25,     0,
    2452,  2841,  2842,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
       0,     0,     0,     0,   428,     0,     0,     0,   979,     0,
       0,     0,     0,     0,  2481,     0,     0,  1129,     0,     0,
       0,     0,     0,     0,   406,   407,     0,     0,  1767,   536,
       0,     0,     0,     0,     0,     0,     0,     0,  1507,     0,
     554,     0,  2440,     0,  1150,     0,     0,     0,    32,     0,
       0,  1015,  1040,    33,     0,     0,     0,     0,     0,   367,
     368,  1200,     0,     0,     0,     0,     0,     0,  2046,     0,
       0,  2469,     0,     0,     0,     0,  2140,  1817,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   537,     0,   539,     0,  2070,     0,  1243,
       0,   535,     0,   205,   206,   207,   208,     0,   282,  2173,
     212,     0,   540,     0,     0,   541,  1164,  1175,  1573,   231,
    1602,     0,     0,     0,     0,     0,  2753,     0,     0,  1185,
       0,     0,     0,     0,     0,  2533,     0,     0,     0,     0,
       0,  1212,     0,   636,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2789,  2221,     0,
       0,     0,  1212,     0,   656,     0,  2564,     0,     0,  2935,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   407,     0,   673,  1924,   536,  1016,     0,  2211,   206,
     207,     0,     0,   210,     0,   212,     0,     0,   227,     0,
     687,   228,     0,   230,   231,   232,     0,     0,  1348,     0,
       0,  1951,     0,     0,   700,   367,   368,     0,     0,   345,
     346,   347,     0,   348,     0,     0,     0,  1248,     0,   715,
       0,     0,     0,     0,  1370,   535,     0,   205,   206,   207,
     208,     0,   282,     0,   212,     0,     0,   271,     0,   537,
       0,   539,   230,   231,   746,     0,     0,     0,     0,     0,
       0,     0,   913,   927,     0,     0,     0,     0,   540,     0,
     536,   541,     0,     0,     0,     0,   272,     0,   247,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,  1822,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
     367,   368,     0,     0,     0,     0,  1476,     0,     0,  2447,
       0,  2053,     0,     0,   406,   407,     0,  2440,     0,   536,
    2469,     0,     0,     0,     0,     0,     0,     0,  1358,     0,
    1379,     0,   822,  2476,   537,  2077,   539,     0,     0,     0,
       0,   631,     0,  1929,   652,     0,  1956,     0,     0,   367,
     368,     0,     0,   540,     0,  2753,   541,  1502,   309,   994,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
       0,   227,     0,     0,   228,   229,   230,   231,   232,   233,
       0,  2533,     0,   537,     0,   539,  2452,     0,  1057,     0,
       0,  2789,     0,     0,   362,  2135,     0,     0,     0,     0,
     272,   554,   540,     0,     0,   541,     0,     0,     0,   742,
    1486,     0,     0,     0,     0,  2481,     0,  2564,  1569,     0,
     905,     0,     0,     0,     0,     0,     0,   769,  2168,     0,
       0,     0,     0,  1513,     0,     0,     0,     0,   406,   407,
       0,     0,     0,   536,     0,     0,     0,  1887,  1146,     0,
    1889,  1598,     0,  1627,     0,     0,     0,  2140,     0,  2229,
    2173,     0,     0,     0,     0,  1932,  2540,  1352,  2571,     0,
    2765,     0,     0,   367,   368,     0,     0,  2216,     0,     0,
     979,     0,     0,     0,     0,     0,     0,  1959,     0,  1374,
       0,     0,     0,     0,     0,     0,     0,     0,  1659,     0,
    1683,  2801,     0,     0,     0,     0,     0,   537,     0,   539,
       0,     0,     0,     0,     0,  1579,     0,  1608,  1633,     0,
       0,     0,     0,     0,     0,     0,   540,     0,  1015,   541,
       0,     0,  2221,     0,     0,     0,     0,     0,  2753,     0,
       0,  2789,     0,     0,     0,     0,     0,     0,     0,     0,
    1040,     0,     0,  2117,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,     0,   227,     0,     0,   228,   229,
     230,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2811,  1767,     0,   345,   346,   347,  2015,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2027,     0,     0,     0,  1817,  2032,
       0,     0,     0,     0,     0,     0,     0,     0,  2057,     0,
    2081,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   536,     0,     0,
       0,     0,   535,     0,   205,   206,   207,   208,     0,  1750,
       0,   212,     0,     0,   271,     0,     0,     0,  1773,   230,
     231,  2452,  1924,     0,  2481,  1951,     0,   367,   368,     0,
       0,  2092,  2093,     0,     0,     0,     0,     0,     0,  2143,
    1164,     0,     0,   272,     0,     0,     0,     0,  1573,     0,
       0,  1175,     0,     0,     0,     0,  2114,  2115,     0,  2765,
       0,   537,     0,   539,     0,  2447,     0,     0,  2176,     0,
       0,     0,     0,     0,     0,     0,  1212,  1602,     0,     0,
     540,   406,   407,   541,     0,     0,   536,     0,     0,     0,
       0,  2053,     0,     0,  2476,  2801,     0,     0,   636,     0,
       0,   656,     0,   673,     0,   687,     0,   700,     0,  1828,
       0,     0,     0,     0,     0,     0,   367,   368,     0,  1248,
    2077,     0,     0,     0,     0,     0,  1498,     0,   913,     0,
       0,     0,     0,     0,   715,     0,  2135,  2507,     0,  2168,
       0,     0,   927,     0,   344,     0,     0,   206,   207,  2760,
     537,   210,   539,   212,     0,     0,   227,     0,  2540,   228,
     229,   230,     0,   232,   233,     0,   746,     0,     0,   540,
       0,     0,   541,     0,     0,     0,     0,   345,   346,   347,
    2796,   348,     0,     0,   772,     0,     0,     0,     0,  2571,
       0,     0,     0,     0,     0,     0,     0,     0,  2117,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,     0,
     227,  2216,     0,   228,   229,   230,   231,   232,   233,     0,
       0,     0,  1938,     0,  1358,     0,  2315,     0,     0,     0,
       0,   345,   346,   347,     0,   348,     0,     0,     0,     0,
       0,     0,  2765,     0,  1964,  2801,  1379,     0,     0,     0,
       0,  2302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,  1678,     0,     0,   822,     0,     0,     0,     0,
       0,  1057,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   536,   257,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   368,   505,     0,     0,   554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   630,     0,   651,   670,
    2447,     0,     0,  2476,     0,     0,   537,     0,   539,     0,
       0,  1763,     0,     0,     0,  1486,     0,     0,     0,     0,
    1146,     0,     0,     0,     0,   540,     0,   741,   541,     0,
       0,     0,   905,     0,     0,  2063,   242,  2087,  2760,  1513,
       0,     0,     0,  1016,     0,   205,   206,   207,   208,   768,
     210,   257,   212,     0,     0,   227,     0,     0,   228,     0,
     230,   231,   232,  1932,  2540,     0,     0,     0,     0,     0,
       0,   819,     0,     0,  2796,   280,   345,   346,   347,     0,
     348,     0,  2510,   979,   272,     0,   290,  1352,     0,     0,
    1959,     0,     0,     0,     0,     0,  2148,     0,     0,     0,
    2571,     0,     0,     0,     0,  1579,     0,     0,     0,     0,
       0,     0,     0,  1374,     0,     0,     0,     0,     0,     0,
       0,     0,   406,   407,     0,  2181,     0,   536,     0,     0,
       0,     0,     0,     0,  1608,   994,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,     0,     0,
       0,   360,   230,   231,   232,     0,     0,   367,   368,     0,
       0,     0,  1633,     0,     0,     0,  2413,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,     0,
    1015,     0,     0,  1040,     0,     0,     0,  2228,  2455,     0,
    2057,   537,     0,   539,     0,     0,     0,     0,     0,     0,
       0,     0,   903,     0,     0,   919,   934,     0,     0,     0,
     540,     0,  2484,   541,  2081,     0,     0,     0,     0,   536,
       0,  2760,     0,     0,  2796,     0,     0,     0,   994,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,     0,
     227,     0,     0,   228,   229,   230,   231,   232,   233,   367,
     368,     0,     0,  1225,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,     0,   227,     0,  2582,     0,   272,
     230,   231,     0,     0,  2143,     0,     0,     0,     0,     0,
       0,     0,     0,   537,   976,   539,     0,     0,     0,     0,
     505,     0,     0,     0,     0,     0,     0,  1573,     0,     0,
       0,     0,   540,     0,  1773,   541,     0,  2176,     0,     0,
       0,     0,   536,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1164,     0,  1175,     0,     0,     0,  1037,     0,
    1602,     0,     0,     0,     0,     0,     0,  1212,     0,     0,
       0,     0,   367,   368,     0,  2544,     0,  2575,     0,     0,
       0,     0,     0,  1828,     0,     0,     0,     0,     0,  2184,
       0,     0,     0,     0,   364,   365,   366,     0,  2047,   369,
    2071,     0,  1498,     0,     0,  1248,   537,     0,   539,     0,
     485,   486,   487,     0,     0,     0,     0,     0,  1131,     0,
       0,     0,   913,     0,   927,   540,     0,     0,   541,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,   630,
     227,     0,     0,   228,   229,   230,   231,   232,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     651,     0,     0,     0,     0,     0,     0,     0,     0,   272,
       0,     0,  2149,     0,     0,     0,     0,     0,     0,   670,
    1938,  1189,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,     0,   227,     0,     0,   228,   229,   230,   231,
     232,   233,     0,     0,  1358,     0,     0,  1964,     0,     0,
       0,     0,   536,     0,   345,   346,   347,     0,   348,     0,
       0,     0,   272,  1245,     0,     0,     0,     0,     0,     0,
    1379,     0,     0,     0,     0,     0,     0,     0,     0,  2658,
    2212,     0,   367,   368,     0,     0,     0,     0,     0,  1655,
     741,   994,   204,   205,   206,   207,   208,   209,   210,   211,
     212,  1932,     0,   227,  1959,     0,   228,   229,   230,   231,
     232,   233,  1678,     0,   242,     0,   537,   768,   539,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1057,     0,
       0,     0,   272,     0,   257,   540,     0,     0,   541,     0,
       0,     0,  1486,     0,  2455,  2461,     0,  2063,  2698,     0,
       0,     0,     0,     0,  2701,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1351,     0,  1373,     0,   819,  2490,
    2057,  2087,     0,  2484,     0,   536,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
     290,     0,  2182,  1513,     0,     0,     0,  1763,     0,  2081,
       0,     0,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,     0,  1146,     0,  2143,     0,     0,  2176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2768,     0,
     360,  2148,     0,     0,     0,     0,  2729,  2544,     0,   537,
       0,   539,     0,     0,     0,     0,  1483,     0,     0,     0,
       0,     0,     0,     0,  1579,     0,   903,     0,   540,  2804,
       0,   541,     0,     0,  2181,     0,     0,     0,  2575,  1509,
       0,   919,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   934,     0,  1608,   535,  1633,
     205,   206,   207,   208,     0,   282,     0,   212,     0,     0,
     227,     0,  2550,     0,  2581,   230,   231,   232,     0,     0,
       0,     0,     0,  2228,     0,     0,   976,   994,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,     0,   227,
     283,     0,   228,   229,   230,   231,   232,   233,     0,  2826,
       0,     0,     0,     0,   505,     0,     0,     0,     0,     0,
       0,  1572,     0,  1601,  1629,     0,     0,     0,   272,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   407,     0,
       0,     0,   536,     0,     0,  2117,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,  1037,   227,     0,     0,
     228,   229,   230,   231,   232,   233,   406,   407,     0,     0,
       0,   536,   367,   368,  1661,  1685,     0,     0,   345,   346,
     347,     0,   348,     0,     0,     0,     0,     0,     0,  2455,
    1773,     0,  2484,     0,     0,  2874,     0,     0,     0,     0,
       0,   367,   368,     0,     0,     0,   537,     0,   539,     0,
       0,     0,     0,     0,  1828,     0,     0,     0,     0,     0,
       0,     0,   240,     0,   255,   540,     0,  2768,   541,   536,
    2922,  2923,     0,     0,   289,   537,   307,   539,     0,     0,
    2928,  2929,  2930,  2931,   354,     0,     0,     0,  2441,     0,
    2047,     0,     0,  2544,   540,   504,  1131,   541,     0,   367,
     368,     0,     0,  2804,  1769,     0,     0,     0,  1938,     0,
       0,  1964,  2470,     0,  2071,     0,     0,   628,     0,   649,
     669,   685,     0,     0,     0,     0,     0,     0,     0,  2575,
       0,     0,     0,   537,     0,   539,  1498,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   735,     0,
       0,  2461,   540,     0,     0,   541,     0,   240,     0,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
     762,   227,   255,     0,   228,   229,   230,  2063,   232,   233,
    2490,     0,     0,     0,   630,     0,     0,   651,     0,   670,
       0,     0,   813,     0,     0,  1824,  2956,  2957,     0,     0,
     272,     0,  2961,  2962,     0,  1245,  2087,   289,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,  2148,   227,   307,  2181,   228,   229,   230,   231,
     232,   233,     0,     0,     0,  2774,     0,     0,     0,     0,
       0,     0,     0,     0,  2550,  2534,     0,  2565,     0,     0,
    2768,     0,   741,  2804,     0,     0,  2212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2810,     0,     0,     0,
     768,     0,   354,     0,     0,  2581,     0,  1655,     0,  1678,
       0,  3002,     0,     0,  3005,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2228,     0,     0,
       0,  3009,  3010,  3011,     0,     0,     0,     0,  1931,     0,
    1351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   902,     0,     0,     0,   933,     0,     0,
    1958,     0,  1373,     0,     0,     0,     0,     0,     0,  3032,
    3033,  3034,  3035,     0,     0,     0,     0,     0,     0,     0,
       0,   819,     0,  2117,   204,   205,   206,   207,   208,   209,
     210,   211,   212,  1763,     0,   227,     0,     0,   228,   229,
     230,   231,   232,   233,     0,     0,     0,     0,     0,  3055,
    3056,     0,     0,     0,     0,     0,   345,   346,   347,     0,
     348,     0,     0,     0,   272,     0,     0,   535,     0,   205,
     206,   207,   208,     0,   282,   970,   212,     0,     0,   271,
       0,   504,     0,     0,   230,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2461,     0,     0,  2490,
       0,     0,   406,   407,     0,     0,     0,   536,   272,     0,
       0,  1483,     0,   484,     0,   205,   206,   207,   208,  1031,
     210,     0,   212,     0,     0,   227,     0,     0,   903,     0,
     230,  2056,     0,  2080,  2774,  1509,     0,   367,   368,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,   536,     0,     0,  2441,   919,     0,   934,     0,     0,
    2550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2810,   537,     0,   539,     0,     0,     0,     0,     0,   976,
    2047,   367,   368,  2470,     0,     0,     0,     0,     0,     0,
     540,     0,  2142,   541,     0,     0,  2581,     0,     0,     0,
       0,  1572,     0,     0,     0,     0,     0,     0,     0,  2071,
     628,     0,     0,     0,     0,   537,     0,   539,     0,     0,
       0,  2175,     0,     0,   364,   365,   366,   367,     0,   369,
    1601,   649,     0,     0,   540,     0,     0,   541,  2754,     0,
     485,   486,   487,     0,     0,     0,     0,  2534,     0,     0,
     669,     0,     0,     0,     0,     0,     0,     0,  1629,     0,
       0,     0,     0,     0,     0,     0,     0,   685,     0,  2790,
       0,     0,     0,     0,     0,     0,     0,     0,  2565,  1037,
       0,     0,     0,  2223,     0,     0,     0,     0,     0,     0,
       0,     0,  1661,     0,  1244,     0,     0,     0,     0,     0,
    2212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1685,     0,  2774,     0,     0,
    2810,   735,  1016,     0,   205,   206,   207,   208,     0,   210,
       0,   212,     0,     0,   227,     0,     0,   228,     0,   230,
     231,   232,     0,     0,     0,   240,     0,     0,   762,     0,
       0,     0,     0,     0,     0,   345,   346,   347,     0,   348,
       0,     0,     0,   272,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   535,     0,   205,   206,
     207,   208,     0,  1750,     0,   212,     0,     0,   271,  1131,
       0,     0,     0,   230,   231,  1349,     0,  1371,     0,   813,
    1769,   406,   407,     0,     0,     0,   536,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   272,     0,   227,
       0,   289,   228,   229,   230,   307,   232,   233,   245,  2441,
     259,     0,  2470,     0,     0,     0,   367,   368,     0,     0,
     291,     0,   241,     0,   256,     0,     0,     0,     0,  1824,
     361,     0,     0,     0,     0,   406,   407,     0,     0,     0,
     536,   354,     0,     0,   355,     0,     0,  2754,     0,     0,
     537,  1245,   539,     0,     0,     0,     0,  1477,     0,     0,
       0,     0,     0,   633,     0,   653,   671,   902,     0,   540,
     367,   368,   541,  2534,     0,     0,     0,   629,     0,   650,
    1503,     0,     0,  2790,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   744,     0,   933,     0,     0,     0,
       0,     0,     0,   245,   537,     0,   539,     0,   736,  2565,
       0,     0,     0,     0,     0,     0,   770,   241,   259,     0,
       0,     0,     0,   540,     0,     0,   541,   970,     0,     0,
     763,     0,   256,     0,     0,     0,  1931,     0,   820,     0,
     994,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       0,     0,   814,   291,     0,   504,     0,     0,   231,     0,
    1351,     0,  1570,  1958,  1599,  1628,   994,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     0,     0,   227,     0,
       0,     0,     0,   230,   231,   232,  1373,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,  1031,     0,   227,
       0,     0,   228,   229,   230,   231,   232,   233,   283,     0,
     953,     0,   205,   206,   207,   208,  1684,   210,   361,   212,
       0,     0,   227,     0,   536,   228,     0,   230,   272,   232,
    2754,     0,   355,  2790,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   346,   347,     0,   348,     0,     0,
     536,     0,     0,     0,   367,   368,     0,     0,  1483,     0,
       0,  2454,     0,  2056,     0,     0,   406,   407,     0,     0,
       0,   357,     0,   935,     0,     0,     0,     0,     0,     0,
     367,   368,     0,     0,     0,  2483,     0,  2080,   537,     0,
     539,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   540,     0,  1509,
     541,     0,     0,     0,   537,     0,   539,     0,     0,     0,
       0,   364,   365,   366,   367,     0,   369,     0,     0,     0,
       0,     0,     0,   540,     0,   738,   541,   485,   486,   487,
       0,     0,     0,     0,     0,     0,     0,  2142,     0,     0,
       0,   977,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,   971,     0,     0,     0,     0,
    1572,     0,     0,     0,     0,     0,     0,     0,     0,   816,
    2175,     0,     0,     0,     0,   628,     0,     0,   649,     0,
     669,     0,   685,     0,     0,  1039,  1818,     0,     0,     0,
       0,     0,     0,  1601,     0,  1629,  1244,     0,     0,  1032,
       0,     0,     0,     0,     0,     0,     0,     0,  2543,     0,
    2574,     0,     0,     0,     0,     0,     0,     0,     0,  2223,
    1799,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       0,     0,   227,     0,     0,   228,     0,   230,   231,   232,
    1661,     0,  1685,   735,     0,     0,     0,     0,     0,   357,
       0,     0,     0,   345,   346,   347,     0,   348,     0,     0,
       0,   762,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,     0,     0,   227,     0,   633,   228,   229,   230,
     231,   232,   233,     0,     0,     0,     0,     0,  1202,     0,
     629,     0,     0,     0,     0,     0,     0,   653,     0,  1925,
       0,  1349,     0,   272,     0,     0,     0,     0,     0,  1202,
       0,   650,     0,     0,     0,     0,   671,     0,     0,     0,
       0,  1952,     0,  1371,     0,     0,  1769,     0,     0,     0,
       0,   364,   365,   366,     0,     0,   369,     0,     0,     0,
       0,     0,   813,     0,     0,     0,     0,   485,   486,   487,
    1824,     0,     0,     0,     0,  1189,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,     0,     0,
     228,   229,   230,   231,   232,   233,     0,     0,     0,     0,
       0,     0,   973,     0,     0,     0,     0,   744,   345,   346,
     347,     0,   348,     0,     0,     0,   272,     0,     0,     0,
       0,   736,     0,     0,  1931,     0,     0,  1958,     0,     0,
       0,   245,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,  1034,     0,   763,     0,
       0,   259,  1477,     0,   406,   407,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,     0,  2454,     0,   902,
       0,     0,  2054,   246,  2078,   260,  1503,     0,     0,     0,
       0,  1354,     0,  1375,     0,   820,     0,     0,     0,     0,
       0,     0,     0,  2056,     0,  1350,  2483,  1372,   933,   814,
       0,     0,     0,     0,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     970,     0,  2080,     0,     0,     0,     0,     0,   634,     0,
     654,     0,     0,  2136,     0,     0,     0,     0,  2142,     0,
       0,  2175,  1570,     0,     0,     0,     0,   361,     0,     0,
       0,  2767,     0,     0,     0,     0,     0,     0,     0,   745,
    2543,   355,  2169,  1484,     0,     0,     0,     0,   246,     0,
       0,  1599,     0,     0,     0,     0,     0,  1478,     0,     0,
       0,   771,  2803,   260,     0,     0,  1510,     0,     0,     0,
       0,  2574,     0,     0,     0,     0,     0,     0,     0,  1628,
    1504,     0,   935,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2223,     0,     0,     0,     0,     0,     0,
    1031,     0,     0,     0,  2217,     0,     0,     0,     0,     0,
       0,     0,     0,   977,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   971,   738,     0,
       0,     0,     0,     0,     0,     0,  1684,  1189,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,  1575,   227,
    1604,  1631,   228,   229,   230,   765,   232,   233,     0,     0,
       0,     0,  1571,     0,  1600,     0,     0,     0,     0,     0,
     345,   346,   347,     0,   348,     0,     0,     0,   272,     0,
       0,     0,     0,  1039,  1189,   204,   205,   206,   207,   208,
     209,   210,   211,   212,     0,     0,   227,  1032,     0,   228,
     229,   230,  1687,   232,   233,     0,   816,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,   347,
       0,   348,  2454,     0,     0,  2483,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2767,     0,     0,     0,     0,     0,     0,     0,   357,     0,
    1818,   359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1480,     0,  2543,     0,     0,     0,
       0,     0,  1244,     0,     0,     0,  2803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1506,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2574,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   740,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   973,     0,     0,   767,     0,     0,
       0,     0,     0,  1202,     0,     0,     0,     0,     0,     0,
       0,   633,     0,     0,   653,     0,   671,  1925,     0,   818,
       0,     0,  1826,     0,     0,   629,     0,     0,   650,     0,
       0,     0,     0,     0,     0,     0,  1819,     0,     0,     0,
       0,  1349,     0,     0,  1952,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1034,     0,     0,  1371,     0,     0,
       0,   634,     0,     0,     0,     0,     0,     0,     0,   744,
       0,     0,     0,  2767,     0,     0,  2803,     0,     0,     0,
       0,     0,   654,   736,     0,     0,     0,   770,     0,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1934,     0,  1354,     0,  1477,
       0,     0,  2448,     0,  2054,     0,     0,     0,     0,  1926,
       0,  1350,     0,     0,     0,     0,     0,  1960,     0,  1375,
       0,     0,     0,     0,     0,     0,  2477,     0,  2078,     0,
       0,  1953,     0,  1372,     0,     0,     0,     0,   820,     0,
       0,     0,   745,     0,     0,     0,     0,     0,     0,     0,
    1503,     0,   814,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   771,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,  2136,     0,
       0,     0,   975,     0,     0,     0,     0,     0,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,     0,
     545,  1570,     0,     0,     0,     0,  1356,     0,  1377,     0,
       0,  2169,     0,  1821,     0,     0,     0,     0,  1484,     0,
       0,     0,     0,     0,     0,     0,  1036,     0,     0,     0,
       0,     0,  1478,     0,  1599,     0,  1628,     0,  2059,     0,
    2083,     0,  1510,     0,     0,     0,     0,     0,     0,  2541,
       0,  2572,  2055,     0,  2079,     0,  1504,     0,     0,     0,
    2217,     0,     0,     0,   935,     0,     0,     0,     0,     0,
     738,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1684,     0,     0,   977,     0,   765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2145,
     971,     0,     0,     0,     0,     0,     0,     0,  1575,     0,
       0,     0,     0,  2137,     0,     0,     0,     0,     0,     0,
       0,     0,  1571,     0,     0,     0,  1928,     0,  2178,     0,
       0,     0,     0,     0,     0,     0,     0,  1604,     0,     0,
       0,     0,  2170,     0,     0,     0,     0,     0,  1955,     0,
       0,  1600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1631,     0,     0,     0,   816,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1039,     0,     0,     0,
    2225,  1818,     0,  1577,     0,  1606,     0,     0,     0,     0,
    1032,     0,     0,     0,  2218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   889,
       0,     0,  1687,     0,     0,     0,     0,     0,   740,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1925,     0,     0,  1952,     0,
       0,     0,     0,     0,     0,   767,     0,     0,     0,  1480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   546,   562,     0,
       0,     0,     0,  1506,     0,     0,     0,     0,  2448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   960,     0,     0,     0,     0,   818,   494,     0,     0,
       0,     0,     0,     0,  2054,     0,     0,  2477,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2139,     0,     0,  2078,   995,  1017,     0,     0,  1045,     0,
       0,     0,     0,     0,  1202,     0,  1826,     0,     0,  2136,
       0,   545,  2169,     0,     0,     0,     0,     0,   359,  2172,
    1819,     0,  2761,     0,     0,     0,     0,     0,     0,     0,
       0,  2541,     0,     0,  1482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2797,     0,     0,     0,  1508,  1134,     0,
       0,     0,  2572,     0,     0,     0,   634,     0,     0,   654,
       0,     0,     0,     0,     0,     0,     0,  1034,     0,     0,
       0,  2220,     0,     0,  2217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   975,     0,     0,     0,     0,     0,
       0,     0,     0,  1934,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1926,     0,     0,
       0,     0,     0,     0,   745,     0,     0,  1354,     0,     0,
    1960,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1350,   771,     0,  1953,     0,     0,     0,     0,     0,
       0,     0,     0,  1375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1036,     0,     0,  1372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,  1356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1962,  2448,  1377,     0,  2477,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1484,     0,     0,  2457,     0,
    2059,     0,     0,     0,     0,     0,     0,  1821,     0,  1478,
       0,  2761,  2449,     0,  2055,     0,     0,     0,     0,     0,
       0,     0,  2486,     0,  2083,     0,     0,     0,     0,     0,
       0,   996,  1018,     0,     0,  1046,  2478,  2541,  2079,  1086,
       0,     0,     0,     0,     0,     0,  1510,  2797,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1504,     0,     0,     0,     0,   562,     0,     0,     0,     0,
       0,     0,     0,  2572,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1135,     0,     0,  2137,     0,
       0,     0,     0,  2061,     0,  2085,     0,  1575,     0,     0,
       0,     0,     0,  1464,  1928,     0,     0,  2178,     0,     0,
       0,  1571,     0,   889,     0,     0,     0,     0,     0,     0,
       0,  2170,     0,  1823,     0,     0,     0,     0,     0,     0,
    1604,  1955,  1631,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1600,  2546,     0,  2577,     0,     0,
       0,     0,     0,     0,  2146,     0,  2225,     0,     0,  2542,
       0,  2573,     0,  1577,     0,     0,     0,     0,     0,     0,
    2218,     0,     0,   960,     0,     0,     0,     0,     0,  1687,
     740,     0,     0,  2179,  2761,     0,     0,  2797,     0,     0,
       0,     0,  1606,     0,     0,     0,     0,     0,   767,     0,
       0,   494,     0,     0,     0,     0,     0,     0,  1552,     0,
    1581,  1609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,     0,  1480,     0,     0,  2451,
       0,     0,     0,     0,     0,     0,  1930,     0,     0,     0,
       0,     0,     0,  1017,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2480,     0,     0,     0,     0,  1957,     0,
       0,  1643,  1666,     0,     0,     0,     0,     0,     0,     0,
       0,  1045,     0,     0,     0,     0,     0,  1506,     0,   818,
       0,     0,     0,     0,     0,     0,     0,  1826,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1819,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2139,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1934,     0,     0,  1960,     0,     0,     0,  2172,     0,
       0,  1751,     0,     0,     0,  1926,     0,     0,  1953,     0,
    1134,     0,     0,     0,     0,     0,     0,     0,     0,  1482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2457,     0,     0,     0,     0,     0,
       0,     0,     0,  1508,     0,     0,     0,  2220,  2449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2059,     0,     0,  2486,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2055,     0,     0,  2478,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   975,     0,  2083,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2141,     0,     0,  2079,     0,  2145,     0,     0,  2178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2770,  2137,
       0,     0,  2170,     0,     0,     0,     0,  2546,     0,  2174,
       0,     0,  2762,     0,     0,  1553,     0,  1582,  1610,     0,
       0,  2542,     0,     0,     0,     0,     0,     0,   996,  2806,
       0,     0,     0,     0,     0,     0,     0,     0,  2577,     0,
       0,     0,     0,  2798,     0,     0,     0,     0,  1936,     0,
    1018,     0,  2573,     0,     0,     0,     0,     0,  1821,     0,
    2225,     0,     0,     0,     0,     0,     0,  1036,  1644,  1667,
       0,  2222,  1356,     0,  2218,  1962,     0,     0,  1046,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1377,     0,
       0,  1701,  1710,     0,     0,     0,     0,  1086,   384,     0,
       0,     0,  1928,   413,     0,  1955,     0,     0,   500,     0,
       0,     0,     0,     0,   546,     0,   562,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     623,     0,   644,   663,   680,   694,     0,   709,     0,     0,
       0,     0,     0,     0,     0,  2451,     0,     0,  1752,     0,
       0,     0,     0,     0,     0,     0,     0,  1135,     0,     0,
       0,     0,     0,  2459,     0,  2061,     0,     0,     0,     0,
       0,     0,     0,     0,  2480,     0,     0,     0,     0,  2457,
       0,     0,  2486,     0,     0,     0,     0,  2488,     0,  2085,
       0,     0,     0,  2449,     0,     0,  2478,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1464,     0,
       0,     0,     0,     0,     0,     0,  2139,  2770,     0,  2172,
       0,     0,     0,     0,     0,   889,     0,  1823,     0,  2764,
       0,  2762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2546,     0,     0,     0,     0,     0,  2146,
       0,     0,     0,  2806,     0,     0,     0,  2542,     0,     0,
    2800,     0,     0,     0,     0,     0,     0,  2798,     0,     0,
       0,     0,  1577,     0,     0,     0,   960,     0,     0,  2577,
       0,     0,  2179,     0,     0,     0,     0,     0,     0,  2118,
       0,  2220,     0,  2573,     0,     0,     0,     0,  1552,     0,
       0,     0,     0,     0,     0,  1606,     0,     0,   384,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2151,     0,
    2548,     0,  2579,     0,     0,     0,     0,  1581,     0,     0,
       0,     0,     0,     0,  1930,     0,   898,     0,     0,   914,
     928,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1609,     0,     0,     0,     0,
       0,  1957,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   995,     0,     0,  1017,     0,     0,     0,
    2200,     0,     0,     0,     0,     0,     0,     0,     0,  1643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2770,     0,     0,  2806,     0,     0,     0,     0,     0,     0,
       0,     0,  1666,     0,  2762,     0,     0,  2798,   966,     0,
    2451,     0,     0,  2480,   500,     0,     0,     0,  1045,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1482,     0,  2764,  2453,
       0,  1008,     0,     0,     0,  1058,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2800,     0,     0,  1751,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1508,     0,     0,
       0,     0,     0,  1134,     0,     0,  1936,     0,     0,  1962,
       0,     0,     0,     0,     0,  1147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2141,     0,     0,     0,     0,
       0,  1196,     0,   623,     0,     0,     0,     0,     0,  2459,
       0,     0,     0,     0,     0,     0,  2119,     0,     0,     0,
       0,     0,  1196,     0,   644,  1553,     0,     0,  2174,     0,
       0,     0,     0,     0,     0,  2061,   388,     0,  2488,     0,
       0,   417,     0,   663,     0,  2152,   506,     0,     0,     0,
       0,     0,     0,     0,  1582,     0,     0,     0,     0,     0,
     680,     0,     0,     0,  2085,     0,     0,     0,   635,     0,
     655,   672,   686,   699,   694,   714,     0,  2222,     0,     0,
    2146,     0,  1610,  2179,     0,     0,     0,  1239,     0,   709,
       0,  2764,     0,  2772,  2800,     0,     0,     0,     0,     0,
     996,     0,  2548,  1018,     0,     0,     0,  2201,     0,     0,
       0,     0,     0,     0,     0,     0,  1644,     0,     0,     0,
       0,     0,     0,     0,  2808,     0,     0,     0,     0,     0,
       0,     0,     0,  2579,     0,     0,     0,     0,     0,  1667,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1046,     0,     0,     0,     0,
       0,     0,     0,     0,  1701,     0,     0,     0,     0,     0,
       0,     0,     0,  1710,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1086,     0,     0,     0,     0,  1344,     0,
    1366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1823,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1752,  1464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1135,     0,     0,     0,     0,     0,   388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1930,   384,     0,  1957,     0,     0,     0,     0,
    1473,     0,     0,     0,   904,     0,     0,   921,   936,     0,
     898,     0,   417,     0,  2459,     0,     0,  2488,     0,     0,
       0,     0,     0,  1499,     0,   914,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2453,     0,     0,     0,   928,
       0,     0,     0,     0,  2118,     0,     0,     0,     0,     0,
       0,     0,  2772,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,  2482,     0,     0,  1552,     0,     0,
     966,     0,     0,     0,     0,     0,     0,  2151,  2548,     0,
       0,     0,     0,     0,     0,     0,   978,     0,  2808,     0,
       0,     0,   506,     0,     0,     0,     0,     0,   500,     0,
    1581,     0,  1609,     0,     0,  1565,  2141,  1594,  1622,  2174,
       0,     0,     0,     0,  2579,  2521,     0,  2552,  1008,  2766,
       0,     0,     0,     0,     0,     0,  2200,     0,     0,  1014,
       0,     0,     0,  1063,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1643,     0,  1666,
    2802,     0,     0,     0,     0,     0,     0,     0,  1656,  1679,
       0,     0,     0,     0,     0,     0,     0,     0,  1058,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1211,
       0,   635,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1751,     0,  2772,     0,     0,  2808,     0,
    1211,     0,   655,     0,     0,     0,     0,     0,  1764,     0,
       0,     0,     0,     0,     0,     0,     0,  1147,     0,     0,
       0,   672,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   699,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1247,  1196,   714,     0,     0,
    2453,     0,     0,  2482,     0,     0,     0,     0,     0,     0,
       0,  2119,     0,     0,     0,     0,     0,     0,   623,     0,
       0,   644,     0,   663,     0,   680,     0,   694,     0,  1813,
       0,     0,     0,     0,  1553,     0,     0,     0,  2766,  1239,
       0,     0,     0,     0,  2152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   709,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1582,     0,  1610,
       0,     0,     0,     0,  2802,     0,     0,     0,     0,     0,
       0,     0,  2522,     0,  2553,     0,     0,     0,     0,     0,
       0,     0,     0,  2201,     0,     0,  1357,     0,  1378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1644,  2118,  1667,     0,  2151,     0,
       0,     0,     0,     0,     0,     0,  1701,     0,  2741,  1710,
       0,     0,     0,     0,     0,     0,     0,  2521,     0,     0,
       0,     0,  1920,     0,  1344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2777,
       0,     0,     0,     0,  1947,     0,  1366,     0,  2552,     0,
       0,   388,     0,     0,     0,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   904,     0,
    2200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1752,  1512,     0,   921,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   936,     0,     0,
       0,  2766,     0,     0,  2802,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   978,     0,
       0,     0,     0,     0,     0,     0,   558,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   632,
       0,     0,     0,     0,     0,  1473,   506,     0,     0,   600,
       0,     0,     0,  1578,     0,  1607,  1632,     0,     0,     0,
       0,     0,   898,     0,     0,  2049,  1014,  2073,     0,  1499,
     743,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   914,
       0,   928,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1664,  1688,     0,     0,
       0,     0,     0,   966,     0,     0,  1063,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2131,  2741,     0,     0,
       0,     0,     0,     0,     0,  1565,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2521,     0,  2164,     0,     0,     0,     0,
       0,     0,  2119,  2777,  1594,  2152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2742,     0,     0,     0,     0,
       0,     0,     0,     0,  2522,     0,     0,     0,     0,  2552,
       0,     0,  1622,     0,     0,     0,  1772,     0,     0,     0,
       0,     0,     0,     0,     0,  1152,  2778,     0,     0,     0,
    1008,     0,     0,     0,     0,  2553,     0,  2213,     0,     0,
       0,     0,     0,     0,     0,     0,  1656,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1679,
       0,     0,     0,     0,  1211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1058,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   635,     0,     0,   655,
       0,   672,     0,   686,     0,   699,     0,  1827,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2741,     0,   714,  2777,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1196,     0,     0,
    1013,  1038,     0,     0,  1062,     0,     0,     0,  1091,     0,
       0,     0,     0,  1813,  1001,  1023,     0,   558,  1051,  1074,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1937,     0,  1357,     0,  2742,  1239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1963,     0,  1378,     0,     0,     0,     0,     0,
    2522,     0,     0,     0,  1151,     0,     0,     0,     0,     0,
    2778,     0,     0,     0,     0,     0,     0,     0,  1140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     600,     0,   632,     0,     0,     0,  2553,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1920,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1344,     0,     0,  1947,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1485,     0,     0,     0,     0,     0,     0,
    1366,     0,     0,     0,     0,     0,  1246,     0,     0,     0,
     904,     0,     0,  2062,     0,  2086,     0,  1512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   743,     0,     0,     0,   921,     0,   936,
       0,     0,     0,     0,     0,     0,     0,  2742,     0,     0,
    2778,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   978,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1473,     0,  2147,  2443,     0,  2049,     0,     0,
       0,     0,     0,  1578,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2472,
       0,  2073,     0,  2180,     0,     0,     0,  1353,     0,     0,
       0,     0,  1607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1499,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1014,     0,
       0,  2131,     0,     0,     0,  2227,     0,     0,     0,     0,
       0,     0,     0,     0,  1664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1565,   621,     0,   642,   661,   678,
     692,     0,   707,     0,  2164,     0,     0,  1688,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1063,     0,     0,     0,  1594,     0,  1622,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2536,     0,  2567,     0,     0,     0,     0,     0,
       0,     0,     0,  2213,     0,     0,     0,  1523,     0,  1525,
    1531,  1533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1656,     0,  1679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1772,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1574,     0,  1603,  1630,  1152,     0,
       0,     0,     0,     0,     0,     0,     0,  1013,  1558,     0,
    1587,  1615,     0,     0,     0,  1211,     0,     0,     0,     0,
       0,  1001,     0,     0,     0,     0,     0,     0,     0,  1038,
       0,  1827,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1023,     0,     0,     0,  1662,  1686,     0,
    1764,     0,     0,  1247,     0,     0,     0,  1062,     0,     0,
       0,  1649,  1672,     0,     0,     0,     0,     0,     0,     0,
       0,  1051,     0,     0,  1813,     0,     0,     0,     0,     0,
    1705,  1714,     0,     0,     0,     0,  1091,  1074,     0,     0,
       0,     0,     0,     0,  1703,  1712,     0,     0,     0,     0,
       0,     0,     0,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1920,     0,
       0,  1947,     0,     0,     0,     0,     0,  1770,  1937,     0,
       0,     0,     0,     0,     0,     0,  1151,     0,     0,     0,
       0,  1757,     0,     0,     0,     0,     0,     0,     0,     0,
    1140,     0,  1357,     0,     0,  1963,     0,     0,     0,     0,
       0,  2443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1378,     0,
       0,     0,     0,     0,     0,     0,     0,  2049,     0,     0,
    2472,   600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,   632,     0,     0,
       0,     0,     0,     0,     0,     0,  2073,     0,  1825,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1246,     0,
       0,     0,  2131,     0,     0,  2164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2756,     0,     0,     0,     0,
    1485,     0,     0,  2460,  2536,  2062,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   743,  2792,  2489,     0,  2086,
       0,     0,     0,     0,     0,  2567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1194,     0,   621,     0,
       0,  1512,     0,     0,     0,     0,     0,  2213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1194,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1933,     0,  1353,     0,     0,     0,     0,   661,  2147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   678,     0,     0,     0,     0,
       0,     0,  1578,     0,     0,     0,     0,     0,     0,   692,
       0,     0,  2180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1237,     0,   707,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1607,     0,  1632,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2549,     0,  2580,     0,     0,     0,     0,     0,     0,     0,
       0,  2227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2443,     0,     0,  2472,
       0,     0,  1664,     0,  1688,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2756,     0,     0,     0,     0,     0,
       0,     0,     0,  1342,  2058,  1364,  2082,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2536,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2792,     0,     0,     0,     0,  2095,     0,     0,     0,     0,
       0,     0,  1531,     0,     0,     0,     0,     0,  1772,     0,
       0,     0,     0,     0,     0,     0,  2567,     0,     0,     0,
       0,     0,     0,     0,     0,  2144,     0,     0,     0,     0,
       0,     0,  1827,     0,  1574,     0,     0,     0,     0,  2124,
       0,     0,     0,     0,     0,     0,     0,     0,  1558,     0,
       0,     0,     0,     0,  2177,     0,     0,     0,     0,     0,
       0,     0,     0,  1603,     0,     0,     0,     0,  2157,     0,
       0,     0,     0,     0,     0,     0,     0,  1587,     0,     0,
       0,     0,     0,     0,     0,     0,  1937,     0,     0,  1963,
       0,  1630,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1615,     0,     0,     0,  1013,
       0,     0,  1038,     0,     0,     0,  2224,     0,     0,     0,
       0,     0,     0,  1001,     0,  1662,  1023,     0,     0,  2460,
    2206,     0,     0,     0,     0,     0,     0,  2756,     0,  1649,
    2792,     0,     0,     0,     0,     0,     0,     0,  1686,     0,
    1563,     0,  1592,  1620,     0,  2062,     0,     0,  2489,     0,
       0,     0,  1672,  1006,  1062,     0,     0,     0,     0,     0,
       0,     0,     0,  1705,     0,     0,     0,     0,  1051,     0,
       0,     0,  1714,  1074,  2086,     0,     0,  1703,     0,     0,
       0,     0,  1091,     0,     0,     0,  1712,     0,     0,     0,
    2147,     0,     0,  2180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2773,     0,     0,     0,     0,     0,     0,
       0,     0,  2549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1770,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2809,     0,     0,  1757,     0,  1151,
       0,     0,     0,  2580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2227,     0,     0,     0,     0,
       0,     0,  1825,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   622,     0,   643,   662,   679,   693,     0,
     708,     0,     0,     0,  1246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   621,     0,     0,   642,     0,   661,     0,
     678,     0,   692,  2371,  1811,     0,     0,     0,     0,  1933,
       0,     0,     0,     0,  1237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2460,     0,     0,  2489,     0,   707,
       0,     0,     0,  1353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   821,  2773,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2809,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1918,     0,  1342,
       0,     0,     0,     0,  2580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2456,     0,  2058,     0,     0,  1945,
       0,  1364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2485,     0,
    2082,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1531,     0,     0,     0,   920,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   624,     0,
     645,   664,   681,   695,     0,   710,     0,     0,     0,     0,
    2144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2124,     0,     0,     0,     0,     0,
       0,     0,     0,  1574,  1007,  2773,     0,     0,  2809,     0,
       0,     0,     0,  2177,     0,     0,     0,  1558,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2157,     0,     0,
    2045,     0,  2069,     0,     0,     0,  1603,     0,  1630,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1587,  2545,  1615,  2576,     0,     0,     0,     0,     0,     0,
       0,     0,  2224,     0,     0,  2527,     0,  2558,     0,     0,
       0,     0,     0,     0,     0,     0,  2206,     0,     0,     0,
       0,     0,     0,  1662,     0,  1686,     0,     0,     0,     0,
       0,  2129,     0,     0,  1195,  1705,   622,  1649,  1714,  1672,
    1563,     0,     0,     0,     0,     0,     0,     0,     0,  1703,
       0,     0,  1712,     0,     0,  1195,     0,   643,     0,     0,
    2162,     0,     0,     0,     0,     0,     0,     0,     0,  1592,
       0,     0,     0,     0,     0,     0,   662,     0,  1132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   679,     0,     0,     0,  1620,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   693,     0,  1770,
       0,     0,     0,     0,     0,  1006,     0,     0,     0,     0,
    1238,     0,   708,  1757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1825,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2371,     0,     0,     0,     0,     0,  1933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1343,     0,  1365,     0,     0,     0,     0,     0,     0,
    2456,     0,     0,     0,     0,     0,     0,     0,     0,  1009,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2058,     0,     0,  2485,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1194,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2082,     0,     0,  1811,     0,
       0,     0,     0,     0,  1355,     0,  1376,     0,   821,     0,
       0,  2144,     0,     0,  2177,     0,     0,     0,     0,     0,
    1237,     0,     0,     0,  2769,  2124,     0,     0,  2157,     0,
       0,     0,     0,  2545,     0,     0,     0,     0,  2747,  1197,
       0,   624,     0,     0,     0,     0,     0,  2527,     0,     0,
       0,     0,     0,     0,     0,  2805,     0,     0,     0,     0,
    1197,     0,   645,     0,  2576,     0,     0,     0,     0,  2783,
       0,     0,     0,     0,     0,     0,     0,     0,  2558,     0,
       0,   664,     0,     0,     0,     0,  2224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   681,     0,
    2206,     0,     0,     0,     0,  1918,     0,     0,     0,  1511,
       0,   920,   695,     0,     0,     0,     0,     0,  1564,     0,
    1593,  1621,     0,     0,     0,  1240,     0,   710,     0,  1342,
       0,  1007,  1945,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1364,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1576,     0,  1605,     0,  2371,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2456,     0,     0,  2485,     0,
       0,     0,     0,     0,     0,     0,  1345,     0,  1367,     0,
    2439,     0,  2045,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1663,     0,     0,     0,     0,     0,
       0,     0,     0,  2769,  2468,     0,  2069,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2747,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2805,
       0,     0,     0,  2527,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2783,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2576,  2129,     0,     0,  1195,
       0,     0,     0,     0,     0,     0,  1132,     0,     0,  2558,
       0,     0,     0,     0,  1771,     0,     0,     0,     0,  1563,
       0,   622,     0,     0,   643,     0,   662,     0,   679,  2162,
     693,     0,  1812,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1238,     0,     0,   998,  1020,     0,     0,  1048,
       0,     0,  1592,     0,  1620,     0,     0,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2532,     0,  2563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1566,     0,  1595,  1623,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1009,     0,     0,  1137,
       0,     0,     0,     0,     0,     0,  2769,     0,     0,  2805,
       0,     0,     0,     0,   997,  1019,     0,     0,  1047,  1071,
    2747,     0,     0,  2783,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1919,     0,  1343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1946,     0,  1365,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1811,
       0,     0,     0,     0,     0,     0,     0,     0,  1935,     0,
    1355,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   999,  1021,     0,     0,  1049,
    1961,     0,  1376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   821,     0,  1918,     0,     0,  1945,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1197,     0,     0,     0,  2048,  1138,
    2072,     0,     0,     0,     0,     0,  2439,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   624,     0,     0,   645,
       0,   664,     0,   681,     0,   695,     0,  1814,     0,     0,
       0,     0,  2045,     0,     0,  2468,     0,  1240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   710,     0,     0,     0,     0,     0,     0,  2130,
       0,  2069,     0,     0,     0,     0,     0,     0,  1564,     0,
       0,  2060,     0,  2084,     0,  1511,     0,  2129,     0,     0,
    2162,     0,     0,     0,     0,     0,     0,     0,  2163,     0,
    2752,     0,     0,     0,     0,   920,     0,  1593,     0,  2532,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2788,     0,     0,     0,  1621,     0,     0,     0,     0,
    2563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1921,  1576,  1345,  1007,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1948,     0,  1367,     0,     0,     0,     0,     0,
    1605,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1555,
       0,  1584,  1612,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   998,  2226,     0,     0,     0,     0,     0,     0,
       0,     0,  1663,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1020,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1646,  1669,     0,     0,     0,     0,     0,     0,
       0,     0,  1048,     0,     0,     0,     0,     0,     0,     0,
       0,  2439,     0,     0,  2468,     0,     0,     0,  1554,     0,
    1583,  1611,     0,  2050,     0,  2074,     0,     0,     0,     0,
    1195,   997,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1812,     0,     0,  2752,
       0,     0,     0,  1019,     0,     0,     0,     0,     0,  1132,
       0,     0,     0,     0,     0,     0,     0,     0,  1238,     0,
    1771,  1645,  1668,     0,     0,  2532,     0,     0,     0,     0,
       0,  1047,  1754,     0,  2132,  2788,     0,     0,     0,     0,
       0,  1137,     0,  1566,     0,     0,     0,  1071,     0,     0,
       0,     0,     0,     0,  1702,  1711,     0,     0,     0,     0,
       0,  2563,     0,  2165,     0,     0,     0,     0,     0,     0,
       0,     0,  1595,     0,     0,     0,     0,     0,     0,  1556,
       0,  1585,  1613,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   999,     0,     0,     0,     0,     0,     0,     0,
    1623,     0,     0,  1919,     0,     0,     0,     0,     0,     0,
       0,  1753,     0,     0,  1021,     0,     0,     0,  1009,     0,
    1136,     0,     0,     0,     0,     0,     0,  1343,     0,     0,
    1946,     0,  1647,  1670,     0,     0,     0,     0,     0,     0,
       0,     0,  1049,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1365,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1935,     0,     0,     0,
       0,     0,  2752,     0,     0,  2788,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1355,     0,     0,  1961,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1755,     0,     0,     0,  1376,     0,  2442,     0,
    2048,  1138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2471,     0,  2072,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1197,     0,     0,  1000,  1022,
       0,     0,  1050,     0,     0,     0,     0,     0,     0,     0,
       0,  1814,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2458,     0,  2060,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1240,  2130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2487,     0,  2084,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1564,     0,     0,
       0,     0,  1139,     0,     0,     0,     0,  2163,     0,  1511,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1593,     0,  1621,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2535,     0,  2566,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1921,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1576,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1345,     0,     0,  1948,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1605,     0,     0,     0,     0,  1367,     0,
    2121,     0,     0,     0,     0,     0,     0,     0,  2547,  1555,
    2578,     0,     0,     0,     0,     0,     0,     0,     0,  2226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2154,
       0,     0,     0,     0,     0,     0,     0,     0,  1584,     0,
    1663,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1612,     0,     0,     0,
       0,     0,     0,  2444,     0,  2050,     0,  1812,     0,  2120,
       0,     0,     0,     0,   998,     0,     0,  1020,  1554,     0,
       0,  2203,     0,     0,     0,     0,     0,  2473,     0,  2074,
    1646,     0,     0,     0,     0,     0,     0,     0,  2153,     0,
       0,     0,     0,     0,     0,     0,     0,  1583,     0,     0,
       0,     0,     0,  1669,     0,     0,  1771,     0,     0,     0,
       0,  1919,     0,     0,  1946,     0,     0,     0,     0,  1048,
       0,     0,     0,     0,     0,  1611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2132,
       0,     0,     0,   997,     0,     0,  1019,     0,     0,     0,
    2202,     0,     0,     0,  2442,     0,     0,     0,     0,  1645,
       0,     0,  1566,     0,     0,     0,     0,     0,     0,     0,
    2122,     0,  2165,     0,     0,     0,     0,     0,     0,  1556,
    2048,     0,  1668,  2471,  1935,     0,     0,  1961,  1754,     0,
       0,     0,     0,     0,     0,  1595,     0,  1623,  1047,  2155,
       0,     0,     0,  1071,  1137,     0,     0,  1702,  1585,  2072,
    2537,     0,  2568,     0,     0,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  2130,     0,  2458,  2163,     0,
       0,     0,     0,     0,     0,     0,  1613,     0,  2755,     0,
       0,     0,     0,     0,     0,     0,     0,  2535,     0,     0,
       0,     0,     0,  2060,   999,     0,  2487,  1021,     0,     0,
       0,  2204,     0,     0,     0,     0,     0,  1753,     0,  2791,
    1647,     0,  1557,     0,  1586,  1614,     0,     0,  2566,     0,
       0,     0,  2084,  1136,     0,  1000,     0,     0,     0,     0,
       0,     0,     0,  1670,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1022,     0,  1049,
       0,  2771,     0,     0,     0,     0,     0,     0,     0,     0,
    2547,     0,     0,     0,     0,  1648,  1671,     0,     0,     0,
       0,     0,     0,     0,     0,  1050,     0,     0,     0,     0,
       0,     0,  2807,     0,     0,     0,     0,     0,     0,     0,
       0,  2578,  1814,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2226,     0,     0,     0,     0,  1755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1921,     0,     0,  1948,
       0,     0,     0,     0,     0,  1756,     0,     0,     0,     0,
       0,     0,     0,     0,  1139,     0,     0,     0,     0,  2442,
       0,     0,  2471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2755,     0,     0,
       0,     0,     0,     0,     0,  2050,     0,     0,  2473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2535,     0,     0,     0,     0,     0,     0,
       0,     0,  2458,  2791,  2074,  2487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2132,     0,     0,  2165,     0,     0,     0,     0,     0,  2566,
       0,     0,     0,  2757,     0,     0,     0,     0,     0,     0,
    2771,     0,  2537,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2121,     0,     0,     0,     0,
       0,     0,     0,     0,  2793,     0,  2547,     0,     0,     0,
       0,     0,     0,  2568,     0,     0,  2807,     0,  1555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2578,     0,     0,     0,     0,     0,     0,     0,
       0,  1584,     0,  1612,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2524,     0,  2555,     0,
       0,     0,     0,     0,  2120,     0,     0,  2203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2755,     0,     0,  2791,     0,     0,     0,  1554,  1646,     0,
    1669,     0,     0,     0,     0,     0,     0,  2153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1583,     0,  1611,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2523,     0,  2554,     0,     0,
       0,     0,     0,     0,     0,     0,  2202,     0,     0,     0,
       0,     0,     0,  2771,  2444,     0,  2807,  2473,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1645,     0,  1668,
       0,     0,     0,     0,  1754,  2122,     0,     0,     0,  1702,
       0,     0,  1711,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2757,     0,     0,     0,     0,     0,  1556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2537,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2793,     0,
       0,  1585,     0,  1613,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2525,     0,  2556,     0,
       0,     0,     0,  1753,  2568,     0,     0,  2204,     0,     0,
       0,     0,     0,  2123,     0,     0,     0,     0,     0,     0,
       0,     0,  1557,     0,     0,     0,     0,     0,  1647,     0,
    1670,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2156,     0,     0,     0,     0,     0,     0,     0,
       0,  1586,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1614,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1000,     0,     0,
    1022,     0,     0,     0,  2205,     0,     0,     0,     0,     0,
       0,     0,     0,  1648,  1755,     0,  2121,     0,     0,  2154,
       0,     0,     0,     0,     0,  2757,     0,     0,  2793,  2744,
       0,     0,     0,     0,     0,     0,  1671,     0,  2524,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1050,     0,     0,     0,     0,     0,     0,     0,
    2780,     0,     0,     0,     0,     0,     0,     0,     0,  2555,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2203,     0,     0,     0,  2120,     0,     0,  2153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2743,     0,
       0,     0,     0,     0,     0,     0,     0,  2523,     0,     0,
       0,  1756,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1139,     0,  2779,
       0,     0,     0,     0,     0,     0,     0,     0,  2554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2122,     0,     0,  2155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2745,
       0,     0,     0,     0,     0,     0,     0,     0,  2525,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2781,     0,     0,     0,     0,     0,     0,     0,  2744,  2556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2204,     0,     0,  2524,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2780,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2743,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2523,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2779,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2554,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2744,     0,     0,  2780,     0,     0,     0,  2745,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2525,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2781,     0,     0,     0,  2123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2556,  1557,     0,     0,     0,     0,     0,     0,     0,     0,
    2743,  2156,     0,  2779,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1586,     0,  1614,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2526,
       0,  2557,     0,     0,     0,     0,     0,     0,     0,     0,
    2205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1648,     0,  1671,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2745,     0,     0,  2781,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2123,
       0,     0,  2156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2746,     0,     0,     0,     0,     0,     0,     0,
       0,  2526,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2782,     0,     0,     0,     0,     0,     0,
       0,     0,  2557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2746,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2526,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2782,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2746,     0,     0,  2782
};

static const yytype_int16 yycheck[] =
{
     140,   170,   142,   170,   170,   170,   170,   170,   170,   170,
     185,   151,   152,  1580,   154,   155,   885,   185,   990,   534,
     992,   993,   162,   163,  1118,  1732,  1120,   155,   168,  1386,
     173,  1642,   530,   173,   173,  1989,   404,   401,   401,  1053,
    1142,   226,   182,   195,   401,   197,   198,   199,   200,  1003,
     202,   591,   592,  1784,  1785,   195,  2297,   197,   198,   199,
     200,  1337,   202,   248,   173,   173,  1082,   591,   592,   198,
    1155,  1069,  1339,  1025,   591,   592,   401,  1125,   910,   168,
    1494,  1560,  1191,  1359,   173,   270,   226,   639,  1166,   614,
    1361,  1234,   590,  1651,  1617,   235,   807,  1589,   860,   658,
    1674,   675,   543,   729,   591,   592,   924,   895,   248,   618,
     250,  1470,   285,   591,   592,  1305,   591,   592,  1708,   483,
     591,   592,   955,   312,   350,   602,   483,   338,   214,   373,
     270,   489,   395,  1915,   274,   329,   394,   515,  2042,  2126,
    1528,  1782,  1783,  1784,  1785,   285,  1787,  2066,  2208,  1942,
    2373,  2159,  2436,  2465,  2560,  1759,    23,    14,   483,     4,
    2529,    72,   302,   274,     4,     4,   165,    23,   704,    37,
       4,     8,   312,   756,   560,  1699,   783,    41,    33,    23,
       4,   797,    26,   248,   312,   250,    30,   689,    33,     4,
     409,    35,    25,  1808,    38,   302,    40,     4,    42,    34,
     142,  2785,   250,    36,    68,    33,    44,   169,   170,   235,
     350,    33,    56,    57,    58,    33,    60,    33,    33,   587,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       4,    32,    35,   373,   233,    38,    39,    40,    75,    42,
      43,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   107,    33,    56,    57,    58,  2749,    60,   401,    33,
      33,   401,   401,   247,   404,   405,   250,    32,   165,   409,
     109,   233,   111,   112,    59,   109,   405,   111,   112,    23,
     119,   120,   121,    33,    69,   119,   120,   121,    52,    53,
      54,   233,   401,   401,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   149,    17,    35,   163,   164,    38,
      39,    40,    41,    42,    43,   404,   405,    26,    27,   149,
     409,    30,   233,    32,    26,    27,    35,    56,    57,    58,
      32,    60,    41,   149,   138,    64,   233,   193,   702,    41,
     483,   165,   149,   483,   483,   702,   489,   165,    38,   489,
     489,  2935,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   138,   107,    35,   138,    68,    57,    58,    40,
      41,    61,    62,    63,   483,   483,   233,   702,   233,   247,
     489,   489,  2623,    23,  2625,   165,   526,   527,   233,   256,
     530,   165,   256,   233,   233,   233,   218,   193,   233,   233,
     489,    41,  2714,   543,   579,  2811,  2775,    26,   247,   233,
     578,    30,   256,     7,   247,   233,    35,   233,   233,   163,
     164,    40,   213,    42,   138,   247,   233,  2711,     4,   189,
     188,    33,   165,   149,   235,     8,     9,   218,    59,  2932,
     220,   530,    23,   247,     4,   218,    65,   587,    69,   193,
     590,   247,   213,   256,  2677,  2409,   247,    33,    18,   233,
      41,     0,   247,   134,   135,   136,   618,   107,   139,   233,
     235,   247,   165,   233,   256,   233,   616,   138,   618,   150,
     151,   152,   247,   165,     5,     6,   247,   639,    93,    94,
      95,    96,    97,    98,    99,   100,   213,   637,   138,   639,
     233,   590,  2510,   247,    33,  2978,   658,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   233,   658,    35,
    2507,   885,  2582,   675,   185,   101,   107,   256,   885,   658,
     247,   895,   895,   247,    41,   675,     4,   689,   895,     4,
     233,   101,   910,    33,   729,  1043,  1044,   256,   149,   689,
    3023,   233,   704,   193,   256,  1053,   217,   138,  2462,   702,
     885,    68,   702,   702,   704,    33,   256,  1082,    33,   249,
     895,   756,  2491,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   247,   249,   256,   250,    30,  1560,   729,
     166,   955,  2159,   702,   702,     4,    19,  2208,   955,   249,
       4,  1470,  2843,  2396,  2845,    66,    67,   247,    25,   987,
      33,  2393,   193,   753,    33,  1155,   756,  1589,     6,    36,
     883,     9,   807,   881,    33,   983,  1166,   249,   233,    33,
     955,  1155,   166,   773,   878,  1133,   166,   256,  1155,  1915,
     726,   852,  1166,   869,  1142,  1617,  1220,   836,   842,  1166,
    1744,   803,  1746,   805,  2244,  1281,   829,  2231,  1099,  1218,
    1422,  2184,  1187,   803,  1216,   805,  1942,   807,  1155,  1380,
    2149,  2229,  1939,  1775,  2088,  1043,  1690,  1155,  2037,  1166,
    1155,  1635,  1514,  1792,  1155,   825,  1638,  1830,  1166,   829,
    2182,  1166,  1777,   833,  1965,  1166,   836,  1695,  1516,  1487,
    1748,  1779,  1718,  1893,  1213,  1538,  1183,  2348,   836,  2097,
    2951,  2315,  2353,  1249,   825,  1101,  1299,  2241,  1325,  1335,
    1222,   940,  2676,   908,  2339,   773,   833,   753,   138,   869,
       8,   105,   106,   107,   108,    26,    27,     4,   878,   249,
     256,    32,   885,   138,    35,   885,   885,     5,     6,    40,
     193,     9,   895,    26,    27,   895,   895,  1125,    33,    32,
      19,   161,    35,    22,  2040,  1133,    33,    40,   908,   249,
     910,    30,    23,    64,    33,   249,   885,   885,   221,   222,
     223,   224,   225,   226,   924,   228,   895,   895,  2064,     4,
      41,    64,   186,     5,     6,   924,    30,   191,   192,   248,
     940,   250,    23,     4,   247,   186,   256,   207,   208,   249,
     191,   192,   955,    26,    27,   955,   955,    30,    33,    32,
      41,   910,    35,   101,   249,    38,    39,    40,    41,    42,
      43,   247,    33,    33,   250,   924,   105,   106,   107,   108,
     983,   249,   247,   983,   983,   250,   955,   955,   249,   249,
     990,   940,   992,   993,    33,   249,   107,    26,    27,    28,
    1224,   233,     6,  1003,   993,     9,   247,  1224,   247,   145,
    1234,   250,   148,   247,   983,   983,   250,  1234,   197,   198,
     199,   200,   201,   202,    23,  1025,   107,   138,   166,   249,
      45,    46,     5,     6,   983,   249,     9,   249,    11,  1224,
      55,   249,    41,  1043,  1044,    74,   165,   185,  2639,  1234,
      26,    27,   249,  1053,    30,  1044,    32,   138,  2625,    35,
       8,     9,    38,    39,    40,   249,    42,    43,   247,    73,
      30,    75,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   193,  2510,    35,  1120,   249,    38,    39,    40,
    1118,    42,    43,  2520,  1043,  1044,   247,    38,    33,  1099,
      73,   220,    75,   249,  1053,    56,    57,    58,   107,    60,
     249,  2582,   193,    64,     8,     9,    57,    58,   247,   248,
      61,    62,    63,   256,  2551,  1125,   249,   221,   222,   223,
     224,   225,   226,  1133,   228,  2636,   247,  2354,  2639,   138,
     247,   233,  1142,   250,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   249,   155,   156,   157,   158,   159,
     249,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   247,   249,    35,   250,   249,    38,   233,    40,    41,
      42,   249,     4,   256,  1133,  2402,   249,   186,   187,     8,
       9,  1191,    30,  1142,    56,    57,    58,   247,    60,   247,
     250,  1213,   250,   203,  1216,   249,  1218,   233,  1220,   186,
    1222,    33,    33,  1213,   191,   192,  1216,    33,  1218,   249,
    1220,  1224,  1222,   247,  1224,  1224,   250,   247,   249,  1218,
     250,  1234,     5,     6,  1234,  1234,  1281,  1249,   233,   143,
     162,   145,   146,   147,   148,   219,  1470,   247,   247,  1249,
     160,   161,   162,  1470,  1299,  1224,  1224,  2393,   247,   247,
    2396,   250,   250,  1487,  1487,  1234,  1234,   249,   247,   233,
    1487,   250,   134,   135,   136,   247,  2843,   139,   250,   101,
     256,  1281,   247,   248,   247,  1470,  1514,   250,   150,   151,
     152,   215,   216,  1651,   160,   161,   162,   207,   208,  1299,
    2436,   233,  1487,   213,   226,   256,   249,   249,  2037,    26,
      27,   215,   216,   249,  1538,    32,  1674,  2149,   249,    26,
      27,  1538,  2749,   249,    41,    32,   248,  1339,    35,  2465,
     249,   247,  1690,    40,   250,  1380,   249,  1337,   249,  1339,
     249,   207,   208,  1718,   166,   167,   168,   213,   270,  1361,
    2182,    68,  2184,  1538,  2308,    37,  2310,    64,  2785,  1359,
    2861,  1361,   233,   185,   249,  2197,   249,  2199,   247,    93,
      94,    95,    96,    97,    98,    99,   100,  1777,   185,  1779,
    1380,   247,   233,   221,   222,   223,   224,   225,   226,   185,
     228,   247,   248,  1777,   256,  1779,   140,   249,   142,    47,
    1777,  1759,  1779,   210,   211,   212,   249,   151,   249,   247,
     154,   155,   249,   157,   210,   211,   212,  1775,   247,   163,
      23,   250,   249,  1651,   168,   160,   161,   162,   350,   173,
    1777,   249,  1779,   155,   156,   157,   158,   159,   182,  1777,
     247,  1779,  1777,   249,  1779,   249,  1777,   247,  1779,  1494,
     250,   195,  2953,   197,   198,   199,   200,   249,   202,    25,
      26,    27,    28,   249,    30,   247,    32,  1470,   250,    35,
    1470,  1470,   207,   208,    40,   233,    42,    30,  1490,   249,
    1492,   203,   226,   247,  1487,   138,   250,  1487,  1487,   249,
    1490,   235,  1492,   249,  1494,   247,   185,   247,   250,    65,
     250,  1470,  1470,   249,   248,  2932,   250,   249,  2935,   233,
      25,    26,    27,    28,  1514,    30,  1516,    32,  1487,  1487,
    1748,   210,   211,   212,   213,    33,   270,  1516,   185,   247,
     274,  1759,   250,   249,    33,  1538,   102,   103,  1538,  1538,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     249,  1551,    35,   210,   211,   212,   249,    40,   302,    42,
    1560,   483,    41,   247,     6,  1514,   250,  1516,   312,  1538,
    1538,   250,     4,     5,     6,  2711,   249,   249,  2714,    11,
    1580,   249,    65,    15,  1808,   329,   249,   102,   103,  1589,
     247,  1808,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   249,   249,    35,   527,  1830,    38,    39,    40,
      41,    42,    43,  1830,   249,    23,   249,  1617,    26,    27,
     249,   249,    30,  1808,    32,   249,   249,    35,  1617,   373,
      38,   249,    40,    64,    42,  1635,   247,   249,  1638,   250,
     193,   247,  1642,   247,   250,  1830,   250,   249,    56,    57,
      58,  1651,    60,   250,   249,   247,    64,   401,   250,   247,
     404,   405,   250,   247,   247,   409,   250,   250,   221,   222,
     223,   224,   225,   226,  1674,   228,    47,    48,    49,    50,
      51,   247,    75,    76,    77,  1674,   160,   161,   162,    23,
    1690,   249,    26,    27,   616,   249,    30,  2529,    32,    87,
      88,    35,  1651,   249,    38,    39,    40,  1742,    42,    43,
     249,   185,   249,  1741,   247,   637,   248,   250,   247,  1747,
     250,   250,    56,    57,    58,  1674,    60,   247,  2560,   233,
     250,   249,   247,   207,   208,   249,   210,   211,   212,   483,
     249,  1690,   160,   161,   162,   489,   249,   233,  1748,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  1759,
     250,    35,   250,   250,    38,    39,    40,    41,    42,    43,
     160,   161,   162,   256,   247,  1775,  3017,  3018,  3019,  3020,
    3021,  3022,   526,   527,    23,    23,   530,    26,    27,   207,
     208,   248,  1792,    32,   105,   106,   107,   108,  3039,   543,
     250,   248,    41,    41,   247,  1808,   250,   729,  1808,  1808,
    1759,   249,   248,  2037,   160,   161,   162,   207,   208,    26,
    2037,   250,    30,    30,   250,   256,  1775,  1830,    35,   247,
    1830,  1830,   248,    40,   756,    42,   113,   114,   115,  1808,
    1808,   250,   249,   587,   250,   249,   590,   247,   256,   250,
     248,   250,  2037,   250,   242,   243,   244,   247,    65,   250,
     249,  1830,  1830,   248,   103,   253,   254,   255,   107,   107,
     247,  2229,   616,  2231,   618,   248,   250,    23,   248,    25,
      26,    27,    28,   247,    30,   807,    32,   250,   248,    35,
       6,   248,   250,   637,    40,   639,   250,    33,   137,   138,
     138,    33,   249,   233,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   658,  1915,    35,   249,   249,    38,
      39,    40,   256,    42,    43,   249,   248,  1939,   247,   250,
     250,   675,   171,   172,   173,   181,   182,   183,   184,  1939,
     248,   250,  1942,  2775,   249,   689,   248,   869,   186,   187,
     247,   190,   233,  1965,   193,   250,   248,  2315,   702,   247,
     704,   247,   249,   885,   193,  1965,   250,   193,   250,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  2811,
     250,   233,   256,    70,   233,   729,   908,    41,   134,   135,
     136,   137,   247,   139,   250,   221,   222,   223,   224,   225,
     226,  2229,   228,   248,   150,   151,   152,   250,   247,   753,
     247,   247,   756,   221,   222,   223,   224,   225,   226,    23,
     228,    25,    26,    27,    28,   248,    30,   248,    32,   773,
    2042,    35,   250,   955,  2037,   250,    40,  2037,  2037,   247,
    2040,   233,  2042,  2088,   250,   248,    87,    88,   247,   250,
      91,    92,   249,   107,  2066,   145,   146,   147,   148,   803,
     250,   805,   250,   807,  2064,   250,  2066,   250,  2037,  2037,
      93,    94,    95,    96,    97,    98,    99,   100,   249,     6,
     249,   825,   248,   137,   138,   248,   250,  2315,  2088,   833,
      23,   250,   836,    26,    27,   250,   249,    30,   842,    32,
     248,   248,    35,  1025,   166,    38,   250,    40,    41,    42,
     256,   248,   250,   248,   185,  2339,   250,   171,   247,   173,
     250,   247,  2339,    56,    57,    58,  2126,    60,   250,   250,
     134,   135,   136,   137,   878,   139,   190,   256,   248,   193,
     143,   885,   145,   146,   147,   148,   150,   151,   152,  2149,
     250,   895,   248,    23,  2339,   250,    26,    27,   247,  2159,
      30,   249,    32,   249,   908,    35,   910,   249,    38,    39,
      40,    41,    42,    43,   107,   247,   250,   250,   248,   213,
     924,   248,  2182,   247,  2184,   250,    56,    57,    58,   250,
      60,   250,   233,   247,   250,  2184,   940,  2197,   248,  2199,
     248,   242,   243,   244,   137,   138,   248,   250,  2208,   248,
     233,   955,   253,   254,   255,   248,   248,   233,    23,   250,
      25,    26,    27,    28,   249,    30,   233,    32,   249,  2229,
      35,  2231,   238,    38,   249,    40,   250,    42,   171,   983,
     173,   233,  2231,   247,   249,   247,   990,   248,   992,   993,
     248,    56,    57,    58,   167,    60,   250,   190,   168,  1003,
     193,   250,   248,  1261,  1262,  1263,   249,   233,   233,  1191,
     233,  2306,    25,    26,    27,    28,  2304,    30,   227,    32,
    2229,  1025,  2231,   250,  2312,    71,   248,   248,   248,    23,
     233,    25,    26,    27,    28,   250,    30,   233,    32,  1043,
    1044,    35,  1224,   251,    38,   250,    40,   233,    42,  1053,
     233,   250,    26,    27,   247,  2315,    30,   248,    32,   248,
     248,    35,    56,    57,    58,   250,    60,    41,   166,   134,
     135,   136,   137,   166,   139,   233,  2339,   238,   250,  2339,
    2339,    23,   250,   250,    26,   150,   151,   152,    30,   102,
     103,   250,   249,    35,   250,  1099,    38,   233,    40,  1281,
      42,   238,   250,   248,   248,   248,  2315,   233,   250,     5,
    2339,  2339,   250,   238,    56,    57,    58,  1299,    60,   233,
     249,  1125,   249,   238,  1382,   249,   256,   249,   249,  1133,
     249,   249,   249,  2393,  1392,  1393,  2396,  1395,  1142,   250,
     134,   135,   136,   137,    23,   139,    25,    26,    27,    28,
     110,    30,   252,    32,   238,  1337,   150,   151,   152,   233,
     404,   405,    41,   249,   233,    78,    79,    80,   250,  1427,
    1428,   233,   233,  1431,    87,    88,  2436,  1359,    91,    92,
     142,   143,   233,   145,   146,   147,   148,  1191,   248,   233,
    2462,   256,    23,   250,    25,    26,    27,    28,  1380,   248,
     250,    32,  2462,   250,   233,  2465,   233,   250,   250,  1213,
     248,   248,  1216,   248,  1218,   233,  1220,   233,  1222,  2491,
    1224,  1787,  2369,   102,   103,  2695,   170,   170,   107,   170,
    1234,  2491,   170,   170,   170,   170,  1911,    23,   170,    25,
      26,    27,    28,   170,    30,  1249,    32,  2507,  1106,    35,
    2510,  1735,    38,   247,    40,   170,    42,  1739,   137,   138,
    2520,   184,   162,   197,   198,   199,   200,   201,   202,  2529,
      56,    57,    58,   184,    60,   184,  2426,  1281,    64,    45,
      46,    47,    48,    49,    50,    51,   530,  3050,  1470,    55,
    2990,  2551,   171,  2909,   173,  1299,  3029,  2614,  2623,  2843,
    2560,   170,   170,   134,   135,   136,   137,   138,   139,   140,
     141,   190,  1494,   170,   193,   170,   102,   103,   170,   170,
     233,   170,  2582,   170,   170,   170,   226,   170,   170,   242,
     243,   244,   170,  1337,   170,  1339,   170,   170,  2695,  2695,
     253,   254,   255,   170,  2695,  2695,   590,   170,   248,   113,
     114,   115,   116,   117,   118,  1359,  1538,  1361,  2695,   170,
     170,   170,    23,   170,    25,    26,    27,    28,   247,  1551,
     270,    32,   170,  2695,   170,   170,  1380,   174,   175,   176,
     177,   178,   179,   180,  2695,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   170,   170,    35,  1580,  2695,
      38,    39,    40,    41,    42,    43,  2695,  1418,  2695,  2695,
    2695,  2695,  2695,  2695,  2695,  2695,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    64,  2695,    35,  2695,
    1413,    38,    39,    40,  2680,    42,    43,  1896,   194,   195,
     196,   197,   198,   199,   200,   201,   202,  3058,  1901,   333,
     350,  2711,   839,   637,  2714,  2363,  1638,    64,    -1,  1786,
    1642,   247,    -1,    -1,   102,   103,  1470,    -1,    -1,   107,
    1728,  1729,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,    -1,    -1,  1487,    -1,    -1,  1490,    -1,  1492,  2749,
    1494,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,    25,    26,    27,    28,    -1,    30,    -1,    32,    -1,
    1514,    35,  1516,    -1,    -1,  2775,    40,    -1,    -1,    -1,
      -1,    -1,    -1,  1781,    -1,  2785,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,  1538,   173,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,  1551,    -1,    -1,
      -1,  2811,   190,    -1,    -1,   193,  1560,    -1,    -1,   140,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,    -1,  1580,    -1,   102,   103,
      -1,    -1,   163,   483,    -1,  1589,   247,   168,    80,    -1,
      -1,    -1,   173,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
    1792,    -1,    -1,  1617,   195,  1873,   197,   198,   199,   200,
      -1,   202,    -1,    -1,    -1,    -1,  1808,   527,    -1,    -1,
      -1,  1635,    -1,    -1,  1638,    -1,    -1,    -1,  1642,    87,
      88,  1899,    -1,    91,    92,   226,    -1,  1651,  1906,   256,
      -1,    -1,    -1,    -1,   235,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   908,    -1,   910,   248,    -1,   250,
    1674,    -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,
     924,    -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,   247,    -1,
      38,    39,    40,    41,    42,    43,   616,    -1,    -1,    -1,
      -1,   302,    -1,   247,  1982,    -1,    -1,    -1,    56,    57,
      58,   312,    60,  1915,    -1,    -1,    64,   637,    -1,    -1,
      -1,   233,    -1,    -1,  1748,    -1,    -1,    -1,    -1,    -1,
     242,   243,   244,    -1,    -1,  1759,    -1,    -1,  2016,    -1,
    1942,   253,   254,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1775,    -1,  2031,   102,   103,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   233,    87,    88,  1792,    -1,
      91,    92,   373,    -1,   242,   243,   244,    -1,    -1,  1043,
    1044,    -1,    -1,    -1,  1808,   253,   254,   255,    -1,  1053,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
     401,    -1,    -1,   404,   405,    -1,  1830,    -1,   409,   729,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,  2037,   756,    -1,  2040,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2064,    -1,    -1,    -1,    -1,     4,     5,  1133,
       7,     8,     9,    10,    11,    12,    13,    14,  1142,    16,
      -1,    -1,   483,    -1,    21,    -1,  2088,   807,   489,    -1,
      -1,  1915,   102,   103,    -1,    32,    33,   107,    -1,   247,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,   233,    35,    -1,  1939,    -1,    -1,  1942,    -1,
      -1,   242,   243,   244,  2126,   526,   527,   137,   138,   530,
      -1,    -1,   253,   254,   255,    -1,    -1,    -1,    -1,    26,
      27,  1965,   543,    30,    -1,    32,    -1,    -1,    35,   869,
      -1,    38,    39,    40,    41,    42,    43,  2159,    -1,  2237,
    2238,   171,    -1,   173,   101,   885,    -1,    -1,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    30,    -1,    32,    -1,
     190,    -1,  2260,   193,    -1,    -1,   587,    41,   908,   590,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,  2208,    38,    39,    40,
      41,    42,    43,  2037,    -1,   616,  2040,   618,  2042,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,    -1,    64,    -1,   955,   637,   247,   639,    -1,
    2064,    -1,  2066,    -1,    -1,    -1,    26,    27,   102,   103,
      30,    -1,    32,   107,    -1,    35,    -1,   658,    38,    39,
      40,    -1,    42,    43,  2088,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,   675,    -1,    -1,  2355,  2356,  2357,
    2358,  2359,    -1,   137,   138,    -1,    -1,    -1,   689,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   702,  2126,   704,    -1,  1025,    23,    -1,    -1,    26,
      27,  2389,    -1,    -1,    -1,    32,    -1,   171,    -1,   173,
      -1,    -1,    -1,  2401,    41,  2149,    -1,    -1,   729,    -1,
      -1,    -1,    -1,    -1,    -1,  2159,   190,  2339,    -1,   193,
    2418,    -1,    -1,    -1,    -1,    -1,    -1,  2425,    -1,    -1,
      -1,  2429,   753,    -1,    -1,   756,    -1,    -1,  2182,    -1,
    2184,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   773,  2197,    35,  2199,    -1,    38,    39,    40,
      41,    42,    43,    -1,  2208,    -1,   103,    -1,    -1,    -1,
     107,  2393,    -1,   247,  2396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   803,    64,   805,  2229,   807,  2231,    -1,    -1,
      23,    -1,    25,    26,    27,    28,   247,    30,  2496,    32,
     137,   138,    35,    -1,   825,    38,  1490,    40,  1492,    42,
    1494,    -1,   833,    -1,  2436,   836,    -1,    -1,    -1,    -1,
      -1,   102,   103,    56,    57,    58,    -1,    60,    -1,    -1,
    1514,    64,  1516,    -1,   171,   172,   173,    25,    26,    27,
      28,    -1,    30,  2465,    32,    -1,    -1,    35,    -1,    -1,
      -1,  1191,    40,   190,    42,    -1,   193,   878,    25,    26,
      27,    28,    -1,    30,   885,    32,    -1,    -1,    35,   102,
     103,  2315,    -1,    40,   895,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,  1224,  2507,    -1,   908,  2510,   910,
      -1,    -1,    -1,    -1,    -1,  2339,    -1,    64,  2520,    -1,
      -1,    -1,    -1,   924,    -1,    -1,    -1,  2605,    -1,  2607,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   940,
      -1,    -1,  2620,    -1,    -1,    -1,    -1,    -1,    -1,  2551,
      -1,    -1,    -1,    -1,   955,   102,   103,    -1,    -1,    -1,
      -1,  1281,    -1,    -1,    -1,  2643,    -1,  2645,    -1,  2393,
      -1,    -1,  2396,    -1,    -1,    -1,    -1,    -1,  1642,  1299,
    2582,    -1,   983,    -1,    -1,    -1,   247,  1651,    -1,   990,
      -1,   992,   993,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     142,    -1,  1003,    -1,    -1,    -1,  2684,    -1,    -1,    -1,
    1674,    -1,  2436,    -1,    -1,    -1,    -1,  1337,    -1,    -1,
      -1,    -1,    -1,    -1,  1025,    -1,  1690,    -1,    -1,    -1,
      -1,    -1,  2710,    -1,    -1,    -1,    -1,    -1,  2462,  1359,
      -1,  2465,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1053,   195,    -1,   197,    -1,    -1,    -1,    23,
    1380,    25,    26,    27,    28,    -1,    30,  2491,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,  2507,   226,    -1,  2510,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,  1759,  2520,    -1,  1099,    -1,
      -1,    -1,    -1,    -1,    -1,  2529,   248,    -1,   250,  2711,
      -1,  1775,  2714,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1125,    -1,    35,  2551,    -1,    -1,
      -1,    40,  1133,    42,    -1,    -1,  2560,    -1,    -1,    -1,
      -1,  1142,    -1,    -1,  2822,    23,  2824,  2749,    26,    27,
    1470,    -1,    30,    -1,    32,    -1,    65,    35,  2582,  2837,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,  1494,   139,    -1,    -1,    56,    57,
      58,    -1,    60,  2785,    -1,    -1,   150,   151,   152,    -1,
    1191,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,  1213,    -1,    -1,  1216,    -1,  1218,  1538,  1220,
      -1,  1222,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1551,    64,  1234,    -1,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,  1249,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1580,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
    1281,    -1,    23,    -1,    -1,    26,    27,  2711,    -1,    30,
    2714,    32,    -1,    -1,    35,    -1,    -1,    38,  1299,    40,
      -1,    42,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,  1638,    60,
      -1,    -1,  1642,    64,    -1,  2749,    -1,    -1,    -1,    -1,
    2932,    -1,   101,  2935,    -1,   104,  1337,    -1,  1339,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      23,  2775,    25,    26,    27,    28,    -1,    30,  1359,    32,
    1361,  2785,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,   143,    -1,  2040,    -1,  2042,  1380,
     149,    -1,    -1,    -1,   153,   154,    -1,  2811,    -1,    -1,
      -1,    -1,    65,    -1,    -1,   140,   165,   142,    -1,    -1,
    2064,    -1,  2066,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,   247,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,  2088,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   204,   205,   206,    -1,    -1,
     209,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
     195,   220,   197,   198,   199,   200,    -1,   202,    -1,    -1,
     229,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,  1470,
      -1,    -1,  1792,    -1,    -1,    -1,   618,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,  1487,    -1,  1808,  1490,
     235,  1492,    -1,  1494,    -1,    -1,    -1,   639,   171,    -1,
     173,    -1,    -1,   248,    -1,   250,    -1,    -1,  2932,    -1,
      -1,  2935,    -1,  1514,    -1,  1516,    -1,   190,    -1,    -1,
     193,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2197,    -1,  2199,    -1,  1538,    -1,    -1,
      -1,    -1,    -1,    -1,  2208,    -1,    -1,    -1,    -1,    -1,
    1551,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,  1560,
      -1,    -1,    -1,    -1,    -1,  2229,    -1,  2231,    -1,    -1,
      -1,    -1,    -1,     4,   247,     6,    -1,     8,     9,  1580,
      11,    12,    13,    -1,    15,    -1,    -1,   729,  1589,    -1,
      21,    -1,    -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,   350,    -1,    -1,    -1,    -1,
      -1,   753,    43,    -1,   756,    -1,  1617,    -1,    -1,    -1,
      -1,    -1,  1942,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   773,    -1,    -1,  1635,    -1,    -1,  1638,    -1,    -1,
      -1,  1642,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
    1651,  2315,    -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,
      -1,   803,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,  1674,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,  1690,
      38,    39,    40,    41,    42,    43,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    -1,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,  2037,   149,    -1,
    2040,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,   483,    -1,
      -1,    -1,    -1,    -1,  2064,    -1,    -1,  1748,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,  1759,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2088,    -1,
     182,    -1,  2436,    -1,  1775,    -1,    -1,    -1,   209,    -1,
      -1,   526,   527,   214,    -1,    -1,    -1,    -1,    -1,   137,
     138,  1792,    -1,    -1,    -1,    -1,    -1,    -1,  2462,    -1,
      -1,  2465,    -1,    -1,    -1,    -1,  2126,  1808,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,  2491,    -1,  1830,
      -1,    23,    -1,    25,    26,    27,    28,    -1,    30,  2159,
      32,    -1,   190,    -1,    -1,   193,   591,   592,   990,    41,
     992,    -1,    -1,    -1,    -1,    -1,  2520,    -1,    -1,   604,
      -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,    -1,    -1,
      -1,   616,    -1,   618,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2551,  2208,    -1,
      -1,    -1,   637,    -1,   639,    -1,  2560,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,   658,  1915,   107,    23,    -1,  2582,    26,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
     675,    38,    -1,    40,    41,    42,    -1,    -1,  1939,    -1,
      -1,  1942,    -1,    -1,   689,   137,   138,    -1,    -1,    56,
      57,    58,    -1,    60,    -1,    -1,    -1,   702,    -1,   704,
      -1,    -1,    -1,    -1,  1965,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,   171,
      -1,   173,    40,    41,   729,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   404,   405,    -1,    -1,    -1,    -1,   190,    -1,
     107,   193,    -1,    -1,    -1,    -1,    64,    -1,   753,    -1,
      -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2339,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,
     137,   138,    -1,    -1,    -1,    -1,  2037,    -1,    -1,  2040,
      -1,  2042,    -1,    -1,   102,   103,    -1,  2711,    -1,   107,
    2714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   803,    -1,
     805,    -1,   807,  2064,   171,  2066,   173,    -1,    -1,    -1,
      -1,  1213,    -1,  2393,  1216,    -1,  2396,    -1,    -1,   137,
     138,    -1,    -1,   190,    -1,  2749,   193,  2088,   833,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,  2775,    -1,   171,    -1,   173,  2436,    -1,   530,    -1,
      -1,  2785,    -1,    -1,   869,  2126,    -1,    -1,    -1,    -1,
      64,   543,   190,    -1,    -1,   193,    -1,    -1,    -1,  1281,
     885,    -1,    -1,    -1,    -1,  2465,    -1,  2811,  2149,    -1,
     895,    -1,    -1,    -1,    -1,    -1,    -1,  1299,  2159,    -1,
      -1,    -1,    -1,   908,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,    -1,    -1,    -1,  1294,   590,    -1,
    1297,  2182,    -1,  2184,    -1,    -1,    -1,  2507,    -1,   247,
    2510,    -1,    -1,    -1,    -1,  1337,  2197,  1339,  2199,    -1,
    2520,    -1,    -1,   137,   138,    -1,    -1,  2208,    -1,    -1,
     955,    -1,    -1,    -1,    -1,    -1,    -1,  1359,    -1,  1361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2229,    -1,
    2231,  2551,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,    -1,    -1,   990,    -1,   992,   993,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,  1003,   193,
      -1,    -1,  2582,    -1,    -1,    -1,    -1,    -1,  2932,    -1,
      -1,  2935,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1025,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,  2315,    -1,    56,    57,    58,  1436,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1451,    -1,    -1,    -1,  2339,  1456,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1490,    -1,
    1492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,  1133,    40,
      41,  2711,  2393,    -1,  2714,  2396,    -1,   137,   138,    -1,
      -1,  1518,  1519,    -1,    -1,    -1,    -1,    -1,    -1,  1551,
    1155,    -1,    -1,    64,    -1,    -1,    -1,    -1,  1560,    -1,
      -1,  1166,    -1,    -1,    -1,    -1,  1543,  1544,    -1,  2749,
      -1,   171,    -1,   173,    -1,  2436,    -1,    -1,  1580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1191,  1589,    -1,    -1,
     190,   102,   103,   193,    -1,    -1,   107,    -1,    -1,    -1,
      -1,  2462,    -1,    -1,  2465,  2785,    -1,    -1,  1213,    -1,
      -1,  1216,    -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,  1234,
    2491,    -1,    -1,    -1,    -1,    -1,   908,    -1,   910,    -1,
      -1,    -1,    -1,    -1,  1249,    -1,  2507,   247,    -1,  2510,
      -1,    -1,   924,    -1,    23,    -1,    -1,    26,    27,  2520,
     171,    30,   173,    32,    -1,    -1,    35,    -1,  2529,    38,
      39,    40,    -1,    42,    43,    -1,  1281,    -1,    -1,   190,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    56,    57,    58,
    2551,    60,    -1,    -1,  1299,    -1,    -1,    -1,    -1,  2560,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,  2582,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,  1337,    -1,  1339,    -1,   247,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,  2932,    -1,  1359,  2935,  1361,    -1,    -1,    -1,
      -1,  1738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1043,  1044,    -1,    -1,  1380,    -1,    -1,    -1,    -1,
      -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   107,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,   173,    -1,    -1,  1099,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,   197,   198,
    2711,    -1,    -1,  2714,    -1,    -1,   171,    -1,   173,    -1,
      -1,  1133,    -1,    -1,    -1,  1470,    -1,    -1,    -1,    -1,
    1142,    -1,    -1,    -1,    -1,   190,    -1,   226,   193,    -1,
      -1,    -1,  1487,    -1,    -1,  1490,   235,  1492,  2749,  1494,
      -1,    -1,    -1,    23,    -1,    25,    26,    27,    28,   248,
      30,   250,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,  1915,  2775,    -1,    -1,    -1,    -1,    -1,
      -1,   270,    -1,    -1,  2785,   274,    56,    57,    58,    -1,
      60,    -1,   247,  1538,    64,    -1,   285,  1939,    -1,    -1,
    1942,    -1,    -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,
    2811,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1965,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,  1580,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,  1589,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,   350,    40,    41,    42,    -1,    -1,   137,   138,    -1,
      -1,    -1,  1617,    -1,    -1,    -1,  1993,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
    1635,    -1,    -1,  1638,    -1,    -1,    -1,  1642,  2040,    -1,
    2042,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   401,    -1,    -1,   404,   405,    -1,    -1,    -1,
     190,    -1,  2064,   193,  2066,    -1,    -1,    -1,    -1,   107,
      -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,   137,
     138,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,   247,    -1,    64,
      40,    41,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,   483,   173,    -1,    -1,    -1,    -1,
     489,    -1,    -1,    -1,    -1,    -1,    -1,  2149,    -1,    -1,
      -1,    -1,   190,    -1,  1759,   193,    -1,  2159,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1777,    -1,  1779,    -1,    -1,    -1,   527,    -1,
    2182,    -1,    -1,    -1,    -1,    -1,    -1,  1792,    -1,    -1,
      -1,    -1,   137,   138,    -1,  2197,    -1,  2199,    -1,    -1,
      -1,    -1,    -1,  1808,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,   134,   135,   136,    -1,  1490,   139,
    1492,    -1,  1494,    -1,    -1,  1830,   171,    -1,   173,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,   587,    -1,
      -1,    -1,  1514,    -1,  1516,   190,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   618,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   658,
    1915,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,    -1,    -1,  1939,    -1,    -1,  1942,    -1,    -1,
      -1,    -1,   107,    -1,    56,    57,    58,    -1,    60,    -1,
      -1,    -1,    64,   702,    -1,    -1,    -1,    -1,    -1,    -1,
    1965,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2346,
    1642,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,  1651,
     729,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  2393,    -1,    35,  2396,    -1,    38,    39,    40,    41,
      42,    43,  1674,    -1,   753,    -1,   171,   756,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,    -1,
      -1,    -1,    64,    -1,   773,   190,    -1,    -1,   193,    -1,
      -1,    -1,  2037,    -1,  2436,  2040,    -1,  2042,  2415,    -1,
      -1,    -1,    -1,    -1,  2421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   803,    -1,   805,    -1,   807,  2064,
    2462,  2066,    -1,  2465,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   825,    -1,    -1,    -1,
     829,    -1,   247,  2088,    -1,    -1,    -1,  1759,    -1,  2491,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,  1775,    -1,  2507,    -1,    -1,  2510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2520,    -1,
     869,  2126,    -1,    -1,    -1,    -1,  2503,  2529,    -1,   171,
      -1,   173,    -1,    -1,    -1,    -1,   885,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2149,    -1,   895,    -1,   190,  2551,
      -1,   193,    -1,    -1,  2159,    -1,    -1,    -1,  2560,   908,
      -1,   910,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   924,    -1,  2182,    23,  2184,
      25,    26,    27,    28,    -1,    30,    -1,    32,    -1,    -1,
      35,    -1,  2197,    -1,  2199,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,  2208,    -1,    -1,   955,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      65,    -1,    38,    39,    40,    41,    42,    43,    -1,  2606,
      -1,    -1,    -1,    -1,   983,    -1,    -1,    -1,    -1,    -1,
      -1,   990,    -1,   992,   993,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,  1025,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,   102,   103,    -1,    -1,
      -1,   107,   137,   138,  1043,  1044,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,  2711,
    2315,    -1,  2714,    -1,    -1,  2692,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,    -1,    -1,   171,    -1,   173,    -1,
      -1,    -1,    -1,    -1,  2339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,   190,    -1,  2749,   193,   107,
    2727,  2728,    -1,    -1,   152,   171,   154,   173,    -1,    -1,
    2737,  2738,  2739,  2740,   162,    -1,    -1,    -1,  2040,    -1,
    2042,    -1,    -1,  2775,   190,   173,  1125,   193,    -1,   137,
     138,    -1,    -1,  2785,  1133,    -1,    -1,    -1,  2393,    -1,
      -1,  2396,  2064,    -1,  2066,    -1,    -1,   195,    -1,   197,
     198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2811,
      -1,    -1,    -1,   171,    -1,   173,  2088,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,  2436,   190,    -1,    -1,   193,    -1,   235,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
     248,    35,   250,    -1,    38,    39,    40,  2462,    42,    43,
    2465,    -1,    -1,    -1,  1213,    -1,    -1,  1216,    -1,  1218,
      -1,    -1,   270,    -1,    -1,  1224,  2853,  2854,    -1,    -1,
      64,    -1,  2859,  2860,    -1,  1234,  2491,   285,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,  2507,    35,   302,  2510,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,  2520,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2529,  2197,    -1,  2199,    -1,    -1,
    2932,    -1,  1281,  2935,    -1,    -1,  2208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2551,    -1,    -1,    -1,
    1299,    -1,   350,    -1,    -1,  2560,    -1,  2229,    -1,  2231,
      -1,  2938,    -1,    -1,  2941,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2582,    -1,    -1,
      -1,  2958,  2959,  2960,    -1,    -1,    -1,    -1,  1337,    -1,
    1339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   401,    -1,    -1,    -1,   405,    -1,    -1,
    1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,    -1,  2996,
    2997,  2998,  2999,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1380,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  2315,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,  3036,
    3037,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    23,    -1,    25,
      26,    27,    28,    -1,    30,   483,    32,    -1,    -1,    35,
      -1,   489,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2711,    -1,    -1,  2714,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,    64,    -1,
      -1,  1470,    -1,    23,    -1,    25,    26,    27,    28,   527,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,  1487,    -1,
      40,  1490,    -1,  1492,  2749,  1494,    -1,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,    -1,    -1,  2436,  1514,    -1,  1516,    -1,    -1,
    2775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2785,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,  1538,
    2462,   137,   138,  2465,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,  1551,   193,    -1,    -1,  2811,    -1,    -1,    -1,
      -1,  1560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2491,
     618,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,
      -1,  1580,    -1,    -1,   134,   135,   136,   137,    -1,   139,
    1589,   639,    -1,    -1,   190,    -1,    -1,   193,  2520,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
     658,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1617,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,    -1,  2551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,  1638,
      -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1651,    -1,   702,    -1,    -1,    -1,    -1,    -1,
    2582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1674,    -1,  2932,    -1,    -1,
    2935,   729,    23,    -1,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,   753,    -1,    -1,   756,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,    -1,    64,    -1,   773,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,    -1,    32,    -1,    -1,    35,  1748,
      -1,    -1,    -1,    40,    41,   803,    -1,   805,    -1,   807,
    1759,   102,   103,    -1,    -1,    -1,   107,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    64,    -1,    35,
      -1,   829,    38,    39,    40,   833,    42,    43,   140,  2711,
     142,    -1,  2714,    -1,    -1,    -1,   137,   138,    -1,    -1,
     152,    -1,   140,    -1,   142,    -1,    -1,    -1,    -1,  1808,
     162,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   869,    -1,    -1,   162,    -1,    -1,  2749,    -1,    -1,
     171,  1830,   173,    -1,    -1,    -1,    -1,   885,    -1,    -1,
      -1,    -1,    -1,   195,    -1,   197,   198,   895,    -1,   190,
     137,   138,   193,  2775,    -1,    -1,    -1,   195,    -1,   197,
     908,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,   924,    -1,    -1,    -1,
      -1,    -1,    -1,   235,   171,    -1,   173,    -1,   226,  2811,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   235,   250,    -1,
      -1,    -1,    -1,   190,    -1,    -1,   193,   955,    -1,    -1,
     248,    -1,   250,    -1,    -1,    -1,  1915,    -1,   270,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,   270,   285,    -1,   983,    -1,    -1,    41,    -1,
    1939,    -1,   990,  1942,   992,   993,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,  1965,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  1025,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    65,    -1,
      23,    -1,    25,    26,    27,    28,  1044,    30,   350,    32,
      -1,    -1,    35,    -1,   107,    38,    -1,    40,    64,    42,
    2932,    -1,   350,  2935,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
     107,    -1,    -1,    -1,   137,   138,    -1,    -1,  2037,    -1,
      -1,  2040,    -1,  2042,    -1,    -1,   102,   103,    -1,    -1,
      -1,   162,    -1,   405,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,    -1,    -1,  2064,    -1,  2066,   171,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,  2088,
     193,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,   190,    -1,   226,   193,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2126,    -1,    -1,
      -1,   483,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,    -1,
    2149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
    2159,    -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,    -1,
    1218,    -1,  1220,    -1,    -1,   527,  1224,    -1,    -1,    -1,
      -1,    -1,    -1,  2182,    -1,  2184,  1234,    -1,    -1,   527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2197,    -1,
    2199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2208,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
    2229,    -1,  2231,  1281,    -1,    -1,    -1,    -1,    -1,   350,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,  1299,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,   618,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,   616,    -1,
     618,    -1,    -1,    -1,    -1,    -1,    -1,   639,    -1,  1337,
      -1,  1339,    -1,    64,    -1,    -1,    -1,    -1,    -1,   637,
      -1,   639,    -1,    -1,    -1,    -1,   658,    -1,    -1,    -1,
      -1,  1359,    -1,  1361,    -1,    -1,  2315,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,  1380,    -1,    -1,    -1,    -1,   150,   151,   152,
    2339,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,   483,    -1,    -1,    -1,    -1,   729,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,   729,    -1,    -1,  2393,    -1,    -1,  2396,    -1,    -1,
      -1,   753,    -1,    -1,   756,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   753,   527,    -1,   756,    -1,
      -1,   773,  1470,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   773,    -1,  2436,    -1,  1487,
      -1,    -1,  1490,   140,  1492,   142,  1494,    -1,    -1,    -1,
      -1,   803,    -1,   805,    -1,   807,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2462,    -1,   803,  2465,   805,  1516,   807,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   829,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1538,    -1,  2491,    -1,    -1,    -1,    -1,    -1,   195,    -1,
     197,    -1,    -1,  1551,    -1,    -1,    -1,    -1,  2507,    -1,
      -1,  2510,  1560,    -1,    -1,    -1,    -1,   869,    -1,    -1,
      -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
    2529,   869,  1580,   885,    -1,    -1,    -1,    -1,   235,    -1,
      -1,  1589,    -1,    -1,    -1,    -1,    -1,   885,    -1,    -1,
      -1,   248,  2551,   250,    -1,    -1,   908,    -1,    -1,    -1,
      -1,  2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1617,
     908,    -1,   924,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2582,    -1,    -1,    -1,    -1,    -1,    -1,
    1638,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   955,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   955,   729,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1674,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   990,    35,
     992,   993,    38,    39,    40,   756,    42,    43,    -1,    -1,
      -1,    -1,   990,    -1,   992,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,  1025,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,  1025,    -1,    38,
      39,    40,  1044,    42,    43,    -1,   807,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    60,  2711,    -1,    -1,  2714,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   869,    -1,
    1808,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   885,    -1,  2775,    -1,    -1,    -1,
      -1,    -1,  1830,    -1,    -1,    -1,  2785,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   908,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2811,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   955,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,  1191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1213,    -1,    -1,  1216,    -1,  1218,  1915,    -1,   270,
      -1,    -1,  1224,    -1,    -1,  1213,    -1,    -1,  1216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1224,    -1,    -1,    -1,
      -1,  1939,    -1,    -1,  1942,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1025,    -1,    -1,  1965,    -1,    -1,
      -1,   618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1281,
      -1,    -1,    -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,
      -1,    -1,   639,  1281,    -1,    -1,    -1,  1299,    -1,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1337,    -1,  1339,    -1,  2037,
      -1,    -1,  2040,    -1,  2042,    -1,    -1,    -1,    -1,  1337,
      -1,  1339,    -1,    -1,    -1,    -1,    -1,  1359,    -1,  1361,
      -1,    -1,    -1,    -1,    -1,    -1,  2064,    -1,  2066,    -1,
      -1,  1359,    -1,  1361,    -1,    -1,    -1,    -1,  1380,    -1,
      -1,    -1,   729,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2088,    -1,  1380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,   756,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,  2126,    -1,
      -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,  2149,    -1,    -1,    -1,    -1,   803,    -1,   805,    -1,
      -1,  2159,    -1,  1224,    -1,    -1,    -1,    -1,  1470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,    -1,    -1,
      -1,    -1,  1470,    -1,  2182,    -1,  2184,    -1,  1490,    -1,
    1492,    -1,  1494,    -1,    -1,    -1,    -1,    -1,    -1,  2197,
      -1,  2199,  1490,    -1,  1492,    -1,  1494,    -1,    -1,    -1,
    2208,    -1,    -1,    -1,  1516,    -1,    -1,    -1,    -1,    -1,
    1281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2231,    -1,    -1,  1538,    -1,  1299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1551,
    1538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1560,    -1,
      -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1560,    -1,    -1,    -1,  1337,    -1,  1580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,  1359,    -1,
      -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,  1380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1638,    -1,    -1,    -1,
    1642,  2339,    -1,   990,    -1,   992,    -1,    -1,    -1,    -1,
    1638,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,
      -1,    -1,  1674,    -1,    -1,    -1,    -1,    -1,   729,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2393,    -1,    -1,  2396,    -1,
      -1,    -1,    -1,    -1,    -1,   756,    -1,    -1,    -1,  1470,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,    -1,
      -1,    -1,    -1,  1494,    -1,    -1,    -1,    -1,  2436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   483,    -1,    -1,    -1,    -1,   807,   489,    -1,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,  2465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1538,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1551,    -1,    -1,  2491,   526,   527,    -1,    -1,   530,    -1,
      -1,    -1,    -1,    -1,  1792,    -1,  1808,    -1,    -1,  2507,
      -1,   543,  2510,    -1,    -1,    -1,    -1,    -1,   869,  1580,
    1808,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2529,    -1,    -1,   885,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2551,    -1,    -1,    -1,   908,   590,    -1,
      -1,    -1,  2560,    -1,    -1,    -1,  1213,    -1,    -1,  1216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1638,    -1,    -1,
      -1,  1642,    -1,    -1,  2582,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   955,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1915,    -1,    -1,
      -1,    -1,    -1,    -1,  1281,    -1,    -1,  1939,    -1,    -1,
    1942,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1939,  1299,    -1,  1942,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1965,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1025,    -1,    -1,  1965,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1337,    -1,  1339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1359,  2711,  1361,    -1,  2714,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2037,    -1,    -1,  2040,    -1,
    2042,    -1,    -1,    -1,    -1,    -1,    -1,  1808,    -1,  2037,
      -1,  2749,  2040,    -1,  2042,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2064,    -1,  2066,    -1,    -1,    -1,    -1,    -1,
      -1,   526,   527,    -1,    -1,   530,  2064,  2775,  2066,   534,
      -1,    -1,    -1,    -1,    -1,    -1,  2088,  2785,   543,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2088,    -1,    -1,    -1,    -1,   560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2811,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,  2126,    -1,
      -1,    -1,    -1,  1490,    -1,  1492,    -1,  2149,    -1,    -1,
      -1,    -1,    -1,   885,  1915,    -1,    -1,  2159,    -1,    -1,
      -1,  2149,    -1,   895,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2159,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,
    2182,  1942,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2182,  2197,    -1,  2199,    -1,    -1,
      -1,    -1,    -1,    -1,  1551,    -1,  2208,    -1,    -1,  2197,
      -1,  2199,    -1,  1560,    -1,    -1,    -1,    -1,    -1,    -1,
    2208,    -1,    -1,   955,    -1,    -1,    -1,    -1,    -1,  2231,
    1281,    -1,    -1,  1580,  2932,    -1,    -1,  2935,    -1,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,  1299,    -1,
      -1,   983,    -1,    -1,    -1,    -1,    -1,    -1,   990,    -1,
     992,   993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1003,    -1,    -1,    -1,    -1,  2037,    -1,    -1,  2040,
      -1,    -1,    -1,    -1,    -1,    -1,  1337,    -1,    -1,    -1,
      -1,    -1,    -1,  1025,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2064,    -1,    -1,    -1,    -1,  1359,    -1,
      -1,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1053,    -1,    -1,    -1,    -1,    -1,  2088,    -1,  1380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2339,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2126,    -1,  1099,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2393,    -1,    -1,  2396,    -1,    -1,    -1,  2159,    -1,
      -1,  1133,    -1,    -1,    -1,  2393,    -1,    -1,  2396,    -1,
    1142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2436,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1494,    -1,    -1,    -1,  2208,  2436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2462,    -1,    -1,  2465,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,  2465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1538,    -1,  2491,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1551,    -1,    -1,  2491,    -1,  2507,    -1,    -1,  2510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2520,  2507,
      -1,    -1,  2510,    -1,    -1,    -1,    -1,  2529,    -1,  1580,
      -1,    -1,  2520,    -1,    -1,   990,    -1,   992,   993,    -1,
      -1,  2529,    -1,    -1,    -1,    -1,    -1,    -1,  1003,  2551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,    -1,
      -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,  1915,    -1,
    1025,    -1,  2560,    -1,    -1,    -1,    -1,    -1,  2339,    -1,
    2582,    -1,    -1,    -1,    -1,    -1,    -1,  1638,  1043,  1044,
      -1,  1642,  1939,    -1,  2582,  1942,    -1,    -1,  1053,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1965,    -1,
      -1,  1076,  1077,    -1,    -1,    -1,    -1,  1082,   163,    -1,
      -1,    -1,  2393,   168,    -1,  2396,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,  1099,    -1,  1101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   197,   198,   199,   200,    -1,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2436,    -1,    -1,  1133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1142,    -1,    -1,
      -1,    -1,    -1,  2040,    -1,  2042,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2465,    -1,    -1,    -1,    -1,  2711,
      -1,    -1,  2714,    -1,    -1,    -1,    -1,  2064,    -1,  2066,
      -1,    -1,    -1,  2711,    -1,    -1,  2714,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2507,  2749,    -1,  2510,
      -1,    -1,    -1,    -1,    -1,  1487,    -1,  1808,    -1,  2520,
      -1,  2749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,  2126,
      -1,    -1,    -1,  2785,    -1,    -1,    -1,  2775,    -1,    -1,
    2551,    -1,    -1,    -1,    -1,    -1,    -1,  2785,    -1,    -1,
      -1,    -1,  2149,    -1,    -1,    -1,  1538,    -1,    -1,  2811,
      -1,    -1,  2159,    -1,    -1,    -1,    -1,    -1,    -1,  1551,
      -1,  2582,    -1,  2811,    -1,    -1,    -1,    -1,  1560,    -1,
      -1,    -1,    -1,    -1,    -1,  2182,    -1,    -1,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1580,    -1,
    2197,    -1,  2199,    -1,    -1,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,    -1,    -1,  1915,    -1,   401,    -1,    -1,   404,
     405,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,
      -1,  1942,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,    -1,  1638,    -1,    -1,    -1,
    1642,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1651,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1674,    -1,  2932,    -1,    -1,  2935,   483,    -1,
    2711,    -1,    -1,  2714,   489,    -1,    -1,    -1,  1690,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2037,    -1,  2749,  2040,
      -1,   526,    -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2064,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2785,    -1,    -1,  1759,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2088,    -1,    -1,
      -1,    -1,    -1,  1775,    -1,    -1,  2393,    -1,    -1,  2396,
      -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,
      -1,   616,    -1,   618,    -1,    -1,    -1,    -1,    -1,  2436,
      -1,    -1,    -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,
      -1,    -1,   637,    -1,   639,  1560,    -1,    -1,  2159,    -1,
      -1,    -1,    -1,    -1,    -1,  2462,   163,    -1,  2465,    -1,
      -1,   168,    -1,   658,    -1,  1580,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,
     675,    -1,    -1,    -1,  2491,    -1,    -1,    -1,   195,    -1,
     197,   198,   199,   200,   689,   202,    -1,  2208,    -1,    -1,
    2507,    -1,  1617,  2510,    -1,    -1,    -1,   702,    -1,   704,
      -1,  2932,    -1,  2520,  2935,    -1,    -1,    -1,    -1,    -1,
    1635,    -1,  2529,  1638,    -1,    -1,    -1,  1642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2560,    -1,    -1,    -1,    -1,    -1,  1674,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1708,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1718,    -1,    -1,    -1,    -1,   803,    -1,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1759,  2037,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1775,    -1,    -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2393,   878,    -1,  2396,    -1,    -1,    -1,    -1,
     885,    -1,    -1,    -1,   401,    -1,    -1,   404,   405,    -1,
     895,    -1,   409,    -1,  2711,    -1,    -1,  2714,    -1,    -1,
      -1,    -1,    -1,   908,    -1,   910,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2436,    -1,    -1,    -1,   924,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2749,    -1,    -1,   940,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2465,    -1,    -1,  2149,    -1,    -1,
     955,    -1,    -1,    -1,    -1,    -1,    -1,  2159,  2775,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,  2785,    -1,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,   983,    -1,
    2182,    -1,  2184,    -1,    -1,   990,  2507,   992,   993,  2510,
      -1,    -1,    -1,    -1,  2811,  2197,    -1,  2199,  1003,  2520,
      -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,   526,
      -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2229,    -1,  2231,
    2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1043,  1044,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1053,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   616,
      -1,   618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2315,    -1,  2932,    -1,    -1,  2935,    -1,
     637,    -1,   639,    -1,    -1,    -1,    -1,    -1,  1133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1142,    -1,    -1,
      -1,   658,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   702,  1191,   704,    -1,    -1,
    2711,    -1,    -1,  2714,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2126,    -1,    -1,    -1,    -1,    -1,    -1,  1213,    -1,
      -1,  1216,    -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,
      -1,    -1,    -1,    -1,  2149,    -1,    -1,    -1,  2749,  1234,
      -1,    -1,    -1,    -1,  2159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2182,    -1,  2184,
      -1,    -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2197,    -1,  2199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2208,    -1,    -1,   803,    -1,   805,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2229,  2507,  2231,    -1,  2510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2241,    -1,  2520,  2244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
      -1,    -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2551,
      -1,    -1,    -1,    -1,  1359,    -1,  1361,    -1,  2560,    -1,
      -1,   878,    -1,    -1,    -1,    -1,    -1,    -1,   885,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   895,    -1,
    2582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2315,   908,    -1,   910,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   924,    -1,    -1,
      -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   940,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   955,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,  1470,   983,    -1,    -1,   191,
      -1,    -1,    -1,   990,    -1,   992,   993,    -1,    -1,    -1,
      -1,    -1,  1487,    -1,    -1,  1490,  1003,  1492,    -1,  1494,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1514,
      -1,  1516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1043,  1044,    -1,    -1,
      -1,    -1,    -1,  1538,    -1,    -1,  1053,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1551,  2749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2775,    -1,  1580,    -1,    -1,    -1,    -1,
      -1,    -1,  2507,  2785,  1589,  2510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2520,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2529,    -1,    -1,    -1,    -1,  2811,
      -1,    -1,  1617,    -1,    -1,    -1,  1133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1142,  2551,    -1,    -1,    -1,
    1635,    -1,    -1,    -1,    -1,  2560,    -1,  1642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2582,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1674,
      -1,    -1,    -1,    -1,  1191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,
      -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2932,    -1,  1249,  2935,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1759,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1792,    -1,    -1,
     526,   527,    -1,    -1,   530,    -1,    -1,    -1,   534,    -1,
      -1,    -1,    -1,  1808,   526,   527,    -1,   543,   530,   531,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1337,    -1,  1339,    -1,  2749,  1830,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,
    2775,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,
    2785,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     602,    -1,   618,    -1,    -1,    -1,  2811,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1915,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1939,    -1,    -1,  1942,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1470,    -1,    -1,    -1,    -1,    -1,    -1,
    1965,    -1,    -1,    -1,    -1,    -1,   702,    -1,    -1,    -1,
    1487,    -1,    -1,  1490,    -1,  1492,    -1,  1494,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   729,    -1,    -1,    -1,  1514,    -1,  1516,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2932,    -1,    -1,
    2935,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2037,    -1,  1551,  2040,    -1,  2042,    -1,    -1,
      -1,    -1,    -1,  1560,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2064,
      -1,  2066,    -1,  1580,    -1,    -1,    -1,   803,    -1,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2088,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1635,    -1,
      -1,  2126,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2149,   195,    -1,   197,   198,   199,
     200,    -1,   202,    -1,  2159,    -1,    -1,  1674,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1690,    -1,    -1,    -1,  2182,    -1,  2184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2197,    -1,  2199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2208,    -1,    -1,    -1,   943,    -1,   945,
     946,   947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2229,    -1,  2231,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   990,    -1,   992,   993,  1775,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1003,   990,    -1,
     992,   993,    -1,    -1,    -1,  1792,    -1,    -1,    -1,    -1,
      -1,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,
      -1,  1808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1025,    -1,    -1,    -1,  1043,  1044,    -1,
    2315,    -1,    -1,  1830,    -1,    -1,    -1,  1053,    -1,    -1,
      -1,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1053,    -1,    -1,  2339,    -1,    -1,    -1,    -1,    -1,
    1076,  1077,    -1,    -1,    -1,    -1,  1082,  1069,    -1,    -1,
      -1,    -1,    -1,    -1,  1076,  1077,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1099,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2393,    -1,
      -1,  2396,    -1,    -1,    -1,    -1,    -1,  1133,  1915,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1142,    -1,    -1,    -1,
      -1,  1133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1142,    -1,  1939,    -1,    -1,  1942,    -1,    -1,    -1,    -1,
      -1,  2436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1965,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2462,    -1,    -1,
    2465,  1183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   526,  1213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2491,    -1,  1224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,
      -1,    -1,  2507,    -1,    -1,  2510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2520,    -1,    -1,    -1,    -1,
    2037,    -1,    -1,  2040,  2529,  2042,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1281,  2551,  2064,    -1,  2066,
      -1,    -1,    -1,    -1,    -1,  2560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   616,    -1,   618,    -1,
      -1,  2088,    -1,    -1,    -1,    -1,    -1,  2582,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   637,    -1,   639,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,   658,  2126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   675,    -1,    -1,    -1,    -1,
      -1,    -1,  2149,    -1,    -1,    -1,    -1,    -1,    -1,   689,
      -1,    -1,  2159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   702,    -1,   704,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2182,    -1,  2184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2197,    -1,  2199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2711,    -1,    -1,  2714,
      -1,    -1,  2229,    -1,  2231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2749,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   803,  1490,   805,  1492,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2785,    -1,    -1,    -1,    -1,  1521,    -1,    -1,    -1,    -1,
      -1,    -1,  1528,    -1,    -1,    -1,    -1,    -1,  2315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2811,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,
      -1,    -1,  2339,    -1,  1560,    -1,    -1,    -1,    -1,  1551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1560,    -1,
      -1,    -1,    -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1589,    -1,    -1,    -1,    -1,  1580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2393,    -1,    -1,  2396,
      -1,  1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,  1635,
      -1,    -1,  1638,    -1,    -1,    -1,  1642,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,  1651,  1638,    -1,    -1,  2436,
    1642,    -1,    -1,    -1,    -1,    -1,    -1,  2932,    -1,  1651,
    2935,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,
     990,    -1,   992,   993,    -1,  2462,    -1,    -1,  2465,    -1,
      -1,    -1,  1674,  1003,  1690,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,  1690,    -1,
      -1,    -1,  1708,  1695,  2491,    -1,    -1,  1699,    -1,    -1,
      -1,    -1,  1718,    -1,    -1,    -1,  1708,    -1,    -1,    -1,
    2507,    -1,    -1,  2510,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2551,    -1,    -1,  1759,    -1,  1775,
      -1,    -1,    -1,  2560,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1775,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2582,    -1,    -1,    -1,    -1,
      -1,    -1,  1808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,   197,   198,   199,   200,    -1,
     202,    -1,    -1,    -1,  1830,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1213,    -1,    -1,  1216,    -1,  1218,    -1,
    1220,    -1,  1222,  1895,  1224,    -1,    -1,    -1,    -1,  1915,
      -1,    -1,    -1,    -1,  1234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2711,    -1,    -1,  2714,    -1,  1249,
      -1,    -1,    -1,  1939,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   270,  2749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2775,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2785,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1337,    -1,  1339,
      -1,    -1,    -1,    -1,  2811,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2040,    -1,  2042,    -1,    -1,  1359,
      -1,  1361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2064,    -1,
    2066,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2097,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
     197,   198,   199,   200,    -1,   202,    -1,    -1,    -1,    -1,
    2126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2149,   526,  2932,    -1,    -1,  2935,    -1,
      -1,    -1,    -1,  2159,    -1,    -1,    -1,  2149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,    -1,
    1490,    -1,  1492,    -1,    -1,    -1,  2182,    -1,  2184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2182,  2197,  2184,  2199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2208,    -1,    -1,  2197,    -1,  2199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,    -1,
      -1,    -1,    -1,  2229,    -1,  2231,    -1,    -1,    -1,    -1,
      -1,  1551,    -1,    -1,   616,  2241,   618,  2229,  2244,  2231,
    1560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2241,
      -1,    -1,  2244,    -1,    -1,   637,    -1,   639,    -1,    -1,
    1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,
      -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,   587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   675,    -1,    -1,    -1,  1617,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   689,    -1,  2315,
      -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,
     702,    -1,   704,  2315,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2339,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2373,    -1,    -1,    -1,    -1,    -1,  2393,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   803,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,
    2436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   526,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2462,    -1,    -1,  2465,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1792,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2491,    -1,    -1,  1808,    -1,
      -1,    -1,    -1,    -1,   803,    -1,   805,    -1,   807,    -1,
      -1,  2507,    -1,    -1,  2510,    -1,    -1,    -1,    -1,    -1,
    1830,    -1,    -1,    -1,  2520,  2507,    -1,    -1,  2510,    -1,
      -1,    -1,    -1,  2529,    -1,    -1,    -1,    -1,  2520,   616,
      -1,   618,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,
     637,    -1,   639,    -1,  2560,    -1,    -1,    -1,    -1,  2551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,    -1,
      -1,   658,    -1,    -1,    -1,    -1,  2582,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,    -1,
    2582,    -1,    -1,    -1,    -1,  1915,    -1,    -1,    -1,   908,
      -1,   910,   689,    -1,    -1,    -1,    -1,    -1,   990,    -1,
     992,   993,    -1,    -1,    -1,   702,    -1,   704,    -1,  1939,
      -1,  1003,  1942,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1965,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   990,    -1,   992,    -1,  2677,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2711,    -1,    -1,  2714,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   803,    -1,   805,    -1,
    2040,    -1,  2042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1043,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2749,  2064,    -1,  2066,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2775,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2785,
      -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2811,  2126,    -1,    -1,  1191,
      -1,    -1,    -1,    -1,    -1,    -1,  1125,    -1,    -1,  2811,
      -1,    -1,    -1,    -1,  1133,    -1,    -1,    -1,    -1,  2149,
      -1,  1213,    -1,    -1,  1216,    -1,  1218,    -1,  1220,  2159,
    1222,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1234,    -1,    -1,   526,   527,    -1,    -1,   530,
      -1,    -1,  2182,    -1,  2184,    -1,    -1,  1249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2197,    -1,  2199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   990,    -1,   992,   993,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1003,    -1,    -1,   590,
      -1,    -1,    -1,    -1,    -1,    -1,  2932,    -1,    -1,  2935,
      -1,    -1,    -1,    -1,   526,   527,    -1,    -1,   530,   531,
    2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1337,    -1,  1339,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1359,    -1,  1361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2339,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1337,    -1,
    1339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   526,   527,    -1,    -1,   530,
    1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1380,    -1,  2393,    -1,    -1,  2396,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1191,    -1,    -1,    -1,  1490,   590,
    1492,    -1,    -1,    -1,    -1,    -1,  2436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,
      -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,    -1,    -1,
      -1,    -1,  2462,    -1,    -1,  2465,    -1,  1234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1249,    -1,    -1,    -1,    -1,    -1,    -1,  1551,
      -1,  2491,    -1,    -1,    -1,    -1,    -1,    -1,  1560,    -1,
      -1,  1490,    -1,  1492,    -1,  1494,    -1,  2507,    -1,    -1,
    2510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1580,    -1,
    2520,    -1,    -1,    -1,    -1,  1514,    -1,  1589,    -1,  2529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2551,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,
    2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1337,  1560,  1339,  1635,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,
    1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   990,
      -1,   992,   993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1003,  1642,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1651,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1025,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2711,    -1,    -1,  2714,    -1,    -1,    -1,   990,    -1,
     992,   993,    -1,  1490,    -1,  1492,    -1,    -1,    -1,    -1,
    1792,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1808,    -1,    -1,  2749,
      -1,    -1,    -1,  1025,    -1,    -1,    -1,    -1,    -1,  1748,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1830,    -1,
    1759,  1043,  1044,    -1,    -1,  2775,    -1,    -1,    -1,    -1,
      -1,  1053,  1133,    -1,  1551,  2785,    -1,    -1,    -1,    -1,
      -1,  1142,    -1,  1560,    -1,    -1,    -1,  1069,    -1,    -1,
      -1,    -1,    -1,    -1,  1076,  1077,    -1,    -1,    -1,    -1,
      -1,  2811,    -1,  1580,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,   990,
      -1,   992,   993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1617,    -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1133,    -1,    -1,  1025,    -1,    -1,    -1,  1635,    -1,
    1142,    -1,    -1,    -1,    -1,    -1,    -1,  1939,    -1,    -1,
    1942,    -1,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1965,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1915,    -1,    -1,    -1,
      -1,    -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1939,    -1,    -1,  1942,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1133,    -1,    -1,    -1,  1965,    -1,  2040,    -1,
    2042,  1142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2064,    -1,  2066,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1792,    -1,    -1,   526,   527,
      -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2040,    -1,  2042,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1830,  2126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2064,    -1,  2066,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2149,    -1,    -1,
      -1,    -1,   590,    -1,    -1,    -1,    -1,  2159,    -1,  2088,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2182,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2197,    -1,  2199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1915,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1939,    -1,    -1,  1942,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2182,    -1,    -1,    -1,    -1,  1965,    -1,
    1551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2197,  1560,
    2199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1580,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,    -1,
    2229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,
      -1,    -1,    -1,  2040,    -1,  2042,    -1,  2339,    -1,  1551,
      -1,    -1,    -1,    -1,  1635,    -1,    -1,  1638,  1560,    -1,
      -1,  1642,    -1,    -1,    -1,    -1,    -1,  2064,    -1,  2066,
    1651,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,    -1,  1674,    -1,    -1,  2315,    -1,    -1,    -1,
      -1,  2393,    -1,    -1,  2396,    -1,    -1,    -1,    -1,  1690,
      -1,    -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2126,
      -1,    -1,    -1,  1635,    -1,    -1,  1638,    -1,    -1,    -1,
    1642,    -1,    -1,    -1,  2436,    -1,    -1,    -1,    -1,  1651,
      -1,    -1,  2149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1551,    -1,  2159,    -1,    -1,    -1,    -1,    -1,    -1,  1560,
    2462,    -1,  1674,  2465,  2393,    -1,    -1,  2396,  1759,    -1,
      -1,    -1,    -1,    -1,    -1,  2182,    -1,  2184,  1690,  1580,
      -1,    -1,    -1,  1695,  1775,    -1,    -1,  1699,  1589,  2491,
    2197,    -1,  2199,    -1,    -1,    -1,  1708,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2507,    -1,  2436,  2510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1617,    -1,  2520,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
      -1,    -1,    -1,  2462,  1635,    -1,  2465,  1638,    -1,    -1,
      -1,  1642,    -1,    -1,    -1,    -1,    -1,  1759,    -1,  2551,
    1651,    -1,   990,    -1,   992,   993,    -1,    -1,  2560,    -1,
      -1,    -1,  2491,  1775,    -1,  1003,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1674,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,    -1,  1690,
      -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2529,    -1,    -1,    -1,    -1,  1043,  1044,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,
      -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2560,  2339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2582,    -1,    -1,    -1,    -1,  1759,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1775,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2393,    -1,    -1,  2396,
      -1,    -1,    -1,    -1,    -1,  1133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1142,    -1,    -1,    -1,    -1,  2711,
      -1,    -1,  2714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2436,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2462,    -1,    -1,  2465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2711,  2785,  2491,  2714,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2507,    -1,    -1,  2510,    -1,    -1,    -1,    -1,    -1,  2811,
      -1,    -1,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,
    2749,    -1,  2529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2551,    -1,  2775,    -1,    -1,    -1,
      -1,    -1,    -1,  2560,    -1,    -1,  2785,    -1,  2149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2811,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2182,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2197,    -1,  2199,    -1,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,  2208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2932,    -1,    -1,  2935,    -1,    -1,    -1,  2149,  2229,    -1,
    2231,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2182,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2197,    -1,  2199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,    -1,
      -1,    -1,    -1,  2932,  2711,    -1,  2935,  2714,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2229,    -1,  2231,
      -1,    -1,    -1,    -1,  2315,  2126,    -1,    -1,    -1,  2241,
      -1,    -1,  2244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2749,    -1,    -1,    -1,    -1,    -1,  2149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2775,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2785,    -1,
      -1,  2182,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2197,    -1,  2199,    -1,
      -1,    -1,    -1,  2315,  2811,    -1,    -1,  2208,    -1,    -1,
      -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1560,    -1,    -1,    -1,    -1,    -1,  2229,    -1,
    2231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1617,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,
    1638,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1651,  2315,    -1,  2507,    -1,    -1,  2510,
      -1,    -1,    -1,    -1,    -1,  2932,    -1,    -1,  2935,  2520,
      -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,  2529,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2582,    -1,    -1,    -1,  2507,    -1,    -1,  2510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2520,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
      -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1775,    -1,  2551,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2507,    -1,    -1,  2510,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2520,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2749,  2560,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2582,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2811,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2811,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,  2749,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2785,    -1,    -1,    -1,  2126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2811,  2149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2932,  2159,    -1,  2935,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2182,    -1,  2184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2197,
      -1,  2199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2229,    -1,  2231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2932,    -1,    -1,  2935,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2315,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2507,
      -1,    -1,  2510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2582,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2775,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2785,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2811,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2932,    -1,    -1,  2935
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    21,    32,    33,    34,    43,
      73,    75,   101,   104,   143,   149,   153,   154,   165,   204,
     205,   206,   209,   214,   220,   229,   265,   268,   271,   303,
     312,   314,   316,   317,   318,   320,   322,   324,   326,   328,
     329,   331,   333,   335,   337,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   355,   356,   357,   359,   361,   363,
     365,   392,   561,   566,   571,   576,   581,   586,   591,   596,
     601,   606,   611,   616,   621,   626,   631,   636,   641,   646,
     651,   656,   661,   666,   671,   673,   677,   679,   681,   685,
     687,   689,   691,   694,   696,   698,   700,   702,   704,   706,
     708,   710,   712,   714,   716,   718,   720,   722,   724,   726,
     728,   730,   734,   735,   739,   742,   744,   746,   748,   753,
     757,   764,     5,     6,     9,    11,    73,    75,   313,    33,
     672,    33,   674,    19,    22,    30,    33,   165,   220,     4,
      33,   695,   727,   729,   731,   736,   743,   360,    17,   754,
     272,   749,   678,   332,   366,   149,     8,     9,   747,     7,
     269,   364,    33,   334,   339,     4,    33,   101,   166,   167,
     168,   185,   347,   358,   353,   393,   362,     8,   101,   166,
     185,   315,   330,     0,    33,   707,    33,   709,   711,   713,
     715,   149,   717,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   770,   818,   860,   901,   961,   969,   971,
     975,   979,   984,  1000,  1060,  1062,   680,    35,    38,    39,
      40,    41,    42,    43,   779,   827,   872,   979,   984,  1000,
    1006,  1013,  1031,  1033,  1036,  1037,  1052,  1062,   682,   780,
     828,   873,   979,   984,  1000,  1006,  1013,  1031,  1033,  1037,
    1052,  1062,   304,   765,   758,   690,   692,   351,     5,     6,
     697,    35,    64,   788,   834,   879,   979,   984,  1000,  1010,
    1031,  1049,    30,    65,   804,   850,   895,   977,   984,  1006,
    1031,  1037,  1068,    66,    67,   805,   851,   896,  1043,  1045,
      41,   806,   852,   897,   979,   984,  1000,  1006,  1035,  1062,
      68,   808,   853,   898,   979,   984,  1000,  1004,  1035,     4,
       5,     6,    11,    15,   811,   855,   900,   235,   412,   424,
     438,   551,   979,   745,   249,    25,    36,   273,   274,   275,
     276,   973,   249,   750,    23,    56,    57,    58,    60,   782,
     829,   874,   937,   984,  1006,  1013,  1018,  1025,  1027,  1029,
    1031,  1037,  1062,    23,   134,   135,   136,   137,   138,   139,
     140,   141,   375,   413,   425,   439,   441,   442,   443,   446,
     470,   472,   485,   904,   971,   979,   984,  1000,  1060,    33,
     138,   218,   465,   554,   555,   556,   557,   558,   559,   560,
      33,   719,     4,    33,   562,   592,   102,   103,   778,   826,
     871,   963,   967,   971,   979,   984,  1000,  1060,  1068,   165,
     220,     4,     6,     8,    11,    13,    73,   101,   165,   267,
     270,   271,   312,   331,   333,   335,   340,   346,   355,   359,
     361,   365,   392,   561,   566,   576,   586,   591,   596,   606,
     616,   621,   626,   631,   636,   641,   646,   656,   666,   675,
     677,   683,   687,   694,   696,   700,   704,   708,   710,   714,
     716,   718,   720,   722,   724,   726,   732,   734,   737,   740,
     746,   249,   368,   336,    23,   150,   151,   152,   376,   414,
     426,   439,   441,   442,   443,   470,   487,   489,   491,   907,
     971,   979,   984,  1000,  1006,  1031,  1060,  1068,   155,   156,
     157,   158,   159,   203,   378,   416,   428,   492,   493,   494,
     495,   497,   498,     5,     6,     9,   597,   627,     8,     9,
     632,   341,   166,   166,   349,    23,   107,   171,   172,   173,
     190,   193,   382,   420,   432,   443,   446,   499,   510,   512,
     514,   519,   539,   927,   967,   979,   984,  1000,  1036,   411,
     423,   437,   446,   161,   207,   208,   249,   387,   390,   391,
     407,   408,   409,   160,   162,   213,   394,   396,   399,   400,
     406,   407,   408,   409,   410,   249,   367,   325,     8,    75,
     323,   319,   321,   221,   222,   223,   224,   225,   226,   228,
     539,   771,   819,   861,   862,   986,   988,   990,   992,   994,
     996,   998,   138,   777,   825,   868,   686,   794,   840,   885,
     901,   961,   969,   971,   975,   979,   984,  1000,  1006,  1013,
    1031,  1033,  1036,  1037,  1052,  1060,  1062,   688,   795,   841,
     886,   901,   961,   969,   971,   975,   979,   984,  1000,  1006,
    1013,  1031,  1033,  1037,  1052,  1060,  1062,   796,   842,   887,
     901,   961,   969,   971,   975,   977,   979,   984,  1000,  1006,
    1031,  1037,  1060,  1062,   797,   843,   888,   901,   961,   969,
     971,   975,   979,   984,  1000,  1006,  1060,  1062,   798,   844,
     889,   901,   961,   969,   971,   975,   979,   984,  1000,  1060,
    1062,    33,   723,   799,   845,   890,   901,   961,   969,   971,
     975,   979,   984,  1000,  1060,  1062,   249,   962,   249,   985,
    1001,  1061,   970,  1063,   249,   249,   247,   860,   783,   830,
     875,   937,   979,   984,  1000,  1006,  1013,  1018,  1025,  1027,
    1029,  1031,  1033,  1036,  1037,  1052,  1062,   249,   249,  1053,
    1032,   249,  1034,   256,   872,   784,   831,   876,   937,   979,
     984,  1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,  1033,
    1037,  1052,  1062,   256,   873,   249,   305,   249,   249,    61,
      62,    63,   787,   833,   878,  1013,  1018,  1027,  1039,  1041,
    1042,   249,   186,   191,   192,   249,   384,   422,   436,   525,
     535,   537,    33,   699,    33,   701,   789,   835,   880,   937,
     979,   984,  1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,
    1037,  1049,  1062,  1011,   249,   256,   879,  1069,   249,   256,
     895,  1044,  1046,   256,   897,  1005,   256,   898,    23,   256,
     949,   249,   247,   438,   812,   856,   900,   233,   755,   756,
     249,   277,   247,   275,   233,   751,   752,    59,    69,   813,
     814,   857,   965,  1047,   249,  1026,  1028,   249,  1030,   256,
     874,   249,   440,   249,   447,   471,   249,   486,   247,   425,
     466,   247,   558,   247,   557,   721,   439,   441,   442,   443,
     470,   487,   489,   491,   800,   846,   891,   907,   971,   979,
     984,  1000,  1006,  1031,  1060,  1062,     5,     6,   567,   563,
     564,   565,   963,   967,   971,   979,   984,  1000,  1010,  1031,
    1049,  1060,  1068,   593,   594,   595,   963,   967,   971,   977,
     979,   984,  1000,  1006,  1031,  1037,  1060,  1068,   964,   968,
     247,   871,    33,   676,     4,   733,   738,   741,     8,     4,
     101,   233,   369,    23,   377,   415,   427,   439,   441,   442,
     443,   470,   487,   489,   491,   933,   971,   979,   984,  1000,
    1006,  1013,  1018,  1025,  1027,  1029,  1031,  1037,  1060,  1062,
     249,   488,   490,   247,   426,   249,   233,   247,   428,    33,
     602,    33,   607,   622,    23,   443,   446,   499,   510,   514,
     519,   539,   598,   599,   600,   913,   961,   969,   971,   975,
     979,   984,  1000,  1036,  1060,  1062,    23,   443,   446,   499,
     510,   514,   519,   539,   628,   629,   630,   917,   979,   984,
    1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,  1036,  1037,
    1062,     4,    33,   637,   647,   443,   446,   499,   510,   514,
     519,   539,   633,   634,   635,   927,   963,   967,   971,   979,
     984,  1000,  1036,  1060,  1068,    23,   163,   164,   379,   417,
     429,   499,   506,   508,   539,   910,   343,   345,    23,   107,
     187,   383,   421,   433,   434,   435,   446,   503,   525,   530,
     930,  1036,   249,   249,   511,   513,   515,   520,   540,   247,
     432,   247,   437,   233,   388,   389,   249,   401,   185,   210,
     211,   212,   395,   398,   402,   403,   404,   405,   247,   400,
     247,   399,   233,   374,   775,   823,   866,   979,   984,  1000,
    1010,  1031,  1049,   327,   443,   446,   499,   510,   514,   519,
     539,   774,   822,   865,   927,   963,   967,   971,   979,   984,
    1000,  1036,  1060,  1068,   772,   820,   863,   986,   988,   990,
     992,   994,   996,   998,  1062,   773,   821,   864,   986,   988,
     990,   992,   994,   996,   998,  1062,   987,   989,   991,   995,
     997,   999,   993,   247,   861,  1062,   869,   247,   868,    23,
     786,   832,   877,   940,   961,   969,   971,   975,   979,   984,
    1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,  1033,  1037,
    1052,  1060,  1062,   256,   885,   786,   256,   886,   256,   887,
     256,   888,   256,   889,   725,    23,   439,   441,   442,   470,
     487,   489,   491,   802,   848,   893,   952,   961,   969,   971,
     975,   979,   984,  1000,  1006,  1031,  1036,  1060,  1062,   256,
     890,     4,   233,   902,   249,    26,    27,    28,    74,   972,
     249,   249,   249,   249,   249,    75,    76,    77,   976,    93,
      94,    95,    96,    97,    98,    99,   100,   233,   980,   983,
     860,   256,   875,    44,   233,  1007,  1012,    52,    53,    54,
     233,  1015,  1017,   249,   249,   219,  1038,   249,   872,   256,
     876,   873,   233,    37,   307,   308,   309,   310,    72,   233,
     766,   767,   768,   769,    87,    88,   242,   243,   244,   253,
     254,   255,   759,   760,  1040,   256,   878,   233,   693,   249,
     536,   249,   233,   385,   386,   247,   436,   703,   790,   836,
     881,   901,   961,   969,   971,   975,   979,   984,  1000,  1006,
    1013,  1031,  1033,  1036,  1037,  1049,  1052,  1060,  1062,   705,
     791,   837,   882,   901,   961,   969,   971,   975,   979,   984,
    1000,  1006,  1013,  1031,  1033,  1037,  1049,  1052,  1060,  1062,
     256,   880,   249,    47,  1050,   879,   249,     4,    18,   101,
     978,   895,   249,   249,   897,   249,   898,   249,   949,    87,
      88,    91,    92,   233,   242,   243,   244,   253,   254,   255,
     552,   553,   438,   247,   250,   974,   249,   275,   247,   250,
     966,   249,   247,   857,    33,   233,   938,   249,   249,   233,
    1020,   249,   874,    34,   233,   905,   249,    87,    88,    91,
      92,   233,   242,   243,   244,   253,   254,   255,   444,   445,
     249,   249,   142,   233,   473,   475,   249,   425,   249,   558,
     557,   439,   441,   442,   443,   470,   487,   489,   491,   801,
     847,   892,   933,   971,   979,   984,  1000,  1006,  1013,  1018,
    1025,  1027,  1029,  1031,  1037,  1060,  1062,   256,   891,    33,
     572,    33,   577,   568,   569,   570,   937,   963,   967,   971,
     979,   984,  1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,
    1037,  1049,  1060,  1062,   247,   565,   247,   595,   249,   249,
     871,   684,   781,  1036,   807,  1036,    68,   809,   854,   899,
    1002,  1036,   810,  1036,     4,     8,   250,   249,   247,   427,
     149,   233,   908,   249,   249,   426,   160,   161,   162,   496,
     428,   612,   443,   446,   499,   510,   514,   519,   539,   603,
     604,   605,   913,   961,   969,   971,   975,   979,   984,  1000,
    1006,  1013,  1031,  1033,  1036,  1037,  1049,  1052,  1060,  1062,
     617,   443,   446,   499,   510,   514,   519,   539,   608,   609,
     610,   913,   961,   969,   971,   975,   979,   984,  1000,  1006,
    1013,  1031,  1033,  1036,  1037,  1049,  1052,  1060,  1062,   443,
     446,   499,   510,   514,   519,   539,   623,   624,   625,   913,
     961,   969,   971,   975,   977,   979,   984,  1000,  1006,  1031,
    1036,  1037,  1060,  1062,   249,   247,   600,   249,   247,   630,
       5,     6,   642,   443,   446,   499,   510,   514,   519,   539,
     638,   639,   640,   927,   963,   967,   971,   979,   984,  1000,
    1010,  1031,  1036,  1049,  1060,  1068,   443,   446,   499,   510,
     514,   519,   539,   648,   649,   650,   927,   963,   967,   971,
     977,   979,   984,  1000,  1006,  1031,  1036,  1037,  1060,  1068,
     247,   635,   249,   507,   509,   247,   429,    23,   380,   418,
     430,   446,   499,   539,   921,  1036,    23,   381,   419,   431,
     446,   499,   539,   924,  1036,   249,   249,   249,   247,   433,
     165,   233,   928,   169,   170,   233,   500,   502,   249,   249,
     249,   249,   249,   432,   437,   247,   250,   388,   249,   247,
     397,   399,   400,   395,   400,   395,   399,   250,   247,   866,
      30,   443,   446,   499,   510,   514,   519,   539,   776,   824,
     867,   927,   963,   967,   971,   979,   984,  1000,  1010,  1031,
    1036,  1049,  1060,  1062,  1068,   247,   865,   247,   863,   247,
     864,   249,   249,   249,   249,   249,   249,   249,   861,   249,
     868,   249,   256,   877,   885,   886,   887,   888,   889,    23,
     439,   441,   442,   470,   487,   489,   491,   803,   849,   894,
     956,   961,   969,   971,   975,   979,   984,  1000,  1006,  1013,
    1018,  1025,  1027,  1029,  1031,  1036,  1037,  1060,  1062,   249,
     256,   893,   890,   248,   250,   233,   258,   250,   233,   259,
     260,   260,   260,   260,    78,    79,    80,    87,    88,    91,
      92,   233,   242,   243,   244,   253,   254,   255,  1064,  1065,
    1066,  1067,   250,   247,   250,   248,   875,   247,   250,   248,
     247,   248,   250,   249,    45,    46,    47,    48,    49,    50,
      51,    55,  1054,  1055,  1056,  1058,  1059,   258,   250,   258,
     876,   306,   311,   247,   309,   250,   248,   250,   248,   249,
     878,   250,   188,   233,   526,   528,   249,   113,   114,   115,
     538,   247,   250,   436,   792,   838,   883,   940,   961,   969,
     971,   975,   979,   984,  1000,  1006,  1013,  1018,  1025,  1027,
    1029,  1031,  1033,  1036,  1037,  1049,  1052,  1060,  1062,   256,
     881,   793,   839,   884,   940,   961,   969,   971,   975,   979,
     984,  1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,  1033,
    1037,  1049,  1052,  1060,  1062,   256,   882,   880,   260,  1051,
     250,    80,  1065,  1070,  1071,   250,   260,   260,   260,    14,
     233,   950,   248,   755,   250,   105,   106,   107,   108,   281,
     282,   285,   751,   249,    93,    94,    95,    96,    97,    98,
      99,   100,   233,  1048,   857,   248,   250,   260,   260,   247,
     248,   250,   260,   248,   250,   258,   248,   142,   143,   145,
     146,   147,   148,   448,   449,   450,   460,   258,   476,   247,
     250,   248,   258,   215,   216,   467,   468,   256,   892,   891,
     582,   573,   574,   575,   901,   961,   963,   967,   969,   971,
     975,   979,   984,  1000,  1006,  1013,  1031,  1033,  1036,  1037,
    1049,  1052,  1060,  1062,   587,   578,   579,   580,   901,   961,
     963,   967,   969,   971,   975,   979,   984,  1000,  1006,  1013,
    1031,  1033,  1036,  1037,  1049,  1052,  1060,  1062,   247,   570,
     565,   595,   258,   258,   785,  1036,  1003,   256,   899,     4,
     138,   185,   217,   370,   371,   372,   461,    33,   149,   233,
     934,   427,   248,   250,   258,   258,   250,    23,   443,   446,
     499,   510,   514,   519,   539,   613,   614,   615,   944,   961,
     969,   971,   975,   979,   984,  1000,  1006,  1013,  1018,  1025,
    1027,  1029,  1031,  1033,  1036,  1037,  1052,  1060,  1062,   247,
     605,   443,   446,   499,   510,   514,   519,   539,   618,   619,
     620,   944,   961,   969,   971,   975,   979,   984,  1000,  1006,
    1013,  1018,  1025,  1027,  1029,  1031,  1033,  1036,  1037,  1052,
    1060,  1062,   247,   610,   247,   625,     4,   165,   233,   914,
     600,    33,   165,   233,   918,   630,    33,   652,    33,   657,
     443,   446,   499,   510,   514,   519,   539,   643,   644,   645,
     917,   963,   967,   971,   979,   984,  1000,  1006,  1013,  1018,
    1025,  1027,  1029,  1031,  1036,  1037,  1049,  1060,  1062,   247,
     640,   247,   650,   635,   165,   233,   911,   249,   249,   429,
     249,   247,   430,   249,   247,   431,   165,   233,   931,   233,
     504,   189,   233,   531,   533,   433,   248,   250,   247,   250,
     248,   260,   260,   174,   175,   176,   177,   178,   179,   180,
     516,   517,    93,    94,    95,    96,    97,    98,    99,   100,
     233,   521,   522,   523,   524,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   233,   541,   543,   546,   549,   550,
     389,   250,   258,   397,   247,   400,   247,   399,   247,   395,
     247,   395,   247,   400,   866,   247,   867,   865,   863,   864,
     260,   259,   261,   259,   263,   264,   264,   264,  1064,   263,
     145,   148,   870,     4,    33,   233,   941,   877,   249,   256,
     894,     4,   149,   233,   953,   893,   903,   250,   247,   250,
     250,   250,   250,   248,   247,   981,   982,  1008,  1009,  1016,
     233,   260,   250,   248,   247,   247,   250,   250,   250,   249,
     309,   539,   816,   817,   859,   233,   769,    70,   815,   858,
    1022,   233,   761,   762,   260,   787,   529,   247,   250,   248,
     260,   250,   385,   256,   883,   881,   256,   884,   882,   250,
     247,   248,   247,   250,   250,   250,   248,   250,   260,   247,
     248,   282,   283,   258,   250,   939,   250,   250,  1021,   233,
     250,   906,   250,   260,   451,   248,   247,   250,   249,   474,
     260,   250,   469,   250,   892,   583,   584,   585,   940,   961,
     963,   967,   969,   971,   975,   979,   984,  1000,  1006,  1013,
    1018,  1025,  1027,  1029,  1031,  1033,  1036,  1037,  1049,  1052,
    1060,  1062,   247,   575,   588,   589,   590,   940,   961,   963,
     967,   969,   971,   975,   979,   984,  1000,  1006,  1013,  1018,
    1025,  1027,  1029,  1031,  1033,  1036,  1037,  1049,  1052,  1060,
    1062,   247,   580,   570,   250,   250,   249,   899,   462,   249,
     248,   248,   250,   909,   250,   250,   249,   247,   615,   605,
     247,   620,   610,   625,   248,   248,   250,   248,   248,   250,
     662,   443,   446,   499,   510,   514,   519,   539,   653,   654,
     655,   913,   961,   963,   967,   969,   971,   975,   979,   984,
    1000,  1006,  1013,  1031,  1033,  1036,  1037,  1049,  1052,  1060,
    1062,   667,   443,   446,   499,   510,   514,   519,   539,   658,
     659,   660,   913,   961,   963,   967,   969,   971,   975,   979,
     984,  1000,  1006,  1013,  1031,  1033,  1036,  1037,  1049,  1052,
    1060,  1062,   247,   645,   640,   650,   166,   250,   260,   260,
     165,   233,   922,   430,   165,   233,   925,   431,   185,   250,
     247,   250,   534,   247,   250,   248,   929,   501,   260,   250,
     250,   250,   248,   250,   247,   249,   249,   249,   247,   250,
     248,   194,   195,   247,   544,   547,   549,   550,   250,   400,
     399,   395,   395,   400,   867,   250,   247,   250,   248,   247,
     250,   250,   250,   248,   250,   248,   248,   248,   250,     4,
      33,   149,   233,   957,   894,   248,   248,   250,   258,   259,
     259,   262,  1065,   260,   260,   260,   260,   260,  1014,   250,
    1055,    45,    46,    55,  1057,   233,   281,   247,   859,   249,
     247,   248,   250,   249,   527,   260,   250,   883,   884,   233,
     260,  1065,   951,   250,   282,   278,   238,   250,   258,   260,
    1019,   258,   250,   249,   260,   449,   233,   477,   478,   260,
     248,   247,   585,   575,   247,   590,   580,   260,   249,   143,
     145,   146,   147,   148,   215,   216,   373,   936,   935,   258,
       4,    33,   165,   233,   945,   615,   620,   916,   915,   920,
     919,   443,   446,   499,   510,   514,   519,   539,   663,   664,
     665,   944,   961,   963,   967,   969,   971,   975,   979,   984,
    1000,  1006,  1013,  1018,  1025,  1027,  1029,  1031,  1033,  1036,
    1037,  1049,  1052,  1060,  1062,   247,   655,   443,   446,   499,
     510,   514,   519,   539,   668,   669,   670,   944,   961,   963,
     967,   969,   971,   975,   979,   984,  1000,  1006,  1013,  1018,
    1025,  1027,  1029,  1031,  1033,  1036,  1037,  1049,  1052,  1060,
    1062,   247,   660,   645,   248,   250,   250,   167,   250,   168,
     250,   248,   505,   249,   532,   260,   258,   260,   181,   182,
     183,   184,   518,   521,   233,   233,   233,   542,   260,   544,
     549,   194,   195,   247,   545,   548,   549,   550,   259,   227,
     264,   260,   260,   943,   942,   248,   248,   248,   250,   954,
     955,   247,   250,   250,   250,   859,    71,  1023,   761,   233,
     763,   233,   260,   250,   258,     4,     7,     8,   101,   266,
     271,   280,   303,   312,   671,   677,   679,   689,   694,   696,
     698,   702,   726,   728,   730,   734,   735,   742,   744,   746,
     748,   251,   250,   233,   452,   453,   250,   233,   480,   247,
     250,   260,   585,   590,   250,   145,   146,   147,   148,   463,
     464,   250,   258,   258,   248,   248,   248,   250,   258,   258,
     258,   258,   247,   665,   655,   247,   670,   660,   912,   166,
     166,   932,   260,   233,   260,   250,   250,   250,   260,   545,
     549,   247,   549,   249,   250,   250,   258,   258,   958,   960,
     959,   258,   258,   259,   238,   250,   250,    33,     4,   279,
       4,   109,   111,   112,   119,   120,   121,   233,   286,   287,
     288,   290,   291,   293,   294,   295,   297,   298,   233,   455,
     247,   250,   479,   238,   478,   250,   248,   947,   946,   948,
     665,   670,   258,   248,   248,   258,   250,   549,   259,   258,
     258,   258,   233,  1024,   250,   249,   249,   249,   249,   249,
     249,   249,   249,   247,   284,   287,   454,   238,   453,   238,
     233,   481,   258,   258,   258,   258,   923,   926,   250,   299,
     110,   301,   301,   301,   301,   301,   301,   301,   287,   252,
     238,   233,   456,   481,   482,   258,   258,   300,   301,   249,
     233,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   296,   113,   114,   115,   116,   117,   118,
     292,   233,   233,   233,   250,   456,   457,   248,   250,   770,
     233,   289,   250,   250,   248,   233,   302,   250,   233,   483,
     250,   458,   248,   484,   248,   248,   459,   233,   233
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   257,   258,   259,   260,   260,   261,   261,   262,   262,
     263,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   269,   268,
     270,   272,   271,   273,   273,   274,   274,   274,   275,   275,
     277,   278,   279,   276,   280,   280,   281,   281,   281,   283,
     284,   282,   285,   285,   285,   285,   286,   286,   286,   287,
     287,   287,   287,   289,   288,   290,   290,   290,   291,   292,
     292,   292,   292,   292,   292,   293,   294,   295,   295,   295,
     295,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   297,   298,   299,   298,   300,   301,   302,
     301,   304,   303,   306,   305,   307,   307,   308,   308,   308,
     309,   311,   310,   313,   312,   315,   314,   316,   317,   319,
     318,   321,   320,   323,   322,   325,   324,   327,   326,   328,
     330,   329,   332,   331,   334,   333,   336,   335,   337,   339,
     338,   341,   340,   343,   342,   345,   344,   347,   346,   349,
     348,   351,   350,   353,   352,   354,   355,   356,   358,   357,
     360,   359,   362,   361,   364,   363,   366,   365,   367,   367,
     367,   367,   368,   369,   370,   370,   370,   371,   372,   373,
     373,   373,   373,   373,   373,   373,   374,   375,   375,   376,
     376,   377,   377,   378,   379,   380,   380,   381,   381,   382,
     382,   383,   384,   384,   384,   385,   386,   386,   387,   387,
     387,   388,   388,   389,   390,   390,   391,   391,   391,   393,
     392,   394,   394,   394,   394,   394,   394,   394,   394,   395,
     395,   396,   396,   396,   396,   396,   397,   397,   397,   397,
     397,   397,   397,   398,   398,   398,   398,   399,   399,   399,
     399,   399,   401,   400,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   411,   412,   412,   413,   413,   413,
     414,   414,   414,   415,   415,   415,   416,   416,   416,   417,
     417,   417,   418,   418,   418,   419,   419,   419,   420,   420,
     420,   421,   421,   421,   422,   422,   422,   423,   423,   423,
     424,   424,   424,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   428,   428,   428,
     428,   428,   428,   429,   429,   429,   429,   429,   430,   430,
     430,   430,   430,   431,   431,   431,   431,   431,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   433,   433,   434,   434,   435,   435,   435,   435,
     436,   436,   436,   437,   438,   438,   440,   439,   441,   442,
     443,   444,   444,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   447,   446,   448,   448,   449,   451,   450,
     452,   452,   454,   453,   455,   453,   457,   458,   456,   459,
     459,   460,   460,   460,   460,   460,   462,   461,   463,   464,
     464,   464,   464,   466,   465,   467,   468,   469,   468,   471,
     470,   472,   473,   474,   473,   473,   476,   475,   477,   477,
     479,   478,   480,   478,   482,   483,   481,   484,   484,   486,
     485,   488,   487,   490,   489,   491,   492,   493,   494,   495,
     496,   496,   496,   497,   498,   499,   500,   501,   500,   500,
     502,   502,   503,   504,   505,   504,   507,   506,   509,   508,
     511,   510,   513,   512,   515,   514,   516,   516,   517,   517,
     517,   517,   517,   517,   517,   518,   518,   518,   518,   520,
     519,   521,   521,   522,   522,   522,   522,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   525,   526,   527,   526,
     526,   529,   528,   530,   531,   532,   531,   531,   534,   533,
     536,   535,   537,   538,   538,   538,   540,   539,   541,   542,
     541,   541,   543,   543,   543,   543,   543,   544,   544,   544,
     544,   545,   545,   546,   546,   546,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   549,   549,   549,   550,   551,
     552,   552,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   554,   554,   554,   555,   555,   555,   556,   556,
     556,   557,   558,   558,   559,   560,   562,   561,   563,   563,
     564,   564,   564,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   567,   566,   568,   568,   569,   569,
     569,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   572,
     571,   573,   573,   574,   574,   574,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   577,   576,   578,   578,
     579,   579,   579,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   582,   581,   583,   583,   584,   584,   584,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   587,   586,   588,   588,   589,   589,
     589,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   592,   591,   593,   593,   594,
     594,   594,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   597,   596,   598,   598,   599,   599,
     599,   600,   600,   600,   600,   600,   600,   600,   600,   600,
     600,   600,   600,   600,   600,   600,   600,   600,   600,   602,
     601,   603,   603,   604,   604,   604,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   607,   606,   608,   608,   609,   609,   609,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,   612,   611,   613,   613,   614,   614,   614,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   617,   616,
     618,   618,   619,   619,   619,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   622,   621,   623,   623,   624,   624,   624,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   627,   626,   628,   628,   629,   629,   629,   630,
     630,   630,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   630,   630,   630,   630,   630,   630,   630,   630,   630,
     632,   631,   633,   633,   634,   634,   634,   635,   635,   635,
     635,   635,   635,   635,   635,   635,   635,   635,   635,   635,
     635,   635,   635,   635,   637,   636,   638,   638,   639,   639,
     639,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   642,   641,   643,   643,   644,   644,   644,   645,   645,
     645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   645,   645,   647,   646,   648,   648,   649,   649,
     649,   650,   650,   650,   650,   650,   650,   650,   650,   650,
     650,   650,   650,   650,   650,   650,   650,   650,   650,   650,
     650,   650,   652,   651,   653,   653,   654,   654,   654,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   657,   656,   658,   658,
     659,   659,   659,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     662,   661,   663,   663,   664,   664,   664,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   667,   666,
     668,   668,   669,   669,   669,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   672,   671,   674,   673,
     676,   675,   678,   677,   680,   679,   682,   681,   684,   683,
     686,   685,   688,   687,   690,   689,   692,   691,   693,   693,
     695,   694,   697,   696,   699,   698,   701,   700,   703,   702,
     705,   704,   707,   706,   709,   708,   711,   710,   713,   712,
     715,   714,   717,   716,   719,   718,   721,   720,   723,   722,
     725,   724,   727,   726,   729,   728,   731,   730,   733,   732,
     734,   736,   735,   738,   737,   739,   741,   740,   743,   742,
     745,   744,   747,   746,   749,   748,   750,   751,   752,   752,
     754,   753,   755,   756,   756,   758,   757,   759,   760,   760,
     760,   760,   760,   760,   760,   760,   761,   762,   762,   763,
     765,   764,   766,   767,   767,   768,   768,   769,   770,   770,
     771,   771,   772,   773,   774,   774,   775,   775,   776,   776,
     777,   777,   778,   778,   779,   779,   780,   780,   781,   781,
     782,   782,   783,   783,   784,   784,   785,   785,   786,   786,
     787,   787,   788,   788,   789,   789,   790,   790,   791,   791,
     792,   792,   793,   793,   794,   794,   795,   795,   796,   796,
     797,   797,   798,   798,   799,   799,   800,   800,   801,   801,
     802,   802,   803,   803,   804,   804,   805,   806,   806,   807,
     807,   808,   808,   809,   809,   810,   810,   811,   811,   812,
     812,   813,   813,   814,   814,   814,   815,   815,   816,   816,
     817,   817,   817,   818,   818,   818,   819,   819,   819,   820,
     820,   820,   821,   821,   821,   822,   822,   822,   823,   823,
     823,   824,   824,   824,   825,   825,   825,   826,   826,   826,
     827,   827,   827,   828,   828,   828,   829,   829,   829,   830,
     830,   830,   831,   831,   831,   832,   832,   832,   833,   833,
     833,   834,   834,   834,   835,   835,   835,   836,   836,   836,
     837,   837,   837,   838,   838,   838,   839,   839,   839,   840,
     840,   840,   841,   841,   841,   842,   842,   842,   843,   843,
     843,   844,   844,   844,   845,   845,   845,   846,   846,   846,
     847,   847,   847,   848,   848,   848,   849,   849,   849,   850,
     850,   850,   851,   852,   852,   852,   853,   853,   853,   854,
     854,   854,   855,   855,   855,   856,   857,   857,   858,   859,
     860,   860,   860,   860,   860,   860,   860,   860,   860,   860,
     861,   861,   861,   861,   861,   861,   862,   861,   861,   861,
     863,   863,   863,   863,   863,   863,   863,   863,   864,   864,
     864,   864,   864,   864,   864,   864,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   866,   866,   866,   866,   866,   866,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     869,   868,   870,   870,   871,   871,   871,   871,   871,   871,
     871,   871,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   873,   873,   873,   873,   873,   873,   873,
     873,   873,   873,   874,   874,   874,   874,   874,   874,   874,
     874,   874,   874,   874,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   877,   877,   877,   877,   877,
     877,   877,   877,   877,   877,   877,   877,   877,   877,   877,
     877,   877,   877,   877,   877,   878,   878,   878,   878,   878,
     878,   879,   879,   879,   879,   879,   879,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   881,   881,   881,   881,   881,   881,   881,   881,   881,
     881,   881,   881,   881,   881,   881,   881,   881,   881,   882,
     882,   882,   882,   882,   882,   882,   882,   882,   882,   882,
     882,   882,   882,   882,   882,   882,   883,   883,   883,   883,
     883,   883,   883,   883,   883,   883,   883,   883,   883,   883,
     883,   883,   883,   883,   883,   883,   883,   883,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   885,
     885,   885,   885,   885,   885,   885,   885,   885,   885,   885,
     885,   885,   885,   885,   885,   885,   886,   886,   886,   886,
     886,   886,   886,   886,   886,   886,   886,   886,   886,   886,
     886,   886,   887,   887,   887,   887,   887,   887,   887,   887,
     887,   887,   887,   887,   887,   887,   888,   888,   888,   888,
     888,   888,   888,   888,   888,   888,   888,   889,   889,   889,
     889,   889,   889,   889,   889,   889,   889,   890,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   891,   891,   891,
     891,   891,   891,   891,   891,   891,   891,   891,   891,   891,
     891,   891,   891,   891,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   892,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   894,   894,   894,
     894,   894,   894,   895,   895,   895,   895,   895,   895,   896,
     896,   897,   897,   897,   897,   897,   897,   898,   898,   898,
     898,   898,   899,   899,   900,   900,   900,   900,   900,   901,
     903,   902,   902,   904,   906,   905,   905,   907,   909,   908,
     908,   910,   912,   911,   911,   913,   915,   914,   916,   914,
     914,   917,   919,   918,   920,   918,   918,   921,   923,   922,
     922,   924,   926,   925,   925,   927,   929,   928,   928,   930,
     932,   931,   931,   933,   935,   934,   936,   934,   934,   937,
     939,   938,   938,   940,   942,   941,   943,   941,   941,   944,
     946,   945,   947,   945,   948,   945,   945,   949,   951,   950,
     950,   952,   954,   953,   955,   953,   953,   956,   958,   957,
     959,   957,   960,   957,   957,   962,   961,   964,   963,   966,
     965,   968,   967,   970,   969,   971,   972,   972,   972,   972,
     973,   974,   975,   976,   976,   976,   977,   978,   978,   978,
     979,   980,   981,   980,   982,   980,   983,   983,   983,   983,
     983,   983,   983,   983,   983,   985,   984,   987,   986,   989,
     988,   991,   990,   993,   992,   995,   994,   997,   996,   999,
     998,  1001,  1000,  1003,  1002,  1005,  1004,  1006,  1007,  1008,
    1007,  1009,  1007,  1011,  1010,  1012,  1013,  1014,  1013,  1015,
    1016,  1015,  1015,  1017,  1017,  1017,  1018,  1019,  1018,  1020,
    1021,  1020,  1022,  1023,  1024,  1026,  1025,  1028,  1027,  1030,
    1029,  1032,  1031,  1034,  1033,  1033,  1035,  1036,  1037,  1038,
    1040,  1039,  1041,  1042,  1044,  1043,  1046,  1045,  1047,  1048,
    1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1049,  1050,
    1051,  1050,  1053,  1052,  1054,  1054,  1055,  1055,  1056,  1056,
    1057,  1057,  1057,  1058,  1058,  1058,  1059,  1059,  1059,  1059,
    1059,  1061,  1060,  1063,  1062,  1064,  1064,  1065,  1065,  1066,
    1066,  1066,  1067,  1067,  1067,  1067,  1067,  1067,  1067,  1067,
    1067,  1067,  1069,  1068,  1070,  1070,  1071
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     3,
       6,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     0,     3,     0,     1,     1,     2,     3,     1,     1,
       0,     0,     0,     9,     1,     0,     1,     2,     3,     0,
       0,     7,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     0,     6,     1,     1,     1,     5,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     4,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     2,     0,     0,
       6,     0,     5,     0,     4,     0,     1,     1,     2,     3,
       1,     0,     5,     0,     3,     0,     3,     2,     3,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     5,     3,
       0,     3,     0,     3,     0,     3,     0,     4,     1,     0,
       3,     0,     4,     0,     5,     0,     5,     0,     3,     0,
       4,     0,     4,     0,     3,     3,     1,     1,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       4,     5,     4,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     3,     1,     1,     1,     3,     0,     3,
       1,     1,     3,     1,     1,     4,     1,     1,     1,     0,
       3,     1,     2,     5,     5,     3,     4,     4,     3,     2,
       3,     0,     2,     2,     1,     1,     0,     2,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     1,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     1,     1,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     1,     3,     1,     0,     5,
       1,     3,     0,     5,     0,     4,     0,     0,     6,     0,
       2,     1,     1,     1,     1,     1,     0,     5,     3,     1,
       1,     1,     1,     0,     5,     1,     1,     0,     4,     0,
       5,     4,     1,     0,     4,     3,     0,     5,     1,     3,
       0,     5,     0,     4,     0,     0,     6,     0,     2,     0,
       5,     0,     5,     0,     5,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     2,     4,     1,     0,     4,     3,
       1,     1,     4,     1,     0,     4,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     3,     1,     4,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     0,     4,
       3,     0,     5,     4,     1,     0,     4,     3,     0,     5,
       0,     5,     4,     1,     1,     1,     0,     5,     1,     0,
       4,     3,     1,     2,     3,     3,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     2,     3,     1,     2,
       3,     1,     1,     1,     1,     1,     0,     4,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     8,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     4,     0,     4,     0,     4,
       0,     5,     0,     5,     0,     4,     0,     7,     0,     1,
       0,     3,     0,     4,     0,     5,     0,     5,     0,     6,
       0,     6,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     5,     0,     5,
       0,     6,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     0,     3,     0,     3,     1,     0,     3,     0,     3,
       0,     4,     0,     3,     0,     4,     3,     1,     1,     3,
       0,     5,     1,     1,     3,     0,     7,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       0,     7,     1,     1,     3,     1,     1,     1,     0,     1,
       0,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     2,     3,     0,     1,     0,     1,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     4,     1,     4,     0,     4,     1,     4,     0,     4,
       1,     4,     0,     5,     1,     4,     0,     4,     0,     4,
       1,     4,     0,     4,     0,     4,     1,     4,     0,     6,
       1,     4,     0,     6,     1,     4,     0,     4,     1,     4,
       0,     5,     1,     4,     0,     4,     0,     4,     1,     4,
       0,     4,     1,     4,     0,     4,     0,     4,     1,     4,
       0,     4,     0,     4,     0,     4,     1,     4,     0,     4,
       1,     4,     0,     4,     0,     4,     1,     4,     0,     4,
       0,     4,     0,     4,     1,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     4,     1,     1,     1,     1,
       4,     0,     4,     1,     1,     1,     4,     1,     1,     1,
       4,     1,     0,     4,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       7,     0,     5,     0,     5,     0,     5,     4,     1,     0,
       4,     0,     4,     0,     5,     1,     4,     0,     7,     1,
       0,     4,     4,     1,     1,     1,     4,     0,     7,     1,
       0,     4,     4,     3,     1,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     1,     1,     1,     4,     1,
       0,     5,     1,     1,     0,     5,     0,     5,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       0,     4,     0,     5,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     7,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = OPENMP_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == OPENMP_EMPTY)                                        \
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
   Use OPENMP_error or OPENMP_UNDEF. */
#define YYERRCODE OPENMP_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if OPENMP_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined OPENMP_LTYPE_IS_TRIVIAL && OPENMP_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !OPENMP_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !OPENMP_DEBUG */


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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined OPENMP_LTYPE_IS_TRIVIAL && OPENMP_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = OPENMP_EMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == OPENMP_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= OPENMP_EOF)
    {
      yychar = OPENMP_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == OPENMP_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = OPENMP_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = OPENMP_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* expression: EXPR_STRING  */
#line 103 "ompparser.yy"
                         { }
#line 8064 "ompparser.cc"
    break;

  case 3: /* variable: EXPR_STRING  */
#line 104 "ompparser.yy"
                         {
  logFile << "Checking if " << (yyvsp[0].stype) << " exists in the current scope" << endl;
  if(table.lookup((yyvsp[0].stype))==false){
    errFile << "Error " << (yyvsp[0].stype) << "doesnt exist in the current scope" << endl;  
    error_count++;
  }
  else{
	(yyval.stype) = table.getSymbolInfo((yyvsp[0].stype))->getSymbolName().c_str(); 
  }
}
#line 8079 "ompparser.cc"
    break;

  case 6: /* var_list_broad: variable  */
#line 123 "ompparser.yy"
                          { mpi_writer.addArg((yyvsp[0].stype)); logFile << "PASA POR LA COGISION DE VARIABLES PARA BROAD" << endl; }
#line 8085 "ompparser.cc"
    break;

  case 7: /* var_list_broad: var_list_broad ',' variable  */
#line 124 "ompparser.yy"
                                      { mpi_writer.addArg((yyvsp[0].stype)); }
#line 8091 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 127 "ompparser.yy"
                              { if(enReduce){mpi_writer.MPI_Reduce(false, (yyvsp[0].stype));} }
#line 8097 "ompparser.cc"
    break;

  case 9: /* var_list_reduction: var_list_reduction ',' variable  */
#line 128 "ompparser.yy"
                                          { if(enReduce){mpi_writer.MPI_Reduce(false, (yyvsp[0].stype));} }
#line 8103 "ompparser.cc"
    break;

  case 10: /* var_chunk: variable ':' CHUNK '(' variable ')'  */
#line 131 "ompparser.yy"
                                                {
  
}
#line 8111 "ompparser.cc"
    break;

  case 178: /* $@1: %empty  */
#line 314 "ompparser.yy"
                    { }
#line 8117 "ompparser.cc"
    break;

  case 179: /* end_directive: END $@1 end_clause_seq  */
#line 314 "ompparser.yy"
                                       { }
#line 8123 "ompparser.cc"
    break;

  case 181: /* $@2: %empty  */
#line 320 "ompparser.yy"
                                        { }
#line 8129 "ompparser.cc"
    break;

  case 190: /* $@3: %empty  */
#line 337 "ompparser.yy"
                   { }
#line 8135 "ompparser.cc"
    break;

  case 191: /* $@4: %empty  */
#line 337 "ompparser.yy"
                                                              { }
#line 8141 "ompparser.cc"
    break;

  case 192: /* $@5: %empty  */
#line 337 "ompparser.yy"
                                                                                         { }
#line 8147 "ompparser.cc"
    break;

  case 194: /* when_variant_directive: variant_directive  */
#line 340 "ompparser.yy"
                                           { }
#line 8153 "ompparser.cc"
    break;

  case 195: /* when_variant_directive: %empty  */
#line 341 "ompparser.yy"
                  { ; }
#line 8159 "ompparser.cc"
    break;

  case 199: /* $@6: %empty  */
#line 349 "ompparser.yy"
                                             { }
#line 8165 "ompparser.cc"
    break;

  case 200: /* $@7: %empty  */
#line 349 "ompparser.yy"
                                                                             { }
#line 8171 "ompparser.cc"
    break;

  case 202: /* trait_set_selector_name: USER  */
#line 352 "ompparser.yy"
                               { }
#line 8177 "ompparser.cc"
    break;

  case 203: /* trait_set_selector_name: CONSTRUCT  */
#line 353 "ompparser.yy"
                            { }
#line 8183 "ompparser.cc"
    break;

  case 204: /* trait_set_selector_name: DEVICE  */
#line 354 "ompparser.yy"
                         { }
#line 8189 "ompparser.cc"
    break;

  case 205: /* trait_set_selector_name: IMPLEMENTATION  */
#line 355 "ompparser.yy"
                                 { }
#line 8195 "ompparser.cc"
    break;

  case 206: /* trait_selector_list: trait_selector  */
#line 358 "ompparser.yy"
                                     { }
#line 8201 "ompparser.cc"
    break;

  case 207: /* trait_selector_list: trait_selector_list trait_selector  */
#line 359 "ompparser.yy"
                                                     { }
#line 8207 "ompparser.cc"
    break;

  case 208: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 360 "ompparser.yy"
                                                         { }
#line 8213 "ompparser.cc"
    break;

  case 210: /* trait_selector: construct_selector  */
#line 364 "ompparser.yy"
                                     { }
#line 8219 "ompparser.cc"
    break;

  case 213: /* $@8: %empty  */
#line 369 "ompparser.yy"
                                                           { }
#line 8225 "ompparser.cc"
    break;

  case 219: /* context_kind_name: HOST  */
#line 380 "ompparser.yy"
                         { }
#line 8231 "ompparser.cc"
    break;

  case 220: /* context_kind_name: NOHOST  */
#line 381 "ompparser.yy"
                           { }
#line 8237 "ompparser.cc"
    break;

  case 221: /* context_kind_name: ANY  */
#line 382 "ompparser.yy"
                        { }
#line 8243 "ompparser.cc"
    break;

  case 222: /* context_kind_name: CPU  */
#line 383 "ompparser.yy"
                        { }
#line 8249 "ompparser.cc"
    break;

  case 223: /* context_kind_name: GPU  */
#line 384 "ompparser.yy"
                        { }
#line 8255 "ompparser.cc"
    break;

  case 224: /* context_kind_name: FPGA  */
#line 385 "ompparser.yy"
                         { }
#line 8261 "ompparser.cc"
    break;

  case 225: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 388 "ompparser.yy"
                                              { }
#line 8267 "ompparser.cc"
    break;

  case 226: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 391 "ompparser.yy"
                                                { }
#line 8273 "ompparser.cc"
    break;

  case 228: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 395 "ompparser.yy"
                                                                { }
#line 8279 "ompparser.cc"
    break;

  case 229: /* implementation_selector: EXPR_STRING  */
#line 396 "ompparser.yy"
                                      { }
#line 8285 "ompparser.cc"
    break;

  case 230: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 397 "ompparser.yy"
                                                          { }
#line 8291 "ompparser.cc"
    break;

  case 231: /* context_vendor_name: AMD  */
#line 400 "ompparser.yy"
                          { }
#line 8297 "ompparser.cc"
    break;

  case 232: /* context_vendor_name: ARM  */
#line 401 "ompparser.yy"
                          { }
#line 8303 "ompparser.cc"
    break;

  case 233: /* context_vendor_name: BSC  */
#line 402 "ompparser.yy"
                          { }
#line 8309 "ompparser.cc"
    break;

  case 234: /* context_vendor_name: CRAY  */
#line 403 "ompparser.yy"
                           { }
#line 8315 "ompparser.cc"
    break;

  case 235: /* context_vendor_name: FUJITSU  */
#line 404 "ompparser.yy"
                              { }
#line 8321 "ompparser.cc"
    break;

  case 236: /* context_vendor_name: GNU  */
#line 405 "ompparser.yy"
                          { }
#line 8327 "ompparser.cc"
    break;

  case 237: /* context_vendor_name: IBM  */
#line 406 "ompparser.yy"
                          { }
#line 8333 "ompparser.cc"
    break;

  case 238: /* context_vendor_name: INTEL  */
#line 407 "ompparser.yy"
                            { }
#line 8339 "ompparser.cc"
    break;

  case 239: /* context_vendor_name: LLVM  */
#line 408 "ompparser.yy"
                           { }
#line 8345 "ompparser.cc"
    break;

  case 240: /* context_vendor_name: PGI  */
#line 409 "ompparser.yy"
                          { }
#line 8351 "ompparser.cc"
    break;

  case 241: /* context_vendor_name: TI  */
#line 410 "ompparser.yy"
                         { }
#line 8357 "ompparser.cc"
    break;

  case 242: /* context_vendor_name: UNKNOWN  */
#line 411 "ompparser.yy"
                              { }
#line 8363 "ompparser.cc"
    break;

  case 244: /* parallel_selector: PARALLEL  */
#line 417 "ompparser.yy"
                             { }
#line 8369 "ompparser.cc"
    break;

  case 245: /* $@9: %empty  */
#line 418 "ompparser.yy"
                               { }
#line 8375 "ompparser.cc"
    break;

  case 249: /* $@10: %empty  */
#line 425 "ompparser.yy"
                                    { }
#line 8381 "ompparser.cc"
    break;

  case 251: /* $@11: %empty  */
#line 428 "ompparser.yy"
                                            { }
#line 8387 "ompparser.cc"
    break;

  case 253: /* $@12: %empty  */
#line 432 "ompparser.yy"
                                  { }
#line 8393 "ompparser.cc"
    break;

  case 261: /* $@13: %empty  */
#line 447 "ompparser.yy"
                     { }
#line 8399 "ompparser.cc"
    break;

  case 262: /* match_clause: MATCH $@13 '(' context_selector_specification ')'  */
#line 448 "ompparser.yy"
                                                       { }
#line 8405 "ompparser.cc"
    break;

  case 263: /* $@14: %empty  */
#line 452 "ompparser.yy"
                              { }
#line 8411 "ompparser.cc"
    break;

  case 265: /* $@15: %empty  */
#line 455 "ompparser.yy"
                            { enCluster = true; statePragma = 7; }
#line 8417 "ompparser.cc"
    break;

  case 267: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 458 "ompparser.yy"
                                            { }
#line 8423 "ompparser.cc"
    break;

  case 268: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 461 "ompparser.yy"
                                                    { }
#line 8429 "ompparser.cc"
    break;

  case 269: /* $@16: %empty  */
#line 464 "ompparser.yy"
                                      { }
#line 8435 "ompparser.cc"
    break;

  case 271: /* $@17: %empty  */
#line 467 "ompparser.yy"
                                          { }
#line 8441 "ompparser.cc"
    break;

  case 273: /* $@18: %empty  */
#line 470 "ompparser.yy"
                                        { enCluster = true;}
#line 8447 "ompparser.cc"
    break;

  case 275: /* $@19: %empty  */
#line 474 "ompparser.yy"
{
  enCluster = true;
  enDistribute = true;
  statePragma = 7;
}
#line 8457 "ompparser.cc"
    break;

  case 277: /* $@20: %empty  */
#line 482 "ompparser.yy"
{
 enCluster = true;
 enDistribute = true; 
 statePragma = 7;
}
#line 8467 "ompparser.cc"
    break;

  case 279: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 489 "ompparser.yy"
                                                      { enCluster = true;}
#line 8473 "ompparser.cc"
    break;

  case 280: /* $@21: %empty  */
#line 492 "ompparser.yy"
                                  { }
#line 8479 "ompparser.cc"
    break;

  case 282: /* $@22: %empty  */
#line 497 "ompparser.yy"
                      { }
#line 8485 "ompparser.cc"
    break;

  case 284: /* $@23: %empty  */
#line 499 "ompparser.yy"
                              { }
#line 8491 "ompparser.cc"
    break;

  case 286: /* $@24: %empty  */
#line 501 "ompparser.yy"
                                        { }
#line 8497 "ompparser.cc"
    break;

  case 288: /* taskyield_directive: TASKYIELD  */
#line 503 "ompparser.yy"
                                { }
#line 8503 "ompparser.cc"
    break;

  case 289: /* $@25: %empty  */
#line 505 "ompparser.yy"
                              { }
#line 8509 "ompparser.cc"
    break;

  case 291: /* $@26: %empty  */
#line 507 "ompparser.yy"
                                     { }
#line 8515 "ompparser.cc"
    break;

  case 293: /* $@27: %empty  */
#line 509 "ompparser.yy"
                                                 { }
#line 8521 "ompparser.cc"
    break;

  case 295: /* $@28: %empty  */
#line 511 "ompparser.yy"
                                               { }
#line 8527 "ompparser.cc"
    break;

  case 297: /* $@29: %empty  */
#line 513 "ompparser.yy"
                           { }
#line 8533 "ompparser.cc"
    break;

  case 299: /* $@30: %empty  */
#line 515 "ompparser.yy"
                                        { }
#line 8539 "ompparser.cc"
    break;

  case 301: /* $@31: %empty  */
#line 517 "ompparser.yy"
                                          { }
#line 8545 "ompparser.cc"
    break;

  case 303: /* $@32: %empty  */
#line 519 "ompparser.yy"
                        { }
#line 8551 "ompparser.cc"
    break;

  case 305: /* end_declare_target_directive: END DECLARE TARGET  */
#line 522 "ompparser.yy"
                                                  { }
#line 8557 "ompparser.cc"
    break;

  case 306: /* master_directive: MASTER  */
#line 524 "ompparser.yy"
                          { }
#line 8563 "ompparser.cc"
    break;

  case 307: /* barrier_directive: BARRIER  */
#line 526 "ompparser.yy"
                            { }
#line 8569 "ompparser.cc"
    break;

  case 308: /* $@33: %empty  */
#line 528 "ompparser.yy"
                              { }
#line 8575 "ompparser.cc"
    break;

  case 310: /* $@34: %empty  */
#line 530 "ompparser.yy"
                                { }
#line 8581 "ompparser.cc"
    break;

  case 312: /* $@35: %empty  */
#line 532 "ompparser.yy"
                              { }
#line 8587 "ompparser.cc"
    break;

  case 314: /* $@36: %empty  */
#line 534 "ompparser.yy"
                          { }
#line 8593 "ompparser.cc"
    break;

  case 316: /* $@37: %empty  */
#line 536 "ompparser.yy"
                            { }
#line 8599 "ompparser.cc"
    break;

  case 323: /* depobj: EXPR_STRING  */
#line 545 "ompparser.yy"
                     { }
#line 8605 "ompparser.cc"
    break;

  case 327: /* destroy_clause: DESTROY  */
#line 552 "ompparser.yy"
                        {}
#line 8611 "ompparser.cc"
    break;

  case 329: /* update_dependence_type: SOURCE  */
#line 557 "ompparser.yy"
                                { }
#line 8617 "ompparser.cc"
    break;

  case 330: /* update_dependence_type: IN  */
#line 558 "ompparser.yy"
                            { }
#line 8623 "ompparser.cc"
    break;

  case 331: /* update_dependence_type: OUT  */
#line 559 "ompparser.yy"
                             { }
#line 8629 "ompparser.cc"
    break;

  case 332: /* update_dependence_type: INOUT  */
#line 560 "ompparser.yy"
                               { }
#line 8635 "ompparser.cc"
    break;

  case 333: /* update_dependence_type: MUTEXINOUTSET  */
#line 561 "ompparser.yy"
                                       { }
#line 8641 "ompparser.cc"
    break;

  case 334: /* update_dependence_type: DEPOBJ  */
#line 562 "ompparser.yy"
                                { }
#line 8647 "ompparser.cc"
    break;

  case 335: /* update_dependence_type: SINK  */
#line 563 "ompparser.yy"
                              { }
#line 8653 "ompparser.cc"
    break;

  case 336: /* critical_name: EXPR_STRING  */
#line 566 "ompparser.yy"
                            { }
#line 8659 "ompparser.cc"
    break;

  case 355: /* extended_variable: EXPR_STRING  */
#line 597 "ompparser.yy"
                                { }
#line 8665 "ompparser.cc"
    break;

  case 363: /* flush_variable: EXPR_STRING  */
#line 609 "ompparser.yy"
                             { }
#line 8671 "ompparser.cc"
    break;

  case 369: /* $@38: %empty  */
#line 619 "ompparser.yy"
                          { }
#line 8677 "ompparser.cc"
    break;

  case 402: /* $@39: %empty  */
#line 662 "ompparser.yy"
                  { 
                     }
#line 8684 "ompparser.cc"
    break;

  case 404: /* read_clause: READ  */
#line 665 "ompparser.yy"
                   { }
#line 8690 "ompparser.cc"
    break;

  case 405: /* write_clause: WRITE  */
#line 667 "ompparser.yy"
                     { }
#line 8696 "ompparser.cc"
    break;

  case 406: /* update_clause: UPDATE  */
#line 669 "ompparser.yy"
                       { }
#line 8702 "ompparser.cc"
    break;

  case 407: /* capture_clause: CAPTURE  */
#line 671 "ompparser.yy"
                         { }
#line 8708 "ompparser.cc"
    break;

  case 408: /* seq_cst_clause: SEQ_CST  */
#line 674 "ompparser.yy"
                         { }
#line 8714 "ompparser.cc"
    break;

  case 409: /* acq_rel_clause: ACQ_REL  */
#line 676 "ompparser.yy"
                         { }
#line 8720 "ompparser.cc"
    break;

  case 410: /* release_clause: RELEASE  */
#line 678 "ompparser.yy"
                         { }
#line 8726 "ompparser.cc"
    break;

  case 411: /* acquire_clause: ACQUIRE  */
#line 680 "ompparser.yy"
                         { }
#line 8732 "ompparser.cc"
    break;

  case 412: /* relaxed_clause: RELAXED  */
#line 682 "ompparser.yy"
                         { }
#line 8738 "ompparser.cc"
    break;

  case 556: /* $@40: %empty  */
#line 859 "ompparser.yy"
                    { }
#line 8744 "ompparser.cc"
    break;

  case 558: /* untied_clause: UNTIED  */
#line 861 "ompparser.yy"
                      { }
#line 8750 "ompparser.cc"
    break;

  case 559: /* mergeable_clause: MERGEABLE  */
#line 863 "ompparser.yy"
                            { }
#line 8756 "ompparser.cc"
    break;

  case 560: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 865 "ompparser.yy"
                                                                                { }
#line 8762 "ompparser.cc"
    break;

  case 562: /* in_reduction_identifier: EXPR_STRING  */
#line 868 "ompparser.yy"
                                      { }
#line 8768 "ompparser.cc"
    break;

  case 563: /* in_reduction_enum_identifier: '+'  */
#line 871 "ompparser.yy"
                                   { }
#line 8774 "ompparser.cc"
    break;

  case 564: /* in_reduction_enum_identifier: '-'  */
#line 872 "ompparser.yy"
                                  { }
#line 8780 "ompparser.cc"
    break;

  case 565: /* in_reduction_enum_identifier: '*'  */
#line 873 "ompparser.yy"
                                  { }
#line 8786 "ompparser.cc"
    break;

  case 566: /* in_reduction_enum_identifier: '&'  */
#line 874 "ompparser.yy"
                                  { }
#line 8792 "ompparser.cc"
    break;

  case 567: /* in_reduction_enum_identifier: '|'  */
#line 875 "ompparser.yy"
                                  { }
#line 8798 "ompparser.cc"
    break;

  case 568: /* in_reduction_enum_identifier: '^'  */
#line 876 "ompparser.yy"
                                  { }
#line 8804 "ompparser.cc"
    break;

  case 569: /* in_reduction_enum_identifier: LOGAND  */
#line 877 "ompparser.yy"
                                     { }
#line 8810 "ompparser.cc"
    break;

  case 570: /* in_reduction_enum_identifier: LOGOR  */
#line 878 "ompparser.yy"
                                    { }
#line 8816 "ompparser.cc"
    break;

  case 571: /* in_reduction_enum_identifier: MAX  */
#line 879 "ompparser.yy"
                                  { }
#line 8822 "ompparser.cc"
    break;

  case 572: /* in_reduction_enum_identifier: MIN  */
#line 880 "ompparser.yy"
                                  { }
#line 8828 "ompparser.cc"
    break;

  case 573: /* $@41: %empty  */
#line 883 "ompparser.yy"
                                     { }
#line 8834 "ompparser.cc"
    break;

  case 574: /* depend_with_modifier_clause: DEPEND $@41 '(' depend_parameter ':' var_list ')'  */
#line 883 "ompparser.yy"
                                                                               { }
#line 8840 "ompparser.cc"
    break;

  case 576: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 887 "ompparser.yy"
                                                       { }
#line 8846 "ompparser.cc"
    break;

  case 578: /* $@42: %empty  */
#line 891 "ompparser.yy"
                                    { }
#line 8852 "ompparser.cc"
    break;

  case 582: /* $@43: %empty  */
#line 896 "ompparser.yy"
                                                    { }
#line 8858 "ompparser.cc"
    break;

  case 584: /* $@44: %empty  */
#line 897 "ompparser.yy"
                                        { }
#line 8864 "ompparser.cc"
    break;

  case 586: /* $@45: %empty  */
#line 899 "ompparser.yy"
                                         { }
#line 8870 "ompparser.cc"
    break;

  case 587: /* $@46: %empty  */
#line 899 "ompparser.yy"
                                                             { }
#line 8876 "ompparser.cc"
    break;

  case 588: /* depend_range_specification: EXPR_STRING $@45 ':' EXPR_STRING $@46 depend_range_step  */
#line 899 "ompparser.yy"
                                                                                   { }
#line 8882 "ompparser.cc"
    break;

  case 589: /* depend_range_step: %empty  */
#line 901 "ompparser.yy"
                              { }
#line 8888 "ompparser.cc"
    break;

  case 590: /* depend_range_step: ':' EXPR_STRING  */
#line 902 "ompparser.yy"
                                    { }
#line 8894 "ompparser.cc"
    break;

  case 591: /* depend_enum_type: IN  */
#line 904 "ompparser.yy"
                      { }
#line 8900 "ompparser.cc"
    break;

  case 592: /* depend_enum_type: OUT  */
#line 905 "ompparser.yy"
                       { }
#line 8906 "ompparser.cc"
    break;

  case 593: /* depend_enum_type: INOUT  */
#line 906 "ompparser.yy"
                         { }
#line 8912 "ompparser.cc"
    break;

  case 594: /* depend_enum_type: MUTEXINOUTSET  */
#line 907 "ompparser.yy"
                                 { }
#line 8918 "ompparser.cc"
    break;

  case 595: /* depend_enum_type: DEPOBJ  */
#line 908 "ompparser.yy"
                          { }
#line 8924 "ompparser.cc"
    break;

  case 596: /* $@47: %empty  */
#line 911 "ompparser.yy"
                              { }
#line 8930 "ompparser.cc"
    break;

  case 597: /* depend_depobj_clause: DEPEND $@47 '(' dependence_depobj_parameter ')'  */
#line 911 "ompparser.yy"
                                                                     {
}
#line 8937 "ompparser.cc"
    break;

  case 599: /* dependence_depobj_type: IN  */
#line 916 "ompparser.yy"
                                        { }
#line 8943 "ompparser.cc"
    break;

  case 600: /* dependence_depobj_type: OUT  */
#line 917 "ompparser.yy"
                                        { }
#line 8949 "ompparser.cc"
    break;

  case 601: /* dependence_depobj_type: INOUT  */
#line 918 "ompparser.yy"
                                        { }
#line 8955 "ompparser.cc"
    break;

  case 602: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 919 "ompparser.yy"
                                        { }
#line 8961 "ompparser.cc"
    break;

  case 603: /* $@48: %empty  */
#line 921 "ompparser.yy"
                               { }
#line 8967 "ompparser.cc"
    break;

  case 604: /* depend_ordered_clause: DEPEND $@48 '(' dependence_ordered_parameter ')'  */
#line 921 "ompparser.yy"
                                                                       {
}
#line 8974 "ompparser.cc"
    break;

  case 606: /* dependence_ordered_type: SOURCE  */
#line 926 "ompparser.yy"
                                  { }
#line 8980 "ompparser.cc"
    break;

  case 607: /* $@49: %empty  */
#line 927 "ompparser.yy"
                               { }
#line 8986 "ompparser.cc"
    break;

  case 609: /* $@50: %empty  */
#line 930 "ompparser.yy"
                          { }
#line 8992 "ompparser.cc"
    break;

  case 612: /* affinity_parameter: EXPR_STRING  */
#line 935 "ompparser.yy"
                                 { }
#line 8998 "ompparser.cc"
    break;

  case 613: /* $@51: %empty  */
#line 936 "ompparser.yy"
                                     { }
#line 9004 "ompparser.cc"
    break;

  case 616: /* $@52: %empty  */
#line 940 "ompparser.yy"
                                      { }
#line 9010 "ompparser.cc"
    break;

  case 617: /* affinity_modifier: MODIFIER_ITERATOR $@52 '(' iterators_definition ')'  */
#line 940 "ompparser.yy"
                                                                   {}
#line 9016 "ompparser.cc"
    break;

  case 620: /* $@53: %empty  */
#line 945 "ompparser.yy"
                                             { }
#line 9022 "ompparser.cc"
    break;

  case 622: /* $@54: %empty  */
#line 946 "ompparser.yy"
                                { }
#line 9028 "ompparser.cc"
    break;

  case 624: /* $@55: %empty  */
#line 948 "ompparser.yy"
                                  { }
#line 9034 "ompparser.cc"
    break;

  case 625: /* $@56: %empty  */
#line 948 "ompparser.yy"
                                                      { }
#line 9040 "ompparser.cc"
    break;

  case 626: /* range_specification: EXPR_STRING $@55 ':' EXPR_STRING $@56 range_step  */
#line 948 "ompparser.yy"
                                                                     { }
#line 9046 "ompparser.cc"
    break;

  case 627: /* range_step: %empty  */
#line 951 "ompparser.yy"
                       { }
#line 9052 "ompparser.cc"
    break;

  case 628: /* range_step: ':' EXPR_STRING  */
#line 952 "ompparser.yy"
                             { }
#line 9058 "ompparser.cc"
    break;

  case 629: /* $@57: %empty  */
#line 955 "ompparser.yy"
                      { }
#line 9064 "ompparser.cc"
    break;

  case 631: /* $@58: %empty  */
#line 957 "ompparser.yy"
                            { }
#line 9070 "ompparser.cc"
    break;

  case 633: /* $@59: %empty  */
#line 959 "ompparser.yy"
                            { }
#line 9076 "ompparser.cc"
    break;

  case 635: /* nogroup_clause: NOGROUP  */
#line 961 "ompparser.yy"
                        { }
#line 9082 "ompparser.cc"
    break;

  case 636: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 963 "ompparser.yy"
                                        { }
#line 9088 "ompparser.cc"
    break;

  case 637: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 965 "ompparser.yy"
                                        { }
#line 9094 "ompparser.cc"
    break;

  case 638: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 967 "ompparser.yy"
                                                    { }
#line 9100 "ompparser.cc"
    break;

  case 639: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 969 "ompparser.yy"
                                                                                                      { }
#line 9106 "ompparser.cc"
    break;

  case 640: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 971 "ompparser.yy"
                                             { }
#line 9112 "ompparser.cc"
    break;

  case 641: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 972 "ompparser.yy"
                                             { }
#line 9118 "ompparser.cc"
    break;

  case 642: /* atomic_default_mem_order_parameter: RELAXED  */
#line 973 "ompparser.yy"
                                             { }
#line 9124 "ompparser.cc"
    break;

  case 643: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 975 "ompparser.yy"
                                              { }
#line 9130 "ompparser.cc"
    break;

  case 644: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 977 "ompparser.yy"
                                                                { }
#line 9136 "ompparser.cc"
    break;

  case 646: /* device_parameter: EXPR_STRING  */
#line 981 "ompparser.yy"
                                { }
#line 9142 "ompparser.cc"
    break;

  case 647: /* $@60: %empty  */
#line 982 "ompparser.yy"
                                   { }
#line 9148 "ompparser.cc"
    break;

  case 650: /* device_modifier_parameter: ANCESTOR  */
#line 986 "ompparser.yy"
                                     { }
#line 9154 "ompparser.cc"
    break;

  case 651: /* device_modifier_parameter: DEVICE_NUM  */
#line 987 "ompparser.yy"
                                       { }
#line 9160 "ompparser.cc"
    break;

  case 653: /* device_without_modifier_parameter: EXPR_STRING  */
#line 992 "ompparser.yy"
                                                 { }
#line 9166 "ompparser.cc"
    break;

  case 654: /* $@61: %empty  */
#line 993 "ompparser.yy"
                                                    { }
#line 9172 "ompparser.cc"
    break;

  case 656: /* $@62: %empty  */
#line 996 "ompparser.yy"
                                       { }
#line 9178 "ompparser.cc"
    break;

  case 658: /* $@63: %empty  */
#line 999 "ompparser.yy"
                                         { }
#line 9184 "ompparser.cc"
    break;

  case 660: /* $@64: %empty  */
#line 1001 "ompparser.yy"
                                     { }
#line 9190 "ompparser.cc"
    break;

  case 661: /* is_device_ptr_clause: IS_DEVICE_PTR $@64 '(' var_list ')'  */
#line 1001 "ompparser.yy"
                                                          {
}
#line 9197 "ompparser.cc"
    break;

  case 662: /* $@65: %empty  */
#line 1005 "ompparser.yy"
                                         { }
#line 9203 "ompparser.cc"
    break;

  case 663: /* has_device_addr_clause: HAS_DEVICE_ADDR $@65 '(' var_list ')'  */
#line 1005 "ompparser.yy"
                                                              {
}
#line 9210 "ompparser.cc"
    break;

  case 664: /* $@66: %empty  */
#line 1008 "ompparser.yy"
                              { }
#line 9216 "ompparser.cc"
    break;

  case 666: /* defaultmap_parameter: defaultmap_behavior  */
#line 1010 "ompparser.yy"
                                           { }
#line 9222 "ompparser.cc"
    break;

  case 668: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1014 "ompparser.yy"
                                     { }
#line 9228 "ompparser.cc"
    break;

  case 669: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1015 "ompparser.yy"
                                  { }
#line 9234 "ompparser.cc"
    break;

  case 670: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1016 "ompparser.yy"
                                    { }
#line 9240 "ompparser.cc"
    break;

  case 671: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1017 "ompparser.yy"
                                      {}
#line 9246 "ompparser.cc"
    break;

  case 672: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1018 "ompparser.yy"
                                            { }
#line 9252 "ompparser.cc"
    break;

  case 673: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1019 "ompparser.yy"
                                    { }
#line 9258 "ompparser.cc"
    break;

  case 674: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1020 "ompparser.yy"
                                       { }
#line 9264 "ompparser.cc"
    break;

  case 675: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1022 "ompparser.yy"
                                      { }
#line 9270 "ompparser.cc"
    break;

  case 676: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1023 "ompparser.yy"
                                         { }
#line 9276 "ompparser.cc"
    break;

  case 677: /* defaultmap_category: CATEGORY_POINTER  */
#line 1024 "ompparser.yy"
                                       { }
#line 9282 "ompparser.cc"
    break;

  case 678: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1025 "ompparser.yy"
                                           { }
#line 9288 "ompparser.cc"
    break;

  case 679: /* $@67: %empty  */
#line 1027 "ompparser.yy"
                                          { }
#line 9294 "ompparser.cc"
    break;

  case 683: /* allocators_list: allocators_list_parameter_enum  */
#line 1032 "ompparser.yy"
                                                 { }
#line 9300 "ompparser.cc"
    break;

  case 684: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1033 "ompparser.yy"
                                                                     { }
#line 9306 "ompparser.cc"
    break;

  case 685: /* allocators_list: allocators_list_parameter_user  */
#line 1034 "ompparser.yy"
                                                 { }
#line 9312 "ompparser.cc"
    break;

  case 686: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1035 "ompparser.yy"
                                                                     { }
#line 9318 "ompparser.cc"
    break;

  case 687: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1038 "ompparser.yy"
                                                   { }
#line 9324 "ompparser.cc"
    break;

  case 688: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1039 "ompparser.yy"
                                                     { }
#line 9330 "ompparser.cc"
    break;

  case 689: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1040 "ompparser.yy"
                                                 { }
#line 9336 "ompparser.cc"
    break;

  case 690: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1041 "ompparser.yy"
                                                   { }
#line 9342 "ompparser.cc"
    break;

  case 691: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1042 "ompparser.yy"
                                                   { }
#line 9348 "ompparser.cc"
    break;

  case 692: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1043 "ompparser.yy"
                                                  { }
#line 9354 "ompparser.cc"
    break;

  case 693: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1044 "ompparser.yy"
                                                 { }
#line 9360 "ompparser.cc"
    break;

  case 694: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1045 "ompparser.yy"
                                                  { }
#line 9366 "ompparser.cc"
    break;

  case 695: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1047 "ompparser.yy"
                                             { }
#line 9372 "ompparser.cc"
    break;

  case 697: /* to_parameter: EXPR_STRING  */
#line 1050 "ompparser.yy"
                            { }
#line 9378 "ompparser.cc"
    break;

  case 698: /* $@68: %empty  */
#line 1051 "ompparser.yy"
                               { }
#line 9384 "ompparser.cc"
    break;

  case 701: /* $@69: %empty  */
#line 1054 "ompparser.yy"
                      { }
#line 9390 "ompparser.cc"
    break;

  case 702: /* to_mapper: TO_MAPPER $@69 '(' EXPR_STRING ')'  */
#line 1054 "ompparser.yy"
                                           { }
#line 9396 "ompparser.cc"
    break;

  case 704: /* from_parameter: EXPR_STRING  */
#line 1058 "ompparser.yy"
                             { }
#line 9402 "ompparser.cc"
    break;

  case 705: /* $@70: %empty  */
#line 1059 "ompparser.yy"
                                 { }
#line 9408 "ompparser.cc"
    break;

  case 708: /* $@71: %empty  */
#line 1062 "ompparser.yy"
                          { }
#line 9414 "ompparser.cc"
    break;

  case 709: /* from_mapper: FROM_MAPPER $@71 '(' EXPR_STRING ')'  */
#line 1062 "ompparser.yy"
                                               { }
#line 9420 "ompparser.cc"
    break;

  case 710: /* $@72: %empty  */
#line 1064 "ompparser.yy"
                   {
}
#line 9427 "ompparser.cc"
    break;

  case 711: /* link_clause: LINK $@72 '(' var_list ')'  */
#line 1065 "ompparser.yy"
                   { }
#line 9433 "ompparser.cc"
    break;

  case 712: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1067 "ompparser.yy"
                                                               { }
#line 9439 "ompparser.cc"
    break;

  case 713: /* device_type_parameter: HOST  */
#line 1069 "ompparser.yy"
                             { }
#line 9445 "ompparser.cc"
    break;

  case 714: /* device_type_parameter: NOHOST  */
#line 1070 "ompparser.yy"
                             { }
#line 9451 "ompparser.cc"
    break;

  case 715: /* device_type_parameter: ANY  */
#line 1071 "ompparser.yy"
                          { }
#line 9457 "ompparser.cc"
    break;

  case 716: /* $@73: %empty  */
#line 1074 "ompparser.yy"
                 { }
#line 9463 "ompparser.cc"
    break;

  case 718: /* map_parameter: EXPR_STRING  */
#line 1076 "ompparser.yy"
                            { }
#line 9469 "ompparser.cc"
    break;

  case 719: /* $@74: %empty  */
#line 1077 "ompparser.yy"
                                { }
#line 9475 "ompparser.cc"
    break;

  case 733: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1095 "ompparser.yy"
                                    { }
#line 9481 "ompparser.cc"
    break;

  case 734: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1096 "ompparser.yy"
                                    { }
#line 9487 "ompparser.cc"
    break;

  case 735: /* map_modifier1: map_modifier_mapper  */
#line 1097 "ompparser.yy"
                                    { }
#line 9493 "ompparser.cc"
    break;

  case 736: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1099 "ompparser.yy"
                                    { }
#line 9499 "ompparser.cc"
    break;

  case 737: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1100 "ompparser.yy"
                                    { }
#line 9505 "ompparser.cc"
    break;

  case 738: /* map_modifier2: map_modifier_mapper  */
#line 1101 "ompparser.yy"
                                    { }
#line 9511 "ompparser.cc"
    break;

  case 739: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1103 "ompparser.yy"
                                    { }
#line 9517 "ompparser.cc"
    break;

  case 740: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1104 "ompparser.yy"
                                    { }
#line 9523 "ompparser.cc"
    break;

  case 741: /* map_modifier3: map_modifier_mapper  */
#line 1105 "ompparser.yy"
                                    { }
#line 9529 "ompparser.cc"
    break;

  case 742: /* map_type: MAP_TYPE_TO  */
#line 1107 "ompparser.yy"
                       { }
#line 9535 "ompparser.cc"
    break;

  case 743: /* map_type: MAP_TYPE_FROM  */
#line 1108 "ompparser.yy"
                         { }
#line 9541 "ompparser.cc"
    break;

  case 744: /* map_type: MAP_TYPE_TOFROM  */
#line 1109 "ompparser.yy"
                           { }
#line 9547 "ompparser.cc"
    break;

  case 745: /* map_type: MAP_TYPE_ALLOC  */
#line 1110 "ompparser.yy"
                          { }
#line 9553 "ompparser.cc"
    break;

  case 746: /* map_type: MAP_TYPE_RELEASE  */
#line 1111 "ompparser.yy"
                            { }
#line 9559 "ompparser.cc"
    break;

  case 747: /* map_type: MAP_TYPE_DELETE  */
#line 1112 "ompparser.yy"
                           { }
#line 9565 "ompparser.cc"
    break;

  case 748: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1114 "ompparser.yy"
                                                            { }
#line 9571 "ompparser.cc"
    break;

  case 749: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1117 "ompparser.yy"
                                                                                      { }
#line 9577 "ompparser.cc"
    break;

  case 751: /* task_reduction_identifier: EXPR_STRING  */
#line 1120 "ompparser.yy"
                                        { }
#line 9583 "ompparser.cc"
    break;

  case 752: /* task_reduction_enum_identifier: '+'  */
#line 1123 "ompparser.yy"
                                     { }
#line 9589 "ompparser.cc"
    break;

  case 753: /* task_reduction_enum_identifier: '-'  */
#line 1124 "ompparser.yy"
                                     { }
#line 9595 "ompparser.cc"
    break;

  case 754: /* task_reduction_enum_identifier: '*'  */
#line 1125 "ompparser.yy"
                                     { }
#line 9601 "ompparser.cc"
    break;

  case 755: /* task_reduction_enum_identifier: '&'  */
#line 1126 "ompparser.yy"
                                     { }
#line 9607 "ompparser.cc"
    break;

  case 756: /* task_reduction_enum_identifier: '|'  */
#line 1127 "ompparser.yy"
                                     { }
#line 9613 "ompparser.cc"
    break;

  case 757: /* task_reduction_enum_identifier: '^'  */
#line 1128 "ompparser.yy"
                                     { }
#line 9619 "ompparser.cc"
    break;

  case 758: /* task_reduction_enum_identifier: LOGAND  */
#line 1129 "ompparser.yy"
                                        { }
#line 9625 "ompparser.cc"
    break;

  case 759: /* task_reduction_enum_identifier: LOGOR  */
#line 1130 "ompparser.yy"
                                       { }
#line 9631 "ompparser.cc"
    break;

  case 760: /* task_reduction_enum_identifier: MAX  */
#line 1131 "ompparser.yy"
                                     { }
#line 9637 "ompparser.cc"
    break;

  case 761: /* task_reduction_enum_identifier: MIN  */
#line 1132 "ompparser.yy"
                                     { }
#line 9643 "ompparser.cc"
    break;

  case 774: /* threads_clause: THREADS  */
#line 1151 "ompparser.yy"
                         { }
#line 9649 "ompparser.cc"
    break;

  case 775: /* simd_ordered_clause: SIMD  */
#line 1153 "ompparser.yy"
                           { }
#line 9655 "ompparser.cc"
    break;

  case 776: /* $@75: %empty  */
#line 1155 "ompparser.yy"
                                              {
  if(enCluster == true){
    enDistribute = true;
  }

 }
#line 9666 "ompparser.cc"
    break;

  case 794: /* $@76: %empty  */
#line 1182 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
  }
}
#line 9676 "ompparser.cc"
    break;

  case 819: /* $@77: %empty  */
#line 1215 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9687 "ompparser.cc"
    break;

  case 846: /* $@78: %empty  */
#line 1251 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9698 "ompparser.cc"
    break;

  case 873: /* $@79: %empty  */
#line 1287 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9709 "ompparser.cc"
    break;

  case 904: /* $@80: %empty  */
#line 1327 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9720 "ompparser.cc"
    break;

  case 935: /* $@81: %empty  */
#line 1366 "ompparser.yy"
                                 { }
#line 9726 "ompparser.cc"
    break;

  case 954: /* $@82: %empty  */
#line 1388 "ompparser.yy"
                                           { }
#line 9732 "ompparser.cc"
    break;

  case 979: /* $@83: %empty  */
#line 1417 "ompparser.yy"
                                                   { }
#line 9738 "ompparser.cc"
    break;

  case 1011: /* $@84: %empty  */
#line 1452 "ompparser.yy"
                                                 { }
#line 9744 "ompparser.cc"
    break;

  case 1043: /* $@85: %empty  */
#line 1487 "ompparser.yy"
                                                             { }
#line 9750 "ompparser.cc"
    break;

  case 1078: /* $@86: %empty  */
#line 1525 "ompparser.yy"
                                                           { }
#line 9756 "ompparser.cc"
    break;

  case 1113: /* $@87: %empty  */
#line 1563 "ompparser.yy"
                                                     { }
#line 9762 "ompparser.cc"
    break;

  case 1142: /* $@88: %empty  */
#line 1595 "ompparser.yy"
                                   { }
#line 9768 "ompparser.cc"
    break;

  case 1170: /* $@89: %empty  */
#line 1626 "ompparser.yy"
                                     { }
#line 9774 "ompparser.cc"
    break;

  case 1194: /* $@90: %empty  */
#line 1653 "ompparser.yy"
                                                           { }
#line 9780 "ompparser.cc"
    break;

  case 1221: /* $@91: %empty  */
#line 1683 "ompparser.yy"
                                                                     { }
#line 9786 "ompparser.cc"
    break;

  case 1254: /* $@92: %empty  */
#line 1719 "ompparser.yy"
                                               { }
#line 9792 "ompparser.cc"
    break;

  case 1282: /* $@93: %empty  */
#line 1750 "ompparser.yy"
                                                                                     { }
#line 9798 "ompparser.cc"
    break;

  case 1316: /* $@94: %empty  */
#line 1787 "ompparser.yy"
                                                                                   { }
#line 9804 "ompparser.cc"
    break;

  case 1350: /* $@95: %empty  */
#line 1824 "ompparser.yy"
                                                                                               { }
#line 9810 "ompparser.cc"
    break;

  case 1388: /* $@96: %empty  */
#line 1865 "ompparser.yy"
                                                                                             { }
#line 9816 "ompparser.cc"
    break;

  case 1426: /* $@97: %empty  */
#line 1908 "ompparser.yy"
                    { }
#line 9822 "ompparser.cc"
    break;

  case 1428: /* $@98: %empty  */
#line 1910 "ompparser.yy"
                  { }
#line 9828 "ompparser.cc"
    break;

  case 1430: /* $@99: %empty  */
#line 1912 "ompparser.yy"
                         { }
#line 9834 "ompparser.cc"
    break;

  case 1432: /* $@100: %empty  */
#line 1914 "ompparser.yy"
                      { }
#line 9840 "ompparser.cc"
    break;

  case 1434: /* $@101: %empty  */
#line 1916 "ompparser.yy"
                              { }
#line 9846 "ompparser.cc"
    break;

  case 1436: /* $@102: %empty  */
#line 1918 "ompparser.yy"
                            { }
#line 9852 "ompparser.cc"
    break;

  case 1438: /* $@103: %empty  */
#line 1920 "ompparser.yy"
                                   { }
#line 9858 "ompparser.cc"
    break;

  case 1440: /* $@104: %empty  */
#line 1923 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9869 "ompparser.cc"
    break;

  case 1442: /* $@105: %empty  */
#line 1930 "ompparser.yy"
                                              { }
#line 9875 "ompparser.cc"
    break;

  case 1444: /* $@106: %empty  */
#line 1932 "ompparser.yy"
                                      { }
#line 9881 "ompparser.cc"
    break;

  case 1446: /* $@107: %empty  */
#line 1934 "ompparser.yy"
                                              { }
#line 9887 "ompparser.cc"
    break;

  case 1449: /* proc_name: EXPR_STRING  */
#line 1937 "ompparser.yy"
                        { }
#line 9893 "ompparser.cc"
    break;

  case 1450: /* $@108: %empty  */
#line 1939 "ompparser.yy"
                                  { }
#line 9899 "ompparser.cc"
    break;

  case 1452: /* $@109: %empty  */
#line 1941 "ompparser.yy"
                                            { }
#line 9905 "ompparser.cc"
    break;

  case 1454: /* $@110: %empty  */
#line 1943 "ompparser.yy"
                                                            { }
#line 9911 "ompparser.cc"
    break;

  case 1456: /* $@111: %empty  */
#line 1945 "ompparser.yy"
                                                          { }
#line 9917 "ompparser.cc"
    break;

  case 1458: /* $@112: %empty  */
#line 1947 "ompparser.yy"
                                                                      { }
#line 9923 "ompparser.cc"
    break;

  case 1460: /* $@113: %empty  */
#line 1949 "ompparser.yy"
                                                                    { }
#line 9929 "ompparser.cc"
    break;

  case 1462: /* $@114: %empty  */
#line 1951 "ompparser.yy"
                                      { }
#line 9935 "ompparser.cc"
    break;

  case 1464: /* $@115: %empty  */
#line 1953 "ompparser.yy"
                                    { }
#line 9941 "ompparser.cc"
    break;

  case 1466: /* $@116: %empty  */
#line 1955 "ompparser.yy"
                                        { }
#line 9947 "ompparser.cc"
    break;

  case 1468: /* $@117: %empty  */
#line 1957 "ompparser.yy"
                                                { }
#line 9953 "ompparser.cc"
    break;

  case 1470: /* $@118: %empty  */
#line 1959 "ompparser.yy"
                                                  { }
#line 9959 "ompparser.cc"
    break;

  case 1472: /* $@119: %empty  */
#line 1961 "ompparser.yy"
                                            { }
#line 9965 "ompparser.cc"
    break;

  case 1474: /* $@120: %empty  */
#line 1963 "ompparser.yy"
                                            {
                          }
#line 9972 "ompparser.cc"
    break;

  case 1476: /* $@121: %empty  */
#line 1967 "ompparser.yy"
                                                      {
                               }
#line 9979 "ompparser.cc"
    break;

  case 1478: /* $@122: %empty  */
#line 1971 "ompparser.yy"
                                                              {
                                   }
#line 9986 "ompparser.cc"
    break;

  case 1480: /* $@123: %empty  */
#line 1975 "ompparser.yy"
                                                                        {
                                        }
#line 9993 "ompparser.cc"
    break;

  case 1482: /* $@124: %empty  */
#line 1979 "ompparser.yy"
                      { }
#line 9999 "ompparser.cc"
    break;

  case 1484: /* $@125: %empty  */
#line 1981 "ompparser.yy"
                      { }
#line 10005 "ompparser.cc"
    break;

  case 1486: /* $@126: %empty  */
#line 1983 "ompparser.yy"
                              { }
#line 10011 "ompparser.cc"
    break;

  case 1488: /* $@127: %empty  */
#line 1985 "ompparser.yy"
                                     { }
#line 10017 "ompparser.cc"
    break;

  case 1490: /* section_directive: SECTION  */
#line 1987 "ompparser.yy"
                            { }
#line 10023 "ompparser.cc"
    break;

  case 1491: /* $@128: %empty  */
#line 1989 "ompparser.yy"
                          { }
#line 10029 "ompparser.cc"
    break;

  case 1493: /* $@129: %empty  */
#line 1991 "ompparser.yy"
                                 { }
#line 10035 "ompparser.cc"
    break;

  case 1495: /* workshare_directive: WORKSHARE  */
#line 1993 "ompparser.yy"
                                { }
#line 10041 "ompparser.cc"
    break;

  case 1496: /* $@130: %empty  */
#line 1995 "ompparser.yy"
                                       { }
#line 10047 "ompparser.cc"
    break;

  case 1498: /* $@131: %empty  */
#line 1997 "ompparser.yy"
                          { }
#line 10053 "ompparser.cc"
    break;

  case 1500: /* $@132: %empty  */
#line 2004 "ompparser.yy"
                                                  { }
#line 10059 "ompparser.cc"
    break;

  case 1502: /* $@133: %empty  */
#line 2011 "ompparser.yy"
                        { }
#line 10065 "ompparser.cc"
    break;

  case 1504: /* $@134: %empty  */
#line 2014 "ompparser.yy"
                              { }
#line 10071 "ompparser.cc"
    break;

  case 1507: /* directive_variable: EXPR_STRING  */
#line 2019 "ompparser.yy"
                                 { }
#line 10077 "ompparser.cc"
    break;

  case 1510: /* $@135: %empty  */
#line 2025 "ompparser.yy"
                                        {  }
#line 10083 "ompparser.cc"
    break;

  case 1512: /* threadprivate_variable: EXPR_STRING  */
#line 2027 "ompparser.yy"
                                     { }
#line 10089 "ompparser.cc"
    break;

  case 1515: /* $@136: %empty  */
#line 2033 "ompparser.yy"
                                                { }
#line 10095 "ompparser.cc"
    break;

  case 1518: /* reduction_identifiers: '+'  */
#line 2039 "ompparser.yy"
                           { }
#line 10101 "ompparser.cc"
    break;

  case 1519: /* reduction_identifiers: '-'  */
#line 2040 "ompparser.yy"
                           { }
#line 10107 "ompparser.cc"
    break;

  case 1520: /* reduction_identifiers: '*'  */
#line 2041 "ompparser.yy"
                           { }
#line 10113 "ompparser.cc"
    break;

  case 1521: /* reduction_identifiers: '&'  */
#line 2042 "ompparser.yy"
                           { }
#line 10119 "ompparser.cc"
    break;

  case 1522: /* reduction_identifiers: '|'  */
#line 2043 "ompparser.yy"
                           { }
#line 10125 "ompparser.cc"
    break;

  case 1523: /* reduction_identifiers: '^'  */
#line 2044 "ompparser.yy"
                           { }
#line 10131 "ompparser.cc"
    break;

  case 1524: /* reduction_identifiers: LOGAND  */
#line 2045 "ompparser.yy"
                              { }
#line 10137 "ompparser.cc"
    break;

  case 1525: /* reduction_identifiers: LOGOR  */
#line 2046 "ompparser.yy"
                             { }
#line 10143 "ompparser.cc"
    break;

  case 1526: /* typername_variable: EXPR_STRING  */
#line 2049 "ompparser.yy"
                                 { }
#line 10149 "ompparser.cc"
    break;

  case 1529: /* combiner: EXPR_STRING  */
#line 2054 "ompparser.yy"
                       { }
#line 10155 "ompparser.cc"
    break;

  case 1530: /* $@137: %empty  */
#line 2057 "ompparser.yy"
                                          { }
#line 10161 "ompparser.cc"
    break;

  case 1535: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2067 "ompparser.yy"
                                       { }
#line 10167 "ompparser.cc"
    break;

  case 1536: /* mapper_identifier: EXPR_STRING  */
#line 2068 "ompparser.yy"
                                { }
#line 10173 "ompparser.cc"
    break;

  case 1537: /* type_var: EXPR_STRING  */
#line 2071 "ompparser.yy"
                       { }
#line 10179 "ompparser.cc"
    break;

  case 1766: /* $@138: %empty  */
#line 2435 "ompparser.yy"
                             { enReduce = true; logFile << "ENTRA EN REDUCE\n";}
#line 10185 "ompparser.cc"
    break;

  case 1829: /* cluster_teams_distribute_clause: reduction_clause  */
#line 2506 "ompparser.yy"
                                                   {enReduce = true;}
#line 10191 "ompparser.cc"
    break;

  case 1830: /* $@139: %empty  */
#line 2509 "ompparser.yy"
                           { }
#line 10197 "ompparser.cc"
    break;

  case 1832: /* dependance_type: IN  */
#line 2512 "ompparser.yy"
                     { }
#line 10203 "ompparser.cc"
    break;

  case 1833: /* dependance_type: OUT  */
#line 2513 "ompparser.yy"
                                      { }
#line 10209 "ompparser.cc"
    break;

  case 2214: /* construct_type_clause: PARALLEL  */
#line 2932 "ompparser.yy"
                                 { }
#line 10215 "ompparser.cc"
    break;

  case 2215: /* construct_type_clause: SECTIONS  */
#line 2933 "ompparser.yy"
                                 { }
#line 10221 "ompparser.cc"
    break;

  case 2216: /* construct_type_clause: FOR  */
#line 2934 "ompparser.yy"
                            { }
#line 10227 "ompparser.cc"
    break;

  case 2217: /* construct_type_clause: DO  */
#line 2935 "ompparser.yy"
                           { }
#line 10233 "ompparser.cc"
    break;

  case 2218: /* construct_type_clause: TASKGROUP  */
#line 2936 "ompparser.yy"
                                  { }
#line 10239 "ompparser.cc"
    break;

  case 2219: /* if_parallel_clause: IF '(' if_parallel_parameter ')'  */
#line 2943 "ompparser.yy"
                                                      { ; }
#line 10245 "ompparser.cc"
    break;

  case 2220: /* $@140: %empty  */
#line 2946 "ompparser.yy"
                                     { }
#line 10251 "ompparser.cc"
    break;

  case 2221: /* if_parallel_parameter: PARALLEL ':' $@140 expression  */
#line 2947 "ompparser.yy"
                                   { ; }
#line 10257 "ompparser.cc"
    break;

  case 2222: /* if_parallel_parameter: EXPR_STRING  */
#line 2948 "ompparser.yy"
                                    { }
#line 10263 "ompparser.cc"
    break;

  case 2223: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 2950 "ompparser.yy"
                                              { ; }
#line 10269 "ompparser.cc"
    break;

  case 2224: /* $@141: %empty  */
#line 2953 "ompparser.yy"
                             { }
#line 10275 "ompparser.cc"
    break;

  case 2225: /* if_task_parameter: TASK ':' $@141 expression  */
#line 2953 "ompparser.yy"
                                             { ; }
#line 10281 "ompparser.cc"
    break;

  case 2226: /* if_task_parameter: EXPR_STRING  */
#line 2954 "ompparser.yy"
                                { }
#line 10287 "ompparser.cc"
    break;

  case 2227: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 2956 "ompparser.yy"
                                                      { ; }
#line 10293 "ompparser.cc"
    break;

  case 2228: /* $@142: %empty  */
#line 2959 "ompparser.yy"
                                     { }
#line 10299 "ompparser.cc"
    break;

  case 2229: /* if_taskloop_parameter: TASKLOOP ':' $@142 expression  */
#line 2959 "ompparser.yy"
                                                     { ; }
#line 10305 "ompparser.cc"
    break;

  case 2230: /* if_taskloop_parameter: EXPR_STRING  */
#line 2960 "ompparser.yy"
                                    { }
#line 10311 "ompparser.cc"
    break;

  case 2231: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 2962 "ompparser.yy"
                                                            { ; }
#line 10317 "ompparser.cc"
    break;

  case 2232: /* $@143: %empty  */
#line 2965 "ompparser.yy"
                                           { }
#line 10323 "ompparser.cc"
    break;

  case 2233: /* if_target_data_parameter: TARGET DATA ':' $@143 expression  */
#line 2965 "ompparser.yy"
                                                           { ; }
#line 10329 "ompparser.cc"
    break;

  case 2234: /* if_target_data_parameter: EXPR_STRING  */
#line 2966 "ompparser.yy"
                                       { }
#line 10335 "ompparser.cc"
    break;

  case 2235: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 2968 "ompparser.yy"
                                                                    { ; }
#line 10341 "ompparser.cc"
    break;

  case 2236: /* $@144: %empty  */
#line 2971 "ompparser.yy"
                                          { }
#line 10347 "ompparser.cc"
    break;

  case 2237: /* if_target_parallel_parameter: TARGET ':' $@144 expression  */
#line 2971 "ompparser.yy"
                                                          { ; }
#line 10353 "ompparser.cc"
    break;

  case 2238: /* $@145: %empty  */
#line 2972 "ompparser.yy"
                                            { }
#line 10359 "ompparser.cc"
    break;

  case 2239: /* if_target_parallel_parameter: PARALLEL ':' $@145 expression  */
#line 2972 "ompparser.yy"
                                                            { ; }
#line 10365 "ompparser.cc"
    break;

  case 2240: /* if_target_parallel_parameter: EXPR_STRING  */
#line 2973 "ompparser.yy"
                                           { }
#line 10371 "ompparser.cc"
    break;

  case 2241: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 2975 "ompparser.yy"
                                                            { ; }
#line 10377 "ompparser.cc"
    break;

  case 2242: /* $@146: %empty  */
#line 2978 "ompparser.yy"
                                      { }
#line 10383 "ompparser.cc"
    break;

  case 2243: /* if_target_simd_parameter: TARGET ':' $@146 expression  */
#line 2978 "ompparser.yy"
                                                      { ; }
#line 10389 "ompparser.cc"
    break;

  case 2244: /* $@147: %empty  */
#line 2979 "ompparser.yy"
                                    { }
#line 10395 "ompparser.cc"
    break;

  case 2245: /* if_target_simd_parameter: SIMD ':' $@147 expression  */
#line 2979 "ompparser.yy"
                                                    { ; }
#line 10401 "ompparser.cc"
    break;

  case 2246: /* if_target_simd_parameter: EXPR_STRING  */
#line 2980 "ompparser.yy"
                                       { }
#line 10407 "ompparser.cc"
    break;

  case 2247: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 2982 "ompparser.yy"
                                                                        { ; }
#line 10413 "ompparser.cc"
    break;

  case 2248: /* $@148: %empty  */
#line 2985 "ompparser.yy"
                                                       { }
#line 10419 "ompparser.cc"
    break;

  case 2249: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@148 expression  */
#line 2985 "ompparser.yy"
                                                                       { ; }
#line 10425 "ompparser.cc"
    break;

  case 2250: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 2986 "ompparser.yy"
                                             { }
#line 10431 "ompparser.cc"
    break;

  case 2251: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 2988 "ompparser.yy"
                                                                      { ; }
#line 10437 "ompparser.cc"
    break;

  case 2252: /* $@149: %empty  */
#line 2991 "ompparser.yy"
                                                     { }
#line 10443 "ompparser.cc"
    break;

  case 2253: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@149 expression  */
#line 2991 "ompparser.yy"
                                                                     { ; }
#line 10449 "ompparser.cc"
    break;

  case 2254: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 2992 "ompparser.yy"
                                            { }
#line 10455 "ompparser.cc"
    break;

  case 2255: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 2994 "ompparser.yy"
                                                  { ; }
#line 10461 "ompparser.cc"
    break;

  case 2256: /* $@150: %empty  */
#line 2997 "ompparser.yy"
                                 { }
#line 10467 "ompparser.cc"
    break;

  case 2257: /* if_target_parameter: TARGET ':' $@150 expression  */
#line 2997 "ompparser.yy"
                                                 { ; }
#line 10473 "ompparser.cc"
    break;

  case 2258: /* if_target_parameter: EXPR_STRING  */
#line 2998 "ompparser.yy"
                                  { }
#line 10479 "ompparser.cc"
    break;

  case 2259: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 3000 "ompparser.yy"
                                                                { ; }
#line 10485 "ompparser.cc"
    break;

  case 2260: /* $@151: %empty  */
#line 3003 "ompparser.yy"
                                               { }
#line 10491 "ompparser.cc"
    break;

  case 2261: /* if_target_update_parameter: TARGET UPDATE ':' $@151 expression  */
#line 3003 "ompparser.yy"
                                                               { ; }
#line 10497 "ompparser.cc"
    break;

  case 2262: /* if_target_update_parameter: EXPR_STRING  */
#line 3004 "ompparser.yy"
                                         { }
#line 10503 "ompparser.cc"
    break;

  case 2263: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3006 "ompparser.yy"
                                                                { ; }
#line 10509 "ompparser.cc"
    break;

  case 2264: /* $@152: %empty  */
#line 3009 "ompparser.yy"
                                          { }
#line 10515 "ompparser.cc"
    break;

  case 2265: /* if_taskloop_simd_parameter: TASKLOOP ':' $@152 expression  */
#line 3009 "ompparser.yy"
                                                          { ; }
#line 10521 "ompparser.cc"
    break;

  case 2266: /* $@153: %empty  */
#line 3010 "ompparser.yy"
                                      { }
#line 10527 "ompparser.cc"
    break;

  case 2267: /* if_taskloop_simd_parameter: SIMD ':' $@153 expression  */
#line 3010 "ompparser.yy"
                                                      { ; }
#line 10533 "ompparser.cc"
    break;

  case 2268: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3011 "ompparser.yy"
                                         {
                             }
#line 10540 "ompparser.cc"
    break;

  case 2269: /* if_simd_clause: IF '(' if_simd_parameter ')'  */
#line 3013 "ompparser.yy"
                                              { ; }
#line 10546 "ompparser.cc"
    break;

  case 2270: /* $@154: %empty  */
#line 3015 "ompparser.yy"
                             { }
#line 10552 "ompparser.cc"
    break;

  case 2271: /* if_simd_parameter: SIMD ':' $@154 expression  */
#line 3015 "ompparser.yy"
                                             { ; }
#line 10558 "ompparser.cc"
    break;

  case 2272: /* if_simd_parameter: EXPR_STRING  */
#line 3016 "ompparser.yy"
                                { }
#line 10564 "ompparser.cc"
    break;

  case 2273: /* if_parallel_simd_clause: IF '(' if_parallel_simd_parameter ')'  */
#line 3018 "ompparser.yy"
                                                                { ; }
#line 10570 "ompparser.cc"
    break;

  case 2274: /* $@155: %empty  */
#line 3020 "ompparser.yy"
                                      { }
#line 10576 "ompparser.cc"
    break;

  case 2275: /* if_parallel_simd_parameter: SIMD ':' $@155 expression  */
#line 3020 "ompparser.yy"
                                                      { ; }
#line 10582 "ompparser.cc"
    break;

  case 2276: /* $@156: %empty  */
#line 3021 "ompparser.yy"
                                          { }
#line 10588 "ompparser.cc"
    break;

  case 2277: /* if_parallel_simd_parameter: PARALLEL ':' $@156 expression  */
#line 3021 "ompparser.yy"
                                                          { ; }
#line 10594 "ompparser.cc"
    break;

  case 2278: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3022 "ompparser.yy"
                                         { }
#line 10600 "ompparser.cc"
    break;

  case 2279: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3024 "ompparser.yy"
                                                                              { ; }
#line 10606 "ompparser.cc"
    break;

  case 2280: /* $@157: %empty  */
#line 3026 "ompparser.yy"
                                             { }
#line 10612 "ompparser.cc"
    break;

  case 2281: /* if_target_parallel_simd_parameter: SIMD ':' $@157 expression  */
#line 3026 "ompparser.yy"
                                                             { ; }
#line 10618 "ompparser.cc"
    break;

  case 2282: /* $@158: %empty  */
#line 3027 "ompparser.yy"
                                                 { }
#line 10624 "ompparser.cc"
    break;

  case 2283: /* if_target_parallel_simd_parameter: PARALLEL ':' $@158 expression  */
#line 3027 "ompparser.yy"
                                                                 { ; }
#line 10630 "ompparser.cc"
    break;

  case 2284: /* $@159: %empty  */
#line 3028 "ompparser.yy"
                                               { }
#line 10636 "ompparser.cc"
    break;

  case 2285: /* if_target_parallel_simd_parameter: TARGET ':' $@159 expression  */
#line 3028 "ompparser.yy"
                                                               { ; }
#line 10642 "ompparser.cc"
    break;

  case 2286: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3029 "ompparser.yy"
                                                { }
#line 10648 "ompparser.cc"
    break;

  case 2287: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3031 "ompparser.yy"
                                                  { ; }
#line 10654 "ompparser.cc"
    break;

  case 2288: /* $@160: %empty  */
#line 3033 "ompparser.yy"
                                 { }
#line 10660 "ompparser.cc"
    break;

  case 2289: /* if_cancel_parameter: CANCEL ':' $@160 expression  */
#line 3033 "ompparser.yy"
                                                 { ; }
#line 10666 "ompparser.cc"
    break;

  case 2290: /* if_cancel_parameter: EXPR_STRING  */
#line 3034 "ompparser.yy"
                                  { }
#line 10672 "ompparser.cc"
    break;

  case 2291: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3036 "ompparser.yy"
                                                                        { ; }
#line 10678 "ompparser.cc"
    break;

  case 2292: /* $@161: %empty  */
#line 3038 "ompparser.yy"
                                              { }
#line 10684 "ompparser.cc"
    break;

  case 2293: /* if_parallel_taskloop_parameter: PARALLEL ':' $@161 expression  */
#line 3038 "ompparser.yy"
                                                              { ; }
#line 10690 "ompparser.cc"
    break;

  case 2294: /* $@162: %empty  */
#line 3039 "ompparser.yy"
                                              { }
#line 10696 "ompparser.cc"
    break;

  case 2295: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@162 expression  */
#line 3039 "ompparser.yy"
                                                              { ; }
#line 10702 "ompparser.cc"
    break;

  case 2296: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3040 "ompparser.yy"
                                             {
                                }
#line 10709 "ompparser.cc"
    break;

  case 2297: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3042 "ompparser.yy"
                                                                                  { ; }
#line 10715 "ompparser.cc"
    break;

  case 2298: /* $@163: %empty  */
#line 3044 "ompparser.yy"
                                                   { }
#line 10721 "ompparser.cc"
    break;

  case 2299: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@163 expression  */
#line 3044 "ompparser.yy"
                                                                   { ; }
#line 10727 "ompparser.cc"
    break;

  case 2300: /* $@164: %empty  */
#line 3045 "ompparser.yy"
                                                   { }
#line 10733 "ompparser.cc"
    break;

  case 2301: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@164 expression  */
#line 3045 "ompparser.yy"
                                                                   { ; }
#line 10739 "ompparser.cc"
    break;

  case 2302: /* $@165: %empty  */
#line 3046 "ompparser.yy"
                                               { }
#line 10745 "ompparser.cc"
    break;

  case 2303: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@165 expression  */
#line 3046 "ompparser.yy"
                                                               { ; }
#line 10751 "ompparser.cc"
    break;

  case 2304: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3047 "ompparser.yy"
                                                  { }
#line 10757 "ompparser.cc"
    break;

  case 2305: /* $@166: %empty  */
#line 3058 "ompparser.yy"
                                {
                         }
#line 10764 "ompparser.cc"
    break;

  case 2307: /* $@167: %empty  */
#line 3061 "ompparser.yy"
                            {
                         }
#line 10771 "ompparser.cc"
    break;

  case 2309: /* $@168: %empty  */
#line 3064 "ompparser.yy"
                    {
                  }
#line 10778 "ompparser.cc"
    break;

  case 2311: /* $@169: %empty  */
#line 3068 "ompparser.yy"
                                  { }
#line 10784 "ompparser.cc"
    break;

  case 2313: /* $@170: %empty  */
#line 3070 "ompparser.yy"
                      {
                }
#line 10791 "ompparser.cc"
    break;

  case 2315: /* default_clause: DEFAULT '(' default_parameter ')'  */
#line 3074 "ompparser.yy"
                                                   { }
#line 10797 "ompparser.cc"
    break;

  case 2316: /* default_parameter: SHARED  */
#line 3077 "ompparser.yy"
                           { }
#line 10803 "ompparser.cc"
    break;

  case 2317: /* default_parameter: NONE  */
#line 3078 "ompparser.yy"
                         { }
#line 10809 "ompparser.cc"
    break;

  case 2318: /* default_parameter: FIRSTPRIVATE  */
#line 3079 "ompparser.yy"
                                 { }
#line 10815 "ompparser.cc"
    break;

  case 2319: /* default_parameter: PRIVATE  */
#line 3080 "ompparser.yy"
                            { }
#line 10821 "ompparser.cc"
    break;

  case 2320: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3083 "ompparser.yy"
                                                                   { }
#line 10827 "ompparser.cc"
    break;

  case 2321: /* default_variant_directive: %empty  */
#line 3086 "ompparser.yy"
                            { }
#line 10833 "ompparser.cc"
    break;

  case 2322: /* proc_bind_clause: PROC_BIND '(' proc_bind_parameter ')'  */
#line 3089 "ompparser.yy"
                                                         { }
#line 10839 "ompparser.cc"
    break;

  case 2323: /* proc_bind_parameter: MASTER  */
#line 3091 "ompparser.yy"
                             { }
#line 10845 "ompparser.cc"
    break;

  case 2324: /* proc_bind_parameter: CLOSE  */
#line 3092 "ompparser.yy"
                            { }
#line 10851 "ompparser.cc"
    break;

  case 2325: /* proc_bind_parameter: SPREAD  */
#line 3093 "ompparser.yy"
                             { }
#line 10857 "ompparser.cc"
    break;

  case 2326: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3095 "ompparser.yy"
                                          { }
#line 10863 "ompparser.cc"
    break;

  case 2327: /* bind_parameter: TEAMS  */
#line 3097 "ompparser.yy"
                       { }
#line 10869 "ompparser.cc"
    break;

  case 2328: /* bind_parameter: PARALLEL  */
#line 3098 "ompparser.yy"
                          { }
#line 10875 "ompparser.cc"
    break;

  case 2329: /* bind_parameter: THREAD  */
#line 3099 "ompparser.yy"
                        { }
#line 10881 "ompparser.cc"
    break;

  case 2331: /* allocate_parameter: EXPR_STRING  */
#line 3103 "ompparser.yy"
                                  { }
#line 10887 "ompparser.cc"
    break;

  case 2332: /* $@171: %empty  */
#line 3104 "ompparser.yy"
                                     { }
#line 10893 "ompparser.cc"
    break;

  case 2334: /* $@172: %empty  */
#line 3105 "ompparser.yy"
                                             { ; }
#line 10899 "ompparser.cc"
    break;

  case 2336: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3107 "ompparser.yy"
                                        { }
#line 10905 "ompparser.cc"
    break;

  case 2337: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3108 "ompparser.yy"
                                          { }
#line 10911 "ompparser.cc"
    break;

  case 2338: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3109 "ompparser.yy"
                                      { }
#line 10917 "ompparser.cc"
    break;

  case 2339: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3110 "ompparser.yy"
                                        { }
#line 10923 "ompparser.cc"
    break;

  case 2340: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3111 "ompparser.yy"
                                        { }
#line 10929 "ompparser.cc"
    break;

  case 2341: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3112 "ompparser.yy"
                                       { }
#line 10935 "ompparser.cc"
    break;

  case 2342: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3113 "ompparser.yy"
                                      { }
#line 10941 "ompparser.cc"
    break;

  case 2343: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3114 "ompparser.yy"
                                       { }
#line 10947 "ompparser.cc"
    break;

  case 2344: /* allocator_parameter: EXPR_STRING  */
#line 3115 "ompparser.yy"
                                  { }
#line 10953 "ompparser.cc"
    break;

  case 2345: /* $@173: %empty  */
#line 3118 "ompparser.yy"
                         { }
#line 10959 "ompparser.cc"
    break;

  case 2346: /* private_clause: PRIVATE $@173 '(' var_list ')'  */
#line 3118 "ompparser.yy"
                                              { }
#line 10965 "ompparser.cc"
    break;

  case 2347: /* $@174: %empty  */
#line 3121 "ompparser.yy"
                     { }
#line 10971 "ompparser.cc"
    break;

  case 2349: /* $@175: %empty  */
#line 3123 "ompparser.yy"
                     { }
#line 10977 "ompparser.cc"
    break;

  case 2350: /* broad_clause: BROAD $@175 '(' var_list_broad ')'  */
#line 3123 "ompparser.yy"
                                                { mpi_writer.MPIBroad(); }
#line 10983 "ompparser.cc"
    break;

  case 2351: /* $@176: %empty  */
#line 3125 "ompparser.yy"
                         { }
#line 10989 "ompparser.cc"
    break;

  case 2353: /* $@177: %empty  */
#line 3127 "ompparser.yy"
                   { }
#line 10995 "ompparser.cc"
    break;

  case 2355: /* $@178: %empty  */
#line 3129 "ompparser.yy"
                       { }
#line 11001 "ompparser.cc"
    break;

  case 2357: /* $@179: %empty  */
#line 3131 "ompparser.yy"
                             { }
#line 11007 "ompparser.cc"
    break;

  case 2359: /* $@180: %empty  */
#line 3133 "ompparser.yy"
                                   { }
#line 11013 "ompparser.cc"
    break;

  case 2361: /* $@181: %empty  */
#line 3135 "ompparser.yy"
                                   { }
#line 11019 "ompparser.cc"
    break;

  case 2362: /* firstprivate_clause: FIRSTPRIVATE $@181 '(' var_list ')'  */
#line 3135 "ompparser.yy"
                                                        { }
#line 11025 "ompparser.cc"
    break;

  case 2363: /* $@182: %empty  */
#line 3138 "ompparser.yy"
                                 { }
#line 11031 "ompparser.cc"
    break;

  case 2364: /* copyprivate_clause: COPYPRIVATE $@182 '(' var_list ')'  */
#line 3138 "ompparser.yy"
                                                      { }
#line 11037 "ompparser.cc"
    break;

  case 2365: /* $@183: %empty  */
#line 3140 "ompparser.yy"
                                         { }
#line 11043 "ompparser.cc"
    break;

  case 2366: /* fortran_copyprivate_clause: COPYPRIVATE $@183 '(' var_list ')'  */
#line 3140 "ompparser.yy"
                                                              { }
#line 11049 "ompparser.cc"
    break;

  case 2368: /* lastprivate_parameter: EXPR_STRING  */
#line 3144 "ompparser.yy"
                                    { }
#line 11055 "ompparser.cc"
    break;

  case 2369: /* $@184: %empty  */
#line 3145 "ompparser.yy"
                                        { }
#line 11061 "ompparser.cc"
    break;

  case 2371: /* $@185: %empty  */
#line 3146 "ompparser.yy"
                                                {;}
#line 11067 "ompparser.cc"
    break;

  case 2373: /* $@186: %empty  */
#line 3149 "ompparser.yy"
                                            { }
#line 11073 "ompparser.cc"
    break;

  case 2374: /* lastprivate_distribute_clause: LASTPRIVATE $@186 '(' var_list ')'  */
#line 3149 "ompparser.yy"
                                                                 { }
#line 11079 "ompparser.cc"
    break;

  case 2375: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3151 "ompparser.yy"
                                            { }
#line 11085 "ompparser.cc"
    break;

  case 2377: /* $@187: %empty  */
#line 3155 "ompparser.yy"
                                                            { }
#line 11091 "ompparser.cc"
    break;

  case 2379: /* linear_parameter: EXPR_STRING  */
#line 3158 "ompparser.yy"
                                { }
#line 11097 "ompparser.cc"
    break;

  case 2380: /* $@188: %empty  */
#line 3159 "ompparser.yy"
                                   {  }
#line 11103 "ompparser.cc"
    break;

  case 2383: /* linear_modifier: MODOFIER_VAL  */
#line 3162 "ompparser.yy"
                               { }
#line 11109 "ompparser.cc"
    break;

  case 2384: /* linear_modifier: MODOFIER_REF  */
#line 3163 "ompparser.yy"
                               { }
#line 11115 "ompparser.cc"
    break;

  case 2385: /* linear_modifier: MODOFIER_UVAL  */
#line 3164 "ompparser.yy"
                                { }
#line 11121 "ompparser.cc"
    break;

  case 2387: /* $@189: %empty  */
#line 3168 "ompparser.yy"
                                                               { }
#line 11127 "ompparser.cc"
    break;

  case 2389: /* aligned_parameter: EXPR_STRING  */
#line 3172 "ompparser.yy"
                                { }
#line 11133 "ompparser.cc"
    break;

  case 2390: /* $@190: %empty  */
#line 3173 "ompparser.yy"
                                    { }
#line 11139 "ompparser.cc"
    break;

  case 2394: /* expr: EXPR_STRING  */
#line 3180 "ompparser.yy"
                  { }
#line 11145 "ompparser.cc"
    break;

  case 2395: /* $@191: %empty  */
#line 3182 "ompparser.yy"
                        { }
#line 11151 "ompparser.cc"
    break;

  case 2396: /* safelen_clause: SAFELEN $@191 '(' var_list ')'  */
#line 3182 "ompparser.yy"
                                             { }
#line 11157 "ompparser.cc"
    break;

  case 2397: /* $@192: %empty  */
#line 3185 "ompparser.yy"
                        { }
#line 11163 "ompparser.cc"
    break;

  case 2398: /* simdlen_clause: SIMDLEN $@192 '(' var_list ')'  */
#line 3185 "ompparser.yy"
                                             { }
#line 11169 "ompparser.cc"
    break;

  case 2399: /* $@193: %empty  */
#line 3188 "ompparser.yy"
                                { }
#line 11175 "ompparser.cc"
    break;

  case 2400: /* nontemporal_clause: NONTEMPORAL $@193 '(' var_list ')'  */
#line 3188 "ompparser.yy"
                                                     { }
#line 11181 "ompparser.cc"
    break;

  case 2401: /* $@194: %empty  */
#line 3191 "ompparser.yy"
                          { }
#line 11187 "ompparser.cc"
    break;

  case 2402: /* collapse_clause: COLLAPSE $@194 '(' expression ')'  */
#line 3191 "ompparser.yy"
                                                 { }
#line 11193 "ompparser.cc"
    break;

  case 2403: /* $@195: %empty  */
#line 3194 "ompparser.yy"
                        { }
#line 11199 "ompparser.cc"
    break;

  case 2405: /* ordered_clause: ORDERED  */
#line 3195 "ompparser.yy"
                        { }
#line 11205 "ompparser.cc"
    break;

  case 2406: /* fortran_nowait_clause: NOWAIT  */
#line 3197 "ompparser.yy"
                              { }
#line 11211 "ompparser.cc"
    break;

  case 2407: /* nowait_clause: NOWAIT  */
#line 3199 "ompparser.yy"
                      { }
#line 11217 "ompparser.cc"
    break;

  case 2408: /* order_clause: ORDER '(' order_parameter ')'  */
#line 3201 "ompparser.yy"
                                            { }
#line 11223 "ompparser.cc"
    break;

  case 2409: /* order_parameter: CONCURRENT  */
#line 3204 "ompparser.yy"
                             { }
#line 11229 "ompparser.cc"
    break;

  case 2410: /* $@196: %empty  */
#line 3207 "ompparser.yy"
                        { }
#line 11235 "ompparser.cc"
    break;

  case 2412: /* inbranch_clause: INBRANCH  */
#line 3210 "ompparser.yy"
                          { }
#line 11241 "ompparser.cc"
    break;

  case 2413: /* notinbranch_clause: NOTINBRANCH  */
#line 3213 "ompparser.yy"
                                { }
#line 11247 "ompparser.cc"
    break;

  case 2414: /* $@197: %empty  */
#line 3215 "ompparser.yy"
                            { }
#line 11253 "ompparser.cc"
    break;

  case 2416: /* $@198: %empty  */
#line 3217 "ompparser.yy"
                            { }
#line 11259 "ompparser.cc"
    break;

  case 2419: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3220 "ompparser.yy"
                                         { }
#line 11265 "ompparser.cc"
    break;

  case 2420: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3221 "ompparser.yy"
                                           { }
#line 11271 "ompparser.cc"
    break;

  case 2421: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3222 "ompparser.yy"
                                       { }
#line 11277 "ompparser.cc"
    break;

  case 2422: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3223 "ompparser.yy"
                                         { }
#line 11283 "ompparser.cc"
    break;

  case 2423: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3224 "ompparser.yy"
                                         { }
#line 11289 "ompparser.cc"
    break;

  case 2424: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3225 "ompparser.yy"
                                        { }
#line 11295 "ompparser.cc"
    break;

  case 2425: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3226 "ompparser.yy"
                                       { }
#line 11301 "ompparser.cc"
    break;

  case 2426: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3227 "ompparser.yy"
                                        { }
#line 11307 "ompparser.cc"
    break;

  case 2427: /* allocator1_parameter: EXPR_STRING  */
#line 3228 "ompparser.yy"
                                   { }
#line 11313 "ompparser.cc"
    break;

  case 2428: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3232 "ompparser.yy"
                      {
                        if(enCluster == true && enDistribute == true){
                          statePragma = 2;
                          table.setTableSchedule(true);
                        }
                      }
#line 11324 "ompparser.cc"
    break;

  case 2429: /* dist_schedule_parameter: STATIC  */
#line 3239 "ompparser.yy"
                                 { }
#line 11330 "ompparser.cc"
    break;

  case 2430: /* $@199: %empty  */
#line 3240 "ompparser.yy"
                                 { }
#line 11336 "ompparser.cc"
    break;

  case 2431: /* dist_schedule_parameter: STATIC $@199 ',' EXPR_STRING  */
#line 3240 "ompparser.yy"
                                                     { }
#line 11342 "ompparser.cc"
    break;

  case 2432: /* $@200: %empty  */
#line 3242 "ompparser.yy"
                           { }
#line 11348 "ompparser.cc"
    break;

  case 2433: /* schedule_clause: SCHEDULE $@200 '(' schedule_parameter ')'  */
#line 3242 "ompparser.yy"
                                                         {
                }
#line 11355 "ompparser.cc"
    break;

  case 2434: /* schedule_parameter: schedule_kind  */
#line 3246 "ompparser.yy"
                                   {}
#line 11361 "ompparser.cc"
    break;

  case 2436: /* schedule_kind: schedule_enum_kind  */
#line 3251 "ompparser.yy"
                                   { }
#line 11367 "ompparser.cc"
    break;

  case 2437: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3252 "ompparser.yy"
                                                    { }
#line 11373 "ompparser.cc"
    break;

  case 2440: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3259 "ompparser.yy"
                                        { }
#line 11379 "ompparser.cc"
    break;

  case 2441: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3260 "ompparser.yy"
                                           { }
#line 11385 "ompparser.cc"
    break;

  case 2442: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3261 "ompparser.yy"
                                   { }
#line 11391 "ompparser.cc"
    break;

  case 2443: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3263 "ompparser.yy"
                                            { }
#line 11397 "ompparser.cc"
    break;

  case 2444: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3264 "ompparser.yy"
                                               { }
#line 11403 "ompparser.cc"
    break;

  case 2445: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3265 "ompparser.yy"
                                       { }
#line 11409 "ompparser.cc"
    break;

  case 2446: /* schedule_enum_kind: STATIC  */
#line 3268 "ompparser.yy"
                            { }
#line 11415 "ompparser.cc"
    break;

  case 2447: /* schedule_enum_kind: DYNAMIC  */
#line 3269 "ompparser.yy"
                             { }
#line 11421 "ompparser.cc"
    break;

  case 2448: /* schedule_enum_kind: GUIDED  */
#line 3270 "ompparser.yy"
                            { }
#line 11427 "ompparser.cc"
    break;

  case 2449: /* schedule_enum_kind: AUTO  */
#line 3271 "ompparser.yy"
                          { }
#line 11433 "ompparser.cc"
    break;

  case 2450: /* schedule_enum_kind: RUNTIME  */
#line 3272 "ompparser.yy"
                             { }
#line 11439 "ompparser.cc"
    break;

  case 2451: /* $@201: %empty  */
#line 3274 "ompparser.yy"
                       { }
#line 11445 "ompparser.cc"
    break;

  case 2453: /* $@202: %empty  */
#line 3277 "ompparser.yy"
                             { }
#line 11451 "ompparser.cc"
    break;

  case 2454: /* reduction_clause: REDUCTION $@202 '(' reduction_parameter ':' var_list_reduction ')'  */
#line 3277 "ompparser.yy"
                                                                                    {
                 }
#line 11458 "ompparser.cc"
    break;

  case 2457: /* reduction_identifier: reduction_enum_identifier  */
#line 3285 "ompparser.yy"
                                                 { if(enReduce){mpi_writer.MPI_Reduce(true, (yyvsp[0].stype));} }
#line 11464 "ompparser.cc"
    break;

  case 2458: /* reduction_identifier: EXPR_STRING  */
#line 3286 "ompparser.yy"
                                   { }
#line 11470 "ompparser.cc"
    break;

  case 2459: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3289 "ompparser.yy"
                                     { }
#line 11476 "ompparser.cc"
    break;

  case 2460: /* reduction_modifier: MODIFIER_TASK  */
#line 3290 "ompparser.yy"
                                   { }
#line 11482 "ompparser.cc"
    break;

  case 2461: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3291 "ompparser.yy"
                                      { }
#line 11488 "ompparser.cc"
    break;

  case 2462: /* reduction_enum_identifier: '+'  */
#line 3294 "ompparser.yy"
                               { }
#line 11494 "ompparser.cc"
    break;

  case 2463: /* reduction_enum_identifier: '-'  */
#line 3295 "ompparser.yy"
                               { }
#line 11500 "ompparser.cc"
    break;

  case 2464: /* reduction_enum_identifier: '*'  */
#line 3296 "ompparser.yy"
                               { }
#line 11506 "ompparser.cc"
    break;

  case 2465: /* reduction_enum_identifier: '&'  */
#line 3297 "ompparser.yy"
                               { }
#line 11512 "ompparser.cc"
    break;

  case 2466: /* reduction_enum_identifier: '|'  */
#line 3298 "ompparser.yy"
                               { }
#line 11518 "ompparser.cc"
    break;

  case 2467: /* reduction_enum_identifier: '^'  */
#line 3299 "ompparser.yy"
                               { }
#line 11524 "ompparser.cc"
    break;

  case 2468: /* reduction_enum_identifier: LOGAND  */
#line 3300 "ompparser.yy"
                                  { }
#line 11530 "ompparser.cc"
    break;

  case 2469: /* reduction_enum_identifier: LOGOR  */
#line 3301 "ompparser.yy"
                                 { }
#line 11536 "ompparser.cc"
    break;

  case 2470: /* reduction_enum_identifier: MAX  */
#line 3302 "ompparser.yy"
                               { }
#line 11542 "ompparser.cc"
    break;

  case 2471: /* reduction_enum_identifier: MIN  */
#line 3303 "ompparser.yy"
                               { }
#line 11548 "ompparser.cc"
    break;

  case 2472: /* $@203: %empty  */
#line 3306 "ompparser.yy"
                                          { }
#line 11554 "ompparser.cc"
    break;

  case 2473: /* reduction_default_only_clause: REDUCTION $@203 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3306 "ompparser.yy"
                                                                                                    {
                              }
#line 11561 "ompparser.cc"
    break;

  case 2474: /* reduction_default_only_parameter: reduction_identifier  */
#line 3310 "ompparser.yy"
                                                        {}
#line 11567 "ompparser.cc"
    break;

  case 2476: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3314 "ompparser.yy"
                                                   { }
#line 11573 "ompparser.cc"
    break;


#line 11577 "ompparser.cc"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == OPENMP_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= OPENMP_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == OPENMP_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = OPENMP_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  if (yychar != OPENMP_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 3317 "ompparser.yy"


int yyerror(char const *s)
{
	fprintf(stdout, "error: %s\n",s);
  return 0;

} 
int yywrap()
{
    return 1;
} 

// Standalone ompparser
void parseOpenMP(const char* _input, void * _exprParse(const char*)) {
    //printf("Start parsing...\n");
    const char *input = _input;
    start_lexer(input);
    yyparse();
    end_lexer();
}
