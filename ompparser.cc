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
  YYSYMBOL_863_139 = 863,                  /* $@139  */
  YYSYMBOL_864_140 = 864,                  /* $@140  */
  YYSYMBOL_cluster_data_clause = 865,      /* cluster_data_clause  */
  YYSYMBOL_cluster_update_clause = 866,    /* cluster_update_clause  */
  YYSYMBOL_cluster_teams_clause = 867,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 868, /* cluster_distribute_clause  */
  YYSYMBOL_cluster_teams_distribute_clause = 869, /* cluster_teams_distribute_clause  */
  YYSYMBOL_task_async_clause = 870,        /* task_async_clause  */
  YYSYMBOL_871_141 = 871,                  /* $@141  */
  YYSYMBOL_dependance_type = 872,          /* dependance_type  */
  YYSYMBOL_teams_clause = 873,             /* teams_clause  */
  YYSYMBOL_for_clause = 874,               /* for_clause  */
  YYSYMBOL_do_clause = 875,                /* do_clause  */
  YYSYMBOL_simd_clause = 876,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 877,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 878,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 879, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 880,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 881,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 882,   /* distribute_simd_clause  */
  YYSYMBOL_distribute_parallel_for_clause = 883, /* distribute_parallel_for_clause  */
  YYSYMBOL_distribute_parallel_do_clause = 884, /* distribute_parallel_do_clause  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 885, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 886, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_parallel_for_clause = 887,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 888,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 889,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 890, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 891, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 892,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 893,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 894, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 895, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 896, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 897,              /* loop_clause  */
  YYSYMBOL_scan_clause = 898,              /* scan_clause  */
  YYSYMBOL_sections_clause = 899,          /* sections_clause  */
  YYSYMBOL_single_clause = 900,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 901,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 902,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 903,       /* if_parallel_clause  */
  YYSYMBOL_if_parallel_parameter = 904,    /* if_parallel_parameter  */
  YYSYMBOL_905_142 = 905,                  /* $@142  */
  YYSYMBOL_if_task_clause = 906,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 907,        /* if_task_parameter  */
  YYSYMBOL_908_143 = 908,                  /* $@143  */
  YYSYMBOL_if_taskloop_clause = 909,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 910,    /* if_taskloop_parameter  */
  YYSYMBOL_911_144 = 911,                  /* $@144  */
  YYSYMBOL_if_target_data_clause = 912,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 913, /* if_target_data_parameter  */
  YYSYMBOL_914_145 = 914,                  /* $@145  */
  YYSYMBOL_if_target_parallel_clause = 915, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 916, /* if_target_parallel_parameter  */
  YYSYMBOL_917_146 = 917,                  /* $@146  */
  YYSYMBOL_918_147 = 918,                  /* $@147  */
  YYSYMBOL_if_target_simd_clause = 919,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 920, /* if_target_simd_parameter  */
  YYSYMBOL_921_148 = 921,                  /* $@148  */
  YYSYMBOL_922_149 = 922,                  /* $@149  */
  YYSYMBOL_if_target_enter_data_clause = 923, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 924, /* if_target_enter_data_parameter  */
  YYSYMBOL_925_150 = 925,                  /* $@150  */
  YYSYMBOL_if_target_exit_data_clause = 926, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 927, /* if_target_exit_data_parameter  */
  YYSYMBOL_928_151 = 928,                  /* $@151  */
  YYSYMBOL_if_target_clause = 929,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 930,      /* if_target_parameter  */
  YYSYMBOL_931_152 = 931,                  /* $@152  */
  YYSYMBOL_if_target_update_clause = 932,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 933, /* if_target_update_parameter  */
  YYSYMBOL_934_153 = 934,                  /* $@153  */
  YYSYMBOL_if_taskloop_simd_clause = 935,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 936, /* if_taskloop_simd_parameter  */
  YYSYMBOL_937_154 = 937,                  /* $@154  */
  YYSYMBOL_938_155 = 938,                  /* $@155  */
  YYSYMBOL_if_simd_clause = 939,           /* if_simd_clause  */
  YYSYMBOL_if_simd_parameter = 940,        /* if_simd_parameter  */
  YYSYMBOL_941_156 = 941,                  /* $@156  */
  YYSYMBOL_if_parallel_simd_clause = 942,  /* if_parallel_simd_clause  */
  YYSYMBOL_if_parallel_simd_parameter = 943, /* if_parallel_simd_parameter  */
  YYSYMBOL_944_157 = 944,                  /* $@157  */
  YYSYMBOL_945_158 = 945,                  /* $@158  */
  YYSYMBOL_if_target_parallel_simd_clause = 946, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 947, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_948_159 = 948,                  /* $@159  */
  YYSYMBOL_949_160 = 949,                  /* $@160  */
  YYSYMBOL_950_161 = 950,                  /* $@161  */
  YYSYMBOL_if_cancel_clause = 951,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 952,      /* if_cancel_parameter  */
  YYSYMBOL_953_162 = 953,                  /* $@162  */
  YYSYMBOL_if_parallel_taskloop_clause = 954, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 955, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_956_163 = 956,                  /* $@163  */
  YYSYMBOL_957_164 = 957,                  /* $@164  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 958, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 959, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_960_165 = 960,                  /* $@165  */
  YYSYMBOL_961_166 = 961,                  /* $@166  */
  YYSYMBOL_962_167 = 962,                  /* $@167  */
  YYSYMBOL_num_threads_clause = 963,       /* num_threads_clause  */
  YYSYMBOL_964_168 = 964,                  /* $@168  */
  YYSYMBOL_num_teams_clause = 965,         /* num_teams_clause  */
  YYSYMBOL_966_169 = 966,                  /* $@169  */
  YYSYMBOL_align_clause = 967,             /* align_clause  */
  YYSYMBOL_968_170 = 968,                  /* $@170  */
  YYSYMBOL_thread_limit_clause = 969,      /* thread_limit_clause  */
  YYSYMBOL_970_171 = 970,                  /* $@171  */
  YYSYMBOL_copyin_clause = 971,            /* copyin_clause  */
  YYSYMBOL_972_172 = 972,                  /* $@172  */
  YYSYMBOL_default_clause = 973,           /* default_clause  */
  YYSYMBOL_default_parameter = 974,        /* default_parameter  */
  YYSYMBOL_default_variant_clause = 975,   /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 976, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 977,         /* proc_bind_clause  */
  YYSYMBOL_proc_bind_parameter = 978,      /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 979,              /* bind_clause  */
  YYSYMBOL_bind_parameter = 980,           /* bind_parameter  */
  YYSYMBOL_allocate_clause = 981,          /* allocate_clause  */
  YYSYMBOL_allocate_parameter = 982,       /* allocate_parameter  */
  YYSYMBOL_983_173 = 983,                  /* $@173  */
  YYSYMBOL_984_174 = 984,                  /* $@174  */
  YYSYMBOL_allocator_parameter = 985,      /* allocator_parameter  */
  YYSYMBOL_private_clause = 986,           /* private_clause  */
  YYSYMBOL_987_175 = 987,                  /* $@175  */
  YYSYMBOL_alloc_clause = 988,             /* alloc_clause  */
  YYSYMBOL_989_176 = 989,                  /* $@176  */
  YYSYMBOL_broad_clause = 990,             /* broad_clause  */
  YYSYMBOL_991_177 = 991,                  /* $@177  */
  YYSYMBOL_scatter_clause = 992,           /* scatter_clause  */
  YYSYMBOL_993_178 = 993,                  /* $@178  */
  YYSYMBOL_halo_clause = 994,              /* halo_clause  */
  YYSYMBOL_995_179 = 995,                  /* $@179  */
  YYSYMBOL_gather_clause = 996,            /* gather_clause  */
  YYSYMBOL_997_180 = 997,                  /* $@180  */
  YYSYMBOL_allgather_clause = 998,         /* allgather_clause  */
  YYSYMBOL_999_181 = 999,                  /* $@181  */
  YYSYMBOL_allreduction_clause = 1000,     /* allreduction_clause  */
  YYSYMBOL_1001_182 = 1001,                /* $@182  */
  YYSYMBOL_firstprivate_clause = 1002,     /* firstprivate_clause  */
  YYSYMBOL_1003_183 = 1003,                /* $@183  */
  YYSYMBOL_copyprivate_clause = 1004,      /* copyprivate_clause  */
  YYSYMBOL_1005_184 = 1005,                /* $@184  */
  YYSYMBOL_fortran_copyprivate_clause = 1006, /* fortran_copyprivate_clause  */
  YYSYMBOL_1007_185 = 1007,                /* $@185  */
  YYSYMBOL_lastprivate_clause = 1008,      /* lastprivate_clause  */
  YYSYMBOL_lastprivate_parameter = 1009,   /* lastprivate_parameter  */
  YYSYMBOL_1010_186 = 1010,                /* $@186  */
  YYSYMBOL_1011_187 = 1011,                /* $@187  */
  YYSYMBOL_lastprivate_distribute_clause = 1012, /* lastprivate_distribute_clause  */
  YYSYMBOL_1013_188 = 1013,                /* $@188  */
  YYSYMBOL_lastprivate_modifier = 1014,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1015,           /* linear_clause  */
  YYSYMBOL_1016_189 = 1016,                /* $@189  */
  YYSYMBOL_linear_parameter = 1017,        /* linear_parameter  */
  YYSYMBOL_1018_190 = 1018,                /* $@190  */
  YYSYMBOL_linear_modifier = 1019,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1020,          /* aligned_clause  */
  YYSYMBOL_1021_191 = 1021,                /* $@191  */
  YYSYMBOL_aligned_parameter = 1022,       /* aligned_parameter  */
  YYSYMBOL_1023_192 = 1023,                /* $@192  */
  YYSYMBOL_initializer_clause = 1024,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1025,        /* initializer_expr  */
  YYSYMBOL_expr = 1026,                    /* expr  */
  YYSYMBOL_safelen_clause = 1027,          /* safelen_clause  */
  YYSYMBOL_1028_193 = 1028,                /* $@193  */
  YYSYMBOL_simdlen_clause = 1029,          /* simdlen_clause  */
  YYSYMBOL_1030_194 = 1030,                /* $@194  */
  YYSYMBOL_nontemporal_clause = 1031,      /* nontemporal_clause  */
  YYSYMBOL_1032_195 = 1032,                /* $@195  */
  YYSYMBOL_collapse_clause = 1033,         /* collapse_clause  */
  YYSYMBOL_1034_196 = 1034,                /* $@196  */
  YYSYMBOL_ordered_clause = 1035,          /* ordered_clause  */
  YYSYMBOL_1036_197 = 1036,                /* $@197  */
  YYSYMBOL_fortran_nowait_clause = 1037,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1038,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1039,            /* order_clause  */
  YYSYMBOL_order_parameter = 1040,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1041,          /* uniform_clause  */
  YYSYMBOL_1042_198 = 1042,                /* $@198  */
  YYSYMBOL_inbranch_clause = 1043,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1044,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1045,        /* inclusive_clause  */
  YYSYMBOL_1046_199 = 1046,                /* $@199  */
  YYSYMBOL_exclusive_clause = 1047,        /* exclusive_clause  */
  YYSYMBOL_1048_200 = 1048,                /* $@200  */
  YYSYMBOL_allocator_clause = 1049,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1050,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1051,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1052, /* dist_schedule_parameter  */
  YYSYMBOL_1053_201 = 1053,                /* $@201  */
  YYSYMBOL_schedule_clause = 1054,         /* schedule_clause  */
  YYSYMBOL_1055_202 = 1055,                /* $@202  */
  YYSYMBOL_schedule_parameter = 1056,      /* schedule_parameter  */
  YYSYMBOL_schedule_kind = 1057,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1058,       /* schedule_modifier  */
  YYSYMBOL_schedule_modifier2 = 1059,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1060,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1061,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1062,           /* shared_clause  */
  YYSYMBOL_1063_203 = 1063,                /* $@203  */
  YYSYMBOL_reduction_clause = 1064,        /* reduction_clause  */
  YYSYMBOL_1065_204 = 1065,                /* $@204  */
  YYSYMBOL_reduction_parameter = 1066,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1067,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1068,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1069, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1070, /* reduction_default_only_clause  */
  YYSYMBOL_1071_205 = 1071,                /* $@205  */
  YYSYMBOL_reduction_default_only_parameter = 1072, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1073 /* reduction_default_only_modifier  */
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
#define YYLAST   15671

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  817
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2479
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3112

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
     131,   134,   135,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   175,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   311,   311,
     314,   317,   317,   321,   322,   325,   326,   327,   330,   331,
     334,   334,   334,   334,   337,   338,   341,   342,   343,   346,
     346,   346,   349,   350,   351,   352,   355,   356,   357,   360,
     361,   362,   363,   366,   366,   369,   370,   371,   374,   377,
     378,   379,   380,   381,   382,   385,   388,   391,   392,   393,
     394,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   411,   414,   415,   415,   418,   421,   422,
     422,   425,   425,   429,   429,   432,   433,   436,   437,   438,
     441,   444,   444,   449,   449,   452,   452,   455,   458,   461,
     461,   464,   464,   467,   467,   471,   470,   479,   478,   486,
     489,   489,   494,   494,   496,   496,   498,   498,   500,   502,
     502,   504,   504,   506,   506,   508,   508,   510,   510,   512,
     512,   514,   514,   516,   516,   519,   521,   523,   525,   525,
     527,   527,   529,   529,   531,   531,   533,   533,   535,   536,
     537,   538,   540,   542,   545,   546,   547,   549,   552,   554,
     555,   556,   557,   558,   559,   560,   563,   565,   566,   568,
     569,   571,   572,   574,   576,   578,   579,   581,   582,   584,
     585,   587,   589,   590,   591,   594,   596,   597,   599,   600,
     601,   603,   604,   606,   608,   609,   611,   612,   613,   616,
     616,   618,   619,   620,   621,   622,   623,   624,   625,   628,
     629,   632,   633,   634,   635,   636,   638,   639,   640,   641,
     642,   643,   644,   646,   647,   648,   649,   652,   653,   654,
     655,   656,   659,   659,   662,   664,   666,   668,   671,   673,
     675,   677,   679,   682,   683,   685,   686,   689,   690,   691,
     693,   694,   695,   697,   698,   699,   701,   702,   703,   706,
     707,   708,   710,   711,   712,   714,   715,   716,   718,   719,
     720,   722,   723,   724,   726,   727,   728,   730,   731,   732,
     734,   735,   736,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   754,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   796,   797,   798,
     799,   800,   801,   803,   804,   805,   806,   807,   809,   810,
     811,   812,   813,   815,   816,   817,   818,   819,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   834,   836,   837,   839,   840,   842,   843,   844,   845,
     847,   848,   849,   851,   853,   854,   856,   856,   858,   860,
     862,   864,   865,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   880,   880,   883,   884,   886,   888,   888,
     890,   891,   893,   893,   894,   894,   896,   896,   896,   898,
     899,   901,   902,   903,   904,   905,   908,   908,   911,   913,
     914,   915,   916,   918,   918,   921,   923,   924,   924,   927,
     927,   930,   932,   933,   933,   934,   937,   937,   939,   940,
     942,   942,   943,   943,   945,   945,   945,   948,   949,   952,
     952,   954,   954,   956,   956,   958,   960,   962,   964,   966,
     968,   969,   970,   972,   974,   976,   978,   979,   979,   980,
     983,   984,   987,   989,   990,   990,   993,   993,   996,   996,
     998,   998,  1002,  1002,  1005,  1005,  1007,  1008,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1019,  1020,  1021,  1022,  1024,
    1024,  1025,  1026,  1029,  1030,  1031,  1032,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1044,  1046,  1047,  1048,  1048,
    1049,  1051,  1051,  1054,  1055,  1056,  1056,  1057,  1059,  1059,
    1061,  1061,  1064,  1066,  1067,  1068,  1071,  1071,  1073,  1074,
    1074,  1075,  1077,  1078,  1079,  1080,  1081,  1083,  1084,  1085,
    1086,  1088,  1089,  1092,  1093,  1094,  1096,  1097,  1098,  1100,
    1101,  1102,  1104,  1105,  1106,  1107,  1108,  1109,  1111,  1114,
    1116,  1117,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1131,  1132,  1133,  1135,  1136,  1137,  1139,  1140,
    1141,  1143,  1145,  1146,  1148,  1150,  1152,  1152,  1159,  1160,
    1162,  1163,  1164,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1179,  1178,  1185,  1186,  1188,  1189,
    1190,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,  1212,
    1211,  1219,  1220,  1222,  1223,  1224,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1239,
    1240,  1241,  1242,  1243,  1244,  1245,  1248,  1247,  1255,  1256,
    1258,  1259,  1260,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,
    1279,  1280,  1281,  1284,  1283,  1291,  1292,  1294,  1295,  1296,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,
    1318,  1319,  1320,  1321,  1324,  1323,  1331,  1332,  1334,  1335,
    1336,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,
    1357,  1358,  1359,  1360,  1361,  1363,  1363,  1365,  1366,  1368,
    1369,  1370,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,
    1380,  1381,  1382,  1383,  1385,  1385,  1387,  1388,  1390,  1391,
    1392,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,  1414,
    1414,  1416,  1417,  1419,  1420,  1421,  1423,  1424,  1425,  1426,
    1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,
    1437,  1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,  1446,
    1447,  1449,  1449,  1451,  1452,  1454,  1455,  1456,  1458,  1459,
    1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,  1469,
    1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1484,  1484,  1486,  1487,  1489,  1490,  1491,
    1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1522,  1522,
    1524,  1525,  1527,  1528,  1529,  1531,  1532,  1533,  1534,  1535,
    1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,  1545,
    1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,
    1556,  1557,  1558,  1560,  1560,  1562,  1563,  1565,  1566,  1567,
    1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,
    1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,
    1589,  1590,  1592,  1592,  1594,  1595,  1597,  1598,  1599,  1601,
    1602,  1603,  1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,
    1612,  1613,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,
    1623,  1623,  1625,  1626,  1628,  1629,  1630,  1632,  1633,  1634,
    1635,  1636,  1637,  1638,  1639,  1640,  1641,  1642,  1643,  1644,
    1645,  1646,  1647,  1648,  1650,  1650,  1652,  1653,  1655,  1656,
    1657,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1667,
    1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,  1676,  1677,
    1678,  1680,  1680,  1682,  1683,  1685,  1686,  1687,  1689,  1690,
    1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,  1699,  1700,
    1701,  1702,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,
    1711,  1712,  1713,  1714,  1716,  1716,  1718,  1719,  1721,  1722,
    1723,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1747,  1747,  1749,  1750,  1752,  1753,  1754,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,
    1777,  1778,  1779,  1780,  1781,  1782,  1784,  1784,  1786,  1787,
    1789,  1790,  1791,  1793,  1794,  1795,  1796,  1797,  1798,  1799,
    1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,
    1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,
    1821,  1821,  1823,  1824,  1826,  1827,  1828,  1830,  1831,  1832,
    1833,  1834,  1835,  1836,  1837,  1838,  1839,  1840,  1841,  1842,
    1843,  1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,
    1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,  1862,  1862,
    1864,  1865,  1867,  1868,  1869,  1871,  1872,  1873,  1874,  1875,
    1876,  1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,
    1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,
    1896,  1897,  1898,  1899,  1900,  1901,  1905,  1905,  1907,  1907,
    1909,  1909,  1911,  1911,  1913,  1913,  1915,  1915,  1917,  1917,
    1920,  1919,  1927,  1927,  1929,  1929,  1931,  1931,  1933,  1934,
    1936,  1936,  1938,  1938,  1940,  1940,  1942,  1942,  1944,  1944,
    1946,  1946,  1948,  1948,  1950,  1950,  1952,  1952,  1954,  1954,
    1956,  1956,  1958,  1958,  1960,  1960,  1964,  1964,  1968,  1968,
    1972,  1972,  1976,  1976,  1978,  1978,  1980,  1980,  1982,  1982,
    1984,  1986,  1986,  1988,  1988,  1990,  1992,  1992,  1994,  1994,
    2001,  2001,  2008,  2008,  2011,  2011,  2013,  2016,  2018,  2019,
    2022,  2022,  2024,  2026,  2027,  2030,  2030,  2033,  2036,  2037,
    2038,  2039,  2040,  2041,  2042,  2043,  2046,  2048,  2049,  2051,
    2054,  2054,  2057,  2060,  2061,  2064,  2065,  2068,  2071,  2072,
    2075,  2076,  2079,  2083,  2086,  2087,  2090,  2091,  2094,  2095,
    2098,  2099,  2102,  2103,  2106,  2107,  2109,  2110,  2112,  2113,
    2115,  2116,  2118,  2119,  2121,  2122,  2124,  2125,  2127,  2128,
    2130,  2131,  2133,  2134,  2136,  2137,  2139,  2140,  2142,  2143,
    2145,  2146,  2148,  2149,  2151,  2152,  2154,  2155,  2157,  2158,
    2160,  2161,  2163,  2164,  2166,  2167,  2169,  2170,  2172,  2173,
    2175,  2176,  2178,  2179,  2181,  2182,  2184,  2186,  2187,  2189,
    2190,  2192,  2193,  2195,  2196,  2198,  2199,  2201,  2202,  2207,
    2208,  2213,  2214,  2216,  2217,  2218,  2223,  2224,  2226,  2227,
    2229,  2230,  2231,  2233,  2234,  2235,  2238,  2239,  2240,  2243,
    2244,  2245,  2248,  2249,  2250,  2253,  2254,  2255,  2258,  2259,
    2260,  2263,  2264,  2265,  2268,  2269,  2270,  2273,  2274,  2275,
    2278,  2279,  2280,  2283,  2284,  2285,  2288,  2289,  2290,  2293,
    2294,  2295,  2297,  2298,  2299,  2301,  2302,  2303,  2305,  2306,
    2307,  2309,  2310,  2311,  2313,  2314,  2315,  2317,  2318,  2319,
    2321,  2322,  2323,  2325,  2326,  2327,  2329,  2330,  2331,  2333,
    2334,  2335,  2337,  2338,  2339,  2341,  2342,  2343,  2345,  2346,
    2347,  2349,  2350,  2351,  2353,  2354,  2355,  2357,  2358,  2359,
    2361,  2362,  2363,  2365,  2366,  2367,  2369,  2370,  2371,  2373,
    2374,  2375,  2377,  2379,  2380,  2381,  2387,  2388,  2389,  2391,
    2392,  2393,  2395,  2396,  2397,  2403,  2407,  2408,  2410,  2412,
    2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
    2426,  2426,  2427,  2428,  2428,  2429,  2430,  2431,  2432,  2432,
    2433,  2434,  2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,
    2446,  2447,  2448,  2449,  2450,  2451,  2452,  2453,  2456,  2457,
    2458,  2459,  2460,  2461,  2462,  2463,  2464,  2465,  2466,  2467,
    2468,  2469,  2470,  2471,  2472,  2475,  2476,  2477,  2478,  2479,
    2480,  2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,
    2492,  2493,  2494,  2495,  2496,  2497,  2498,  2499,  2500,  2501,
    2502,  2503,  2504,  2507,  2507,  2510,  2511,  2515,  2516,  2517,
    2518,  2519,  2520,  2521,  2522,  2525,  2526,  2527,  2528,  2529,
    2530,  2531,  2532,  2533,  2534,  2535,  2538,  2539,  2540,  2541,
    2542,  2543,  2544,  2545,  2546,  2547,  2550,  2551,  2552,  2553,
    2554,  2555,  2556,  2557,  2558,  2559,  2560,  2563,  2564,  2565,
    2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,  2574,  2575,
    2576,  2577,  2578,  2580,  2581,  2582,  2583,  2584,  2585,  2586,
    2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,  2596,  2597,
    2598,  2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,
    2608,  2609,  2610,  2611,  2612,  2613,  2614,  2615,  2618,  2619,
    2620,  2621,  2622,  2623,  2626,  2627,  2628,  2629,  2630,  2631,
    2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,  2641,  2642,
    2643,  2644,  2645,  2646,  2648,  2649,  2650,  2651,  2652,  2653,
    2654,  2655,  2656,  2657,  2658,  2659,  2660,  2661,  2662,  2663,
    2664,  2665,  2667,  2668,  2669,  2670,  2671,  2672,  2673,  2674,
    2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,  2685,
    2686,  2687,  2688,  2689,  2690,  2691,  2692,  2693,  2694,  2695,
    2696,  2697,  2698,  2699,  2700,  2701,  2702,  2703,  2704,  2705,
    2706,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,
    2717,  2718,  2719,  2720,  2721,  2722,  2723,  2724,  2725,  2726,
    2727,  2728,  2730,  2731,  2732,  2733,  2734,  2735,  2736,  2737,
    2738,  2739,  2740,  2741,  2742,  2743,  2744,  2745,  2746,  2748,
    2749,  2750,  2751,  2752,  2753,  2754,  2755,  2756,  2757,  2758,
    2759,  2760,  2761,  2762,  2763,  2765,  2766,  2767,  2768,  2769,
    2770,  2771,  2772,  2773,  2774,  2775,  2776,  2777,  2778,  2780,
    2781,  2782,  2783,  2784,  2785,  2786,  2787,  2788,  2789,  2790,
    2792,  2793,  2794,  2795,  2796,  2797,  2798,  2799,  2800,  2801,
    2803,  2804,  2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,
    2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,  2823,
    2824,  2825,  2826,  2827,  2828,  2829,  2830,  2832,  2833,  2834,
    2835,  2836,  2837,  2838,  2839,  2840,  2841,  2842,  2843,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2856,  2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,
    2866,  2867,  2868,  2869,  2870,  2871,  2872,  2873,  2874,  2875,
    2877,  2878,  2879,  2880,  2881,  2882,  2883,  2884,  2885,  2886,
    2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2895,  2896,
    2897,  2898,  2899,  2900,  2901,  2902,  2904,  2905,  2906,  2907,
    2908,  2909,  2911,  2912,  2914,  2915,  2916,  2917,  2918,  2919,
    2921,  2922,  2923,  2924,  2925,  2927,  2928,  2930,  2931,  2932,
    2933,  2934,  2941,  2944,  2944,  2946,  2948,  2951,  2951,  2952,
    2954,  2957,  2957,  2958,  2960,  2963,  2963,  2964,  2966,  2969,
    2969,  2970,  2970,  2971,  2973,  2976,  2976,  2977,  2977,  2978,
    2980,  2983,  2983,  2984,  2986,  2989,  2989,  2990,  2992,  2995,
    2995,  2996,  2998,  3001,  3001,  3002,  3004,  3007,  3007,  3008,
    3008,  3009,  3011,  3013,  3013,  3014,  3016,  3018,  3018,  3019,
    3019,  3020,  3022,  3024,  3024,  3025,  3025,  3026,  3026,  3027,
    3029,  3031,  3031,  3032,  3034,  3036,  3036,  3037,  3037,  3038,
    3040,  3042,  3042,  3043,  3043,  3044,  3044,  3045,  3056,  3056,
    3059,  3059,  3062,  3062,  3066,  3066,  3068,  3068,  3072,  3075,
    3076,  3077,  3078,  3081,  3084,  3087,  3089,  3090,  3091,  3093,
    3095,  3096,  3097,  3099,  3101,  3102,  3102,  3103,  3103,  3105,
    3106,  3107,  3108,  3109,  3110,  3111,  3112,  3113,  3116,  3116,
    3119,  3119,  3121,  3121,  3123,  3123,  3125,  3125,  3127,  3127,
    3129,  3129,  3131,  3131,  3133,  3133,  3136,  3136,  3138,  3138,
    3140,  3142,  3143,  3143,  3144,  3144,  3147,  3147,  3149,  3152,
    3153,  3153,  3156,  3157,  3157,  3158,  3160,  3161,  3162,  3165,
    3166,  3166,  3170,  3171,  3171,  3174,  3176,  3178,  3180,  3180,
    3183,  3183,  3186,  3186,  3189,  3189,  3192,  3192,  3193,  3195,
    3197,  3199,  3202,  3205,  3205,  3208,  3211,  3213,  3213,  3215,
    3215,  3217,  3218,  3219,  3220,  3221,  3222,  3223,  3224,  3225,
    3226,  3229,  3237,  3238,  3238,  3240,  3240,  3244,  3245,  3249,
    3250,  3253,  3254,  3257,  3258,  3259,  3261,  3262,  3263,  3266,
    3267,  3268,  3269,  3270,  3272,  3272,  3275,  3275,  3279,  3280,
    3283,  3284,  3287,  3288,  3289,  3292,  3293,  3294,  3295,  3296,
    3297,  3298,  3299,  3300,  3301,  3304,  3304,  3308,  3309,  3312
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
  "parallel_clause", "cluster_clause", "$@138", "$@139", "$@140",
  "cluster_data_clause", "cluster_update_clause", "cluster_teams_clause",
  "cluster_distribute_clause", "cluster_teams_distribute_clause",
  "task_async_clause", "$@141", "dependance_type", "teams_clause",
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
  "$@142", "if_task_clause", "if_task_parameter", "$@143",
  "if_taskloop_clause", "if_taskloop_parameter", "$@144",
  "if_target_data_clause", "if_target_data_parameter", "$@145",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@146",
  "$@147", "if_target_simd_clause", "if_target_simd_parameter", "$@148",
  "$@149", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@150", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@151", "if_target_clause", "if_target_parameter", "$@152",
  "if_target_update_clause", "if_target_update_parameter", "$@153",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@154",
  "$@155", "if_simd_clause", "if_simd_parameter", "$@156",
  "if_parallel_simd_clause", "if_parallel_simd_parameter", "$@157",
  "$@158", "if_target_parallel_simd_clause",
  "if_target_parallel_simd_parameter", "$@159", "$@160", "$@161",
  "if_cancel_clause", "if_cancel_parameter", "$@162",
  "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter", "$@163",
  "$@164", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@165", "$@166", "$@167",
  "num_threads_clause", "$@168", "num_teams_clause", "$@169",
  "align_clause", "$@170", "thread_limit_clause", "$@171", "copyin_clause",
  "$@172", "default_clause", "default_parameter", "default_variant_clause",
  "default_variant_directive", "proc_bind_clause", "proc_bind_parameter",
  "bind_clause", "bind_parameter", "allocate_clause", "allocate_parameter",
  "$@173", "$@174", "allocator_parameter", "private_clause", "$@175",
  "alloc_clause", "$@176", "broad_clause", "$@177", "scatter_clause",
  "$@178", "halo_clause", "$@179", "gather_clause", "$@180",
  "allgather_clause", "$@181", "allreduction_clause", "$@182",
  "firstprivate_clause", "$@183", "copyprivate_clause", "$@184",
  "fortran_copyprivate_clause", "$@185", "lastprivate_clause",
  "lastprivate_parameter", "$@186", "$@187",
  "lastprivate_distribute_clause", "$@188", "lastprivate_modifier",
  "linear_clause", "$@189", "linear_parameter", "$@190", "linear_modifier",
  "aligned_clause", "$@191", "aligned_parameter", "$@192",
  "initializer_clause", "initializer_expr", "expr", "safelen_clause",
  "$@193", "simdlen_clause", "$@194", "nontemporal_clause", "$@195",
  "collapse_clause", "$@196", "ordered_clause", "$@197",
  "fortran_nowait_clause", "nowait_clause", "order_clause",
  "order_parameter", "uniform_clause", "$@198", "inbranch_clause",
  "notinbranch_clause", "inclusive_clause", "$@199", "exclusive_clause",
  "$@200", "allocator_clause", "allocator1_parameter",
  "dist_schedule_clause", "dist_schedule_parameter", "$@201",
  "schedule_clause", "$@202", "schedule_parameter", "schedule_kind",
  "schedule_modifier", "schedule_modifier2", "schedule_enum_modifier",
  "schedule_enum_kind", "shared_clause", "$@203", "reduction_clause",
  "$@204", "reduction_parameter", "reduction_identifier",
  "reduction_modifier", "reduction_enum_identifier",
  "reduction_default_only_clause", "$@205",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2555)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2434)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3911,  1149,   174,   404,   259,   170, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,   461, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,   331,   363,   492, -2555,   473, -2555, -2555,  1322, -2555,
   -2555, -2555, -2555, -2555,   392, -2555,   511, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   486,   521, -2555, -2555, -2555,   424,  3338, -2555,
    2770, -2555,  2335, -2555, -2555, -2555,   352, -2555, -2555,   941,
   -2555,  1411,  1869,   918,  1724,   955,   875,   180, -2555,   370,
     303,   482,  3573,  4013,   214,   575,   468, -2555,  1613,    89,
    4876,   495, -2555,  6236,   883,   325, -2555,  1104, -2555,   611,
     615, -2555,  3966,   661,   280,  1274,   534, -2555,   371, -2555,
   -2555,   894,   669, -2555, -2555,  4459, -2555,  7962,  4260,  4354,
    3338,   784,  3338,   536, -2555,   581, -2555, -2555, -2555, -2555,
   -2555,   603,   619, -2555,  2568, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  4959,   651,   665, -2555,
   -2555, -2555,   672,   685, -2555,   500, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  5436, -2555,
     937, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   710,   712,   724,  1105,   799,   542,   811,   831,
    3792, -2555,   801, -2555,   319, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,   803, -2555,   327, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   483, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   553, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,   120,   828, -2555,   167,
   -2555, -2555, -2555,   875,   637,   830, -2555, -2555,   172, -2555,
   -2555, -2555,   679,   551,   842, -2555, -2555,   880, -2555, -2555,
    1826, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,   885, -2555, -2555, -2555,   896, -2555, -2555,
     908, -2555, -2555,  1633, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,   111,    94, -2555, -2555, -2555, -2555,
   -2555,  7028,  1038, -2555,  2092,  2643, -2555, -2555, -2555,   890,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,   439,   919,   490, -2555, -2555, -2555,  1311,   239, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,   757, -2555,  7578,   916, -2555, -2555, -2555, -2555,  3729,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,   932, -2555,   768, -2555,  1245, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  1091,  1150, -2555,  4705,  5349,   560, -2555,
    6151,   703, -2555, -2555,  1200,   936,   943, -2555, -2555, -2555,
   -2555, -2555, -2555,  2319, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
     113, -2555, -2555, -2555, -2555, -2555,   864, -2555, -2555,   949,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,   616,   321,   329,
   -2555, -2555, -2555, -2555, -2555,   967, -2555,  1411, -2555, -2555,
    6151,  1314,  1314, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
     245, -2555,   981,   982,  1183, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   117, -2555,  8525, -2555,  2194, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555,  8525, -2555,  2436, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,   913, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  1568, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1493, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    6715, -2555,  2309, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,   189,   971,   732,   984,   997,  1001,
    1011,  1017,  1198,  2151,  3338, -2555, -2555,   244, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555,   161,   253,  1037,  1075,  1009,
    1079,  2770, -2555, -2555,  1522, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  2335, -2555,  1051,  1302,    75,  1443, -2555, -2555, -2555,
   -2555,  1069, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1110,
    1096, -2555,  1100,  1118, -2555,   663, -2555, -2555, -2555, -2555,
   -2555,  6633, -2555,  4580, -2555,  1591, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  1108,  1316,  1411, -2555,  1121,   480,  1869, -2555,  1128,
    1130,  1724, -2555,  1140,   955, -2555,  1166,  1396, -2555,  1481,
     180, -2555, -2555, -2555, -2555, -2555, -2555,   206, -2555,  1172,
     303, -2555, -2555, -2555,   491, -2555,  1176, -2555,   193, -2555,
   -2555, -2555,   203,  1178,  1190,  1209,  1196,  3573, -2555,   179,
    1208,  1693,  1211,  1213,   102,  1219,  4013, -2555,  1224,   126,
   -2555,  1329, -2555,  7578, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  1936, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  1445,  1446,  3991, -2555,  2626, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  2241, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  1227,  1231,  1613, -2555,
   -2555,  1444,  1480,  1444,   212,  1444,   580,   745,  1409, -2555,
    1241,  1244, -2555,  2829, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,    57,  1247,
    1250,  6236, -2555,  1246, -2555,   883, -2555, -2555,  7652, -2555,
    7652,  3768,  1251, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  1967, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  1252, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  5522, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1424,
   -2555,  6578,  6384, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  4800, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  1254, -2555, -2555, -2555,   270, -2555, -2555,
   -2555, -2555, -2555, -2555,   767,   781,  1257,  1259,  1260, -2555,
     739, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
      70,   333,  1264,  1266,  1277,  1284,  1292,  3966, -2555,   661,
   -2555, -2555,   564, -2555,   864,  1295, -2555, -2555, -2555, -2555,
   -2555,  1056, -2555, -2555, -2555, -2555,   647, -2555,  1732, -2555,
   -2555,  1296, -2555,  1212, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  6084, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    5131, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555,   236, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  1143, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  1298,  1304,  1306,  1307,
    1309,  1482, -2555, -2555, -2555, -2555,  1317,   669, -2555,  1321,
   -2555,  1032, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  4459, -2555, -2555,  7962, -2555,  4260, -2555,
    4354, -2555,  3338, -2555,  6413,  1326, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,   292, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  3338,
   -2555,  1303, -2555,  1313,  1338, -2555, -2555, -2555, -2555,  1327,
    1343,  1343,  1343,  1343,  2867, -2555, -2555, -2555,  1331, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1184,  1334,  1337,
   -2555,  4959, -2555, -2555,  1340,  1351,  1342, -2555, -2555, -2555,
    1341,   143,  1355,  2158,  1338, -2555,  1356,  1338, -2555,  5436,
   -2555, -2555, -2555, -2555, -2555,   118, -2555, -2555, -2555,  1357,
    1360, -2555,  1365, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1366,  1367,  1371,  1105, -2555, -2555,  1374,   192,
    1376,  1299, -2555, -2555,   588,   645, -2555,  6927, -2555,  1999,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  8483,
   -2555,   199, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    3792, -2555,  1343,  1358,  1380, -2555,  2990, -2555, -2555, -2555,
    1382, -2555,  1343,  1343, -2555,  1343, -2555,   142, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    1386, -2555, -2555,   637, -2555,  1385,   823, -2555,   679, -2555,
    1388,  2310,   551, -2555,  1398, -2555,  1400,  1343,  1343,  1405,
     204,  1343, -2555,  1406, -2555,  1407,  1338, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1416, -2555,
     863,  1338, -2555,  1419,  1417,  1422,  1338, -2555,  1238, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
     160, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  7028, -2555, -2555,
    7475, -2555,  7475, -2555,  2674, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  2092, -2555,  2643, -2555,  1338,  1338,
   -2555,  1444, -2555, -2555, -2555, -2555, -2555, -2555,   209, -2555,
   -2555, -2555, -2555, -2555,  1665,   585,   311,   188,  7578, -2555,
    1426, -2555,  1427,  1338,  1338, -2555, -2555, -2555, -2555,  1428,
   -2555,  6802, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    4733, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    6802, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  5564,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  5817, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,   185,  4705, -2555,   171,  5349, -2555,
    1646,  1647,  8166, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  4202, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  2738, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    6151, -2555,   123,  1433,  1435,   703, -2555,  1439, -2555,   756,
   -2555, -2555, -2555, -2555, -2555, -2555,  1440, -2555,   947, -2555,
   -2555, -2555, -2555, -2555, -2555,   248,  1459,    26,  1200, -2555,
    1447, -2555,  1450, -2555, -2555,  1455,  1461,  1465,  1343,  1343,
    1619,  2387,  2417, -2555, -2555,   864, -2555,   595,  1338,  1274,
   -2555,   348,   626, -2555,   359, -2555,  1068,   527,  1411, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  3488,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  6151, -2555,  1460,  1468,
    1314, -2555,  1314, -2555,  1343,  1343,  1343,  2867,  1343, -2555,
     730, -2555,   145,  8525, -2555, -2555, -2555, -2555, -2555, -2555,
    1470, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  3290,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
     177,  6715, -2555, -2555, -2555, -2555, -2555,  1472, -2555, -2555,
   -2555,   635,   657,   659,   704, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1478,
   -2555,  1473, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1494, -2555,  1343, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  1483, -2555,  1497,  1499,  1500,  1507, -2555,
    1508, -2555,  1510,  1479,  1302, -2555,  1501,  1529,  1623,  1530,
    1343, -2555,  1105, -2555,  1528,  1536,  1531,  1343, -2555, -2555,
   -2555,  1537,  1118, -2555, -2555, -2555,  3007, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    6633, -2555, -2555,   989, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  4580, -2555, -2555,   718,
    1542, -2555, -2555, -2555,  1543,  1554, -2555,   748,   752,   818,
    1556, -2555,  1552,  1343, -2555, -2555, -2555, -2555, -2555, -2555,
     995, -2555, -2555, -2555,  1338, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  1555, -2555, -2555, -2555,   819,   848,
   -2555,  1574, -2555,   888, -2555, -2555,  1559,  1343, -2555, -2555,
   -2555, -2555, -2555, -2555,  1562, -2555,  1564, -2555,  1567,  1565,
   -2555, -2555,  1343,  1569, -2555, -2555,  1571, -2555,  7578, -2555,
   -2555,  8270, -2555,  3440, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555,  8270, -2555,  6477, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  3991,
   -2555, -2555, -2555,  1572,  1573, -2555, -2555,  1586,   212, -2555,
    1812, -2555,  1587, -2555, -2555, -2555, -2555, -2555,  1590,  1592,
   -2555,  1596, -2555, -2555, -2555,  1598,  1600, -2555,  1593, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  5093, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    7652, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    5287, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  7652, -2555,  3768, -2555,  1603,  1605, -2555,
    1604, -2555,  1609,  1610, -2555,  1612, -2555, -2555,  7054, -2555,
    7054, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  4615,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    6578, -2555,  6384, -2555, -2555,  1694, -2555,  1615,  1343,  1343,
   -2555,   312,   767, -2555,   320,   781, -2555,  1545, -2555,  1617,
    1616,  1621, -2555,  1622,  1625,  1611, -2555, -2555, -2555, -2555,
   -2555,  1343,   892,   902, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  1626,  1631, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1628,  1638,  1624,  1640, -2555, -2555,  1641, -2555,
   -2555, -2555, -2555, -2555, -2555,  1644,  1637,  1648,  2939, -2555,
   -2555, -2555, -2555,  1650, -2555,  1692, -2555,   563, -2555,   616,
   -2555,   616, -2555,  1692, -2555, -2555,  6084, -2555, -2555,  1343,
    1343, -2555, -2555, -2555,   927,  1659,  1661,  1662,  1664,  1667,
    1666, -2555, -2555,  1670,  1671,  1673, -2555,  1679, -2555,   176,
    6413, -2555,  1675,  1685, -2555,  1695, -2555,  1338, -2555,  1343,
   -2555, -2555, -2555, -2555,  1343,  2061,  1343,  1343,  1343,  1343,
    1343, -2555,   928, -2555,  1690,   747,  1718, -2555, -2555, -2555,
     823, -2555, -2555, -2555,    21, -2555, -2555, -2555,  1703, -2555,
   -2555, -2555, -2555, -2555,  1218,   940, -2555,  1704, -2555, -2555,
    1343,   960, -2555, -2555,  6927, -2555, -2555,  8483, -2555, -2555,
   -2555,  1721,  1343,  2061, -2555, -2555, -2555, -2555, -2555,   979,
     823, -2555, -2555,  1719,  1706, -2555,  1338, -2555, -2555,  1343,
   -2555, -2555,  1338, -2555,  1004,  1716,  1343,  1153, -2555,  1734,
    1343,  1722, -2555,  1725, -2555, -2555, -2555,  5156, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  7475, -2555, -2555,  6176, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  7475, -2555, -2555, -2555, -2555,  1343, -2555,  1723,
    1248, -2555, -2555, -2555,  1338, -2555, -2555,   149,  6802, -2555,
   -2555,  6802, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  7756, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    3167, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  7756, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  4175, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,  8166, -2555, -2555, -2555,  1726, -2555,  1035,
    1059,  1803, -2555,  1727, -2555,  1807, -2555,  1731, -2555,  1735,
   -2555, -2555, -2555,  1736, -2555, -2555,  1343,  1338,  1343,  1722,
   -2555, -2555, -2555,   852, -2555,  2387,  1753,  1755,  1756, -2555,
   -2555,  1343, -2555, -2555,  2806, -2555,  3082, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  1064,  1750,  1343, -2555,
    1775,  1343, -2555, -2555,  1343, -2555,  1343, -2555, -2555, -2555,
    1757,  1758,  1759, -2555,  1754, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1066, -2555,  1722,  1722,  1722,  1722,  1722,  1761,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,   642,  1501, -2555,
    1941,  1530,  1780, -2555,  1782,  1343,  1722, -2555, -2555, -2555,
   -2555,  1085, -2555,  1338, -2555, -2555,  4565,  1765, -2555, -2555,
    1722,  1768, -2555, -2555,  1786,  1086, -2555,  1788,  1090, -2555,
    1722,  1343,  8270, -2555, -2555,  8270, -2555, -2555,  1106,  1145,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1785,  1338,  1338,
   -2555,  1784,  1796,  1798, -2555,  1797, -2555, -2555,  1338,  1338,
    1338,  1338, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    4374, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  7054, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  4492, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  7054, -2555, -2555, -2555, -2555, -2555,  1870, -2555,
    1882, -2555, -2555,  1343,  1816,  1343,  1722, -2555,  1722, -2555,
   -2555, -2555, -2555, -2555, -2555,  1801,  1802,  1804,  1343,  1722,
   -2555, -2555, -2555, -2555,  3336, -2555,  1630, -2555, -2555, -2555,
   -2555, -2555,  1806, -2555,  1111,  1131,  1338,  1338, -2555, -2555,
   -2555, -2555,  1338,  1338,  1343, -2555, -2555, -2555, -2555,  1815,
    1809, -2555, -2555, -2555,  1814,  1722, -2555, -2555, -2555,   713,
     731, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,   287, -2555,  1832,  1138, -2555, -2555,
   -2555,  1824,  1734, -2555,  1722, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1817,  1818, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555,  7756, -2555, -2555,  7756, -2555,
   -2555,  1338,  1820,  1828,  1338,  1722,  1827,  1722, -2555, -2555,
   -2555,  1722, -2555, -2555,  2383, -2555,  1343, -2555, -2555, -2555,
   -2555,  1338,  1338,  1338, -2555, -2555, -2555,  1846, -2555, -2555,
   -2555,  2076,  1833,  1835,  1836,  1840,  1844,  1845,  1847,  1848,
    1849,   137, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  1863,  1786, -2555,  1864,  1873, -2555, -2555,  1338,
    1338,  1338,  1338, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  1853, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1997,
    1997,  1997,  1997,  1997,  1997,  1997,   287,  1857, -2555,  1872,
    1879, -2555,  1873, -2555, -2555, -2555, -2555, -2555, -2555,  1338,
    1338, -2555,  1997,  1865,  1883,  3770,  2605,  1888,  1890,  1893,
    1878, -2555, -2555,  1879, -2555, -2555, -2555,  1885, -2555, -2555,
    1880,  3338,  1901, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555,  1886, -2555, -2555, -2555,
   -2555, -2555, -2555,  1889, -2555, -2555, -2555, -2555, -2555,  1894,
    1910, -2555, -2555, -2555,  1896, -2555, -2555,  1911, -2555,  1900,
   -2555, -2555,  1906,  1913,  1922,  1925, -2555, -2555,  1938, -2555,
   -2555, -2555
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
    1592,  1478,  1594,     0,  2308,     0,  2348,  2364,  2454,  2316,
    2456,     0,     0,   264,  1539,  1633,  1750,  1751,  1756,  1752,
    1758,  1759,  1753,  1754,  1755,  1757,  1562,     0,     0,  2435,
    2404,  2410,     0,  2408,  1427,  1555,  1660,  1854,  1845,  1846,
    1847,  1848,  1851,  1852,  1853,  1855,  1850,  1849,  1564,  1429,
    1557,  1663,  1864,  1856,  1857,  1858,  1859,  1862,  1863,  1865,
    1861,  1860,     0,     0,     0,  1570,     0,   352,  1454,  1456,
    1574,  2376,     0,  1451,  1573,  1681,  1939,  1934,  1935,  1936,
    1937,  1938,  2475,     0,  1483,  1605,  1729,  2196,  2199,  2200,
    2197,  2198,  2201,  2417,  2419,  1485,  1606,  1732,  2202,  2203,
    2409,  1487,  1608,  1733,  2208,  2204,  2205,  2206,  2209,  2207,
    2368,  1492,  1612,  1736,  2213,  2210,  2211,  2212,  2214,  2217,
    2219,  2220,  2218,  2221,  1499,  1618,  1742,     0,   311,   416,
     450,   554,   555,  1619,     0,     0,   190,   182,   184,   185,
     188,   189,     0,  1621,     0,  2398,  2400,     0,  2402,  1433,
    1561,  1666,  1866,  1872,  1873,  1869,  1870,  1867,  1868,  1871,
    1875,  1876,  1874,     0,   556,   558,   559,     0,   573,   609,
       0,   629,   283,   338,   417,   454,   455,   457,   461,   462,
     463,   465,   466,   453,   456,   464,   458,   459,   460,   775,
     603,   774,   771,   317,   763,   764,   768,   765,   772,   773,
    1476,  1596,     0,   794,   778,   937,  2310,  2314,  1503,  1553,
    1657,  1837,  1838,  1839,  1844,  1840,  1841,  1842,  1843,   305,
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
    1544,     0,     0,  2352,  2358,  2360,  2362,  2356,  1771,   266,
    1541,  1636,     0,     0,     0,  1762,  1767,  1765,  1766,  1770,
    1833,   281,  1551,  1654,  1568,  1463,  1585,  1699,  2032,  2033,
    2038,  2034,  2040,  2041,  2035,  2036,  2042,  2043,  2045,  2046,
    2047,  2048,  2044,  2037,  2039,  1568,  1465,  1587,  1702,  2049,
    2050,  2055,  2051,  2057,  2058,  2052,  2053,  2059,  2060,  2062,
    2063,  2064,  2061,  2054,  2056,  1467,  1589,  1705,  2065,  2066,
    2071,  2067,  2073,  2077,  2074,  2068,  2069,  2075,  2076,  2078,
    2070,  2072,  1469,  1591,  1708,  2079,  2080,  2085,  2081,  2087,
    2088,  2082,  2083,  2089,  2084,  2086,  1471,  1593,  1711,  2090,
    2091,  2096,  2092,  2098,  2099,  2093,  2094,  2095,  2097,  1480,
    1600,  1473,  1595,  1714,  2100,  2101,  2106,  2102,  2108,  2109,
    2103,  2104,  2105,  2107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1634,  1435,  1563,  1669,  1877,
    1890,  1882,  1883,  1884,  1880,  1881,  1878,  1879,  1892,  1887,
    1888,  1889,  1891,  1886,  1885,     0,     0,     0,     0,     0,
       0,     0,  1661,  1437,  1565,  1672,  1893,  1905,  1898,  1899,
    1900,  1896,  1897,  1894,  1895,  1907,  1903,  1904,  1906,  1902,
    1901,     0,  1664,     0,   255,     0,     0,  2413,  2415,  2416,
    1445,  1571,  1678,  1929,  1930,  1928,  1931,  1932,  1933,  1448,
       0,   710,     0,     0,   302,   354,   444,   550,   551,   552,
    1458,  1576,  1460,  1578,  1453,  1575,  1684,  1946,  1945,  1940,
    1941,  1942,  1949,  1950,  1947,  1948,  1951,  1943,  1953,  1944,
    1952,     0,     0,     0,  1682,     0,     0,     0,  1730,     0,
       0,     0,  1734,     0,     0,  1737,     0,     0,  1743,     0,
       0,   451,  1501,  1620,  1745,  1512,  1513,     0,  2324,     0,
       0,   186,  1507,  1508,     0,  2312,     0,  1505,  1622,  1623,
    1747,  1746,     0,     0,     0,     0,     0,     0,  1667,     0,
       0,     0,     0,     0,     0,     0,     0,   418,     0,     0,
     766,     0,   769,  1598,  2121,  2123,  2124,  2116,  2122,  2118,
    2119,  2125,  1475,  1597,  1717,  2110,  2117,  2126,  2112,  2113,
    2114,  2120,  2111,  2115,   819,   846,   796,   777,   779,   780,
     783,   784,   785,   790,   786,   787,   791,   792,   793,   788,
     789,   936,   938,   939,   942,   943,   944,   950,   949,   945,
     946,   953,   951,   952,   947,   948,     0,     0,     0,  1658,
    1438,  1558,     0,  1609,  1613,  1615,   776,   954,  1170,   323,
       0,     0,   287,   342,   423,   495,   497,   498,   490,   496,
     492,   493,   499,   484,   491,   500,   486,   487,   488,   503,
     504,   501,   502,   505,   494,   506,   485,   489,     0,     0,
       0,     0,   421,     0,   644,     0,   427,  1043,   981,  1078,
    1013,  1115,     0,   965,   971,   962,   967,   968,   972,   966,
     955,   957,   958,   961,   973,   976,   974,   978,   970,   963,
     964,   969,   975,   977,     0,  1153,  1159,  1150,  1155,  1156,
    1160,  1154,  1143,  1145,  1146,  1149,  1158,  1151,  1152,  1166,
    1163,  1164,  1161,  1162,  1165,  1168,  1157,  1169,  1167,     0,
    1221,  1196,  1256,  1181,  1187,  1178,  1183,  1184,  1188,  1182,
    1171,  1173,  1174,  1177,  1189,  1190,  1191,  1186,  1179,  1180,
    1185,  1192,  1193,     0,   656,   658,   292,   344,   429,   514,
     516,   517,   515,   513,   345,   347,     0,     0,     0,   300,
     351,   441,   542,   543,   548,   547,   544,   545,   546,   549,
       0,     0,     0,     0,     0,     0,     0,     0,   439,     0,
     448,   363,     0,   361,     0,     0,   406,   404,   405,   407,
     372,   386,   393,   394,   395,   396,     0,   382,     0,   383,
     336,     0,   276,  1547,  1648,  1810,  1805,  1806,  1807,  1808,
    1809,  1548,  1792,  1798,  1789,  1794,  1795,  1799,  1793,   274,
    1545,  1645,  1788,  1800,  1801,  1802,  1797,  1790,  1791,  1796,
    1803,  1804,  2350,  2354,   270,  1542,  1639,  1772,  1773,  1774,
    1777,  1775,  1776,  1779,  1778,   272,  1543,  1642,  1780,  1781,
    1782,  1785,  1783,  1784,  1787,  1786,     0,     0,     0,     0,
       0,  1760,  1637,  1761,  1764,  1769,     0,     0,  1655,     0,
    1441,  1569,  1675,  1908,  1909,  1914,  1910,  1916,  1917,  1911,
    1912,  1918,  1919,  1926,  1924,  1925,  1927,  1921,  1922,  1923,
    1920,  1913,  1915,     0,  1700,  1443,     0,  1703,     0,  1706,
       0,  1709,     0,  1712,  1602,     0,  2165,  2167,  2168,  2166,
    2162,  2163,  2169,  1479,  1601,  1723,  2150,  2151,  2156,  2152,
    2158,  2159,  2153,  2154,  2160,  2164,  2161,  2155,  2157,     0,
    1715,     0,  2225,     0,     0,  2322,  2321,  2319,  2320,     0,
       0,     0,     0,     0,     0,  2326,  2327,  2328,     0,  2339,
    2340,  2341,  2342,  2343,  2344,  2345,  2346,  2334,     0,     0,
    1635,     0,  1670,  2378,  2371,     0,     0,  2386,  2387,  2388,
    2382,     0,     0,     0,     0,  2412,     0,     0,  1662,     0,
    1673,  1665,   253,   261,   252,   256,   257,   260,  1535,  1536,
       0,  1532,     0,  1533,  1524,  1525,  1518,  1519,  1520,  1521,
    1522,  1523,     0,     0,     0,     0,  1679,  1449,     0,     0,
       0,     0,   355,   356,     0,     0,   445,  1580,  1455,  1577,
    1687,  1954,  1955,  1960,  1956,  1962,  1963,  1957,  1958,  1964,
    1965,  1967,  1968,  1969,  1970,  1971,  1966,  1959,  1961,  1582,
    1457,  1579,  1690,  1972,  1973,  1978,  1974,  1980,  1981,  1975,
    1976,  1982,  1983,  1985,  1986,  1987,  1988,  1984,  1977,  1979,
       0,  1685,     0,  2432,     0,  1683,     0,  2331,  2332,  2330,
       0,  1731,     0,     0,  1735,     0,  1738,     0,  1744,   758,
     759,   760,   761,   751,   752,   753,   754,   755,   756,   757,
       0,   750,   452,     0,  1511,     0,     0,   187,     0,  1506,
       0,     0,     0,  1624,     0,  2275,     0,     0,     0,  2392,
       0,     0,  1668,     0,  2229,     0,     0,   569,   570,   571,
     572,   562,   563,   564,   565,   566,   567,   568,     0,   561,
       0,     0,   616,   612,     0,     0,     0,   419,     0,   767,
     770,  2138,  2140,  2141,  2133,  2139,  2135,  2136,  2142,  1477,
    1599,  1720,  2127,  2134,  2143,  2129,  2130,  2131,  2146,  2147,
    2144,  2145,  2148,  2137,  2149,  2128,  2132,     0,  1718,   873,
     821,   904,   848,   795,   797,   798,   812,   801,   802,   803,
     808,   804,   805,   809,   815,   816,   813,   814,   817,   810,
     818,   811,   806,   807,     0,   781,     0,   940,     0,     0,
    1659,  1566,  1431,  1559,  1489,  1610,  2366,  1494,  1614,  1739,
    2215,  2216,  1497,  1616,     0,  1194,     0,     0,     0,   424,
       0,  2233,     0,     0,     0,   422,   640,   641,   642,     0,
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
       0,  2261,     0,   650,   651,   646,     0,     0,     0,     0,
       0,     0,     0,   440,   449,     0,   359,     0,     0,   386,
     379,   391,   392,   375,     0,   378,     0,   319,     0,  1649,
    2456,  1815,  1821,  1812,  1817,  1818,  1822,  1816,   278,  1549,
    1651,  1811,  1823,  1824,  1825,  1820,  1813,  1832,  1814,  1828,
    1829,  1819,  1830,  1826,  1831,  1827,     0,  1646,     0,     0,
       0,  1640,     0,  1643,     0,     0,     0,     0,     0,  1638,
       0,  1656,     0,     0,  1676,  1701,  1704,  1707,  1710,  1713,
       0,  2185,  2187,  2188,  2186,  2182,  2183,  2189,  1481,  1603,
    1726,  2170,  2171,  2176,  2172,  2178,  2179,  2173,  2174,  2180,
    2192,  2193,  2190,  2191,  2194,  2184,  2181,  2195,  2175,  2177,
       0,     0,  1724,  1716,  2223,  2222,     2,     0,  2318,     3,
       4,     0,     0,     0,     0,  2462,  2463,  2464,  2471,  2472,
    2473,  2474,  2461,  2465,  2466,  2467,  2468,  2469,  2470,     0,
    2458,     0,  2460,  2325,  2335,  2333,  2337,  1671,  2372,  2370,
    2374,  2383,     0,  2379,     0,  2446,  2447,  2449,  2450,  2451,
    2452,  2453,  2448,     0,  2437,     0,  2442,  2439,     0,  2411,
       0,  1674,     0,     0,     0,   258,  1628,     0,  1626,     0,
       0,  1680,  1570,   701,   697,     0,     0,     0,   713,   714,
     715,     0,     0,   353,   446,  1459,  1581,  1693,  1989,  1990,
    1995,  1991,  1997,  1998,  1992,  1993,  1999,  2000,  2009,  2007,
    2008,  2010,  2002,  2003,  2004,  2005,  2006,  2001,  1994,  1996,
       0,  1688,  1461,  1583,  1696,  2011,  2012,  2017,  2013,  2019,
    2020,  2014,  2015,  2021,  2022,  2030,  2028,  2029,  2031,  2024,
    2025,  2026,  2027,  2023,  2016,  2018,     0,  1691,  1686,     0,
       0,  2431,  2479,  2477,     0,     0,  2329,     0,     0,     0,
       0,  2293,     0,     0,  1514,  2323,   202,   203,   204,   205,
       0,   196,   199,  1509,     0,  2422,  2423,  2424,  2425,  2426,
    2427,  2428,  2429,  2430,     0,  1625,  2273,  2272,     0,     0,
    2393,     0,  2389,     0,  2227,  2226,     0,     0,   578,   595,
     591,   593,   594,   592,     0,   575,     0,   577,     0,     0,
     613,   611,     0,     0,   606,   607,     0,   605,     0,  1721,
    1719,   875,   820,   822,   823,   834,   835,   826,   827,   836,
     828,   837,   833,   829,   830,   838,   839,   841,   842,   843,
     844,   845,   840,   831,   832,   906,   847,   849,   850,   861,
     862,   853,   854,   863,   855,   864,   860,   856,   857,   865,
     866,   868,   869,   870,   871,   872,   867,   858,   859,     0,
     799,   782,   941,     0,     0,  1439,  1567,     0,     0,  1740,
       0,   596,     0,   327,   322,   325,   326,   324,     0,     0,
    2271,     0,   425,  2231,  2230,     0,     0,   639,     0,  1054,
    1060,  1051,  1056,  1057,  1061,  1055,  1044,  1046,  1047,  1050,
    1062,  1065,  1063,  1067,  1059,  1052,  1053,  1068,  1069,  1076,
    1074,  1075,  1077,  1071,  1072,  1058,  1073,  1070,  1064,  1066,
       0,   984,  1089,  1095,  1086,  1091,  1092,  1096,  1090,  1079,
    1081,  1082,  1085,  1097,  1100,  1098,  1102,  1094,  1087,  1088,
    1103,  1104,  1111,  1109,  1110,  1112,  1106,  1107,  1093,  1108,
    1105,  1099,  1101,     0,  1016,     0,  1118,     0,     0,  2243,
       0,   960,     0,     0,  2249,     0,  1148,  1350,  1284,  1388,
    1318,  1232,  1238,  1229,  1234,  1235,  1239,  1233,  1222,  1224,
    1225,  1228,  1240,  1241,  1242,  1237,  1230,  1231,  1245,  1250,
    1251,  1248,  1249,  1252,  1246,  1236,  1253,  1247,  1243,  1244,
       0,  1199,     0,  1259,  1176,     0,  2237,     0,     0,     0,
     431,     0,     0,   433,     0,     0,   436,     0,  2265,     0,
     653,     0,   708,   704,     0,     0,   443,  2259,  2258,   647,
     645,     0,     0,     0,   668,   669,   670,   671,   672,   673,
     674,     0,   666,   687,   688,   689,   690,   691,   692,   693,
     694,   695,     0,   681,   683,   685,   733,   734,     0,   742,
     743,   744,   745,   746,   747,   718,     0,     0,     0,   722,
     735,   362,   365,     0,   380,     0,   387,     0,   388,     0,
     377,     0,   376,     0,   320,  1650,     0,  1652,  1647,     0,
       0,  1641,  1644,     6,     0,     0,    11,     0,     0,     0,
       0,  1835,  1836,     0,     0,     0,  2281,     0,  1677,     0,
       0,  1727,     0,     0,  2299,     0,  1725,     0,  2309,     0,
    2349,  2365,  2455,  2317,     0,     0,     0,     0,     0,     0,
       0,  2380,     0,  2436,     0,     0,     0,  2405,  2407,   254,
       0,   259,  1749,  1531,  1629,  1630,  1537,  1534,     0,  1516,
    1627,  1748,  1526,  1527,     0,     0,  1447,     0,   698,   696,
       0,     0,   712,   357,     0,  1694,  1689,     0,  1697,  1692,
    2377,     0,     0,     0,  2418,  2420,  2369,  2291,  2290,     0,
       0,   191,   197,     0,     0,  2421,     0,  2399,  2401,     0,
    2390,  2403,     0,   557,     0,     0,     0,     0,   610,     0,
       0,   615,   630,     0,   604,  1722,   874,   876,   877,   888,
     889,   880,   881,   890,   882,   891,   887,   883,   884,   892,
     893,   902,   900,   901,   903,   895,   896,   897,   898,   899,
     894,   885,   886,     0,   824,   905,   907,   908,   919,   920,
     911,   912,   921,   913,   922,   918,   914,   915,   923,   924,
     933,   931,   932,   934,   926,   927,   928,   929,   930,   925,
     916,   917,     0,   851,   800,  2311,  2315,     0,  1741,     0,
       0,  2269,  2267,  2266,     0,   632,   634,     0,     0,  1048,
     985,     0,  1083,  1017,  1119,  2241,  2239,  2238,  2247,  2245,
    2244,  1352,  1293,  1299,  1290,  1295,  1296,  1300,  1294,  1283,
    1285,  1286,  1289,  1306,  1301,  1302,  1307,  1303,  1308,  1298,
    1291,  1292,  1309,  1310,  1312,  1313,  1297,  1314,  1315,  1311,
    1304,  1305,  1390,  1327,  1333,  1324,  1329,  1330,  1334,  1328,
    1317,  1319,  1320,  1323,  1340,  1335,  1336,  1341,  1337,  1342,
    1332,  1325,  1326,  1343,  1344,  1346,  1347,  1331,  1348,  1349,
    1345,  1338,  1339,     0,  1226,  1200,  1260,     0,  2234,     0,
       0,     0,  2253,     0,   434,     0,  2257,     0,   437,     0,
    2262,   654,   652,     0,   705,   703,     0,     0,     0,   649,
     661,   663,   665,     0,   680,     0,     0,     0,     0,   719,
     717,     0,   736,   737,     0,   726,     0,   723,   738,   403,
     389,   390,   374,   373,   321,  1653,     0,     0,     0,  2353,
       0,     0,  2359,  2361,     0,  2357,     0,  2279,  2277,  2276,
       0,     0,     0,  2307,     0,  1728,  2295,  2297,  2294,  2224,
       5,     8,     0,  2459,  2336,  2338,  2373,  2375,  2384,     0,
    2385,  2438,  2443,  2444,  2445,  2441,  2440,     0,     0,  1631,
       0,     0,     0,  2414,     0,     0,   700,   711,  1695,  1698,
    2434,     0,  2478,     0,   749,   198,   195,     0,  2313,  2274,
    2394,     0,  2228,   560,     0,     0,   576,   622,     0,   618,
     614,     0,     0,   878,   825,     0,   909,   852,     0,     0,
     334,   330,   332,   333,   331,   329,   335,     0,     0,     0,
    2232,     0,     0,     0,  2289,     0,  1049,  1084,     0,     0,
       0,     0,  1361,  1367,  1358,  1363,  1364,  1368,  1362,  1351,
    1353,  1354,  1357,  1374,  1369,  1370,  1375,  1371,  1376,  1366,
    1359,  1360,  1377,  1378,  1386,  1384,  1385,  1387,  1380,  1381,
    1365,  1382,  1383,  1379,  1372,  1373,     0,  1287,  1399,  1405,
    1396,  1401,  1402,  1406,  1400,  1389,  1391,  1392,  1395,  1412,
    1407,  1408,  1413,  1409,  1414,  1404,  1397,  1398,  1415,  1416,
    1424,  1422,  1423,  1425,  1418,  1419,  1403,  1420,  1421,  1417,
    1410,  1411,     0,  1321,  1227,  2235,   657,   659,     0,  2250,
       0,  2254,  2263,     0,     0,     0,   707,  2260,   648,   675,
     676,   677,   678,   667,   682,     0,     0,     0,     0,   721,
     725,   724,   739,   740,     0,   729,     0,   727,   741,  2351,
    2355,     7,     0,    12,     0,     0,     0,     0,  2301,  2305,
    2303,  2300,     0,     0,     0,  2457,  2381,   262,  1632,     0,
       0,  1528,  1529,  1517,     0,   699,  2476,  2292,   263,     0,
    1450,  1502,   194,   109,   192,   110,   108,   111,   112,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   113,   127,     0,  2391,   584,     0,   580,   574,
     620,     0,     0,   617,   608,   879,   910,  2367,   599,   601,
     602,   600,     0,     0,   328,  2270,  2268,  2285,  2283,  2287,
    2282,  2242,  2240,  2248,  2246,     0,  1355,  1288,     0,  1393,
    1322,     0,     0,     0,     0,   655,     0,   706,   684,   686,
     748,   720,   730,   728,     0,   731,     0,  2363,  1834,  2280,
    2278,     0,     0,     0,  2296,  2298,     9,     0,  2395,   702,
    1444,     0,     0,   244,     0,     0,     0,     0,     0,     0,
     229,   200,   206,   209,   211,   215,   216,   217,   212,   210,
     243,   582,     0,     0,   579,     0,     0,   619,   597,     0,
       0,     0,     0,  1356,  1394,  2236,  2251,  2255,  2264,   709,
     732,     0,  2302,  2306,  2304,  2397,  2396,   193,   245,   248,
     248,   248,   248,   248,   248,   248,     0,     0,   207,     0,
       0,   581,     0,   624,   623,   598,  2286,  2284,  2288,     0,
       0,    10,   248,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   201,     0,   586,   585,   621,     0,  2252,  2256,
       0,  1538,     0,   213,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,     0,   219,   220,   221,
     222,   223,   224,     0,   225,   226,   228,   230,   583,     0,
       0,   246,   247,   249,     0,   227,   218,     0,   625,     0,
     214,   587,   627,     0,   589,     0,   626,   250,     0,   588,
     628,   590
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2555,   644, -1634,  1829,  -145, -2555,   385, -1765, -2555, -2555,
   -2555, -2555, -2555, -2555,  -169, -2555, -2555, -2555,  -226, -2555,
   -2555, -2555, -2555, -2555,  -195, -1959, -2555, -2555, -2555, -2555,
   -2551, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  -856, -2555,  -519, -2555, -2555, -2555,
   -2555, -2555, -1244, -2555, -2555,  -167, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555,  2008, -2555,  2009, -2555,  2010, -2555,
   -2555, -2555, -2555,  2013, -2555, -2555, -2555, -2555, -2555,  2014,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  2015, -2555,
   -2555, -2555,  2019, -2555,  2020, -2555, -2555, -2555,  2021, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,   281, -2555,
   -2555,  1092,   462, -2555, -2555,  2028, -2555, -2555, -1075, -2555,
     463, -2555,  -156,  -158, -2555, -2555, -2555, -2555, -2555, -2555,
    2027,  2031,  2032, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  -154,  -366,
    -838,  -389, -1029, -1610, -1533,  -462, -1044, -2555, -2555,  -698,
    -390,  -212,  -141, -2555,  -128,   -88,  8715, -2555, -2555, 10445,
   -2555, -2555,  -200, -2555, -2555, -2555,  -765, -2555, -2555,  -822,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555,   -54, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555,  -673, -2555, -2555,  -792, -2555, -2555, -2555, -2555, -2555,
    -362, -2555,  -337, -2555,  -326, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, 11907, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, 12492, -2555, -2555, -2555, 12640, -2555, -2555,
   -2555, -2555, 12733, -2555,  -374, -2555, -2555, -2555,  -515, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   741, -2555, -2555, -2555, -2555,  -381,  -591, -2555,
   -2555, -2555, -2258, -1723, -2555, -2555, -2555, -2555, -2555, -2555,
    -289,  -272, -2555, -2555,  2088, -2555, -2555, -2555,  -862,  2090,
   -2555, -2555, -2555, -1407, -2555, -2555, -2555, -2555, -1911,  2091,
   -2555, -2555, -2555, -1942, -2555, -2555, -2555, -2555, -2301,  2100,
   -2555, -2555, -2555, -2326,  2105, -2555, -2555, -2555,  -857,  2107,
   -2555, -2555, -2555,  -954, -2555, -2555, -2555, -2555, -1453,  2108,
   -2555, -2555, -2555, -1499, -2555, -2555, -2555, -2555, -2000,  2109,
   -2555, -2555, -2555, -2029,  2110, -2555, -2555, -2555, -1543,  2112,
   -2555, -2555, -2555,  -946,  2115, -2555, -2555, -2555, -1014,  2118,
   -2555, -2555, -2555, -1573,  2119, -2555, -2555, -2555, -2076,  2120,
   -2555, -2555, -2555, -1594, -2555, -2555, -2555, -2555, -2391,  2121,
   -2555, -2555, -2555, -2424, -2555, -2555, -2555, -2555, -2554,  2123,
   -2555, -2555, -2555, -2541,  -434, -2555, -2555, -2555, -2555, -2555,
    -166, -2555,  -400, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    2128, -2555,  -397, -2555, -2555, -2555, -2555,  -165, -2555,  -164,
   -2555,  -396, -2555,  2132, -2555,  -387, -2555,  2137, -2555, -2555,
   -2555,  2138, -2555,  2140, -2555, -2555, -2555,  2142, -2555,  2143,
   -2555,  2147, -2555,  2148, -2555,  2149, -2555,  2152, -2555,  -163,
   -2555,  -372, -2555,  -371, -2555, -2555, -2555,  -162,  -368, -2555,
   -2555, -2555, -2555, -2555, -2555,  -367, -2555,  -365, -2555,  -160,
   -2555,  -349, -2555, -2555,   930, -2555, -2555, -2555,   942, -2555,
   -2555, -2555, -2555, -2555,  -332, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,   453,  -708, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,  1729,
     455, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
    -729, -2555, -2239,    -3,  -532, -2555, -2555, -2555, -1102, -1118,
   -1096, -1069, -1676,  -536, -2555, -2555,  -232,   -41,  -146,  -241,
    -645,  -583, -1135,  -608,  -190,  -677, -1270, -1312, -1792, -1823,
    -565,  -526,  -514,  -506,  -503,  -544,  -788, -1391, -1171, -1633,
    -116, -2555,  -123,  -211, -1455,  2026,   -34, -2555, -2555, -2555,
   -2555, -2555,  -388, -2555, -2555, -2555, -2555, -2555,  -888, -2555,
   -2555, -2555, -1612, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555,  -442, -2555, -2555, -2555, -2555, -2555,  -866, -2555,
   -2555, -2555,  -176, -2555, -2555, -1241, -2555, -2555, -2555, -1555,
   -2555, -2555, -2555, -2555,  1535, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, -2555, -2555, 10648, -2555,  4839, -2555,
   -2555, -2555,  1223, -2555, 11141, -2555,  8619, -2555, -2555, -2555,
   11875, -2555,  -107, -2555,   621, -2555, -2555, -2555, -2555,  -140,
   -2555,  -576, -2555,  -525, -2555,  -568, -2555,  -521, -2555,  -499,
   -2555,  -493, -2555,  -478, -2555,  2353, -2555, -2555, -2555, -2555,
   -2555,  5895, -2555, -2555, -2555,  -386, -2555, -2555,  6676, -2555,
   -2555, -2555, -2555,  -110, -2555, -2555, -2555, -2555, -2555, -2555,
    4551, -2555,  7158, -2555,  6782, -2555,  4814, -2555,  2977, -2555,
    -121, 10024,  6537, -2555, -2555, -2555, -2555, -2555, -2555, -2555,
   -2555, -2555, -2555, -2555, 11796, -2555, -2555,  5679, -2555, -2555,
       2, -2555, -2555, -2555, -2555,  9243, -2555,  3470, -2555,   598,
   -1366, -2555, -2555,  1652, -2555, -2555, -2555
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1837,  1840,  1841,  2324,  2662,  2326,  2327,    36,  2882,
     429,    37,   170,   430,    38,   160,   337,   338,   339,   340,
     849,  2696,  2972,  2884,  1990,  1991,  2413,  3027,  1992,  2981,
    2982,  2983,  3094,  2984,  2985,  3083,  2986,  2987,  2988,  3076,
    2989,  2990,  3042,  3060,  3044,  3099,    39,   262,   774,  1892,
    1304,  1305,  1306,  1307,  1893,    40,   138,    41,   191,    42,
      43,    44,   591,    45,   592,    46,   590,    47,   587,    48,
    1131,    49,    50,   192,    51,   163,    52,   173,    53,   483,
      54,    55,   174,    56,   531,    57,  1074,    58,  1075,    59,
     182,    60,   534,    61,   267,    62,   184,    63,    64,    65,
      66,   183,    67,   157,    68,   186,    69,   171,    70,   164,
     586,   482,   950,  2104,  2105,  2106,  2727,  1121,   372,   488,
     952,   514,  1066,  1698,  1707,   542,  1079,   794,  1333,  1334,
     567,  1102,  1103,   568,   569,    71,   185,   576,  1110,   577,
    1740,  1111,  1741,  1742,  1105,  1112,  1113,  1114,  1115,   580,
     581,   582,   583,   584,   559,   328,   373,   489,   953,   515,
    1067,  1699,  1708,   543,  1080,   795,   560,   329,   374,   490,
     954,   516,  1068,  1700,  1709,   544,  1081,  1082,  1083,   796,
     561,   330,   375,   870,   376,   377,   378,  1448,  1449,   379,
     872,  2024,  2025,  2026,  2425,  2907,  2908,  3029,  2992,  3055,
    3089,  3104,  3109,  2027,  2107,  2499,  2922,  2923,   392,   878,
    2036,  2037,  2433,   380,   873,   381,  1454,  2430,  1455,  2029,
    2708,  2709,  2995,  2911,  3034,  3057,  3102,  3106,   382,   875,
     496,   979,   497,   980,   498,   517,   518,   519,   520,  1549,
     521,   522,   547,  1726,  2608,  1727,  1085,  2251,  2823,  1070,
    1693,  1071,  1694,   548,  1092,   549,  1093,   550,  1094,  2271,
    2272,  2833,   551,  1095,  2282,  2283,  2284,  2285,   797,  1905,
    2685,  1906,  2387,  1087,  2254,  2825,  2255,  2603,   798,  1330,
     799,  1911,   552,  1096,  2296,  2838,  2297,  2625,  2845,  2298,
    2626,  2846,  2299,  2628,   331,  1410,  1411,   393,   394,   395,
     396,   397,   398,   399,    72,   404,   907,   908,   909,    73,
     906,  1493,  1494,  1495,    74,  1490,  2042,  2043,  2044,    75,
    1492,  2066,  2067,  2068,    76,  2041,  2436,  2437,  2438,    77,
    2065,  2465,  2466,  2467,    78,   405,   921,   922,   923,    79,
     526,  1000,  1001,  1002,    80,   988,  1559,  1560,  1561,    81,
     990,  1588,  1589,  1590,    82,  1551,  2126,  2127,  2128,    83,
    1580,  2159,  2160,  2161,    84,   991,  1616,  1617,  1618,    85,
     527,  1022,  1023,  1024,    86,   530,  1050,  1051,  1052,    87,
    1041,  1650,  1651,  1652,    88,  1642,  2208,  2209,  2210,    89,
    1042,  1673,  1674,  1675,    90,  2198,  2529,  2530,  2531,    91,
    2200,  2560,  2561,  2562,    92,  2521,  2749,  2750,  2751,    93,
    2552,  2785,  2786,  2787,    94,   140,    95,   142,   459,   941,
      96,   162,    97,   226,    98,   248,   461,  1521,    99,   614,
     100,   635,   101,   265,   102,   266,  1328,   103,   151,   104,
     270,   105,   801,   106,   803,   107,  1337,   108,  1359,   109,
     195,   110,   197,   111,   198,   112,   199,   113,   200,   114,
     202,   115,   401,   116,   883,   117,   700,   118,  1224,   119,
     152,   120,   153,   121,   154,   476,   943,   122,   123,   155,
     478,   944,   124,   479,   945,   125,   156,   126,   333,   127,
     168,   128,   161,   343,   853,   854,   129,   159,   846,   847,
     130,   264,  1322,  1323,  2383,  2384,  2873,   131,   263,  1310,
    1311,  1312,  1313,   213,   599,  1154,  1165,  1139,  1122,  1758,
     611,   408,   234,   249,  1522,   349,   726,   753,  2095,  1190,
     780,   273,   804,  1338,  1360,  1915,  1942,   615,   636,   655,
     672,   686,   701,   892,  1469,  1233,  1808,   284,   295,   301,
    1524,   311,  1527,  1532,   324,   842,   857,   858,  2379,  2373,
    2374,   214,   600,  1155,  1166,  1140,  1123,  1759,   612,   409,
     235,   250,   350,   727,   754,  1191,   781,   274,   805,  1339,
    1361,  1916,  1943,   616,   637,   656,   673,   687,   702,   893,
    1470,  1234,  1809,   285,   296,   302,   312,  1528,   325,   843,
     859,  2380,  2375,   215,   601,   602,   603,   604,  1156,  1167,
    1141,  1124,  1760,   613,  1186,  2333,   410,   236,   251,   351,
     728,   755,  1192,   782,   275,   806,  1340,  1362,  1917,  1944,
     617,   638,   657,   674,   688,   703,   894,  1471,  1235,  1810,
     286,   297,   303,   313,  1529,   326,   216,  1253,  2347,   383,
    1435,  2422,   499,  1542,  2504,  1073,  2237,  2941,  1003,  2190,
    2739,  2738,  1025,  2195,  2741,  2740,  1704,  2593,  3039,  1713,
    2597,  3040,   553,  1722,  2607,  1088,  2249,  2944,   963,  2111,
    2729,  2728,   352,  1426,  2416,  1193,  2337,  2857,  2856,  2129,
    2735,  3001,  3000,  3002,   838,  1982,  2693,  1236,  2345,  2862,
    2863,  1811,  2654,  2961,  2963,  2962,   217,   715,   411,   936,
     860,  1420,   412,   937,   218,   720,   219,  1259,   341,  1415,
     220,  1268,   287,  1390,   221,  1278,  2356,  2357,  1279,   222,
     717,  1157,  1778,   605,  1176,  1159,  1779,   606,  1180,   607,
    1177,   608,  1178,   609,  1179,   223,   718,  1530,  2097,   317,
     833,  1201,  1285,  2358,  2359,   279,   821,  1286,   783,  2669,
    1291,  2360,  1292,   784,  2701,  1430,  2419,  2381,  2870,  3016,
    1204,   863,   785,   864,  1206,   866,  1207,   748,  1208,   750,
     308,   244,  1209,  1296,   786,  1324,   787,   788,   298,   829,
     299,   830,   861,  2004,   281,  1384,  1970,  1210,   747,  1883,
    1884,  1885,  2675,  1886,  1887,   224,   719,   225,   721,  1859,
    1860,  1861,  1862,   292,   825,  1974,  1975
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     238,   431,   253,   432,   460,   463,   464,   475,   477,  2300,
     480,   277,   288,   895,   305,   315,  1168,  1472,   916,  1086,
    1973,  2328,   353,   386,  1170,  2162,  1183,   579,   415,   578,
    2211,  2412,   491,   502,   318,  1184,  1719,  1691,  1696,   889,
    2627,  1743,   556,  1745,  1777,   492,  1515,  1636,  1783,  1967,
     729,  1214,   356,  1781,  1749,   624,  1794,   645,   665,   681,
     695,  1895,   710,  1832,   890,  1517,  1158,  1169,  1182,  1941,
    1160,  1171,   756,  2099,  2186,   891,  1188,  1639,  2231,  2039,
    2233,  1098,  1282,  2317,   824,   493,   731,  2090,  1053,  2243,
    2184,   663,  1161,  1172,   807,   238,  1918,  1336,  1162,  1173,
    1562,   835,  1591,  1619,   772,  1488,   882,  2151,   758,   868,
     253,  1217,   851,  1163,  1174,  1539,   735,   841,  1945,   495,
    2398,   960,   880,   982,  2395,  2493,   986,  2509,  1381,  1423,
     809,  2512,  2464,  2584,   277,  2679,  2713,  2813,   762,  2777,
    2716,  2973,  1219,   836,   389,   288,   961,  1308,  1142,  2334,
    2323,  2325,  2325,  2731,  2325,  1303,  1980,   962,  1250,   389,
     813,   618,   305,   639,   658,   675,   689,  1221,   704,   828,
    1100,  1300,   315,  1326,   149,  2246,  2341,   939,  2335,   832,
    2650,  2342,  2732,   951,  1223,   205,   206,   207,   208,  2187,
     210,   318,   212,  1251,   752,   227,  2936,   335,   228,   212,
     230,  1128,   232,   150,  2192,  1283,  1540,   139,   336,  2651,
     353,   725,   212,  1433,   541,  2252,   345,   346,   347,   877,
     348,  2108,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   390,   386,   227,  1720,  1424,   228,   229,   230,
     356,   232,   233,   947,  1452,  2939,  2974,   389,  2975,  2976,
     231,   368,   855,   231,   419,   610,  2977,  2978,  2979,  2253,
     884,   898,   856,   272,   914,   929,   210,   344,  2678,   415,
     206,   207,   176,   885,   210, -1768,   212,  1526,   143,   227,
    1526,   144,   228,   229,   230,   231,   232,   233,  2235,   145,
    1541,  2973,   146,  1063,   364,   365,   366,   367,   927,   369,
     345,   346,   347,  1721,   348,  1287,  1288,  1289,  1309,   420,
     485,   486,   487,   886,  2733,  1225,   204,   205,   206,   207,
     208,   209,   210,   211,   212,  2652,  2343,   227,   335,   391,
     523,   524,   230,   231,   525,  1453,  2193,  2109,  1230,   336,
     948,   881,   955,   966,   391,   206,   207,   888,   491,   502,
    2188,   212,   390,   206,   271,   956,  2236,   282,   879,   230,
    1099,   492,   227,  1231,  1187,  1894,  2841,   230,  2847,   232,
    2980,   166,   167,   970,  1232,  1981,   837,   536,  2336,   588,
    1903,  3003,  2734,   272,  3026,  2937,  1009,  1027,  2940,  2916,
    1058,  1872,   283,  1873,  1284,   957,  2974,  3004,  2975,  2976,
     187,   493,   327,   556,  2194,   178,  2977,  2978,  2979,  2653,
    2344,  2915,  1434,  2247,   840,   327,  2038,  1031,  2189,   850,
    1117,  2110,  1252,  1119,   147,  1904,   364,   365,   366,   959,
    3028,   369,   391,  1064,  1065,   495,  1425,   141,   541,  2868,
    1422,   563,   485,   486,   487,   133,   589,  1126,   134,  2101,
    1147,  2695,  2011,  1413,  2012,  1966,  1414,  1152,   593,  1153,
     594,   595,   596,   541,   597,  2098, -1760,   593, -1763,   594,
     595,   596,   402,   597,  1199,  3051,   624,  2591,   158,   148,
     165,  2248,  2737,  1780,  1387,  2595,  1290,   564,   565,   573,
     563,   574,  1181,   188,   942,  1199,  2102,   645,  1388,   169,
    1281,   403,  1723,  1724,  1203,   895,   172,  2814,  2736,   206,
     207,   193,   136,   210,   137,   212,   665,  1695,   227,   194,
    2980,  1466,   916,   150,   300,  1203,   206,   207,  2103,   566,
     210,   889,   212,   681,   575,   227,   564,   565,   228,   229,
     230,   231,   232,   233,  1106,  2592,  1467,   695,  1831,   663,
    2717,   729,  2714,  2596,   196,  2637,   890,  1468,   189,  1226,
    1242,   575,   710,  1767,  1039,  1086,  1725,   891,  1116,  1107,
    1108,  1109,  1227,   201,  2689,   823,  1118,   190,   756,   206,
     207,  1389,   618,   827,  1534,   212,  2953,   731,  2955,  2100,
    1168,   960,  1460,  1040,   300,  2305,  1550,  2211,  1170,  1653,
    1676, -1446,  2688,   639,  1472,  2162,  2309,  1459,   400,  1053,
     855,   238,  1228,   403,   758,  1545,   961,   735,  1040,   334,
     856,   310,   658,  1396,  1417,  1301,  1432,   962,  1412,   807,
    1158,   253,  2594,  1385,  1160,  1733,  1867,  1914,  2586,   675,
    2635,  1169,  2514,  2498,   762,  1171,  1229,  2435,  1795,  1789,
    2371,  1791,  2091,   689,  2399,  1660,  1161,  2585,  2338,  2092,
    2346,  1347,  1162,  1369,  2322,   809,  2240,  1172,   704,  2310,
    2396,  2312,  1562,  1173,  2256,  1918,  2234,  1163,  2321,  2315,
    2318,  2191,  2494,   277,  2513,  2323,  2325,   288,  1174,  1761,
    1796,   305,  2196,  2005,   315,   813,  3010,  2510,  1142,  2040,
    2112,  1591,  1945,  1968,  1797,  1833,  1520,  2655,  1394,  1734,
    1298,  1391,  2598,   318,  1798,  2660,  1891,  1901,  2412,  1799,
    2661,  1280,  1457,   573,   563,   574,  1063,   353,   790,  1619,
    1496,   342,   143,   791,   792,  2971,   386,  1128,  1418,   831,
     575,  1419,  1461,  1475,   481,  1769,  2970,  1986,  1987,  1988,
    1989,   524,   884,   898,   525,  1462,   751,   356,  1255,  1256,
    1257,   237,  1076,   252,   150,   885,  1501,  1341,   914,  1363,
     564,   565,   276,  1479,  2313,   304,   314,   532,   332,  1697,
     231,   533,   929,   585,   385,   714,   573,   563,   574,   414,
    1697,   793,  2672,  2673,   501,  1463,  1505,   231,   415,   368,
    2439,  1106,  2674,   555,  1706,   886,  1258,   610,   231,   834,
     536,  1735,   955,   966,  1736,   927,   623,   699,   644,   664,
     680,   694,   231,   709,  2468,   956,  1107,  1108,  1109,  1465,
     716,   790,  1106,   564,   565,  1912,   791,   792,  1913,   888,
     491,   502,  1735,   970,   800,  2302,  1077,   730,  1568,   790,
    1597,  1626,   722,   492,   791,   792,   237,  1107,  1108,  1109,
     575,  1009,  1805,   536,   802,   957,  1064,  1065,   723,   757,
     845,   252,  1230,  2307,   536,  2331,  2853,   368,  2332,   319,
     320,   321,  2349,  1027,  1624,  2350,   322,  1806,   536,  2410,
     323,   808,  2867,   493,   368,   276,   541,  1231,  1807,   959,
     745,  1658,  1682,  2848,  2349,   368,  2349,  2351,  1232,  2352,
    1335,  1058,   852,  1031,   746,   205,   206,   207,   208,   368,
     282,   749,   212,   304, -1768,   790,  1078,   495,  1986,  1987,
    1988,  1989,   598,   314, -2406,  1680,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   268,   269,   227,   541,
     332,  2349,   940,   230,  2353,   232,  2162,   556,  1744,   773,
     541,   775,  1746,   206,   207,  2349,  2752,   210,  2400,   212,
    1706,  2211,   227,   776,   541,   228,   229,   230,   283,   232,
     233,   206,   207,  1126,   293,   294,  1718,   212,   231,  2663,
     949,  1766,   406,   407,   385,  2349,   300,  2788,  2404,  2349,
    1147,   984,  2405,  2242,  2851,  2018,  2019,  2325,  2020,  2021,
    2022,  2023,  1189,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   897,   310,   227,   913,   928,   228,   229,   230,
     414,   232,   233,  2829,  2830,  2831,  2832,  2692,   508,   509,
     510,   511,   512,   904,   905,   345,   346,   347,   789,   348,
     822,  1199,   826,   272,   536,  1189,   204,   205,   206,   207,
     208,   209,   210,   211,   212,  2349,  2349,   227,  2406,  2417,
     228,   229,   230,   624,   232,   233,   645,   839,   665,   848,
     681,  1203,   695,  1801,  1817,   368,   513,   541,   345,   346,
     347,   862,   348,  1226,  1242,  2349,  1802,  1101,  2418,   895,
    1986,  1987,  1988,  1989,   965,   729,  1227,   228,  1466,   710,
     501,   663,   528,   529,  1821, -1760,   593, -1763,   594,   595,
     596,  2848,   597,   756,   987,   889,   346,   347,   916,   865,
     777,   778,   779,  1467,   869,  2349,  1803,   938,  2421,  2349,
     541,   731,  2610,   228,  1468,   871,  1228,  1008,  1026,  2349,
     890,  1057,  2611,  1918,   132,   133,  1945,   874,   134,   758,
     135,   891,   346,   347,   555,   978,   777,   778,   779,  1218,
    1804,   735,  1472,   210,  2638,  2349,   960,  2639,  2670,   618,
    1229,   983,   639,   989,   658,  1090,   675,  2349,   689,   762,
    2683,  1767,  1091,   771,  2245,  2752,  2439,  1924,  1104,  1347,
    1120,   961,  1152,  1086,   807,  1153,  1168,  2349,  1125,  1653,
    2687,  1146,   962,   210,  1170,   704,   573,   563,   574,  1951,
    1254,  1369,   136,  1076,   137,  2468,  2349,  1928,  1295,  2694,
    2966,  2788,  1676,  1260,  2632,  1198,  2633,   623,   206,   207,
     809,   231,  2410,  2411,   212,  2397,  1261,   271,  1053,  1955,
    1262,  2349,   230,  1106,  2703,  1158,  1198,  1169,   644,  1160,
    1263,  1171,  1562,   564,   565,  1660,  1264,   999,  1021,   575,
     813,  1049,  1072,  1265,  1266,  1267,   272,   664,  1107,  1108,
    1109,  1161,  2349,  1172,  1302,  2816,  1293,  1162,  1793,  1173,
    2918,  2919,  2920,  2921,   680,  1591,  2019,  1619,  2020,  2021,
    2022,  2023,  1163,  1739,  1174,  1341,  2349,  1077,   694,  2817,
    2532,  2638,  2563,  2864,  2849,  2311,  2865,  1761,  1496,   946,
     167,  1241,  3011,   709,  1294,  1325,   175,  1363,  1297,  1461,
    1475,  1138,  2349,  2349,  1142,  2876,  2909,  2912,   368,  1303,
    2913,   598,  1462,  1327,   210,  1329,   884,   898,   730,  1331,
    2053,  1332,  2077,  2349,  1501,   176,  2917,  1382,  2349,   885,
    1479,  2957,  1128,  1383,  1152,   593,  1153,   594,   595,   596,
    1386,   597,   237,  1769,   914,   757,   929,  1392,  2349,  1393,
    2752,  2958,  1463,  2788,  1505,  2993,   790,  1078,  2994,  1395,
    1782,  2720,   252,  2721,  2722,  2723,  2724,   955,   966,   886,
     508,   509,   510,   511,   512,   554,  1546,  1547,  1548,   927,
     956,  2135,  1908,  1909,  1910,  1397,  1465,  1535,   529,   836,
    1568,  1416,  1346,   177,  1368,  1421,   808,  1427,   970,  1640,
    1641,  1864, -2347,   888,   573,   563,   574,   206,   207,  1428,
    2168,  2139,  1429,   212,   276,  1431,   271,  1805,   513,  1597,
     957,   230,   304,  2034,  2035,   314,  2045,  1436,  2069,  1748,
    1450,   332,  1451,  2725,  2726,  2681,  2682,   390,  1456,  1230,
    2172,  2439,  1806,  1458,  2468,   272,  1518,  1626,  1489,  1491,
    1519,   564,   565,  1807,   959,   231,   269,   575,   178,   179,
     180,  1536,   985,  1537,  1231,  1009,  1543,   385,  1027,  1544,
    1634,  1637,  2216,  1692,  1474,  1232,  1715,   181,  1716,  1717,
    1624,  1658, -1768,  1728,   897,  1729,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,  1730,  1500,  1031,   913,
    1314,  1315,  2220,  1731,  1682,  1152,   593,  1153,   594,   595,
     596,  1732,   597,   928,  1738,   344,  1747,  1784,   206,   207,
    1058,  1834,   210,  1785,   212,  1786,  1787,   227,  1788,   414,
     228,   229,   230,  1835,   232,   233,  1790,  1680,  1399,  1400,
    1792,  1836,  1401,  1402,   965,  1830,  1839,  1838,   345,   346,
     347,  1863,   348,  2306,  1865,  1866,  2308,  1868,  1871,  2314,
    1870,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,  1869,   501,   227,  1874, -2433,  1889, -1537,  1126,  1567,
    1896,  1596,  1625,  1897,   344,  1899,  1898,   206,   207,  1766,
    1900,   210,  1008,   212,  1902,  1907,   227,   911,   925,   228,
    1971,   230,  1976,   232,  1983,  1985,  1147,  1994,   205,   206,
     207,   208,  2532,   282,  1026,   212,  2006,   345,   346,   347,
    2007,   348,  2010,  1199,  2014,   272,   363,  2015,   205,   206,
     207,   208,  1657,  1681,  2017,   212,  2030,  2031,  1801,  1817,
    2032,   905,  1057,  2563,  2113,   541,  1466,  2114,  2117,  2197,
    2199,  1802,  2238,  1203,  2239,  1316,  1317,  1318,  2241,  2244,
    1226,  1242,  2250,  2378,   541,  2257,  1319,  1320,  1321,  1821,
    2258,  1467,  2259,  1227,   593, -1763,   594,   595,   596,  2319,
     597,  2260,  1468,  2261,  1403,   406,   407,  2320,   555,  2339,
    2355,  1803,  2348,  1404,  1405,  1406,  2354,  2361,  2370,  1558,
    2599,  1587,  1615,  2363,  1407,  1408,  1409,  1877,  1878,  1879,
    1880,  1881,   999,  1228,  1125,  2364,  2365,  2366,  1767,  1222,
     206,   207,  1765,  1055,   210,  1804,   212,  2367,  2368,   227,
    2369,  1146,  2376,  2382,  1021,   300,   554,   364,   365,   366,
     367,   368,   369,   370,   371,  2388,  1924,  1229,  1299,  2390,
    1437,  1438,  1649,  1672,  1439,  1440,  2389,  2392,  1653,  2401,
    1676,  2402,  1049,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    1347,  2403,  2408,  1951,  2407,  2415,  1928,  2420,  1072,  2423,
    2426,  2427,  1198,  1144,  2429,  1703,  1712,  2428,  1641,  2432,
     418,  2434,  2495,  2496,  1220,   507,  1369,  2289,  2290,  2291,
    2292,  2293,  2294,  1955,   623,  2497,  2500,   644,  2501,   664,
    2502,   680,  2507,   694,  1660,  1816,  2503,  1380,  2505,   344,
    2506,  2515,   206,  2516,  2517,  1241,   210,  2518,  2519,  2606,
    2587,   227,  2520,  2601,   228,  2588,   230,  2600,   232,  2604,
     709,  2602,  1757,  2616,  1761,  2605,  2612,  2954,  2614,  2613,
     876,  1138,   345,   346,   347,  2615,   348,  2620,  2532,  2617,
    2618,  2619,   573,   563,   574,   206,  2621,  1461,  1475,   282,
    2629,  2447,   730,  2053,   227,   575,  1341,  2640,  2641,   230,
    1462,   232,  2642,  1496,  2643,  2644,  2645,  1106,  2646,  2647,
     757,  2648,   598,  2656,  2563,  2476,  1441,  2077,  1479,  2649,
    1769,  2451,  1363,  2657,   283,  1442,  1443,  1444,  1888,   564,
     565,  1890,  1107,  1108,  1109,  2658,  1445,  1446,  1447,  1501,
    1463,  2676,  2680,  2684,  2690,  2480,  2698,  2697,  1923,   484,
    1346,   205,   206,   207,   208,  2704,   210,  2707,   212,  2349,
    2818,   227,  2719,  2711,  2815,  2820,   230,  2819,  1805,  1505,
    1950,  2821,  1368,  2822,  1465,  2824,  2835,  2135,  2836,  2837,
     992,   204,   205,   206,   207,   208,   209,   210,   211,   212,
    2850,   808,  2852,  1806,  2861,  2858,  2859,  2860,   231,  2045,
    1568,  2866,  2869,  2872,  1807,  2874,  2904,  2139,  2905,  2906,
    2168,  2910,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,  2927,  2069,   227,  2924,  2942,   228,   229,   230,
     231,   232,   233,  1597,  2928,  1626,  2929,  2930,  2943,  2946,
    2172,  2948,  2949,  2967,  2950,  2956,   920,   935,  2540,  2968,
    2571,   418,  2996,   272,  2969,  2991,  2999,  2998,  3006,  2216,
     364,   365,   366,   367,   536,   369,  3007,  3009,  1624,  3015,
    2016,   268,   867,  3017,  3018,  3019,   485,   486,   487,  3020,
    1658,  1474,  1682,  3021,  3022,  2028,  3023,  3024,  3025,  2220,
    2033,  3030,  3032,  3041,   367,   368,  3033,  3043,   897,  3052,
    3053,  2052,  3054,  2076,  3062,  1500,  3063,   205,   206,   207,
     208,  3084,   282,  3085,   212,  1680,  3086,   271,  3087,  1498,
    3091,   911,   230,  3090,  3093,   913,  3095,   928,   537,  3096,
     539,   507,  3097,  3098,  3101,   925,  3100,  2630,  1848,  1849,
    3103,  2631,  1850,  1851,  3105,  2634,   272,   540,  3110,   965,
     541,  3107,  2093,  2094,  3045,  3046,  3047,  3048,  3049,  3050,
    3108,  3111,  2134,  2330,  2636,  2677,  1766,  2885,   433,   434,
     435,  1567,  1062,   436,   437,   438,  3061,  2115,  2116,   439,
     440,   441,  1487,  2393,   406,   407,  1737,  2301,   442,  1801,
    1817,  2167,  2304,  1875,  1876,  1877,  1878,  1879,  1880,  1881,
    1596,   570,  1802,  1882,  1635,   571,   572,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,  2706,  3031,   227,
    1821,  3088,   228,   229,   230,   231,   232,   233,  1625,  2997,
    3056,  2834,  1151,  2840,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1276,  1803,  2952,  1924,  1940,  1008,  1951,   443,  1026,
     444,   445,  2887,  2215,  1655,  1678,   205,   206,   207,   208,
     446,   282,  1657,   212,  1055,   447,   227,   448,   449,   450,
     451,   230,   452,   232,  1928,   453,  1804,  1955,   454,   455,
     456,   457,  2125,   458,  1852,  1681,  2889,  2447,   462,  2890,
    2893,  1558,   465,  1853,  1854,  1855,   283,   466,   467,  2894,
     468,  1057,   469,   470,  1856,  1857,  1858,   471,   472,   473,
     554,  2158,   474,  2053,  2896,  2897,  2476,  2451,  2899,  2900,
    1587,  2901,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   535,   406,   407,   206,   207,  2903,  1993,  2871,
    2377,   212,  2077,  3092,  1763,  1984,  2480,  2386,  1615,   844,
     231,   206,   207,  1144,  1215,   210,  2671,   212,  2135,  1125,
     227,  2168,  1398,   228,   229,   230,   999,   232,   233,  1021,
    1765,  2760,  2303,  2207,  1277,  2329,     0,     0,     0,     0,
    2540,     0,  1649,     0,     0,     0,     0,  1146,  2139,     0,
       0,  2172,     0,  1995,  1996,  1997,  1998,  1999,  2000,  2001,
    2002,  2764,  2796,     0,  1198,  1672,     0,     0,     0,     0,
       0,  2571,   407,     0,     0,     0,   536,     0,     0,  2045,
    1816,  1049,     0,     0,     0,     0,  1072,     0,     0,     0,
    1703,     0,  2800,  2216,     0,     0,     0,     0,     0,  1712,
    1213,     0,  1241,     0,     0,     0,   367,   368,  2069,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
       0,   227,     0,  2220,   228,   229,   230,     0,   232,   233,
    2273,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  1516,     0,
     537,   538,   539,   239,     0,   254,     0,     0,     0,     0,
    1757,     0,     0,     0,   278,     0,     0,   306,   316,   540,
       0,     0,   541,     0,     0,     0,   387,  1138,     0,     0,
       0,   416,     0,     0,     0,     0,   503,  2883,     0,  2886,
    2888,  2891,  2892,  2895,  2898,   557,  2902,  1923,     0,     0,
       0,     0,     0,  2003,     0,     0,     0,     0,   625,     0,
     646,   666,   682,   696,     0,   711,     0,     0,     0,     0,
     920,  1346,     0,     0,  1950,  1249,  1097,     0,     0,     0,
       0,     0,  2447,     0,   935,  2476,     0,     0,     0,   732,
    2289,  2290,  2291,  2292,  2293,  2294,     0,  1368,   239,     0,
     418,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   759,  2451,   254,     0,  2480,     0,     0,     0,     0,
    2760,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,  2294,
    2281,     0,     0,   810,     0,     0,     0,   278,     0,     0,
       0,     0,     0,   507,     0,     0,  2540,  2372,  2414,     0,
    2764,     0,     0,     0,     0,     0,  2796,     0,     0,     0,
    2295,   205,   206,   207,   208,   306,   282,     0,   212,  1474,
       0,   271,  2446,     0,  2052,   316,   230,     0,   205,   206,
     207,   208,  2571,   282,     0,   212,  2800,     0,   227,     0,
       0,     0,     0,   230,     0,   232,  2475,     0,  2076,     0,
     272,     0,  1216,  1665,  1689,     0,     0,   344,     0,   205,
     206,   207,   208,  1062,   210,     0,   212,     0,   283,   227,
    1500,     0,   228,  2048,   230,  2072,   232,  1498,  3077,  3078,
    3079,  3080,  3081,  3082,     0,     0,   387,     0,   406,   407,
     345,   346,   347,     0,   348,     0,     0,   911,   272,   925,
       0,     0,     0,     0,     0,   406,   407,     0,  2134,     0,
       0,     0,     0,     0,   899,     0,     0,   915,   930,     0,
       0,   535,   416,   205,   206,   207,   208,     0,   282,     0,
     212,  1567,     0,   227,     0,     0,   406,   407,   230,   231,
     232,  2167,     0,  1775,     0,     0,     0,     0,     0,     0,
       0,     0,  1151,     0,     0,  2760,   206,   207,  2796,     0,
     210,     0,   212,   283,  1596,   227,  1625,     0,   228,   229,
     230,   231,   232,   233,     0,   724,     0,     0,     0,  2539,
       0,  2570,     0,     0,     0,  2764,     0,     0,  2800,     0,
    2215,     0,     0,     0,     0,     0,   967,     0,     0,     0,
     406,   407,   503,     0,     0,   536,     0,     0,     0,     0,
       0,  1657,   951,  1681,   205,   206,   207,   208,     0,   210,
       0,   212,     0,     0,   227,  2213,     0,   228,  2125,   230,
       0,   232,     0,  1514,  1655,   367,   368,     0,     0,  1010,
    1028,     0,     0,  1059,     0,   345,   346,   347,     0,   348,
       0,  1558,     0,     0,     0,     0,   557,  1678,     0,     0,
       0,  2158,     0,     0,     0,     0,     0,     0,     0,   537,
       0,   539,     0,  1055,     0,     0,     0,     0,     0,     0,
       0,  2089,     0,     0,  1587,     0,  1615,     0,   540,     0,
       0,   541,     0,     0,     0,     0,     0,  1765,     0,  2528,
    1127,  2559,     0,  1148,     0,  1845,  1846,  1847,     0,     0,
    2207,     0,     0,     0,  1848,  1849,     0,     0,  1850,  1851,
       0,  1816,     0,   364,   365,   366,   367,  1200,   369,   625,
       0,  1649,     0,  1672,     0,     0,     0,     0,     0,   485,
     486,   487,  1763,  1703,     0,  2232,  1712,     0,  1200,     0,
     646,  2659,     0,     0,     0,     0,     0,     0,     0,  1144,
    2622,  2623,  2288,  2289,  2290,  2291,  2292,  2293,  2294,   666,
       0,     0,     0,     0,     0,  1923,     0,     0,  1950,     0,
       0,     0,     0,     0,     0,     0,   682,     0,     0,     0,
    1189,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     696,     0,   227,     0,     0,   228,   229,   230,   231,   232,
     233,     0,     0,  1243,     0,   711,     0,  1757,  2446,     0,
    2699,     0,     0,   345,   346,   347,  2702,   348,     0,     0,
    1972,   272,     0,     0,     0,     0,  1538,  1848,  1849,     0,
     732,  1850,  1851,     0,  2052,     0,     0,  2475,     0,     0,
    1842,  1843,  1844,     0,     0,     0,     0,     0,     0,     0,
    1852,     0,     0,     0,   239,     0,     0,   759,     0,  1853,
    1854,  1855,     0,  2076,     0,  2372,     0,   243,     0,   258,
    1856,  1857,  1858,     0,   254,     0,     0,     0,     0,  2134,
       0,     0,  2167,  2622,  2623,  2288,  2289,  2290,  2291,  2292,
    2293,  2294,  2759,     0,     0,     0,     0,     0,  2730,     0,
       0,  2539,     0,     0,  1348,     0,  1370,     0,   810,     0,
       0,     0,     0,     0,     0,     0,   920,     0,   935,     0,
       0,     0,   629,  2795,   650,     0,   278,     0,     0,     0,
       0,     0,  2570,     0,   306,     0,  2624,   316,     0,     0,
     992,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       0,     0,   227,   740,  2215,   228,   229,   230,   231,   232,
     233,  1969,   243,     0,     0,     0,     0,     0,     0,     0,
       0,  1977,  1978,  1852,  1979,   767,     0,   258,     0,   387,
       0,   272,  1853,  1854,  1855,     0,  1476,     0,     0,     0,
       0,     0,     0,  1856,  1857,  1858,   899,     0,     0,  2125,
       0,  2827,  2158,     0,     0,     0,  2008,  2009,     0,  1502,
    2013,   915,  2748,  2394,  2442,     0,  2048,     0,     0,   406,
     407,  2528,     0,     0,   536,   930,  2842,  2843,  2288,  2289,
    2290,  2291,  2292,  2293,  2294,     0,     0,     0,  2471,     0,
    2072,   416,     0,  2784,     0,     0,     0,     0,     0,     0,
       0,     0,  2559,  1665,   367,   368,   967,     0,     0,     0,
       0,     0,  1498,  1800,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,  2207,   227,  1689,     0,   228,  2844,
     230,   231,   232,  2446,   503,     0,  2475,  2877,   537,     0,
     539,  1569,  1062,  1598,  1627,     0,   345,   346,   347,     0,
     348,     0,     0,     0,  1010,     0,     0,   540,     0,     0,
     541,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,  2759,  2925,  2926,     0,     0,  1028,     0,     0,     0,
       0,     0,  2931,  2932,  2933,  2934,     0,     0,     0,     0,
       0,     0,     0,     0,  1659,  1683,     0,  2539,     0,     0,
       0,     0,     0,     0,  1059,     0,     0,  2795,     0,     0,
       0,  1775,     0,     0,  2776,     0,     0,     0,     0,  2372,
       0,  2535,     0,  2566,   364,   365,   366,     0,  1151,   369,
       0,     0,  2213,  2570,     0,     0,     0,     0,     0,     0,
     485,   486,   487,     0,     0,     0,     0,     0,     0,     0,
     557,     0,     0,  1655,     0,  1678,     0,     0,     0,     0,
       0,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,     0,   227,  1127,     0,   228,   229,
     230,   231,   232,   233,  1768,     0,     0,     0,     0,     0,
       0,  2748,     0,  1148,     0,     0,     0,     0,     0,     0,
    2959,  2960,     0,     0,   272,     0,  2964,  2965,     0,     0,
       0,   535,     0,   205,   206,   207,   208,  2528,  1750,     0,
     212,     0,     0,   271,     0,     0,     0,  2784,   230,   231,
    2842,  2843,  2288,  2289,  2290,  2291,  2292,  2293,  2294,  1763,
       0,     0,   406,   407,  1200,     0,  2340,     0,     0,     0,
       0,     0,   272,  2559,     0,     0,  2759,  2262,  2263,  2795,
       0,     0,     0,     0,     0,     0,   625,     0,     0,   646,
       0,   666,     0,   682,     0,   696,     0,  1818,     0,     0,
       0,     0,     0,     0,     0,  3005,     0,  1243,  3008,     0,
     406,   407,     0,   629,     0,   536,   344,     0,     0,   206,
       0,     0,   711,   210,     0,  3012,  3013,  3014,   227,     0,
     247,   228,   261,   230,   650,   232,     0,     0,     0,     0,
       0,     0,     0,     0,   309,   367,   368,     0,     0,   345,
     346,   347,   362,   348,   732,     0,     0,     0,     0,     0,
       0,     0,     0,  3035,  3036,  3037,  3038,     0,     0,     0,
       0,     0,   759,     0,     0,     0,     0,     0,     0,   537,
    2442,   539,     0,     0,     0,   634,     0,   654,   671,   685,
     698,     0,   713,     0,     0,     0,  2748,     0,   540,  2784,
       0,   541,     0,  3058,  3059,     0,  2048,  2463,     0,  2471,
    1925,     0,  1348,     0,     0,     0,   744,     0,     0,     0,
       0,     0,     0,  2362,   740,   247,     0,     0,     0,     0,
       0,  1153,  1952,     0,  1370,  2072,     0,     0,   770,     0,
     261,     0,     0,     0,     0,     0,     0,     0,   243,  2385,
       0,   767,     0,   810,     0,  2316,  2391,     0,     0,     0,
     820,     0,     0,     0,  2755,     0,     0,     0,   258,     0,
       0,     0,   484,  2535,   205,   206,   207,   208,     0,   282,
       0,   212,     0,     0,   227,     0,     0,     0,     0,   230,
       0,     0,   309,     0,     0,  2791,     0,     0,  1352,     0,
    1374,     0,     0,     0,  2566,     0,     0,     0,     0,     0,
       0,   992,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,     0,   227,     0,     0,  2213,     0,   230,   231,
     232,     0,  2409,     0,     0,   344,     0,     0,   206,   207,
     362,     0,   210,  1476,   212,     0,     0,   227,     0,     0,
     228,     0,   230,   283,   232,     0,     0,     0,     0,     0,
     899,     0,     0,  2054,     0,  2078,  2424,  1502,   345,   346,
     347,     0,   348,     0,     0,     0,   272,     0,     0,     0,
       0,  2431,     0,   364,   365,   366,   367,   915,   369,   930,
       0,   903,     0,     0,     0,   536,     0,     0,     0,   485,
     486,   487,  1665,     0,  1689,     0,     0,     0,     0,     0,
       0,   967,  3064,  3065,  3066,  3067,  3068,  3069,  3070,  3071,
    3072,  3073,  3074,  3075,  2136,   367,   368,     0,     0,     0,
       0,     0,     0,  1569,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    14,    15,  2169,     0,  2442,     0,     0,  2471,   537,
       0,   539,  1598,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,   977,    19,     0,     0,     0,   540,     0,
       0,   541,     0,     0,     0,  1573,     0,  1602,  1775,     0,
    1627,     0,     0,  2755,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,  1010,   535,
       0,  1028,   206,   207,     0,  2217,  1013,  1038,   212,  2535,
       0,     0,     0,     0,  1659,     0,     0,   231,     0,  2791,
       0,     0,    22,     0,   344,    23,   205,   206,   207,   208,
       0,   210,     0,   212,     0,     0,   227,  1683,     0,   228,
       0,   230,     0,   232,     0,  2566,   363,     0,   205,   206,
     207,   208,     0,  1059,     0,   212,     0,   345,   346,   347,
       0,   348,     0,     0,    24,   272,     0,     0,     0,     0,
      25,  1164,  1175,     0,    26,    27,     0,  2589,  2590,   407,
       0,     0,     0,   536,  1185,     0,    28,     0,     0,     0,
       0,     0,     0,     0,  1212,     0,   634,     0,     0,     0,
    2609,     0,     0,   406,   407,     0,     0,     0,     0,     0,
       0,  1127,     0,   367,   368,  1212,     0,   654,     0,     0,
       0,     0,  1768,     0,     0,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,   671,     0,     0,  1148,
       0,    34,     0,     0,     0,     0,     0,   537,   538,   539,
      35,     0,     0,   685,     0,     0,  1200,   364,   365,   366,
     367,   368,   369,   370,   371,     0,   540,   698,  2755,   541,
       0,  2791,  1818,     0,     0,     0,     0,     0,     0,     0,
    1248,     0,   713,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1243,  2664,  2665,  2666,  2667,  2668,
     629,     0,     0,   650,     0,     0,     0,   744,   992,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,     0,
     227,     0,     0,   228,   229,   230,   231,   232,   233,  2686,
       0,   247,     0,     0,   770,   535,     0,   205,   206,   207,
     208,  2691,   282,     0,   212,     0,     0,   271,     0,   272,
       0,   261,   230,   231,     0,     0,     0,     0,  2700,     0,
       0,     0,     0,     0,     0,  2705,     0,     0,   740,  2710,
       0,     0,     0,     0,     0,     0,   272,     0,     0,  1925,
       0,  1358,     0,  1379,     0,   820,   767,   406,   407,     0,
       0,     0,   536,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,  1348,     0,   227,  1952,     0,     0,     0,
     230,   309,   232,     0,   406,   407,     0,     0,     0,   536,
       0,     0,   367,   368,  1933,     0,  1352,     0,     0,  1370,
       0,     0,     0,     0,     0,   283,  2718,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1960,   362,  1374,   367,
     368,     0,     0,     0,     0,     0,   537,     0,   539,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   903,     0,   540,     0,     0,   541,     0,
       0,     0,     0,   537,     0,   539,  1513,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,     0,   227,
       0,  1476,   540,     0,  2448,   541,  2054,  2118,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,     0,   227,
       0,     0,   228,   229,   230,   231,   232,   233,  2477,     0,
    2078,     0,  2812,   977,     0,     0,     0,     0,     0,     0,
     345,   346,   347,     0,   348,  2826,     0,  2828,   272,     0,
       0,     0,  1502,     0,     0,     0,     0,     0,     0,  2230,
    2839,     0,     0,     0,     0,     0,     0,     0,  1579,     0,
    1608,  1633,     0,     0,     0,     0,     0,  2058,     0,  2082,
       0,  1013,     0,  2854,     0,  2855,   406,   407,     0,     0,
    2136,   536,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,     0,  1038,   227,     0,     0,   228,   229,   230,
     231,   232,   233,  1569,     0,     0,     0,     0,     0,     0,
       0,   367,   368,  2169,  2875,  2118,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,  2144,     0,
     228,   229,   230,   231,   232,   233,  1598,  1573,  1627,     0,
    2914,     0,     0,     0,     0,   537,     0,   539,   345,   346,
     347,  2541,   348,  2572,     0,     0,   272,  2177,     0,     0,
       0,     0,  2217,     0,   540,     0,  1602,   541,     0,  2878,
       2,     0,  2879,  2880,     6,     7,     8,     9,    10,    11,
       0,    13,     0,  1659,     0,  1683,    15,     0,     0,     0,
       0,     0,     0,     0,   406,   407,     0,    16,    17,   536,
       0,  1774,     0,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,     0,     0,   227,     0,     0,   228,   229,
     230,  2935,   232,   233,     0,  1164,     0,     0,     0,   367,
     368,     0,     0,     0,     0,     0,  1175,     0,  1014,     0,
     205,   206,   207,   208,   272,   210,     0,   212,     0,     0,
     227,     0,  2945,   228,  2947,   230,   231,   232,     0,     0,
       0,  1212,     0,   537,     0,   539,  2881,  2951,     0,  1768,
       0,   345,   346,   347,     0,   348,     0,     0,     0,   272,
       0,     0,   540,   634,     0,   541,   654,     0,   671,     0,
     685,     0,   698,  1818,  1829,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1248,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,     0,   406,   407,   713,
       0,     0,   536,     0,     0,     0,     0,     0,   992,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,  2938,
       0,     0,     0,     0,     0,     0,   231,  1925,     0,     0,
    1952,   744,   367,   368,     0,     0,   992,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     0,     0,   227,   770,
       0,   228,   229,   230,   231,   232,   233,   736,     0,     0,
       0,     0,     0,     0,     0,     0,   537,     0,   539,     0,
    2448,     0,     0,     0,     0,     0,     0,   272,     0,   763,
       0,     0,     0,     0,     0,   540,     0,  1939,   541,  1358,
       0,     0,   536,     0,     0,     0,  2054,     0,     0,  2477,
       0,   814,     0,   535,     0,   205,   206,   207,   208,  1965,
     282,  1379,   212,     0,     0,     0,     0,     0,     0,     0,
     536,   231,   367,   368,     0,  2078,     0,     0,     0,     0,
     820,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2136,  2583,     0,  2169,     0,     0,     0,     0,     0,
     367,   368,     0,     0,  2761,     0,   537,     0,   539,     0,
     421,     0,   422,  2541,   423,     6,     0,   424,     9,   425,
       0,    12,     0,  1933,     0,   540,     0,    15,   541,     0,
       0,   357,   406,   407,   537,  2797,   539,   536,     0,    17,
      18,     0,     0,     0,  2572,     0,     0,  1352,     0,    19,
    1960,     0,     0,   540,     0,     0,   541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2217,   367,   368,     0,
    1486,     0,     0,  1374,     0,     0,     0,     0,     0,   426,
       0,    21,     0,     0,   242,     0,   257,   903,     0,     0,
    2064,     0,  2088,     0,  1513,   280,   290,     0,     0,     0,
       0,   537,     0,   539,     0,     0,   360,   427,     0,     0,
    2150,     0,   344,     0,     0,   206,   207,   505,     0,   210,
     540,   212,     0,   541,   227,     0,     0,   228,   229,   230,
     231,   232,   233,     0,     0,     0,     0,     0,   977,   628,
       0,   649,   668,     0,     0,   345,   346,   347,  2456,   348,
    2058,  2149,     0,     0,     0,    25,     0,     0,     0,     0,
    1579,     0,     0,     0,   971,     0,     0,     0,     0,     0,
     739,   428,  2485,     0,  2082,     0,     0,  1690,     0,   242,
    2182,     0,     0,     0,     0,     0,     0,     0,     0,  1608,
       0,     0,   766,     0,   257,  2448,     0,     0,  2477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1032,     0,
       0,     0,     0,     0,   817,    32,     0,  1633,   280,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,   290,
       0,     0,     0,  2761,  2144,  1013,     0,     0,  1038,     0,
       0,     0,  2229,     0,     0,     0,  2118,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     0,  1573,   227,  2541,
       0,   228,   229,   230,   231,   232,   233,  2177,     0,  2797,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     346,   347,     0,   348,   535,     0,   205,   206,   207,   208,
    1602,   282,     0,   212,   360,  2572,     0,     0,     0,     0,
       0,     0,   231,     0,     0,  2545,     0,  2576,     0,  1189,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
       0,   227,     0,     0,   228,   229,   230,   231,   232,   233,
     536,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   346,   347,   901,   348,     0,   917,   932,
     272,     0,     0,     0,     0,     0,     0,     0,     0,  1774,
     367,   368,     0,   406,   407,     0,     0,     0,   536,     0,
       0,     0,     0,   910,   924,     0,     0,     0,     0,     0,
    1164,     0,  1175,     0,     0,     0,     0,     0,   406,   407,
       0,     0,     0,  1212,   537,     0,   539,     0,   367,   368,
       0,     0,     0,     0,     0,     0,     0,     0,   736,  1829,
       0,     0,     0,   540,     0,     0,   541,     0,  2761,     0,
       0,  2797,     0,     0,     0,     0,     0,   974,     0,     0,
       0,  1248,   537,   505,   539,   763,     0,     0,     0,     0,
    2118,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       0,   540,   227,     0,   541,   228,   229,   230,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2508,  1035,     0,   345,   346,   347,     0,   348,     0,     0,
       0,     0,     0,     0,     0,     0,   814,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1054,
       0,  1933,  1014,     0,  1960,   206,   207,     0,  1776,   210,
       0,   212,     0,     0,   227,     0,  1939,   228,     0,   230,
     231,   232,     0,     0,   536,     0,     0,     0,     0,     0,
       0,  1129,     0,  2712,     0,   345,   346,   347,     0,   348,
    1358,     0,     0,  1965,  2456,     0,     0,     0,   357,     0,
       0,     0,     0,     0,   367,   368,     0,     0,     0,  1143,
     628,     0,     0,     0,  1480,     0,  1379,     0,     0,     0,
    2058,     0,     0,  2485,     0,     0,     0,     0,     0,     0,
       0,   649,     0,     0,     0,     0,   536,  1506,   537,   344,
     539,     0,   206,   207,     0,     0,   210,     0,   212,  2082,
     668,   227,     0,     0,   228,   229,   230,   540,   232,   233,
     541,     0,     0,     0,     0,  2144,   367,   368,  2177,     0,
       0,     0,   345,   346,   347,     0,   348,     0,  2769,     0,
       0,     0,     0,     0,   971,     0,     0,  2545,  1486,     0,
       0,  2462,     0,  2064,  1245,     0,     0,     0,     0,     0,
     537,     0,   539,     0,     0,     0,     0,     0,     0,  2805,
       0,     0,     0,     0,  2511,  2491,     0,  2088,  2576,   540,
       0,   739,   541,     0,     0,  1014,     0,     0,   206,   207,
       0,     0,   210,     0,   212,     0,     0,   227,     0,  1513,
     228,     0,   230,   231,   232,   242,     0,     0,   766,     0,
       0,     0,     0,     0,  1032,     0,     0,     0,   345,   346,
     347,     0,   348,     0,     0,   257,     0,   992,   204,   205,
     206,   207,   208,   209,   210,   211,   212,  2149,     0,   227,
       0,     0,   228,   229,   230,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,  1351,     0,  1373,     0,   817,
    1579,     0,     0,     0,     0,     0,     0,     0,   272,   536,
    2182,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1608,     0,  1633,     0,     0,     0,   367,
     368,     0,     0,     0,     0,     0,     0,     0,  2551,     0,
    2582,   536,     0,     0,     0,     0,     0,     0,     0,  2229,
       0,   360,     0,     0,     0,     0,     0,     0,     0,  2456,
       0,     0,  2485,   537,     0,   539,     0,  1483,     0,     0,
       0,   367,   368,     0,     0,     0,     0,   901,     0,     0,
       0,     0,   540,     0,     0,   541,     0,     0,     0,     0,
    1509,     0,   917,     0,     0,     0,     0,  2769,     0,     0,
       0,     0,     0,     0,     0,   537,   932,   539,     0,     0,
       0,     0,     0,     0,     0,  1497,     0,   910,     0,     0,
       0,     0,     0,  2545,   540,     0,     0,   541,     0,     0,
       0,   924,     0,  2805,     0,     0,     0,   974,     0,  1638,
       0,     0,     0,     0,     0,  1822,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1774,     0,     0,  2576,
       0,     0,     0,     0,     0,   505,     0,     0,     0,     0,
       0,     0,  1572,     0,  1601,  1629,     0,     0,     0,     0,
    1829,  2183,     0,     0,     0,     0,     0,     0,     0,   246,
       0,   260,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   736,     0,     0,     0,     0,  1035,     0,     0,
     992,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     763,     0,   227,     0,     0,  1661,  1685,   230,   231,   232,
       0,     0,     0,     0,  1939,     0,     0,  1965,     0,     0,
       0,     0,     0,     0,   632,     0,   652,     0,     0,     0,
    1654,  1677,   283,     0,     0,     0,     0,     0,  1929,     0,
    1054,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   743,     0,  2462,     0,     0,
    1956,     0,  2769,     0,   246,  2805,     0,     0,     0,     0,
       0,     0,     0,     0,   536,     0,     0,   769,     0,   260,
       0,   814,     0,  2064,     0,     0,  2491,  1129,     0,     0,
       0,     0,     0,     0,     0,  1770,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,  2088,     0,     0,     0,     0,     0,     0,     0,
    1762,     0,     0,     0,     0,     0,     0,     0,  2149,  1143,
       0,  2182,     0,     0,     0,     0,     0,     0,   537,     0,
     539,  2775,     0,     0,     0,     0,     0,     0,     0,     0,
    2551,     0,     0,     0,     0,     0,     0,   540,     0,     0,
     541,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1480,  2811,     0,     0,     0,     0,   628,     0,     0,
     649,  2582,   668,     0,     0,   240,     0,   255,  1825,     0,
       0,     0,     0,     0,     0,  1506,     0,   289,  1245,   307,
       0,     0,     0,  2229,     0,     0,     0,   354,     0,     0,
       0,     0,     0,     0,  2185,     0,     0,     0,   504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   971,
     626,     0,   647,   667,   683,   739,     0,     0,     0,     0,
       0,     0,  2140,     0,     0,     0,     0,   535,     0,   205,
     206,   207,   208,   766,  1750,     0,   212,     0,     0,   271,
       0,   733,     0,     0,   230,   231,     0,     0,     0,     0,
     240,  2173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   760,     0,   255,     0,     0,   272,     0,
       0,  1932,     0,  1351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   811,     0,     0,     0,     0,
       0,     0,     0,  1959,   535,  1373,   205,   206,   207,   208,
     289,   282,  2462,   212,     0,  2491,   406,   407,     0,  1032,
       0,   536,   231,  2221,   817,     0,     0,   307,     0,  1189,
     204,   205,   206,   207,   208,   209,   210,   211,   212,     0,
       0,   227,     0,     0,   228,   229,   230,   231,   232,   233,
    2775,   367,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   346,   347,     0,   348,     0,     0,     0,
     272,     0,     0,     0,     0,   354,  2551,     0,     0,     0,
       0,     0,     0,   406,   407,   537,  2811,   539,   536,   484,
       0,   205,   206,   207,   208,     0,   282,     0,   212,     0,
       0,   227,     0,     0,   540,     0,   230,   541,   406,   407,
       0,     0,  2582,     0,  1483,     0,     0,     0,   367,   368,
       0,     0,     0,     0,     0,   632,   900,     0,     0,     0,
     931,   901,     0,     0,  2057,     0,  2081,  1153,  1509,     0,
       0,     0,     0,     0,     0,     0,   652,     0,     0,     0,
       0,     0,   537,     0,   539,     0,     0,     0,   917,  2047,
     932,  2071,     0,  1497,     0,     0,     0,     0,     0,     0,
       0,   540,     0,     0,   541,     0,     0,     0,     0,     0,
       0,     0,   974,   910,     0,   924,     0,     0,     0,     0,
    1822,     0,     0,     0,     0,  2143,     0,     0,     0,     0,
     364,   365,   366,   367,  1572,   369,     0,     0,   968,     0,
       0,     0,     0,     0,   504,     0,   485,   486,   487,     0,
       0,     0,     0,     0,  2176,     0,     0,     0,     0,     0,
       0,     0,     0,  1601,     0,  2775,   743,   535,  2811,   205,
     206,   207,   208,     0,   282,     0,   212,     0,     0,   227,
       0,     0,  1029,  2715,   230,   231,   232,     0,     0,     0,
     246,  1629,     0,   769,     0,     0,  1800,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     0,     0,   227,   283,
     260,   228,  1035,   230,   231,   232,  2224,     0,     0,     0,
       0,     0,     0,     0,     0,  1661,     0,  1929,     0,   345,
     346,   347,     0,   348,     0,     0,     0,     0,     0,     0,
    1356,  2212,  1377,     0,     0,     0,   406,   407,  1685,     0,
    1654,   536,     0,     0,  1956,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
       0,   626,   227,  1677,     0,   228,   229,   230,   231,   232,
     233,   367,   368,     0,     0,     0,     0,     0,     0,  1054,
       0,     0,   647,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,   364,   365,   366,
       0,   667,   369,     0,     0,   537,     0,   539,     0,     0,
       0,     0,  1129,   485,   486,   487,     0,     0,   683,     0,
       0,     0,     0,  1770,   540,     0,     0,   541,     0,   406,
     407,     0,     0,     0,     0,     0,     0,     0,     0,  1480,
       0,     0,  2452,     0,     0,  1244,     0,     0,  1762,     0,
       0,   535,     0,   205,   206,   207,   208,     0,   282,     0,
     212,     0,     0,   271,     0,  1143,  2481,     0,   230,   231,
       0,     0,   733,  1825,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1506,     0,   272,     0,     0,  1245,   240,     0,     0,   760,
       0,     0,     0,     0,     0,     0,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   255,  1577,   227,  1606,
       0,   228,   229,   230,   231,   232,   233,   245,  2140,   259,
     406,   407,     0,     0,     0,   536,     0,     0,     0,   291,
       0,     0,     0,     0,     0,     0,  1349,   272,  1371,   361,
     811,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2173,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,   289,     0,  2492,     0,   307,     0,     0,     0,
    1932,     0,   631,     0,   651,   669,     0,     0,  1225,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,   537,
     227,   539,     0,     0,  1351,   230,   231,  1959,     0,     0,
    2221,     0,   354,   742,     0,     0,     0,     0,   540,     0,
       0,   541,   245,     0,     0,     0,     0,     0,  1477,     0,
    1373,     0,     0,     0,     0,   768,     0,   259,   900,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1503,     0,     0,     0,     0,     0,   818,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   931,   256,     0,
       0,     0,   291,     0,     0,  2118,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,   355,     0,
     228,   229,   230,   231,   232,   233,     0,     0,   968,   364,
     365,   366,  1483,     0,   369,  2455,     0,  2057,   345,   346,
     347,     0,   348,     0,     0,   485,   486,   487,     0,     0,
       0,   627,     0,   648,     0,     0,   504,     0,     0,  2484,
    2441,  2081,  2047,  1570,     0,  1599,  1628,   361,     0,     0,
       0,  1822,   632,     0,     0,   652,     0,     0,     0,     0,
       0,     0,   734,  1509,  2470,     0,  2071,     0,     0,   536,
       0,   241,     0,     0,     0,     0,     0,     0,  1029,     0,
       0,     0,     0,     0,   761,     0,   256,     0,  1497,     0,
       0,     0,     0,     0,     0,     0,     0,  1684,     0,   367,
     368,  2143,   933,     0,   359,  1929,   812,     0,  1956,     0,
    1189,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     743,     0,   227,     0,  1572,   228,   229,   230,   231,   232,
     233,     0,     0,   537,  2176,   539,     0,     0,   769,     0,
       0,     0,     0,   345,   346,   347,     0,   348,  2452,     0,
       0,   272,   540,     0,     0,   541,     0,  1601,     0,  1629,
       0,     0,     0,     0,     0,     0,     0,     0,   738,     0,
       0,     0,  2544,     0,  2575,     0,  1937,  2481,  1356,     0,
     975,     0,     0,  2224,     0,     0,   355,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,  2534,  1963,  2565,
    1377,     0,     0,     0,  1661,     0,  1685,     0,  2212,     0,
       0,   484,   816,   205,   206,   207,   208,     0,   210,  2140,
     212,     0,  2173,   227,  1037,     0,     0,     0,   230,  1654,
       0,  1677,  2765,     0,     0,     0,     0,   992,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,     0,   227,
       0,     0,   228,   229,   230,   231,   232,   233,     0,     0,
       0,     0,     0,  2801,     0,     0,     0,     0,   626,     0,
       0,   647,     0,   667,     0,   683,     0,     0,   272,  1819,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1244,
    1770,     0,   359,     0,  2221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   631,  1825,  1762,   406,   407,     0,   969,
       0,   536,   364,   365,   366,   367,     0,   369,     0,  2062,
       0,  2086,     0,     0,   651,     0,   733,     0,   485,   486,
     487,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   368,   669,   760,     0,     0,     0,     0,     0,
       0,     0,     0,  1030,     0,     0,     0,     0,  1932,     0,
       0,  1959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   537,     0,   539,     0,     0,
    2147,     0,  1926,     0,  1349,     0,     0,     0,     0,  1577,
       0,     0,     0,     0,   540,     0,     0,   541,     0,     0,
       0,  2455,     0,     0,  1953,     0,  1371,     0,     0,  2180,
       0,     0,     0,  2452,   742,   973,  2481,     0,  1606,     0,
       0,     0,     0,     0,     0,   811,  2441,  2057,     0,     0,
    2484,     0,     0,     0,     0,     0,     0,     0,   245,     0,
    1202,   768,   627,     0,     0,     0,     0,     0,     0,     0,
       0,  2765,  2047,     0,     0,  2470,  2081,     0,   259,  1034,
       0,  1202,     0,   648,     0,     0,     0,     0,     0,     0,
     358,     0,  2143,     0,     0,  2176,     0,     0,     0,     0,
       0,  2071,     0,     0,     0,  2768,     0,  2801,  1354,     0,
    1375,     0,   818,     0,  2544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2754,     0,     0,     0,   291,  1477,  2804,     0,     0,  2534,
       0,     0,     0,     0,     0,  2575,     0,     0,     0,     0,
       0,     0,   900,     0,   737,  2055,     0,  2079,     0,  1503,
       0,  2790,     0,     0,     0,     0,     0,  2224,     0,     0,
    2565,     0,     0,   734,   361,     0,   764,     0,     0,     0,
       0,   931,     0,     0,     0,     0,     0,     0,     0,     0,
    1484,     0,  2212,     0,     0,     0,     0,   241,   815,     0,
     761,     0,     0,   968,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1510,     0,     0,  2137,   256,     0,     0,
       0,     0,     0,     0,     0,  1570,     0,     0,     0,   933,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2170,     0,  1350,     0,  1372,
       0,   812,     0,     0,  1599,     0,  2765,     0,     0,  2801,
     975,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   358,   738,
     227,     0,  1628,   228,   229,   230,   231,   232,   233,     0,
       0,     0,     0,     0,     0,  1575,  2455,  1604,  1631,  2484,
       0,     0,     0,  1029,     0,     0,   765,  2218,     0,   272,
       0,     0,     0,   355,     0,     0,     0,     0,     0,     0,
       0,  2441,     0,     0,  2470,     0,     0,     0,     0,  1478,
    1037,     0,     0,     0,  2768,     0,     0,     0,     0,  1684,
       0,     0,     0,     0,     0,     0,     0,   406,   407,  1687,
       0,     0,  1504,     0,     0,     0,     0,   816,     0,  2754,
    2544,     0,     0,     0,     0,  1937,     0,     0,     0,     0,
    2804,   951,     0,   205,   206,   207,   208,     0,   210,     0,
     212,     0,     0,   227,     0,  2534,   228,     0,   230,  1356,
     232,     0,  1963,     0,     0,  2790,  2575,     0,     0,   969,
       0,     0,     0,     0,   345,   346,   347,     0,   348,     0,
       0,   972,     0,     0,     0,  1377,     0,     0,     0,   359,
       0,  2565,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1571,  1482,  1600,     0,     0,     0,
       0,     0,     0,     0,     0,   992,   204,   205,   206,   207,
     208,   209,   210,   211,   212,  1033,     0,   227,  1508,     0,
     228,   229,   230,   231,   232,   233,     0,     0,     0,  1030,
       0,     0,     0,     0,  1819,     0,     0,     0,     0,     0,
       0,     0,   364,   365,   366,   367,   272,   369,     0,     0,
    2460,     0,  2062,     0,     0,     0,  1244,     0,   485,   486,
     487,     0,     0,     0,     0,   973,     0,     0,     0,     0,
       0,     0,     0,     0,  2489,     0,  2086,     0,     0,  2768,
     631,     0,  2804,   651,     0,   669,     0,     0,     0,   536,
       0,  1827,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1205,     0,  2754,     0,     0,  2790,     0,  2118,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   367,
     368,   227,     0,  1205,   228,   229,   230,   231,   232,   233,
       0,     0,     0,     0,     0,  1034,  2147,     0,     0,     0,
       0,  1926,   345,   346,   347,     0,   348,     0,   742,     0,
     272,     0,     0,   537,     0,   539,     0,     0,     0,  1577,
       0,     0,     0,     0,     0,  1349,   768,     0,  1953,  2180,
       0,     0,   540,     0,     0,   541,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   406,   407,
       0,  1371,  1606,   536,     0,     0,     0,  1202,     0,     0,
       0,     0,     0,     0,  1935,     0,  1354,  2549,     0,  2580,
       0,     0,     0,     0,     0,   737,     0,     0,     0,   627,
       0,     0,   648,   367,   368,     0,  1961,     0,  1375,     0,
    1820,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,   818,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   537,     0,   539,
       0,     0,     0,  1477,     0,     0,  2449,     0,  2055,     0,
       0,     0,     0,     0,     0,     0,   540,     0,     0,   541,
       0,     0,     0,     0,     0,     0,     0,   734,     0,     0,
    2478,     0,  2079,   815,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,  1503,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,     0,   227,     0,     0,
     228,   229,   230,     0,   232,   233,  1824,  1484,     0,     0,
       0,     0,     0,  1927,     0,  1350,     0,     0,     0,     0,
       0,     0,  2137,     0,     0,   358,     0,  2060,     0,  2084,
       0,  1510,     0,     0,     0,  1954,     0,  1372,     0,     0,
       0,  1481,     0,     0,     0,  1570,     0,     0,     0,     0,
       0,     0,     0,   933,     0,  2170,   812,     0,     0,     0,
       0,     0,     0,   738,  1507,     0,     0,     0,     0,     0,
       0,     0,     0,  1937,     0,   975,  1963,     0,  1599,     0,
    1628,   765,     0,     0,     0,     0,     0,     0,  2146,     0,
       0,     0,     0,  2542,     0,  2573,     0,  1575,     0,     0,
       0,     0,     0,     0,  2218,     0,     0,     0,     0,     0,
       0,   972,     0,     0,     0,     0,  2460,  2179,     0,  1931,
       0,     0,     0,     0,     0,     0,  1604,  1684,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1958,  2062,     0,     0,  2489,  1478,     0,     0,     0,
       0,     0,     0,     0,  1631,     0,     0,     0,     0,     0,
       0,     0,   816,     0,     0,     0,  2056,     0,  2080,     0,
    1504,  2086,     0,     0,     0,  1037,     0,     0,     0,  2226,
       0,  1033,     0,     0,     0,     0,     0,  2147,     0,  1014,
    2180,   205,   206,   207,   208,     0,   210,     0,   212,     0,
    2773,   227,     0,     0,   228,     0,   230,   231,   232,  2549,
       0,  1687,     0,     0,   969,     0,     0,     0,     0,     0,
       0,     0,   345,   346,   347,     0,   348,  2138,     0,     0,
     272,  2809,     0,     0,     0,  1819,  1571,     0,     0,     0,
    2580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1482,     0,     0,     0,  2171,     0,     0,     0,
       0,     0,     0,     0,     0,  1600,     0,     0,   406,   407,
       0,     0,     0,   536,     0,     0,  1508,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1926,
       0,     0,  1953,  1189,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   367,   368,   227,     0,     0,   228,   229,
     230,   231,   232,   233,  1030,     0,     0,     0,  2219,     0,
     973,     0,     0,     0,     0,     0,   345,   346,   347,     0,
     348,     0,  2449,  2142,   272,     0,     0,   537,     0,   539,
       0,     0,     0,     0,     0,     0,  1827,     0,     0,  1205,
       0,     0,     0,     0,     0,     0,   540,     0,  2055,   541,
       0,  2478,  2175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,   407,     0,     0,     0,     0,     0,     0,
       0,     0,  1823,     0,     0,     0,     0,  2079,     0,     0,
       0,  2460,     0,     0,  2489,     0,     0,     0,     0,     0,
       0,     0,     0,  2137,     0,     0,  2170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2762,     0,     0,     0,
    1034,     0,     0,     0,  2223,  2542,     0,     0,     0,  2773,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   737,
       0,     0,     0,     0,     0,     0,     0,  2798,     0,     0,
       0,     0,     0,  1935,     0,  2549,  2573,   764,     0,     0,
       0,     0,     0,     0,     0,  2809,     0,     0,     0,  1202,
       0,     0,     0,     0,     0,     0,     0,  1354,  2218,     0,
    1961,     0,     0,     0,     0,  1820,     0,     0,     0,     0,
       0,  2580,     0,     0,     0,  1930,     0,     0,     0,     0,
       0,     0,     0,  1375,     0,     0,  1189,   204,   205,   206,
     207,   208,   209,   210,   211,   212,     0,  1957,   227,     0,
       0,   228,   229,   230,     0,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   815,   345,
     346,   347,     0,   348,     0,     0,     0,   272,  1189,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,     0,
     227,     0,     0,   228,   229,   230,     0,   232,   233,     0,
       0,     0,     0,     0,     0,  1484,     0,     0,  2458,     0,
    2060,   345,   346,   347,     0,   348,     0,     0,     0,     0,
       0,  1824,  1927,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2487,     0,  2084,     0,     0,  2449,     0,     0,
    2478,     0,     0,     0,  2773,     0,  1350,  2809,     0,  1954,
       0,     0,     0,     0,     0,     0,  1510,     0,  1481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1372,     0,     0,  2762,     0,     0,     0,     0,
       0,     0,  1507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2146,     0,     0,     0,     0,     0,
       0,  2542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2798,     0,     0,     0,     0,     0,  1575,     0,     0,
       0,     0,     0,     0,     0,     0,   972,  2179,  1931,     0,
       0,     0,     0,     0,     0,     0,     0,  2573,     0,  2141,
       0,     0,     0,     0,  1478,     0,     0,  2450,     0,  2056,
    1604,     0,  1631,     0,     0,  1958,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2547,     0,  2578,  2174,     0,
       0,  2479,     0,  2080,     0,     0,  2226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1504,     0,     0,     0,  1687,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   384,     0,     0,     0,     0,   413,     0,     0,
       0,     0,   500,     0,     0,     0,  1033,     0,     0,     0,
    2222,     0,     0,  2138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   621,     0,   642,   661,   678,   692,
    1482,   707,     0,  2454,     0,     0,  1571,     0,     0,     0,
    2762,     0,     0,  2798,     0,     0,  2171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1600,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1508,     0,     0,  2543,     0,  2574,  1827,     0,     0,
       0,     0,     0,     0,     0,  2219,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1935,     0,     0,  1961,     0,     0,     0,     0,     0,
       0,     0,  2175,     0,     0,     0,     0,     0,     0,     0,
       0,  1205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1823,     0,     0,
       0,     0,     0,     0,  2458,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2223,   384,     0,     0,     0,     0,     0,     0,     0,
    2060,     0,     0,  2487,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1820,     0,     0,     0,
     896,     0,     0,   912,   926,     0,     0,     0,   413,  2084,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2146,     0,     0,  2179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2771,     0,
       0,     0,     0,     0,     0,     0,     0,  2547,     0,     0,
    1927,     0,     0,  1954,  1930,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2807,
       0,     0,     0,     0,     0,     0,     0,     0,  2578,     0,
       0,  1957,   964,     0,     0,     0,     0,     0,   500,     0,
       0,     0,     0,  2450,     0,     0,   887,     0,     0,     0,
    2226,     0,  1824,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2056,
       0,     0,  2479,     0,     0,  1006,     0,     0,     0,  1056,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2080,     0,
       0,     0,     0,     0,     0,     0,  1931,     0,     0,  1958,
       0,     0,     0,     0,  2138,     0,     0,  2171,     0,     0,
       0,     0,     0,     0,     0,     0,  1481,  2763,   958,  2453,
       0,     0,     0,     0,   494,     0,  2543,     0,     0,  1145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2454,
       0,     0,     0,  2482,     0,     0,     0,     0,  2799,     0,
       0,     0,     0,  1196,     0,   621,     0,  2574,     0,     0,
       0,   993,  1015,     0,     0,  1043,     0,  1507,  2483,  2458,
       0,     0,  2487,     0,  1196,     0,   642,     0,   545,  2219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   661,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2141,     0,  2771,     0,     0,
    2142,     0,   678,  2175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2767,     0,  1132,   692,     0,     0,     0,
       0,     0,     0,  2547,     0,     0,     0,     0,  2174,  1239,
       0,   707,     0,  2807,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2578,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2223,     0,  2222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2450,     0,
       0,  2479,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,     0,     0,
       0,   417,     0,     0,     0,     0,   506,     0,     0,     0,
    1344,     0,  1366,     0,     0,     0,  2763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   633,     0,
     653,   670,   684,   697,     0,   712,     0,     0,     0,     0,
       0,     0,  2543,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2799,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2771,     0,     0,  2807,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2574,     0,
       0,     0,     0,     0,  2454,   384,     0,  2483,  1823,     0,
       0,     0,  1473,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   896,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1499,     0,   912,     0,     0,
       0,     0,  2767,     0,     0,     0,     0,     0,     0,     0,
       0,   926,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1930,     0,     0,  1957,     0,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2803,     0,
       0,     0,   964,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2453,     0,     0,  1464,     0,
     500,     0,     0,     0,     0,     0,     0,  1565,   887,  1594,
    1622,  2763,     0,     0,  2799,     0,   388,     0,     0,     0,
    1006,     0,     0,     0,  2482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   902,     0,     0,   919,   934,     0,
       0,     0,   417,     0,     0,     0,     0,     0,     0,     0,
    1656,  1679,     0,     0,     0,     0,  2141,     0,   958,  2174,
    1056,     0,     0,     0,     0,     0,     0,     0,     0,  2766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   494,     0,     0,     0,
       0,     0,     0,  1552,     0,  1581,  1609,     0,     0,     0,
    2802,     0,     0,     0,     0,     0,   993,  2767,     0,     0,
    2803,     0,     0,     0,     0,     0,   976,     0,     0,     0,
       0,     0,   506,     0,     0,     0,     0,     0,  1015,     0,
       0,  2222,     0,     0,     0,     0,     0,     0,     0,     0,
    1764,     0,     0,     0,     0,     0,  1643,  1666,     0,  1145,
       0,     0,     0,     0,     0,     0,  1043,     0,     0,  1012,
       0,     0,     0,  1061,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1196,     0,   545,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   621,  1150,     0,   642,     0,   661,     0,   678,
       0,   692,     0,  1814,     0,     0,  1751,     0,     0,     0,
       0,     0,     0,  1239,     0,  1132,     0,  1211,     0,   633,
       0,     0,     0,     0,     0,     0,     0,     0,   707,     0,
    2453,     0,     0,  2482,     0,     0,     0,     0,  1211,     0,
     653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   670,
       0,     0,     0,     0,     0,     0,     0,     0,  2766,     0,
       0,     0,     0,     0,     0,     0,   684,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     697,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1247,  2802,   712,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1921,     0,  1344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1948,     0,
    1366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1357,     0,  1378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1473,
       0,     0,     0,  2766,     0,     0,  2802,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   896,     0,     0,  2050,
       0,  2074,     0,  1499,     0,     0,     0,     0,     0,   388,
       0,     0,     0,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,     0,   912,     0,   926,   902,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1512,
       0,   919,     0,     0,     0,     0,     0,   964,     0,     0,
       0,     0,     0,     0,     0,   934,     0,     0,     0,     0,
    2132,     0,     0,     0,     0,     0,     0,     0,     0,  1565,
       0,   417,     0,     0,     0,  1464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   976,     0,     0,  2165,
       0,     0,   887,     0,     0,     0,   558,     0,  1594,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   630,
       0,     0,     0,     0,   506,     0,     0,     0,     0,     0,
       0,  1578,     0,  1607,  1632,     0,  1622,     0,     0,     0,
       0,     0,     0,     0,  1012,     0,     0,     0,     0,     0,
     741,     0,     0,   958,  1006,     0,     0,     0,     0,     0,
       0,  2214,     0,     0,     0,     0,  2119,     0,     0,     0,
    1656,     0,     0,     0,     0,  1552,     0,     0,     0,     0,
       0,     0,     0,     0,  1664,  1688,     0,     0,     0,     0,
       0,     0,     0,  1679,  1061,  2152,     0,     0,     0,     0,
       0,     0,     0,     0,  1581,     0,     0,     0,     0,  1056,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     993,     0,     0,  1015,     0,     0,     0,  2201,     0,     0,
       0,     0,     0,     0,     0,     0,  1643,     0,     0,     0,
       0,     0,     0,     0,  1773,     0,     0,     0,  1764,     0,
       0,     0,     0,  1150,     0,     0,     0,     0,     0,  1666,
       0,     0,     0,     0,     0,  1145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1043,     0,     0,     0,     0,
       0,     0,  1196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1814,     0,
       0,     0,     0,     0,  1211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1239,     0,     0,     0,     0,     0,   633,     0,     0,   653,
       0,   670,     0,   684,     0,   697,     0,  1828,     0,     0,
       0,     0,     0,     0,  1751,     0,     0,  1247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1132,   712,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1921,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1011,  1036,     0,     0,  1060,     0,     0,     0,  1089,  1344,
       0,     0,  1948,     0,     0,     0,     0,   558,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1938,     0,  1357,     0,     0,  1366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1964,     0,  1378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   546,   562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     630,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1473,     0,     0,
    2444,     0,  2050,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2473,     0,  2074,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1499,     0,
       0,     0,     0,  1485,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1246,     0,     0,     0,     0,     0,
     902,     0,     0,  2063,     0,  2087,     0,  1512,     0,     0,
       0,     0,     0,     0,     0,     0,  2132,     0,     0,     0,
       0,   741,     0,  1464,     0,     0,     0,   919,     0,   934,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1565,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2165,
       0,   976,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2148,     0,     0,     0,     0,     0,
       0,     0,  1594,  1578,  1622,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2537,     0,  2568,
       0,     0,     0,  2181,     0,  1353,     0,     0,  2214,     0,
       0,     0,  1607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2119,   619,     0,   640,   659,   676,   690,  1656,
     705,  1679,     0,     0,     0,     0,     0,     0,     0,     0,
    1632,     0,     0,     0,     0,  1552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2152,     0,     0,  1012,     0,
       0,     0,     0,     0,     0,  2228,     0,     0,     0,     0,
       0,     0,     0,     0,  1664,     0,     0,     0,  1581,     0,
    1609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2522,     0,  2553,     0,  1688,     0,     0,
       0,     0,     0,     0,  2201,     0,     0,     0,     0,     0,
       0,     0,     0,  1061,     0,  1764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1643,     0,  1666,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1814,
       0,     0,     0,     0,     0,  1523,     0,  1525,  1531,  1533,
       0,   994,  1016,     0,     0,  1044,     0,     0,     0,  1084,
       0,     0,     0,     0,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1773,     0,     0,   562,     0,     0,     0,     0,
       0,     0,  1574,  1921,  1603,  1630,  1948,     0,     0,  1150,
       0,     0,     0,     0,     0,  1011,     0,     0,     0,     0,
       0,  1751,     0,     0,     0,  1133,  1211,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,     0,     0,
       0,     0,  1828,     0,     0,     0,  2444,     0,     0,     0,
       0,     0,     0,     0,     0,  1662,  1686,     0,     0,     0,
       0,     0,     0,     0,  1247,  1060,     0,     0,     0,     0,
       0,     0,  2050,     0,     0,  2473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1705,  1714,
       0,     0,     0,     0,  1089,     0,     0,     0,     0,     0,
       0,  2074,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   558,     0,     0,     0,     0,     0,  2132,     0,     0,
    2165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2757,     0,     0,     0,     0,     0,     0,     0,     0,  2537,
       0,     0,     0,     0,     0,  1771,     0,     0,     0,  1938,
       0,     0,     0,     0,  1149,     0,     0,     0,     0,     0,
       0,  2793,     0,     0,  1004,     0,     0,     0,     0,     0,
    2568,     0,     0,  1357,     0,     0,  1964,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2214,     0,     0,     0,     0,     0,     0,  1378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2119,     0,     0,  2152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2742,   630,     0,     0,
       0,     0,     0,     0,     0,  2522,     0,     0,  1826,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1246,     0,
       0,     0,  1194,     0,   619,     0,     0,  2778,     0,     0,
       0,     0,     0,     0,     0,     0,  2553,     0,     0,     0,
       0,  1485,     0,  1194,  2461,   640,  2063,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2201,     0,
       0,     0,     0,     0,   659,   741,     0,     0,  2490,     0,
    2087,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   676,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2444,  1512,     0,  2473,   690,   620,     0,   641,   660,
     677,   691,     0,   706,     0,     0,     0,     0,  1237,     0,
     705,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1934,     0,  1353,     0,     0,     0,     0,     0,  2757,
    2148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1578,     0,  2537,     0,     0,     0,     0,
       0,     0,     0,  2181,     0,  2793,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1607,     0,  1632,     0,
       0,  2568,     0,  1553,     0,  1582,  1610,     0,     0,     0,
       0,  2550,     0,  2581,     0,     0,   994,     0,     0,  1342,
       0,  1364,  2228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2742,     0,     0,  1016,     0,
       0,     0,     0,  1664,     0,  1688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1644,  1667,     0,     0,
       0,  2522,     0,     0,     0,     0,  1044,     0,     0,     0,
       0,  2778,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2059,     0,  2083,     0,     0,  1701,
    1710,     0,     0,     0,     0,  1084,     0,  2553,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   546,     0,   562,  2096,     0,     0,     0,     0,
       0,     0,  1531,     0,  2757,     0,     0,  2793,     0,  1773,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2145,  1752,     0,     0,     0,
       0,     0,     0,  1828,  1574,  1133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2178,     0,     0,     0,     0,     0,
       0,     0,     0,  1603,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1563,  1938,  1592,  1620,
    1964,  1630,     0,     0,     0,     0,     0,     0,     0,  1004,
    2742,     0,     0,  2778,     0,     0,     0,     0,     0,  1011,
       0,     0,  1036,     0,     0,     0,  2225,  1005,     0,     0,
       0,     0,     0,     0,     0,  1662,     0,     0,     0,     0,
    2461,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1686,     0,
       0,     0,     0,     0,     0,     0,  2063,     0,     0,  2490,
       0,     0,     0,     0,  1060,     0,     0,     0,     0,     0,
       0,     0,     0,  1705,     0,     0,     0,     0,     0,     0,
       0,     0,  1714,     0,     0,  2087,     0,     0,     0,     0,
       0,     0,  1089,     0,     0,     0,     0,     0,     0,     0,
       0,  2148,     0,     0,  2181,  1195,     0,   620,     0,     0,
       0,     0,     0,     0,  2774,     0,     0,     0,     0,     0,
       0,     0,     0,  2550,     0,     0,  1195,     0,   641,     0,
       0,     0,     0,  1771,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2810,     0,   660,     0,     0,
    1149,     0,     0,     0,  2581,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2228,     0,   691,     0,
       0,     0,     0,  1826,     0,     0,     0,     0,     0,  1194,
       0,  1238,     0,   706,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1246,     0,     0,     0,     0,
       0,   619,     0,     0,   640,     0,   659,     0,   676,     0,
     690,     0,  1812,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   705,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1934,     0,  1343,     0,  1365,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2461,     0,     0,  2490,     0,
       0,     0,     0,     0,  1353,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1919,     0,  1342,     0,     0,
       0,     0,     0,  2774,     0,     0,  2120,     0,     0,     0,
       0,     0,     0,     0,     0,  1553,     0,  1946,     0,  1364,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2550,
       0,     0,     0,     0,     0,  2153,     0,     0,     0,  2810,
       0,     0,     0,     0,  1582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2581,     0,     0,     0,     0,
       0,     0,  1610,     0,     0,  2457,   819,  2059,     0,     0,
     622,     0,   643,   662,   679,   693,     0,   708,     0,     0,
     994,     0,     0,  1016,     0,     0,     0,  2202,     0,  2486,
       0,  2083,     0,     0,     0,     0,  1644,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1667,
       0,     0,  1531,     0,     0,     0,     0,     0,     0,  1564,
       0,  1593,  1621,     0,     0,  1044,     0,     0,  2046,     0,
    2070,     0,  1005,     0,  1701,     0,     0,     0,     0,     0,
       0,  2145,     0,  1710,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1084,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1574,     0,     0,     0,  2774,     0,
       0,  2810,     0,     0,  2178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2130,
     918,     0,     0,     0,  1752,     0,     0,  1603,  1563,  1630,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1133,  2546,     0,  2577,     0,     0,     0,  2163,     0,
       0,     0,     0,  2225,     0,     0,     0,  1592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1662,     0,  1686,     0,     0,     0,
       0,     0,     0,     0,     0,  1620,  1705,     0,     0,  1714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1004,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1195,     0,     0,     0,     0,     0,     0,     0,
    1771,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   620,     0,     0,   641,     0,   660,
       0,   677,     0,   691,  1826,  1813,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,     0,     0,  1130,     0,     0,     0,     0,     0,     0,
     706,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1007,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1934,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   995,  1017,     0,     0,  1045,  1069,     0,
       0,  1194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1812,     0,     0,
       0,  2457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1920,  1237,
    1343,     0,     0,     0,     0,     0,     0,  2059,     0,  1197,
    2486,   622,     0,     0,     0,     0,     0,  1134,     0,     0,
    1947,     0,  1365,     0,     0,     0,     0,     0,     0,     0,
    1197,     0,   643,     0,     0,     0,  2083,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   662,  2145,     0,     0,  2178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2770,     0,     0,   679,     0,
       0,     0,     0,     0,  2546,     0,     0,     0,     0,     0,
       0,     0,   693,     0,  1919,     0,     0,     0,     0,     0,
       0,     0,  2120,     0,     0,  1240,  2806,   708,     0,     0,
       0,     0,     0,     0,     0,  2577,     0,     0,  1342,     0,
       0,  1946,     0,     0,     0,  1553,     0,  1355,     0,  1376,
       0,   819,     0,     0,     0,  2153,     0,  2225,     0,     0,
       0,     0,     0,     0,  1364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1582,     0,
    1610,  2049,     0,  2073,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2523,     0,  2554,     0,     0,     0,     0,
       0,     0,     0,     0,  2202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1644,  1345,  1667,  1367,     0,
       0,     0,     0,     0,     0,     0,     0,  1701,     0,  2440,
    1710,  2046,  2131,     0,     0,     0,     0,     0,     0,     0,
       0,  1564,  1511,     0,   918,     0,     0,     0,     0,     0,
       0,     0,     0,  2469,     0,  2070,     0,     0,     0,     0,
       0,  2164,     0,     0,     0,     0,     0,     0,     0,     0,
    1593,     0,     0,     0,     0,     0,  2457,     0,     0,  2486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1621,     0,
       0,  1752,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2770,  2130,  1005,     0,     0,     0,
       0,     0,     0,     0,  1576,     0,  1605,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1563,     0,
    2546,     0,     0,     0,     0,     0,     0,     0,  2163,     0,
    2806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1592,     0,  1620,     0,     0,  2577,  1663,     0,     0,
       0,     0,     0,     0,     0,     0,  2533,     0,  2564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1566,     0,  1595,  1623,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1007,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1554,     0,  1583,  1611,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   995,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1130,
       0,     0,     0,     0,     0,     0,     0,  1772,     0,     0,
    1017,     0,     0,     0,  1195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1645,  1668,
    1813,     0,     0,  2120,     0,     0,  2153,     0,  1045,  2770,
       0,     0,  2806,     0,     0,     0,  2743,     0,     0,     0,
       0,     0,  1238,     0,  1069,  2523,     0,     0,     0,     0,
       0,  1702,  1711,     0,     0,     0,     0,     0,  1812,     0,
       0,     0,     0,     0,     0,     0,     0,  2779,     0,     0,
       0,     0,     0,     0,     0,     0,  2554,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   996,  1018,
       0,     0,  1046,     0,     0,     0,     0,     0,  2202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1753,     0,
       0,     0,  1919,     0,     0,  1946,     0,  1134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1920,     0,     0,
       0,     0,     0,     0,     0,     0,  1197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1343,  1135,     0,  1947,  2440,     0,     0,   622,     0,
       0,   643,     0,   662,     0,   679,     0,   693,     0,  1815,
       0,     0,     0,     0,     0,     0,     0,  1365,     0,  1240,
       0,  2046,     0,     0,  2469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   708,     0,     0,     0,     0,     0,
       0,     0,     0,  1936,     0,  1355,     0,     0,     0,     0,
    2070,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1962,  2130,  1376,     0,  2163,
       0,     0,     0,     0,     0,     0,   997,  1019,     0,  2753,
    1047,     0,     0,     0,     0,     0,   819,     0,  2533,     0,
       0,     0,  2443,     0,  2049,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2743,     0,     0,     0,     0,
    2789,     0,     0,     0,     0,     0,  2472,     0,  2073,  2564,
       0,     0,  1922,     0,  1345,     0,     0,     0,     0,     0,
       0,  2523,     0,     0,     0,     0,     0,     0,     0,     0,
    1136,  2779,     0,     0,  1949,     0,  1367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2554,     0,   998,
    1020,     0,     0,  1048,     0,     0,     0,     0,  2131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2061,     0,  2085,     0,
    1511,  1564,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2164,     0,     0,     0,     0,     0,     0,     0,     0,
     918,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1137,  1593,     0,  1621,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2536,
       0,  2567,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1576,     0,     0,     0,
    2440,     0,     0,  2469,     0,  2051,     0,  2075,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2743,     0,     0,  2779,     0,  1605,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2753,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2533,     0,  2133,     0,     0,     0,
       0,     0,     0,     0,  2789,  1566,     0,     0,  2227,     0,
       0,     0,     0,     0,     0,     0,     0,  1663,     0,     0,
       0,     0,     0,     0,     0,  2166,     0,     0,  2121,     0,
    2564,     0,     0,     0,  1595,     0,     0,  1554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1555,  1813,  1584,  1612,     0,     0,     0,  2154,     0,     0,
       0,     0,  1623,   996,     0,     0,  1583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1007,     0,     0,     0,     0,  1018,     0,     0,     0,     0,
       0,     0,     0,     0,  1611,     0,     0,     0,     0,     0,
       0,     0,     0,  1646,  1669,  1920,     0,     0,  1947,     0,
       0,     0,   995,  1046,  1130,  1017,     0,     0,     0,  2203,
       0,     0,     0,     0,     0,  1772,     0,     0,  1645,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2443,     0,
       0,  1668,     0,  2753,     0,     0,  2789,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1045,     0,     0,
       0,     0,  1069,     0,  2049,     0,  1702,  2472,     0,     0,
       0,     0,     0,     0,     0,  1711,     0,     0,     0,     0,
       0,     0,     0,  1754,     0,     0,     0,     0,  1556,     0,
    1585,  1613,  1135,  2073,     0,     0,     0,     0,     0,     0,
       0,   997,     0,     0,     0,     0,     0,     0,     0,  2131,
       0,     0,  2164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2756,  1019,     0,     0,  1753,     0,  1197,     0,
       0,  2536,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1647,  1670,  1134,  1815,     0,     0,     0,     0,     0,
       0,  1047,     0,  2792,     0,     0,     0,     0,     0,     0,
       0,     0,  2567,     0,     0,     0,  1240,     0,     0,     0,
       0,     0,  1936,     0,     0,     0,     0,     0,     0,     0,
       0,  1557,     0,  1586,  1614,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   998,     0,  1355,     0,     0,  1962,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1020,     0,     0,     0,
       0,     0,  1376,     0,     0,     0,     0,     0,     0,     0,
       0,  1755,     0,     0,  1648,  1671,     0,     0,     0,     0,
    1136,     0,     0,     0,  1048,     0,     0,     0,     0,     0,
       0,  1922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1345,     0,     0,  1949,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2459,     0,  2061,
       0,  1367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2443,     0,     0,  2472,     0,     0,     0,
       0,  2488,     0,  2085,  1756,     0,     0,     0,     0,     0,
       0,     0,     0,  1137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1511,     0,     0,     0,     0,
       0,  2756,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2445,  2536,  2051,     0,
       0,     0,     0,     0,     0,     0,     0,  2792,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2474,     0,  2075,     0,     0,     0,  1576,     0,     0,     0,
       0,     0,     0,  2567,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2548,     0,  2579,     0,     0,     0,
       0,     0,  2133,     0,     0,  2227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1566,  1663,     0,     0,     0,
       0,     0,     0,     0,  2121,  2166,     0,     0,     0,     0,
       0,     0,     0,  2122,     0,     0,     0,     0,     0,     0,
       0,     0,  1555,     0,     0,     0,     0,  1554,  1595,     0,
    1623,     0,     0,     0,     0,     0,     0,  2154,     0,     0,
       0,     0,  2155,  2538,     0,  2569,  2756,     0,     0,  2792,
       0,  1584,     0,     0,     0,     0,     0,     0,     0,     0,
    1583,     0,  1611,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2524,     0,  2555,     0,  1612,
       0,     0,  1772,     0,     0,     0,  2203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   996,     0,     0,
    1018,     0,     0,     0,  2204,     0,     0,  1645,     0,  1668,
       0,     0,     0,  1646,     0,     0,     0,     0,     0,  1702,
       0,     0,  1711,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1046,     0,     0,     0,     0,     0,     0,     0,
    1936,  2123,     0,  1962,     0,     0,     0,     0,     0,     0,
    1556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1815,     0,     0,     0,     0,
    2156,     0,     0,  1753,     0,     0,     0,     0,     0,  1585,
       0,     0,     0,  2459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1754,     0,     0,     0,     0,     0,  1613,     0,  2061,
       0,     0,  2488,     0,     0,     0,     0,     0,  1135,  1922,
       0,     0,  1949,     0,     0,   997,     0,     0,  1019,     0,
       0,     0,  2205,     0,  2124,     0,     0,     0,  2085,     0,
       0,  1647,     0,  1557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2445,  2157,  1670,     0,     0,  2772,     0,     0,
       0,     0,  1586,     0,     0,     0,  2548,     0,     0,     0,
    1047,     0,     0,     0,     0,     0,     0,     0,  2051,     0,
       0,  2474,     0,     0,     0,     0,     0,     0,  2808,     0,
    1614,     0,     0,     0,     0,     0,     0,  2579,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2075,   998,     0,
       0,  1020,     0,     0,     0,  2206,     0,     0,     0,  2227,
       0,     0,     0,  2133,  1648,     0,  2166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2758,     0,     0,  1755,
       0,     0,     0,     0,     0,  2538,     0,  1671,     0,     0,
       0,     0,     0,     0,     0,  2121,  1136,     0,  2154,     0,
       0,     0,     0,  1048,     0,     0,     0,  2794,  2744,     0,
       0,     0,     0,     0,     0,     0,  2569,  2524,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2780,
       0,     0,     0,     0,     0,     0,     0,     0,  2555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2203,     0,  1756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2459,  1137,
       0,  2488,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2772,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2548,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2808,     0,     0,     0,     0,  2445,     0,     0,
    2474,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2579,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2122,
       0,     0,     0,     0,     0,  2758,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1555,     0,     0,     0,     0,     0,     0,     0,
       0,  2538,  2155,     0,     0,     0,     0,  2744,     0,     0,
       0,  2794,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1584,     0,  1612,     0,     0,
       0,     0,     0,  2524,     0,     0,     0,  2569,     0,     0,
    2525,     0,  2556,  2780,     0,     0,     0,     0,     0,     0,
       0,  2204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2555,
       0,     0,  1646,     0,  1669,     0,     0,     0,     0,     0,
       0,  2772,     0,     0,  2808,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2156,     0,     0,     0,     0,     0,     0,     0,  1754,     0,
    2758,     0,     0,  2794,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1585,     0,  1613,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2526,     0,
    2557,     0,  2744,     0,     0,  2780,     0,     0,     0,  2205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1647,     0,  1670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1586,     0,  1614,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2527,     0,  2558,     0,     0,     0,     0,     0,     0,
       0,     0,  2206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1755,     0,     0,     0,
       0,     0,     0,  1648,     0,  1671,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2122,     0,     0,  2155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2745,     0,     0,     0,     0,     0,     0,
       0,     0,  2525,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2781,     0,     0,     0,     0,  1756,
       0,     0,     0,  2556,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2123,     0,
       0,  2156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2746,     0,     0,     0,     0,     0,     0,     0,     0,
    2526,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2782,     0,     0,     0,     0,     0,     0,     0,
       0,  2557,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2124,  2745,     0,  2157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2747,     0,     0,     0,     0,     0,
       0,     0,     0,  2527,     0,     0,     0,     0,  2525,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2781,     0,
       0,     0,     0,     0,     0,  2783,     0,     0,     0,     0,
       0,     0,     0,     0,  2558,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2746,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2526,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2782,  2745,     0,     0,
    2781,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2747,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2527,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2783,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2558,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2746,     0,     0,  2782,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2747,     0,
       0,  2783
};

static const yytype_int16 yycheck[] =
{
     140,   170,   142,   170,   170,   170,   170,   170,   170,  1732,
     170,   151,   152,   401,   154,   155,   592,   883,   404,   534,
    1386,  1786,   162,   163,   592,  1580,   602,   185,   168,   185,
    1642,  1990,   173,   173,   155,   603,  1080,  1051,  1067,   401,
    2298,  1116,   182,  1118,  1140,   173,   908,  1001,  1166,  1361,
     226,   616,   162,  1155,  1123,   195,  1191,   197,   198,   199,
     200,  1305,   202,  1234,   401,   922,   591,   592,   600,  1339,
     591,   592,   248,  1528,  1617,   401,   612,  1023,  1651,  1470,
    1674,   543,   727,  1759,   274,   173,   226,  1494,   530,  1699,
    1589,   198,   591,   592,   270,   235,  1337,   795,   591,   592,
     988,   312,   990,   991,   250,   893,   395,  1560,   248,   350,
     250,   637,   338,   591,   592,   953,   226,   329,  1359,   173,
    1943,   483,   394,   489,  1916,  2067,   515,  2127,   805,   858,
     270,  2160,  2043,  2209,   274,  2374,  2437,  2561,   248,  2530,
    2466,     4,   656,    23,    33,   285,   483,    72,   590,     4,
    1784,  1785,  1786,     4,  1788,    37,    14,   483,   702,    33,
     270,   195,   302,   197,   198,   199,   200,   673,   202,   285,
     560,   754,   312,   781,     4,  1708,  1809,   409,    33,   302,
       4,     4,    33,    23,   687,    25,    26,    27,    28,     4,
      30,   312,    32,     4,   235,    35,  2750,    25,    38,    32,
      40,   587,    42,    33,    33,    44,   149,    33,    36,    33,
     350,   214,    32,    34,   193,   189,    56,    57,    58,   373,
      60,    33,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   138,   373,    35,   165,    33,    38,    39,    40,
     350,    42,    43,     4,   142,  2786,   109,    33,   111,   112,
      41,   138,    59,    41,   165,   138,   119,   120,   121,   233,
     401,   401,    69,    64,   404,   405,    30,    23,   247,   409,
      26,    27,    33,   401,    30,    30,    32,    68,    19,    35,
      68,    22,    38,    39,    40,    41,    42,    43,   165,    30,
     233,     4,    33,    23,   134,   135,   136,   137,   405,   139,
      56,    57,    58,   233,    60,    52,    53,    54,   233,   220,
     150,   151,   152,   401,   165,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   149,   149,    35,    25,   218,
       5,     6,    40,    41,     9,   233,   165,   149,   700,    36,
     101,   247,   483,   483,   218,    26,    27,   401,   489,   489,
     165,    32,   138,    26,    35,   483,   233,    30,   247,    40,
     247,   489,    35,   700,   247,   247,  2624,    40,  2626,    42,
     233,     8,     9,   483,   700,   233,   256,   107,   233,     8,
     188,  2935,   233,    64,   247,  2776,   526,   527,  2812,  2715,
     530,   248,    65,   250,   233,   483,   109,  2938,   111,   112,
       8,   489,   235,   543,   233,   166,   119,   120,   121,   233,
     233,  2712,   233,   165,   247,   235,   256,   527,   233,   247,
     578,   233,   233,   579,   165,   233,   134,   135,   136,   483,
    2981,   139,   218,   163,   164,   489,   233,    33,   193,  2678,
     247,   161,   150,   151,   152,     6,    75,   587,     9,   138,
     590,  2410,   248,   247,   250,   256,   250,   221,   222,   223,
     224,   225,   226,   193,   228,   256,   221,   222,   223,   224,
     225,   226,     4,   228,   614,  3026,   616,   165,    17,   220,
     149,   233,  2511,   247,     4,   165,   233,   207,   208,   160,
     161,   162,   247,   101,     4,   635,   185,   637,    18,     7,
     256,    33,   169,   170,   614,   893,    33,  2583,  2508,    26,
      27,     0,    73,    30,    75,    32,   656,   247,    35,    33,
     233,   883,   908,    33,    41,   635,    26,    27,   217,   249,
      30,   893,    32,   673,   213,    35,   207,   208,    38,    39,
      40,    41,    42,    43,   185,   233,   883,   687,   256,   656,
    2492,   727,  2463,   233,    33,  2320,   893,   883,   166,   700,
     700,   213,   702,  1131,     4,  1080,   233,   893,   247,   210,
     211,   212,   700,   149,  2397,   256,   247,   185,   754,    26,
      27,   101,   616,   256,     4,    32,  2844,   727,  2846,     4,
    1166,   953,   881,    33,    41,   247,   985,  2209,  1166,  1041,
    1042,   249,  2394,   637,  1470,  2160,   247,   879,    33,  1051,
      59,   751,   700,    33,   754,   981,   953,   727,    33,   249,
      69,    68,   656,   834,   850,   771,   867,   953,   840,   805,
    1155,   771,  2242,   823,  1155,  1097,  1281,  1335,  2232,   673,
    2316,  1166,  2185,  2098,   754,  1166,   700,  2038,  1213,  1181,
    1894,  1187,  1514,   687,  1966,  1041,  1155,  2230,  1793,  1516,
    1831,   801,  1155,   803,  1782,   805,  1695,  1166,   702,  1744,
    1940,  1746,  1560,  1166,  1718,  1916,  1690,  1155,  1780,  1748,
    1776,  1635,  2089,   823,  2183,  2319,  2320,   827,  1166,  1131,
    1216,   831,  1638,  1422,   834,   805,  2954,  2150,  1140,  1487,
    1538,  1589,  1943,  1380,  1218,  1249,   938,  2340,   831,  1099,
     751,   827,  2245,   834,  1220,  2349,  1299,  1325,  2677,  1222,
    2354,   724,   876,   160,   161,   162,    23,   867,   186,  1617,
     906,   249,    19,   191,   192,     4,   876,  1123,   247,   256,
     213,   250,   883,   883,   249,  1131,    33,   105,   106,   107,
     108,     6,   893,   893,     9,   883,   256,   867,    26,    27,
      28,   140,    23,   142,    33,   893,   906,   801,   908,   803,
     207,   208,   151,   883,   247,   154,   155,   166,   157,    23,
      41,   166,   922,   249,   163,   249,   160,   161,   162,   168,
      23,   249,    45,    46,   173,   883,   906,    41,   938,   138,
    2041,   185,    55,   182,    23,   893,    74,   138,    41,   256,
     107,   247,   953,   953,   250,   922,   195,    33,   197,   198,
     199,   200,    41,   202,  2065,   953,   210,   211,   212,   883,
     249,   186,   185,   207,   208,   247,   191,   192,   250,   893,
     981,   981,   247,   953,    33,   250,   107,   226,   988,   186,
     990,   991,   249,   981,   191,   192,   235,   210,   211,   212,
     213,  1001,  1224,   107,    33,   953,   163,   164,   249,   248,
     233,   250,  1234,   247,   107,   145,  2641,   138,   148,     4,
       5,     6,   247,  1023,   991,   250,    11,  1224,   107,   247,
      15,   270,   250,   981,   138,   274,   193,  1234,  1224,   953,
     249,  1041,  1042,  2626,   247,   138,   247,   250,  1234,   250,
     247,  1051,   233,  1023,   249,    25,    26,    27,    28,   138,
      30,   249,    32,   302,    30,   186,   187,   981,   105,   106,
     107,   108,   191,   312,   249,  1042,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     5,     6,    35,   193,
     329,   247,    33,    40,   250,    42,  2511,  1097,  1116,   249,
     193,   249,  1118,    26,    27,   247,  2521,    30,   250,    32,
      23,  2583,    35,   249,   193,    38,    39,    40,    65,    42,
      43,    26,    27,  1123,    66,    67,   247,    32,    41,  2355,
     233,  1131,   102,   103,   373,   247,    41,  2552,   250,   247,
    1140,   233,   250,   247,  2638,   142,   143,  2641,   145,   146,
     147,   148,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   401,    68,    35,   404,   405,    38,    39,    40,
     409,    42,    43,   181,   182,   183,   184,  2403,   155,   156,
     157,   158,   159,     5,     6,    56,    57,    58,   249,    60,
     249,  1191,   249,    64,   107,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   247,   247,    35,   250,   250,
      38,    39,    40,  1213,    42,    43,  1216,   249,  1218,   249,
    1220,  1191,  1222,  1224,  1224,   138,   203,   193,    56,    57,
      58,   249,    60,  1234,  1234,   247,  1224,   233,   250,  1487,
     105,   106,   107,   108,   483,  1281,  1234,    38,  1470,  1249,
     489,  1218,     8,     9,  1224,   221,   222,   223,   224,   225,
     226,  2844,   228,  1299,    33,  1487,    57,    58,  1514,   249,
      61,    62,    63,  1470,   249,   247,  1224,   247,   250,   247,
     193,  1281,   250,    38,  1470,   249,  1234,   526,   527,   247,
    1487,   530,   250,  2394,     5,     6,  2397,   249,     9,  1299,
      11,  1487,    57,    58,   543,   249,    61,    62,    63,   256,
    1224,  1281,  2038,    30,   247,   247,  1538,   250,   250,  1213,
    1234,   249,  1216,    33,  1218,   249,  1220,   247,  1222,  1299,
     250,  1759,   249,   256,   247,  2750,  2437,  1337,   249,  1339,
     233,  1538,   221,  1718,  1380,   223,  1782,   247,   587,  1651,
     250,   590,  1538,    30,  1782,  1249,   160,   161,   162,  1359,
     249,  1361,    73,    23,    75,  2466,   247,  1337,   219,   250,
    2864,  2786,  1674,   249,  2309,   614,  2311,   616,    26,    27,
    1380,    41,   247,   248,    32,   256,   249,    35,  1690,  1359,
     249,   247,    40,   185,   250,  1780,   635,  1782,   637,  1780,
     249,  1782,  2150,   207,   208,  1651,   249,   526,   527,   213,
    1380,   530,   531,    75,    76,    77,    64,   656,   210,   211,
     212,  1780,   247,  1782,   233,   250,   249,  1780,   256,  1782,
     145,   146,   147,   148,   673,  2183,   143,  2185,   145,   146,
     147,   148,  1780,   247,  1782,  1339,   247,   107,   687,   250,
    2198,   247,  2200,   247,   250,   247,   250,  1759,  1494,     8,
       9,   700,  2956,   702,   249,   256,     4,  1361,   249,  1470,
    1470,   590,   247,   247,  1776,   250,   250,   247,   138,    37,
     250,   600,  1470,   233,    30,   249,  1487,  1487,   727,   249,
    1490,   233,  1492,   247,  1494,    33,   250,   249,   247,  1487,
    1470,   250,  1748,    47,   221,   222,   223,   224,   225,   226,
     249,   228,   751,  1759,  1514,   754,  1516,   249,   247,   249,
    2935,   250,  1470,  2938,  1494,   247,   186,   187,   250,   249,
     247,   143,   771,   145,   146,   147,   148,  1538,  1538,  1487,
     155,   156,   157,   158,   159,   182,   160,   161,   162,  1516,
    1538,  1551,   113,   114,   115,   249,  1470,     8,     9,    23,
    1560,   249,   801,   101,   803,   249,   805,   249,  1538,     5,
       6,   247,   248,  1487,   160,   161,   162,    26,    27,   249,
    1580,  1551,   233,    32,   823,   249,    35,  1809,   203,  1589,
    1538,    40,   831,   215,   216,   834,  1490,   249,  1492,   247,
     249,   840,   249,   215,   216,   247,   248,   138,   249,  1831,
    1580,  2712,  1809,   249,  2715,    64,   249,  1617,    33,    33,
     249,   207,   208,  1809,  1538,    41,     6,   213,   166,   167,
     168,   250,   247,   249,  1831,  1635,   249,   876,  1638,   249,
     249,   249,  1642,   249,   883,  1831,   249,   185,   249,   249,
    1617,  1651,    30,   249,   893,   249,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   249,   906,  1638,   908,
      87,    88,  1642,   249,  1674,   221,   222,   223,   224,   225,
     226,   249,   228,   922,   249,    23,   250,   249,    26,    27,
    1690,   248,    30,   249,    32,   249,   249,    35,   249,   938,
      38,    39,    40,   250,    42,    43,   249,  1674,    87,    88,
     249,   233,    91,    92,   953,   249,   233,   250,    56,    57,
      58,   250,    60,  1741,   250,   248,  1742,   247,   247,  1747,
     248,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   250,   981,    35,   249,   247,   250,   250,  1748,   988,
     250,   990,   991,   248,    23,   248,   250,    26,    27,  1759,
     249,    30,  1001,    32,   250,   249,    35,   404,   405,    38,
     250,    40,   250,    42,   248,   250,  1776,   249,    25,    26,
      27,    28,  2530,    30,  1023,    32,   248,    56,    57,    58,
     250,    60,   247,  1793,   248,    64,    23,   250,    25,    26,
      27,    28,  1041,  1042,   248,    32,   247,   250,  1809,  1809,
     248,     6,  1051,  2561,   248,   193,  2038,   250,   250,    33,
      33,  1809,   249,  1793,   249,   242,   243,   244,   249,   249,
    1831,  1831,   233,    70,   193,   248,   253,   254,   255,  1809,
     250,  2038,   247,  1831,   222,   223,   224,   225,   226,   249,
     228,   250,  2038,   248,   233,   102,   103,   249,  1097,   249,
     247,  1809,   250,   242,   243,   244,   248,   233,   249,   988,
     185,   990,   991,   250,   253,   254,   255,    47,    48,    49,
      50,    51,  1001,  1831,  1123,   248,   247,   247,  2316,   256,
      26,    27,  1131,   530,    30,  1809,    32,   250,   250,    35,
     250,  1140,   233,   233,  1023,    41,   543,   134,   135,   136,
     137,   138,   139,   140,   141,   247,  1916,  1831,   256,   248,
      87,    88,  1041,  1042,    91,    92,   250,   250,  2230,   247,
    2232,   248,  1051,   174,   175,   176,   177,   178,   179,   180,
    1940,   247,   250,  1943,   248,   250,  1916,   233,  1067,   250,
     248,   247,  1191,   590,   249,  1074,  1075,   250,     6,   250,
     168,   250,   250,   250,   256,   173,  1966,   197,   198,   199,
     200,   201,   202,  1943,  1213,   249,   249,  1216,   248,  1218,
     248,  1220,   249,  1222,  2230,  1224,   250,   256,   250,    23,
     250,   248,    26,   248,   250,  1234,    30,   248,   248,   248,
     166,    35,   250,   247,    38,   250,    40,   250,    42,   247,
    1249,   250,  1131,   249,  2316,   250,   250,   247,   250,   248,
     247,  1140,    56,    57,    58,   247,    60,   250,  2776,   249,
     249,   247,   160,   161,   162,    26,   248,  2038,  2038,    30,
     250,  2041,  1281,  2043,    35,   213,  1940,   248,   247,    40,
    2038,    42,   250,  2089,   250,   248,   250,   185,   248,   248,
    1299,   248,  1181,   248,  2812,  2065,   233,  2067,  2038,   250,
    2316,  2041,  1966,   248,    65,   242,   243,   244,  1294,   207,
     208,  1297,   210,   211,   212,   250,   253,   254,   255,  2089,
    2038,   233,   249,   249,   233,  2065,   250,   238,  1337,    23,
    1339,    25,    26,    27,    28,   249,    30,   233,    32,   247,
     167,    35,   249,   248,   248,   168,    40,   250,  2340,  2089,
    1359,   250,  1361,   248,  2038,   249,   233,  2127,   233,   233,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     250,  1380,   227,  2340,   250,   248,   248,   248,    41,  2043,
    2150,   250,    71,   233,  2340,   233,   251,  2127,   250,   233,
    2160,   233,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   248,  2067,    35,   250,   166,    38,    39,    40,
      41,    42,    43,  2183,   248,  2185,   248,   250,   166,   233,
    2160,   250,   250,   238,   250,   249,   404,   405,  2198,   250,
    2200,   409,   238,    64,   250,   233,   248,   250,   248,  2209,
     134,   135,   136,   137,   107,   139,   248,   250,  2185,   233,
    1436,     5,   256,   250,   249,   249,   150,   151,   152,   249,
    2230,  1470,  2232,   249,   249,  1451,   249,   249,   249,  2209,
    1456,   238,   238,   250,   137,   138,   233,   110,  1487,   252,
     238,  1490,   233,  1492,   249,  1494,   233,    25,    26,    27,
      28,   233,    30,   233,    32,  2232,   233,    35,   250,   906,
     250,   908,    40,   248,   233,  1514,   250,  1516,   171,   250,
     173,   489,   248,   233,   233,   922,   250,  2305,    87,    88,
     250,  2307,    91,    92,   248,  2313,    64,   190,   233,  1538,
     193,   248,  1518,  1519,  3020,  3021,  3022,  3023,  3024,  3025,
     248,   233,  1551,  1788,  2319,  2370,  2316,  2696,   170,   170,
     170,  1560,   530,   170,   170,   170,  3042,  1543,  1544,   170,
     170,   170,   256,  1912,   102,   103,  1104,  1735,   170,  2340,
    2340,  1580,  1739,    45,    46,    47,    48,    49,    50,    51,
    1589,   184,  2340,    55,   247,   184,   184,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  2427,  2993,    35,
    2340,  3053,    38,    39,    40,    41,    42,    43,  1617,  2912,
    3032,  2615,   590,  2624,    93,    94,    95,    96,    97,    98,
      99,   100,  2340,  2844,  2394,   256,  1635,  2397,   170,  1638,
     170,   170,  2696,  1642,  1041,  1042,    25,    26,    27,    28,
     170,    30,  1651,    32,  1051,   170,    35,   170,   170,   170,
     170,    40,   170,    42,  2394,   170,  2340,  2397,   170,   170,
     170,   170,  1551,   170,   233,  1674,  2696,  2437,   170,  2696,
    2696,  1560,   170,   242,   243,   244,    65,   170,   170,  2696,
     170,  1690,   170,   170,   253,   254,   255,   170,   170,   170,
    1097,  1580,   170,  2463,  2696,  2696,  2466,  2437,  2696,  2696,
    1589,  2696,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    23,   102,   103,    26,    27,  2696,  1418,  2681,
    1897,    32,  2492,  3061,  1131,  1413,  2466,  1902,  1617,   333,
      41,    26,    27,  1140,   635,    30,  2364,    32,  2508,  1748,
      35,  2511,   837,    38,    39,    40,  1635,    42,    43,  1638,
    1759,  2521,  1738,  1642,   233,  1787,    -1,    -1,    -1,    -1,
    2530,    -1,  1651,    -1,    -1,    -1,    -1,  1776,  2508,    -1,
      -1,  2511,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,  2521,  2552,    -1,  1793,  1674,    -1,    -1,    -1,    -1,
      -1,  2561,   103,    -1,    -1,    -1,   107,    -1,    -1,  2463,
    1809,  1690,    -1,    -1,    -1,    -1,  1695,    -1,    -1,    -1,
    1699,    -1,  2552,  2583,    -1,    -1,    -1,    -1,    -1,  1708,
     256,    -1,  1831,    -1,    -1,    -1,   137,   138,  2492,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,  2583,    38,    39,    40,    -1,    42,    43,
      93,    94,    95,    96,    97,    98,    99,   100,   247,    -1,
     171,   172,   173,   140,    -1,   142,    -1,    -1,    -1,    -1,
    1759,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   190,
      -1,    -1,   193,    -1,    -1,    -1,   163,  1776,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,   173,  2696,    -1,  2696,
    2696,  2696,  2696,  2696,  2696,   182,  2696,  1916,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,   195,    -1,
     197,   198,   199,   200,    -1,   202,    -1,    -1,    -1,    -1,
     908,  1940,    -1,    -1,  1943,   256,   247,    -1,    -1,    -1,
      -1,    -1,  2712,    -1,   922,  2715,    -1,    -1,    -1,   226,
     197,   198,   199,   200,   201,   202,    -1,  1966,   235,    -1,
     938,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   248,  2712,   250,    -1,  2715,    -1,    -1,    -1,    -1,
    2750,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     233,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,    -1,
      -1,    -1,    -1,   981,    -1,    -1,  2776,  1896,  1994,    -1,
    2750,    -1,    -1,    -1,    -1,    -1,  2786,    -1,    -1,    -1,
     233,    25,    26,    27,    28,   302,    30,    -1,    32,  2038,
      -1,    35,  2041,    -1,  2043,   312,    40,    -1,    25,    26,
      27,    28,  2812,    30,    -1,    32,  2786,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,  2065,    -1,  2067,    -1,
      64,    -1,   256,  1041,  1042,    -1,    -1,    23,    -1,    25,
      26,    27,    28,  1051,    30,    -1,    32,    -1,    65,    35,
    2089,    -1,    38,  1490,    40,  1492,    42,  1494,   113,   114,
     115,   116,   117,   118,    -1,    -1,   373,    -1,   102,   103,
      56,    57,    58,    -1,    60,    -1,    -1,  1514,    64,  1516,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,  2127,    -1,
      -1,    -1,    -1,    -1,   401,    -1,    -1,   404,   405,    -1,
      -1,    23,   409,    25,    26,    27,    28,    -1,    30,    -1,
      32,  2150,    -1,    35,    -1,    -1,   102,   103,    40,    41,
      42,  2160,    -1,  1131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1140,    -1,    -1,  2935,    26,    27,  2938,    -1,
      30,    -1,    32,    65,  2183,    35,  2185,    -1,    38,    39,
      40,    41,    42,    43,    -1,   247,    -1,    -1,    -1,  2198,
      -1,  2200,    -1,    -1,    -1,  2935,    -1,    -1,  2938,    -1,
    2209,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
     102,   103,   489,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,  2230,    23,  2232,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,  1642,    -1,    38,  2127,    40,
      -1,    42,    -1,   247,  1651,   137,   138,    -1,    -1,   526,
     527,    -1,    -1,   530,    -1,    56,    57,    58,    -1,    60,
      -1,  2150,    -1,    -1,    -1,    -1,   543,  1674,    -1,    -1,
      -1,  2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,    -1,  1690,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,  2183,    -1,  2185,    -1,   190,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,  2316,    -1,  2198,
     587,  2200,    -1,   590,    -1,    78,    79,    80,    -1,    -1,
    2209,    -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,
      -1,  2340,    -1,   134,   135,   136,   137,   614,   139,   616,
      -1,  2230,    -1,  2232,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,  1759,  2242,    -1,   247,  2245,    -1,   635,    -1,
     637,  2347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1776,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   656,
      -1,    -1,    -1,    -1,    -1,  2394,    -1,    -1,  2397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     687,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    -1,    -1,   700,    -1,   702,    -1,  2316,  2437,    -1,
    2416,    -1,    -1,    56,    57,    58,  2422,    60,    -1,    -1,
      80,    64,    -1,    -1,    -1,    -1,   247,    87,    88,    -1,
     727,    91,    92,    -1,  2463,    -1,    -1,  2466,    -1,    -1,
    1261,  1262,  1263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,   751,    -1,    -1,   754,    -1,   242,
     243,   244,    -1,  2492,    -1,  2374,    -1,   140,    -1,   142,
     253,   254,   255,    -1,   771,    -1,    -1,    -1,    -1,  2508,
      -1,    -1,  2511,   194,   195,   196,   197,   198,   199,   200,
     201,   202,  2521,    -1,    -1,    -1,    -1,    -1,  2504,    -1,
      -1,  2530,    -1,    -1,   801,    -1,   803,    -1,   805,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1514,    -1,  1516,    -1,
      -1,    -1,   195,  2552,   197,    -1,   823,    -1,    -1,    -1,
      -1,    -1,  2561,    -1,   831,    -1,   247,   834,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,   226,  2583,    38,    39,    40,    41,    42,
      43,  1382,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1392,  1393,   233,  1395,   248,    -1,   250,    -1,   876,
      -1,    64,   242,   243,   244,    -1,   883,    -1,    -1,    -1,
      -1,    -1,    -1,   253,   254,   255,   893,    -1,    -1,  2508,
      -1,  2607,  2511,    -1,    -1,    -1,  1427,  1428,    -1,   906,
    1431,   908,  2521,   256,  2041,    -1,  2043,    -1,    -1,   102,
     103,  2530,    -1,    -1,   107,   922,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    -1,    -1,    -1,  2065,    -1,
    2067,   938,    -1,  2552,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2561,  1651,   137,   138,   953,    -1,    -1,    -1,
      -1,    -1,  2089,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,  2583,    35,  1674,    -1,    38,   247,
      40,    41,    42,  2712,   981,    -1,  2715,  2693,   171,    -1,
     173,   988,  1690,   990,   991,    -1,    56,    57,    58,    -1,
      60,    -1,    -1,    -1,  1001,    -1,    -1,   190,    -1,    -1,
     193,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  2750,  2728,  2729,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,  2738,  2739,  2740,  2741,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1041,  1042,    -1,  2776,    -1,    -1,
      -1,    -1,    -1,    -1,  1051,    -1,    -1,  2786,    -1,    -1,
      -1,  1759,    -1,    -1,   247,    -1,    -1,    -1,    -1,  2678,
      -1,  2198,    -1,  2200,   134,   135,   136,    -1,  1776,   139,
      -1,    -1,  2209,  2812,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1097,    -1,    -1,  2230,    -1,  2232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,  1123,    -1,    38,    39,
      40,    41,    42,    43,  1131,    -1,    -1,    -1,    -1,    -1,
      -1,  2750,    -1,  1140,    -1,    -1,    -1,    -1,    -1,    -1,
    2856,  2857,    -1,    -1,    64,    -1,  2862,  2863,    -1,    -1,
      -1,    23,    -1,    25,    26,    27,    28,  2776,    30,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,  2786,    40,    41,
     194,   195,   196,   197,   198,   199,   200,   201,   202,  2316,
      -1,    -1,   102,   103,  1191,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    64,  2812,    -1,    -1,  2935,  1728,  1729,  2938,
      -1,    -1,    -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,
      -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2941,    -1,  1234,  2944,    -1,
     102,   103,    -1,   616,    -1,   107,    23,    -1,    -1,    26,
      -1,    -1,  1249,    30,    -1,  2961,  2962,  2963,    35,    -1,
     140,    38,   142,    40,   637,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,   137,   138,    -1,    -1,    56,
      57,    58,   162,    60,  1281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2999,  3000,  3001,  3002,    -1,    -1,    -1,
      -1,    -1,  1299,    -1,    -1,    -1,    -1,    -1,    -1,   171,
    2437,   173,    -1,    -1,    -1,   195,    -1,   197,   198,   199,
     200,    -1,   202,    -1,    -1,    -1,  2935,    -1,   190,  2938,
      -1,   193,    -1,  3039,  3040,    -1,  2463,   247,    -1,  2466,
    1337,    -1,  1339,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,  1874,   727,   235,    -1,    -1,    -1,    -1,
      -1,   223,  1359,    -1,  1361,  2492,    -1,    -1,   248,    -1,
     250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,  1900,
      -1,   754,    -1,  1380,    -1,   247,  1907,    -1,    -1,    -1,
     270,    -1,    -1,    -1,  2521,    -1,    -1,    -1,   771,    -1,
      -1,    -1,    23,  2530,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,   302,    -1,    -1,  2552,    -1,    -1,   801,    -1,
     803,    -1,    -1,    -1,  2561,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,  2583,    -1,    40,    41,
      42,    -1,  1983,    -1,    -1,    23,    -1,    -1,    26,    27,
     350,    -1,    30,  1470,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    65,    42,    -1,    -1,    -1,    -1,    -1,
    1487,    -1,    -1,  1490,    -1,  1492,  2017,  1494,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,  2032,    -1,   134,   135,   136,   137,  1514,   139,  1516,
      -1,   401,    -1,    -1,    -1,   107,    -1,    -1,    -1,   150,
     151,   152,  2230,    -1,  2232,    -1,    -1,    -1,    -1,    -1,
      -1,  1538,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,  1551,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,  1560,    -1,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,  1580,    -1,  2712,    -1,    -1,  2715,   171,
      -1,   173,  1589,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   483,    43,    -1,    -1,    -1,   190,    -1,
      -1,   193,    -1,    -1,    -1,   988,    -1,   990,  2316,    -1,
    1617,    -1,    -1,  2750,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,  1635,    23,
      -1,  1638,    26,    27,    -1,  1642,   526,   527,    32,  2776,
      -1,    -1,    -1,    -1,  1651,    -1,    -1,    41,    -1,  2786,
      -1,    -1,   101,    -1,    23,   104,    25,    26,    27,    28,
      -1,    30,    -1,    32,    -1,    -1,    35,  1674,    -1,    38,
      -1,    40,    -1,    42,    -1,  2812,    23,    -1,    25,    26,
      27,    28,    -1,  1690,    -1,    32,    -1,    56,    57,    58,
      -1,    60,    -1,    -1,   143,    64,    -1,    -1,    -1,    -1,
     149,   591,   592,    -1,   153,   154,    -1,  2238,  2239,   103,
      -1,    -1,    -1,   107,   604,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   614,    -1,   616,    -1,    -1,    -1,
    2261,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,  1748,    -1,   137,   138,   635,    -1,   637,    -1,    -1,
      -1,    -1,  1759,    -1,    -1,   204,   205,   206,    -1,    -1,
     209,    -1,    -1,    -1,    -1,   214,   656,    -1,    -1,  1776,
      -1,   220,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,
     229,    -1,    -1,   673,    -1,    -1,  1793,   134,   135,   136,
     137,   138,   139,   140,   141,    -1,   190,   687,  2935,   193,
      -1,  2938,  1809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     700,    -1,   702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1831,  2356,  2357,  2358,  2359,  2360,
    1213,    -1,    -1,  1216,    -1,    -1,    -1,   727,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,  2390,
      -1,   751,    -1,    -1,   754,    23,    -1,    25,    26,    27,
      28,  2402,    30,    -1,    32,    -1,    -1,    35,    -1,    64,
      -1,   771,    40,    41,    -1,    -1,    -1,    -1,  2419,    -1,
      -1,    -1,    -1,    -1,    -1,  2426,    -1,    -1,  1281,  2430,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,  1916,
      -1,   801,    -1,   803,    -1,   805,  1299,   102,   103,    -1,
      -1,    -1,   107,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  1940,    -1,    35,  1943,    -1,    -1,    -1,
      40,   831,    42,    -1,   102,   103,    -1,    -1,    -1,   107,
      -1,    -1,   137,   138,  1337,    -1,  1339,    -1,    -1,  1966,
      -1,    -1,    -1,    -1,    -1,    65,  2497,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1359,   867,  1361,   137,
     138,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   893,    -1,   190,    -1,    -1,   193,    -1,
      -1,    -1,    -1,   171,    -1,   173,   906,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,  2038,   190,    -1,  2041,   193,  2043,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,  2065,    -1,
    2067,    -1,   247,   953,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    60,  2606,    -1,  2608,    64,    -1,
      -1,    -1,  2089,    -1,    -1,    -1,    -1,    -1,    -1,   247,
    2621,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   988,    -1,
     990,   991,    -1,    -1,    -1,    -1,    -1,  1490,    -1,  1492,
      -1,  1001,    -1,  2644,    -1,  2646,   102,   103,    -1,    -1,
    2127,   107,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,  1023,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,  2150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,  2160,  2685,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,  1551,    -1,
      38,    39,    40,    41,    42,    43,  2183,  1560,  2185,    -1,
    2711,    -1,    -1,    -1,    -1,   171,    -1,   173,    56,    57,
      58,  2198,    60,  2200,    -1,    -1,    64,  1580,    -1,    -1,
      -1,    -1,  2209,    -1,   190,    -1,  1589,   193,    -1,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    -1,  2230,    -1,  2232,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    32,    33,   107,
      -1,  1131,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,   247,    42,    43,    -1,  1155,    -1,    -1,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,  1166,    -1,    23,    -1,
      25,    26,    27,    28,    64,    30,    -1,    32,    -1,    -1,
      35,    -1,  2823,    38,  2825,    40,    41,    42,    -1,    -1,
      -1,  1191,    -1,   171,    -1,   173,   101,  2838,    -1,  2316,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    64,
      -1,    -1,   190,  1213,    -1,   193,  1216,    -1,  1218,    -1,
    1220,    -1,  1222,  2340,  1224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,   102,   103,  1249,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    41,  2394,    -1,    -1,
    2397,  1281,   137,   138,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,  1299,
      -1,    38,    39,    40,    41,    42,    43,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
    2437,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   190,    -1,  1337,   193,  1339,
      -1,    -1,   107,    -1,    -1,    -1,  2463,    -1,    -1,  2466,
      -1,   270,    -1,    23,    -1,    25,    26,    27,    28,  1359,
      30,  1361,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    41,   137,   138,    -1,  2492,    -1,    -1,    -1,    -1,
    1380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2508,   247,    -1,  2511,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,    -1,  2521,    -1,   171,    -1,   173,    -1,
       4,    -1,     6,  2530,     8,     9,    -1,    11,    12,    13,
      -1,    15,    -1,  1916,    -1,   190,    -1,    21,   193,    -1,
      -1,   350,   102,   103,   171,  2552,   173,   107,    -1,    33,
      34,    -1,    -1,    -1,  2561,    -1,    -1,  1940,    -1,    43,
    1943,    -1,    -1,   190,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2583,   137,   138,    -1,
    1470,    -1,    -1,  1966,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    -1,   140,    -1,   142,  1487,    -1,    -1,
    1490,    -1,  1492,    -1,  1494,   151,   152,    -1,    -1,    -1,
      -1,   171,    -1,   173,    -1,    -1,   162,   101,    -1,    -1,
     247,    -1,    23,    -1,    -1,    26,    27,   173,    -1,    30,
     190,    32,    -1,   193,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,  1538,   195,
      -1,   197,   198,    -1,    -1,    56,    57,    58,  2041,    60,
    2043,  1551,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
    1560,    -1,    -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,
     226,   165,  2065,    -1,  2067,    -1,    -1,   247,    -1,   235,
    1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1589,
      -1,    -1,   248,    -1,   250,  2712,    -1,    -1,  2715,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,
      -1,    -1,    -1,    -1,   270,   209,    -1,  1617,   274,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
      -1,    -1,    -1,  2750,  2127,  1635,    -1,    -1,  1638,    -1,
      -1,    -1,  1642,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,  2150,    35,  2776,
      -1,    38,    39,    40,    41,    42,    43,  2160,    -1,  2786,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    60,    23,    -1,    25,    26,    27,    28,
    2183,    30,    -1,    32,   350,  2812,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,  2198,    -1,  2200,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,   401,    60,    -1,   404,   405,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1759,
     137,   138,    -1,   102,   103,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   404,   405,    -1,    -1,    -1,    -1,    -1,
    1780,    -1,  1782,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,  1793,   171,    -1,   173,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,  1809,
      -1,    -1,    -1,   190,    -1,    -1,   193,    -1,  2935,    -1,
      -1,  2938,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,
      -1,  1831,   171,   489,   173,   754,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   190,    35,    -1,   193,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   527,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   805,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,
      -1,  2394,    23,    -1,  2397,    26,    27,    -1,   247,    30,
      -1,    32,    -1,    -1,    35,    -1,  1916,    38,    -1,    40,
      41,    42,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,   587,    -1,   247,    -1,    56,    57,    58,    -1,    60,
    1940,    -1,    -1,  1943,  2437,    -1,    -1,    -1,   867,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,   590,
     616,    -1,    -1,    -1,   883,    -1,  1966,    -1,    -1,    -1,
    2463,    -1,    -1,  2466,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   637,    -1,    -1,    -1,    -1,   107,   906,   171,    23,
     173,    -1,    26,    27,    -1,    -1,    30,    -1,    32,  2492,
     656,    35,    -1,    -1,    38,    39,    40,   190,    42,    43,
     193,    -1,    -1,    -1,    -1,  2508,   137,   138,  2511,    -1,
      -1,    -1,    56,    57,    58,    -1,    60,    -1,  2521,    -1,
      -1,    -1,    -1,    -1,   953,    -1,    -1,  2530,  2038,    -1,
      -1,  2041,    -1,  2043,   700,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,  2552,
      -1,    -1,    -1,    -1,   247,  2065,    -1,  2067,  2561,   190,
      -1,   727,   193,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,  2089,
      38,    -1,    40,    41,    42,   751,    -1,    -1,   754,    -1,
      -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,   771,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  2127,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   801,    -1,   803,    -1,   805,
    2150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,   107,
    2160,    -1,    -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,
      -1,   827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2183,    -1,  2185,    -1,    -1,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,
    2200,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2209,
      -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2712,
      -1,    -1,  2715,   171,    -1,   173,    -1,   883,    -1,    -1,
      -1,   137,   138,    -1,    -1,    -1,    -1,   893,    -1,    -1,
      -1,    -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,
     906,    -1,   908,    -1,    -1,    -1,    -1,  2750,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,   922,   173,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   906,    -1,   908,    -1,    -1,
      -1,    -1,    -1,  2776,   190,    -1,    -1,   193,    -1,    -1,
      -1,   922,    -1,  2786,    -1,    -1,    -1,   953,    -1,   247,
      -1,    -1,    -1,    -1,    -1,  1224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2316,    -1,    -1,  2812,
      -1,    -1,    -1,    -1,    -1,   981,    -1,    -1,    -1,    -1,
      -1,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,    -1,
    2340,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1281,    -1,    -1,    -1,    -1,  1023,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1299,    -1,    35,    -1,    -1,  1041,  1042,    40,    41,    42,
      -1,    -1,    -1,    -1,  2394,    -1,    -1,  2397,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,    -1,
    1041,  1042,    65,    -1,    -1,    -1,    -1,    -1,  1337,    -1,
    1051,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,    -1,  2437,    -1,    -1,
    1359,    -1,  2935,    -1,   235,  2938,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,   248,    -1,   250,
      -1,  1380,    -1,  2463,    -1,    -1,  2466,  1123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,  2492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2508,  1140,
      -1,  2511,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,  2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2530,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1470,  2552,    -1,    -1,    -1,    -1,  1213,    -1,    -1,
    1216,  2561,  1218,    -1,    -1,   140,    -1,   142,  1224,    -1,
      -1,    -1,    -1,    -1,    -1,  1494,    -1,   152,  1234,   154,
      -1,    -1,    -1,  2583,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1538,
     195,    -1,   197,   198,   199,  1281,    -1,    -1,    -1,    -1,
      -1,    -1,  1551,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    27,    28,  1299,    30,    -1,    32,    -1,    -1,    35,
      -1,   226,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
     235,  1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,    -1,    64,    -1,
      -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1359,    23,  1361,    25,    26,    27,    28,
     285,    30,  2712,    32,    -1,  2715,   102,   103,    -1,  1638,
      -1,   107,    41,  1642,  1380,    -1,    -1,   302,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
    2750,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,   350,  2776,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   171,  2786,   173,   107,    23,
      -1,    25,    26,    27,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    -1,    -1,   190,    -1,    40,   193,   102,   103,
      -1,    -1,  2812,    -1,  1470,    -1,    -1,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,   616,   401,    -1,    -1,    -1,
     405,  1487,    -1,    -1,  1490,    -1,  1492,   223,  1494,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   637,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,    -1,    -1,  1514,  1490,
    1516,  1492,    -1,  1494,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1538,  1514,    -1,  1516,    -1,    -1,    -1,    -1,
    1809,    -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,  1560,   139,    -1,    -1,   483,    -1,
      -1,    -1,    -1,    -1,   489,    -1,   150,   151,   152,    -1,
      -1,    -1,    -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1589,    -1,  2935,   727,    23,  2938,    25,
      26,    27,    28,    -1,    30,    -1,    32,    -1,    -1,    35,
      -1,    -1,   527,   247,    40,    41,    42,    -1,    -1,    -1,
     751,  1617,    -1,   754,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    65,
     771,    38,  1638,    40,    41,    42,  1642,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1651,    -1,  1916,    -1,    56,
      57,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
     801,  1642,   803,    -1,    -1,    -1,   102,   103,  1674,    -1,
    1651,   107,    -1,    -1,  1943,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   616,    35,  1674,    -1,    38,    39,    40,    41,    42,
      43,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,  1690,
      -1,    -1,   637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
      -1,   656,   139,    -1,    -1,   171,    -1,   173,    -1,    -1,
      -1,    -1,  1748,   150,   151,   152,    -1,    -1,   673,    -1,
      -1,    -1,    -1,  1759,   190,    -1,    -1,   193,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2038,
      -1,    -1,  2041,    -1,    -1,   700,    -1,    -1,  1759,    -1,
      -1,    23,    -1,    25,    26,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,  1776,  2065,    -1,    40,    41,
      -1,    -1,   727,  1809,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2089,    -1,    64,    -1,    -1,  1831,   751,    -1,    -1,   754,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   771,   988,    35,   990,
      -1,    38,    39,    40,    41,    42,    43,   140,  2127,   142,
     102,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,   801,    64,   803,   162,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2160,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,
      -1,    -1,   827,    -1,   247,    -1,   831,    -1,    -1,    -1,
    1916,    -1,   195,    -1,   197,   198,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   171,
      35,   173,    -1,    -1,  1940,    40,    41,  1943,    -1,    -1,
    2209,    -1,   867,   226,    -1,    -1,    -1,    -1,   190,    -1,
      -1,   193,   235,    -1,    -1,    -1,    -1,    -1,   883,    -1,
    1966,    -1,    -1,    -1,    -1,   248,    -1,   250,   893,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   906,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   922,   142,    -1,
      -1,    -1,   285,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,   162,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,   953,   134,
     135,   136,  2038,    -1,   139,  2041,    -1,  2043,    56,    57,
      58,    -1,    60,    -1,    -1,   150,   151,   152,    -1,    -1,
      -1,   195,    -1,   197,    -1,    -1,   981,    -1,    -1,  2065,
    2041,  2067,  2043,   988,    -1,   990,   991,   350,    -1,    -1,
      -1,  2340,  1213,    -1,    -1,  1216,    -1,    -1,    -1,    -1,
      -1,    -1,   226,  2089,  2065,    -1,  2067,    -1,    -1,   107,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,  2089,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1042,    -1,   137,
     138,  2127,   405,    -1,   162,  2394,   270,    -1,  2397,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1281,    -1,    35,    -1,  2150,    38,    39,    40,    41,    42,
      43,    -1,    -1,   171,  2160,   173,    -1,    -1,  1299,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,  2437,    -1,
      -1,    64,   190,    -1,    -1,   193,    -1,  2183,    -1,  2185,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,  2198,    -1,  2200,    -1,  1337,  2466,  1339,    -1,
     483,    -1,    -1,  2209,    -1,    -1,   350,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,    -1,  2198,  1359,  2200,
    1361,    -1,    -1,    -1,  2230,    -1,  2232,    -1,  2209,    -1,
      -1,    23,   270,    25,    26,    27,    28,    -1,    30,  2508,
      32,    -1,  2511,    35,   527,    -1,    -1,    -1,    40,  2230,
      -1,  2232,  2521,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,  2552,    -1,    -1,    -1,    -1,  1213,    -1,
      -1,  1216,    -1,  1218,    -1,  1220,    -1,    -1,    64,  1224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,
    2316,    -1,   350,    -1,  2583,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   616,  2340,  2316,   102,   103,    -1,   483,
      -1,   107,   134,   135,   136,   137,    -1,   139,    -1,  1490,
      -1,  1492,    -1,    -1,   637,    -1,  1281,    -1,   150,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,   656,  1299,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   527,    -1,    -1,    -1,    -1,  2394,    -1,
      -1,  2397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,
    1551,    -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,  1560,
      -1,    -1,    -1,    -1,   190,    -1,    -1,   193,    -1,    -1,
      -1,  2437,    -1,    -1,  1359,    -1,  1361,    -1,    -1,  1580,
      -1,    -1,    -1,  2712,   727,   483,  2715,    -1,  1589,    -1,
      -1,    -1,    -1,    -1,    -1,  1380,  2437,  2463,    -1,    -1,
    2466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,    -1,
     614,   754,   616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2750,  2463,    -1,    -1,  2466,  2492,    -1,   771,   527,
      -1,   635,    -1,   637,    -1,    -1,    -1,    -1,    -1,    -1,
     162,    -1,  2508,    -1,    -1,  2511,    -1,    -1,    -1,    -1,
      -1,  2492,    -1,    -1,    -1,  2521,    -1,  2786,   801,    -1,
     803,    -1,   805,    -1,  2530,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2521,    -1,    -1,    -1,   827,  1470,  2552,    -1,    -1,  2530,
      -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,    -1,    -1,
      -1,    -1,  1487,    -1,   226,  1490,    -1,  1492,    -1,  1494,
      -1,  2552,    -1,    -1,    -1,    -1,    -1,  2583,    -1,    -1,
    2561,    -1,    -1,   727,   867,    -1,   248,    -1,    -1,    -1,
      -1,  1516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     883,    -1,  2583,    -1,    -1,    -1,    -1,   751,   270,    -1,
     754,    -1,    -1,  1538,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   906,    -1,    -1,  1551,   771,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,   922,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1580,    -1,   801,    -1,   803,
      -1,   805,    -1,    -1,  1589,    -1,  2935,    -1,    -1,  2938,
     953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   350,   727,
      35,    -1,  1617,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,   988,  2712,   990,   991,  2715,
      -1,    -1,    -1,  1638,    -1,    -1,   754,  1642,    -1,    64,
      -1,    -1,    -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2712,    -1,    -1,  2715,    -1,    -1,    -1,    -1,   883,
    1023,    -1,    -1,    -1,  2750,    -1,    -1,    -1,    -1,  1674,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,  1042,
      -1,    -1,   906,    -1,    -1,    -1,    -1,   805,    -1,  2750,
    2776,    -1,    -1,    -1,    -1,  1916,    -1,    -1,    -1,    -1,
    2786,    23,    -1,    25,    26,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,  2776,    38,    -1,    40,  1940,
      42,    -1,  1943,    -1,    -1,  2786,  2812,    -1,    -1,   953,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,
      -1,   483,    -1,    -1,    -1,  1966,    -1,    -1,    -1,   867,
      -1,  2812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   988,   883,   990,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   527,    -1,    35,   906,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,  1023,
      -1,    -1,    -1,    -1,  1809,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,    64,   139,    -1,    -1,
    2041,    -1,  2043,    -1,    -1,    -1,  1831,    -1,   150,   151,
     152,    -1,    -1,    -1,    -1,   953,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2065,    -1,  2067,    -1,    -1,  2935,
    1213,    -1,  2938,  1216,    -1,  1218,    -1,    -1,    -1,   107,
      -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   614,    -1,  2935,    -1,    -1,  2938,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   137,
     138,    35,    -1,   635,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,  1023,  2127,    -1,    -1,    -1,
      -1,  1916,    56,    57,    58,    -1,    60,    -1,  1281,    -1,
      64,    -1,    -1,   171,    -1,   173,    -1,    -1,    -1,  2150,
      -1,    -1,    -1,    -1,    -1,  1940,  1299,    -1,  1943,  2160,
      -1,    -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,  1966,  2183,   107,    -1,    -1,    -1,  1191,    -1,    -1,
      -1,    -1,    -1,    -1,  1337,    -1,  1339,  2198,    -1,  2200,
      -1,    -1,    -1,    -1,    -1,   727,    -1,    -1,    -1,  1213,
      -1,    -1,  1216,   137,   138,    -1,  1359,    -1,  1361,    -1,
    1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   754,    -1,    -1,    -1,    -1,  1380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,  2038,    -1,    -1,  2041,    -1,  2043,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1281,    -1,    -1,
    2065,    -1,  2067,   805,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2089,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,  1224,  1470,    -1,    -1,
      -1,    -1,    -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,
      -1,    -1,  2127,    -1,    -1,   867,    -1,  1490,    -1,  1492,
      -1,  1494,    -1,    -1,    -1,  1359,    -1,  1361,    -1,    -1,
      -1,   883,    -1,    -1,    -1,  2150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1516,    -1,  2160,  1380,    -1,    -1,    -1,
      -1,    -1,    -1,  1281,   906,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2394,    -1,  1538,  2397,    -1,  2183,    -1,
    2185,  1299,    -1,    -1,    -1,    -1,    -1,    -1,  1551,    -1,
      -1,    -1,    -1,  2198,    -1,  2200,    -1,  1560,    -1,    -1,
      -1,    -1,    -1,    -1,  2209,    -1,    -1,    -1,    -1,    -1,
      -1,   953,    -1,    -1,    -1,    -1,  2437,  1580,    -1,  1337,
      -1,    -1,    -1,    -1,    -1,    -1,  1589,  2232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1359,  2463,    -1,    -1,  2466,  1470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1380,    -1,    -1,    -1,  1490,    -1,  1492,    -1,
    1494,  2492,    -1,    -1,    -1,  1638,    -1,    -1,    -1,  1642,
      -1,  1023,    -1,    -1,    -1,    -1,    -1,  2508,    -1,    23,
    2511,    25,    26,    27,    28,    -1,    30,    -1,    32,    -1,
    2521,    35,    -1,    -1,    38,    -1,    40,    41,    42,  2530,
      -1,  1674,    -1,    -1,  1538,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    60,  1551,    -1,    -1,
      64,  2552,    -1,    -1,    -1,  2340,  1560,    -1,    -1,    -1,
    2561,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1470,    -1,    -1,    -1,  1580,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1589,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,    -1,    -1,  1494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2394,
      -1,    -1,  2397,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   137,   138,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,  1638,    -1,    -1,    -1,  1642,    -1,
    1538,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,  2437,  1551,    64,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,  1809,    -1,    -1,  1191,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,  2463,   193,
      -1,  2466,  1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1224,    -1,    -1,    -1,    -1,  2492,    -1,    -1,
      -1,  2712,    -1,    -1,  2715,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2508,    -1,    -1,  2511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2521,    -1,    -1,    -1,
    1638,    -1,    -1,    -1,  1642,  2530,    -1,    -1,    -1,  2750,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,    -1,    -1,
      -1,    -1,    -1,  1916,    -1,  2776,  2561,  1299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2786,    -1,    -1,    -1,  1793,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1940,  2583,    -1,
    1943,    -1,    -1,    -1,    -1,  1809,    -1,    -1,    -1,    -1,
      -1,  2812,    -1,    -1,    -1,  1337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1966,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,  1359,    35,    -1,
      -1,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1380,    56,
      57,    58,    -1,    60,    -1,    -1,    -1,    64,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,  2038,    -1,    -1,  2041,    -1,
    2043,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,  1809,  1916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2065,    -1,  2067,    -1,    -1,  2712,    -1,    -1,
    2715,    -1,    -1,    -1,  2935,    -1,  1940,  2938,    -1,  1943,
      -1,    -1,    -1,    -1,    -1,    -1,  2089,    -1,  1470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1966,    -1,    -1,  2750,    -1,    -1,    -1,    -1,
      -1,    -1,  1494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2127,    -1,    -1,    -1,    -1,    -1,
      -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2786,    -1,    -1,    -1,    -1,    -1,  2150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1538,  2160,  1916,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,    -1,  1551,
      -1,    -1,    -1,    -1,  2038,    -1,    -1,  2041,    -1,  2043,
    2183,    -1,  2185,    -1,    -1,  1943,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,  1580,    -1,
      -1,  2065,    -1,  2067,    -1,    -1,  2209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2089,    -1,    -1,    -1,  2232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   163,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,  1638,    -1,    -1,    -1,
    1642,    -1,    -1,  2127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   197,   198,   199,   200,
    2038,   202,    -1,  2041,    -1,    -1,  2150,    -1,    -1,    -1,
    2935,    -1,    -1,  2938,    -1,    -1,  2160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2065,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2089,    -1,    -1,  2198,    -1,  2200,  2340,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2209,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2394,    -1,    -1,  2397,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1809,    -1,    -1,
      -1,    -1,    -1,    -1,  2437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2209,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2463,    -1,    -1,  2466,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2340,    -1,    -1,    -1,
     401,    -1,    -1,   404,   405,    -1,    -1,    -1,   409,  2492,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2508,    -1,    -1,  2511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2530,    -1,    -1,
    2394,    -1,    -1,  2397,  1916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,
      -1,  1943,   483,    -1,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,  2437,    -1,    -1,   401,    -1,    -1,    -1,
    2583,    -1,  2340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2463,
      -1,    -1,  2466,    -1,    -1,   526,    -1,    -1,    -1,   530,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2492,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2394,    -1,    -1,  2397,
      -1,    -1,    -1,    -1,  2508,    -1,    -1,  2511,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2038,  2521,   483,  2041,
      -1,    -1,    -1,    -1,   489,    -1,  2530,    -1,    -1,   590,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2437,
      -1,    -1,    -1,  2065,    -1,    -1,    -1,    -1,  2552,    -1,
      -1,    -1,    -1,   614,    -1,   616,    -1,  2561,    -1,    -1,
      -1,   526,   527,    -1,    -1,   530,    -1,  2089,  2466,  2712,
      -1,    -1,  2715,    -1,   635,    -1,   637,    -1,   543,  2583,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2127,    -1,  2750,    -1,    -1,
    2508,    -1,   673,  2511,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2521,    -1,   590,   687,    -1,    -1,    -1,
      -1,    -1,    -1,  2776,    -1,    -1,    -1,    -1,  2160,   700,
      -1,   702,    -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2552,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2583,    -1,  2209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2712,    -1,
      -1,  2715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
     801,    -1,   803,    -1,    -1,    -1,  2750,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
     197,   198,   199,   200,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2935,    -1,    -1,  2938,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,    -1,
      -1,    -1,    -1,    -1,  2712,   876,    -1,  2715,  2340,    -1,
      -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   893,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   906,    -1,   908,    -1,    -1,
      -1,    -1,  2750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   922,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2394,    -1,    -1,  2397,    -1,   938,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2786,    -1,
      -1,    -1,   953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2437,    -1,    -1,   883,    -1,
     981,    -1,    -1,    -1,    -1,    -1,    -1,   988,   893,   990,
     991,  2935,    -1,    -1,  2938,    -1,   373,    -1,    -1,    -1,
    1001,    -1,    -1,    -1,  2466,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   401,    -1,    -1,   404,   405,    -1,
      -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1041,  1042,    -1,    -1,    -1,    -1,  2508,    -1,   953,  2511,
    1051,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2521,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   981,    -1,    -1,    -1,
      -1,    -1,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,
    2552,    -1,    -1,    -1,    -1,    -1,  1001,  2935,    -1,    -1,
    2938,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,  1023,    -1,
      -1,  2583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1131,    -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,  1140,
      -1,    -1,    -1,    -1,    -1,    -1,  1051,    -1,    -1,   526,
      -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1191,    -1,  1097,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1213,   590,    -1,  1216,    -1,  1218,    -1,  1220,
      -1,  1222,    -1,  1224,    -1,    -1,  1131,    -1,    -1,    -1,
      -1,    -1,    -1,  1234,    -1,  1140,    -1,   614,    -1,   616,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1249,    -1,
    2712,    -1,    -1,  2715,    -1,    -1,    -1,    -1,   635,    -1,
     637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   656,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2750,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   700,  2786,   702,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1337,    -1,  1339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1359,    -1,
    1361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   801,    -1,   803,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1470,
      -1,    -1,    -1,  2935,    -1,    -1,  2938,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1487,    -1,    -1,  1490,
      -1,  1492,    -1,  1494,    -1,    -1,    -1,    -1,    -1,   876,
      -1,    -1,    -1,    -1,    -1,    -1,   883,    -1,    -1,    -1,
      -1,    -1,    -1,  1514,    -1,  1516,   893,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   906,
      -1,   908,    -1,    -1,    -1,    -1,    -1,  1538,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   922,    -1,    -1,    -1,    -1,
    1551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1560,
      -1,   938,    -1,    -1,    -1,  1470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,    -1,  1580,
      -1,    -1,  1487,    -1,    -1,    -1,   182,    -1,  1589,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,   981,    -1,    -1,    -1,    -1,    -1,
      -1,   988,    -1,   990,   991,    -1,  1617,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,    -1,    -1,
     226,    -1,    -1,  1538,  1635,    -1,    -1,    -1,    -1,    -1,
      -1,  1642,    -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,
    1651,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1674,  1051,  1580,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1589,    -1,    -1,    -1,    -1,  1690,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1635,    -1,    -1,  1638,    -1,    -1,    -1,  1642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1131,    -1,    -1,    -1,  1759,    -1,
      -1,    -1,    -1,  1140,    -1,    -1,    -1,    -1,    -1,  1674,
      -1,    -1,    -1,    -1,    -1,  1776,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,    -1,    -1,
      -1,    -1,  1793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1809,    -1,
      -1,    -1,    -1,    -1,  1191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1831,    -1,    -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,
      -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,    -1,    -1,
      -1,    -1,    -1,    -1,  1759,    -1,    -1,  1234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1776,  1249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1916,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     526,   527,    -1,    -1,   530,    -1,    -1,    -1,   534,  1940,
      -1,    -1,  1943,    -1,    -1,    -1,    -1,   543,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1337,    -1,  1339,    -1,    -1,  1966,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2038,    -1,    -1,
    2041,    -1,  2043,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2065,    -1,  2067,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2089,    -1,
      -1,    -1,    -1,  1470,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   700,    -1,    -1,    -1,    -1,    -1,
    1487,    -1,    -1,  1490,    -1,  1492,    -1,  1494,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2127,    -1,    -1,    -1,
      -1,   727,    -1,  2038,    -1,    -1,    -1,  1514,    -1,  1516,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2160,
      -1,  1538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2183,  1560,  2185,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,
      -1,    -1,    -1,  1580,    -1,   801,    -1,    -1,  2209,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2127,   195,    -1,   197,   198,   199,   200,  2230,
     202,  2232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1617,    -1,    -1,    -1,    -1,  2150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2160,    -1,    -1,  1635,    -1,
      -1,    -1,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,  2183,    -1,
    2185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2198,    -1,  2200,    -1,  1674,    -1,    -1,
      -1,    -1,    -1,    -1,  2209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1690,    -1,  2316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2230,    -1,  2232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2340,
      -1,    -1,    -1,    -1,    -1,   941,    -1,   943,   944,   945,
      -1,   526,   527,    -1,    -1,   530,    -1,    -1,    -1,   534,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1759,    -1,    -1,   560,    -1,    -1,    -1,    -1,
      -1,    -1,   988,  2394,   990,   991,  2397,    -1,    -1,  1776,
      -1,    -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,    -1,
      -1,  2316,    -1,    -1,    -1,   590,  1793,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,
      -1,    -1,  1809,    -1,    -1,    -1,  2437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1831,  1051,    -1,    -1,    -1,    -1,
      -1,    -1,  2463,    -1,    -1,  2466,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1074,  1075,
      -1,    -1,    -1,    -1,  1080,    -1,    -1,    -1,    -1,    -1,
      -1,  2492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1097,    -1,    -1,    -1,    -1,    -1,  2508,    -1,    -1,
    2511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2530,
      -1,    -1,    -1,    -1,    -1,  1131,    -1,    -1,    -1,  1916,
      -1,    -1,    -1,    -1,  1140,    -1,    -1,    -1,    -1,    -1,
      -1,  2552,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,
    2561,    -1,    -1,  1940,    -1,    -1,  1943,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2583,    -1,    -1,    -1,    -1,    -1,    -1,  1966,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2508,    -1,    -1,  2511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2521,  1213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2530,    -1,    -1,  1224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,
      -1,    -1,   614,    -1,   616,    -1,    -1,  2552,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,    -1,
      -1,  2038,    -1,   635,  2041,   637,  2043,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2583,    -1,
      -1,    -1,    -1,    -1,   656,  1281,    -1,    -1,  2065,    -1,
    2067,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   673,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2712,  2089,    -1,  2715,   687,   195,    -1,   197,   198,
     199,   200,    -1,   202,    -1,    -1,    -1,    -1,   700,    -1,
     702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,    -1,  2750,
    2127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2150,    -1,  2776,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2160,    -1,  2786,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2183,    -1,  2185,    -1,
      -1,  2812,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,
      -1,  2198,    -1,  2200,    -1,    -1,  1001,    -1,    -1,   801,
      -1,   803,  2209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2750,    -1,    -1,  1023,    -1,
      -1,    -1,    -1,  2230,    -1,  2232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,
      -1,  2776,    -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,
      -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1490,    -1,  1492,    -1,    -1,  1074,
    1075,    -1,    -1,    -1,    -1,  1080,    -1,  2812,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1097,    -1,  1099,  1521,    -1,    -1,    -1,    -1,
      -1,    -1,  1528,    -1,  2935,    -1,    -1,  2938,    -1,  2316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1551,  1131,    -1,    -1,    -1,
      -1,    -1,    -1,  2340,  1560,  1140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   988,  2394,   990,   991,
    2397,  1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,
    2935,    -1,    -1,  2938,    -1,    -1,    -1,    -1,    -1,  1635,
      -1,    -1,  1638,    -1,    -1,    -1,  1642,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,    -1,
    2437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2463,    -1,    -1,  2466,
      -1,    -1,    -1,    -1,  1690,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1708,    -1,    -1,  2492,    -1,    -1,    -1,    -1,
      -1,    -1,  1718,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2508,    -1,    -1,  2511,   614,    -1,   616,    -1,    -1,
      -1,    -1,    -1,    -1,  2521,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2530,    -1,    -1,   635,    -1,   637,    -1,
      -1,    -1,    -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2552,    -1,   656,    -1,    -1,
    1776,    -1,    -1,    -1,  2561,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2583,    -1,   687,    -1,
      -1,    -1,    -1,  1809,    -1,    -1,    -1,    -1,    -1,  1191,
      -1,   700,    -1,   702,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1831,    -1,    -1,    -1,    -1,
      -1,  1213,    -1,    -1,  1216,    -1,  1218,    -1,  1220,    -1,
    1222,    -1,  1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1916,    -1,   801,    -1,   803,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2712,    -1,    -1,  2715,    -1,
      -1,    -1,    -1,    -1,  1940,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1337,    -1,  1339,    -1,    -1,
      -1,    -1,    -1,  2750,    -1,    -1,  1551,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1560,    -1,  1359,    -1,  1361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2776,
      -1,    -1,    -1,    -1,    -1,  1580,    -1,    -1,    -1,  2786,
      -1,    -1,    -1,    -1,  1589,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2812,    -1,    -1,    -1,    -1,
      -1,    -1,  1617,    -1,    -1,  2041,   270,  2043,    -1,    -1,
     195,    -1,   197,   198,   199,   200,    -1,   202,    -1,    -1,
    1635,    -1,    -1,  1638,    -1,    -1,    -1,  1642,    -1,  2065,
      -1,  2067,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1674,
      -1,    -1,  2098,    -1,    -1,    -1,    -1,    -1,    -1,   988,
      -1,   990,   991,    -1,    -1,  1690,    -1,    -1,  1490,    -1,
    1492,    -1,  1001,    -1,  1699,    -1,    -1,    -1,    -1,    -1,
      -1,  2127,    -1,  1708,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1718,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2150,    -1,    -1,    -1,  2935,    -1,
      -1,  2938,    -1,    -1,  2160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1551,
     404,    -1,    -1,    -1,  1759,    -1,    -1,  2183,  1560,  2185,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1776,  2198,    -1,  2200,    -1,    -1,    -1,  1580,    -1,
      -1,    -1,    -1,  2209,    -1,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2230,    -1,  2232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1617,  2242,    -1,    -1,  2245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1213,    -1,    -1,  1216,    -1,  1218,
      -1,  1220,    -1,  1222,  2340,  1224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   587,    -1,    -1,    -1,    -1,    -1,    -1,
    1249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2394,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   526,   527,    -1,    -1,   530,   531,    -1,
      -1,  1793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1809,    -1,    -1,
      -1,  2437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1337,  1831,
    1339,    -1,    -1,    -1,    -1,    -1,    -1,  2463,    -1,   614,
    2466,   616,    -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,
    1359,    -1,  1361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     635,    -1,   637,    -1,    -1,    -1,  2492,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   656,  2508,    -1,    -1,  2511,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2521,    -1,    -1,   673,    -1,
      -1,    -1,    -1,    -1,  2530,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   687,    -1,  1916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2127,    -1,    -1,   700,  2552,   702,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,  1940,    -1,
      -1,  1943,    -1,    -1,    -1,  2150,    -1,   801,    -1,   803,
      -1,   805,    -1,    -1,    -1,  2160,    -1,  2583,    -1,    -1,
      -1,    -1,    -1,    -1,  1966,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2183,    -1,
    2185,  1490,    -1,  1492,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2230,   801,  2232,   803,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2242,    -1,  2041,
    2245,  2043,  1551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1560,   906,    -1,   908,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2065,    -1,  2067,    -1,    -1,    -1,    -1,
      -1,  1580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1589,    -1,    -1,    -1,    -1,    -1,  2712,    -1,    -1,  2715,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1617,    -1,
      -1,  2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2750,  2127,  1635,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   988,    -1,   990,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2150,    -1,
    2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2160,    -1,
    2786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2183,    -1,  2185,    -1,    -1,  2812,  1041,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1131,    -1,    -1,
    1023,    -1,    -1,    -1,  1793,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,
    1809,    -1,    -1,  2508,    -1,    -1,  2511,    -1,  1051,  2935,
      -1,    -1,  2938,    -1,    -1,    -1,  2521,    -1,    -1,    -1,
      -1,    -1,  1831,    -1,  1067,  2530,    -1,    -1,    -1,    -1,
      -1,  1074,  1075,    -1,    -1,    -1,    -1,    -1,  2340,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   526,   527,
      -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,  2583,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1131,    -1,
      -1,    -1,  2394,    -1,    -1,  2397,    -1,  1140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1916,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1940,   590,    -1,  1943,  2437,    -1,    -1,  1213,    -1,
      -1,  1216,    -1,  1218,    -1,  1220,    -1,  1222,    -1,  1224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1966,    -1,  1234,
      -1,  2463,    -1,    -1,  2466,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,
    2492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1359,  2508,  1361,    -1,  2511,
      -1,    -1,    -1,    -1,    -1,    -1,   526,   527,    -1,  2521,
     530,    -1,    -1,    -1,    -1,    -1,  1380,    -1,  2530,    -1,
      -1,    -1,  2041,    -1,  2043,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2750,    -1,    -1,    -1,    -1,
    2552,    -1,    -1,    -1,    -1,    -1,  2065,    -1,  2067,  2561,
      -1,    -1,  1337,    -1,  1339,    -1,    -1,    -1,    -1,    -1,
      -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     590,  2786,    -1,    -1,  1359,    -1,  1361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,    -1,   526,
     527,    -1,    -1,   530,    -1,    -1,    -1,    -1,  2127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1490,    -1,  1492,    -1,
    1494,  2150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   590,  2183,    -1,  2185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2198,
      -1,  2200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,
    2712,    -1,    -1,  2715,    -1,  1490,    -1,  1492,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2935,    -1,    -1,  2938,    -1,  1589,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2750,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2776,    -1,  1551,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2786,  1560,    -1,    -1,  1642,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1580,    -1,    -1,  1551,    -1,
    2812,    -1,    -1,    -1,  1589,    -1,    -1,  1560,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     988,  2340,   990,   991,    -1,    -1,    -1,  1580,    -1,    -1,
      -1,    -1,  1617,  1001,    -1,    -1,  1589,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1635,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1041,  1042,  2394,    -1,    -1,  2397,    -1,
      -1,    -1,  1635,  1051,  1748,  1638,    -1,    -1,    -1,  1642,
      -1,    -1,    -1,    -1,    -1,  1759,    -1,    -1,  1651,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2437,    -1,
      -1,  1674,    -1,  2935,    -1,    -1,  2938,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,
      -1,    -1,  1695,    -1,  2463,    -1,  1699,  2466,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1708,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1131,    -1,    -1,    -1,    -1,   988,    -1,
     990,   991,  1140,  2492,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2508,
      -1,    -1,  2511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2521,  1023,    -1,    -1,  1759,    -1,  1793,    -1,
      -1,  2530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1041,  1042,  1776,  1809,    -1,    -1,    -1,    -1,    -1,
      -1,  1051,    -1,  2552,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2561,    -1,    -1,    -1,  1831,    -1,    -1,    -1,
      -1,    -1,  1916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   988,    -1,   990,   991,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1001,    -1,  1940,    -1,    -1,  1943,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,  1966,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1131,    -1,    -1,  1041,  1042,    -1,    -1,    -1,    -1,
    1140,    -1,    -1,    -1,  1051,    -1,    -1,    -1,    -1,    -1,
      -1,  1916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1940,    -1,    -1,  1943,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2041,    -1,  2043,
      -1,  1966,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2712,    -1,    -1,  2715,    -1,    -1,    -1,
      -1,  2065,    -1,  2067,  1131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2089,    -1,    -1,    -1,    -1,
      -1,  2750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2041,  2776,  2043,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2786,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2065,    -1,  2067,    -1,    -1,    -1,  2150,    -1,    -1,    -1,
      -1,    -1,    -1,  2812,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,
      -1,    -1,  2127,    -1,    -1,  2209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2150,  2230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2127,  2160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1560,    -1,    -1,    -1,    -1,  2150,  2183,    -1,
    2185,    -1,    -1,    -1,    -1,    -1,    -1,  2160,    -1,    -1,
      -1,    -1,  1580,  2198,    -1,  2200,  2935,    -1,    -1,  2938,
      -1,  1589,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2183,    -1,  2185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,    -1,  1617,
      -1,    -1,  2316,    -1,    -1,    -1,  2209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,
    1638,    -1,    -1,    -1,  1642,    -1,    -1,  2230,    -1,  2232,
      -1,    -1,    -1,  1651,    -1,    -1,    -1,    -1,    -1,  2242,
      -1,    -1,  2245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2394,  1551,    -1,  2397,    -1,    -1,    -1,    -1,    -1,    -1,
    1560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2340,    -1,    -1,    -1,    -1,
    1580,    -1,    -1,  2316,    -1,    -1,    -1,    -1,    -1,  1589,
      -1,    -1,    -1,  2437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1759,    -1,    -1,    -1,    -1,    -1,  1617,    -1,  2463,
      -1,    -1,  2466,    -1,    -1,    -1,    -1,    -1,  1776,  2394,
      -1,    -1,  2397,    -1,    -1,  1635,    -1,    -1,  1638,    -1,
      -1,    -1,  1642,    -1,  1551,    -1,    -1,    -1,  2492,    -1,
      -1,  1651,    -1,  1560,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2437,  1580,  1674,    -1,    -1,  2521,    -1,    -1,
      -1,    -1,  1589,    -1,    -1,    -1,  2530,    -1,    -1,    -1,
    1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2463,    -1,
      -1,  2466,    -1,    -1,    -1,    -1,    -1,    -1,  2552,    -1,
    1617,    -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2492,  1635,    -1,
      -1,  1638,    -1,    -1,    -1,  1642,    -1,    -1,    -1,  2583,
      -1,    -1,    -1,  2508,  1651,    -1,  2511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2521,    -1,    -1,  1759,
      -1,    -1,    -1,    -1,    -1,  2530,    -1,  1674,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2508,  1776,    -1,  2511,    -1,
      -1,    -1,    -1,  1690,    -1,    -1,    -1,  2552,  2521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2561,  2530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2561,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2583,    -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2712,  1776,
      -1,  2715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2750,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2786,    -1,    -1,    -1,    -1,  2712,    -1,    -1,
    2715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2127,
      -1,    -1,    -1,    -1,    -1,  2750,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2776,  2160,    -1,    -1,    -1,    -1,  2750,    -1,    -1,
      -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2183,    -1,  2185,    -1,    -1,
      -1,    -1,    -1,  2776,    -1,    -1,    -1,  2812,    -1,    -1,
    2198,    -1,  2200,  2786,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,
      -1,    -1,  2230,    -1,  2232,    -1,    -1,    -1,    -1,    -1,
      -1,  2935,    -1,    -1,  2938,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2316,    -1,
    2935,    -1,    -1,  2938,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2183,    -1,  2185,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,
    2200,    -1,  2935,    -1,    -1,  2938,    -1,    -1,    -1,  2209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2230,    -1,  2232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2183,    -1,  2185,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2316,    -1,    -1,    -1,
      -1,    -1,    -1,  2230,    -1,  2232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2508,    -1,    -1,  2511,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2521,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2552,    -1,    -1,    -1,    -1,  2316,
      -1,    -1,    -1,  2561,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2583,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2508,    -1,
      -1,  2511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2561,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2583,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2508,  2750,    -1,  2511,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2521,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2530,    -1,    -1,    -1,    -1,  2776,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2786,    -1,
      -1,    -1,    -1,    -1,    -1,  2552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2561,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2812,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2583,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2776,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2786,  2935,    -1,    -1,
    2938,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2750,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2776,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2786,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2812,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2935,    -1,    -1,  2938,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2935,    -1,
      -1,  2938
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
      30,    31,    32,   770,   818,   860,   903,   963,   971,   973,
     977,   981,   986,  1002,  1062,  1064,   680,    35,    38,    39,
      40,    41,    42,    43,   779,   827,   874,   981,   986,  1002,
    1008,  1015,  1033,  1035,  1038,  1039,  1054,  1064,   682,   780,
     828,   875,   981,   986,  1002,  1008,  1015,  1033,  1035,  1039,
    1054,  1064,   304,   765,   758,   690,   692,   351,     5,     6,
     697,    35,    64,   788,   834,   881,   981,   986,  1002,  1012,
    1033,  1051,    30,    65,   804,   850,   897,   979,   986,  1008,
    1033,  1039,  1070,    66,    67,   805,   851,   898,  1045,  1047,
      41,   806,   852,   899,   981,   986,  1002,  1008,  1037,  1064,
      68,   808,   853,   900,   981,   986,  1002,  1006,  1037,     4,
       5,     6,    11,    15,   811,   855,   902,   235,   412,   424,
     438,   551,   981,   745,   249,    25,    36,   273,   274,   275,
     276,   975,   249,   750,    23,    56,    57,    58,    60,   782,
     829,   876,   939,   986,  1008,  1015,  1020,  1027,  1029,  1031,
    1033,  1039,  1064,    23,   134,   135,   136,   137,   138,   139,
     140,   141,   375,   413,   425,   439,   441,   442,   443,   446,
     470,   472,   485,   906,   973,   981,   986,  1002,  1062,    33,
     138,   218,   465,   554,   555,   556,   557,   558,   559,   560,
      33,   719,     4,    33,   562,   592,   102,   103,   778,   826,
     873,   965,   969,   973,   981,   986,  1002,  1062,  1070,   165,
     220,     4,     6,     8,    11,    13,    73,   101,   165,   267,
     270,   271,   312,   331,   333,   335,   340,   346,   355,   359,
     361,   365,   392,   561,   566,   576,   586,   591,   596,   606,
     616,   621,   626,   631,   636,   641,   646,   656,   666,   675,
     677,   683,   687,   694,   696,   700,   704,   708,   710,   714,
     716,   718,   720,   722,   724,   726,   732,   734,   737,   740,
     746,   249,   368,   336,    23,   150,   151,   152,   376,   414,
     426,   439,   441,   442,   443,   470,   487,   489,   491,   909,
     973,   981,   986,  1002,  1008,  1033,  1062,  1070,   155,   156,
     157,   158,   159,   203,   378,   416,   428,   492,   493,   494,
     495,   497,   498,     5,     6,     9,   597,   627,     8,     9,
     632,   341,   166,   166,   349,    23,   107,   171,   172,   173,
     190,   193,   382,   420,   432,   443,   446,   499,   510,   512,
     514,   519,   539,   929,   969,   981,   986,  1002,  1038,   411,
     423,   437,   446,   161,   207,   208,   249,   387,   390,   391,
     407,   408,   409,   160,   162,   213,   394,   396,   399,   400,
     406,   407,   408,   409,   410,   249,   367,   325,     8,    75,
     323,   319,   321,   222,   224,   225,   226,   228,   539,   771,
     819,   861,   862,   863,   864,   990,   994,   996,   998,  1000,
     138,   777,   825,   870,   686,   794,   840,   887,   903,   963,
     971,   973,   977,   981,   986,  1002,  1008,  1015,  1033,  1035,
    1038,  1039,  1054,  1062,  1064,   688,   795,   841,   888,   903,
     963,   971,   973,   977,   981,   986,  1002,  1008,  1015,  1033,
    1035,  1039,  1054,  1062,  1064,   796,   842,   889,   903,   963,
     971,   973,   977,   979,   981,   986,  1002,  1008,  1033,  1039,
    1062,  1064,   797,   843,   890,   903,   963,   971,   973,   977,
     981,   986,  1002,  1008,  1062,  1064,   798,   844,   891,   903,
     963,   971,   973,   977,   981,   986,  1002,  1062,  1064,    33,
     723,   799,   845,   892,   903,   963,   971,   973,   977,   981,
     986,  1002,  1062,  1064,   249,   964,   249,   987,  1003,  1063,
     972,  1065,   249,   249,   247,   860,   783,   830,   877,   939,
     981,   986,  1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,
    1035,  1038,  1039,  1054,  1064,   249,   249,  1055,  1034,   249,
    1036,   256,   874,   784,   831,   878,   939,   981,   986,  1002,
    1008,  1015,  1020,  1027,  1029,  1031,  1033,  1035,  1039,  1054,
    1064,   256,   875,   249,   305,   249,   249,    61,    62,    63,
     787,   833,   880,  1015,  1020,  1029,  1041,  1043,  1044,   249,
     186,   191,   192,   249,   384,   422,   436,   525,   535,   537,
      33,   699,    33,   701,   789,   835,   882,   939,   981,   986,
    1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,  1039,  1051,
    1064,  1013,   249,   256,   881,  1071,   249,   256,   897,  1046,
    1048,   256,   899,  1007,   256,   900,    23,   256,   951,   249,
     247,   438,   812,   856,   902,   233,   755,   756,   249,   277,
     247,   275,   233,   751,   752,    59,    69,   813,   814,   857,
     967,  1049,   249,  1028,  1030,   249,  1032,   256,   876,   249,
     440,   249,   447,   471,   249,   486,   247,   425,   466,   247,
     558,   247,   557,   721,   439,   441,   442,   443,   470,   487,
     489,   491,   800,   846,   893,   909,   973,   981,   986,  1002,
    1008,  1033,  1062,  1064,     5,     6,   567,   563,   564,   565,
     965,   969,   973,   981,   986,  1002,  1012,  1033,  1051,  1062,
    1070,   593,   594,   595,   965,   969,   973,   979,   981,   986,
    1002,  1008,  1033,  1039,  1062,  1070,   966,   970,   247,   873,
      33,   676,     4,   733,   738,   741,     8,     4,   101,   233,
     369,    23,   377,   415,   427,   439,   441,   442,   443,   470,
     487,   489,   491,   935,   973,   981,   986,  1002,  1008,  1015,
    1020,  1027,  1029,  1031,  1033,  1039,  1062,  1064,   249,   488,
     490,   247,   426,   249,   233,   247,   428,    33,   602,    33,
     607,   622,    23,   443,   446,   499,   510,   514,   519,   539,
     598,   599,   600,   915,   963,   971,   973,   977,   981,   986,
    1002,  1038,  1062,  1064,    23,   443,   446,   499,   510,   514,
     519,   539,   628,   629,   630,   919,   981,   986,  1002,  1008,
    1015,  1020,  1027,  1029,  1031,  1033,  1038,  1039,  1064,     4,
      33,   637,   647,   443,   446,   499,   510,   514,   519,   539,
     633,   634,   635,   929,   965,   969,   973,   981,   986,  1002,
    1038,  1062,  1070,    23,   163,   164,   379,   417,   429,   499,
     506,   508,   539,   912,   343,   345,    23,   107,   187,   383,
     421,   433,   434,   435,   446,   503,   525,   530,   932,  1038,
     249,   249,   511,   513,   515,   520,   540,   247,   432,   247,
     437,   233,   388,   389,   249,   401,   185,   210,   211,   212,
     395,   398,   402,   403,   404,   405,   247,   400,   247,   399,
     233,   374,   775,   823,   868,   981,   986,  1002,  1012,  1033,
    1051,   327,   443,   446,   499,   510,   514,   519,   539,   774,
     822,   867,   929,   965,   969,   973,   981,   986,  1002,  1038,
    1062,  1070,   221,   223,   772,   820,   865,   988,   990,   992,
     994,   996,   998,  1000,  1064,   773,   821,   866,   988,   990,
     992,   994,   996,   998,  1000,  1064,   991,   997,   999,  1001,
     995,   247,   861,   988,   992,  1064,   871,   247,   870,    23,
     786,   832,   879,   942,   963,   971,   973,   977,   981,   986,
    1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,  1035,  1039,
    1054,  1062,  1064,   256,   887,   786,   256,   888,   256,   889,
     256,   890,   256,   891,   725,    23,   439,   441,   442,   470,
     487,   489,   491,   802,   848,   895,   954,   963,   971,   973,
     977,   981,   986,  1002,  1008,  1033,  1038,  1062,  1064,   256,
     892,     4,   233,   904,   249,    26,    27,    28,    74,   974,
     249,   249,   249,   249,   249,    75,    76,    77,   978,    93,
      94,    95,    96,    97,    98,    99,   100,   233,   982,   985,
     860,   256,   877,    44,   233,  1009,  1014,    52,    53,    54,
     233,  1017,  1019,   249,   249,   219,  1040,   249,   874,   256,
     878,   875,   233,    37,   307,   308,   309,   310,    72,   233,
     766,   767,   768,   769,    87,    88,   242,   243,   244,   253,
     254,   255,   759,   760,  1042,   256,   880,   233,   693,   249,
     536,   249,   233,   385,   386,   247,   436,   703,   790,   836,
     883,   903,   963,   971,   973,   977,   981,   986,  1002,  1008,
    1015,  1033,  1035,  1038,  1039,  1051,  1054,  1062,  1064,   705,
     791,   837,   884,   903,   963,   971,   973,   977,   981,   986,
    1002,  1008,  1015,  1033,  1035,  1039,  1051,  1054,  1062,  1064,
     256,   882,   249,    47,  1052,   881,   249,     4,    18,   101,
     980,   897,   249,   249,   899,   249,   900,   249,   951,    87,
      88,    91,    92,   233,   242,   243,   244,   253,   254,   255,
     552,   553,   438,   247,   250,   976,   249,   275,   247,   250,
     968,   249,   247,   857,    33,   233,   940,   249,   249,   233,
    1022,   249,   876,    34,   233,   907,   249,    87,    88,    91,
      92,   233,   242,   243,   244,   253,   254,   255,   444,   445,
     249,   249,   142,   233,   473,   475,   249,   425,   249,   558,
     557,   439,   441,   442,   443,   470,   487,   489,   491,   801,
     847,   894,   935,   973,   981,   986,  1002,  1008,  1015,  1020,
    1027,  1029,  1031,  1033,  1039,  1062,  1064,   256,   893,    33,
     572,    33,   577,   568,   569,   570,   939,   965,   969,   973,
     981,   986,  1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,
    1039,  1051,  1062,  1064,   247,   565,   247,   595,   249,   249,
     873,   684,   781,  1038,   807,  1038,    68,   809,   854,   901,
    1004,  1038,   810,  1038,     4,     8,   250,   249,   247,   427,
     149,   233,   910,   249,   249,   426,   160,   161,   162,   496,
     428,   612,   443,   446,   499,   510,   514,   519,   539,   603,
     604,   605,   915,   963,   971,   973,   977,   981,   986,  1002,
    1008,  1015,  1033,  1035,  1038,  1039,  1051,  1054,  1062,  1064,
     617,   443,   446,   499,   510,   514,   519,   539,   608,   609,
     610,   915,   963,   971,   973,   977,   981,   986,  1002,  1008,
    1015,  1033,  1035,  1038,  1039,  1051,  1054,  1062,  1064,   443,
     446,   499,   510,   514,   519,   539,   623,   624,   625,   915,
     963,   971,   973,   977,   979,   981,   986,  1002,  1008,  1033,
    1038,  1039,  1062,  1064,   249,   247,   600,   249,   247,   630,
       5,     6,   642,   443,   446,   499,   510,   514,   519,   539,
     638,   639,   640,   929,   965,   969,   973,   981,   986,  1002,
    1012,  1033,  1038,  1051,  1062,  1070,   443,   446,   499,   510,
     514,   519,   539,   648,   649,   650,   929,   965,   969,   973,
     979,   981,   986,  1002,  1008,  1033,  1038,  1039,  1062,  1070,
     247,   635,   249,   507,   509,   247,   429,    23,   380,   418,
     430,   446,   499,   539,   923,  1038,    23,   381,   419,   431,
     446,   499,   539,   926,  1038,   249,   249,   249,   247,   433,
     165,   233,   930,   169,   170,   233,   500,   502,   249,   249,
     249,   249,   249,   432,   437,   247,   250,   388,   249,   247,
     397,   399,   400,   395,   400,   395,   399,   250,   247,   868,
      30,   443,   446,   499,   510,   514,   519,   539,   776,   824,
     869,   929,   965,   969,   973,   981,   986,   992,  1002,  1012,
    1033,  1038,  1051,  1062,  1064,  1070,   247,   867,   989,   993,
     247,   865,   247,   866,   249,   249,   249,   249,   249,   861,
     249,   870,   249,   256,   879,   887,   888,   889,   890,   891,
      23,   439,   441,   442,   470,   487,   489,   491,   803,   849,
     896,   958,   963,   971,   973,   977,   981,   986,  1002,  1008,
    1015,  1020,  1027,  1029,  1031,  1033,  1038,  1039,  1062,  1064,
     249,   256,   895,   892,   248,   250,   233,   258,   250,   233,
     259,   260,   260,   260,   260,    78,    79,    80,    87,    88,
      91,    92,   233,   242,   243,   244,   253,   254,   255,  1066,
    1067,  1068,  1069,   250,   247,   250,   248,   877,   247,   250,
     248,   247,   248,   250,   249,    45,    46,    47,    48,    49,
      50,    51,    55,  1056,  1057,  1058,  1060,  1061,   258,   250,
     258,   878,   306,   311,   247,   309,   250,   248,   250,   248,
     249,   880,   250,   188,   233,   526,   528,   249,   113,   114,
     115,   538,   247,   250,   436,   792,   838,   885,   942,   963,
     971,   973,   977,   981,   986,  1002,  1008,  1015,  1020,  1027,
    1029,  1031,  1033,  1035,  1038,  1039,  1051,  1054,  1062,  1064,
     256,   883,   793,   839,   886,   942,   963,   971,   973,   977,
     981,   986,  1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,
    1035,  1039,  1051,  1054,  1062,  1064,   256,   884,   882,   260,
    1053,   250,    80,  1067,  1072,  1073,   250,   260,   260,   260,
      14,   233,   952,   248,   755,   250,   105,   106,   107,   108,
     281,   282,   285,   751,   249,    93,    94,    95,    96,    97,
      98,    99,   100,   233,  1050,   857,   248,   250,   260,   260,
     247,   248,   250,   260,   248,   250,   258,   248,   142,   143,
     145,   146,   147,   148,   448,   449,   450,   460,   258,   476,
     247,   250,   248,   258,   215,   216,   467,   468,   256,   894,
     893,   582,   573,   574,   575,   903,   963,   965,   969,   971,
     973,   977,   981,   986,  1002,  1008,  1015,  1033,  1035,  1038,
    1039,  1051,  1054,  1062,  1064,   587,   578,   579,   580,   903,
     963,   965,   969,   971,   973,   977,   981,   986,  1002,  1008,
    1015,  1033,  1035,  1038,  1039,  1051,  1054,  1062,  1064,   247,
     570,   565,   595,   258,   258,   785,  1038,  1005,   256,   901,
       4,   138,   185,   217,   370,   371,   372,   461,    33,   149,
     233,   936,   427,   248,   250,   258,   258,   250,    23,   443,
     446,   499,   510,   514,   519,   539,   613,   614,   615,   946,
     963,   971,   973,   977,   981,   986,  1002,  1008,  1015,  1020,
    1027,  1029,  1031,  1033,  1035,  1038,  1039,  1054,  1062,  1064,
     247,   605,   443,   446,   499,   510,   514,   519,   539,   618,
     619,   620,   946,   963,   971,   973,   977,   981,   986,  1002,
    1008,  1015,  1020,  1027,  1029,  1031,  1033,  1035,  1038,  1039,
    1054,  1062,  1064,   247,   610,   247,   625,     4,   165,   233,
     916,   600,    33,   165,   233,   920,   630,    33,   652,    33,
     657,   443,   446,   499,   510,   514,   519,   539,   643,   644,
     645,   919,   965,   969,   973,   981,   986,  1002,  1008,  1015,
    1020,  1027,  1029,  1031,  1033,  1038,  1039,  1051,  1062,  1064,
     247,   640,   247,   650,   635,   165,   233,   913,   249,   249,
     429,   249,   247,   430,   249,   247,   431,   165,   233,   933,
     233,   504,   189,   233,   531,   533,   433,   248,   250,   247,
     250,   248,   260,   260,   174,   175,   176,   177,   178,   179,
     180,   516,   517,    93,    94,    95,    96,    97,    98,    99,
     100,   233,   521,   522,   523,   524,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   233,   541,   543,   546,   549,
     550,   389,   250,   258,   397,   247,   400,   247,   399,   247,
     395,   247,   395,   247,   400,   868,   247,   869,   867,   249,
     249,   865,   866,   259,   261,   259,   263,   264,   264,  1066,
     263,   145,   148,   872,     4,    33,   233,   943,   879,   249,
     256,   896,     4,   149,   233,   955,   895,   905,   250,   247,
     250,   250,   250,   250,   248,   247,   983,   984,  1010,  1011,
    1018,   233,   260,   250,   248,   247,   247,   250,   250,   250,
     249,   309,   539,   816,   817,   859,   233,   769,    70,   815,
     858,  1024,   233,   761,   762,   260,   787,   529,   247,   250,
     248,   260,   250,   385,   256,   885,   883,   256,   886,   884,
     250,   247,   248,   247,   250,   250,   250,   248,   250,   260,
     247,   248,   282,   283,   258,   250,   941,   250,   250,  1023,
     233,   250,   908,   250,   260,   451,   248,   247,   250,   249,
     474,   260,   250,   469,   250,   894,   583,   584,   585,   942,
     963,   965,   969,   971,   973,   977,   981,   986,  1002,  1008,
    1015,  1020,  1027,  1029,  1031,  1033,  1035,  1038,  1039,  1051,
    1054,  1062,  1064,   247,   575,   588,   589,   590,   942,   963,
     965,   969,   971,   973,   977,   981,   986,  1002,  1008,  1015,
    1020,  1027,  1029,  1031,  1033,  1035,  1038,  1039,  1051,  1054,
    1062,  1064,   247,   580,   570,   250,   250,   249,   901,   462,
     249,   248,   248,   250,   911,   250,   250,   249,   247,   615,
     605,   247,   620,   610,   625,   248,   248,   250,   248,   248,
     250,   662,   443,   446,   499,   510,   514,   519,   539,   653,
     654,   655,   915,   963,   965,   969,   971,   973,   977,   981,
     986,  1002,  1008,  1015,  1033,  1035,  1038,  1039,  1051,  1054,
    1062,  1064,   667,   443,   446,   499,   510,   514,   519,   539,
     658,   659,   660,   915,   963,   965,   969,   971,   973,   977,
     981,   986,  1002,  1008,  1015,  1033,  1035,  1038,  1039,  1051,
    1054,  1062,  1064,   247,   645,   640,   650,   166,   250,   260,
     260,   165,   233,   924,   430,   165,   233,   927,   431,   185,
     250,   247,   250,   534,   247,   250,   248,   931,   501,   260,
     250,   250,   250,   248,   250,   247,   249,   249,   249,   247,
     250,   248,   194,   195,   247,   544,   547,   549,   550,   250,
     400,   399,   395,   395,   400,   869,   261,   264,   247,   250,
     248,   247,   250,   250,   248,   250,   248,   248,   248,   250,
       4,    33,   149,   233,   959,   896,   248,   248,   250,   258,
     259,   259,   262,  1067,   260,   260,   260,   260,   260,  1016,
     250,  1057,    45,    46,    55,  1059,   233,   281,   247,   859,
     249,   247,   248,   250,   249,   527,   260,   250,   885,   886,
     233,   260,  1067,   953,   250,   282,   278,   238,   250,   258,
     260,  1021,   258,   250,   249,   260,   449,   233,   477,   478,
     260,   248,   247,   585,   575,   247,   590,   580,   260,   249,
     143,   145,   146,   147,   148,   215,   216,   373,   938,   937,
     258,     4,    33,   165,   233,   947,   615,   620,   918,   917,
     922,   921,   443,   446,   499,   510,   514,   519,   539,   663,
     664,   665,   946,   963,   965,   969,   971,   973,   977,   981,
     986,  1002,  1008,  1015,  1020,  1027,  1029,  1031,  1033,  1035,
    1038,  1039,  1051,  1054,  1062,  1064,   247,   655,   443,   446,
     499,   510,   514,   519,   539,   668,   669,   670,   946,   963,
     965,   969,   971,   973,   977,   981,   986,  1002,  1008,  1015,
    1020,  1027,  1029,  1031,  1033,  1035,  1038,  1039,  1051,  1054,
    1062,  1064,   247,   660,   645,   248,   250,   250,   167,   250,
     168,   250,   248,   505,   249,   532,   260,   258,   260,   181,
     182,   183,   184,   518,   521,   233,   233,   233,   542,   260,
     544,   549,   194,   195,   247,   545,   548,   549,   550,   250,
     250,   259,   227,   264,   260,   260,   945,   944,   248,   248,
     248,   250,   956,   957,   247,   250,   250,   250,   859,    71,
    1025,   761,   233,   763,   233,   260,   250,   258,     4,     7,
       8,   101,   266,   271,   280,   303,   312,   671,   677,   679,
     689,   694,   696,   698,   702,   726,   728,   730,   734,   735,
     742,   744,   746,   748,   251,   250,   233,   452,   453,   250,
     233,   480,   247,   250,   260,   585,   590,   250,   145,   146,
     147,   148,   463,   464,   250,   258,   258,   248,   248,   248,
     250,   258,   258,   258,   258,   247,   665,   655,   247,   670,
     660,   914,   166,   166,   934,   260,   233,   260,   250,   250,
     250,   260,   545,   549,   247,   549,   249,   250,   250,   258,
     258,   960,   962,   961,   258,   258,   259,   238,   250,   250,
      33,     4,   279,     4,   109,   111,   112,   119,   120,   121,
     233,   286,   287,   288,   290,   291,   293,   294,   295,   297,
     298,   233,   455,   247,   250,   479,   238,   478,   250,   248,
     949,   948,   950,   665,   670,   258,   248,   248,   258,   250,
     549,   259,   258,   258,   258,   233,  1026,   250,   249,   249,
     249,   249,   249,   249,   249,   249,   247,   284,   287,   454,
     238,   453,   238,   233,   481,   258,   258,   258,   258,   925,
     928,   250,   299,   110,   301,   301,   301,   301,   301,   301,
     301,   287,   252,   238,   233,   456,   481,   482,   258,   258,
     300,   301,   249,   233,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   296,   113,   114,   115,
     116,   117,   118,   292,   233,   233,   233,   250,   456,   457,
     248,   250,   770,   233,   289,   250,   250,   248,   233,   302,
     250,   233,   483,   250,   458,   248,   484,   248,   248,   459,
     233,   233
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
     862,   861,   861,   863,   861,   861,   861,   861,   864,   861,
     861,   861,   865,   865,   865,   865,   865,   865,   865,   865,
     866,   866,   866,   866,   866,   866,   866,   866,   867,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   867,
     867,   867,   867,   867,   867,   868,   868,   868,   868,   868,
     868,   869,   869,   869,   869,   869,   869,   869,   869,   869,
     869,   869,   869,   869,   869,   869,   869,   869,   869,   869,
     869,   869,   869,   871,   870,   872,   872,   873,   873,   873,
     873,   873,   873,   873,   873,   874,   874,   874,   874,   874,
     874,   874,   874,   874,   874,   874,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   877,   877,   877,
     877,   877,   877,   877,   877,   877,   877,   877,   877,   877,
     877,   877,   877,   878,   878,   878,   878,   878,   878,   878,
     878,   878,   878,   878,   878,   878,   878,   878,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   880,   880,
     880,   880,   880,   880,   881,   881,   881,   881,   881,   881,
     882,   882,   882,   882,   882,   882,   882,   882,   882,   882,
     882,   882,   882,   882,   883,   883,   883,   883,   883,   883,
     883,   883,   883,   883,   883,   883,   883,   883,   883,   883,
     883,   883,   884,   884,   884,   884,   884,   884,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   885,
     885,   885,   885,   885,   885,   885,   885,   885,   885,   885,
     885,   885,   885,   885,   885,   885,   885,   885,   885,   885,
     885,   886,   886,   886,   886,   886,   886,   886,   886,   886,
     886,   886,   886,   886,   886,   886,   886,   886,   886,   886,
     886,   886,   887,   887,   887,   887,   887,   887,   887,   887,
     887,   887,   887,   887,   887,   887,   887,   887,   887,   888,
     888,   888,   888,   888,   888,   888,   888,   888,   888,   888,
     888,   888,   888,   888,   888,   889,   889,   889,   889,   889,
     889,   889,   889,   889,   889,   889,   889,   889,   889,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   890,   890,
     891,   891,   891,   891,   891,   891,   891,   891,   891,   891,
     892,   892,   892,   892,   892,   892,   892,   892,   892,   892,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   894,   894,   894,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   897,   897,   897,   897,
     897,   897,   898,   898,   899,   899,   899,   899,   899,   899,
     900,   900,   900,   900,   900,   901,   901,   902,   902,   902,
     902,   902,   903,   905,   904,   904,   906,   908,   907,   907,
     909,   911,   910,   910,   912,   914,   913,   913,   915,   917,
     916,   918,   916,   916,   919,   921,   920,   922,   920,   920,
     923,   925,   924,   924,   926,   928,   927,   927,   929,   931,
     930,   930,   932,   934,   933,   933,   935,   937,   936,   938,
     936,   936,   939,   941,   940,   940,   942,   944,   943,   945,
     943,   943,   946,   948,   947,   949,   947,   950,   947,   947,
     951,   953,   952,   952,   954,   956,   955,   957,   955,   955,
     958,   960,   959,   961,   959,   962,   959,   959,   964,   963,
     966,   965,   968,   967,   970,   969,   972,   971,   973,   974,
     974,   974,   974,   975,   976,   977,   978,   978,   978,   979,
     980,   980,   980,   981,   982,   983,   982,   984,   982,   985,
     985,   985,   985,   985,   985,   985,   985,   985,   987,   986,
     989,   988,   991,   990,   993,   992,   995,   994,   997,   996,
     999,   998,  1001,  1000,  1003,  1002,  1005,  1004,  1007,  1006,
    1008,  1009,  1010,  1009,  1011,  1009,  1013,  1012,  1014,  1015,
    1016,  1015,  1017,  1018,  1017,  1017,  1019,  1019,  1019,  1020,
    1021,  1020,  1022,  1023,  1022,  1024,  1025,  1026,  1028,  1027,
    1030,  1029,  1032,  1031,  1034,  1033,  1036,  1035,  1035,  1037,
    1038,  1039,  1040,  1042,  1041,  1043,  1044,  1046,  1045,  1048,
    1047,  1049,  1050,  1050,  1050,  1050,  1050,  1050,  1050,  1050,
    1050,  1051,  1052,  1053,  1052,  1055,  1054,  1056,  1056,  1057,
    1057,  1058,  1058,  1059,  1059,  1059,  1060,  1060,  1060,  1061,
    1061,  1061,  1061,  1061,  1063,  1062,  1065,  1064,  1066,  1066,
    1067,  1067,  1068,  1068,  1068,  1069,  1069,  1069,  1069,  1069,
    1069,  1069,  1069,  1069,  1069,  1071,  1070,  1072,  1072,  1073
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
       0,     2,     1,     0,     2,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     4,     1,     4,     0,     4,     1,
       4,     0,     4,     1,     4,     0,     5,     1,     4,     0,
       4,     0,     4,     1,     4,     0,     4,     0,     4,     1,
       4,     0,     6,     1,     4,     0,     6,     1,     4,     0,
       4,     1,     4,     0,     5,     1,     4,     0,     4,     0,
       4,     1,     4,     0,     4,     1,     4,     0,     4,     0,
       4,     1,     4,     0,     4,     0,     4,     0,     4,     1,
       4,     0,     4,     1,     4,     0,     4,     0,     4,     1,
       4,     0,     4,     0,     4,     0,     4,     1,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     4,     1,
       1,     1,     1,     4,     0,     4,     1,     1,     1,     4,
       1,     1,     1,     4,     1,     0,     4,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     7,     0,     5,     0,     5,     0,     5,
       4,     1,     0,     4,     0,     4,     0,     5,     1,     4,
       0,     7,     1,     0,     4,     4,     1,     1,     1,     4,
       0,     7,     1,     0,     4,     4,     3,     1,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     5,     1,     1,
       1,     4,     1,     0,     5,     1,     1,     0,     5,     0,
       5,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     4,     0,     5,     1,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     7,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     1,     3,     1
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
#line 7893 "ompparser.cc"
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
#line 7908 "ompparser.cc"
    break;

  case 6: /* var_list_broad: variable  */
#line 123 "ompparser.yy"
                          { mpi_writer.addArg((yyvsp[0].stype)); logFile << "PASA POR LA COGISION DE VARIABLES PARA BROAD" << endl; }
#line 7914 "ompparser.cc"
    break;

  case 7: /* var_list_broad: var_list_broad ',' variable  */
#line 124 "ompparser.yy"
                                      { mpi_writer.addArg((yyvsp[0].stype)); }
#line 7920 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 127 "ompparser.yy"
                              { if(enReduce){mpi_writer.MPI_Reduce(false, (yyvsp[0].stype));} }
#line 7926 "ompparser.cc"
    break;

  case 9: /* var_list_reduction: var_list_reduction ',' variable  */
#line 128 "ompparser.yy"
                                          { if(enReduce){mpi_writer.MPI_Reduce(false, (yyvsp[0].stype));} }
#line 7932 "ompparser.cc"
    break;

  case 10: /* var_chunk: variable ':' CHUNK '(' variable ')'  */
#line 131 "ompparser.yy"
                                                { mpi_writer.addArg((yyvsp[-5].stype)); mpi_writer.addArg((yyvsp[-1].stype)); }
#line 7938 "ompparser.cc"
    break;

  case 178: /* $@1: %empty  */
#line 311 "ompparser.yy"
                    { }
#line 7944 "ompparser.cc"
    break;

  case 179: /* end_directive: END $@1 end_clause_seq  */
#line 311 "ompparser.yy"
                                       { }
#line 7950 "ompparser.cc"
    break;

  case 181: /* $@2: %empty  */
#line 317 "ompparser.yy"
                                        { }
#line 7956 "ompparser.cc"
    break;

  case 190: /* $@3: %empty  */
#line 334 "ompparser.yy"
                   { }
#line 7962 "ompparser.cc"
    break;

  case 191: /* $@4: %empty  */
#line 334 "ompparser.yy"
                                                              { }
#line 7968 "ompparser.cc"
    break;

  case 192: /* $@5: %empty  */
#line 334 "ompparser.yy"
                                                                                         { }
#line 7974 "ompparser.cc"
    break;

  case 194: /* when_variant_directive: variant_directive  */
#line 337 "ompparser.yy"
                                           { }
#line 7980 "ompparser.cc"
    break;

  case 195: /* when_variant_directive: %empty  */
#line 338 "ompparser.yy"
                  { ; }
#line 7986 "ompparser.cc"
    break;

  case 199: /* $@6: %empty  */
#line 346 "ompparser.yy"
                                             { }
#line 7992 "ompparser.cc"
    break;

  case 200: /* $@7: %empty  */
#line 346 "ompparser.yy"
                                                                             { }
#line 7998 "ompparser.cc"
    break;

  case 202: /* trait_set_selector_name: USER  */
#line 349 "ompparser.yy"
                               { }
#line 8004 "ompparser.cc"
    break;

  case 203: /* trait_set_selector_name: CONSTRUCT  */
#line 350 "ompparser.yy"
                            { }
#line 8010 "ompparser.cc"
    break;

  case 204: /* trait_set_selector_name: DEVICE  */
#line 351 "ompparser.yy"
                         { }
#line 8016 "ompparser.cc"
    break;

  case 205: /* trait_set_selector_name: IMPLEMENTATION  */
#line 352 "ompparser.yy"
                                 { }
#line 8022 "ompparser.cc"
    break;

  case 206: /* trait_selector_list: trait_selector  */
#line 355 "ompparser.yy"
                                     { }
#line 8028 "ompparser.cc"
    break;

  case 207: /* trait_selector_list: trait_selector_list trait_selector  */
#line 356 "ompparser.yy"
                                                     { }
#line 8034 "ompparser.cc"
    break;

  case 208: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 357 "ompparser.yy"
                                                         { }
#line 8040 "ompparser.cc"
    break;

  case 210: /* trait_selector: construct_selector  */
#line 361 "ompparser.yy"
                                     { }
#line 8046 "ompparser.cc"
    break;

  case 213: /* $@8: %empty  */
#line 366 "ompparser.yy"
                                                           { }
#line 8052 "ompparser.cc"
    break;

  case 219: /* context_kind_name: HOST  */
#line 377 "ompparser.yy"
                         { }
#line 8058 "ompparser.cc"
    break;

  case 220: /* context_kind_name: NOHOST  */
#line 378 "ompparser.yy"
                           { }
#line 8064 "ompparser.cc"
    break;

  case 221: /* context_kind_name: ANY  */
#line 379 "ompparser.yy"
                        { }
#line 8070 "ompparser.cc"
    break;

  case 222: /* context_kind_name: CPU  */
#line 380 "ompparser.yy"
                        { }
#line 8076 "ompparser.cc"
    break;

  case 223: /* context_kind_name: GPU  */
#line 381 "ompparser.yy"
                        { }
#line 8082 "ompparser.cc"
    break;

  case 224: /* context_kind_name: FPGA  */
#line 382 "ompparser.yy"
                         { }
#line 8088 "ompparser.cc"
    break;

  case 225: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 385 "ompparser.yy"
                                              { }
#line 8094 "ompparser.cc"
    break;

  case 226: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 388 "ompparser.yy"
                                                { }
#line 8100 "ompparser.cc"
    break;

  case 228: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 392 "ompparser.yy"
                                                                { }
#line 8106 "ompparser.cc"
    break;

  case 229: /* implementation_selector: EXPR_STRING  */
#line 393 "ompparser.yy"
                                      { }
#line 8112 "ompparser.cc"
    break;

  case 230: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 394 "ompparser.yy"
                                                          { }
#line 8118 "ompparser.cc"
    break;

  case 231: /* context_vendor_name: AMD  */
#line 397 "ompparser.yy"
                          { }
#line 8124 "ompparser.cc"
    break;

  case 232: /* context_vendor_name: ARM  */
#line 398 "ompparser.yy"
                          { }
#line 8130 "ompparser.cc"
    break;

  case 233: /* context_vendor_name: BSC  */
#line 399 "ompparser.yy"
                          { }
#line 8136 "ompparser.cc"
    break;

  case 234: /* context_vendor_name: CRAY  */
#line 400 "ompparser.yy"
                           { }
#line 8142 "ompparser.cc"
    break;

  case 235: /* context_vendor_name: FUJITSU  */
#line 401 "ompparser.yy"
                              { }
#line 8148 "ompparser.cc"
    break;

  case 236: /* context_vendor_name: GNU  */
#line 402 "ompparser.yy"
                          { }
#line 8154 "ompparser.cc"
    break;

  case 237: /* context_vendor_name: IBM  */
#line 403 "ompparser.yy"
                          { }
#line 8160 "ompparser.cc"
    break;

  case 238: /* context_vendor_name: INTEL  */
#line 404 "ompparser.yy"
                            { }
#line 8166 "ompparser.cc"
    break;

  case 239: /* context_vendor_name: LLVM  */
#line 405 "ompparser.yy"
                           { }
#line 8172 "ompparser.cc"
    break;

  case 240: /* context_vendor_name: PGI  */
#line 406 "ompparser.yy"
                          { }
#line 8178 "ompparser.cc"
    break;

  case 241: /* context_vendor_name: TI  */
#line 407 "ompparser.yy"
                         { }
#line 8184 "ompparser.cc"
    break;

  case 242: /* context_vendor_name: UNKNOWN  */
#line 408 "ompparser.yy"
                              { }
#line 8190 "ompparser.cc"
    break;

  case 244: /* parallel_selector: PARALLEL  */
#line 414 "ompparser.yy"
                             { }
#line 8196 "ompparser.cc"
    break;

  case 245: /* $@9: %empty  */
#line 415 "ompparser.yy"
                               { }
#line 8202 "ompparser.cc"
    break;

  case 249: /* $@10: %empty  */
#line 422 "ompparser.yy"
                                    { }
#line 8208 "ompparser.cc"
    break;

  case 251: /* $@11: %empty  */
#line 425 "ompparser.yy"
                                            { }
#line 8214 "ompparser.cc"
    break;

  case 253: /* $@12: %empty  */
#line 429 "ompparser.yy"
                                  { }
#line 8220 "ompparser.cc"
    break;

  case 261: /* $@13: %empty  */
#line 444 "ompparser.yy"
                     { }
#line 8226 "ompparser.cc"
    break;

  case 262: /* match_clause: MATCH $@13 '(' context_selector_specification ')'  */
#line 445 "ompparser.yy"
                                                       { }
#line 8232 "ompparser.cc"
    break;

  case 263: /* $@14: %empty  */
#line 449 "ompparser.yy"
                              { }
#line 8238 "ompparser.cc"
    break;

  case 265: /* $@15: %empty  */
#line 452 "ompparser.yy"
                            { enCluster = true; statePragma = 7; }
#line 8244 "ompparser.cc"
    break;

  case 267: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 455 "ompparser.yy"
                                            { }
#line 8250 "ompparser.cc"
    break;

  case 268: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 458 "ompparser.yy"
                                                    { }
#line 8256 "ompparser.cc"
    break;

  case 269: /* $@16: %empty  */
#line 461 "ompparser.yy"
                                      { }
#line 8262 "ompparser.cc"
    break;

  case 271: /* $@17: %empty  */
#line 464 "ompparser.yy"
                                          { }
#line 8268 "ompparser.cc"
    break;

  case 273: /* $@18: %empty  */
#line 467 "ompparser.yy"
                                        { enCluster = true;}
#line 8274 "ompparser.cc"
    break;

  case 275: /* $@19: %empty  */
#line 471 "ompparser.yy"
{
  enCluster = true;
  enDistribute = true;
  statePragma = 7;
}
#line 8284 "ompparser.cc"
    break;

  case 277: /* $@20: %empty  */
#line 479 "ompparser.yy"
{
 enCluster = true;
 enDistribute = true; 
 statePragma = 7;
}
#line 8294 "ompparser.cc"
    break;

  case 279: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 486 "ompparser.yy"
                                                      { enCluster = true;}
#line 8300 "ompparser.cc"
    break;

  case 280: /* $@21: %empty  */
#line 489 "ompparser.yy"
                                  { }
#line 8306 "ompparser.cc"
    break;

  case 282: /* $@22: %empty  */
#line 494 "ompparser.yy"
                      { }
#line 8312 "ompparser.cc"
    break;

  case 284: /* $@23: %empty  */
#line 496 "ompparser.yy"
                              { }
#line 8318 "ompparser.cc"
    break;

  case 286: /* $@24: %empty  */
#line 498 "ompparser.yy"
                                        { }
#line 8324 "ompparser.cc"
    break;

  case 288: /* taskyield_directive: TASKYIELD  */
#line 500 "ompparser.yy"
                                { }
#line 8330 "ompparser.cc"
    break;

  case 289: /* $@25: %empty  */
#line 502 "ompparser.yy"
                              { }
#line 8336 "ompparser.cc"
    break;

  case 291: /* $@26: %empty  */
#line 504 "ompparser.yy"
                                     { }
#line 8342 "ompparser.cc"
    break;

  case 293: /* $@27: %empty  */
#line 506 "ompparser.yy"
                                                 { }
#line 8348 "ompparser.cc"
    break;

  case 295: /* $@28: %empty  */
#line 508 "ompparser.yy"
                                               { }
#line 8354 "ompparser.cc"
    break;

  case 297: /* $@29: %empty  */
#line 510 "ompparser.yy"
                           { }
#line 8360 "ompparser.cc"
    break;

  case 299: /* $@30: %empty  */
#line 512 "ompparser.yy"
                                        { }
#line 8366 "ompparser.cc"
    break;

  case 301: /* $@31: %empty  */
#line 514 "ompparser.yy"
                                          { }
#line 8372 "ompparser.cc"
    break;

  case 303: /* $@32: %empty  */
#line 516 "ompparser.yy"
                        { }
#line 8378 "ompparser.cc"
    break;

  case 305: /* end_declare_target_directive: END DECLARE TARGET  */
#line 519 "ompparser.yy"
                                                  { }
#line 8384 "ompparser.cc"
    break;

  case 306: /* master_directive: MASTER  */
#line 521 "ompparser.yy"
                          { }
#line 8390 "ompparser.cc"
    break;

  case 307: /* barrier_directive: BARRIER  */
#line 523 "ompparser.yy"
                            { }
#line 8396 "ompparser.cc"
    break;

  case 308: /* $@33: %empty  */
#line 525 "ompparser.yy"
                              { }
#line 8402 "ompparser.cc"
    break;

  case 310: /* $@34: %empty  */
#line 527 "ompparser.yy"
                                { }
#line 8408 "ompparser.cc"
    break;

  case 312: /* $@35: %empty  */
#line 529 "ompparser.yy"
                              { }
#line 8414 "ompparser.cc"
    break;

  case 314: /* $@36: %empty  */
#line 531 "ompparser.yy"
                          { }
#line 8420 "ompparser.cc"
    break;

  case 316: /* $@37: %empty  */
#line 533 "ompparser.yy"
                            { }
#line 8426 "ompparser.cc"
    break;

  case 323: /* depobj: EXPR_STRING  */
#line 542 "ompparser.yy"
                     { }
#line 8432 "ompparser.cc"
    break;

  case 327: /* destroy_clause: DESTROY  */
#line 549 "ompparser.yy"
                        {}
#line 8438 "ompparser.cc"
    break;

  case 329: /* update_dependence_type: SOURCE  */
#line 554 "ompparser.yy"
                                { }
#line 8444 "ompparser.cc"
    break;

  case 330: /* update_dependence_type: IN  */
#line 555 "ompparser.yy"
                            { }
#line 8450 "ompparser.cc"
    break;

  case 331: /* update_dependence_type: OUT  */
#line 556 "ompparser.yy"
                             { }
#line 8456 "ompparser.cc"
    break;

  case 332: /* update_dependence_type: INOUT  */
#line 557 "ompparser.yy"
                               { }
#line 8462 "ompparser.cc"
    break;

  case 333: /* update_dependence_type: MUTEXINOUTSET  */
#line 558 "ompparser.yy"
                                       { }
#line 8468 "ompparser.cc"
    break;

  case 334: /* update_dependence_type: DEPOBJ  */
#line 559 "ompparser.yy"
                                { }
#line 8474 "ompparser.cc"
    break;

  case 335: /* update_dependence_type: SINK  */
#line 560 "ompparser.yy"
                              { }
#line 8480 "ompparser.cc"
    break;

  case 336: /* critical_name: EXPR_STRING  */
#line 563 "ompparser.yy"
                            { }
#line 8486 "ompparser.cc"
    break;

  case 355: /* extended_variable: EXPR_STRING  */
#line 594 "ompparser.yy"
                                { }
#line 8492 "ompparser.cc"
    break;

  case 363: /* flush_variable: EXPR_STRING  */
#line 606 "ompparser.yy"
                             { }
#line 8498 "ompparser.cc"
    break;

  case 369: /* $@38: %empty  */
#line 616 "ompparser.yy"
                          { }
#line 8504 "ompparser.cc"
    break;

  case 402: /* $@39: %empty  */
#line 659 "ompparser.yy"
                  { 
                     }
#line 8511 "ompparser.cc"
    break;

  case 404: /* read_clause: READ  */
#line 662 "ompparser.yy"
                   { }
#line 8517 "ompparser.cc"
    break;

  case 405: /* write_clause: WRITE  */
#line 664 "ompparser.yy"
                     { }
#line 8523 "ompparser.cc"
    break;

  case 406: /* update_clause: UPDATE  */
#line 666 "ompparser.yy"
                       { }
#line 8529 "ompparser.cc"
    break;

  case 407: /* capture_clause: CAPTURE  */
#line 668 "ompparser.yy"
                         { }
#line 8535 "ompparser.cc"
    break;

  case 408: /* seq_cst_clause: SEQ_CST  */
#line 671 "ompparser.yy"
                         { }
#line 8541 "ompparser.cc"
    break;

  case 409: /* acq_rel_clause: ACQ_REL  */
#line 673 "ompparser.yy"
                         { }
#line 8547 "ompparser.cc"
    break;

  case 410: /* release_clause: RELEASE  */
#line 675 "ompparser.yy"
                         { }
#line 8553 "ompparser.cc"
    break;

  case 411: /* acquire_clause: ACQUIRE  */
#line 677 "ompparser.yy"
                         { }
#line 8559 "ompparser.cc"
    break;

  case 412: /* relaxed_clause: RELAXED  */
#line 679 "ompparser.yy"
                         { }
#line 8565 "ompparser.cc"
    break;

  case 556: /* $@40: %empty  */
#line 856 "ompparser.yy"
                    { }
#line 8571 "ompparser.cc"
    break;

  case 558: /* untied_clause: UNTIED  */
#line 858 "ompparser.yy"
                      { }
#line 8577 "ompparser.cc"
    break;

  case 559: /* mergeable_clause: MERGEABLE  */
#line 860 "ompparser.yy"
                            { }
#line 8583 "ompparser.cc"
    break;

  case 560: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 862 "ompparser.yy"
                                                                                { }
#line 8589 "ompparser.cc"
    break;

  case 562: /* in_reduction_identifier: EXPR_STRING  */
#line 865 "ompparser.yy"
                                      { }
#line 8595 "ompparser.cc"
    break;

  case 563: /* in_reduction_enum_identifier: '+'  */
#line 868 "ompparser.yy"
                                   { }
#line 8601 "ompparser.cc"
    break;

  case 564: /* in_reduction_enum_identifier: '-'  */
#line 869 "ompparser.yy"
                                  { }
#line 8607 "ompparser.cc"
    break;

  case 565: /* in_reduction_enum_identifier: '*'  */
#line 870 "ompparser.yy"
                                  { }
#line 8613 "ompparser.cc"
    break;

  case 566: /* in_reduction_enum_identifier: '&'  */
#line 871 "ompparser.yy"
                                  { }
#line 8619 "ompparser.cc"
    break;

  case 567: /* in_reduction_enum_identifier: '|'  */
#line 872 "ompparser.yy"
                                  { }
#line 8625 "ompparser.cc"
    break;

  case 568: /* in_reduction_enum_identifier: '^'  */
#line 873 "ompparser.yy"
                                  { }
#line 8631 "ompparser.cc"
    break;

  case 569: /* in_reduction_enum_identifier: LOGAND  */
#line 874 "ompparser.yy"
                                     { }
#line 8637 "ompparser.cc"
    break;

  case 570: /* in_reduction_enum_identifier: LOGOR  */
#line 875 "ompparser.yy"
                                    { }
#line 8643 "ompparser.cc"
    break;

  case 571: /* in_reduction_enum_identifier: MAX  */
#line 876 "ompparser.yy"
                                  { }
#line 8649 "ompparser.cc"
    break;

  case 572: /* in_reduction_enum_identifier: MIN  */
#line 877 "ompparser.yy"
                                  { }
#line 8655 "ompparser.cc"
    break;

  case 573: /* $@41: %empty  */
#line 880 "ompparser.yy"
                                     { }
#line 8661 "ompparser.cc"
    break;

  case 574: /* depend_with_modifier_clause: DEPEND $@41 '(' depend_parameter ':' var_list ')'  */
#line 880 "ompparser.yy"
                                                                               { }
#line 8667 "ompparser.cc"
    break;

  case 576: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 884 "ompparser.yy"
                                                       { }
#line 8673 "ompparser.cc"
    break;

  case 578: /* $@42: %empty  */
#line 888 "ompparser.yy"
                                    { }
#line 8679 "ompparser.cc"
    break;

  case 582: /* $@43: %empty  */
#line 893 "ompparser.yy"
                                                    { }
#line 8685 "ompparser.cc"
    break;

  case 584: /* $@44: %empty  */
#line 894 "ompparser.yy"
                                        { }
#line 8691 "ompparser.cc"
    break;

  case 586: /* $@45: %empty  */
#line 896 "ompparser.yy"
                                         { }
#line 8697 "ompparser.cc"
    break;

  case 587: /* $@46: %empty  */
#line 896 "ompparser.yy"
                                                             { }
#line 8703 "ompparser.cc"
    break;

  case 588: /* depend_range_specification: EXPR_STRING $@45 ':' EXPR_STRING $@46 depend_range_step  */
#line 896 "ompparser.yy"
                                                                                   { }
#line 8709 "ompparser.cc"
    break;

  case 589: /* depend_range_step: %empty  */
#line 898 "ompparser.yy"
                              { }
#line 8715 "ompparser.cc"
    break;

  case 590: /* depend_range_step: ':' EXPR_STRING  */
#line 899 "ompparser.yy"
                                    { }
#line 8721 "ompparser.cc"
    break;

  case 591: /* depend_enum_type: IN  */
#line 901 "ompparser.yy"
                      { }
#line 8727 "ompparser.cc"
    break;

  case 592: /* depend_enum_type: OUT  */
#line 902 "ompparser.yy"
                       { }
#line 8733 "ompparser.cc"
    break;

  case 593: /* depend_enum_type: INOUT  */
#line 903 "ompparser.yy"
                         { }
#line 8739 "ompparser.cc"
    break;

  case 594: /* depend_enum_type: MUTEXINOUTSET  */
#line 904 "ompparser.yy"
                                 { }
#line 8745 "ompparser.cc"
    break;

  case 595: /* depend_enum_type: DEPOBJ  */
#line 905 "ompparser.yy"
                          { }
#line 8751 "ompparser.cc"
    break;

  case 596: /* $@47: %empty  */
#line 908 "ompparser.yy"
                              { }
#line 8757 "ompparser.cc"
    break;

  case 597: /* depend_depobj_clause: DEPEND $@47 '(' dependence_depobj_parameter ')'  */
#line 908 "ompparser.yy"
                                                                     {
}
#line 8764 "ompparser.cc"
    break;

  case 599: /* dependence_depobj_type: IN  */
#line 913 "ompparser.yy"
                                        { }
#line 8770 "ompparser.cc"
    break;

  case 600: /* dependence_depobj_type: OUT  */
#line 914 "ompparser.yy"
                                        { }
#line 8776 "ompparser.cc"
    break;

  case 601: /* dependence_depobj_type: INOUT  */
#line 915 "ompparser.yy"
                                        { }
#line 8782 "ompparser.cc"
    break;

  case 602: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 916 "ompparser.yy"
                                        { }
#line 8788 "ompparser.cc"
    break;

  case 603: /* $@48: %empty  */
#line 918 "ompparser.yy"
                               { }
#line 8794 "ompparser.cc"
    break;

  case 604: /* depend_ordered_clause: DEPEND $@48 '(' dependence_ordered_parameter ')'  */
#line 918 "ompparser.yy"
                                                                       {
}
#line 8801 "ompparser.cc"
    break;

  case 606: /* dependence_ordered_type: SOURCE  */
#line 923 "ompparser.yy"
                                  { }
#line 8807 "ompparser.cc"
    break;

  case 607: /* $@49: %empty  */
#line 924 "ompparser.yy"
                               { }
#line 8813 "ompparser.cc"
    break;

  case 609: /* $@50: %empty  */
#line 927 "ompparser.yy"
                          { }
#line 8819 "ompparser.cc"
    break;

  case 612: /* affinity_parameter: EXPR_STRING  */
#line 932 "ompparser.yy"
                                 { }
#line 8825 "ompparser.cc"
    break;

  case 613: /* $@51: %empty  */
#line 933 "ompparser.yy"
                                     { }
#line 8831 "ompparser.cc"
    break;

  case 616: /* $@52: %empty  */
#line 937 "ompparser.yy"
                                      { }
#line 8837 "ompparser.cc"
    break;

  case 617: /* affinity_modifier: MODIFIER_ITERATOR $@52 '(' iterators_definition ')'  */
#line 937 "ompparser.yy"
                                                                   {}
#line 8843 "ompparser.cc"
    break;

  case 620: /* $@53: %empty  */
#line 942 "ompparser.yy"
                                             { }
#line 8849 "ompparser.cc"
    break;

  case 622: /* $@54: %empty  */
#line 943 "ompparser.yy"
                                { }
#line 8855 "ompparser.cc"
    break;

  case 624: /* $@55: %empty  */
#line 945 "ompparser.yy"
                                  { }
#line 8861 "ompparser.cc"
    break;

  case 625: /* $@56: %empty  */
#line 945 "ompparser.yy"
                                                      { }
#line 8867 "ompparser.cc"
    break;

  case 626: /* range_specification: EXPR_STRING $@55 ':' EXPR_STRING $@56 range_step  */
#line 945 "ompparser.yy"
                                                                     { }
#line 8873 "ompparser.cc"
    break;

  case 627: /* range_step: %empty  */
#line 948 "ompparser.yy"
                       { }
#line 8879 "ompparser.cc"
    break;

  case 628: /* range_step: ':' EXPR_STRING  */
#line 949 "ompparser.yy"
                             { }
#line 8885 "ompparser.cc"
    break;

  case 629: /* $@57: %empty  */
#line 952 "ompparser.yy"
                      { }
#line 8891 "ompparser.cc"
    break;

  case 631: /* $@58: %empty  */
#line 954 "ompparser.yy"
                            { }
#line 8897 "ompparser.cc"
    break;

  case 633: /* $@59: %empty  */
#line 956 "ompparser.yy"
                            { }
#line 8903 "ompparser.cc"
    break;

  case 635: /* nogroup_clause: NOGROUP  */
#line 958 "ompparser.yy"
                        { }
#line 8909 "ompparser.cc"
    break;

  case 636: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 960 "ompparser.yy"
                                        { }
#line 8915 "ompparser.cc"
    break;

  case 637: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 962 "ompparser.yy"
                                        { }
#line 8921 "ompparser.cc"
    break;

  case 638: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 964 "ompparser.yy"
                                                    { }
#line 8927 "ompparser.cc"
    break;

  case 639: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 966 "ompparser.yy"
                                                                                                      { }
#line 8933 "ompparser.cc"
    break;

  case 640: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 968 "ompparser.yy"
                                             { }
#line 8939 "ompparser.cc"
    break;

  case 641: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 969 "ompparser.yy"
                                             { }
#line 8945 "ompparser.cc"
    break;

  case 642: /* atomic_default_mem_order_parameter: RELAXED  */
#line 970 "ompparser.yy"
                                             { }
#line 8951 "ompparser.cc"
    break;

  case 643: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 972 "ompparser.yy"
                                              { }
#line 8957 "ompparser.cc"
    break;

  case 644: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 974 "ompparser.yy"
                                                                { }
#line 8963 "ompparser.cc"
    break;

  case 646: /* device_parameter: EXPR_STRING  */
#line 978 "ompparser.yy"
                                { }
#line 8969 "ompparser.cc"
    break;

  case 647: /* $@60: %empty  */
#line 979 "ompparser.yy"
                                   { }
#line 8975 "ompparser.cc"
    break;

  case 650: /* device_modifier_parameter: ANCESTOR  */
#line 983 "ompparser.yy"
                                     { }
#line 8981 "ompparser.cc"
    break;

  case 651: /* device_modifier_parameter: DEVICE_NUM  */
#line 984 "ompparser.yy"
                                       { }
#line 8987 "ompparser.cc"
    break;

  case 653: /* device_without_modifier_parameter: EXPR_STRING  */
#line 989 "ompparser.yy"
                                                 { }
#line 8993 "ompparser.cc"
    break;

  case 654: /* $@61: %empty  */
#line 990 "ompparser.yy"
                                                    { }
#line 8999 "ompparser.cc"
    break;

  case 656: /* $@62: %empty  */
#line 993 "ompparser.yy"
                                       { }
#line 9005 "ompparser.cc"
    break;

  case 658: /* $@63: %empty  */
#line 996 "ompparser.yy"
                                         { }
#line 9011 "ompparser.cc"
    break;

  case 660: /* $@64: %empty  */
#line 998 "ompparser.yy"
                                     { }
#line 9017 "ompparser.cc"
    break;

  case 661: /* is_device_ptr_clause: IS_DEVICE_PTR $@64 '(' var_list ')'  */
#line 998 "ompparser.yy"
                                                          {
}
#line 9024 "ompparser.cc"
    break;

  case 662: /* $@65: %empty  */
#line 1002 "ompparser.yy"
                                         { }
#line 9030 "ompparser.cc"
    break;

  case 663: /* has_device_addr_clause: HAS_DEVICE_ADDR $@65 '(' var_list ')'  */
#line 1002 "ompparser.yy"
                                                              {
}
#line 9037 "ompparser.cc"
    break;

  case 664: /* $@66: %empty  */
#line 1005 "ompparser.yy"
                              { }
#line 9043 "ompparser.cc"
    break;

  case 666: /* defaultmap_parameter: defaultmap_behavior  */
#line 1007 "ompparser.yy"
                                           { }
#line 9049 "ompparser.cc"
    break;

  case 668: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1011 "ompparser.yy"
                                     { }
#line 9055 "ompparser.cc"
    break;

  case 669: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1012 "ompparser.yy"
                                  { }
#line 9061 "ompparser.cc"
    break;

  case 670: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1013 "ompparser.yy"
                                    { }
#line 9067 "ompparser.cc"
    break;

  case 671: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1014 "ompparser.yy"
                                      {}
#line 9073 "ompparser.cc"
    break;

  case 672: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1015 "ompparser.yy"
                                            { }
#line 9079 "ompparser.cc"
    break;

  case 673: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1016 "ompparser.yy"
                                    { }
#line 9085 "ompparser.cc"
    break;

  case 674: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1017 "ompparser.yy"
                                       { }
#line 9091 "ompparser.cc"
    break;

  case 675: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1019 "ompparser.yy"
                                      { }
#line 9097 "ompparser.cc"
    break;

  case 676: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1020 "ompparser.yy"
                                         { }
#line 9103 "ompparser.cc"
    break;

  case 677: /* defaultmap_category: CATEGORY_POINTER  */
#line 1021 "ompparser.yy"
                                       { }
#line 9109 "ompparser.cc"
    break;

  case 678: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1022 "ompparser.yy"
                                           { }
#line 9115 "ompparser.cc"
    break;

  case 679: /* $@67: %empty  */
#line 1024 "ompparser.yy"
                                          { }
#line 9121 "ompparser.cc"
    break;

  case 683: /* allocators_list: allocators_list_parameter_enum  */
#line 1029 "ompparser.yy"
                                                 { }
#line 9127 "ompparser.cc"
    break;

  case 684: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1030 "ompparser.yy"
                                                                     { }
#line 9133 "ompparser.cc"
    break;

  case 685: /* allocators_list: allocators_list_parameter_user  */
#line 1031 "ompparser.yy"
                                                 { }
#line 9139 "ompparser.cc"
    break;

  case 686: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1032 "ompparser.yy"
                                                                     { }
#line 9145 "ompparser.cc"
    break;

  case 687: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1035 "ompparser.yy"
                                                   { }
#line 9151 "ompparser.cc"
    break;

  case 688: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1036 "ompparser.yy"
                                                     { }
#line 9157 "ompparser.cc"
    break;

  case 689: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1037 "ompparser.yy"
                                                 { }
#line 9163 "ompparser.cc"
    break;

  case 690: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1038 "ompparser.yy"
                                                   { }
#line 9169 "ompparser.cc"
    break;

  case 691: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1039 "ompparser.yy"
                                                   { }
#line 9175 "ompparser.cc"
    break;

  case 692: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1040 "ompparser.yy"
                                                  { }
#line 9181 "ompparser.cc"
    break;

  case 693: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1041 "ompparser.yy"
                                                 { }
#line 9187 "ompparser.cc"
    break;

  case 694: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1042 "ompparser.yy"
                                                  { }
#line 9193 "ompparser.cc"
    break;

  case 695: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1044 "ompparser.yy"
                                             { }
#line 9199 "ompparser.cc"
    break;

  case 697: /* to_parameter: EXPR_STRING  */
#line 1047 "ompparser.yy"
                            { }
#line 9205 "ompparser.cc"
    break;

  case 698: /* $@68: %empty  */
#line 1048 "ompparser.yy"
                               { }
#line 9211 "ompparser.cc"
    break;

  case 701: /* $@69: %empty  */
#line 1051 "ompparser.yy"
                      { }
#line 9217 "ompparser.cc"
    break;

  case 702: /* to_mapper: TO_MAPPER $@69 '(' EXPR_STRING ')'  */
#line 1051 "ompparser.yy"
                                           { }
#line 9223 "ompparser.cc"
    break;

  case 704: /* from_parameter: EXPR_STRING  */
#line 1055 "ompparser.yy"
                             { }
#line 9229 "ompparser.cc"
    break;

  case 705: /* $@70: %empty  */
#line 1056 "ompparser.yy"
                                 { }
#line 9235 "ompparser.cc"
    break;

  case 708: /* $@71: %empty  */
#line 1059 "ompparser.yy"
                          { }
#line 9241 "ompparser.cc"
    break;

  case 709: /* from_mapper: FROM_MAPPER $@71 '(' EXPR_STRING ')'  */
#line 1059 "ompparser.yy"
                                               { }
#line 9247 "ompparser.cc"
    break;

  case 710: /* $@72: %empty  */
#line 1061 "ompparser.yy"
                   {
}
#line 9254 "ompparser.cc"
    break;

  case 711: /* link_clause: LINK $@72 '(' var_list ')'  */
#line 1062 "ompparser.yy"
                   { }
#line 9260 "ompparser.cc"
    break;

  case 712: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1064 "ompparser.yy"
                                                               { }
#line 9266 "ompparser.cc"
    break;

  case 713: /* device_type_parameter: HOST  */
#line 1066 "ompparser.yy"
                             { }
#line 9272 "ompparser.cc"
    break;

  case 714: /* device_type_parameter: NOHOST  */
#line 1067 "ompparser.yy"
                             { }
#line 9278 "ompparser.cc"
    break;

  case 715: /* device_type_parameter: ANY  */
#line 1068 "ompparser.yy"
                          { }
#line 9284 "ompparser.cc"
    break;

  case 716: /* $@73: %empty  */
#line 1071 "ompparser.yy"
                 { }
#line 9290 "ompparser.cc"
    break;

  case 718: /* map_parameter: EXPR_STRING  */
#line 1073 "ompparser.yy"
                            { }
#line 9296 "ompparser.cc"
    break;

  case 719: /* $@74: %empty  */
#line 1074 "ompparser.yy"
                                { }
#line 9302 "ompparser.cc"
    break;

  case 733: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1092 "ompparser.yy"
                                    { }
#line 9308 "ompparser.cc"
    break;

  case 734: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1093 "ompparser.yy"
                                    { }
#line 9314 "ompparser.cc"
    break;

  case 735: /* map_modifier1: map_modifier_mapper  */
#line 1094 "ompparser.yy"
                                    { }
#line 9320 "ompparser.cc"
    break;

  case 736: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1096 "ompparser.yy"
                                    { }
#line 9326 "ompparser.cc"
    break;

  case 737: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1097 "ompparser.yy"
                                    { }
#line 9332 "ompparser.cc"
    break;

  case 738: /* map_modifier2: map_modifier_mapper  */
#line 1098 "ompparser.yy"
                                    { }
#line 9338 "ompparser.cc"
    break;

  case 739: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1100 "ompparser.yy"
                                    { }
#line 9344 "ompparser.cc"
    break;

  case 740: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1101 "ompparser.yy"
                                    { }
#line 9350 "ompparser.cc"
    break;

  case 741: /* map_modifier3: map_modifier_mapper  */
#line 1102 "ompparser.yy"
                                    { }
#line 9356 "ompparser.cc"
    break;

  case 742: /* map_type: MAP_TYPE_TO  */
#line 1104 "ompparser.yy"
                       { }
#line 9362 "ompparser.cc"
    break;

  case 743: /* map_type: MAP_TYPE_FROM  */
#line 1105 "ompparser.yy"
                         { }
#line 9368 "ompparser.cc"
    break;

  case 744: /* map_type: MAP_TYPE_TOFROM  */
#line 1106 "ompparser.yy"
                           { }
#line 9374 "ompparser.cc"
    break;

  case 745: /* map_type: MAP_TYPE_ALLOC  */
#line 1107 "ompparser.yy"
                          { }
#line 9380 "ompparser.cc"
    break;

  case 746: /* map_type: MAP_TYPE_RELEASE  */
#line 1108 "ompparser.yy"
                            { }
#line 9386 "ompparser.cc"
    break;

  case 747: /* map_type: MAP_TYPE_DELETE  */
#line 1109 "ompparser.yy"
                           { }
#line 9392 "ompparser.cc"
    break;

  case 748: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1111 "ompparser.yy"
                                                            { }
#line 9398 "ompparser.cc"
    break;

  case 749: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1114 "ompparser.yy"
                                                                                      { }
#line 9404 "ompparser.cc"
    break;

  case 751: /* task_reduction_identifier: EXPR_STRING  */
#line 1117 "ompparser.yy"
                                        { }
#line 9410 "ompparser.cc"
    break;

  case 752: /* task_reduction_enum_identifier: '+'  */
#line 1120 "ompparser.yy"
                                     { }
#line 9416 "ompparser.cc"
    break;

  case 753: /* task_reduction_enum_identifier: '-'  */
#line 1121 "ompparser.yy"
                                     { }
#line 9422 "ompparser.cc"
    break;

  case 754: /* task_reduction_enum_identifier: '*'  */
#line 1122 "ompparser.yy"
                                     { }
#line 9428 "ompparser.cc"
    break;

  case 755: /* task_reduction_enum_identifier: '&'  */
#line 1123 "ompparser.yy"
                                     { }
#line 9434 "ompparser.cc"
    break;

  case 756: /* task_reduction_enum_identifier: '|'  */
#line 1124 "ompparser.yy"
                                     { }
#line 9440 "ompparser.cc"
    break;

  case 757: /* task_reduction_enum_identifier: '^'  */
#line 1125 "ompparser.yy"
                                     { }
#line 9446 "ompparser.cc"
    break;

  case 758: /* task_reduction_enum_identifier: LOGAND  */
#line 1126 "ompparser.yy"
                                        { }
#line 9452 "ompparser.cc"
    break;

  case 759: /* task_reduction_enum_identifier: LOGOR  */
#line 1127 "ompparser.yy"
                                       { }
#line 9458 "ompparser.cc"
    break;

  case 760: /* task_reduction_enum_identifier: MAX  */
#line 1128 "ompparser.yy"
                                     { }
#line 9464 "ompparser.cc"
    break;

  case 761: /* task_reduction_enum_identifier: MIN  */
#line 1129 "ompparser.yy"
                                     { }
#line 9470 "ompparser.cc"
    break;

  case 774: /* threads_clause: THREADS  */
#line 1148 "ompparser.yy"
                         { }
#line 9476 "ompparser.cc"
    break;

  case 775: /* simd_ordered_clause: SIMD  */
#line 1150 "ompparser.yy"
                           { }
#line 9482 "ompparser.cc"
    break;

  case 776: /* $@75: %empty  */
#line 1152 "ompparser.yy"
                                              {
  if(enCluster == true){
    enDistribute = true;
  }

 }
#line 9493 "ompparser.cc"
    break;

  case 794: /* $@76: %empty  */
#line 1179 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
  }
}
#line 9503 "ompparser.cc"
    break;

  case 819: /* $@77: %empty  */
#line 1212 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9514 "ompparser.cc"
    break;

  case 846: /* $@78: %empty  */
#line 1248 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9525 "ompparser.cc"
    break;

  case 873: /* $@79: %empty  */
#line 1284 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9536 "ompparser.cc"
    break;

  case 904: /* $@80: %empty  */
#line 1324 "ompparser.yy"
{
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9547 "ompparser.cc"
    break;

  case 935: /* $@81: %empty  */
#line 1363 "ompparser.yy"
                                 { }
#line 9553 "ompparser.cc"
    break;

  case 954: /* $@82: %empty  */
#line 1385 "ompparser.yy"
                                           { }
#line 9559 "ompparser.cc"
    break;

  case 979: /* $@83: %empty  */
#line 1414 "ompparser.yy"
                                                   { }
#line 9565 "ompparser.cc"
    break;

  case 1011: /* $@84: %empty  */
#line 1449 "ompparser.yy"
                                                 { }
#line 9571 "ompparser.cc"
    break;

  case 1043: /* $@85: %empty  */
#line 1484 "ompparser.yy"
                                                             { }
#line 9577 "ompparser.cc"
    break;

  case 1078: /* $@86: %empty  */
#line 1522 "ompparser.yy"
                                                           { }
#line 9583 "ompparser.cc"
    break;

  case 1113: /* $@87: %empty  */
#line 1560 "ompparser.yy"
                                                     { }
#line 9589 "ompparser.cc"
    break;

  case 1142: /* $@88: %empty  */
#line 1592 "ompparser.yy"
                                   { }
#line 9595 "ompparser.cc"
    break;

  case 1170: /* $@89: %empty  */
#line 1623 "ompparser.yy"
                                     { }
#line 9601 "ompparser.cc"
    break;

  case 1194: /* $@90: %empty  */
#line 1650 "ompparser.yy"
                                                           { }
#line 9607 "ompparser.cc"
    break;

  case 1221: /* $@91: %empty  */
#line 1680 "ompparser.yy"
                                                                     { }
#line 9613 "ompparser.cc"
    break;

  case 1254: /* $@92: %empty  */
#line 1716 "ompparser.yy"
                                               { }
#line 9619 "ompparser.cc"
    break;

  case 1282: /* $@93: %empty  */
#line 1747 "ompparser.yy"
                                                                                     { }
#line 9625 "ompparser.cc"
    break;

  case 1316: /* $@94: %empty  */
#line 1784 "ompparser.yy"
                                                                                   { }
#line 9631 "ompparser.cc"
    break;

  case 1350: /* $@95: %empty  */
#line 1821 "ompparser.yy"
                                                                                               { }
#line 9637 "ompparser.cc"
    break;

  case 1388: /* $@96: %empty  */
#line 1862 "ompparser.yy"
                                                                                             { }
#line 9643 "ompparser.cc"
    break;

  case 1426: /* $@97: %empty  */
#line 1905 "ompparser.yy"
                    { }
#line 9649 "ompparser.cc"
    break;

  case 1428: /* $@98: %empty  */
#line 1907 "ompparser.yy"
                  { }
#line 9655 "ompparser.cc"
    break;

  case 1430: /* $@99: %empty  */
#line 1909 "ompparser.yy"
                         { }
#line 9661 "ompparser.cc"
    break;

  case 1432: /* $@100: %empty  */
#line 1911 "ompparser.yy"
                      { }
#line 9667 "ompparser.cc"
    break;

  case 1434: /* $@101: %empty  */
#line 1913 "ompparser.yy"
                              { }
#line 9673 "ompparser.cc"
    break;

  case 1436: /* $@102: %empty  */
#line 1915 "ompparser.yy"
                            { }
#line 9679 "ompparser.cc"
    break;

  case 1438: /* $@103: %empty  */
#line 1917 "ompparser.yy"
                                   { }
#line 9685 "ompparser.cc"
    break;

  case 1440: /* $@104: %empty  */
#line 1920 "ompparser.yy"
{ 
  if(enCluster == true){
    enDistribute = true;
    statePragma = 1;
  }
}
#line 9696 "ompparser.cc"
    break;

  case 1442: /* $@105: %empty  */
#line 1927 "ompparser.yy"
                                              { }
#line 9702 "ompparser.cc"
    break;

  case 1444: /* $@106: %empty  */
#line 1929 "ompparser.yy"
                                      { }
#line 9708 "ompparser.cc"
    break;

  case 1446: /* $@107: %empty  */
#line 1931 "ompparser.yy"
                                              { }
#line 9714 "ompparser.cc"
    break;

  case 1449: /* proc_name: EXPR_STRING  */
#line 1934 "ompparser.yy"
                        { }
#line 9720 "ompparser.cc"
    break;

  case 1450: /* $@108: %empty  */
#line 1936 "ompparser.yy"
                                  { }
#line 9726 "ompparser.cc"
    break;

  case 1452: /* $@109: %empty  */
#line 1938 "ompparser.yy"
                                            { }
#line 9732 "ompparser.cc"
    break;

  case 1454: /* $@110: %empty  */
#line 1940 "ompparser.yy"
                                                            { }
#line 9738 "ompparser.cc"
    break;

  case 1456: /* $@111: %empty  */
#line 1942 "ompparser.yy"
                                                          { }
#line 9744 "ompparser.cc"
    break;

  case 1458: /* $@112: %empty  */
#line 1944 "ompparser.yy"
                                                                      { }
#line 9750 "ompparser.cc"
    break;

  case 1460: /* $@113: %empty  */
#line 1946 "ompparser.yy"
                                                                    { }
#line 9756 "ompparser.cc"
    break;

  case 1462: /* $@114: %empty  */
#line 1948 "ompparser.yy"
                                      { }
#line 9762 "ompparser.cc"
    break;

  case 1464: /* $@115: %empty  */
#line 1950 "ompparser.yy"
                                    { }
#line 9768 "ompparser.cc"
    break;

  case 1466: /* $@116: %empty  */
#line 1952 "ompparser.yy"
                                        { }
#line 9774 "ompparser.cc"
    break;

  case 1468: /* $@117: %empty  */
#line 1954 "ompparser.yy"
                                                { }
#line 9780 "ompparser.cc"
    break;

  case 1470: /* $@118: %empty  */
#line 1956 "ompparser.yy"
                                                  { }
#line 9786 "ompparser.cc"
    break;

  case 1472: /* $@119: %empty  */
#line 1958 "ompparser.yy"
                                            { }
#line 9792 "ompparser.cc"
    break;

  case 1474: /* $@120: %empty  */
#line 1960 "ompparser.yy"
                                            {
                          }
#line 9799 "ompparser.cc"
    break;

  case 1476: /* $@121: %empty  */
#line 1964 "ompparser.yy"
                                                      {
                               }
#line 9806 "ompparser.cc"
    break;

  case 1478: /* $@122: %empty  */
#line 1968 "ompparser.yy"
                                                              {
                                   }
#line 9813 "ompparser.cc"
    break;

  case 1480: /* $@123: %empty  */
#line 1972 "ompparser.yy"
                                                                        {
                                        }
#line 9820 "ompparser.cc"
    break;

  case 1482: /* $@124: %empty  */
#line 1976 "ompparser.yy"
                      { }
#line 9826 "ompparser.cc"
    break;

  case 1484: /* $@125: %empty  */
#line 1978 "ompparser.yy"
                      { }
#line 9832 "ompparser.cc"
    break;

  case 1486: /* $@126: %empty  */
#line 1980 "ompparser.yy"
                              { }
#line 9838 "ompparser.cc"
    break;

  case 1488: /* $@127: %empty  */
#line 1982 "ompparser.yy"
                                     { }
#line 9844 "ompparser.cc"
    break;

  case 1490: /* section_directive: SECTION  */
#line 1984 "ompparser.yy"
                            { }
#line 9850 "ompparser.cc"
    break;

  case 1491: /* $@128: %empty  */
#line 1986 "ompparser.yy"
                          { }
#line 9856 "ompparser.cc"
    break;

  case 1493: /* $@129: %empty  */
#line 1988 "ompparser.yy"
                                 { }
#line 9862 "ompparser.cc"
    break;

  case 1495: /* workshare_directive: WORKSHARE  */
#line 1990 "ompparser.yy"
                                { }
#line 9868 "ompparser.cc"
    break;

  case 1496: /* $@130: %empty  */
#line 1992 "ompparser.yy"
                                       { }
#line 9874 "ompparser.cc"
    break;

  case 1498: /* $@131: %empty  */
#line 1994 "ompparser.yy"
                          { }
#line 9880 "ompparser.cc"
    break;

  case 1500: /* $@132: %empty  */
#line 2001 "ompparser.yy"
                                                  { }
#line 9886 "ompparser.cc"
    break;

  case 1502: /* $@133: %empty  */
#line 2008 "ompparser.yy"
                        { }
#line 9892 "ompparser.cc"
    break;

  case 1504: /* $@134: %empty  */
#line 2011 "ompparser.yy"
                              { }
#line 9898 "ompparser.cc"
    break;

  case 1507: /* directive_variable: EXPR_STRING  */
#line 2016 "ompparser.yy"
                                 { }
#line 9904 "ompparser.cc"
    break;

  case 1510: /* $@135: %empty  */
#line 2022 "ompparser.yy"
                                        {  }
#line 9910 "ompparser.cc"
    break;

  case 1512: /* threadprivate_variable: EXPR_STRING  */
#line 2024 "ompparser.yy"
                                     { }
#line 9916 "ompparser.cc"
    break;

  case 1515: /* $@136: %empty  */
#line 2030 "ompparser.yy"
                                                { }
#line 9922 "ompparser.cc"
    break;

  case 1518: /* reduction_identifiers: '+'  */
#line 2036 "ompparser.yy"
                           { }
#line 9928 "ompparser.cc"
    break;

  case 1519: /* reduction_identifiers: '-'  */
#line 2037 "ompparser.yy"
                           { }
#line 9934 "ompparser.cc"
    break;

  case 1520: /* reduction_identifiers: '*'  */
#line 2038 "ompparser.yy"
                           { }
#line 9940 "ompparser.cc"
    break;

  case 1521: /* reduction_identifiers: '&'  */
#line 2039 "ompparser.yy"
                           { }
#line 9946 "ompparser.cc"
    break;

  case 1522: /* reduction_identifiers: '|'  */
#line 2040 "ompparser.yy"
                           { }
#line 9952 "ompparser.cc"
    break;

  case 1523: /* reduction_identifiers: '^'  */
#line 2041 "ompparser.yy"
                           { }
#line 9958 "ompparser.cc"
    break;

  case 1524: /* reduction_identifiers: LOGAND  */
#line 2042 "ompparser.yy"
                              { }
#line 9964 "ompparser.cc"
    break;

  case 1525: /* reduction_identifiers: LOGOR  */
#line 2043 "ompparser.yy"
                             { }
#line 9970 "ompparser.cc"
    break;

  case 1526: /* typername_variable: EXPR_STRING  */
#line 2046 "ompparser.yy"
                                 { }
#line 9976 "ompparser.cc"
    break;

  case 1529: /* combiner: EXPR_STRING  */
#line 2051 "ompparser.yy"
                       { }
#line 9982 "ompparser.cc"
    break;

  case 1530: /* $@137: %empty  */
#line 2054 "ompparser.yy"
                                          { }
#line 9988 "ompparser.cc"
    break;

  case 1535: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2064 "ompparser.yy"
                                       { }
#line 9994 "ompparser.cc"
    break;

  case 1536: /* mapper_identifier: EXPR_STRING  */
#line 2065 "ompparser.yy"
                                { }
#line 10000 "ompparser.cc"
    break;

  case 1537: /* type_var: EXPR_STRING  */
#line 2068 "ompparser.yy"
                       { }
#line 10006 "ompparser.cc"
    break;

  case 1760: /* $@138: %empty  */
#line 2426 "ompparser.yy"
                 { statePragma = 7; }
#line 10012 "ompparser.cc"
    break;

  case 1761: /* cluster_clause: $@138 alloc_clause  */
#line 2426 "ompparser.yy"
                                                   { mpi_writer.MPIAlloc(); }
#line 10018 "ompparser.cc"
    break;

  case 1763: /* $@139: %empty  */
#line 2428 "ompparser.yy"
                             { statePragma = 7; }
#line 10024 "ompparser.cc"
    break;

  case 1764: /* cluster_clause: $@139 scatter_clause  */
#line 2428 "ompparser.yy"
                                                                 { mpi_writer.MPIScatterChunk(); }
#line 10030 "ompparser.cc"
    break;

  case 1768: /* $@140: %empty  */
#line 2432 "ompparser.yy"
                             { enReduce = true; logFile << "ENTRA EN REDUCE\n";}
#line 10036 "ompparser.cc"
    break;

  case 1831: /* cluster_teams_distribute_clause: reduction_clause  */
#line 2503 "ompparser.yy"
                                                   {enReduce = true;}
#line 10042 "ompparser.cc"
    break;

  case 1833: /* $@141: %empty  */
#line 2507 "ompparser.yy"
                           { }
#line 10048 "ompparser.cc"
    break;

  case 1835: /* dependance_type: IN  */
#line 2510 "ompparser.yy"
                     { }
#line 10054 "ompparser.cc"
    break;

  case 1836: /* dependance_type: OUT  */
#line 2511 "ompparser.yy"
                                      { }
#line 10060 "ompparser.cc"
    break;

  case 2217: /* construct_type_clause: PARALLEL  */
#line 2930 "ompparser.yy"
                                 { }
#line 10066 "ompparser.cc"
    break;

  case 2218: /* construct_type_clause: SECTIONS  */
#line 2931 "ompparser.yy"
                                 { }
#line 10072 "ompparser.cc"
    break;

  case 2219: /* construct_type_clause: FOR  */
#line 2932 "ompparser.yy"
                            { }
#line 10078 "ompparser.cc"
    break;

  case 2220: /* construct_type_clause: DO  */
#line 2933 "ompparser.yy"
                           { }
#line 10084 "ompparser.cc"
    break;

  case 2221: /* construct_type_clause: TASKGROUP  */
#line 2934 "ompparser.yy"
                                  { }
#line 10090 "ompparser.cc"
    break;

  case 2222: /* if_parallel_clause: IF '(' if_parallel_parameter ')'  */
#line 2941 "ompparser.yy"
                                                      { ; }
#line 10096 "ompparser.cc"
    break;

  case 2223: /* $@142: %empty  */
#line 2944 "ompparser.yy"
                                     { }
#line 10102 "ompparser.cc"
    break;

  case 2224: /* if_parallel_parameter: PARALLEL ':' $@142 expression  */
#line 2945 "ompparser.yy"
                                   { ; }
#line 10108 "ompparser.cc"
    break;

  case 2225: /* if_parallel_parameter: EXPR_STRING  */
#line 2946 "ompparser.yy"
                                    { }
#line 10114 "ompparser.cc"
    break;

  case 2226: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 2948 "ompparser.yy"
                                              { ; }
#line 10120 "ompparser.cc"
    break;

  case 2227: /* $@143: %empty  */
#line 2951 "ompparser.yy"
                             { }
#line 10126 "ompparser.cc"
    break;

  case 2228: /* if_task_parameter: TASK ':' $@143 expression  */
#line 2951 "ompparser.yy"
                                             { ; }
#line 10132 "ompparser.cc"
    break;

  case 2229: /* if_task_parameter: EXPR_STRING  */
#line 2952 "ompparser.yy"
                                { }
#line 10138 "ompparser.cc"
    break;

  case 2230: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 2954 "ompparser.yy"
                                                      { ; }
#line 10144 "ompparser.cc"
    break;

  case 2231: /* $@144: %empty  */
#line 2957 "ompparser.yy"
                                     { }
#line 10150 "ompparser.cc"
    break;

  case 2232: /* if_taskloop_parameter: TASKLOOP ':' $@144 expression  */
#line 2957 "ompparser.yy"
                                                     { ; }
#line 10156 "ompparser.cc"
    break;

  case 2233: /* if_taskloop_parameter: EXPR_STRING  */
#line 2958 "ompparser.yy"
                                    { }
#line 10162 "ompparser.cc"
    break;

  case 2234: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 2960 "ompparser.yy"
                                                            { ; }
#line 10168 "ompparser.cc"
    break;

  case 2235: /* $@145: %empty  */
#line 2963 "ompparser.yy"
                                           { }
#line 10174 "ompparser.cc"
    break;

  case 2236: /* if_target_data_parameter: TARGET DATA ':' $@145 expression  */
#line 2963 "ompparser.yy"
                                                           { ; }
#line 10180 "ompparser.cc"
    break;

  case 2237: /* if_target_data_parameter: EXPR_STRING  */
#line 2964 "ompparser.yy"
                                       { }
#line 10186 "ompparser.cc"
    break;

  case 2238: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 2966 "ompparser.yy"
                                                                    { ; }
#line 10192 "ompparser.cc"
    break;

  case 2239: /* $@146: %empty  */
#line 2969 "ompparser.yy"
                                          { }
#line 10198 "ompparser.cc"
    break;

  case 2240: /* if_target_parallel_parameter: TARGET ':' $@146 expression  */
#line 2969 "ompparser.yy"
                                                          { ; }
#line 10204 "ompparser.cc"
    break;

  case 2241: /* $@147: %empty  */
#line 2970 "ompparser.yy"
                                            { }
#line 10210 "ompparser.cc"
    break;

  case 2242: /* if_target_parallel_parameter: PARALLEL ':' $@147 expression  */
#line 2970 "ompparser.yy"
                                                            { ; }
#line 10216 "ompparser.cc"
    break;

  case 2243: /* if_target_parallel_parameter: EXPR_STRING  */
#line 2971 "ompparser.yy"
                                           { }
#line 10222 "ompparser.cc"
    break;

  case 2244: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 2973 "ompparser.yy"
                                                            { ; }
#line 10228 "ompparser.cc"
    break;

  case 2245: /* $@148: %empty  */
#line 2976 "ompparser.yy"
                                      { }
#line 10234 "ompparser.cc"
    break;

  case 2246: /* if_target_simd_parameter: TARGET ':' $@148 expression  */
#line 2976 "ompparser.yy"
                                                      { ; }
#line 10240 "ompparser.cc"
    break;

  case 2247: /* $@149: %empty  */
#line 2977 "ompparser.yy"
                                    { }
#line 10246 "ompparser.cc"
    break;

  case 2248: /* if_target_simd_parameter: SIMD ':' $@149 expression  */
#line 2977 "ompparser.yy"
                                                    { ; }
#line 10252 "ompparser.cc"
    break;

  case 2249: /* if_target_simd_parameter: EXPR_STRING  */
#line 2978 "ompparser.yy"
                                       { }
#line 10258 "ompparser.cc"
    break;

  case 2250: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 2980 "ompparser.yy"
                                                                        { ; }
#line 10264 "ompparser.cc"
    break;

  case 2251: /* $@150: %empty  */
#line 2983 "ompparser.yy"
                                                       { }
#line 10270 "ompparser.cc"
    break;

  case 2252: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@150 expression  */
#line 2983 "ompparser.yy"
                                                                       { ; }
#line 10276 "ompparser.cc"
    break;

  case 2253: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 2984 "ompparser.yy"
                                             { }
#line 10282 "ompparser.cc"
    break;

  case 2254: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 2986 "ompparser.yy"
                                                                      { ; }
#line 10288 "ompparser.cc"
    break;

  case 2255: /* $@151: %empty  */
#line 2989 "ompparser.yy"
                                                     { }
#line 10294 "ompparser.cc"
    break;

  case 2256: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@151 expression  */
#line 2989 "ompparser.yy"
                                                                     { ; }
#line 10300 "ompparser.cc"
    break;

  case 2257: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 2990 "ompparser.yy"
                                            { }
#line 10306 "ompparser.cc"
    break;

  case 2258: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 2992 "ompparser.yy"
                                                  { ; }
#line 10312 "ompparser.cc"
    break;

  case 2259: /* $@152: %empty  */
#line 2995 "ompparser.yy"
                                 { }
#line 10318 "ompparser.cc"
    break;

  case 2260: /* if_target_parameter: TARGET ':' $@152 expression  */
#line 2995 "ompparser.yy"
                                                 { ; }
#line 10324 "ompparser.cc"
    break;

  case 2261: /* if_target_parameter: EXPR_STRING  */
#line 2996 "ompparser.yy"
                                  { }
#line 10330 "ompparser.cc"
    break;

  case 2262: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 2998 "ompparser.yy"
                                                                { ; }
#line 10336 "ompparser.cc"
    break;

  case 2263: /* $@153: %empty  */
#line 3001 "ompparser.yy"
                                               { }
#line 10342 "ompparser.cc"
    break;

  case 2264: /* if_target_update_parameter: TARGET UPDATE ':' $@153 expression  */
#line 3001 "ompparser.yy"
                                                               { ; }
#line 10348 "ompparser.cc"
    break;

  case 2265: /* if_target_update_parameter: EXPR_STRING  */
#line 3002 "ompparser.yy"
                                         { }
#line 10354 "ompparser.cc"
    break;

  case 2266: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3004 "ompparser.yy"
                                                                { ; }
#line 10360 "ompparser.cc"
    break;

  case 2267: /* $@154: %empty  */
#line 3007 "ompparser.yy"
                                          { }
#line 10366 "ompparser.cc"
    break;

  case 2268: /* if_taskloop_simd_parameter: TASKLOOP ':' $@154 expression  */
#line 3007 "ompparser.yy"
                                                          { ; }
#line 10372 "ompparser.cc"
    break;

  case 2269: /* $@155: %empty  */
#line 3008 "ompparser.yy"
                                      { }
#line 10378 "ompparser.cc"
    break;

  case 2270: /* if_taskloop_simd_parameter: SIMD ':' $@155 expression  */
#line 3008 "ompparser.yy"
                                                      { ; }
#line 10384 "ompparser.cc"
    break;

  case 2271: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3009 "ompparser.yy"
                                         {
                             }
#line 10391 "ompparser.cc"
    break;

  case 2272: /* if_simd_clause: IF '(' if_simd_parameter ')'  */
#line 3011 "ompparser.yy"
                                              { ; }
#line 10397 "ompparser.cc"
    break;

  case 2273: /* $@156: %empty  */
#line 3013 "ompparser.yy"
                             { }
#line 10403 "ompparser.cc"
    break;

  case 2274: /* if_simd_parameter: SIMD ':' $@156 expression  */
#line 3013 "ompparser.yy"
                                             { ; }
#line 10409 "ompparser.cc"
    break;

  case 2275: /* if_simd_parameter: EXPR_STRING  */
#line 3014 "ompparser.yy"
                                { }
#line 10415 "ompparser.cc"
    break;

  case 2276: /* if_parallel_simd_clause: IF '(' if_parallel_simd_parameter ')'  */
#line 3016 "ompparser.yy"
                                                                { ; }
#line 10421 "ompparser.cc"
    break;

  case 2277: /* $@157: %empty  */
#line 3018 "ompparser.yy"
                                      { }
#line 10427 "ompparser.cc"
    break;

  case 2278: /* if_parallel_simd_parameter: SIMD ':' $@157 expression  */
#line 3018 "ompparser.yy"
                                                      { ; }
#line 10433 "ompparser.cc"
    break;

  case 2279: /* $@158: %empty  */
#line 3019 "ompparser.yy"
                                          { }
#line 10439 "ompparser.cc"
    break;

  case 2280: /* if_parallel_simd_parameter: PARALLEL ':' $@158 expression  */
#line 3019 "ompparser.yy"
                                                          { ; }
#line 10445 "ompparser.cc"
    break;

  case 2281: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3020 "ompparser.yy"
                                         { }
#line 10451 "ompparser.cc"
    break;

  case 2282: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3022 "ompparser.yy"
                                                                              { ; }
#line 10457 "ompparser.cc"
    break;

  case 2283: /* $@159: %empty  */
#line 3024 "ompparser.yy"
                                             { }
#line 10463 "ompparser.cc"
    break;

  case 2284: /* if_target_parallel_simd_parameter: SIMD ':' $@159 expression  */
#line 3024 "ompparser.yy"
                                                             { ; }
#line 10469 "ompparser.cc"
    break;

  case 2285: /* $@160: %empty  */
#line 3025 "ompparser.yy"
                                                 { }
#line 10475 "ompparser.cc"
    break;

  case 2286: /* if_target_parallel_simd_parameter: PARALLEL ':' $@160 expression  */
#line 3025 "ompparser.yy"
                                                                 { ; }
#line 10481 "ompparser.cc"
    break;

  case 2287: /* $@161: %empty  */
#line 3026 "ompparser.yy"
                                               { }
#line 10487 "ompparser.cc"
    break;

  case 2288: /* if_target_parallel_simd_parameter: TARGET ':' $@161 expression  */
#line 3026 "ompparser.yy"
                                                               { ; }
#line 10493 "ompparser.cc"
    break;

  case 2289: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3027 "ompparser.yy"
                                                { }
#line 10499 "ompparser.cc"
    break;

  case 2290: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3029 "ompparser.yy"
                                                  { ; }
#line 10505 "ompparser.cc"
    break;

  case 2291: /* $@162: %empty  */
#line 3031 "ompparser.yy"
                                 { }
#line 10511 "ompparser.cc"
    break;

  case 2292: /* if_cancel_parameter: CANCEL ':' $@162 expression  */
#line 3031 "ompparser.yy"
                                                 { ; }
#line 10517 "ompparser.cc"
    break;

  case 2293: /* if_cancel_parameter: EXPR_STRING  */
#line 3032 "ompparser.yy"
                                  { }
#line 10523 "ompparser.cc"
    break;

  case 2294: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3034 "ompparser.yy"
                                                                        { ; }
#line 10529 "ompparser.cc"
    break;

  case 2295: /* $@163: %empty  */
#line 3036 "ompparser.yy"
                                              { }
#line 10535 "ompparser.cc"
    break;

  case 2296: /* if_parallel_taskloop_parameter: PARALLEL ':' $@163 expression  */
#line 3036 "ompparser.yy"
                                                              { ; }
#line 10541 "ompparser.cc"
    break;

  case 2297: /* $@164: %empty  */
#line 3037 "ompparser.yy"
                                              { }
#line 10547 "ompparser.cc"
    break;

  case 2298: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@164 expression  */
#line 3037 "ompparser.yy"
                                                              { ; }
#line 10553 "ompparser.cc"
    break;

  case 2299: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3038 "ompparser.yy"
                                             {
                                }
#line 10560 "ompparser.cc"
    break;

  case 2300: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3040 "ompparser.yy"
                                                                                  { ; }
#line 10566 "ompparser.cc"
    break;

  case 2301: /* $@165: %empty  */
#line 3042 "ompparser.yy"
                                                   { }
#line 10572 "ompparser.cc"
    break;

  case 2302: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@165 expression  */
#line 3042 "ompparser.yy"
                                                                   { ; }
#line 10578 "ompparser.cc"
    break;

  case 2303: /* $@166: %empty  */
#line 3043 "ompparser.yy"
                                                   { }
#line 10584 "ompparser.cc"
    break;

  case 2304: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@166 expression  */
#line 3043 "ompparser.yy"
                                                                   { ; }
#line 10590 "ompparser.cc"
    break;

  case 2305: /* $@167: %empty  */
#line 3044 "ompparser.yy"
                                               { }
#line 10596 "ompparser.cc"
    break;

  case 2306: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@167 expression  */
#line 3044 "ompparser.yy"
                                                               { ; }
#line 10602 "ompparser.cc"
    break;

  case 2307: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3045 "ompparser.yy"
                                                  { }
#line 10608 "ompparser.cc"
    break;

  case 2308: /* $@168: %empty  */
#line 3056 "ompparser.yy"
                                {
                         }
#line 10615 "ompparser.cc"
    break;

  case 2310: /* $@169: %empty  */
#line 3059 "ompparser.yy"
                            {
                         }
#line 10622 "ompparser.cc"
    break;

  case 2312: /* $@170: %empty  */
#line 3062 "ompparser.yy"
                    {
                  }
#line 10629 "ompparser.cc"
    break;

  case 2314: /* $@171: %empty  */
#line 3066 "ompparser.yy"
                                  { }
#line 10635 "ompparser.cc"
    break;

  case 2316: /* $@172: %empty  */
#line 3068 "ompparser.yy"
                      {
                }
#line 10642 "ompparser.cc"
    break;

  case 2318: /* default_clause: DEFAULT '(' default_parameter ')'  */
#line 3072 "ompparser.yy"
                                                   { }
#line 10648 "ompparser.cc"
    break;

  case 2319: /* default_parameter: SHARED  */
#line 3075 "ompparser.yy"
                           { }
#line 10654 "ompparser.cc"
    break;

  case 2320: /* default_parameter: NONE  */
#line 3076 "ompparser.yy"
                         { }
#line 10660 "ompparser.cc"
    break;

  case 2321: /* default_parameter: FIRSTPRIVATE  */
#line 3077 "ompparser.yy"
                                 { }
#line 10666 "ompparser.cc"
    break;

  case 2322: /* default_parameter: PRIVATE  */
#line 3078 "ompparser.yy"
                            { }
#line 10672 "ompparser.cc"
    break;

  case 2323: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3081 "ompparser.yy"
                                                                   { }
#line 10678 "ompparser.cc"
    break;

  case 2324: /* default_variant_directive: %empty  */
#line 3084 "ompparser.yy"
                            { }
#line 10684 "ompparser.cc"
    break;

  case 2325: /* proc_bind_clause: PROC_BIND '(' proc_bind_parameter ')'  */
#line 3087 "ompparser.yy"
                                                         { }
#line 10690 "ompparser.cc"
    break;

  case 2326: /* proc_bind_parameter: MASTER  */
#line 3089 "ompparser.yy"
                             { }
#line 10696 "ompparser.cc"
    break;

  case 2327: /* proc_bind_parameter: CLOSE  */
#line 3090 "ompparser.yy"
                            { }
#line 10702 "ompparser.cc"
    break;

  case 2328: /* proc_bind_parameter: SPREAD  */
#line 3091 "ompparser.yy"
                             { }
#line 10708 "ompparser.cc"
    break;

  case 2329: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3093 "ompparser.yy"
                                          { }
#line 10714 "ompparser.cc"
    break;

  case 2330: /* bind_parameter: TEAMS  */
#line 3095 "ompparser.yy"
                       { }
#line 10720 "ompparser.cc"
    break;

  case 2331: /* bind_parameter: PARALLEL  */
#line 3096 "ompparser.yy"
                          { }
#line 10726 "ompparser.cc"
    break;

  case 2332: /* bind_parameter: THREAD  */
#line 3097 "ompparser.yy"
                        { }
#line 10732 "ompparser.cc"
    break;

  case 2334: /* allocate_parameter: EXPR_STRING  */
#line 3101 "ompparser.yy"
                                  { }
#line 10738 "ompparser.cc"
    break;

  case 2335: /* $@173: %empty  */
#line 3102 "ompparser.yy"
                                     { }
#line 10744 "ompparser.cc"
    break;

  case 2337: /* $@174: %empty  */
#line 3103 "ompparser.yy"
                                             { ; }
#line 10750 "ompparser.cc"
    break;

  case 2339: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3105 "ompparser.yy"
                                        { }
#line 10756 "ompparser.cc"
    break;

  case 2340: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3106 "ompparser.yy"
                                          { }
#line 10762 "ompparser.cc"
    break;

  case 2341: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3107 "ompparser.yy"
                                      { }
#line 10768 "ompparser.cc"
    break;

  case 2342: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3108 "ompparser.yy"
                                        { }
#line 10774 "ompparser.cc"
    break;

  case 2343: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3109 "ompparser.yy"
                                        { }
#line 10780 "ompparser.cc"
    break;

  case 2344: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3110 "ompparser.yy"
                                       { }
#line 10786 "ompparser.cc"
    break;

  case 2345: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3111 "ompparser.yy"
                                      { }
#line 10792 "ompparser.cc"
    break;

  case 2346: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3112 "ompparser.yy"
                                       { }
#line 10798 "ompparser.cc"
    break;

  case 2347: /* allocator_parameter: EXPR_STRING  */
#line 3113 "ompparser.yy"
                                  { }
#line 10804 "ompparser.cc"
    break;

  case 2348: /* $@175: %empty  */
#line 3116 "ompparser.yy"
                         { }
#line 10810 "ompparser.cc"
    break;

  case 2349: /* private_clause: PRIVATE $@175 '(' var_list ')'  */
#line 3116 "ompparser.yy"
                                              { }
#line 10816 "ompparser.cc"
    break;

  case 2350: /* $@176: %empty  */
#line 3119 "ompparser.yy"
                     { }
#line 10822 "ompparser.cc"
    break;

  case 2352: /* $@177: %empty  */
#line 3121 "ompparser.yy"
                     { }
#line 10828 "ompparser.cc"
    break;

  case 2353: /* broad_clause: BROAD $@177 '(' var_list_broad ')'  */
#line 3121 "ompparser.yy"
                                                { mpi_writer.MPIBroad(); }
#line 10834 "ompparser.cc"
    break;

  case 2354: /* $@178: %empty  */
#line 3123 "ompparser.yy"
                         { }
#line 10840 "ompparser.cc"
    break;

  case 2356: /* $@179: %empty  */
#line 3125 "ompparser.yy"
                   { }
#line 10846 "ompparser.cc"
    break;

  case 2358: /* $@180: %empty  */
#line 3127 "ompparser.yy"
                       { }
#line 10852 "ompparser.cc"
    break;

  case 2360: /* $@181: %empty  */
#line 3129 "ompparser.yy"
                             { }
#line 10858 "ompparser.cc"
    break;

  case 2362: /* $@182: %empty  */
#line 3131 "ompparser.yy"
                                   { }
#line 10864 "ompparser.cc"
    break;

  case 2364: /* $@183: %empty  */
#line 3133 "ompparser.yy"
                                   { }
#line 10870 "ompparser.cc"
    break;

  case 2365: /* firstprivate_clause: FIRSTPRIVATE $@183 '(' var_list ')'  */
#line 3133 "ompparser.yy"
                                                        { }
#line 10876 "ompparser.cc"
    break;

  case 2366: /* $@184: %empty  */
#line 3136 "ompparser.yy"
                                 { }
#line 10882 "ompparser.cc"
    break;

  case 2367: /* copyprivate_clause: COPYPRIVATE $@184 '(' var_list ')'  */
#line 3136 "ompparser.yy"
                                                      { }
#line 10888 "ompparser.cc"
    break;

  case 2368: /* $@185: %empty  */
#line 3138 "ompparser.yy"
                                         { }
#line 10894 "ompparser.cc"
    break;

  case 2369: /* fortran_copyprivate_clause: COPYPRIVATE $@185 '(' var_list ')'  */
#line 3138 "ompparser.yy"
                                                              { }
#line 10900 "ompparser.cc"
    break;

  case 2371: /* lastprivate_parameter: EXPR_STRING  */
#line 3142 "ompparser.yy"
                                    { }
#line 10906 "ompparser.cc"
    break;

  case 2372: /* $@186: %empty  */
#line 3143 "ompparser.yy"
                                        { }
#line 10912 "ompparser.cc"
    break;

  case 2374: /* $@187: %empty  */
#line 3144 "ompparser.yy"
                                                {;}
#line 10918 "ompparser.cc"
    break;

  case 2376: /* $@188: %empty  */
#line 3147 "ompparser.yy"
                                            { }
#line 10924 "ompparser.cc"
    break;

  case 2377: /* lastprivate_distribute_clause: LASTPRIVATE $@188 '(' var_list ')'  */
#line 3147 "ompparser.yy"
                                                                 { }
#line 10930 "ompparser.cc"
    break;

  case 2378: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3149 "ompparser.yy"
                                            { }
#line 10936 "ompparser.cc"
    break;

  case 2380: /* $@189: %empty  */
#line 3153 "ompparser.yy"
                                                            { }
#line 10942 "ompparser.cc"
    break;

  case 2382: /* linear_parameter: EXPR_STRING  */
#line 3156 "ompparser.yy"
                                { }
#line 10948 "ompparser.cc"
    break;

  case 2383: /* $@190: %empty  */
#line 3157 "ompparser.yy"
                                   {  }
#line 10954 "ompparser.cc"
    break;

  case 2386: /* linear_modifier: MODOFIER_VAL  */
#line 3160 "ompparser.yy"
                               { }
#line 10960 "ompparser.cc"
    break;

  case 2387: /* linear_modifier: MODOFIER_REF  */
#line 3161 "ompparser.yy"
                               { }
#line 10966 "ompparser.cc"
    break;

  case 2388: /* linear_modifier: MODOFIER_UVAL  */
#line 3162 "ompparser.yy"
                                { }
#line 10972 "ompparser.cc"
    break;

  case 2390: /* $@191: %empty  */
#line 3166 "ompparser.yy"
                                                               { }
#line 10978 "ompparser.cc"
    break;

  case 2392: /* aligned_parameter: EXPR_STRING  */
#line 3170 "ompparser.yy"
                                { }
#line 10984 "ompparser.cc"
    break;

  case 2393: /* $@192: %empty  */
#line 3171 "ompparser.yy"
                                    { }
#line 10990 "ompparser.cc"
    break;

  case 2397: /* expr: EXPR_STRING  */
#line 3178 "ompparser.yy"
                  { }
#line 10996 "ompparser.cc"
    break;

  case 2398: /* $@193: %empty  */
#line 3180 "ompparser.yy"
                        { }
#line 11002 "ompparser.cc"
    break;

  case 2399: /* safelen_clause: SAFELEN $@193 '(' var_list ')'  */
#line 3180 "ompparser.yy"
                                             { }
#line 11008 "ompparser.cc"
    break;

  case 2400: /* $@194: %empty  */
#line 3183 "ompparser.yy"
                        { }
#line 11014 "ompparser.cc"
    break;

  case 2401: /* simdlen_clause: SIMDLEN $@194 '(' var_list ')'  */
#line 3183 "ompparser.yy"
                                             { }
#line 11020 "ompparser.cc"
    break;

  case 2402: /* $@195: %empty  */
#line 3186 "ompparser.yy"
                                { }
#line 11026 "ompparser.cc"
    break;

  case 2403: /* nontemporal_clause: NONTEMPORAL $@195 '(' var_list ')'  */
#line 3186 "ompparser.yy"
                                                     { }
#line 11032 "ompparser.cc"
    break;

  case 2404: /* $@196: %empty  */
#line 3189 "ompparser.yy"
                          { }
#line 11038 "ompparser.cc"
    break;

  case 2405: /* collapse_clause: COLLAPSE $@196 '(' expression ')'  */
#line 3189 "ompparser.yy"
                                                 { }
#line 11044 "ompparser.cc"
    break;

  case 2406: /* $@197: %empty  */
#line 3192 "ompparser.yy"
                        { }
#line 11050 "ompparser.cc"
    break;

  case 2408: /* ordered_clause: ORDERED  */
#line 3193 "ompparser.yy"
                        { }
#line 11056 "ompparser.cc"
    break;

  case 2409: /* fortran_nowait_clause: NOWAIT  */
#line 3195 "ompparser.yy"
                              { }
#line 11062 "ompparser.cc"
    break;

  case 2410: /* nowait_clause: NOWAIT  */
#line 3197 "ompparser.yy"
                      { }
#line 11068 "ompparser.cc"
    break;

  case 2411: /* order_clause: ORDER '(' order_parameter ')'  */
#line 3199 "ompparser.yy"
                                            { }
#line 11074 "ompparser.cc"
    break;

  case 2412: /* order_parameter: CONCURRENT  */
#line 3202 "ompparser.yy"
                             { }
#line 11080 "ompparser.cc"
    break;

  case 2413: /* $@198: %empty  */
#line 3205 "ompparser.yy"
                        { }
#line 11086 "ompparser.cc"
    break;

  case 2415: /* inbranch_clause: INBRANCH  */
#line 3208 "ompparser.yy"
                          { }
#line 11092 "ompparser.cc"
    break;

  case 2416: /* notinbranch_clause: NOTINBRANCH  */
#line 3211 "ompparser.yy"
                                { }
#line 11098 "ompparser.cc"
    break;

  case 2417: /* $@199: %empty  */
#line 3213 "ompparser.yy"
                            { }
#line 11104 "ompparser.cc"
    break;

  case 2419: /* $@200: %empty  */
#line 3215 "ompparser.yy"
                            { }
#line 11110 "ompparser.cc"
    break;

  case 2422: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3218 "ompparser.yy"
                                         { }
#line 11116 "ompparser.cc"
    break;

  case 2423: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3219 "ompparser.yy"
                                           { }
#line 11122 "ompparser.cc"
    break;

  case 2424: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3220 "ompparser.yy"
                                       { }
#line 11128 "ompparser.cc"
    break;

  case 2425: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3221 "ompparser.yy"
                                         { }
#line 11134 "ompparser.cc"
    break;

  case 2426: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3222 "ompparser.yy"
                                         { }
#line 11140 "ompparser.cc"
    break;

  case 2427: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3223 "ompparser.yy"
                                        { }
#line 11146 "ompparser.cc"
    break;

  case 2428: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3224 "ompparser.yy"
                                       { }
#line 11152 "ompparser.cc"
    break;

  case 2429: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3225 "ompparser.yy"
                                        { }
#line 11158 "ompparser.cc"
    break;

  case 2430: /* allocator1_parameter: EXPR_STRING  */
#line 3226 "ompparser.yy"
                                   { }
#line 11164 "ompparser.cc"
    break;

  case 2431: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3230 "ompparser.yy"
                      {
                        if(enCluster == true && enDistribute == true){
                          statePragma = 2;
                          table.setTableSchedule(true);
                        }
                      }
#line 11175 "ompparser.cc"
    break;

  case 2432: /* dist_schedule_parameter: STATIC  */
#line 3237 "ompparser.yy"
                                 { }
#line 11181 "ompparser.cc"
    break;

  case 2433: /* $@201: %empty  */
#line 3238 "ompparser.yy"
                                 { }
#line 11187 "ompparser.cc"
    break;

  case 2434: /* dist_schedule_parameter: STATIC $@201 ',' EXPR_STRING  */
#line 3238 "ompparser.yy"
                                                     { }
#line 11193 "ompparser.cc"
    break;

  case 2435: /* $@202: %empty  */
#line 3240 "ompparser.yy"
                           { }
#line 11199 "ompparser.cc"
    break;

  case 2436: /* schedule_clause: SCHEDULE $@202 '(' schedule_parameter ')'  */
#line 3240 "ompparser.yy"
                                                         {
                }
#line 11206 "ompparser.cc"
    break;

  case 2437: /* schedule_parameter: schedule_kind  */
#line 3244 "ompparser.yy"
                                   {}
#line 11212 "ompparser.cc"
    break;

  case 2439: /* schedule_kind: schedule_enum_kind  */
#line 3249 "ompparser.yy"
                                   { }
#line 11218 "ompparser.cc"
    break;

  case 2440: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3250 "ompparser.yy"
                                                    { }
#line 11224 "ompparser.cc"
    break;

  case 2443: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3257 "ompparser.yy"
                                        { }
#line 11230 "ompparser.cc"
    break;

  case 2444: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3258 "ompparser.yy"
                                           { }
#line 11236 "ompparser.cc"
    break;

  case 2445: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3259 "ompparser.yy"
                                   { }
#line 11242 "ompparser.cc"
    break;

  case 2446: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3261 "ompparser.yy"
                                            { }
#line 11248 "ompparser.cc"
    break;

  case 2447: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3262 "ompparser.yy"
                                               { }
#line 11254 "ompparser.cc"
    break;

  case 2448: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3263 "ompparser.yy"
                                       { }
#line 11260 "ompparser.cc"
    break;

  case 2449: /* schedule_enum_kind: STATIC  */
#line 3266 "ompparser.yy"
                            { }
#line 11266 "ompparser.cc"
    break;

  case 2450: /* schedule_enum_kind: DYNAMIC  */
#line 3267 "ompparser.yy"
                             { }
#line 11272 "ompparser.cc"
    break;

  case 2451: /* schedule_enum_kind: GUIDED  */
#line 3268 "ompparser.yy"
                            { }
#line 11278 "ompparser.cc"
    break;

  case 2452: /* schedule_enum_kind: AUTO  */
#line 3269 "ompparser.yy"
                          { }
#line 11284 "ompparser.cc"
    break;

  case 2453: /* schedule_enum_kind: RUNTIME  */
#line 3270 "ompparser.yy"
                             { }
#line 11290 "ompparser.cc"
    break;

  case 2454: /* $@203: %empty  */
#line 3272 "ompparser.yy"
                       { }
#line 11296 "ompparser.cc"
    break;

  case 2456: /* $@204: %empty  */
#line 3275 "ompparser.yy"
                             { }
#line 11302 "ompparser.cc"
    break;

  case 2457: /* reduction_clause: REDUCTION $@204 '(' reduction_parameter ':' var_list_reduction ')'  */
#line 3275 "ompparser.yy"
                                                                                    {
                 }
#line 11309 "ompparser.cc"
    break;

  case 2460: /* reduction_identifier: reduction_enum_identifier  */
#line 3283 "ompparser.yy"
                                                 { if(enReduce){mpi_writer.MPI_Reduce(true, (yyvsp[0].stype));} }
#line 11315 "ompparser.cc"
    break;

  case 2461: /* reduction_identifier: EXPR_STRING  */
#line 3284 "ompparser.yy"
                                   { }
#line 11321 "ompparser.cc"
    break;

  case 2462: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3287 "ompparser.yy"
                                     { }
#line 11327 "ompparser.cc"
    break;

  case 2463: /* reduction_modifier: MODIFIER_TASK  */
#line 3288 "ompparser.yy"
                                   { }
#line 11333 "ompparser.cc"
    break;

  case 2464: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3289 "ompparser.yy"
                                      { }
#line 11339 "ompparser.cc"
    break;

  case 2465: /* reduction_enum_identifier: '+'  */
#line 3292 "ompparser.yy"
                               { }
#line 11345 "ompparser.cc"
    break;

  case 2466: /* reduction_enum_identifier: '-'  */
#line 3293 "ompparser.yy"
                               { }
#line 11351 "ompparser.cc"
    break;

  case 2467: /* reduction_enum_identifier: '*'  */
#line 3294 "ompparser.yy"
                               { }
#line 11357 "ompparser.cc"
    break;

  case 2468: /* reduction_enum_identifier: '&'  */
#line 3295 "ompparser.yy"
                               { }
#line 11363 "ompparser.cc"
    break;

  case 2469: /* reduction_enum_identifier: '|'  */
#line 3296 "ompparser.yy"
                               { }
#line 11369 "ompparser.cc"
    break;

  case 2470: /* reduction_enum_identifier: '^'  */
#line 3297 "ompparser.yy"
                               { }
#line 11375 "ompparser.cc"
    break;

  case 2471: /* reduction_enum_identifier: LOGAND  */
#line 3298 "ompparser.yy"
                                  { }
#line 11381 "ompparser.cc"
    break;

  case 2472: /* reduction_enum_identifier: LOGOR  */
#line 3299 "ompparser.yy"
                                 { }
#line 11387 "ompparser.cc"
    break;

  case 2473: /* reduction_enum_identifier: MAX  */
#line 3300 "ompparser.yy"
                               { }
#line 11393 "ompparser.cc"
    break;

  case 2474: /* reduction_enum_identifier: MIN  */
#line 3301 "ompparser.yy"
                               { }
#line 11399 "ompparser.cc"
    break;

  case 2475: /* $@205: %empty  */
#line 3304 "ompparser.yy"
                                          { }
#line 11405 "ompparser.cc"
    break;

  case 2476: /* reduction_default_only_clause: REDUCTION $@205 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3304 "ompparser.yy"
                                                                                                    {
                              }
#line 11412 "ompparser.cc"
    break;

  case 2477: /* reduction_default_only_parameter: reduction_identifier  */
#line 3308 "ompparser.yy"
                                                        {}
#line 11418 "ompparser.cc"
    break;

  case 2479: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3312 "ompparser.yy"
                                                   { }
#line 11424 "ompparser.cc"
    break;


#line 11428 "ompparser.cc"

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

#line 3315 "ompparser.yy"


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
