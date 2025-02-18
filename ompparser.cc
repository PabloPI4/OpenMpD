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

using namespace std;
/* DQ (2/10/2014): IF is conflicting with Boost template IF. */
#undef IF

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <assert.h>
#include <ostream>
#include <iostream>

/*the scanner function*/
extern int openmp_lex(); 

/*A customized initialization function for the scanner, str is the string to be scanned.*/
extern void openmp_lexer_init(const char* str);
/* Standalone ompparser */
extern void start_lexer(const char* input);
extern void end_lexer(void);

extern void openmp_parse_expr();
static int openmp_error(const char*);

int chunk = 0;
int contadorTask=0;
int update = 0;
extern int MPIInitDone;
extern int main_end;
extern int main_init;
extern void MPIInit();

int enCluster = 0;
int enDistribute = 0;
int enReductionCluster = 0;
int enReductionDistribute = 0;
int enAllReductionCluster = 0;
int enAllReductionDistribute = 0;
int enScatter = 0;
int enGather = 0;
int enAllGather = 0;
int enGatherInst = 0;
int enAllGatherInst = 0;
int n_llaves = -100;
int chunk_pos;
extern int dist_n_llaves;

void * (*exprParse)(const char*) = NULL;

//From template
extern void addArg(const char *arg);
extern void MPIAlloc();
extern void MPIBroad();
extern void MPIScatterChunk();
extern void MPITask();
extern void MPIScatterHalo();
extern void MPIUpdateHalo();
extern void MPIWriteCluster();
extern void addReduce(bool vars, const char *arg);
extern void addAllReduce(bool vars, const char *arg);
extern void aumentarScatter();
extern void aumentarGather();
extern void aumentarAllGather();
extern void addArgScatter(const char *arg);
extern void addArgGather(const char *arg);
extern void addArgAllGather(const char *arg);
extern void aumentarAllReduction();
extern void aumentarReduction();


#line 152 "ompparser.cc"

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
  YYSYMBOL_var_list_cluster = 261,         /* var_list_cluster  */
  YYSYMBOL_var_list_reduction = 262,       /* var_list_reduction  */
  YYSYMBOL_var_list_allreduction = 263,    /* var_list_allreduction  */
  YYSYMBOL_var_chunk = 264,                /* var_chunk  */
  YYSYMBOL_var_chunk_list_cluster_aux_aux = 265, /* var_chunk_list_cluster_aux_aux  */
  YYSYMBOL_266_1 = 266,                    /* $@1  */
  YYSYMBOL_var_chunk_list_cluster_aux = 267, /* var_chunk_list_cluster_aux  */
  YYSYMBOL_268_2 = 268,                    /* $@2  */
  YYSYMBOL_var_chunk_list_cluster = 269,   /* var_chunk_list_cluster  */
  YYSYMBOL_270_3 = 270,                    /* $@3  */
  YYSYMBOL_openmp_directive = 271,         /* openmp_directive  */
  YYSYMBOL_272_4 = 272,                    /* $@4  */
  YYSYMBOL_directiveAuxCluster = 273,      /* directiveAuxCluster  */
  YYSYMBOL_variant_directive = 274,        /* variant_directive  */
  YYSYMBOL_fortran_paired_directive = 275, /* fortran_paired_directive  */
  YYSYMBOL_end_directive = 276,            /* end_directive  */
  YYSYMBOL_277_5 = 277,                    /* $@5  */
  YYSYMBOL_end_clause_seq = 278,           /* end_clause_seq  */
  YYSYMBOL_metadirective_directive = 279,  /* metadirective_directive  */
  YYSYMBOL_280_6 = 280,                    /* $@6  */
  YYSYMBOL_metadirective_clause_optseq = 281, /* metadirective_clause_optseq  */
  YYSYMBOL_metadirective_clause_seq = 282, /* metadirective_clause_seq  */
  YYSYMBOL_metadirective_clause = 283,     /* metadirective_clause  */
  YYSYMBOL_when_clause = 284,              /* when_clause  */
  YYSYMBOL_285_7 = 285,                    /* $@7  */
  YYSYMBOL_286_8 = 286,                    /* $@8  */
  YYSYMBOL_287_9 = 287,                    /* $@9  */
  YYSYMBOL_when_variant_directive = 288,   /* when_variant_directive  */
  YYSYMBOL_context_selector_specification = 289, /* context_selector_specification  */
  YYSYMBOL_trait_set_selector = 290,       /* trait_set_selector  */
  YYSYMBOL_291_10 = 291,                   /* $@10  */
  YYSYMBOL_292_11 = 292,                   /* $@11  */
  YYSYMBOL_trait_set_selector_name = 293,  /* trait_set_selector_name  */
  YYSYMBOL_trait_selector_list = 294,      /* trait_selector_list  */
  YYSYMBOL_trait_selector = 295,           /* trait_selector  */
  YYSYMBOL_condition_selector = 296,       /* condition_selector  */
  YYSYMBOL_297_12 = 297,                   /* $@12  */
  YYSYMBOL_device_selector = 298,          /* device_selector  */
  YYSYMBOL_context_kind = 299,             /* context_kind  */
  YYSYMBOL_context_kind_name = 300,        /* context_kind_name  */
  YYSYMBOL_context_isa = 301,              /* context_isa  */
  YYSYMBOL_context_arch = 302,             /* context_arch  */
  YYSYMBOL_implementation_selector = 303,  /* implementation_selector  */
  YYSYMBOL_context_vendor_name = 304,      /* context_vendor_name  */
  YYSYMBOL_construct_selector = 305,       /* construct_selector  */
  YYSYMBOL_parallel_selector = 306,        /* parallel_selector  */
  YYSYMBOL_307_13 = 307,                   /* $@13  */
  YYSYMBOL_parallel_selector_parameter = 308, /* parallel_selector_parameter  */
  YYSYMBOL_trait_score = 309,              /* trait_score  */
  YYSYMBOL_310_14 = 310,                   /* $@14  */
  YYSYMBOL_declare_variant_directive = 311, /* declare_variant_directive  */
  YYSYMBOL_312_15 = 312,                   /* $@15  */
  YYSYMBOL_variant_func_id = 313,          /* variant_func_id  */
  YYSYMBOL_314_16 = 314,                   /* $@16  */
  YYSYMBOL_declare_variant_clause_optseq = 315, /* declare_variant_clause_optseq  */
  YYSYMBOL_declare_variant_clause_seq = 316, /* declare_variant_clause_seq  */
  YYSYMBOL_declare_variant_clause = 317,   /* declare_variant_clause  */
  YYSYMBOL_match_clause = 318,             /* match_clause  */
  YYSYMBOL_319_17 = 319,                   /* $@17  */
  YYSYMBOL_parallel_directive = 320,       /* parallel_directive  */
  YYSYMBOL_321_18 = 321,                   /* $@18  */
  YYSYMBOL_cluster_directive = 322,        /* cluster_directive  */
  YYSYMBOL_323_19 = 323,                   /* $@19  */
  YYSYMBOL_declare_cluster_directive = 324, /* declare_cluster_directive  */
  YYSYMBOL_end_declare_cluster_directive = 325, /* end_declare_cluster_directive  */
  YYSYMBOL_cluster_data_directive = 326,   /* cluster_data_directive  */
  YYSYMBOL_327_20 = 327,                   /* $@20  */
  YYSYMBOL_cluster_update_directive = 328, /* cluster_update_directive  */
  YYSYMBOL_329_21 = 329,                   /* $@21  */
  YYSYMBOL_cluster_teams_directive = 330,  /* cluster_teams_directive  */
  YYSYMBOL_331_22 = 331,                   /* $@22  */
  YYSYMBOL_cluster_distribute_directive = 332, /* cluster_distribute_directive  */
  YYSYMBOL_333_23 = 333,                   /* $@23  */
  YYSYMBOL_cluster_teams_distribute_directive = 334, /* cluster_teams_distribute_directive  */
  YYSYMBOL_335_24 = 335,                   /* $@24  */
  YYSYMBOL_cluster_teams_master_directive = 336, /* cluster_teams_master_directive  */
  YYSYMBOL_task_async_directive = 337,     /* task_async_directive  */
  YYSYMBOL_338_25 = 338,                   /* $@25  */
  YYSYMBOL_task_directive = 339,           /* task_directive  */
  YYSYMBOL_340_26 = 340,                   /* $@26  */
  YYSYMBOL_taskloop_directive = 341,       /* taskloop_directive  */
  YYSYMBOL_342_27 = 342,                   /* $@27  */
  YYSYMBOL_taskloop_simd_directive = 343,  /* taskloop_simd_directive  */
  YYSYMBOL_344_28 = 344,                   /* $@28  */
  YYSYMBOL_taskyield_directive = 345,      /* taskyield_directive  */
  YYSYMBOL_requires_directive = 346,       /* requires_directive  */
  YYSYMBOL_347_29 = 347,                   /* $@29  */
  YYSYMBOL_target_data_directive = 348,    /* target_data_directive  */
  YYSYMBOL_349_30 = 349,                   /* $@30  */
  YYSYMBOL_target_enter_data_directive = 350, /* target_enter_data_directive  */
  YYSYMBOL_351_31 = 351,                   /* $@31  */
  YYSYMBOL_target_exit_data_directive = 352, /* target_exit_data_directive  */
  YYSYMBOL_353_32 = 353,                   /* $@32  */
  YYSYMBOL_target_directive = 354,         /* target_directive  */
  YYSYMBOL_355_33 = 355,                   /* $@33  */
  YYSYMBOL_target_update_directive = 356,  /* target_update_directive  */
  YYSYMBOL_357_34 = 357,                   /* $@34  */
  YYSYMBOL_declare_target_directive = 358, /* declare_target_directive  */
  YYSYMBOL_359_35 = 359,                   /* $@35  */
  YYSYMBOL_flush_directive = 360,          /* flush_directive  */
  YYSYMBOL_361_36 = 361,                   /* $@36  */
  YYSYMBOL_end_declare_target_directive = 362, /* end_declare_target_directive  */
  YYSYMBOL_master_directive = 363,         /* master_directive  */
  YYSYMBOL_barrier_directive = 364,        /* barrier_directive  */
  YYSYMBOL_taskwait_directive = 365,       /* taskwait_directive  */
  YYSYMBOL_366_37 = 366,                   /* $@37  */
  YYSYMBOL_taskgroup_directive = 367,      /* taskgroup_directive  */
  YYSYMBOL_368_38 = 368,                   /* $@38  */
  YYSYMBOL_critical_directive = 369,       /* critical_directive  */
  YYSYMBOL_370_39 = 370,                   /* $@39  */
  YYSYMBOL_depobj_directive = 371,         /* depobj_directive  */
  YYSYMBOL_372_40 = 372,                   /* $@40  */
  YYSYMBOL_ordered_directive = 373,        /* ordered_directive  */
  YYSYMBOL_374_41 = 374,                   /* $@41  */
  YYSYMBOL_critical_clause_optseq = 375,   /* critical_clause_optseq  */
  YYSYMBOL_depobj_clause_optseq = 376,     /* depobj_clause_optseq  */
  YYSYMBOL_depobj = 377,                   /* depobj  */
  YYSYMBOL_depobj_clause = 378,            /* depobj_clause  */
  YYSYMBOL_destroy_clause = 379,           /* destroy_clause  */
  YYSYMBOL_depobj_update_clause = 380,     /* depobj_update_clause  */
  YYSYMBOL_update_dependence_type = 381,   /* update_dependence_type  */
  YYSYMBOL_critical_name = 382,            /* critical_name  */
  YYSYMBOL_task_clause_optseq = 383,       /* task_clause_optseq  */
  YYSYMBOL_taskloop_clause_optseq = 384,   /* taskloop_clause_optseq  */
  YYSYMBOL_taskloop_simd_clause_optseq = 385, /* taskloop_simd_clause_optseq  */
  YYSYMBOL_requires_clause_optseq = 386,   /* requires_clause_optseq  */
  YYSYMBOL_target_data_clause_optseq = 387, /* target_data_clause_optseq  */
  YYSYMBOL_target_enter_data_clause_optseq = 388, /* target_enter_data_clause_optseq  */
  YYSYMBOL_target_exit_data_clause_optseq = 389, /* target_exit_data_clause_optseq  */
  YYSYMBOL_target_clause_optseq = 390,     /* target_clause_optseq  */
  YYSYMBOL_target_update_clause_optseq = 391, /* target_update_clause_optseq  */
  YYSYMBOL_declare_target_clause_optseq = 392, /* declare_target_clause_optseq  */
  YYSYMBOL_extended_variable = 393,        /* extended_variable  */
  YYSYMBOL_declare_target_extended_list = 394, /* declare_target_extended_list  */
  YYSYMBOL_flush_clause_optseq = 395,      /* flush_clause_optseq  */
  YYSYMBOL_flush_list = 396,               /* flush_list  */
  YYSYMBOL_flush_variable = 397,           /* flush_variable  */
  YYSYMBOL_flush_clause_seq = 398,         /* flush_clause_seq  */
  YYSYMBOL_flush_memory_order_clause = 399, /* flush_memory_order_clause  */
  YYSYMBOL_atomic_directive = 400,         /* atomic_directive  */
  YYSYMBOL_401_42 = 401,                   /* $@42  */
  YYSYMBOL_atomic_clause_optseq = 402,     /* atomic_clause_optseq  */
  YYSYMBOL_atomic_clause_seq = 403,        /* atomic_clause_seq  */
  YYSYMBOL_memory_order_clause_seq = 404,  /* memory_order_clause_seq  */
  YYSYMBOL_memory_order_clause_seq_after = 405, /* memory_order_clause_seq_after  */
  YYSYMBOL_atomic_clause = 406,            /* atomic_clause  */
  YYSYMBOL_memory_order_clause = 407,      /* memory_order_clause  */
  YYSYMBOL_hint_clause = 408,              /* hint_clause  */
  YYSYMBOL_409_43 = 409,                   /* $@43  */
  YYSYMBOL_read_clause = 410,              /* read_clause  */
  YYSYMBOL_write_clause = 411,             /* write_clause  */
  YYSYMBOL_update_clause = 412,            /* update_clause  */
  YYSYMBOL_capture_clause = 413,           /* capture_clause  */
  YYSYMBOL_seq_cst_clause = 414,           /* seq_cst_clause  */
  YYSYMBOL_acq_rel_clause = 415,           /* acq_rel_clause  */
  YYSYMBOL_release_clause = 416,           /* release_clause  */
  YYSYMBOL_acquire_clause = 417,           /* acquire_clause  */
  YYSYMBOL_relaxed_clause = 418,           /* relaxed_clause  */
  YYSYMBOL_taskwait_clause_optseq = 419,   /* taskwait_clause_optseq  */
  YYSYMBOL_taskgroup_clause_optseq = 420,  /* taskgroup_clause_optseq  */
  YYSYMBOL_task_clause_seq = 421,          /* task_clause_seq  */
  YYSYMBOL_taskloop_clause_seq = 422,      /* taskloop_clause_seq  */
  YYSYMBOL_taskloop_simd_clause_seq = 423, /* taskloop_simd_clause_seq  */
  YYSYMBOL_requires_clause_seq = 424,      /* requires_clause_seq  */
  YYSYMBOL_target_data_clause_seq = 425,   /* target_data_clause_seq  */
  YYSYMBOL_target_enter_data_clause_seq = 426, /* target_enter_data_clause_seq  */
  YYSYMBOL_target_exit_data_clause_seq = 427, /* target_exit_data_clause_seq  */
  YYSYMBOL_target_clause_seq = 428,        /* target_clause_seq  */
  YYSYMBOL_target_update_clause_seq = 429, /* target_update_clause_seq  */
  YYSYMBOL_declare_target_seq = 430,       /* declare_target_seq  */
  YYSYMBOL_taskwait_clause_seq = 431,      /* taskwait_clause_seq  */
  YYSYMBOL_taskgroup_clause_seq = 432,     /* taskgroup_clause_seq  */
  YYSYMBOL_task_clause = 433,              /* task_clause  */
  YYSYMBOL_taskloop_clause = 434,          /* taskloop_clause  */
  YYSYMBOL_taskloop_simd_clause = 435,     /* taskloop_simd_clause  */
  YYSYMBOL_requires_clause = 436,          /* requires_clause  */
  YYSYMBOL_target_data_clause = 437,       /* target_data_clause  */
  YYSYMBOL_target_enter_data_clause = 438, /* target_enter_data_clause  */
  YYSYMBOL_target_exit_data_clause = 439,  /* target_exit_data_clause  */
  YYSYMBOL_target_clause = 440,            /* target_clause  */
  YYSYMBOL_target_update_clause = 441,     /* target_update_clause  */
  YYSYMBOL_motion_clause = 442,            /* motion_clause  */
  YYSYMBOL_target_update_other_clause = 443, /* target_update_other_clause  */
  YYSYMBOL_declare_target_clause = 444,    /* declare_target_clause  */
  YYSYMBOL_taskwait_clause = 445,          /* taskwait_clause  */
  YYSYMBOL_taskgroup_clause = 446,         /* taskgroup_clause  */
  YYSYMBOL_final_clause = 447,             /* final_clause  */
  YYSYMBOL_448_44 = 448,                   /* $@44  */
  YYSYMBOL_untied_clause = 449,            /* untied_clause  */
  YYSYMBOL_mergeable_clause = 450,         /* mergeable_clause  */
  YYSYMBOL_in_reduction_clause = 451,      /* in_reduction_clause  */
  YYSYMBOL_in_reduction_identifier = 452,  /* in_reduction_identifier  */
  YYSYMBOL_in_reduction_enum_identifier = 453, /* in_reduction_enum_identifier  */
  YYSYMBOL_depend_with_modifier_clause = 454, /* depend_with_modifier_clause  */
  YYSYMBOL_455_45 = 455,                   /* $@45  */
  YYSYMBOL_depend_parameter = 456,         /* depend_parameter  */
  YYSYMBOL_dependence_type = 457,          /* dependence_type  */
  YYSYMBOL_depend_modifier = 458,          /* depend_modifier  */
  YYSYMBOL_459_46 = 459,                   /* $@46  */
  YYSYMBOL_depend_iterators_definition = 460, /* depend_iterators_definition  */
  YYSYMBOL_depend_iterator_specifier = 461, /* depend_iterator_specifier  */
  YYSYMBOL_462_47 = 462,                   /* $@47  */
  YYSYMBOL_463_48 = 463,                   /* $@48  */
  YYSYMBOL_depend_range_specification = 464, /* depend_range_specification  */
  YYSYMBOL_465_49 = 465,                   /* $@49  */
  YYSYMBOL_466_50 = 466,                   /* $@50  */
  YYSYMBOL_depend_range_step = 467,        /* depend_range_step  */
  YYSYMBOL_depend_enum_type = 468,         /* depend_enum_type  */
  YYSYMBOL_depend_depobj_clause = 469,     /* depend_depobj_clause  */
  YYSYMBOL_470_51 = 470,                   /* $@51  */
  YYSYMBOL_dependence_depobj_parameter = 471, /* dependence_depobj_parameter  */
  YYSYMBOL_dependence_depobj_type = 472,   /* dependence_depobj_type  */
  YYSYMBOL_depend_ordered_clause = 473,    /* depend_ordered_clause  */
  YYSYMBOL_474_52 = 474,                   /* $@52  */
  YYSYMBOL_dependence_ordered_parameter = 475, /* dependence_ordered_parameter  */
  YYSYMBOL_dependence_ordered_type = 476,  /* dependence_ordered_type  */
  YYSYMBOL_477_53 = 477,                   /* $@53  */
  YYSYMBOL_priority_clause = 478,          /* priority_clause  */
  YYSYMBOL_479_54 = 479,                   /* $@54  */
  YYSYMBOL_affinity_clause = 480,          /* affinity_clause  */
  YYSYMBOL_affinity_parameter = 481,       /* affinity_parameter  */
  YYSYMBOL_482_55 = 482,                   /* $@55  */
  YYSYMBOL_affinity_modifier = 483,        /* affinity_modifier  */
  YYSYMBOL_484_56 = 484,                   /* $@56  */
  YYSYMBOL_iterators_definition = 485,     /* iterators_definition  */
  YYSYMBOL_iterator_specifier = 486,       /* iterator_specifier  */
  YYSYMBOL_487_57 = 487,                   /* $@57  */
  YYSYMBOL_488_58 = 488,                   /* $@58  */
  YYSYMBOL_range_specification = 489,      /* range_specification  */
  YYSYMBOL_490_59 = 490,                   /* $@59  */
  YYSYMBOL_491_60 = 491,                   /* $@60  */
  YYSYMBOL_range_step = 492,               /* range_step  */
  YYSYMBOL_detach_clause = 493,            /* detach_clause  */
  YYSYMBOL_494_61 = 494,                   /* $@61  */
  YYSYMBOL_grainsize_clause = 495,         /* grainsize_clause  */
  YYSYMBOL_496_62 = 496,                   /* $@62  */
  YYSYMBOL_num_tasks_clause = 497,         /* num_tasks_clause  */
  YYSYMBOL_498_63 = 498,                   /* $@63  */
  YYSYMBOL_nogroup_clause = 499,           /* nogroup_clause  */
  YYSYMBOL_reverse_offload_clause = 500,   /* reverse_offload_clause  */
  YYSYMBOL_unified_address_clause = 501,   /* unified_address_clause  */
  YYSYMBOL_unified_shared_memory_clause = 502, /* unified_shared_memory_clause  */
  YYSYMBOL_atomic_default_mem_order_clause = 503, /* atomic_default_mem_order_clause  */
  YYSYMBOL_atomic_default_mem_order_parameter = 504, /* atomic_default_mem_order_parameter  */
  YYSYMBOL_dynamic_allocators_clause = 505, /* dynamic_allocators_clause  */
  YYSYMBOL_ext_implementation_defined_requirement_clause = 506, /* ext_implementation_defined_requirement_clause  */
  YYSYMBOL_device_clause = 507,            /* device_clause  */
  YYSYMBOL_device_parameter = 508,         /* device_parameter  */
  YYSYMBOL_509_64 = 509,                   /* $@64  */
  YYSYMBOL_device_modifier_parameter = 510, /* device_modifier_parameter  */
  YYSYMBOL_device_without_modifier_clause = 511, /* device_without_modifier_clause  */
  YYSYMBOL_device_without_modifier_parameter = 512, /* device_without_modifier_parameter  */
  YYSYMBOL_513_65 = 513,                   /* $@65  */
  YYSYMBOL_use_device_ptr_clause = 514,    /* use_device_ptr_clause  */
  YYSYMBOL_515_66 = 515,                   /* $@66  */
  YYSYMBOL_use_device_addr_clause = 516,   /* use_device_addr_clause  */
  YYSYMBOL_517_67 = 517,                   /* $@67  */
  YYSYMBOL_is_device_ptr_clause = 518,     /* is_device_ptr_clause  */
  YYSYMBOL_519_68 = 519,                   /* $@68  */
  YYSYMBOL_has_device_addr_clause = 520,   /* has_device_addr_clause  */
  YYSYMBOL_521_69 = 521,                   /* $@69  */
  YYSYMBOL_defaultmap_clause = 522,        /* defaultmap_clause  */
  YYSYMBOL_523_70 = 523,                   /* $@70  */
  YYSYMBOL_defaultmap_parameter = 524,     /* defaultmap_parameter  */
  YYSYMBOL_defaultmap_behavior = 525,      /* defaultmap_behavior  */
  YYSYMBOL_defaultmap_category = 526,      /* defaultmap_category  */
  YYSYMBOL_uses_allocators_clause = 527,   /* uses_allocators_clause  */
  YYSYMBOL_528_71 = 528,                   /* $@71  */
  YYSYMBOL_uses_allocators_parameter = 529, /* uses_allocators_parameter  */
  YYSYMBOL_allocators_list = 530,          /* allocators_list  */
  YYSYMBOL_allocators_list_parameter_enum = 531, /* allocators_list_parameter_enum  */
  YYSYMBOL_allocators_list_parameter_user = 532, /* allocators_list_parameter_user  */
  YYSYMBOL_to_clause = 533,                /* to_clause  */
  YYSYMBOL_to_parameter = 534,             /* to_parameter  */
  YYSYMBOL_535_72 = 535,                   /* $@72  */
  YYSYMBOL_to_mapper = 536,                /* to_mapper  */
  YYSYMBOL_537_73 = 537,                   /* $@73  */
  YYSYMBOL_from_clause = 538,              /* from_clause  */
  YYSYMBOL_from_parameter = 539,           /* from_parameter  */
  YYSYMBOL_540_74 = 540,                   /* $@74  */
  YYSYMBOL_from_mapper = 541,              /* from_mapper  */
  YYSYMBOL_542_75 = 542,                   /* $@75  */
  YYSYMBOL_link_clause = 543,              /* link_clause  */
  YYSYMBOL_544_76 = 544,                   /* $@76  */
  YYSYMBOL_device_type_clause = 545,       /* device_type_clause  */
  YYSYMBOL_device_type_parameter = 546,    /* device_type_parameter  */
  YYSYMBOL_map_clause = 547,               /* map_clause  */
  YYSYMBOL_548_77 = 548,                   /* $@77  */
  YYSYMBOL_map_parameter = 549,            /* map_parameter  */
  YYSYMBOL_550_78 = 550,                   /* $@78  */
  YYSYMBOL_map_modifier_type = 551,        /* map_modifier_type  */
  YYSYMBOL_map_modifier_parameter1 = 552,  /* map_modifier_parameter1  */
  YYSYMBOL_map_modifier_parameter2 = 553,  /* map_modifier_parameter2  */
  YYSYMBOL_map_modifier1 = 554,            /* map_modifier1  */
  YYSYMBOL_map_modifier2 = 555,            /* map_modifier2  */
  YYSYMBOL_map_modifier3 = 556,            /* map_modifier3  */
  YYSYMBOL_map_type = 557,                 /* map_type  */
  YYSYMBOL_map_modifier_mapper = 558,      /* map_modifier_mapper  */
  YYSYMBOL_task_reduction_clause = 559,    /* task_reduction_clause  */
  YYSYMBOL_task_reduction_identifier = 560, /* task_reduction_identifier  */
  YYSYMBOL_task_reduction_enum_identifier = 561, /* task_reduction_enum_identifier  */
  YYSYMBOL_ordered_clause_optseq = 562,    /* ordered_clause_optseq  */
  YYSYMBOL_ordered_clause_threads_simd_seq = 563, /* ordered_clause_threads_simd_seq  */
  YYSYMBOL_ordered_clause_depend_seq = 564, /* ordered_clause_depend_seq  */
  YYSYMBOL_ordered_clause_depend = 565,    /* ordered_clause_depend  */
  YYSYMBOL_ordered_clause_threads_simd = 566, /* ordered_clause_threads_simd  */
  YYSYMBOL_threads_clause = 567,           /* threads_clause  */
  YYSYMBOL_simd_ordered_clause = 568,      /* simd_ordered_clause  */
  YYSYMBOL_teams_distribute_directive = 569, /* teams_distribute_directive  */
  YYSYMBOL_570_79 = 570,                   /* $@79  */
  YYSYMBOL_teams_distribute_clause_optseq = 571, /* teams_distribute_clause_optseq  */
  YYSYMBOL_teams_distribute_clause_seq = 572, /* teams_distribute_clause_seq  */
  YYSYMBOL_teams_distribute_clause = 573,  /* teams_distribute_clause  */
  YYSYMBOL_teams_distribute_simd_directive = 574, /* teams_distribute_simd_directive  */
  YYSYMBOL_575_80 = 575,                   /* $@80  */
  YYSYMBOL_teams_distribute_simd_clause_optseq = 576, /* teams_distribute_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_simd_clause_seq = 577, /* teams_distribute_simd_clause_seq  */
  YYSYMBOL_teams_distribute_simd_clause = 578, /* teams_distribute_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_for_directive = 579, /* teams_distribute_parallel_for_directive  */
  YYSYMBOL_580_81 = 580,                   /* $@81  */
  YYSYMBOL_teams_distribute_parallel_for_clause_optseq = 581, /* teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_clause_seq = 582, /* teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_clause = 583, /* teams_distribute_parallel_for_clause  */
  YYSYMBOL_teams_distribute_parallel_do_directive = 584, /* teams_distribute_parallel_do_directive  */
  YYSYMBOL_585_82 = 585,                   /* $@82  */
  YYSYMBOL_teams_distribute_parallel_do_clause_optseq = 586, /* teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_clause_seq = 587, /* teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_clause = 588, /* teams_distribute_parallel_do_clause  */
  YYSYMBOL_teams_distribute_parallel_for_simd_directive = 589, /* teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_590_83 = 590,                   /* $@83  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_optseq = 591, /* teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_seq = 592, /* teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause = 593, /* teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_do_simd_directive = 594, /* teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_595_84 = 595,                   /* $@84  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_optseq = 596, /* teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_seq = 597, /* teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause = 598, /* teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_teams_loop_directive = 599,     /* teams_loop_directive  */
  YYSYMBOL_600_85 = 600,                   /* $@85  */
  YYSYMBOL_teams_loop_clause_optseq = 601, /* teams_loop_clause_optseq  */
  YYSYMBOL_teams_loop_clause_seq = 602,    /* teams_loop_clause_seq  */
  YYSYMBOL_teams_loop_clause = 603,        /* teams_loop_clause  */
  YYSYMBOL_target_parallel_directive = 604, /* target_parallel_directive  */
  YYSYMBOL_605_86 = 605,                   /* $@86  */
  YYSYMBOL_target_parallel_clause_optseq = 606, /* target_parallel_clause_optseq  */
  YYSYMBOL_target_parallel_clause_seq = 607, /* target_parallel_clause_seq  */
  YYSYMBOL_target_parallel_clause = 608,   /* target_parallel_clause  */
  YYSYMBOL_target_parallel_for_directive = 609, /* target_parallel_for_directive  */
  YYSYMBOL_610_87 = 610,                   /* $@87  */
  YYSYMBOL_target_parallel_for_clause_optseq = 611, /* target_parallel_for_clause_optseq  */
  YYSYMBOL_target_parallel_for_clause_seq = 612, /* target_parallel_for_clause_seq  */
  YYSYMBOL_target_parallel_for_clause = 613, /* target_parallel_for_clause  */
  YYSYMBOL_target_parallel_do_directive = 614, /* target_parallel_do_directive  */
  YYSYMBOL_615_88 = 615,                   /* $@88  */
  YYSYMBOL_target_parallel_do_clause_optseq = 616, /* target_parallel_do_clause_optseq  */
  YYSYMBOL_target_parallel_do_clause_seq = 617, /* target_parallel_do_clause_seq  */
  YYSYMBOL_target_parallel_do_clause = 618, /* target_parallel_do_clause  */
  YYSYMBOL_target_parallel_for_simd_directive = 619, /* target_parallel_for_simd_directive  */
  YYSYMBOL_620_89 = 620,                   /* $@89  */
  YYSYMBOL_target_parallel_for_simd_clause_optseq = 621, /* target_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_parallel_for_simd_clause_seq = 622, /* target_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_parallel_for_simd_clause = 623, /* target_parallel_for_simd_clause  */
  YYSYMBOL_target_parallel_do_simd_directive = 624, /* target_parallel_do_simd_directive  */
  YYSYMBOL_625_90 = 625,                   /* $@90  */
  YYSYMBOL_target_parallel_do_simd_clause_optseq = 626, /* target_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_parallel_do_simd_clause_seq = 627, /* target_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_parallel_do_simd_clause = 628, /* target_parallel_do_simd_clause  */
  YYSYMBOL_target_parallel_loop_directive = 629, /* target_parallel_loop_directive  */
  YYSYMBOL_630_91 = 630,                   /* $@91  */
  YYSYMBOL_target_parallel_loop_clause_optseq = 631, /* target_parallel_loop_clause_optseq  */
  YYSYMBOL_target_parallel_loop_clause_seq = 632, /* target_parallel_loop_clause_seq  */
  YYSYMBOL_target_parallel_loop_clause = 633, /* target_parallel_loop_clause  */
  YYSYMBOL_target_simd_directive = 634,    /* target_simd_directive  */
  YYSYMBOL_635_92 = 635,                   /* $@92  */
  YYSYMBOL_target_simd_clause_optseq = 636, /* target_simd_clause_optseq  */
  YYSYMBOL_target_simd_clause_seq = 637,   /* target_simd_clause_seq  */
  YYSYMBOL_target_simd_clause = 638,       /* target_simd_clause  */
  YYSYMBOL_target_teams_directive = 639,   /* target_teams_directive  */
  YYSYMBOL_640_93 = 640,                   /* $@93  */
  YYSYMBOL_target_teams_clause_optseq = 641, /* target_teams_clause_optseq  */
  YYSYMBOL_target_teams_clause_seq = 642,  /* target_teams_clause_seq  */
  YYSYMBOL_target_teams_clause = 643,      /* target_teams_clause  */
  YYSYMBOL_target_teams_distribute_directive = 644, /* target_teams_distribute_directive  */
  YYSYMBOL_645_94 = 645,                   /* $@94  */
  YYSYMBOL_target_teams_distribute_clause_optseq = 646, /* target_teams_distribute_clause_optseq  */
  YYSYMBOL_target_teams_distribute_clause_seq = 647, /* target_teams_distribute_clause_seq  */
  YYSYMBOL_target_teams_distribute_clause = 648, /* target_teams_distribute_clause  */
  YYSYMBOL_target_teams_distribute_simd_directive = 649, /* target_teams_distribute_simd_directive  */
  YYSYMBOL_650_95 = 650,                   /* $@95  */
  YYSYMBOL_target_teams_distribute_simd_clause_optseq = 651, /* target_teams_distribute_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_simd_clause_seq = 652, /* target_teams_distribute_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_simd_clause = 653, /* target_teams_distribute_simd_clause  */
  YYSYMBOL_target_teams_loop_directive = 654, /* target_teams_loop_directive  */
  YYSYMBOL_655_96 = 655,                   /* $@96  */
  YYSYMBOL_target_teams_loop_clause_optseq = 656, /* target_teams_loop_clause_optseq  */
  YYSYMBOL_target_teams_loop_clause_seq = 657, /* target_teams_loop_clause_seq  */
  YYSYMBOL_target_teams_loop_clause = 658, /* target_teams_loop_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_directive = 659, /* target_teams_distribute_parallel_for_directive  */
  YYSYMBOL_660_97 = 660,                   /* $@97  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_optseq = 661, /* target_teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_seq = 662, /* target_teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause = 663, /* target_teams_distribute_parallel_for_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_directive = 664, /* target_teams_distribute_parallel_do_directive  */
  YYSYMBOL_665_98 = 665,                   /* $@98  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_optseq = 666, /* target_teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_seq = 667, /* target_teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause = 668, /* target_teams_distribute_parallel_do_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_directive = 669, /* target_teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_670_99 = 670,                   /* $@99  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_optseq = 671, /* target_teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_seq = 672, /* target_teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause = 673, /* target_teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_directive = 674, /* target_teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_675_100 = 675,                  /* $@100  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_optseq = 676, /* target_teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_seq = 677, /* target_teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause = 678, /* target_teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_for_directive = 679,            /* for_directive  */
  YYSYMBOL_680_101 = 680,                  /* $@101  */
  YYSYMBOL_do_directive = 681,             /* do_directive  */
  YYSYMBOL_682_102 = 682,                  /* $@102  */
  YYSYMBOL_do_paired_directive = 683,      /* do_paired_directive  */
  YYSYMBOL_684_103 = 684,                  /* $@103  */
  YYSYMBOL_simd_directive = 685,           /* simd_directive  */
  YYSYMBOL_686_104 = 686,                  /* $@104  */
  YYSYMBOL_for_simd_directive = 687,       /* for_simd_directive  */
  YYSYMBOL_688_105 = 688,                  /* $@105  */
  YYSYMBOL_do_simd_directive = 689,        /* do_simd_directive  */
  YYSYMBOL_690_106 = 690,                  /* $@106  */
  YYSYMBOL_do_simd_paired_directive = 691, /* do_simd_paired_directive  */
  YYSYMBOL_692_107 = 692,                  /* $@107  */
  YYSYMBOL_parallel_for_simd_directive = 693, /* parallel_for_simd_directive  */
  YYSYMBOL_parallel_do_simd_directive = 694, /* parallel_do_simd_directive  */
  YYSYMBOL_695_108 = 695,                  /* $@108  */
  YYSYMBOL_declare_simd_directive = 696,   /* declare_simd_directive  */
  YYSYMBOL_697_109 = 697,                  /* $@109  */
  YYSYMBOL_declare_simd_fortran_directive = 698, /* declare_simd_fortran_directive  */
  YYSYMBOL_699_110 = 699,                  /* $@110  */
  YYSYMBOL_proc_name = 700,                /* proc_name  */
  YYSYMBOL_distribute_directive = 701,     /* distribute_directive  */
  YYSYMBOL_702_111 = 702,                  /* $@111  */
  YYSYMBOL_distribute_simd_directive = 703, /* distribute_simd_directive  */
  YYSYMBOL_704_112 = 704,                  /* $@112  */
  YYSYMBOL_distribute_parallel_for_directive = 705, /* distribute_parallel_for_directive  */
  YYSYMBOL_706_113 = 706,                  /* $@113  */
  YYSYMBOL_distribute_parallel_do_directive = 707, /* distribute_parallel_do_directive  */
  YYSYMBOL_708_114 = 708,                  /* $@114  */
  YYSYMBOL_distribute_parallel_for_simd_directive = 709, /* distribute_parallel_for_simd_directive  */
  YYSYMBOL_710_115 = 710,                  /* $@115  */
  YYSYMBOL_distribute_parallel_do_simd_directive = 711, /* distribute_parallel_do_simd_directive  */
  YYSYMBOL_712_116 = 712,                  /* $@116  */
  YYSYMBOL_parallel_for_directive = 713,   /* parallel_for_directive  */
  YYSYMBOL_714_117 = 714,                  /* $@117  */
  YYSYMBOL_parallel_do_directive = 715,    /* parallel_do_directive  */
  YYSYMBOL_716_118 = 716,                  /* $@118  */
  YYSYMBOL_parallel_loop_directive = 717,  /* parallel_loop_directive  */
  YYSYMBOL_718_119 = 718,                  /* $@119  */
  YYSYMBOL_parallel_sections_directive = 719, /* parallel_sections_directive  */
  YYSYMBOL_720_120 = 720,                  /* $@120  */
  YYSYMBOL_parallel_workshare_directive = 721, /* parallel_workshare_directive  */
  YYSYMBOL_722_121 = 722,                  /* $@121  */
  YYSYMBOL_parallel_master_directive = 723, /* parallel_master_directive  */
  YYSYMBOL_724_122 = 724,                  /* $@122  */
  YYSYMBOL_master_taskloop_directive = 725, /* master_taskloop_directive  */
  YYSYMBOL_726_123 = 726,                  /* $@123  */
  YYSYMBOL_master_taskloop_simd_directive = 727, /* master_taskloop_simd_directive  */
  YYSYMBOL_728_124 = 728,                  /* $@124  */
  YYSYMBOL_parallel_master_taskloop_directive = 729, /* parallel_master_taskloop_directive  */
  YYSYMBOL_730_125 = 730,                  /* $@125  */
  YYSYMBOL_parallel_master_taskloop_simd_directive = 731, /* parallel_master_taskloop_simd_directive  */
  YYSYMBOL_732_126 = 732,                  /* $@126  */
  YYSYMBOL_loop_directive = 733,           /* loop_directive  */
  YYSYMBOL_734_127 = 734,                  /* $@127  */
  YYSYMBOL_scan_directive = 735,           /* scan_directive  */
  YYSYMBOL_736_128 = 736,                  /* $@128  */
  YYSYMBOL_sections_directive = 737,       /* sections_directive  */
  YYSYMBOL_738_129 = 738,                  /* $@129  */
  YYSYMBOL_sections_paired_directive = 739, /* sections_paired_directive  */
  YYSYMBOL_740_130 = 740,                  /* $@130  */
  YYSYMBOL_section_directive = 741,        /* section_directive  */
  YYSYMBOL_single_directive = 742,         /* single_directive  */
  YYSYMBOL_743_131 = 743,                  /* $@131  */
  YYSYMBOL_single_paired_directive = 744,  /* single_paired_directive  */
  YYSYMBOL_745_132 = 745,                  /* $@132  */
  YYSYMBOL_workshare_directive = 746,      /* workshare_directive  */
  YYSYMBOL_workshare_paired_directive = 747, /* workshare_paired_directive  */
  YYSYMBOL_748_133 = 748,                  /* $@133  */
  YYSYMBOL_cancel_directive = 749,         /* cancel_directive  */
  YYSYMBOL_750_134 = 750,                  /* $@134  */
  YYSYMBOL_cancellation_point_directive = 751, /* cancellation_point_directive  */
  YYSYMBOL_752_135 = 752,                  /* $@135  */
  YYSYMBOL_teams_directive = 753,          /* teams_directive  */
  YYSYMBOL_754_136 = 754,                  /* $@136  */
  YYSYMBOL_allocate_directive = 755,       /* allocate_directive  */
  YYSYMBOL_756_137 = 756,                  /* $@137  */
  YYSYMBOL_allocate_list = 757,            /* allocate_list  */
  YYSYMBOL_directive_variable = 758,       /* directive_variable  */
  YYSYMBOL_directive_varlist = 759,        /* directive_varlist  */
  YYSYMBOL_threadprivate_directive = 760,  /* threadprivate_directive  */
  YYSYMBOL_761_138 = 761,                  /* $@138  */
  YYSYMBOL_threadprivate_variable = 762,   /* threadprivate_variable  */
  YYSYMBOL_threadprivate_list = 763,       /* threadprivate_list  */
  YYSYMBOL_declare_reduction_directive = 764, /* declare_reduction_directive  */
  YYSYMBOL_765_139 = 765,                  /* $@139  */
  YYSYMBOL_reduction_list = 766,           /* reduction_list  */
  YYSYMBOL_reduction_identifiers = 767,    /* reduction_identifiers  */
  YYSYMBOL_typername_variable = 768,       /* typername_variable  */
  YYSYMBOL_typername_list = 769,           /* typername_list  */
  YYSYMBOL_combiner = 770,                 /* combiner  */
  YYSYMBOL_declare_mapper_directive = 771, /* declare_mapper_directive  */
  YYSYMBOL_772_140 = 772,                  /* $@140  */
  YYSYMBOL_mapper_list = 773,              /* mapper_list  */
  YYSYMBOL_mapper_identifier_optseq = 774, /* mapper_identifier_optseq  */
  YYSYMBOL_mapper_identifier = 775,        /* mapper_identifier  */
  YYSYMBOL_type_var = 776,                 /* type_var  */
  YYSYMBOL_parallel_clause_optseq = 777,   /* parallel_clause_optseq  */
  YYSYMBOL_cluster_clause_optseq = 778,    /* cluster_clause_optseq  */
  YYSYMBOL_cluster_data_clause_optseq = 779, /* cluster_data_clause_optseq  */
  YYSYMBOL_cluster_update_clause_optseq = 780, /* cluster_update_clause_optseq  */
  YYSYMBOL_cluster_teams_clause_optseq = 781, /* cluster_teams_clause_optseq  */
  YYSYMBOL_cluster_distribute_clause_optseq = 782, /* cluster_distribute_clause_optseq  */
  YYSYMBOL_cluster_teams_distribute_clause_optseq = 783, /* cluster_teams_distribute_clause_optseq  */
  YYSYMBOL_task_async_clause_optseq = 784, /* task_async_clause_optseq  */
  YYSYMBOL_teams_clause_optseq = 785,      /* teams_clause_optseq  */
  YYSYMBOL_for_clause_optseq = 786,        /* for_clause_optseq  */
  YYSYMBOL_do_clause_optseq = 787,         /* do_clause_optseq  */
  YYSYMBOL_do_paried_clause_optseq = 788,  /* do_paried_clause_optseq  */
  YYSYMBOL_simd_clause_optseq = 789,       /* simd_clause_optseq  */
  YYSYMBOL_for_simd_clause_optseq = 790,   /* for_simd_clause_optseq  */
  YYSYMBOL_do_simd_clause_optseq = 791,    /* do_simd_clause_optseq  */
  YYSYMBOL_do_simd_paried_clause_optseq = 792, /* do_simd_paried_clause_optseq  */
  YYSYMBOL_parallel_for_simd_clause_optseq = 793, /* parallel_for_simd_clause_optseq  */
  YYSYMBOL_declare_simd_clause_optseq = 794, /* declare_simd_clause_optseq  */
  YYSYMBOL_distribute_clause_optseq = 795, /* distribute_clause_optseq  */
  YYSYMBOL_distribute_simd_clause_optseq = 796, /* distribute_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_clause_optseq = 797, /* distribute_parallel_for_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_clause_optseq = 798, /* distribute_parallel_do_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_optseq = 799, /* distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_optseq = 800, /* distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_parallel_for_clause_optseq = 801, /* parallel_for_clause_optseq  */
  YYSYMBOL_parallel_do_clause_optseq = 802, /* parallel_do_clause_optseq  */
  YYSYMBOL_parallel_loop_clause_optseq = 803, /* parallel_loop_clause_optseq  */
  YYSYMBOL_parallel_sections_clause_optseq = 804, /* parallel_sections_clause_optseq  */
  YYSYMBOL_parallel_workshare_clause_optseq = 805, /* parallel_workshare_clause_optseq  */
  YYSYMBOL_parallel_master_clause_optseq = 806, /* parallel_master_clause_optseq  */
  YYSYMBOL_master_taskloop_clause_optseq = 807, /* master_taskloop_clause_optseq  */
  YYSYMBOL_master_taskloop_simd_clause_optseq = 808, /* master_taskloop_simd_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_clause_optseq = 809, /* parallel_master_taskloop_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_optseq = 810, /* parallel_master_taskloop_simd_clause_optseq  */
  YYSYMBOL_loop_clause_optseq = 811,       /* loop_clause_optseq  */
  YYSYMBOL_scan_clause_optseq = 812,       /* scan_clause_optseq  */
  YYSYMBOL_sections_clause_optseq = 813,   /* sections_clause_optseq  */
  YYSYMBOL_sections_paired_clause_optseq = 814, /* sections_paired_clause_optseq  */
  YYSYMBOL_single_clause_optseq = 815,     /* single_clause_optseq  */
  YYSYMBOL_single_paired_clause_optseq = 816, /* single_paired_clause_optseq  */
  YYSYMBOL_workshare_paired_clause_optseq = 817, /* workshare_paired_clause_optseq  */
  YYSYMBOL_cancel_clause_optseq = 818,     /* cancel_clause_optseq  */
  YYSYMBOL_cancellation_point_clause_optseq = 819, /* cancellation_point_clause_optseq  */
  YYSYMBOL_allocate_clause_optseq = 820,   /* allocate_clause_optseq  */
  YYSYMBOL_allocate_clause_seq = 821,      /* allocate_clause_seq  */
  YYSYMBOL_declare_reduction_clause_optseq = 822, /* declare_reduction_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_optseq = 823, /* declare_mapper_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_seq = 824, /* declare_mapper_clause_seq  */
  YYSYMBOL_parallel_clause_seq = 825,      /* parallel_clause_seq  */
  YYSYMBOL_cluster_clause_seq = 826,       /* cluster_clause_seq  */
  YYSYMBOL_cluster_data_clause_seq = 827,  /* cluster_data_clause_seq  */
  YYSYMBOL_cluster_update_clause_seq = 828, /* cluster_update_clause_seq  */
  YYSYMBOL_cluster_teams_clause_seq = 829, /* cluster_teams_clause_seq  */
  YYSYMBOL_cluster_distribute_clause_seq = 830, /* cluster_distribute_clause_seq  */
  YYSYMBOL_cluster_teams_distribute_clause_seq = 831, /* cluster_teams_distribute_clause_seq  */
  YYSYMBOL_task_async_clause_seq = 832,    /* task_async_clause_seq  */
  YYSYMBOL_teams_clause_seq = 833,         /* teams_clause_seq  */
  YYSYMBOL_for_clause_seq = 834,           /* for_clause_seq  */
  YYSYMBOL_do_clause_seq = 835,            /* do_clause_seq  */
  YYSYMBOL_simd_clause_seq = 836,          /* simd_clause_seq  */
  YYSYMBOL_for_simd_clause_seq = 837,      /* for_simd_clause_seq  */
  YYSYMBOL_do_simd_clause_seq = 838,       /* do_simd_clause_seq  */
  YYSYMBOL_parallel_for_simd_clause_seq = 839, /* parallel_for_simd_clause_seq  */
  YYSYMBOL_declare_simd_clause_seq = 840,  /* declare_simd_clause_seq  */
  YYSYMBOL_distribute_clause_seq = 841,    /* distribute_clause_seq  */
  YYSYMBOL_distribute_simd_clause_seq = 842, /* distribute_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_for_clause_seq = 843, /* distribute_parallel_for_clause_seq  */
  YYSYMBOL_distribute_parallel_do_clause_seq = 844, /* distribute_parallel_do_clause_seq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_seq = 845, /* distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_seq = 846, /* distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_parallel_for_clause_seq = 847,  /* parallel_for_clause_seq  */
  YYSYMBOL_parallel_do_clause_seq = 848,   /* parallel_do_clause_seq  */
  YYSYMBOL_parallel_loop_clause_seq = 849, /* parallel_loop_clause_seq  */
  YYSYMBOL_parallel_sections_clause_seq = 850, /* parallel_sections_clause_seq  */
  YYSYMBOL_parallel_workshare_clause_seq = 851, /* parallel_workshare_clause_seq  */
  YYSYMBOL_parallel_master_clause_seq = 852, /* parallel_master_clause_seq  */
  YYSYMBOL_master_taskloop_clause_seq = 853, /* master_taskloop_clause_seq  */
  YYSYMBOL_master_taskloop_simd_clause_seq = 854, /* master_taskloop_simd_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_clause_seq = 855, /* parallel_master_taskloop_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_seq = 856, /* parallel_master_taskloop_simd_clause_seq  */
  YYSYMBOL_loop_clause_seq = 857,          /* loop_clause_seq  */
  YYSYMBOL_scan_clause_seq = 858,          /* scan_clause_seq  */
  YYSYMBOL_sections_clause_seq = 859,      /* sections_clause_seq  */
  YYSYMBOL_single_clause_seq = 860,        /* single_clause_seq  */
  YYSYMBOL_single_paired_clause_seq = 861, /* single_paired_clause_seq  */
  YYSYMBOL_cancel_clause_seq = 862,        /* cancel_clause_seq  */
  YYSYMBOL_cancellation_point_clause_seq = 863, /* cancellation_point_clause_seq  */
  YYSYMBOL_allocate_directive_clause = 864, /* allocate_directive_clause  */
  YYSYMBOL_declare_reduction_clause_seq = 865, /* declare_reduction_clause_seq  */
  YYSYMBOL_declare_mapper_clause = 866,    /* declare_mapper_clause  */
  YYSYMBOL_parallel_clause = 867,          /* parallel_clause  */
  YYSYMBOL_cluster_clause = 868,           /* cluster_clause  */
  YYSYMBOL_869_141 = 869,                  /* $@141  */
  YYSYMBOL_870_142 = 870,                  /* $@142  */
  YYSYMBOL_871_143 = 871,                  /* $@143  */
  YYSYMBOL_872_144 = 872,                  /* $@144  */
  YYSYMBOL_873_145 = 873,                  /* $@145  */
  YYSYMBOL_cluster_data_clause = 874,      /* cluster_data_clause  */
  YYSYMBOL_cluster_update_clause = 875,    /* cluster_update_clause  */
  YYSYMBOL_cluster_teams_clause = 876,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 877, /* cluster_distribute_clause  */
  YYSYMBOL_878_146 = 878,                  /* $@146  */
  YYSYMBOL_879_147 = 879,                  /* $@147  */
  YYSYMBOL_cluster_teams_distribute_clause = 880, /* cluster_teams_distribute_clause  */
  YYSYMBOL_881_148 = 881,                  /* $@148  */
  YYSYMBOL_882_149 = 882,                  /* $@149  */
  YYSYMBOL_task_async_clause = 883,        /* task_async_clause  */
  YYSYMBOL_884_150 = 884,                  /* $@150  */
  YYSYMBOL_dependance_type = 885,          /* dependance_type  */
  YYSYMBOL_teams_clause = 886,             /* teams_clause  */
  YYSYMBOL_for_clause = 887,               /* for_clause  */
  YYSYMBOL_do_clause = 888,                /* do_clause  */
  YYSYMBOL_simd_clause = 889,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 890,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 891,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 892, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 893,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 894,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 895,   /* distribute_simd_clause  */
  YYSYMBOL_distribute_parallel_for_clause = 896, /* distribute_parallel_for_clause  */
  YYSYMBOL_distribute_parallel_do_clause = 897, /* distribute_parallel_do_clause  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 898, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 899, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_parallel_for_clause = 900,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 901,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 902,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 903, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 904, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 905,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 906,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 907, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 908, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 909, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 910,              /* loop_clause  */
  YYSYMBOL_scan_clause = 911,              /* scan_clause  */
  YYSYMBOL_sections_clause = 912,          /* sections_clause  */
  YYSYMBOL_single_clause = 913,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 914,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 915,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 916,       /* if_parallel_clause  */
  YYSYMBOL_if_parallel_parameter = 917,    /* if_parallel_parameter  */
  YYSYMBOL_918_151 = 918,                  /* $@151  */
  YYSYMBOL_if_task_clause = 919,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 920,        /* if_task_parameter  */
  YYSYMBOL_921_152 = 921,                  /* $@152  */
  YYSYMBOL_if_taskloop_clause = 922,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 923,    /* if_taskloop_parameter  */
  YYSYMBOL_924_153 = 924,                  /* $@153  */
  YYSYMBOL_if_target_data_clause = 925,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 926, /* if_target_data_parameter  */
  YYSYMBOL_927_154 = 927,                  /* $@154  */
  YYSYMBOL_if_target_parallel_clause = 928, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 929, /* if_target_parallel_parameter  */
  YYSYMBOL_930_155 = 930,                  /* $@155  */
  YYSYMBOL_931_156 = 931,                  /* $@156  */
  YYSYMBOL_if_target_simd_clause = 932,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 933, /* if_target_simd_parameter  */
  YYSYMBOL_934_157 = 934,                  /* $@157  */
  YYSYMBOL_935_158 = 935,                  /* $@158  */
  YYSYMBOL_if_target_enter_data_clause = 936, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 937, /* if_target_enter_data_parameter  */
  YYSYMBOL_938_159 = 938,                  /* $@159  */
  YYSYMBOL_if_target_exit_data_clause = 939, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 940, /* if_target_exit_data_parameter  */
  YYSYMBOL_941_160 = 941,                  /* $@160  */
  YYSYMBOL_if_target_clause = 942,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 943,      /* if_target_parameter  */
  YYSYMBOL_944_161 = 944,                  /* $@161  */
  YYSYMBOL_if_target_update_clause = 945,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 946, /* if_target_update_parameter  */
  YYSYMBOL_947_162 = 947,                  /* $@162  */
  YYSYMBOL_if_taskloop_simd_clause = 948,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 949, /* if_taskloop_simd_parameter  */
  YYSYMBOL_950_163 = 950,                  /* $@163  */
  YYSYMBOL_951_164 = 951,                  /* $@164  */
  YYSYMBOL_if_simd_clause = 952,           /* if_simd_clause  */
  YYSYMBOL_if_simd_parameter = 953,        /* if_simd_parameter  */
  YYSYMBOL_954_165 = 954,                  /* $@165  */
  YYSYMBOL_if_parallel_simd_clause = 955,  /* if_parallel_simd_clause  */
  YYSYMBOL_if_parallel_simd_parameter = 956, /* if_parallel_simd_parameter  */
  YYSYMBOL_957_166 = 957,                  /* $@166  */
  YYSYMBOL_958_167 = 958,                  /* $@167  */
  YYSYMBOL_if_target_parallel_simd_clause = 959, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 960, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_961_168 = 961,                  /* $@168  */
  YYSYMBOL_962_169 = 962,                  /* $@169  */
  YYSYMBOL_963_170 = 963,                  /* $@170  */
  YYSYMBOL_if_cancel_clause = 964,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 965,      /* if_cancel_parameter  */
  YYSYMBOL_966_171 = 966,                  /* $@171  */
  YYSYMBOL_if_parallel_taskloop_clause = 967, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 968, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_969_172 = 969,                  /* $@172  */
  YYSYMBOL_970_173 = 970,                  /* $@173  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 971, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 972, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_973_174 = 973,                  /* $@174  */
  YYSYMBOL_974_175 = 974,                  /* $@175  */
  YYSYMBOL_975_176 = 975,                  /* $@176  */
  YYSYMBOL_num_threads_clause = 976,       /* num_threads_clause  */
  YYSYMBOL_977_177 = 977,                  /* $@177  */
  YYSYMBOL_num_teams_clause = 978,         /* num_teams_clause  */
  YYSYMBOL_979_178 = 979,                  /* $@178  */
  YYSYMBOL_align_clause = 980,             /* align_clause  */
  YYSYMBOL_981_179 = 981,                  /* $@179  */
  YYSYMBOL_thread_limit_clause = 982,      /* thread_limit_clause  */
  YYSYMBOL_983_180 = 983,                  /* $@180  */
  YYSYMBOL_copyin_clause = 984,            /* copyin_clause  */
  YYSYMBOL_985_181 = 985,                  /* $@181  */
  YYSYMBOL_default_clause = 986,           /* default_clause  */
  YYSYMBOL_default_parameter = 987,        /* default_parameter  */
  YYSYMBOL_default_variant_clause = 988,   /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 989, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 990,         /* proc_bind_clause  */
  YYSYMBOL_proc_bind_parameter = 991,      /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 992,              /* bind_clause  */
  YYSYMBOL_bind_parameter = 993,           /* bind_parameter  */
  YYSYMBOL_allocate_clause = 994,          /* allocate_clause  */
  YYSYMBOL_allocate_parameter = 995,       /* allocate_parameter  */
  YYSYMBOL_996_182 = 996,                  /* $@182  */
  YYSYMBOL_997_183 = 997,                  /* $@183  */
  YYSYMBOL_allocator_parameter = 998,      /* allocator_parameter  */
  YYSYMBOL_private_clause = 999,           /* private_clause  */
  YYSYMBOL_1000_184 = 1000,                /* $@184  */
  YYSYMBOL_alloc_clause = 1001,            /* alloc_clause  */
  YYSYMBOL_broad_clause = 1002,            /* broad_clause  */
  YYSYMBOL_1003_185 = 1003,                /* $@185  */
  YYSYMBOL_scatter_clause = 1004,          /* scatter_clause  */
  YYSYMBOL_1005_186 = 1005,                /* $@186  */
  YYSYMBOL_halo_clause = 1006,             /* halo_clause  */
  YYSYMBOL_1007_187 = 1007,                /* $@187  */
  YYSYMBOL_gather_clause = 1008,           /* gather_clause  */
  YYSYMBOL_1009_188 = 1009,                /* $@188  */
  YYSYMBOL_allgather_clause = 1010,        /* allgather_clause  */
  YYSYMBOL_1011_189 = 1011,                /* $@189  */
  YYSYMBOL_allreduction_clause = 1012,     /* allreduction_clause  */
  YYSYMBOL_1013_190 = 1013,                /* $@190  */
  YYSYMBOL_firstprivate_clause = 1014,     /* firstprivate_clause  */
  YYSYMBOL_1015_191 = 1015,                /* $@191  */
  YYSYMBOL_copyprivate_clause = 1016,      /* copyprivate_clause  */
  YYSYMBOL_1017_192 = 1017,                /* $@192  */
  YYSYMBOL_fortran_copyprivate_clause = 1018, /* fortran_copyprivate_clause  */
  YYSYMBOL_1019_193 = 1019,                /* $@193  */
  YYSYMBOL_lastprivate_clause = 1020,      /* lastprivate_clause  */
  YYSYMBOL_lastprivate_parameter = 1021,   /* lastprivate_parameter  */
  YYSYMBOL_1022_194 = 1022,                /* $@194  */
  YYSYMBOL_1023_195 = 1023,                /* $@195  */
  YYSYMBOL_lastprivate_distribute_clause = 1024, /* lastprivate_distribute_clause  */
  YYSYMBOL_1025_196 = 1025,                /* $@196  */
  YYSYMBOL_lastprivate_modifier = 1026,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1027,           /* linear_clause  */
  YYSYMBOL_1028_197 = 1028,                /* $@197  */
  YYSYMBOL_linear_parameter = 1029,        /* linear_parameter  */
  YYSYMBOL_1030_198 = 1030,                /* $@198  */
  YYSYMBOL_linear_modifier = 1031,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1032,          /* aligned_clause  */
  YYSYMBOL_1033_199 = 1033,                /* $@199  */
  YYSYMBOL_aligned_parameter = 1034,       /* aligned_parameter  */
  YYSYMBOL_1035_200 = 1035,                /* $@200  */
  YYSYMBOL_initializer_clause = 1036,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1037,        /* initializer_expr  */
  YYSYMBOL_expr = 1038,                    /* expr  */
  YYSYMBOL_safelen_clause = 1039,          /* safelen_clause  */
  YYSYMBOL_1040_201 = 1040,                /* $@201  */
  YYSYMBOL_simdlen_clause = 1041,          /* simdlen_clause  */
  YYSYMBOL_1042_202 = 1042,                /* $@202  */
  YYSYMBOL_nontemporal_clause = 1043,      /* nontemporal_clause  */
  YYSYMBOL_1044_203 = 1044,                /* $@203  */
  YYSYMBOL_collapse_clause = 1045,         /* collapse_clause  */
  YYSYMBOL_1046_204 = 1046,                /* $@204  */
  YYSYMBOL_ordered_clause = 1047,          /* ordered_clause  */
  YYSYMBOL_1048_205 = 1048,                /* $@205  */
  YYSYMBOL_fortran_nowait_clause = 1049,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1050,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1051,            /* order_clause  */
  YYSYMBOL_order_parameter = 1052,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1053,          /* uniform_clause  */
  YYSYMBOL_1054_206 = 1054,                /* $@206  */
  YYSYMBOL_inbranch_clause = 1055,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1056,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1057,        /* inclusive_clause  */
  YYSYMBOL_1058_207 = 1058,                /* $@207  */
  YYSYMBOL_exclusive_clause = 1059,        /* exclusive_clause  */
  YYSYMBOL_1060_208 = 1060,                /* $@208  */
  YYSYMBOL_allocator_clause = 1061,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1062,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1063,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1064, /* dist_schedule_parameter  */
  YYSYMBOL_1065_209 = 1065,                /* $@209  */
  YYSYMBOL_schedule_clause = 1066,         /* schedule_clause  */
  YYSYMBOL_1067_210 = 1067,                /* $@210  */
  YYSYMBOL_schedule_parameter = 1068,      /* schedule_parameter  */
  YYSYMBOL_schedule_kind = 1069,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1070,       /* schedule_modifier  */
  YYSYMBOL_schedule_modifier2 = 1071,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1072,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1073,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1074,           /* shared_clause  */
  YYSYMBOL_1075_211 = 1075,                /* $@211  */
  YYSYMBOL_reduction_clause = 1076,        /* reduction_clause  */
  YYSYMBOL_1077_212 = 1077,                /* $@212  */
  YYSYMBOL_reduction_clause_cluster = 1078, /* reduction_clause_cluster  */
  YYSYMBOL_1079_213 = 1079,                /* $@213  */
  YYSYMBOL_allreduction_clause_cluster = 1080, /* allreduction_clause_cluster  */
  YYSYMBOL_1081_214 = 1081,                /* $@214  */
  YYSYMBOL_allreduction_parameter_cluster = 1082, /* allreduction_parameter_cluster  */
  YYSYMBOL_reduction_parameter_cluster = 1083, /* reduction_parameter_cluster  */
  YYSYMBOL_allreduction_identifier_cluster = 1084, /* allreduction_identifier_cluster  */
  YYSYMBOL_reduction_identifier_cluster = 1085, /* reduction_identifier_cluster  */
  YYSYMBOL_reduction_parameter = 1086,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1087,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1088,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1089, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1090, /* reduction_default_only_clause  */
  YYSYMBOL_1091_215 = 1091,                /* $@215  */
  YYSYMBOL_reduction_default_only_parameter = 1092, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1093 /* reduction_default_only_modifier  */
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
#define YYFINAL  175
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  837
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2505
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3160

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
       0,   136,   136,   137,   144,   145,   148,   152,   159,   160,
     163,   164,   167,   170,   172,   171,   186,   188,   187,   203,
     202,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   253,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   303,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   406,   406,
     409,   412,   412,   416,   417,   420,   421,   422,   425,   426,
     429,   429,   429,   429,   432,   433,   436,   437,   438,   441,
     441,   441,   444,   445,   446,   447,   450,   451,   452,   455,
     456,   457,   458,   461,   461,   464,   465,   466,   469,   472,
     473,   474,   475,   476,   477,   480,   483,   486,   487,   488,
     489,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   506,   509,   510,   510,   513,   516,   517,
     517,   520,   520,   524,   524,   527,   528,   531,   532,   533,
     536,   539,   539,   544,   544,   547,   547,   550,   553,   556,
     556,   559,   559,   562,   562,   565,   565,   568,   568,   571,
     574,   574,   579,   579,   581,   581,   583,   583,   585,   587,
     587,   589,   589,   591,   591,   593,   593,   595,   595,   597,
     597,   599,   599,   601,   601,   604,   606,   608,   610,   610,
     612,   612,   614,   614,   616,   616,   618,   618,   620,   621,
     622,   623,   625,   627,   630,   631,   632,   634,   637,   639,
     640,   641,   642,   643,   644,   645,   648,   650,   651,   653,
     654,   656,   657,   659,   661,   663,   664,   666,   667,   669,
     670,   672,   674,   675,   676,   679,   681,   682,   684,   685,
     686,   688,   689,   691,   693,   694,   696,   697,   698,   701,
     701,   703,   704,   705,   706,   707,   708,   709,   710,   713,
     714,   717,   718,   719,   720,   721,   723,   724,   725,   726,
     727,   728,   729,   731,   732,   733,   734,   737,   738,   739,
     740,   741,   744,   744,   747,   749,   751,   753,   756,   758,
     760,   762,   764,   767,   768,   770,   771,   774,   775,   776,
     778,   779,   780,   782,   783,   784,   786,   787,   788,   791,
     792,   793,   795,   796,   797,   799,   800,   801,   803,   804,
     805,   807,   808,   809,   811,   812,   813,   815,   816,   817,
     819,   820,   821,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855,   857,   858,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,   872,
     873,   874,   875,   876,   877,   878,   879,   881,   882,   883,
     884,   885,   886,   888,   889,   890,   891,   892,   894,   895,
     896,   897,   898,   900,   901,   902,   903,   904,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   921,   922,   924,   925,   927,   928,   929,   930,
     932,   933,   934,   936,   938,   939,   941,   941,   943,   945,
     947,   949,   950,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   965,   965,   968,   969,   971,   973,   973,
     975,   976,   978,   978,   979,   979,   981,   981,   981,   983,
     984,   986,   987,   988,   989,   990,   993,   993,   996,   998,
     999,  1000,  1001,  1003,  1003,  1006,  1008,  1009,  1009,  1012,
    1012,  1015,  1017,  1018,  1018,  1019,  1022,  1022,  1024,  1025,
    1027,  1027,  1028,  1028,  1030,  1030,  1030,  1033,  1034,  1037,
    1037,  1039,  1039,  1041,  1041,  1043,  1045,  1047,  1049,  1051,
    1053,  1054,  1055,  1057,  1059,  1061,  1063,  1064,  1064,  1065,
    1068,  1069,  1072,  1074,  1075,  1075,  1078,  1078,  1081,  1081,
    1083,  1083,  1087,  1087,  1090,  1090,  1092,  1093,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1104,  1105,  1106,  1107,  1109,
    1109,  1110,  1111,  1114,  1115,  1116,  1117,  1120,  1121,  1122,
    1123,  1124,  1125,  1126,  1127,  1129,  1131,  1132,  1133,  1133,
    1134,  1136,  1136,  1139,  1140,  1141,  1141,  1142,  1144,  1144,
    1146,  1146,  1149,  1151,  1152,  1153,  1156,  1156,  1158,  1159,
    1159,  1160,  1162,  1163,  1164,  1165,  1166,  1168,  1169,  1170,
    1171,  1173,  1174,  1177,  1178,  1179,  1181,  1182,  1183,  1185,
    1186,  1187,  1189,  1190,  1191,  1192,  1193,  1194,  1196,  1199,
    1201,  1202,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,  1216,  1217,  1218,  1220,  1221,  1222,  1224,  1225,
    1226,  1228,  1230,  1231,  1233,  1235,  1237,  1237,  1239,  1240,
    1242,  1243,  1244,  1246,  1247,  1248,  1249,  1250,  1251,  1252,
    1253,  1254,  1255,  1256,  1258,  1258,  1260,  1261,  1263,  1264,
    1265,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1286,
    1286,  1288,  1289,  1291,  1292,  1293,  1295,  1296,  1297,  1298,
    1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1316,  1316,  1318,  1319,
    1321,  1322,  1323,  1325,  1326,  1327,  1328,  1329,  1330,  1331,
    1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,
    1342,  1343,  1344,  1346,  1346,  1348,  1349,  1351,  1352,  1353,
    1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,  1378,  1380,  1380,  1382,  1383,  1385,  1386,
    1387,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,
    1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,
    1408,  1409,  1410,  1411,  1412,  1414,  1414,  1416,  1417,  1419,
    1420,  1421,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,
    1431,  1432,  1433,  1434,  1436,  1436,  1438,  1439,  1441,  1442,
    1443,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,
    1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1462,  1465,
    1465,  1467,  1468,  1470,  1471,  1472,  1474,  1475,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,
    1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1500,  1500,  1502,  1503,  1505,  1506,  1507,  1509,  1510,
    1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
    1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,
    1531,  1532,  1533,  1535,  1535,  1537,  1538,  1540,  1541,  1542,
    1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,
    1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1573,  1573,
    1575,  1576,  1578,  1579,  1580,  1582,  1583,  1584,  1585,  1586,
    1587,  1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,
    1597,  1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
    1607,  1608,  1609,  1611,  1611,  1613,  1614,  1616,  1617,  1618,
    1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,  1629,
    1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,  1638,  1639,
    1640,  1641,  1643,  1643,  1645,  1646,  1648,  1649,  1650,  1652,
    1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  1666,  1667,  1668,  1669,  1670,  1671,  1672,
    1674,  1674,  1676,  1677,  1679,  1680,  1681,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1698,  1699,  1701,  1701,  1703,  1704,  1706,  1707,
    1708,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1731,  1731,  1733,  1734,  1736,  1737,  1738,  1740,  1741,
    1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,
    1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,
    1762,  1763,  1764,  1765,  1767,  1767,  1769,  1770,  1772,  1773,
    1774,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,
    1795,  1796,  1798,  1798,  1800,  1801,  1803,  1804,  1805,  1807,
    1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,
    1818,  1819,  1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,
    1828,  1829,  1830,  1831,  1832,  1833,  1835,  1835,  1837,  1838,
    1840,  1841,  1842,  1844,  1845,  1846,  1847,  1848,  1849,  1850,
    1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,
    1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
    1872,  1872,  1874,  1875,  1877,  1878,  1879,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1903,
    1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,  1913,  1913,
    1915,  1916,  1918,  1919,  1920,  1922,  1923,  1924,  1925,  1926,
    1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,
    1937,  1938,  1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,
    1947,  1948,  1949,  1950,  1951,  1952,  1956,  1956,  1958,  1958,
    1960,  1960,  1962,  1962,  1964,  1964,  1966,  1966,  1968,  1968,
    1970,  1972,  1972,  1974,  1974,  1976,  1976,  1978,  1979,  1981,
    1981,  1983,  1983,  1985,  1985,  1987,  1987,  1989,  1989,  1991,
    1991,  1993,  1993,  1995,  1995,  1997,  1997,  1999,  1999,  2001,
    2001,  2003,  2003,  2005,  2005,  2009,  2009,  2013,  2013,  2017,
    2017,  2021,  2021,  2023,  2023,  2025,  2025,  2027,  2027,  2029,
    2031,  2031,  2033,  2033,  2035,  2037,  2037,  2039,  2039,  2046,
    2046,  2053,  2053,  2056,  2056,  2058,  2061,  2063,  2064,  2067,
    2067,  2069,  2071,  2072,  2075,  2075,  2078,  2081,  2082,  2083,
    2084,  2085,  2086,  2087,  2088,  2091,  2093,  2094,  2096,  2099,
    2099,  2102,  2105,  2106,  2109,  2110,  2113,  2116,  2117,  2120,
    2121,  2124,  2128,  2131,  2132,  2135,  2136,  2139,  2140,  2143,
    2144,  2147,  2148,  2151,  2152,  2154,  2155,  2157,  2158,  2160,
    2161,  2163,  2164,  2166,  2167,  2169,  2170,  2172,  2173,  2175,
    2176,  2178,  2179,  2181,  2182,  2184,  2185,  2187,  2188,  2190,
    2191,  2193,  2194,  2196,  2197,  2199,  2200,  2202,  2203,  2205,
    2206,  2208,  2209,  2211,  2212,  2214,  2215,  2217,  2218,  2220,
    2221,  2223,  2224,  2226,  2227,  2229,  2231,  2232,  2234,  2235,
    2237,  2238,  2240,  2241,  2243,  2244,  2246,  2247,  2252,  2253,
    2258,  2259,  2261,  2262,  2263,  2268,  2269,  2271,  2272,  2274,
    2275,  2276,  2278,  2279,  2280,  2283,  2284,  2285,  2288,  2289,
    2290,  2293,  2294,  2295,  2298,  2299,  2300,  2303,  2304,  2305,
    2308,  2309,  2310,  2313,  2314,  2315,  2318,  2319,  2320,  2323,
    2324,  2325,  2328,  2329,  2330,  2333,  2334,  2335,  2338,  2339,
    2340,  2342,  2343,  2344,  2346,  2347,  2348,  2350,  2351,  2352,
    2354,  2355,  2356,  2358,  2359,  2360,  2362,  2363,  2364,  2366,
    2367,  2368,  2370,  2371,  2372,  2374,  2375,  2376,  2378,  2379,
    2380,  2382,  2383,  2384,  2386,  2387,  2388,  2390,  2391,  2392,
    2394,  2395,  2396,  2398,  2399,  2400,  2402,  2403,  2404,  2406,
    2407,  2408,  2410,  2411,  2412,  2414,  2415,  2416,  2418,  2419,
    2420,  2422,  2424,  2425,  2426,  2432,  2433,  2434,  2436,  2437,
    2438,  2440,  2441,  2442,  2448,  2452,  2453,  2455,  2457,  2459,
    2460,  2461,  2462,  2463,  2464,  2465,  2466,  2467,  2468,  2471,
    2472,  2473,  2473,  2474,  2474,  2475,  2475,  2476,  2477,  2477,
    2478,  2478,  2481,  2482,  2483,  2484,  2485,  2486,  2487,  2488,
    2490,  2491,  2492,  2493,  2494,  2495,  2496,  2497,  2500,  2501,
    2502,  2503,  2504,  2505,  2506,  2507,  2508,  2509,  2510,  2511,
    2512,  2513,  2514,  2515,  2516,  2519,  2520,  2521,  2522,  2523,
    2524,  2525,  2525,  2526,  2526,  2529,  2530,  2531,  2532,  2533,
    2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,
    2544,  2545,  2546,  2547,  2548,  2548,  2549,  2549,  2552,  2552,
    2555,  2557,  2562,  2563,  2564,  2565,  2566,  2567,  2568,  2569,
    2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,  2581,
    2582,  2585,  2586,  2587,  2588,  2589,  2590,  2591,  2592,  2593,
    2594,  2597,  2598,  2599,  2600,  2601,  2602,  2603,  2604,  2605,
    2606,  2607,  2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,
    2618,  2619,  2620,  2621,  2622,  2623,  2624,  2625,  2627,  2628,
    2629,  2630,  2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,
    2639,  2640,  2641,  2643,  2644,  2645,  2646,  2647,  2648,  2649,
    2650,  2651,  2652,  2653,  2654,  2655,  2656,  2657,  2658,  2659,
    2660,  2661,  2662,  2665,  2666,  2667,  2668,  2669,  2670,  2673,
    2674,  2675,  2676,  2677,  2678,  2680,  2681,  2682,  2683,  2684,
    2685,  2686,  2687,  2688,  2689,  2690,  2691,  2692,  2693,  2695,
    2696,  2697,  2698,  2699,  2700,  2701,  2702,  2703,  2704,  2705,
    2706,  2707,  2708,  2709,  2710,  2711,  2712,  2714,  2715,  2716,
    2717,  2718,  2719,  2720,  2721,  2722,  2723,  2724,  2725,  2726,
    2727,  2728,  2729,  2730,  2732,  2733,  2734,  2735,  2736,  2737,
    2738,  2739,  2740,  2741,  2742,  2743,  2744,  2745,  2746,  2747,
    2748,  2749,  2750,  2751,  2752,  2753,  2755,  2756,  2757,  2758,
    2759,  2760,  2761,  2762,  2763,  2764,  2765,  2766,  2767,  2768,
    2769,  2770,  2771,  2772,  2773,  2774,  2775,  2777,  2778,  2779,
    2780,  2781,  2782,  2783,  2784,  2785,  2786,  2787,  2788,  2789,
    2790,  2791,  2792,  2793,  2795,  2796,  2797,  2798,  2799,  2800,
    2801,  2802,  2803,  2804,  2805,  2806,  2807,  2808,  2809,  2810,
    2812,  2813,  2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,
    2822,  2823,  2824,  2825,  2827,  2828,  2829,  2830,  2831,  2832,
    2833,  2834,  2835,  2836,  2837,  2839,  2840,  2841,  2842,  2843,
    2844,  2845,  2846,  2847,  2848,  2850,  2851,  2852,  2853,  2854,
    2855,  2856,  2857,  2858,  2859,  2861,  2862,  2863,  2864,  2865,
    2866,  2867,  2868,  2869,  2870,  2871,  2872,  2873,  2874,  2875,
    2876,  2877,  2879,  2880,  2881,  2882,  2883,  2884,  2885,  2886,
    2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2895,  2896,
    2897,  2898,  2899,  2900,  2901,  2903,  2904,  2905,  2906,  2907,
    2908,  2909,  2910,  2911,  2912,  2913,  2914,  2915,  2916,  2917,
    2918,  2919,  2920,  2921,  2922,  2924,  2925,  2926,  2927,  2928,
    2929,  2930,  2931,  2932,  2933,  2934,  2935,  2936,  2937,  2938,
    2939,  2940,  2941,  2942,  2943,  2944,  2945,  2946,  2947,  2948,
    2949,  2951,  2952,  2953,  2954,  2955,  2956,  2958,  2959,  2961,
    2962,  2963,  2964,  2965,  2966,  2968,  2969,  2970,  2971,  2972,
    2974,  2975,  2977,  2978,  2979,  2980,  2981,  2988,  2991,  2991,
    2993,  2995,  2998,  2998,  2999,  3001,  3004,  3004,  3005,  3007,
    3010,  3010,  3011,  3013,  3016,  3016,  3017,  3017,  3018,  3020,
    3023,  3023,  3024,  3024,  3025,  3027,  3030,  3030,  3031,  3033,
    3036,  3036,  3037,  3039,  3042,  3042,  3043,  3045,  3048,  3048,
    3049,  3051,  3054,  3054,  3055,  3055,  3056,  3058,  3060,  3060,
    3061,  3063,  3065,  3065,  3066,  3066,  3067,  3069,  3071,  3071,
    3072,  3072,  3073,  3073,  3074,  3076,  3078,  3078,  3079,  3081,
    3083,  3083,  3084,  3084,  3085,  3087,  3089,  3089,  3090,  3090,
    3091,  3091,  3092,  3103,  3103,  3106,  3106,  3109,  3109,  3113,
    3113,  3115,  3115,  3119,  3122,  3123,  3124,  3125,  3128,  3131,
    3134,  3136,  3137,  3138,  3140,  3142,  3143,  3144,  3146,  3148,
    3149,  3149,  3150,  3150,  3152,  3153,  3154,  3155,  3156,  3157,
    3158,  3159,  3160,  3163,  3163,  3166,  3168,  3168,  3170,  3170,
    3172,  3172,  3182,  3182,  3184,  3184,  3186,  3186,  3188,  3188,
    3191,  3191,  3193,  3193,  3195,  3197,  3198,  3198,  3199,  3199,
    3202,  3202,  3204,  3207,  3208,  3208,  3211,  3212,  3212,  3213,
    3215,  3216,  3217,  3220,  3221,  3221,  3225,  3226,  3226,  3229,
    3231,  3233,  3235,  3235,  3238,  3238,  3241,  3241,  3244,  3244,
    3247,  3247,  3248,  3250,  3252,  3254,  3257,  3260,  3260,  3263,
    3266,  3268,  3268,  3270,  3270,  3272,  3273,  3274,  3275,  3276,
    3277,  3278,  3279,  3280,  3281,  3284,  3286,  3287,  3287,  3289,
    3289,  3293,  3294,  3298,  3299,  3302,  3303,  3306,  3307,  3308,
    3310,  3311,  3312,  3315,  3316,  3317,  3318,  3319,  3321,  3321,
    3324,  3324,  3328,  3328,  3331,  3331,  3334,  3335,  3337,  3338,
    3341,  3342,  3345,  3346,  3349,  3350,  3353,  3354,  3357,  3358,
    3359,  3362,  3363,  3364,  3365,  3366,  3367,  3368,  3369,  3370,
    3371,  3374,  3374,  3378,  3379,  3382
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
  "$accept", "expression", "variable", "var_list", "var_list_cluster",
  "var_list_reduction", "var_list_allreduction", "var_chunk",
  "var_chunk_list_cluster_aux_aux", "$@1", "var_chunk_list_cluster_aux",
  "$@2", "var_chunk_list_cluster", "$@3", "openmp_directive", "$@4",
  "directiveAuxCluster", "variant_directive", "fortran_paired_directive",
  "end_directive", "$@5", "end_clause_seq", "metadirective_directive",
  "$@6", "metadirective_clause_optseq", "metadirective_clause_seq",
  "metadirective_clause", "when_clause", "$@7", "$@8", "$@9",
  "when_variant_directive", "context_selector_specification",
  "trait_set_selector", "$@10", "$@11", "trait_set_selector_name",
  "trait_selector_list", "trait_selector", "condition_selector", "$@12",
  "device_selector", "context_kind", "context_kind_name", "context_isa",
  "context_arch", "implementation_selector", "context_vendor_name",
  "construct_selector", "parallel_selector", "$@13",
  "parallel_selector_parameter", "trait_score", "$@14",
  "declare_variant_directive", "$@15", "variant_func_id", "$@16",
  "declare_variant_clause_optseq", "declare_variant_clause_seq",
  "declare_variant_clause", "match_clause", "$@17", "parallel_directive",
  "$@18", "cluster_directive", "$@19", "declare_cluster_directive",
  "end_declare_cluster_directive", "cluster_data_directive", "$@20",
  "cluster_update_directive", "$@21", "cluster_teams_directive", "$@22",
  "cluster_distribute_directive", "$@23",
  "cluster_teams_distribute_directive", "$@24",
  "cluster_teams_master_directive", "task_async_directive", "$@25",
  "task_directive", "$@26", "taskloop_directive", "$@27",
  "taskloop_simd_directive", "$@28", "taskyield_directive",
  "requires_directive", "$@29", "target_data_directive", "$@30",
  "target_enter_data_directive", "$@31", "target_exit_data_directive",
  "$@32", "target_directive", "$@33", "target_update_directive", "$@34",
  "declare_target_directive", "$@35", "flush_directive", "$@36",
  "end_declare_target_directive", "master_directive", "barrier_directive",
  "taskwait_directive", "$@37", "taskgroup_directive", "$@38",
  "critical_directive", "$@39", "depobj_directive", "$@40",
  "ordered_directive", "$@41", "critical_clause_optseq",
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
  "$@42", "atomic_clause_optseq", "atomic_clause_seq",
  "memory_order_clause_seq", "memory_order_clause_seq_after",
  "atomic_clause", "memory_order_clause", "hint_clause", "$@43",
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
  "taskwait_clause", "taskgroup_clause", "final_clause", "$@44",
  "untied_clause", "mergeable_clause", "in_reduction_clause",
  "in_reduction_identifier", "in_reduction_enum_identifier",
  "depend_with_modifier_clause", "$@45", "depend_parameter",
  "dependence_type", "depend_modifier", "$@46",
  "depend_iterators_definition", "depend_iterator_specifier", "$@47",
  "$@48", "depend_range_specification", "$@49", "$@50",
  "depend_range_step", "depend_enum_type", "depend_depobj_clause", "$@51",
  "dependence_depobj_parameter", "dependence_depobj_type",
  "depend_ordered_clause", "$@52", "dependence_ordered_parameter",
  "dependence_ordered_type", "$@53", "priority_clause", "$@54",
  "affinity_clause", "affinity_parameter", "$@55", "affinity_modifier",
  "$@56", "iterators_definition", "iterator_specifier", "$@57", "$@58",
  "range_specification", "$@59", "$@60", "range_step", "detach_clause",
  "$@61", "grainsize_clause", "$@62", "num_tasks_clause", "$@63",
  "nogroup_clause", "reverse_offload_clause", "unified_address_clause",
  "unified_shared_memory_clause", "atomic_default_mem_order_clause",
  "atomic_default_mem_order_parameter", "dynamic_allocators_clause",
  "ext_implementation_defined_requirement_clause", "device_clause",
  "device_parameter", "$@64", "device_modifier_parameter",
  "device_without_modifier_clause", "device_without_modifier_parameter",
  "$@65", "use_device_ptr_clause", "$@66", "use_device_addr_clause",
  "$@67", "is_device_ptr_clause", "$@68", "has_device_addr_clause", "$@69",
  "defaultmap_clause", "$@70", "defaultmap_parameter",
  "defaultmap_behavior", "defaultmap_category", "uses_allocators_clause",
  "$@71", "uses_allocators_parameter", "allocators_list",
  "allocators_list_parameter_enum", "allocators_list_parameter_user",
  "to_clause", "to_parameter", "$@72", "to_mapper", "$@73", "from_clause",
  "from_parameter", "$@74", "from_mapper", "$@75", "link_clause", "$@76",
  "device_type_clause", "device_type_parameter", "map_clause", "$@77",
  "map_parameter", "$@78", "map_modifier_type", "map_modifier_parameter1",
  "map_modifier_parameter2", "map_modifier1", "map_modifier2",
  "map_modifier3", "map_type", "map_modifier_mapper",
  "task_reduction_clause", "task_reduction_identifier",
  "task_reduction_enum_identifier", "ordered_clause_optseq",
  "ordered_clause_threads_simd_seq", "ordered_clause_depend_seq",
  "ordered_clause_depend", "ordered_clause_threads_simd", "threads_clause",
  "simd_ordered_clause", "teams_distribute_directive", "$@79",
  "teams_distribute_clause_optseq", "teams_distribute_clause_seq",
  "teams_distribute_clause", "teams_distribute_simd_directive", "$@80",
  "teams_distribute_simd_clause_optseq",
  "teams_distribute_simd_clause_seq", "teams_distribute_simd_clause",
  "teams_distribute_parallel_for_directive", "$@81",
  "teams_distribute_parallel_for_clause_optseq",
  "teams_distribute_parallel_for_clause_seq",
  "teams_distribute_parallel_for_clause",
  "teams_distribute_parallel_do_directive", "$@82",
  "teams_distribute_parallel_do_clause_optseq",
  "teams_distribute_parallel_do_clause_seq",
  "teams_distribute_parallel_do_clause",
  "teams_distribute_parallel_for_simd_directive", "$@83",
  "teams_distribute_parallel_for_simd_clause_optseq",
  "teams_distribute_parallel_for_simd_clause_seq",
  "teams_distribute_parallel_for_simd_clause",
  "teams_distribute_parallel_do_simd_directive", "$@84",
  "teams_distribute_parallel_do_simd_clause_optseq",
  "teams_distribute_parallel_do_simd_clause_seq",
  "teams_distribute_parallel_do_simd_clause", "teams_loop_directive",
  "$@85", "teams_loop_clause_optseq", "teams_loop_clause_seq",
  "teams_loop_clause", "target_parallel_directive", "$@86",
  "target_parallel_clause_optseq", "target_parallel_clause_seq",
  "target_parallel_clause", "target_parallel_for_directive", "$@87",
  "target_parallel_for_clause_optseq", "target_parallel_for_clause_seq",
  "target_parallel_for_clause", "target_parallel_do_directive", "$@88",
  "target_parallel_do_clause_optseq", "target_parallel_do_clause_seq",
  "target_parallel_do_clause", "target_parallel_for_simd_directive",
  "$@89", "target_parallel_for_simd_clause_optseq",
  "target_parallel_for_simd_clause_seq", "target_parallel_for_simd_clause",
  "target_parallel_do_simd_directive", "$@90",
  "target_parallel_do_simd_clause_optseq",
  "target_parallel_do_simd_clause_seq", "target_parallel_do_simd_clause",
  "target_parallel_loop_directive", "$@91",
  "target_parallel_loop_clause_optseq", "target_parallel_loop_clause_seq",
  "target_parallel_loop_clause", "target_simd_directive", "$@92",
  "target_simd_clause_optseq", "target_simd_clause_seq",
  "target_simd_clause", "target_teams_directive", "$@93",
  "target_teams_clause_optseq", "target_teams_clause_seq",
  "target_teams_clause", "target_teams_distribute_directive", "$@94",
  "target_teams_distribute_clause_optseq",
  "target_teams_distribute_clause_seq", "target_teams_distribute_clause",
  "target_teams_distribute_simd_directive", "$@95",
  "target_teams_distribute_simd_clause_optseq",
  "target_teams_distribute_simd_clause_seq",
  "target_teams_distribute_simd_clause", "target_teams_loop_directive",
  "$@96", "target_teams_loop_clause_optseq",
  "target_teams_loop_clause_seq", "target_teams_loop_clause",
  "target_teams_distribute_parallel_for_directive", "$@97",
  "target_teams_distribute_parallel_for_clause_optseq",
  "target_teams_distribute_parallel_for_clause_seq",
  "target_teams_distribute_parallel_for_clause",
  "target_teams_distribute_parallel_do_directive", "$@98",
  "target_teams_distribute_parallel_do_clause_optseq",
  "target_teams_distribute_parallel_do_clause_seq",
  "target_teams_distribute_parallel_do_clause",
  "target_teams_distribute_parallel_for_simd_directive", "$@99",
  "target_teams_distribute_parallel_for_simd_clause_optseq",
  "target_teams_distribute_parallel_for_simd_clause_seq",
  "target_teams_distribute_parallel_for_simd_clause",
  "target_teams_distribute_parallel_do_simd_directive", "$@100",
  "target_teams_distribute_parallel_do_simd_clause_optseq",
  "target_teams_distribute_parallel_do_simd_clause_seq",
  "target_teams_distribute_parallel_do_simd_clause", "for_directive",
  "$@101", "do_directive", "$@102", "do_paired_directive", "$@103",
  "simd_directive", "$@104", "for_simd_directive", "$@105",
  "do_simd_directive", "$@106", "do_simd_paired_directive", "$@107",
  "parallel_for_simd_directive", "parallel_do_simd_directive", "$@108",
  "declare_simd_directive", "$@109", "declare_simd_fortran_directive",
  "$@110", "proc_name", "distribute_directive", "$@111",
  "distribute_simd_directive", "$@112",
  "distribute_parallel_for_directive", "$@113",
  "distribute_parallel_do_directive", "$@114",
  "distribute_parallel_for_simd_directive", "$@115",
  "distribute_parallel_do_simd_directive", "$@116",
  "parallel_for_directive", "$@117", "parallel_do_directive", "$@118",
  "parallel_loop_directive", "$@119", "parallel_sections_directive",
  "$@120", "parallel_workshare_directive", "$@121",
  "parallel_master_directive", "$@122", "master_taskloop_directive",
  "$@123", "master_taskloop_simd_directive", "$@124",
  "parallel_master_taskloop_directive", "$@125",
  "parallel_master_taskloop_simd_directive", "$@126", "loop_directive",
  "$@127", "scan_directive", "$@128", "sections_directive", "$@129",
  "sections_paired_directive", "$@130", "section_directive",
  "single_directive", "$@131", "single_paired_directive", "$@132",
  "workshare_directive", "workshare_paired_directive", "$@133",
  "cancel_directive", "$@134", "cancellation_point_directive", "$@135",
  "teams_directive", "$@136", "allocate_directive", "$@137",
  "allocate_list", "directive_variable", "directive_varlist",
  "threadprivate_directive", "$@138", "threadprivate_variable",
  "threadprivate_list", "declare_reduction_directive", "$@139",
  "reduction_list", "reduction_identifiers", "typername_variable",
  "typername_list", "combiner", "declare_mapper_directive", "$@140",
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
  "parallel_clause", "cluster_clause", "$@141", "$@142", "$@143", "$@144",
  "$@145", "cluster_data_clause", "cluster_update_clause",
  "cluster_teams_clause", "cluster_distribute_clause", "$@146", "$@147",
  "cluster_teams_distribute_clause", "$@148", "$@149", "task_async_clause",
  "$@150", "dependance_type", "teams_clause", "for_clause", "do_clause",
  "simd_clause", "for_simd_clause", "do_simd_clause",
  "parallel_for_simd_clause", "declare_simd_clause", "distribute_clause",
  "distribute_simd_clause", "distribute_parallel_for_clause",
  "distribute_parallel_do_clause", "distribute_parallel_for_simd_clause",
  "distribute_parallel_do_simd_clause", "parallel_for_clause",
  "parallel_do_clause", "parallel_loop_clause", "parallel_sections_clause",
  "parallel_workshare_clause", "parallel_master_clause",
  "master_taskloop_clause", "master_taskloop_simd_clause",
  "parallel_master_taskloop_clause",
  "parallel_master_taskloop_simd_clause", "loop_clause", "scan_clause",
  "sections_clause", "single_clause", "single_paired_clause",
  "construct_type_clause", "if_parallel_clause", "if_parallel_parameter",
  "$@151", "if_task_clause", "if_task_parameter", "$@152",
  "if_taskloop_clause", "if_taskloop_parameter", "$@153",
  "if_target_data_clause", "if_target_data_parameter", "$@154",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@155",
  "$@156", "if_target_simd_clause", "if_target_simd_parameter", "$@157",
  "$@158", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@159", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@160", "if_target_clause", "if_target_parameter", "$@161",
  "if_target_update_clause", "if_target_update_parameter", "$@162",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@163",
  "$@164", "if_simd_clause", "if_simd_parameter", "$@165",
  "if_parallel_simd_clause", "if_parallel_simd_parameter", "$@166",
  "$@167", "if_target_parallel_simd_clause",
  "if_target_parallel_simd_parameter", "$@168", "$@169", "$@170",
  "if_cancel_clause", "if_cancel_parameter", "$@171",
  "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter", "$@172",
  "$@173", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@174", "$@175", "$@176",
  "num_threads_clause", "$@177", "num_teams_clause", "$@178",
  "align_clause", "$@179", "thread_limit_clause", "$@180", "copyin_clause",
  "$@181", "default_clause", "default_parameter", "default_variant_clause",
  "default_variant_directive", "proc_bind_clause", "proc_bind_parameter",
  "bind_clause", "bind_parameter", "allocate_clause", "allocate_parameter",
  "$@182", "$@183", "allocator_parameter", "private_clause", "$@184",
  "alloc_clause", "broad_clause", "$@185", "scatter_clause", "$@186",
  "halo_clause", "$@187", "gather_clause", "$@188", "allgather_clause",
  "$@189", "allreduction_clause", "$@190", "firstprivate_clause", "$@191",
  "copyprivate_clause", "$@192", "fortran_copyprivate_clause", "$@193",
  "lastprivate_clause", "lastprivate_parameter", "$@194", "$@195",
  "lastprivate_distribute_clause", "$@196", "lastprivate_modifier",
  "linear_clause", "$@197", "linear_parameter", "$@198", "linear_modifier",
  "aligned_clause", "$@199", "aligned_parameter", "$@200",
  "initializer_clause", "initializer_expr", "expr", "safelen_clause",
  "$@201", "simdlen_clause", "$@202", "nontemporal_clause", "$@203",
  "collapse_clause", "$@204", "ordered_clause", "$@205",
  "fortran_nowait_clause", "nowait_clause", "order_clause",
  "order_parameter", "uniform_clause", "$@206", "inbranch_clause",
  "notinbranch_clause", "inclusive_clause", "$@207", "exclusive_clause",
  "$@208", "allocator_clause", "allocator1_parameter",
  "dist_schedule_clause", "dist_schedule_parameter", "$@209",
  "schedule_clause", "$@210", "schedule_parameter", "schedule_kind",
  "schedule_modifier", "schedule_modifier2", "schedule_enum_modifier",
  "schedule_enum_kind", "shared_clause", "$@211", "reduction_clause",
  "$@212", "reduction_clause_cluster", "$@213",
  "allreduction_clause_cluster", "$@214", "allreduction_parameter_cluster",
  "reduction_parameter_cluster", "allreduction_identifier_cluster",
  "reduction_identifier_cluster", "reduction_parameter",
  "reduction_identifier", "reduction_modifier",
  "reduction_enum_identifier", "reduction_default_only_clause", "$@215",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2781)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2448)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    5648,   448,   221,   225,   979,   441, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,   226, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   148,   530,   326, -2781,   281, -2781, -2781,   770, -2781,
   -2781, -2781, -2781, -2781,   341,   149, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   316,   354, -2781, -2781, -2781,   295,  4101, -2781,  3345,
   -2781,  3164, -2781, -2781, -2781,   223, -2781,   572, -2781,  1074,
    1724,   517,  1844,  1026,  1668,   146, -2781,   260,   425,   296,
    3213,  3332,   153,   520,   509, -2781,  1148,   576,  5311,   480,
   -2781,  3823,  1575,   442, -2781,   767, -2781,   579,   601, -2781,
    2690,   644,   154,   951,   563, -2781,   597,   816,   707, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  7257,  5865, -2781,  5143,  4235,  3707,  4101,   802,  4101,
     609, -2781,   627, -2781, -2781, -2781, -2781, -2781,   635,   642,
   -2781,  1516, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  4739,   669,   676, -2781, -2781, -2781,   685,
     705, -2781,  1394, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  3124, -2781,   490, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   757,
     759,   771,  1771,   776,   630,   837,   926,  3762, -2781,   778,
   -2781,   136, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
     780, -2781,   184, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   210,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   255,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,   129,   791, -2781,   173, -2781, -2781, -2781,
    1668,   798,   795, -2781, -2781,   152, -2781, -2781, -2781,   821,
     501,   815, -2781, -2781,   817, -2781, -2781,   825, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
     823, -2781, -2781, -2781,   826, -2781, -2781,   842, -2781, -2781,
    2866, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   178,    65, -2781, -2781, -2781, -2781, -2781,  4289,   844,
   -2781,  3066,  1867, -2781, -2781, -2781,   889, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,   835,   962,   532,
   -2781, -2781, -2781,   932,   738, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,   864, -2781,  4501,
     867, -2781, -2781, -2781, -2781,  2457, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,   878, -2781,   899,
   -2781,   643, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1037,
    1107, -2781,  3530,  4002,   542, -2781,  4328,   768, -2781, -2781,
    1187,   905,   907, -2781, -2781, -2781, -2781, -2781, -2781,  2367,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,    85, -2781, -2781, -2781,
   -2781, -2781,   930, -2781, -2781,   919, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1204,   192,   307, -2781, -2781, -2781, -2781,
   -2781,   939, -2781, -2781,   950, -2781,   284, -2781, -2781,   254,
    1039,   953, -2781,   693, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  1823, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  7257, -2781,  2268, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  2162, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,   470, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,   564, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    5987, -2781,  1245, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,   156,   959,   925,   967,   977,   983,
     985,   990,  1045,  1371,  4101, -2781, -2781,  2719, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,   208,   209,   998,  1005,   964,
    1010,  3345, -2781, -2781,   190, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  3164, -2781,   963,  1163,   115,  1423, -2781, -2781, -2781,
   -2781,   505, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   987,
    1014, -2781,  1016,  1034, -2781,   831, -2781, -2781, -2781, -2781,
   -2781,  6044, -2781,  6528, -2781,  2398, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  1044,  1250,  1074, -2781,  1050,   342,  1724, -2781,  1052,
    1062,  1844, -2781,  1064,  1026, -2781,  1066,  1296, -2781,  1518,
     146, -2781, -2781, -2781, -2781, -2781, -2781,   213, -2781,  1093,
     425, -2781, -2781, -2781,   241, -2781,  1095, -2781,   294, -2781,
   -2781, -2781,   141,  1112,  1121,  1123,  1137,  3213, -2781,   133,
    1146,  2403,  1169,  1174,    52,  1178,  3332, -2781,  1182,   164,
   -2781,  1234, -2781,  4501, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1975, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  1357,  1369,  5332, -2781,  1528, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  1766, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  1200,  1223,  1148, -2781,
   -2781,  1399,  1438,  1399,   257,  1399,   548,   721,   958, -2781,
    1225,  1228, -2781,  5177, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   285,  1230,
    1235,  3823, -2781,  1188, -2781,  1575, -2781, -2781,  6734, -2781,
    6734,  6851,  1240, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  4206, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  1241, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  4964, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   978,
   -2781,  7509,  7049, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  3231, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1243, -2781, -2781, -2781,   265, -2781, -2781,
   -2781, -2781, -2781, -2781,   749,   788,  1244,  1263,  1265, -2781,
     317, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
      47,   315,  1268,  1269,  1272,  1275,  1276,  2690, -2781,   644,
   -2781, -2781,   493, -2781,   930,  1279, -2781, -2781, -2781, -2781,
   -2781,  1191, -2781, -2781, -2781, -2781,  1295, -2781,  1404, -2781,
   -2781,  1233, -2781,  1226, -2781, -2781,  4328,   722,   722,  1284,
   -2781, -2781, -2781,   813, -2781,  1311,  1312,  1324,  1507,  1336,
   -2781, -2781, -2781, -2781, -2781,   100, -2781,   168,  7257, -2781,
    5865, -2781, -2781,  5143, -2781,  4235, -2781,  3707, -2781,  4101,
   -2781,  7875,  1377, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  1352, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  4101, -2781,  1380, -2781,
    1368,  1386, -2781, -2781, -2781, -2781,  1383,  1402,  1402,  1402,
    1402,  1903, -2781, -2781, -2781,  1387, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  1033,  1396,  1384, -2781,  4739, -2781,
   -2781,  1400,  1410,  1415, -2781, -2781, -2781,  1405,    45,  1419,
    2333,  1386, -2781,  1430,  1386, -2781,  3124, -2781, -2781, -2781,
   -2781, -2781,   144, -2781, -2781, -2781,  1431,  1432, -2781,  1421,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1436,
    1439,  1440,  1771, -2781, -2781,  1453,    46,  1458,  1382, -2781,
   -2781,   545,   365, -2781,  7445, -2781,  1556, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  8222, -2781,  2240, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  3762, -2781,  1402,
    1462,  1471, -2781,  3430, -2781, -2781, -2781,  1476, -2781,  1402,
    1402, -2781,  1402, -2781,   171, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1488, -2781, -2781,
     798, -2781,  1490,  1495, -2781,   821, -2781,  1489,  1865,   501,
   -2781,  1493, -2781,  1498,  1402,  1402,  1502,   512,  1402, -2781,
    1504, -2781,  1503,  1386, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  1510, -2781,  1548,  1386, -2781,
    1520,  1526,  1529,  1386, -2781,   800, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  2652, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  4289, -2781, -2781,  2809, -2781,  2809,
   -2781,  3953, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  3066, -2781,  1867, -2781,  1386,  1386, -2781,  1399, -2781,
   -2781, -2781, -2781, -2781, -2781,   123, -2781, -2781, -2781, -2781,
   -2781,  1774,   803,    54,   194,  4501, -2781,  1533, -2781,  1535,
    1386,  1386, -2781, -2781, -2781, -2781,  1537, -2781,  6462, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  4307, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  6462, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  4555, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  5240, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   165,  3530, -2781,   174,  4002, -2781,  1750,  1755,  7326,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  5006, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  5266, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  4328, -2781,   189,
    1541,  1550,   768, -2781,  1551, -2781,   245, -2781, -2781, -2781,
   -2781, -2781, -2781,  1553, -2781,   314, -2781, -2781, -2781, -2781,
   -2781, -2781,   248,  1564,    66,  1187, -2781,  1559, -2781,  1561,
   -2781, -2781,  1557,  1563,  1566,  1402,  1402,  2046,  2141,  2705,
   -2781, -2781,   930, -2781,   595,  1386,   951, -2781,   218,  1370,
   -2781,   621, -2781,   876,   243, -2781,  1159, -2781,  1507,  1336,
   -2781, -2781, -2781, -2781, -2781, -2781,  5748, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  5420, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  1417, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1726, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1402,  1571,  1576,  1141, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  1581,  1039, -2781,  1567,  1587,
   -2781,  1574, -2781, -2781, -2781, -2781, -2781, -2781,  1592, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1687, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   162,  5987,
   -2781, -2781, -2781, -2781, -2781,  1586, -2781, -2781, -2781,   639,
     649,   656,   673, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1595, -2781,  1597,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    1624, -2781,  1402, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  1609, -2781,  1612,  1626,  1628,  1631, -2781,  1633, -2781,
    1634,  1637,  1163, -2781,  1695,  1656,  1820,  1665,  1402, -2781,
    1771, -2781,  1653,  1651,  1657,  1402, -2781, -2781, -2781,  1658,
    1034, -2781, -2781, -2781,   947, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  6044, -2781,
   -2781,   278, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  6528, -2781, -2781,   677,  1663, -2781,
   -2781, -2781,  1664,  1667, -2781,   710,   746,   763,  1669, -2781,
    1661,  1402, -2781, -2781, -2781, -2781, -2781, -2781,  1304, -2781,
   -2781, -2781,  1386, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  1666, -2781, -2781, -2781,   801,   812, -2781,  1685,
   -2781,   833, -2781, -2781,  1671,  1402, -2781, -2781, -2781, -2781,
   -2781, -2781,  1678, -2781,  1672, -2781,  1681,  1684, -2781, -2781,
    1402,  1686, -2781, -2781,  1689, -2781,  4501, -2781, -2781,  7917,
   -2781,  3563, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  7917, -2781,  5469, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  5332, -2781, -2781,
   -2781,  1690,  1691, -2781, -2781,  1688,   257, -2781,  1928, -2781,
    1696, -2781, -2781, -2781, -2781, -2781,  1707,  1708, -2781,  1694,
   -2781, -2781, -2781,  1717,  1718, -2781,  1722, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  3015, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  6734, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  3260, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  6734, -2781,  6851, -2781,  1736,  1738, -2781,  1737, -2781,
    1740,  1744, -2781,  1747, -2781, -2781,  6501, -2781,  6501, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  4078, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  7509, -2781,
    7049, -2781, -2781,  1806, -2781,  1754,  1402,  1402, -2781,   250,
     749, -2781,   253,   788, -2781,  1789, -2781,  1756,  1761,  1759,
   -2781,  1764,  1762,  1769, -2781, -2781, -2781, -2781, -2781,  1402,
     855,   887, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1768,
    1790, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    1791,  1767,  1770,  1793, -2781, -2781,  1794, -2781, -2781, -2781,
   -2781, -2781, -2781,  1797,  1796,  1802,  2154, -2781, -2781, -2781,
   -2781,  1803, -2781,  1839, -2781,  1076, -2781,  1204, -2781,  1204,
   -2781,  1839, -2781,   754, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  4582, -2781,  1507,  1336, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  4328, -2781,  1807,  1809,  1810,  1812,   722, -2781,   722,
   -2781, -2781,   892,  1402,  1402, -2781,  1813,  1815,   732, -2781,
   -2781, -2781, -2781,   151,  7875, -2781,  1817,  1819, -2781,  1805,
   -2781,  1386, -2781,  1402, -2781, -2781, -2781, -2781,  1402,  2872,
    1402,  1402,  1402,  1402,  1402, -2781,   901, -2781,  1985,   782,
    1835, -2781, -2781, -2781,  1495, -2781, -2781, -2781,     9, -2781,
   -2781, -2781,  1824, -2781, -2781, -2781, -2781, -2781,  1090,   903,
   -2781,  1825, -2781, -2781,  1402,   937, -2781, -2781,  7445, -2781,
   -2781,  8222, -2781, -2781, -2781,  1843,  1402,  2872, -2781, -2781,
   -2781, -2781, -2781,   943,  1495, -2781, -2781,  1834,  1827, -2781,
    1386, -2781, -2781,  1402, -2781, -2781,  1386, -2781,   971,  1831,
    1402,  1427, -2781,  1848,  1402,  1836, -2781,  1837, -2781, -2781,
   -2781,  4817, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  2809, -2781, -2781,
    4867, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  2809, -2781, -2781, -2781,
   -2781,  1402, -2781,  1841,  1554, -2781, -2781, -2781,  1386, -2781,
   -2781,   157,  6462, -2781, -2781,  6462, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  6225, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  3735, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  6225, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  4051, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  7326, -2781, -2781,
   -2781,  1846, -2781,   994,   999,  1925, -2781,  1847, -2781,  1931,
   -2781,  1850, -2781,  1853, -2781, -2781, -2781,  1854, -2781, -2781,
    1402,  1386,  1402,  1836, -2781, -2781, -2781,  1441, -2781,  2141,
    1863,  1869,  1873, -2781, -2781,  1402, -2781, -2781,  3721, -2781,
    2378, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    5957, -2781, -2781, -2781, -2781,  1402,  1402,  1402,  1903, -2781,
   -2781,  1402, -2781,  1056,  1860,  1866,  2728,  2778, -2781, -2781,
    1870,  1386,  1386,  1874,  1876,  1880, -2781,  1871, -2781, -2781,
   -2781, -2781, -2781, -2781,  1070, -2781,  1836,  1836,  1836,  1836,
    1836,  1879, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   651,
    1695, -2781,  2042,  1665,  1884, -2781,  1898,  1402,  1836, -2781,
   -2781, -2781, -2781,  1079, -2781,  1386, -2781, -2781,  2313,  1881,
   -2781, -2781,  1836,  1887, -2781, -2781,  1901,  1080, -2781,  1906,
    1084, -2781,  1836,  1402,  7917, -2781, -2781,  7917, -2781, -2781,
    1108,  1832, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1891,
    1386,  1386, -2781,  1896,  1900,  1905, -2781,  1899, -2781, -2781,
    1386,  1386,  1386,  1386, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  2890, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  6501, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  3509, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  6501, -2781, -2781, -2781, -2781, -2781,
    1993, -2781,  1994, -2781, -2781,  1402,  1918,  1402,  1836, -2781,
    1836, -2781, -2781, -2781, -2781, -2781, -2781,  1911,  1912,  1915,
    1402,  1836, -2781, -2781, -2781, -2781,  3806, -2781,  1457, -2781,
   -2781, -2781, -2781,  1919,  1921,  1922,  1920, -2781, -2781,  1947,
   -2781, -2781,  1927, -2781,  1929, -2781, -2781,  1933, -2781,  1930,
   -2781,  1402, -2781, -2781, -2781, -2781, -2781, -2781,  1386,  1386,
   -2781, -2781, -2781, -2781,  1941,  1934, -2781, -2781, -2781,  1946,
    1836, -2781, -2781, -2781,   404,   860, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   256,
   -2781,  1950,  1144, -2781, -2781, -2781,  1960,  1848, -2781,  1836,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1951,  1952, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    6225, -2781, -2781,  6225, -2781, -2781,  1386,  1955,  1959,  1386,
    1836,  1978,  1836, -2781, -2781, -2781,  1836, -2781, -2781,  2014,
   -2781,  1206, -2781, -2781, -2781,  1402,  1980,  1402,  2977,  1402,
    2977,  1153,  1386,  1386,  1386, -2781, -2781,  1976, -2781, -2781,
   -2781,  2228,  1995,  1997,  1998,  2000,  2001,  2003,  2004,  2005,
    2007,   155, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  2006,  1901, -2781,  2019,  2025, -2781, -2781,  1386,
    1386,  1386,  1386, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  2033, -2781, -2781,  1195,  1402, -2781,  1201, -2781,
   -2781,  1208, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  2151,  2151,  2151,  2151,  2151,  2151,  2151,   256,  2021,
   -2781,  2036,  2043, -2781,  2025, -2781, -2781, -2781, -2781, -2781,
   -2781,  1386,  1386,  1402,  2041, -2781,  2051,  1402, -2781,  1402,
   -2781,  2151,  2056,  2076,  3452,  2171,  2079,  2080,  2081,  2065,
   -2781, -2781,  2043, -2781, -2781, -2781,  2068, -2781, -2781, -2781,
    1402, -2781, -2781, -2781,  2069,  4101,  2097, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    2083, -2781, -2781, -2781, -2781, -2781, -2781,  2086, -2781, -2781,
   -2781, -2781, -2781,  2089,  2105,  2090, -2781, -2781, -2781,  2092,
   -2781, -2781,  2106, -2781, -2781,  2093, -2781, -2781,  2096,  2100,
    2111,  2112,  2131, -2781, -2781, -2781,  2133, -2781, -2781, -2781
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     106,   273,  1436,  1438,     0,  1459,  1491,  1493,  1495,  1499,
    1500,  1507,   320,     0,  1519,   191,  1513,  1442,   292,   326,
    1504,   316,  1511,   188,   324,   294,   298,   299,   307,   317,
     318,   313,   379,   322,     0,     0,    75,    22,    23,    21,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    79,    70,    71,    76,    77,    78,    81,    82,    83,
      80,    84,    85,    86,   100,    87,   101,    88,    89,    90,
     102,    91,   103,    92,    93,    94,    95,    96,    97,    98,
     104,    99,   105,    24,    25,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    27,    58,    72,    73,
      74,  1471,  1473,  1475,  1477,  1479,  1481,  1547,  1444,  1563,
    1446,  1565,   261,  1539,  1524,  1453,   311,     0,  1461,  1581,
    1613,     0,  1616,  1620,  1626,   425,  1509,     0,   193,     0,
    1569,   347,   772,  1483,   786,   945,  1561,     0,     0,     0,
     296,   349,     0,   964,  1152,  1180,   301,     0,     0,   309,
     359,   423,   368,   391,   328,     1,     0,     0,   275,   290,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,  1577,  1593,  1451,  1595,  1597,  1599,  1601,  1487,  1603,
       0,  2323,     0,  2363,  2378,  2468,  2331,  2470,     0,     0,
     274,  1548,  1642,  1759,  1760,  1765,  1761,  1767,  1768,  1762,
    1763,  1764,  1766,  1571,     0,     0,  2449,  2418,  2424,     0,
    2422,  1437,  1564,  1669,  1869,  1860,  1861,  1862,  1863,  1866,
    1867,  1868,  1870,  1865,  1864,  1573,  1439,  1566,  1672,  1879,
    1871,  1872,  1873,  1874,  1877,  1878,  1880,  1876,  1875,     0,
       0,     0,  1579,     0,   362,  1463,  1465,  1583,  2390,     0,
    1460,  1582,  1690,  1954,  1949,  1950,  1951,  1952,  1953,  2501,
       0,  1492,  1614,  1738,  2211,  2214,  2215,  2212,  2213,  2216,
    2431,  2433,  1494,  1615,  1741,  2217,  2218,  2423,  1496,  1617,
    1742,  2223,  2219,  2220,  2221,  2224,  2222,  2382,  1501,  1621,
    1745,  2228,  2225,  2226,  2227,  2229,  2232,  2234,  2235,  2233,
    2236,  1508,  1627,  1751,     0,   321,   426,   460,   564,   565,
    1628,     0,     0,   200,   192,   194,   195,   198,   199,     0,
    1630,     0,  2412,  2414,     0,  2416,  1443,  1570,  1675,  1881,
    1887,  1888,  1884,  1885,  1882,  1883,  1886,  1890,  1891,  1889,
       0,   566,   568,   569,     0,   583,   619,     0,   639,   293,
     348,   427,   464,   465,   467,   471,   472,   473,   475,   476,
     463,   466,   474,   468,   469,   470,   785,   613,   784,   781,
     327,   773,   774,   778,   775,   782,   783,  1485,  1605,     0,
     804,   788,   947,  2325,  2329,  1512,  1562,  1666,  1852,  1853,
    1854,  1859,  1855,  1856,  1857,  1858,   315,   273,  1440,  1459,
    1497,  1502,  1505,  1511,   307,   190,   189,   140,   138,   163,
     164,   165,   167,   166,   141,   169,   168,   171,   170,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   139,   145,   146,   154,   147,
     148,   149,   150,   151,   152,   153,   155,   156,   157,   158,
     159,   160,   144,   143,   161,   162,   142,     0,   325,   351,
       0,   641,   643,   645,   295,   350,   430,   488,   490,   491,
     483,   489,   485,   486,   492,   477,   484,   493,   479,   480,
     481,   487,   478,   482,   646,   647,   648,     0,   653,     0,
     300,   353,   436,   517,   518,   519,   520,   521,   522,   989,
    1021,  1123,   966,  1154,  1204,  1264,  1182,     0,   303,   305,
       0,     0,     0,   670,   672,   674,   689,   726,   308,   360,
     448,   543,   550,   539,   545,   546,   547,   551,   544,   538,
     540,   549,   541,   542,   548,   319,   424,   457,   563,   419,
     420,   421,     0,   314,   370,   374,   376,   377,   378,   418,
     422,   412,   380,   381,   394,   395,   407,   408,   409,   410,
     411,     0,   323,   277,     0,   285,   283,   279,   281,  1549,
    1559,     0,  1450,  1578,  1684,  1923,  1924,  1929,  1925,  1931,
    1932,  1926,  1927,  1933,  1934,  1941,  1939,  1940,  1942,  1936,
    1937,  1938,  1935,  1928,  1930,  1472,  1594,  1708,  2047,  2048,
    2053,  2049,  2055,  2056,  2050,  2051,  2057,  2058,  2060,  2061,
    2062,  2063,  2059,  2052,  2054,  1577,  1474,  1596,  1711,  2064,
    2065,  2070,  2066,  2072,  2073,  2067,  2068,  2074,  2075,  2077,
    2078,  2079,  2076,  2069,  2071,  1476,  1598,  1714,  2080,  2081,
    2086,  2082,  2088,  2092,  2089,  2083,  2084,  2090,  2091,  2093,
    2085,  2087,  1478,  1600,  1717,  2094,  2095,  2100,  2096,  2102,
    2103,  2097,  2098,  2104,  2099,  2101,  1480,  1602,  1720,  2105,
    2106,  2111,  2107,  2113,  2114,  2108,  2109,  2110,  2112,  1489,
    1609,  1482,  1604,  1723,  2115,  2116,  2121,  2117,  2123,  2124,
    2118,  2119,  2120,  2122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1643,  1445,  1572,  1678,  1892,
    1905,  1897,  1898,  1899,  1895,  1896,  1893,  1894,  1907,  1902,
    1903,  1904,  1906,  1901,  1900,     0,     0,     0,     0,     0,
       0,     0,  1670,  1447,  1574,  1681,  1908,  1920,  1913,  1914,
    1915,  1911,  1912,  1909,  1910,  1922,  1918,  1919,  1921,  1917,
    1916,     0,  1673,     0,   265,     0,     0,  2427,  2429,  2430,
    1454,  1580,  1687,  1944,  1945,  1943,  1946,  1947,  1948,  1457,
       0,   720,     0,     0,   312,   364,   454,   560,   561,   562,
    1467,  1585,  1469,  1587,  1462,  1584,  1693,  1961,  1960,  1955,
    1956,  1957,  1964,  1965,  1962,  1963,  1966,  1958,  1968,  1959,
    1967,     0,     0,     0,  1691,     0,     0,     0,  1739,     0,
       0,     0,  1743,     0,     0,  1746,     0,     0,  1752,     0,
       0,   461,  1510,  1629,  1754,  1521,  1522,     0,  2339,     0,
       0,   196,  1516,  1517,     0,  2327,     0,  1514,  1631,  1632,
    1756,  1755,     0,     0,     0,     0,     0,     0,  1676,     0,
       0,     0,     0,     0,     0,     0,     0,   428,     0,     0,
     776,     0,   779,  1607,  2136,  2138,  2139,  2131,  2137,  2133,
    2134,  2140,  1484,  1606,  1726,  2125,  2132,  2141,  2127,  2128,
    2129,  2135,  2126,  2130,   829,   856,   806,   787,   789,   790,
     793,   794,   795,   800,   796,   797,   801,   802,   803,   798,
     799,   946,   948,   949,   952,   953,   954,   960,   959,   955,
     956,   963,   961,   962,   957,   958,     0,     0,     0,  1667,
    1448,  1567,     0,  1618,  1622,  1624,   786,   964,  1180,   333,
       0,     0,   297,   352,   433,   505,   507,   508,   500,   506,
     502,   503,   509,   494,   501,   510,   496,   497,   498,   513,
     514,   511,   512,   515,   504,   516,   495,   499,     0,     0,
       0,     0,   431,     0,   654,     0,   437,  1053,   991,  1088,
    1023,  1125,     0,   975,   981,   972,   977,   978,   982,   976,
     965,   967,   968,   971,   983,   986,   984,   988,   980,   973,
     974,   979,   985,   987,     0,  1163,  1169,  1160,  1165,  1166,
    1170,  1164,  1153,  1155,  1156,  1159,  1168,  1161,  1162,  1176,
    1173,  1174,  1171,  1172,  1175,  1178,  1167,  1179,  1177,     0,
    1231,  1206,  1266,  1191,  1197,  1188,  1193,  1194,  1198,  1192,
    1181,  1183,  1184,  1187,  1199,  1200,  1201,  1196,  1189,  1190,
    1195,  1202,  1203,     0,   666,   668,   302,   354,   439,   524,
     526,   527,   525,   523,   355,   357,     0,     0,     0,   310,
     361,   451,   552,   553,   558,   557,   554,   555,   556,   559,
       0,     0,     0,     0,     0,     0,     0,     0,   449,     0,
     458,   373,     0,   371,     0,     0,   416,   414,   415,   417,
     382,   396,   403,   404,   405,   406,     0,   392,     0,   393,
     346,     0,   278,  1555,   287,   289,  1553,     0,     0,     0,
    2366,  2370,   276,  1550,  1645,     0,     0,     0,     0,     0,
    1769,  1770,  1777,  1848,   291,  1560,  1663,     0,     0,  1685,
       0,  1709,  1452,     0,  1712,     0,  1715,     0,  1718,     0,
    1721,  1611,     0,  2180,  2182,  2183,  2181,  2177,  2178,  2184,
    1488,  1610,  1732,  2165,  2166,  2171,  2167,  2173,  2174,  2168,
    2169,  2175,  2179,  2176,  2170,  2172,     0,  1724,     0,  2240,
       0,     0,  2337,  2336,  2334,  2335,     0,     0,     0,     0,
       0,     0,  2341,  2342,  2343,     0,  2354,  2355,  2356,  2357,
    2358,  2359,  2360,  2361,  2349,     0,     0,  1644,     0,  1679,
    2392,  2385,     0,     0,  2400,  2401,  2402,  2396,     0,     0,
       0,     0,  2426,     0,     0,  1671,     0,  1682,  1674,   263,
     271,   262,   266,   267,   270,  1544,  1545,     0,  1541,     0,
    1542,  1533,  1534,  1527,  1528,  1529,  1530,  1531,  1532,     0,
       0,     0,     0,  1688,  1458,     0,     0,     0,     0,   365,
     366,     0,     0,   455,  1589,  1464,  1586,  1696,  1969,  1970,
    1975,  1971,  1977,  1978,  1972,  1973,  1979,  1980,  1982,  1983,
    1984,  1985,  1986,  1981,  1974,  1976,  1591,  1466,  1588,  1699,
    1987,  1988,  1993,  1989,  1995,  1996,  1990,  1991,  1997,  1998,
    2000,  2001,  2002,  2003,  1999,  1992,  1994,     0,  1694,     0,
    2446,     0,  1692,     0,  2346,  2347,  2345,     0,  1740,     0,
       0,  1744,     0,  1747,     0,  1753,   768,   769,   770,   771,
     761,   762,   763,   764,   765,   766,   767,     0,   760,   462,
       0,  1520,     0,     0,   197,     0,  1515,     0,     0,     0,
    1633,     0,  2290,     0,     0,     0,  2406,     0,     0,  1677,
       0,  2244,     0,     0,   579,   580,   581,   582,   572,   573,
     574,   575,   576,   577,   578,     0,   571,     0,     0,   626,
     622,     0,     0,     0,   429,     0,   777,   780,  2153,  2155,
    2156,  2148,  2154,  2150,  2151,  2157,  1486,  1608,  1729,  2142,
    2149,  2158,  2144,  2145,  2146,  2161,  2162,  2159,  2160,  2163,
    2152,  2164,  2143,  2147,     0,  1727,   883,   831,   914,   858,
     805,   807,   808,   822,   811,   812,   813,   818,   814,   815,
     819,   825,   826,   823,   824,   827,   820,   828,   821,   816,
     817,     0,   791,     0,   950,     0,     0,  1668,  1575,  1441,
    1568,  1498,  1619,  2380,  1503,  1623,  1748,  2230,  2231,  1506,
    1625,     0,  1204,     0,     0,     0,   434,     0,  2248,     0,
       0,     0,   432,   650,   651,   652,     0,   438,  1055,  1000,
    1006,   997,  1002,  1003,  1007,  1001,   990,   992,   993,   996,
    1008,  1011,  1009,  1013,  1005,   998,   999,  1014,  1015,  1017,
    1018,  1004,  1019,  1020,  1016,  1010,  1012,  1090,  1032,  1038,
    1029,  1034,  1035,  1039,  1033,  1022,  1024,  1025,  1028,  1040,
    1043,  1041,  1045,  1037,  1030,  1031,  1046,  1047,  1049,  1050,
    1036,  1051,  1052,  1048,  1042,  1044,  1134,  1140,  1131,  1136,
    1137,  1141,  1135,  1124,  1126,  1127,  1130,  1142,  1145,  1143,
    1147,  1150,  1139,  1132,  1133,  1148,  1149,  1138,  1151,  1144,
    1146,     0,     0,   969,     0,     0,  1157,  1292,  1326,  1233,
    1215,  1221,  1212,  1217,  1218,  1222,  1216,  1205,  1207,  1208,
    1211,  1223,  1224,  1225,  1220,  1213,  1214,  1228,  1229,  1219,
    1230,  1226,  1227,  1275,  1281,  1272,  1277,  1278,  1282,  1276,
    1265,  1267,  1268,  1271,  1283,  1284,  1285,  1288,  1280,  1273,
    1274,  1291,  1289,  1279,  1290,  1286,  1287,     0,  1185,     0,
       0,     0,     0,   440,     0,   304,   356,   442,   531,   529,
     530,   528,   532,     0,   306,   358,   445,   536,   534,   535,
     533,   537,     0,     0,     0,     0,   452,     0,  2276,     0,
     660,   661,   656,     0,     0,     0,     0,     0,     0,     0,
     450,   459,     0,   369,     0,     0,   396,   389,   401,   402,
     385,     0,   388,     0,   329,   286,  1556,  1657,     0,     0,
    1820,  1815,  1816,  1817,  1818,  1819,  1557,  1802,  1808,  1799,
    1804,  1805,  1809,  1803,   284,  1554,  1654,  1798,  1810,  1811,
    1812,  1807,  1800,  1801,  1806,  1813,  1814,  2368,  2372,  2374,
    2376,   280,  1551,  1648,  1782,  1783,  1784,  1787,  1785,  1786,
    1789,  1788,   282,  1552,  1651,  1790,  1791,  1792,  1795,  1793,
    1794,  1797,  1796,     0,     0,     0,  1771,  1646,  1772,  1774,
    1776,  2472,  1779,  2474,  1781,     0,     0,  1664,     0,     0,
    2296,     0,  1686,  1710,  1713,  1716,  1719,  1722,     0,  2200,
    2202,  2203,  2201,  2197,  2198,  2204,  1490,  1612,  1735,  2185,
    2186,  2191,  2187,  2193,  2194,  2188,  2189,  2195,  2207,  2208,
    2205,  2206,  2209,  2199,  2196,  2210,  2190,  2192,     0,     0,
    1733,  1725,  2238,  2237,     2,     0,  2333,     3,     4,     0,
       0,     0,     0,  2488,  2489,  2490,  2497,  2498,  2499,  2500,
    2487,  2491,  2492,  2493,  2494,  2495,  2496,     0,  2484,     0,
    2486,  2340,  2350,  2348,  2352,  1680,  2386,  2384,  2388,  2397,
       0,  2393,     0,  2460,  2461,  2463,  2464,  2465,  2466,  2467,
    2462,     0,  2451,     0,  2456,  2453,     0,  2425,     0,  1683,
       0,     0,     0,   268,  1637,     0,  1635,     0,     0,  1689,
    1579,   711,   707,     0,     0,     0,   723,   724,   725,     0,
       0,   363,   456,  1468,  1590,  1702,  2004,  2005,  2010,  2006,
    2012,  2013,  2007,  2008,  2014,  2015,  2024,  2022,  2023,  2025,
    2017,  2018,  2019,  2020,  2021,  2016,  2009,  2011,     0,  1697,
    1470,  1592,  1705,  2026,  2027,  2032,  2028,  2034,  2035,  2029,
    2030,  2036,  2037,  2045,  2043,  2044,  2046,  2039,  2040,  2041,
    2042,  2038,  2031,  2033,     0,  1700,  1695,     0,     0,  2445,
    2505,  2503,     0,     0,  2344,     0,     0,     0,     0,  2308,
       0,     0,  1523,  2338,   212,   213,   214,   215,     0,   206,
     209,  1518,     0,  2436,  2437,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,     0,  1634,  2288,  2287,     0,     0,  2407,     0,
    2403,     0,  2242,  2241,     0,     0,   588,   605,   601,   603,
     604,   602,     0,   585,     0,   587,     0,     0,   623,   621,
       0,     0,   616,   617,     0,   615,     0,  1730,  1728,   885,
     830,   832,   833,   844,   845,   836,   837,   846,   838,   847,
     843,   839,   840,   848,   849,   851,   852,   853,   854,   855,
     850,   841,   842,   916,   857,   859,   860,   871,   872,   863,
     864,   873,   865,   874,   870,   866,   867,   875,   876,   878,
     879,   880,   881,   882,   877,   868,   869,     0,   809,   792,
     951,     0,     0,  1449,  1576,     0,     0,  1749,     0,   606,
       0,   337,   332,   335,   336,   334,     0,     0,  2286,     0,
     435,  2246,  2245,     0,     0,   649,     0,  1064,  1070,  1061,
    1066,  1067,  1071,  1065,  1054,  1056,  1057,  1060,  1072,  1075,
    1073,  1077,  1069,  1062,  1063,  1078,  1079,  1086,  1084,  1085,
    1087,  1081,  1082,  1068,  1083,  1080,  1074,  1076,     0,   994,
    1099,  1105,  1096,  1101,  1102,  1106,  1100,  1089,  1091,  1092,
    1095,  1107,  1110,  1108,  1112,  1104,  1097,  1098,  1113,  1114,
    1121,  1119,  1120,  1122,  1116,  1117,  1103,  1118,  1115,  1109,
    1111,     0,  1026,     0,  1128,     0,     0,  2258,     0,   970,
       0,     0,  2264,     0,  1158,  1360,  1294,  1398,  1328,  1242,
    1248,  1239,  1244,  1245,  1249,  1243,  1232,  1234,  1235,  1238,
    1250,  1251,  1252,  1247,  1240,  1241,  1255,  1260,  1261,  1258,
    1259,  1262,  1256,  1246,  1263,  1257,  1253,  1254,     0,  1209,
       0,  1269,  1186,     0,  2252,     0,     0,     0,   441,     0,
       0,   443,     0,     0,   446,     0,  2280,     0,   663,     0,
     718,   714,     0,     0,   453,  2274,  2273,   657,   655,     0,
       0,     0,   678,   679,   680,   681,   682,   683,   684,     0,
     676,   697,   698,   699,   700,   701,   702,   703,   704,   705,
       0,   691,   693,   695,   743,   744,     0,   752,   753,   754,
     755,   756,   757,   728,     0,     0,     0,   732,   745,   372,
     375,     0,   390,     0,   397,     0,   398,     0,   387,     0,
     386,     0,   330,  1821,  1658,  1822,  1824,  1829,  1835,  1826,
    1831,  1832,  1836,  1830,   288,  1558,  1660,     0,     0,  1825,
    1837,  1838,  1839,  1834,  1827,  1828,  1841,  1842,  1833,  1843,
    1840,     0,  1655,     0,     0,     0,     0,     0,  1649,     0,
    1652,     6,     0,     0,     0,  1647,     0,     0,     0,  1665,
    2294,  2292,  2291,     0,     0,  1736,     0,     0,  2314,     0,
    1734,     0,  2324,     0,  2364,  2379,  2469,  2332,     0,     0,
       0,     0,     0,     0,     0,  2394,     0,  2450,     0,     0,
       0,  2419,  2421,   264,     0,   269,  1758,  1540,  1638,  1639,
    1546,  1543,     0,  1525,  1636,  1757,  1535,  1536,     0,     0,
    1456,     0,   708,   706,     0,     0,   722,   367,     0,  1703,
    1698,     0,  1706,  1701,  2391,     0,     0,     0,  2432,  2434,
    2383,  2306,  2305,     0,     0,   201,   207,     0,     0,  2435,
       0,  2413,  2415,     0,  2404,  2417,     0,   567,     0,     0,
       0,     0,   620,     0,     0,   625,   640,     0,   614,  1731,
     884,   886,   887,   898,   899,   890,   891,   900,   892,   901,
     897,   893,   894,   902,   903,   912,   910,   911,   913,   905,
     906,   907,   908,   909,   904,   895,   896,     0,   834,   915,
     917,   918,   929,   930,   921,   922,   931,   923,   932,   928,
     924,   925,   933,   934,   943,   941,   942,   944,   936,   937,
     938,   939,   940,   935,   926,   927,     0,   861,   810,  2326,
    2330,     0,  1750,     0,     0,  2284,  2282,  2281,     0,   642,
     644,     0,     0,  1058,   995,     0,  1093,  1027,  1129,  2256,
    2254,  2253,  2262,  2260,  2259,  1362,  1303,  1309,  1300,  1305,
    1306,  1310,  1304,  1293,  1295,  1296,  1299,  1316,  1311,  1312,
    1317,  1313,  1318,  1308,  1301,  1302,  1319,  1320,  1322,  1323,
    1307,  1324,  1325,  1321,  1314,  1315,  1400,  1337,  1343,  1334,
    1339,  1340,  1344,  1338,  1327,  1329,  1330,  1333,  1350,  1345,
    1346,  1351,  1347,  1352,  1342,  1335,  1336,  1353,  1354,  1356,
    1357,  1341,  1358,  1359,  1355,  1348,  1349,     0,  1236,  1210,
    1270,     0,  2249,     0,     0,     0,  2268,     0,   444,     0,
    2272,     0,   447,     0,  2277,   664,   662,     0,   715,   713,
       0,     0,     0,   659,   671,   673,   675,     0,   690,     0,
       0,     0,     0,   729,   727,     0,   746,   747,     0,   736,
       0,   733,   748,   413,   399,   400,   384,   383,   331,  1659,
    1844,  1661,  1845,  1847,  1656,     0,     0,     0,     0,  1650,
    1653,     0,  2365,     0,     0,     0,     0,     0,  1850,  1851,
       0,     0,     0,     0,     0,     0,  2322,     0,  1737,  2310,
    2312,  2309,  2239,     5,     0,  2485,  2351,  2353,  2387,  2389,
    2398,     0,  2399,  2452,  2457,  2458,  2459,  2455,  2454,     0,
       0,  1640,     0,     0,     0,  2428,     0,     0,   710,   721,
    1704,  1707,  2448,     0,  2504,     0,   759,   208,   205,     0,
    2328,  2289,  2408,     0,  2243,   570,     0,     0,   586,   632,
       0,   628,   624,     0,     0,   888,   835,     0,   919,   862,
       0,     0,   344,   340,   342,   343,   341,   339,   345,     0,
       0,     0,  2247,     0,     0,     0,  2304,     0,  1059,  1094,
       0,     0,     0,     0,  1371,  1377,  1368,  1373,  1374,  1378,
    1372,  1361,  1363,  1364,  1367,  1384,  1379,  1380,  1385,  1381,
    1386,  1376,  1369,  1370,  1387,  1388,  1396,  1394,  1395,  1397,
    1390,  1391,  1375,  1392,  1393,  1389,  1382,  1383,     0,  1297,
    1409,  1415,  1406,  1411,  1412,  1416,  1410,  1399,  1401,  1402,
    1405,  1422,  1417,  1418,  1423,  1419,  1424,  1414,  1407,  1408,
    1425,  1426,  1434,  1432,  1433,  1435,  1428,  1429,  1413,  1430,
    1431,  1427,  1420,  1421,     0,  1331,  1237,  2250,   667,   669,
       0,  2265,     0,  2269,  2278,     0,     0,     0,   717,  2275,
     658,   685,   686,   687,   688,   677,   692,     0,     0,     0,
       0,   731,   735,   734,   749,   750,     0,   739,     0,   737,
     751,  1662,    19,     0,     0,     0,     0,     7,  2367,     0,
    2371,  2483,     0,  2478,     0,  2482,  2481,     0,  2476,     0,
    2480,     0,  2295,  2293,  2316,  2320,  2318,  2315,     0,     0,
    2471,  2395,   272,  1641,     0,     0,  1537,  1538,  1526,     0,
     709,  2502,  2307,   273,     0,  1459,  1511,   204,   119,   202,
     120,   118,   121,   122,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   123,   137,     0,
    2405,   594,     0,   590,   584,   630,     0,     0,   627,   618,
     889,   920,  2381,   609,   611,   612,   610,     0,     0,   338,
    2285,  2283,  2300,  2298,  2302,  2297,  2257,  2255,  2263,  2261,
       0,  1365,  1298,     0,  1403,  1332,     0,     0,     0,     0,
     665,     0,   716,   694,   696,   758,   730,   740,   738,     0,
     741,    13,  2369,  2373,  2375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2311,  2313,     0,  2409,   712,
    1453,     0,     0,   254,     0,     0,     0,     0,     0,     0,
     239,   210,   216,   219,   221,   225,   226,   227,   222,   220,
     253,   592,     0,     0,   589,     0,     0,   629,   607,     0,
       0,     0,     0,  1366,  1404,  2251,  2266,  2270,  2279,   719,
     742,    14,     0,    16,    20,     0,     0,     8,     0,  2479,
      10,     0,  2477,  1849,  2317,  2321,  2319,  2411,  2410,   203,
     255,   258,   258,   258,   258,   258,   258,   258,     0,     0,
     217,     0,     0,   591,     0,   634,   633,   608,  2301,  2299,
    2303,     0,     0,     0,     0,  2377,     0,     0,  2473,     0,
    2475,   258,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   211,     0,   596,   595,   631,     0,  2267,  2271,    15,
       0,    12,     9,    11,     0,  1547,     0,   223,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   229,   230,   231,   232,   233,   234,     0,   235,   236,
     238,   240,   593,     0,     0,     0,   256,   257,   259,     0,
     237,   228,     0,   635,    17,     0,   224,   597,   637,    13,
       0,   599,     0,   636,    18,   260,     0,   598,   638,   600
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2781,   762, -1672,  4435,    44, -2781, -2781, -2781,  -781, -2781,
   -2781, -2781, -2491, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  -157, -2781, -2781, -2781,  -140, -2781, -2781, -2781,
   -2781, -2781,     5, -1942, -2781, -2781, -2781, -2781, -2780, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -1027, -2781,  -327, -2781, -2781, -2781, -2781, -2781,
   -1167, -2781, -2781,  -155, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  2214, -2781,  2217, -2781,  2219, -2781, -2781, -2781,
   -2781,  2231, -2781, -2781, -2781, -2781, -2781,  2233, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  2234, -2781, -2781, -2781,
    2239, -2781,  2244, -2781, -2781, -2781,  2246, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,   518, -2781, -2781,  1301,
     735, -2781, -2781,  2252, -2781, -2781, -1065, -2781,   736, -2781,
    -156,  -158, -2781, -2781, -2781, -2781, -2781, -2781,  2241,  2243,
    2247, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  -162,  -374,  -851,  -388,
    -970, -1511, -1556,  -443, -1002, -2781, -2781,  -671,  -461,  -127,
    -128, -2781,  -115,   -79,  9437, -2781, -2781, 10032, -2781, -2781,
     -10, -2781, -2781, -2781,  -597, -2781, -2781,  -672, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   -53, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  -500,
   -2781, -2781,  -641, -2781, -2781, -2781, -2781, -2781,  -314, -2781,
    -283, -2781,  -264, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   12926, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  9951, -2781, -2781, -2781, 12755, -2781, -2781, -2781, -2781,
   13484, -2781,  -180, -2781, -2781, -2781,  -506, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   12566, -2781, -2781, -2781, -2781,  -184,  -407, -2781, -2781, -2781,
   -2185, -1664, -2781, -2781, -2781, -2781, -2781, -2781,  -275,  -270,
   -2781, -2781,  2283, -2781, -2781, -2781,  -751,  2284, -2781, -2781,
   -2781, -1376, -2781, -2781, -2781, -2781, -1881,  2286, -2781, -2781,
   -2781, -1906, -2781, -2781, -2781, -2781, -2284,  2287, -2781, -2781,
   -2781, -2306,  2288, -2781, -2781, -2781,  -749,  2289, -2781, -2781,
   -2781,  -908, -2781, -2781, -2781, -2781, -1433,  2291, -2781, -2781,
   -2781, -1467, -2781, -2781, -2781, -2781, -1967,  2292, -2781, -2781,
   -2781, -1995,  2294, -2781, -2781, -2781, -1463,  2295, -2781, -2781,
   -2781,  -874,  2301, -2781, -2781, -2781,  -990,  2303, -2781, -2781,
   -2781, -1505,  2305, -2781, -2781, -2781, -2046,  2306, -2781, -2781,
   -2781, -1521, -2781, -2781, -2781, -2781, -2366,  2307, -2781, -2781,
   -2781, -2405, -2781, -2781, -2781, -2781, -2570,  2308, -2781, -2781,
   -2781, -2609,  -231, -2781, -2781, -2781, -2781, -2781,  -154, -2781,
    -230, -2781, -2781, -2781, -2781, -2781, -2781,  2315, -2781,  -227,
   -2781, -2781, -2781, -2781,  -152, -2781,  -151, -2781,  -223, -2781,
    2318, -2781,  -221, -2781,  2320, -2781, -2781, -2781,  2323, -2781,
    2328, -2781, -2781, -2781,  2335, -2781,  2341, -2781,  2342, -2781,
    2344, -2781,  2345, -2781,  2349, -2781,  -150, -2781,  -190, -2781,
    -188, -2781, -2781, -2781,  -149,  -187, -2781, -2781, -2781, -2781,
   -2781, -2781,  -186, -2781,  -182, -2781,  -146, -2781,  -179, -2781,
   -2781,  1160, -2781, -2781, -2781,  1168, -2781, -2781, -2781, -2781,
   -2781,  -160, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   655,
    -584, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781,  1890,   658, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  -748, -2781, -2231,
     -13, -1059, -2781, -2781, -2781, -2781, -2781, -1634, -1627, -1655,
   -1610, -2781, -2781, -2160, -2781, -2781, -1076, -2781, -2781,  -306,
     -43,   -64,  -240,  -613,  -622,  -508,  -550,  -120,  -700, -1231,
   -1268, -1775, -1789,  -504,  -444,  -543,  -554,  -560,  -582,  -718,
   -1315, -1117, -1679,  -183, -2781,  -163,  -208, -1408,  2196,   132,
   -2781, -2781, -2781, -2781, -2781,  -356, -2781, -2781, -2781, -2781,
   -2781,  -911, -2781, -2781, -2781, -1527, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  -492, -2781, -2781, -2781, -2781,
   -2781,  -860, -2781, -2781, -2781,  -119, -2781, -2781, -1236, -2781,
   -2781, -2781, -1431, -2781, -2781, -2781, -2781,  1692, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, 11435,
   -2781,  -382, -2781, -2781, -2781,  9916, -2781, 11866, -2781,  8964,
   -2781, -2781, -2781, 12247, -2781,  -137, -2781,   934, -2781, -2781,
   -2781, -2781,  -129, -2781, -1102, -1092, -2781, -1088, -2781, -1055,
   -2781, -1097, -2781, -1100, -2781, -1110, -2781,  2473, -2781, -2781,
   -2781, -2781, -2781,  5679, -2781, -2781, -2781,  -353, -2781, -2781,
    6800, -2781, -2781, -2781, -2781,  5678, -2781, -2781, -2781, -2781,
   -2781, -2781,  2212, -2781,  6896, -2781,  6916, -2781,  3667, -2781,
      12, -2781,  -100, 10717,  6576, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, 11887, -2781, -2781,  3215,
   -2781, -2781,   172, -2781, -2781, -2781, -2781,  9188, -2781,  4816,
   -2781, -1632, -2781, -1602, -2781, -2781, -2781, -2781, -2069,  -107,
   -1294, -1185, -2507,  -112, -2781, -2781, -2781
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1805,  1808,  1809,  2322,  3038,  3041,  2645,  3033,  3073,
    3034,  3149,  2853,  2971,    34,    35,   180,  2897,   425,    36,
     158,   426,    37,   148,   334,   335,   336,   337,   849,  2698,
    2992,  2899,  1958,  1959,  2407,  3059,  1960,  3001,  3002,  3003,
    3139,  3004,  3005,  3127,  3006,  3007,  3008,  3120,  3009,  3010,
    3081,  3104,  3083,  3145,    38,   259,   774,  1860,  1241,  1242,
    1243,  1244,  1861,    39,   127,   181,   589,   182,   183,   184,
    1127,   185,  1128,   186,  1126,   187,  1123,   188,  1696,   189,
     190,   590,    40,   151,    41,   161,    42,   479,    43,    44,
     162,    45,   527,    46,  1074,    47,  1075,    48,   170,    49,
     530,    50,   264,    51,   172,    52,    53,    54,    55,   171,
      56,   145,    57,   174,    58,   159,    59,   152,   582,   478,
     950,  2072,  2073,  2074,  2729,  1121,   369,   484,   952,   510,
    1066,  1635,  1644,   538,  1079,   794,  1270,  1271,   563,  1102,
    1103,   564,   565,    60,   173,   572,  1110,   573,  1677,  1111,
    1678,  1679,  1105,  1112,  1113,  1114,  1115,   576,   577,   578,
     579,   580,   555,   325,   370,   485,   953,   511,  1067,  1636,
    1645,   539,  1080,   795,   556,   326,   371,   486,   954,   512,
    1068,  1637,  1646,   540,  1081,  1082,  1083,   796,   557,   327,
     372,   870,   373,   374,   375,  1385,  1386,   376,   872,  1992,
    1993,  1994,  2419,  2922,  2923,  3061,  3012,  3094,  3133,  3151,
    3157,  1995,  2075,  2493,  2937,  2938,   389,   878,  2004,  2005,
    2427,   377,   873,   378,  1391,  2424,  1392,  1997,  2710,  2711,
    3015,  2926,  3066,  3096,  3148,  3153,   379,   875,   492,   979,
     493,   980,   494,   513,   514,   515,   516,  1486,   517,   518,
     543,  1663,  2602,  1664,  1085,  2219,  2825,  1070,  1630,  1071,
    1631,   544,  1092,   545,  1093,   546,  1094,  2239,  2240,  2835,
     547,  1095,  2250,  2251,  2252,  2253,   797,  1873,  2687,  1874,
    2381,  1087,  2222,  2827,  2223,  2597,   798,  1267,   799,  1879,
     548,  1096,  2264,  2840,  2265,  2619,  2847,  2266,  2620,  2848,
    2267,  2622,   328,  1347,  1348,   390,   391,   392,   393,   394,
     395,   396,    61,   401,   907,   908,   909,    62,   906,  1430,
    1431,  1432,    63,  1427,  2010,  2011,  2012,    64,  1429,  2034,
    2035,  2036,    65,  2009,  2430,  2431,  2432,    66,  2033,  2459,
    2460,  2461,    67,   402,   921,   922,   923,    68,   522,  1000,
    1001,  1002,    69,   988,  1496,  1497,  1498,    70,   990,  1525,
    1526,  1527,    71,  1488,  2094,  2095,  2096,    72,  1517,  2127,
    2128,  2129,    73,   991,  1553,  1554,  1555,    74,   523,  1022,
    1023,  1024,    75,   526,  1050,  1051,  1052,    76,  1041,  1587,
    1588,  1589,    77,  1579,  2176,  2177,  2178,    78,  1042,  1610,
    1611,  1612,    79,  2166,  2523,  2524,  2525,    80,  2168,  2554,
    2555,  2556,    81,  2515,  2751,  2752,  2753,    82,  2546,  2787,
    2788,  2789,    83,   129,    84,   131,   455,   941,    85,   150,
      86,   223,    87,   245,   457,  1458,    88,    89,   635,    90,
     262,    91,   263,  1265,    92,   139,    93,   267,    94,   801,
      95,   803,    96,  1274,    97,  1296,    98,   192,    99,   194,
     100,   195,   101,   196,   102,   197,   103,   199,   104,   398,
     105,   883,   106,   700,   107,  1161,   108,   140,   109,   141,
     110,   142,   472,   943,   111,   112,   143,   474,   944,   113,
     475,   945,   114,   144,   115,   330,   116,   156,   117,   149,
     340,   853,   854,   118,   147,   846,   847,   119,   261,  1259,
    1260,  2377,  2378,  2888,   120,   260,  1247,  1248,  1249,  1250,
     210,  1132,  1721,  1732,  1704,  1685,  2294,  1144,   405,   231,
     246,  1459,   346,   726,   753,  2063,   592,   780,   270,   804,
    1275,  1297,  1883,  1910,   615,   636,   655,   672,   686,   701,
     892,  1406,  1170,  1776,   281,   292,   298,  1461,   308,  1464,
    1469,   321,   842,   857,   858,  2373,  2367,  2368,   211,  1133,
    1722,  1733,  1705,  1686,  2295,  1145,   406,   232,   247,   347,
     727,   754,   593,   781,   271,   805,  1276,  1298,  1884,  1911,
     616,   637,   656,   673,   687,   702,   893,  1407,  1171,  1777,
     282,   293,   299,   309,  1465,   322,   843,   859,  2374,  2369,
     212,  1134,  1135,  1136,  1137,  1138,  1139,  1723,  1734,  1706,
    1687,  1688,  1689,  2296,  2297,  2298,  1146,  1755,  2650,   407,
     233,   248,   348,   728,   755,   594,   782,   272,   806,  1277,
    1299,  1885,  1912,   617,   638,   657,   674,   688,   703,   894,
    1408,  1172,  1778,   283,   294,   300,   310,  1466,   323,   213,
    1190,  2341,   380,  1372,  2416,   495,  1479,  2498,  1073,  2205,
    2956,  1003,  2158,  2741,  2740,  1025,  2163,  2743,  2742,  1641,
    2587,  3071,  1650,  2591,  3072,   549,  1659,  2601,  1088,  2217,
    2959,   963,  2079,  2731,  2730,   349,  1363,  2410,   595,  1761,
    2652,  2651,  2097,  2737,  3021,  3020,  3022,   838,  1950,  2695,
    1173,  2339,  2878,  2879,  1779,  2657,  2982,  2984,  2983,   214,
     715,   408,   936,   860,  1357,   409,   937,   215,   720,   216,
    1196,   338,  1352,   217,  1205,   284,  1327,   218,  1215,  2350,
    2351,  1216,   219,   717,  1140,  1141,  1744,  1726,  2313,  1142,
    1745,  1728,  2314,  1729,  2315,  1730,  2316,   220,   718,  1467,
    2065,   314,   833,   603,  1222,  2352,  2353,   276,   821,  1223,
     604,  2671,  1228,  2354,  1229,   605,  2703,  1367,  2413,  2375,
    2885,  3048,   606,   863,   607,   864,   608,   866,   609,   748,
     610,   750,   305,   241,   611,  1233,   786,  1261,   787,   788,
     295,   829,   296,   830,   861,  1972,   278,  1321,  1938,   612,
     747,  1851,  1852,  1853,  2677,  1854,  1855,   221,   719,   222,
     721,  1752,  2326,  1754,  2327,  2867,  2862,  2868,  2863,  1827,
    1828,  1829,  1830,   289,   825,  1942,  1943
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     235,   427,   250,   428,   456,  2268,   459,   460,   471,   473,
     274,   285,   476,   302,   312,   575,  2406,   574,  1741,   910,
     924,   350,   383,  1409,  1086,  1724,  1735,   412,  1740,  1941,
    1935,  1739,   498,   487,  1053,  1725,  1736,  1750,  1886,  1749,
    1737,   552,   895,   315,   415,  1909,   488,  1748,   916,   503,
    2312,  1680,  2179,  1682,  1800,  2058,  2285,  2067,   663,  2152,
    1913,  1628,   601,   624,  2119,   645,   665,   681,   695,  1757,
     710,  2321,  1727,  1738,  1747,  1863,  2284,  1499,  1656,  1528,
    1556,  2621,   489,  2199,   889,  1149,  2130,  2286,  2318,  2214,
    2201,  2154,  2007,  1573,   731,  1100,  1098,  1633,  2335,   828,
     939,   835,  1476,   235,   729,  1318,  2320,   868,   491,  2389,
    1360,   982,  1151,  1156,  1219,   890,   758,   882,   250,  1158,
    1187,   880,  2392,   986,  1273,  2211,   756,  1160,  2503,  2487,
    2458,  2578,  1237,  2506,   891,  2631,   832,  2681,   809,  2865,
    2870,   240,   274,   255,  1054,  2854,  2855,  2715,   807,  1576,
    2815,   824,   836,   285,  2718,  2653,   176,  1452,  2779,  2993,
    1188,  2733,   203,   204,   228,   960,  2336,  1370,   209,  2155,
     302,   268,  1758,  1454,  1361,  1425,   227,   332,   209,  2954,
     312,  1240,  2951,   772,  2654,  1948,   386,  1245,   333,   752,
    2734,  1463,  2069,  1154,  1389,   851,   961,   386,   725,   841,
     269,  1759,   537,   387,   629,   209,   650,  2160,   877,   315,
     203,   386,  1657,   341,   279,   962,   203,   204,   350,   224,
     207,  3060,   209,   365,   227,   224,   229,  2076,   225,   226,
     227,  1263,   229,   230,  1871,   740,   203,   204,  1143,  2070,
     207,   383,   209,   146,   240,   224,   342,   343,   344,   280,
     345,   297,  1220,   177,   128,  2220,  2680,   767,   130,   255,
    2993,  1224,  1225,  1226,  2994,   927,  2995,  2996,  1634,   898,
     884,  2071,   914,   929,  2997,  2998,  2999,   412,  3090,  1872,
    1658,   203,   204,   885, -1778,  1390,   228,   209,  1063,   920,
     935,   387,  1124,  1840,   415,  1841,   297,   153,   228,  2221,
    2655,   591,   201,   202,   203,   204,   205,   206,   207,   208,
     209,  2337,   881,   224,   160,   559,   225,   226,   227,   886,
     229,   230,  2735,   307,   618,  1463,   639,   658,   675,   689,
    2156,   704,  1099,   157,   342,   343,   344,  1643,   345,  2161,
    1076,   175,   269,  2077,  3024,   888,  1324,  1756,  1246,   191,
     966,   955,   532,   855,  2203,   228,   498,   487,   228,  1125,
    1325,   560,   561,   856,   956,  2994,  1371,  2995,  2996,   178,
     488,   388,   532,   503,  1362,  2997,  2998,  2999,   179,  2066,
    3023,   324,   388,   365,  2656,   837,  1167,   193,  3000,  1189,
    2736,  1862,   823,  1009,  1027,  2338,   388,  1058,  2157,   850,
     957,  1760,  3058,   562,  1949,   571,   489,  2162,   324,  2955,
     552,  2931,  2952,  2215,  1062,  2585,  1117,  1168,  2589,  1119,
     840,   532,  2204,   132,  1077,   879,   959,  2078,  1064,  1065,
    2930,   571,   491,  2843,  1477,  2849,  1169,  2990,   537,  1116,
     827,  1221,  1227,  1326,   198,   137,  1236,   519,   520,  2883,
     332,   521,   365,   121,   122,   365,   571,   123,   537,   124,
    1350,   333,  2697,  1351,   601,  2273,   831,   569,   559,   570,
    2851,  2865, -1455,  2865,   138,  1129,  1130, -1771, -1773, -1775,
   -1780,  2216,  1131,  2586,  1660,  1661,  2590,   624,  1355,  3000,
    2281,  1356,  2210,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   790,  1078,   224,   601,   537,   645,   331,
    2739,   834,  1632,   399,   560,   561,   203,   204,  1478,   663,
     207,   125,   209,   126,  1434,   224,   910,   665,   225,   226,
     227,  2816,   229,   230,  2391,  2738,   942,   895,   154,   155,
     924,  1359,   400,   225,   681,   339,  1039,  1409,  1662,  1590,
    1613,   790,  1471,   397,  1118,   916,   791,   792,   695,  1053,
     855,  2213,   343,   344,  1655,   138,   777,   778,   779,  1403,
     856,  1179,  1163,   710,  1086,  1040,  2716,   265,   266,   889,
    2719,   400,  3099,   290,   291,  1164,  1499,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,  1487,   731,  1767,
    1404,  1882,  2691,  1766,  1801,  1835,  1397,  1482,   729,  1396,
     890,  1973,  1765,  2690,  1859,  1528,  2278,  1936,  2280,  1405,
    1724,  1165,   235,  1741,  2080,   758,  1333,  1369,   629,   891,
    1725,  1735,  1457,  1740,  1707,   756,  1739,  2202,  1671,   960,
    1762,  1736,   250,  1556,  1328,  1737,  1763,  1166,  1886,   650,
    2179,  2321,  2644,  2224,  1670,  2658,  2634,  2592,  2492,  1591,
    1614,  2968,  2208,  2970,  2159,  2632,  2393,  1727,  1331,  1054,
     961,  2663,  1284,  2629,  1306,  1913,   809,  2390,  1738,  2580,
    2329,  2488,  2340,  2639,  2507,  2504,   807,  2325,  1597,   962,
    2508,  2429,  2640,  2579,   274,  2365,  2633,  2130,   285,  2588,
    2059,  2164,   302,  1322,  2060,   312,  2008,  1238,  1235,  1764,
    1354,  1217,  1869,  1349,  1394,   585,   591,   201,   202,   203,
     204,   205,   206,   207,   208,   209,  1157,   520,   224,   477,
     521,   225,   226,   227,   315,   229,   230,  2406,   350,   740,
    1672,   416,   947,  1673,  1708,   528,   771,   383,   618,   342,
     343,   344,   207,   345,  1412,  1398,  1954,  1955,  1956,  1957,
    1979,  1262,  1980,   240,   898,   884,   767,   529,  1399,   639,
    1693,   164,  1634,  2433,   163,   524,   525,  1438,   885,   914,
     203,   204,   365,   255,  3030,   927,   209,  1433,   658,   268,
     228,  1063,  1880,   929,   227,  1881,   920,  2462,   504,   505,
     506,   507,   508,   164,  1400,   675,  1106,  2068,   586,   412,
     935,  1643,   581,  1289,   886,  1311,   790,   583,   269,   689,
    1159,   791,   792,   584,   966,   955,   415,  2674,  2675,   228,
    1402,  1107,  1108,  1109,   704,   699,  1040,  2676,   956,   948,
     888,   122,  1672, -1778,   123,  2270,   509,  1773,   341,   904,
     905,   203,   498,   487,  1561,   207,   532,  1167,   714,  1505,
     224,  1534,  1563,   225,  2991,   227,   488,   229,  2277,   503,
     800,   165,  1009,   587,   957,   532,   716,  2648,  1774,   793,
    2649,   342,   343,   344,   722,   345,  2343,   365,  1168,  2344,
     985,   723,   588,   138,  1027,   532,  2343,  1775,  2404,  2345,
     959,  2882,   489,  2343,   166,  1617,  2346,  1169,   125,  3039,
     126,  3042,  1595,  1619,   202,   203,   204,   205,   745,   279,
    2343,   209,  1058,  2347,  2343,   746,   365,  2394,   491,  1602,
    1626,  1064,  1065,  1278,   749,  1300,   166,   167,   168,  1062,
     946,   155,   537,  1129,  1130,  1717,  1718,  1719,  1720,  1148,
    1131,  1192,  1193,  1194, -2420,   169,  2850,  2343,  1681,   802,
    2398,   537,  1683,  2852,  2852,  2852,  1472,   525,   552,  2857,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
   -1823,   537,   224,  1577,  1578,   225,   226,   227,   228,   229,
     230,   403,   404,  2343,  1691,   940,  2399,  1712,   132,  1195,
    1510,   133,  1539,   342,   343,   344,   773,   345,   775,   134,
    2343,   269,   135,  2400,  1716,  2002,  2003,   790,   663,   601,
     776,   624,   791,   792,   645,   789,   665,   822,   681,   826,
     695,   845,  1785,  1769,  1129,  1130, -1771, -1773, -1775, -1780,
     839,  1131,  1179,  1163,   848,  2015,  1770,  2039,  2343,  1434,
    2179,  2411,   203,   204,   852,  2665,  1164,   710,   209,  2343,
    1746,  1106,  2412,   234,   862,   249,   865,   297,   895,   910,
     987,   924,   869,   273,  2130,   871,   301,   311,  1272,   329,
    2343,   867,  1771,  2415,  2754,   382,  1107,  1108,  1109,   731,
     411,   874,  1165,  1403,   307,   497,  1590,   949,   916,   729,
     203,   204,  2343,  2694,   551,  2604,   209,   758,  1772,   268,
     889,   569,   559,   570,   227,  2790,   978,   756,  1166,  1613,
    1202,  1203,  1204,  2279,  1404,   600,   623,   983,   644,   664,
     680,   694,   984,   709,  2343,  1053,   938,  2605,   269,  2641,
     989,   890,  2642,  1405,   136,  1892,  1409,  1284,  2343,  1086,
    2343,  2672,  1886,  2685,  1090,  1913,  1091,   730,   560,   561,
     891,   960,   629,  1101,   571,   650,   234,  1919,  1104,  1306,
    1122, -1778,  1120,   202,   203,   204,   205,  1143,   279,   757,
     209,   249,  2850,  1232,  2343,   203,   204,  2689,   809, -1821,
    2343,   209,   961,  2696,   268,  2433,  1239,  2180,   807,   227,
    1240,   808,  1147,  2388,  2299,   273,  1591,  1499,  1191,  1741,
    1076,   962,  2626,  1707,  2627,  1724,  1197,  1735,  2343,  1740,
    1264,  2705,  1739,   269,  2462,  1725,  1198,  1736,   228,  1614,
     740,  1737,  1199,   301,  1200,  1597,   569,   559,   570,  1201,
    1528,  2343,  1556,   311,  2818,  1054,  2343,  1230,   767,  2819,
     403,   404,   203,   204,  1231,  2526, -1821,  2557,   209,  1234,
     329,   268,  1727,  1266,  1738,  1268,   227,  1269,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,  1412,  1398,
    1832, -2362,   618,   560,   561,   639,  1901,   658,  1289,   675,
     269,   689,  1399,  1319,  1077,   898,   884,  1320,  2021,  1323,
    2045,  1329,  1438,  2641,   382,  3037,  2858,  3040,  1928,   885,
    1311,  1330,  1433,  1332,  2300,  1334,   927,  2343,   704,   836,
    2880,  2754,   914,  1708,   929,   365,  2343,  2343,  1400,  2891,
    2924,  2927,   897,  1693,  2928,   913,   928,  2683,  2684,   920,
     411,   935,  1353,  2306,  1358,   886,   966,   955,  1483,  1484,
    1485,   569,   559,   570,  1402,  2343,  1366,  2790,  2932,  2103,
     956,  1364,  1129,  1130,  3076, -1773, -1775, -1780,  1505,  1131,
    1365,   888,   387,   790,  1078,  1162,   201,   202,   203,   204,
     205,   206,   207,   208,   209, -1823,  1368,   224,  2136,  1106,
    1426,  3013,   227,   228,  3014,  1373,   957,  1534,   560,   561,
    2343,  2852,  1428,  3043,   571,  3102,  2283,  3103,  1278,  1954,
    1955,  1956,  1957,   965,  1107,  1108,  1109,  1561,  1387,   497,
     203,   204,   959,  1388,   207,  1563,   209,  1393,  3135,   224,
    1300,  1395,   225,   226,   227,   228,   229,   230,  1676,  2026,
     228,  2050,  2343,  1009,   266,  3075,  1027,   207,  3077,  1455,
    2184,  3078, -1823,  3031,  3032,  3079,  1008,  1026,  3080,  1595,
    1057,  2864,  2869,  1773,  1206,  1207,  1208,  1209,  1210,  1211,
    1212,  1213,  1456,   551,  1617,  1473,  1602,  1474,  2433,  1480,
    1106,  2462,  1619,  1684,  1481,  1167,   361,   362,   363,  1571,
    1574,   366,  1629,  1652,  1774,  1876,  1877,  1878,  1058,  1626,
    2112,  1186,   481,   482,   483,  1107,  1108,  1109,   571,  1510,
    1251,  1252,  1653,  1775,  1654,  1062,  1168,  1665,  1666,  2754,
    2274,  1667,  2790,  2276,  1668,  1669,  2282,   600,  1675,  2145,
     569,   559,   570,  1743,  1717,  1169,  1718,  1751,  1539,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,  1719,
     623,  2404,  2405,   202,   203,   204,   205,  1691,   279,  2013,
     209,  2037,  1753,   268,   569,   559,   570,  2304,   227,   600,
    1987,   644,  1988,  1989,  1990,  1991,  1712,   560,   561,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,  1106,
     664,   224,   269,  1716,   225,   226,   227,   228,   229,   230,
    1954,  1955,  1956,  1957,  1214,  1336,  1337,   680,  1799,  1338,
    1339,   560,   561,  2526,  1107,  1108,  1109,  2275,  1803,  1804,
     269,   694,  2831,  2832,  2833,  2834,  1798,  2435,  1802,  2015,
     403,   404,  1834,  1806,  1178,  1807,   709,  1831,  1129,  1130,
    1717,  1718,  1719,  1720,  2557,  1131,  1833,  1836,  1785,  1769,
     751,  2464,  1839,  2039,  2257,  2258,  2259,  2260,  2261,  2262,
    1837,   730,  1770,  1838,  2317,  1253,  1254,  1255,  1842,  1865,
    1179,  1163,   316,   317,   318,  1434,  1256,  1257,  1258,   319,
    1857, -1546,  1864,   320,  1164,   234,  1866,  1867,   757,  1868,
    1986,  1987,  1403,  1988,  1989,  1990,  1991,  2722,  1771,  2723,
    2724,  2725,  2726,  1870,  2969,   249,  1590,  1875,  1613, -2447,
    1768,   201,   202,   203,   204,   205,   206,   207,   208,   209,
    1165,  1939,   224,  1404,  1772,   225,  1944,   227,   228,   229,
     504,   505,   506,   507,   508,  1283,  1951,  1305,  1962,   808,
    1953,  1974,  1405,   342,   343,   344,  1166,   345,  1975,  1978,
     203,  1340,  1982,  1983,   279,  1892,   207,   273,  1985,   224,
    1341,  1342,  1343,   724,   227,   301,   229,  1998,   311,  2727,
    2728,  1344,  1345,  1346,   329,  1451,  1999,  2000,   509,  1284,
     905,  2081,  1919,  2165,  2528,  2082,  2559,  2085,  2167,   280,
    2206,   202,   203,   204,   205,  2180,   279,  2218,   209,  2207,
    2209,   224,  2212,  2299,  2227,  1306,   227,  2225,   229,   225,
     382,  2226,  1908,  2228,  2229,  2330,  1591,  1411,  1614,  1707,
    2323,   361,   362,   363,  2332,  2324,   366,   897,   343,   344,
    2328,   280,   777,   778,   779,  2331,  2342,   481,   482,   483,
    1437,  2333,   913,  2348,  2349,  1597,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   928,  2355,   224,  2357,
    2358,   225,   226,   227,   228,   229,   230,  2526,   403,   404,
     203,   204,   411,  2359,   207,  2360,   209,  1412,  1398,   224,
    2441,  2361,  2021,  2362,  2363,   297,  2364,   965,   537,  2370,
    2372,  1399,   202,   203,   204,   205,  1901,   279,  2376,   209,
    2382,  2383,   224,  2557,  2470,  2384,  2045,   227,  2386,   229,
    2395,  2402,  2396,  2300,  2397,   497,  2409,  2401,  2414,  2421,
    1289,  2417,  1504,  1928,  1533,  1562,  2420,  1400,  1438,  1708,
    1693,  2422,   280,  2423,  1578,  1008,  2426,  2491,  1433,  2428,
    2489,  2490,  2306,  2334,  2497,  2494,  1311,  1129,  1130,  1717,
    1718,  1719,  1720,  1402,  1131,  2495,  2496,  1026,  1963,  1964,
    1965,  1966,  1967,  1968,  1969,  1970,  2103,  2499,  2500,   403,
     404,  2501,  2581,  2319,  2593,  1594,  1618,  2933,  2934,  2935,
    2936,  1813,  1814,  1815,  2509,  1057,  2510,  2511,  2512,  1505,
    1816,  1817,  2513,  1856,  1818,  1819,  1858,  2514,   480,  2136,
     202,   203,   204,   205,  2582,   207,  2594,   209,  2595,  2596,
     224,  2598,  2599,  1453,  2609,   227,  1561,  2600,  2606,  2610,
    1773,  2450,  1534,  2026,  1563,  3084,  3085,  3086,  3087,  3088,
    3089,   551,  1845,  1846,  1847,  1848,  1849,  2534,  2607,  2565,
    1278,  2608,  2611,  2612,  2613,  2479,  2614,  2050,  2184,  2435,
    2615,  1774,   571,  2623,  3105,  2661,  2635,  1690,  2636,  2637,
    1711,  2638,  2646,  1617,  2647,  2659,  1300,  2660,  2678,  1595,
    1775,  1619,  2699,  2682,  2686,  2015,  2692,  2700,  2464,  1150,
    2706,  2709,   600,  2343,   623,  2713,  1602,   644,  1626,   664,
    2721,   680,  2820,   694,  2817,  1784,  2837,  2821,  1971,  2822,
    2823,  2824,  2838,  2826,  2039,  1178,  2839,  2112,  2859,   361,
     362,   363,   364,  2884,   366,  2624,  2860,  2887,  2871,  2625,
     709,  2877,  2874,  2628,  2875,   481,   482,   483,  2876,  2881,
    1510,  2889,  2919,  2756,  2921,  1984,  1820,  2920,  2299,  2925,
    2145,  2939,  2528,  2013,  2942,  1821,  1822,  1823,  2943,  2945,
    1996,  2961,   730,  2944,  1691,  2001,  1824,  1825,  1826,  2957,
    2958,  2963,  2964,  1539,  2792,  2965,  2304,  2037,  2975,  2972,
     757,  2973,  2974,  2559,  2976,  2977,  2978,  2980,  2539,  2987,
    2570,  2979,  1712,  3011,  2988,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,  2180,  2989,   224,  3016,  1716,
    3019,  3018,   227,  3026,   229,  1785,  1769,  3027,  1891,  3047,
    1283,  2257,  2258,  2259,  2260,  2261,  2262,  2061,  2062,  1770,
    2232,  2233,  2234,  2235,  2236,  2237,  2238,   280,  3029,  3036,
    1918,  1424,  1305,   265,  2241,  2242,  2243,  2244,  2245,  2246,
    2247,  2248,  2083,  2084,  3062,  3049,  3050,  3051,  2300,  3052,
    3053,   808,  3054,  3055,  3056,  1771,  3057,  3064,  3065,  1892,
    3074,  3082,  1919,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,  3091,  3092,   224,  3093,  2306,   225,   226,
     227,  1772,   229,   230,  3121,  3122,  3123,  3124,  3125,  3126,
    3100,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,  3101,  2441,   224,   269,  3106,   225,   226,   227,  3107,
     229,   230,  3128,  3129,  3130,  3131,  3134,  2893,     2,  3136,
    2894,  2895,     6,     7,     8,     9,    10,    11,  2021,    13,
    3138,  2470,  2435,  3140,    15,  2464,  3141,  3142,  3143,  3147,
    3144,  1411,  3146,  3150,  3152,    16,    17,  3031,  2616,  2617,
    2256,  2257,  2258,  2259,  2260,  2261,  2262,  2045,   897,  3155,
    3156,  2020,   354,  2044,  3158,  1437,  3159,  2643,  3154,  2679,
    2756,  2900,   429,  2103,  2249,   430,  2136,   431,  1843,  1844,
    1845,  1846,  1847,  1848,  1849,   913,  2762,   928,  1850,   432,
     531,   433,   434,   203,   204,  2534,  2528,   435,  2387,   209,
    1901,  2618,   436,  1928,   437,  1674,  2792,  2269,   228,   965,
     438,  2708,  2272,   566,  2896,   567,  3063,  2798,  1155,   568,
    3132,   341,  2102,  3095,   203,   204,  2565,  3017,   207,  2836,
     209,  1504,  2559,   224,  2842,   736,   225,  2271,   227,  2967,
     229,   439,   440,  2450,   441,   442,   443,   444,  2184,   445,
     446,  2135,   447,   448,   342,   343,   344,   763,   345,   449,
    1533,   450,   269,   451,   452,   453,   454,  2902,  2904,  2026,
     404,  2905,  2479,   458,   532,  2908,   461,  2909,   462,   814,
     480,   463,   202,   203,   204,   205,   464,   279,  1562,   209,
    1374,  1375,   224,   465,  1376,  1377,  1934,   227,  2050,   466,
     467,  2304,   468,   469,   364,   365,  1008,   470,  2911,  1026,
    2912,  2914,  2915,  2183,  2112,  1961,  2916,  2145,  1952,  2918,
    2371,  3137,  1594,  2886,  1153,  1152,   844,  2771,  2380,  1335,
    2673,  2856,     0,     0,     0,     0,  2539,     0,   533,   534,
     535,  2898,     0,  2901,  2903,  1618,  2906,  2907,  2910,  2913,
       0,     0,  2917,     0,     0,     0,     0,   536,  2807,   354,
     537,  1057,     0,     0,     0,     0,     0,  2570,  2756,     0,
       0,  2792,  2844,  2845,  2256,  2257,  2258,  2259,  2260,  2261,
    2262,     0,     0,     0,     0,  2441,     0,     0,  2470,  2013,
       0,   361,   362,   363,   364,     0,   366,     0,     0,     0,
       0,     0,   236,     0,   251,     0,     0,   481,   482,   483,
       0,     0,   275,     0,  1097,   303,   313,     0,  2037,     0,
    1690,     0,     0,  2762,   384,  2846,     0,     0,     0,   413,
    2303,     0,     0,     0,   499,     0,  1378,     0,     0,  1711,
       0,     0,     0,   553,     0,  1379,  1380,  1381,     0,  2534,
       0,     0,     0,     0,  1317,     0,  1382,  1383,  1384,  2798,
       0,     0,     0,     0,   602,   625,     0,   646,   666,   682,
     696,     0,   711,     0,     0,   951,     0,   202,   203,   204,
     205,     0,   207,     0,   209,  2565,     0,   224,     0,     0,
     225,   971,   227,     0,   229,     0,   732,     0,     0,     0,
       0,     0,     0,     0,   981,   236,     0,     0,   342,   343,
     344,  1784,   345,   531,     0,     0,   203,   204,   759,     0,
     251,     0,   209,     0,  2408,     0,  2450,     0,     0,  2479,
       0,   228,     0,  1178,     0,  1032,     0,     0,     0,     0,
     810,     0,   341,     0,   275,   203,   204,     0,     0,   207,
       0,   209,     0,     0,   224,     0,     0,   225,   226,   227,
     228,   229,   230,     0,  2771,     0,     0,     0,     0,     0,
       0,     0,   303,     0,     0,   342,   343,   344,     0,   345,
       0,     0,   313,     0,     0,     0,   361,   362,   363,   364,
    2539,   366,     0,   404,     0,     0,     0,   532,     0,     0,
    2807,     0,   481,   482,   483,     0,  1813,  1814,  1815,     0,
       0,     0,     0,     0,     0,  1816,  1817,     0,  1891,  1818,
    1819,  2762,     0,     0,  2798,     0,  2570,   364,   365,     0,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,  1283,   384,   224,  1918,     0,   225,   226,   227,
     228,   229,   230,     0,     0,     0,  1813,  1814,  1815,     0,
       0,   533,   534,   535,     0,  1816,  1817,     0,  1305,  1818,
    1819,   899,     0,   269,   915,   930,     0,     0,     0,   413,
     536,     0,     0,   537,     0,     0,     0,     0,     0,   360,
       0,   202,   203,   204,   205,     0,     0,     0,   209,  2254,
    2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2006,     0,
       0,   403,   404,  2086,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   224,     0,     0,   225,   226,
     227,   228,   229,   230,     0,     0,     0,     0,  2263,   736,
    1411,     0,     0,  2440,     0,  2020,   342,   343,   344,     0,
     345,     0,   967,     0,   269,     0,     0,     0,   499,  1816,
    1817,  2861,  2771,  1818,  1819,  2807,   763,  2469,     0,  2044,
    1821,  1822,  1823,     0,     0,  1218,     0,     0,     0,     0,
       0,  1824,  1825,  1826,     0,     0,     0,     0,     0,     0,
       0,  1437,   403,   404,     0,  1010,  1028,   532,     0,  1059,
     361,   362,   363,   364,   365,   366,   367,   368,     0,     0,
       0,  2866,   553,     0,     0,     0,     0,   814,     0,     0,
    1821,  1822,  1823,     0,     0,     0,     0,   364,   365,  2102,
       0,  1824,  1825,  1826,     0,     0,     0,     0,  2086,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,     0,  1504,   225,   226,   227,   228,   229,   230,     0,
       0,   533,  2135,   535,  1816,  1817,   602,     0,  1818,  1819,
       0,   342,   343,   344,     0,   345,     0,     0,     0,   354,
     536,     0,     0,   537,     0,  1533,     0,  1562,     0,   625,
       0,   202,   203,   204,   205,  1417,   279,     0,   209,     0,
    2533,   268,  2564,  2662,     0,  1820,   227,     0,   602,     0,
     646,  2183,     0,   876,  1821,  1822,  1823,     0,  1443,     0,
       0,     0,   532,     0,     0,  1824,  1825,  1826,     0,   666,
     269,     0,  1594,     0,  1618,     0,     0,  2950,     0,     0,
       0,     0,     0,     0,     0,     0,   682,   341,     0,     0,
     203,   204,   364,   365,   207,     0,   209,     0,     0,   224,
     696,     0,   225,   226,   227,   971,   229,   230,   403,   404,
       0,     0,  2701,  1180,     0,   711,     0,     0,  2704,     0,
     342,   343,   344,     0,   345,     0,   533,     0,   535,     0,
     203,   204,     0,     0,   207,     0,   209,     0,     0,   224,
     732,     0,   225,   226,   227,   536,   229,   230,   537,     0,
    2861,     0,     0,     0,     0,     0,     0,  1690,     0,  1821,
    1822,  1823,     0,     0,   236,     0,     0,   759,     0,  2303,
    1824,  1825,  1826,     0,     0,  1032,   341,     0,     0,   203,
       0,     0,     0,   207,   251,  1711,     0,     0,   224,     0,
       0,   225,     0,   227,   531,   229,   202,   203,   204,   205,
    2732,   279,  2502,   209,     0,     0,     0,     0,  1784,   342,
     343,   344,   228,   345,  1285,     0,  1307,     0,   810,     0,
       0,     0,     0,  2086,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   224,   275,     0,   225,   226,
     227,   228,   229,   230,   303,     0,     0,   313,     0,     0,
       0,     0,     0,     0,     0,     0,   342,   343,   344,     0,
     345,     0,  1891,     0,     0,  1918,     0,     0,     0,     0,
       0,     0,     0,   403,   404,     0,     0,     0,   532,     0,
       0,     0,     0,     0,   243,     0,   257,     0,     0,   384,
       0,     0,     0,     0,     0,   360,  1413,   202,   203,   204,
     205,     0,     0,  2829,   209,  2440,   899,   532,   364,   365,
       0,   203,   204,  1790,     0,   207,     0,   209,     0,  1439,
     224,   915,     0,   225,   226,   227,   228,   229,   230,     0,
       0,  2020,     0,     0,  2469,   930,     0,   364,   365,     0,
       0,     0,   533,     0,   535,     0,     0,   632,     0,   652,
       0,   413,     0,  2872,  2873,     0,     0,     0,     0,     0,
    2044,   536,     0,     0,   537,     0,   967,     0,     0,     0,
     736,   533,     0,   535,     0,     0,  2102,     0,   743,  2135,
       0,     0,     0,     0,     0,     0,     0,   243,   763,  2761,
     536,     0,     0,   537,   499,     0,     0,  2892,  2533,     0,
     769,  1506,   257,  1535,  1564,     0,   361,   362,   363,   364,
     365,   366,   367,   368,  1010,     0,     0,     0,  1627,     0,
    2797,     0,     0,     0,     0,     0,  1897,     0,     0,  2564,
       0,     0,  2940,  2941,     0,     0,  1028,     0,     0,     0,
       0,     0,  2946,  2947,  2948,  2949,     0,  2505,  1924,     0,
    1940,  2183,     0,     0,  1596,  1620,     0,  1816,  1817,     0,
       0,  1818,  1819,     0,  1059,     0,     0,     0,     0,   814,
       0,     0,  2086,   201,   202,   203,   204,   205,   206,   207,
     208,   209,     0,     0,   224,     0,     0,   225,   226,   227,
     228,   229,   230,   992,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,  2303,   342,   343,   344,     0,   345,
     553,   228,     0,   269,  3108,  3109,  3110,  3111,  3112,  3113,
    3114,  3115,  3116,  3117,  3118,  3119,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,  1692,     0,   224,  1713,
       0,   225,   226,   227,   228,   229,   230,     0,     0,     0,
       0,   403,   404,     0,     0,     0,   532,     0,     0,  1417,
       0,   602,     0,   625,     0,     0,   646,   269,   666,     0,
     682,     0,   696,     0,  1786,     0,     0,   532,     0,     0,
    2985,  2986,     0,  1443,  1180,     0,   364,   365,  2440,     0,
       0,  2469,     0,     0,     0,     0,     0,     0,     0,   711,
       0,     0,     0,  1820,     0,   403,   404,   364,   365,     0,
       0,     0,  1821,  1822,  1823,     0,     0,     0,     0,     0,
     533,     0,   535,  1824,  1825,  1826,  2761,   971,     0,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,   536,
    2108,   533,   537,   535,     0,     0,     0,     0,     0,   759,
       0,     0,  2533,     0,     0,     0,     0,     0,  3025,     0,
     536,  3028,  2797,   537,     0,     0,     0,     0,     0,  2141,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,     0,  3044,  3045,  3046,  1893,  2564,  1285,
       0,     0,     0,     0,     0,     0,  2953,     0,   992,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,  1920,
     224,  1307,     0,   225,   226,   227,   228,   229,   230,     0,
       0,  3067,  3068,  3069,  3070,   341,     0,  1032,   203,   204,
     810,  2189,   207,     0,   209,     0,   239,   224,   254,   269,
     225,     0,   227,     0,   229,     0,   277,   287,     0,     0,
    2457,     0,     0,     0,     0,     0,     0,   357,   342,   343,
     344,     0,   345,     0,     0,     0,   269,     0,   501,     0,
       0,   632,     0,  3097,  3098,     0,     0,   403,   404,     0,
       0,     0,   532,     0,     0,     0,   480,     0,   202,   203,
     204,   205,   652,   279,     0,   209,     0,     0,   224,   628,
       0,   649,   668,   227,     0,     0,     0,     0,     0,     0,
       0,     0,   364,   365,     0,     0,     0,     0,     0,     0,
    1413,     0,     0,     0,  2761,     0,     0,  2797,     0,     0,
     739,     0,     0,     0,     0,     0,     0,   899,     0,   239,
    2022,     0,  2046,     0,  1439,     0,   533,     0,   535,     0,
       0,     0,   766,     0,   254,  2616,  2617,  2256,  2257,  2258,
    2259,  2260,  2261,  2262,   915,   536,   930,     0,   537,     0,
       0,     0,     0,     0,   817,     0,     0,     0,   277,     0,
       0,     0,   743,     0,     0,     0,     0,     0,   967,   287,
       0,     0,     0,     0,     0,     0,     0,   361,   362,   363,
     364,  2104,   366,     0,     0,     0,   243,     0,     0,   769,
    1506,     0,     0,   481,   482,   483,   341,     0,   202,   203,
     204,   205,  2778,   207,     0,   209,   257,     0,   224,  1790,
    2137,   225,     0,   227,     0,   229,     0,     0,     0,  1535,
    2844,  2845,  2256,  2257,  2258,  2259,  2260,  2261,  2262,   342,
     343,   344,     0,   345,   357,     0,  1293,   269,  1314,     0,
       0,     0,     0,     0,     0,  1014,     0,  1564,   203,   204,
       0,     0,   207,     0,   209,     0,     0,   224,     0,     0,
     225,     0,   227,   228,   229,  1010,     0,     0,  1028,     0,
       0,     0,  2185,     0,     0,   403,   404,     0,   342,   343,
     344,  1596,   345,     0,     0,   901,     0,     0,   917,   932,
       0,     0,     0,     0,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,  1620,     0,   224,     0,     0,   225,
     226,   227,   228,   229,   230,     0,  1897,     0,     0,     0,
    1059,  1014,     0,   202,   203,   204,   205,     0,   207,   532,
     209,     0,     0,   224,     0,   269,   225,     0,   227,   228,
     229,     0,     0,  1924,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   342,   343,   344,     0,   345,   364,
     365,     0,   269,     0,     0,     0,   974,     0,     0,     0,
       0,     0,   501,   403,   404,     0,     0,     0,   532,  1692,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2305,
       0,     0,     0,   533,     0,   535,     0,     0,  1713,     0,
     403,   404,     0,     0,     0,   532,     0,     0,   364,   365,
    1035,     0,   536,     0,     0,   537,     0,     0,     0,     0,
    2057,     0,     0,  1514,     0,  1543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,     0,  1417,     0,
       0,  2446,   533,     0,   535,     0,     0,     0,     0,   992,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,   536,     0,     0,   537,  2475,     0,   228,     0,   533,
    1786,   535,     0,     0,     0,     0,     0,     0,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   536,  1443,
     224,   537,  1180,     0,     0,   227,     0,   229,     0,     0,
       0,     0,     0,   628,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2814,     0,
     280,     0,     0,     0,   649,     0,     0,  2108,     0,     0,
       0,     0,   480,   532,   202,   203,   204,   205,     0,   207,
       0,   209,     0,   668,   224,  2577,     0,     0,     0,   227,
     992,   201,   202,   203,   204,   205,   206,   207,   208,   209,
    2141,     0,   224,   364,   365,   225,   226,   227,   228,   229,
     230,   531,     0,   202,   203,   204,   205,  1893,   279,     0,
     209,     0,     0,     0,     0,   632,     0,  1182,   652,   228,
       0,   269,     0,     0,     0,     0,     0,   533,     0,   535,
       0,  1285,     0,     0,  1920,     0,     0,     0,     0,  2189,
       0,     0,     0,     0,   739,     0,   536,     0,     0,   537,
       0,     0,     0,     0,     0,     0,     0,  1307,     0,     0,
       0,     0,     0,     0,   532,     0,     0,     0,   239,     0,
       0,   766,     0,   361,   362,   363,   364,     0,   366,     0,
     403,   404,     0,   743,     0,   532,     0,     0,   254,   481,
     482,   483,     0,     0,   364,   365,     0,     0,     0,     0,
       0,   769,     0,  1572,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,     0,  1288,     0,
    1310,     0,   817,     0,     0,     0,     0,     0,   533,  1413,
     535,     0,  2442,     0,  2022,     0,     0,     0,     0,  1905,
     277,  1293,     0,     0,   287,     0,     0,   536,     0,   533,
     537,   535,     0,     0,     0,     0,  2471,     0,  2046,     0,
       0,  1931,     0,  1314,     0,     0,     0,     0,   536,     0,
       0,   537,     0,     0,   951,     0,   202,   203,   204,   205,
    1439,   207,     0,   209,   357,     0,   224,     0,     0,   225,
       0,   227,     0,   229,     0,     0,  1790,     0,     0,     0,
    1420,     0,     0,     0,  2118,     0,     0,   342,   343,   344,
     901,   345,     0,     0,     0,     0,     0,     0,  2104,     0,
       0,     0,     0,  1446,     0,   917,     0,     0,   992,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,   932,
     224,  1506,     0,   225,   226,   227,   228,   229,   230,     0,
    1897,  2137,     0,  1924,     0,   531,     0,   202,   203,   204,
     205,     0, -1844,     0,   209,     0,     0,   268,     0,   269,
     974,     0,   227,   228,  1535,     0,  1564,     0,     0,     0,
       0,     0,     0,     0,     0,   361,   362,   363,   364,  2535,
     366,  2566,  2030,  2446,  2054,     0,   269,     0,   501,     0,
    2185,   481,   482,   483,     0,  1509,     0,  1538,  1566,     0,
       0,     0,   532,     0,     0,     0,     0,     0,     0,     0,
       0,  1596,  2475,  1620,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   403,   404,     0,     0,     0,   532,
    1035,     0,   364,   365,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2115,     0,     0,     0,     0,  1598,  1622,
       0,     0,  1514,     0,  2108,     0,     0,  2141,     0,   364,
     365,     0,     0,     0,     0,     0,   533,  2767,   535,     0,
       0,     0,  2148,     0,     0,     0,     0,     0,     0,     0,
       0,  1543,     0,     0,     0,   536,     0,     0,   537,     0,
       0,     0,     0,   533,     0,   535,  1692,     0,  2803,     0,
       0,     0,   341,     0,     0,   203,   204,     0,  2305,   207,
       0,   209,   536,     0,   224,   537,     0,   225,   226,   227,
     228,   229,   230,     0,  1713,     0,     0,     0,     0,  2189,
    1694,     0,     0,     0,     0,   342,   343,   344,     0,   345,
       0,     0,  2151,     0,     0,     0,     0,  1786, -1846,     0,
       0,     0,     0,     0,     0,     0,     0,   628,     0,     0,
     649,     0,   668,     0,     0,     0,     0,     0,  1793,  2630,
       0,     0,     0,     0,     0,     0,     0,     0,  1182,     0,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,     0,     0,   225,   226,   227,   228,   229,
     230,  1893,     0,     0,  1920,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   343,   344,     0,   345,     0,     0,
       0,   269,     0,     0,     0,   739,     0,     0,     0,     0,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,   766,  2442,   225,   226,   227,   228,   229,
     230,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,     0,     0,   342,   343,   344,  2446,   345,     0,  2475,
    2022,   269,     0,  2471,     0,     0,     0,     0,     0,     0,
       0,  1900,     0,  1288,     0,   244,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,  2046,
       0,     0,     0,  1927,  2767,  1310,   359,     0,     0,   403,
     404,     0,     0,     0,     0,  2104,     0,     0,  2137,     0,
       0,     0,     0,     0,   817,     0,     0,  1014,  2763,     0,
     203,   204,     0,     0,   207,     0,   209,  2535,     0,   224,
    2803,     0,   225,     0,   227,   228,   229,   614,   634,     0,
     654,   671,   685,   698,     0,   713,     0,     0,     0,  2799,
     342,   343,   344,     0,   345,     0,     0,     0,  2566,   531,
       0,   202,   203,   204,   205,     0,   279,     0,   209,   744,
       0,   268,     0,     0,     0,     0,   227,   228,   244,     0,
    2185,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,   258,  2714,     0,     0,     0,     0,     0,
     269,   532,     0,     0,  1420,     0,     0,     0,     0,     0,
       0,     0,     0,   820,     0,     0,     0,     0,     0,     0,
       0,   901,     0,     0,  2025,     0,  2049,     0,  1446,  1905,
       0,   364,   365,  2305,     0,     0,     0,     0,   403,   404,
       0,     0,     0,   532,  2717,   306,     0,     0,   917,     0,
     932,     0,     0,  1293,     0,     0,  1931,     0,     0,     0,
       0,     0,     0,     0,     0,   533,     0,   535,     0,     0,
       0,     0,   974,   364,   365,     0,     0,     0,     0,  1314,
       0,     0,     0,     0,   536,  2111,     0,   537,     0,     0,
       0,     0,  2767,   359,  1509,  2803,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     0,   533,   224,   535,
       0,   225,   226,   227,  2144,   229,   230,  2442,     0,     0,
    2471,     0,     0,  1538,     0,     0,   536,     0,     0,   537,
     951,     0,   202,   203,   204,   205,     0,   207,     0,   209,
       0,  1575,   224,     0,   903,   225,     0,   227,     0,   229,
       0,  1566,     0,     0,  2454,  2763,  2030,     0,     0,     0,
       0,     0,     0,   342,   343,   344,     0,   345,     0,     0,
       0,     0,  1035,     0,     0,     0,  2192,     0,  2483,     0,
    2054,  2535,     0,  2198,     0,  1598,     0,     0,     0,     0,
       0,  2799,     0,   992,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   224,     0,     0,  1622,     0,
     227,   228,   229,     0,     0,     0,     0,  2566,     0,   531,
       0,   202,   203,   204,   205,   977,   279,     0,   209,     0,
       0,   224,     0,     0,     0,   280,   227,   228,   229,     0,
    2115,   361,   362,   363,   364,   417,   366,   418,     0,   419,
       6,     0,   420,     9,   421,     0,    12,   481,   482,   483,
       0,   280,    15,  1514,     0,     0,     0,     0,  1013,  1038,
       0,     0,     0,  2148,    17,    18,     0,   532,     0,     0,
       0,     0,     0,  1694,    19,   341,     0,   202,   203,   204,
     205,     0,   207,  2307,   209,     0,  1543,   224,   403,   404,
     225,     0,   227,   532,   229,     0,     0,   364,   365,     0,
       0,  2543,     0,  2574,   422,     0,    21,     0,   342,   343,
     344,     0,   345,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,   364,   365,     0,     0,     0,     0,   614,
       0,   533,   423,   535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2763,  1475,     0,  2799,     0,     0,     0,
     536,     0,   634,   537,   403,   404,     0,   533,     0,   535,
       0,     0,     0,   531,  1793,   202,   203,   204,   205,     0,
     279,   614,   209,   654,     0,     0,   536,     0,     0,   537,
      25,   228,     0,     0,     0,     0,  1182,     0,     0,     0,
       0,     0,   671,     0,     0,     0,   424,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2153,     0,   685,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,     0,   698,   224,     0,     0,   225,   226,   227,
     228,   229,   230,  2200,     0,     0,  1185,     0,   713,     0,
      32,     0,   403,   404,     0,    33,     0,   532,     0,     0,
       0,     0,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   744,     0,     0,     0,     0,     0,     0,
       0,  1900,     0,     0,     0,     0,     0,   364,   365,     0,
       0,     0,     0,     0,     0,     0,     0,   244,     0,     0,
     770,   403,   404,     0,     0,  1288,     0,     0,  1927,     0,
       0,     0,     0,     0,     0,     0,     0,   258,     0,     0,
       0,   533,     0,   535,     0,     0,     0,     0,     0,     0,
       0,  1310,     0,  1905,     0,     0,  1931,     0,     0,     0,
     536,     0,     0,   537,     0,     0,     0,  1295,     0,  1316,
       0,   820,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1810,  1811,  1812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2454,   306,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,  2311,    14,    15,
       0,     0,  2030,  1420,     0,  2483,  2449,     0,  2025,     0,
      16,    17,    18,   359,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,  1423,
    2478,  2054,  2049,     0,     0,     0,     0,     0,     0,   903,
       0,     0,     0,     0,     0,     0,  2486,  2115,     0,     0,
    2148,    20,  1450,    21,  1446,     0,     0,     0,     0,     0,
    2775,     0,     0,     0,     0,     0,     0,     0,     0,  2543,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,    23,     0,  1937,     0,     0,     0,     0,     0,
       0,  2811,  2111,     0,  1945,  1946,     0,  1947,     0,   977,
    2574,   531,     0,   202,   203,   204,   205,     0, -1844,     0,
     209,     0,     0,   268,     0,  1509,     0,     0,   227,   228,
       0,    24,     0,     0,     0,  2144,     0,    25,     0,  1976,
    1977,    26,    27,  1981,  1516,     0,  1545,  1570,   237,     0,
     252,     0,   269,    28,     0,     0,     0,  1013,  1538,   286,
    1566,   304,     0,     0,     0,     0,     0,     0,   353,   351,
       0,     0,     0,  2538,     0,  2569,     0,     0,     0,  1038,
     500,     0,     0,     0,  2192,     0,     0,     0,     0,     0,
     403,   404,    29,    30,    31,   532,     0,    32,     0,     0,
       0,     0,    33,     0,     0,  1598,     0,  1622,     0,     0,
       0,   626,     0,   647,   667,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,     0,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,   735,   733,   225,   226,   227,   228,   229,   230,     0,
       0,   237,     0,     0,     0,     0,     0,     0,     0,   533,
       0,   535,     0,   762,   760,     0,   252,     0,     0,  2454,
       0,     0,  2483,     0,     0,     0,     0,     0,   536,     0,
     784,   537,     0,  1731,  1742,   813,   811,     0,     0,     0,
    1694,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   286,  2307,     0,   614,     0,   634,  2775,     0,   654,
       0,   671,     0,   685, -1846,   698,     0,  1797,   304,     0,
     531,     0,   202,   203,   204,   205,     0,  1185,     0,   209,
       0,     0,   268,  2543,     0,     0,     0,   227,   228,     0,
       0,  1793,   713,  2811,     0,     0,     0,     0,     0,     0,
    1162,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,   269,   224,     0,     0,   353,   351,   227,   228,  2574,
       0,     0,     0,     0,   744,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   770,     0,     0,  1900,     0,     0,  1927,   403,
     404,     0,     0,     0,   532,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   900,     0,   224,
       0,   931,   225,   226,   227,   228,   229,   230,     0,     0,
    1907,     0,  1295,     0,   364,   365,     0,     0,  2449,     0,
    2230,  2231,     0,     0,     0,     0,     0,     0,   269,     0,
       0,     0,  1933,     0,  1316,     0,     0,     0,     0,     0,
       0,   361,   362,   363,  2025,     0,   366,  2478,   533,     0,
     535,     0,     0,   820,     0,     0,     0,   481,   482,   483,
       0,     0,     0,     0,     0,     0,     0,   536,     0,     0,
     537,     0,     0,  2049,     0,     0,     0,   970,   968,     0,
       0,     0,     0,     0,   500,  2775,     0,     0,  2811,  2111,
       0,     0,  2144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2770, -1846,     0,     0,     0,     0,     0,     0,
       0,  2538,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1031,  1029,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2806,     0,     0,     0,     0,     0,     0,
       0,     0,  2569,  1423,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     903,     0,     0,  2032,  2192,  2056,     0,  1450,  2086,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,     0,     0,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,     0,     0,     0,     0,  2356,     0,     0,
       0,   342,   343,   344,     0,   345,     0,     0,     0,   269,
       0,   977,     0,     0,     0,   626,     0,  2307,     0,     0,
       0,     0,     0,  2379,  2117,     0,     0,     0,     0,     0,
    2385,     0,     0,  1516,     0,     0,   647,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,     0,
       0,     0,   532,  2150,     0,   667,     0,     0,     0,     0,
       0,     0,  1545,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   683,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,   365,     0,     0,     0,     0,     0,     0,
    1570,     0,     0,     0,     0,     0,     0,     0,     0,  1181,
       0,  2449,     0,     0,  2478,     0,  2403,     0,  1013,     0,
       0,  1038,     0,     0,     0,  2197,   533,     0,   535,     0,
       0,     0,     0,     0,     0,   735,   733,     0,     0,     0,
       0,     0,     0,     0,     0,   536,     0,     0,   537,  2770,
    2418,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   762,   760,     0,  2425,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2538,     0,     0,     0,     0,
     252,     0,     0,     0,     0,  2806,     0,     0,     0,   784,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1286,  2569,  1308,   813,   811,  2086,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,     0,   224,     0,     0,
     225,   226,   227,   228,   229,   230,   286,     0,     0,     0,
     304,     0,     0,     0,     0,     0,     0,     0,   342,   343,
     344,     0,   345,     0,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,   224,     0,  1731,   225,
     226,   227,   228,   229,   230,   353,   351,     0,     0,  1742,
       0,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,  1416,  1414,   224,     0,   269,   225,   226,   227,   532,
     229,   230,   900,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1442,  1440,     0,     0,     0,     0,
       0,     0,   269,  1797,     0,     0,     0,     0,     0,   364,
     365,   931,     0,   403,   404,     0,     0,     0,   532,     0,
       0,     0,     0,     0,     0,  1185,     0,  2770,     0,     0,
    2806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   970,   968,   533,     0,   535,     0,     0,   364,   365,
       0,  2583,  2584,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   536,     0,     0,   537,     0,     0,     0,     0,
     500,     0,     0,     0,  2603,     0,     0,  1507,     0,  1536,
    1565,     0,   533,     0,   535,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   536,     0,     0,   537,     0,     0,     0,     0,     0,
    1907,  1031,  1029,     0,     0,   242,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     0,   288,     0,     0,     0,
       0,  1621,     0,     0,  1295,     0,   358,  1933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1316,     0,     0,     0,     0,     0,     0,   992,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,   631,   224,
     651,   669,   225,   226,   227,   228,   229,   230,     0,     0,
       0,     0,     0,  2664,     0,  2666,  2667,  2668,  2669,  2670,
       0,     0,     0,     0,     0,     0,     0,     0,   269,   742,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2688,
       0,   768,  1423,   256,     0,  2456,     0,  2032,     0,   626,
       0,  2693,   647,     0,   667,     0,   683,     0,     0,  1789,
    1787,   532,     0,   818,     0,     0,     0,     0,  2702,  2485,
    1181,  2056,     0,     0,     0,  2707,     0,     0,   288,  2712,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,   365,  1450,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,   224,     0,     0,     0,
       0,   227,   228,   229,     0,     0,   735,   733,     0,     0,
       0,     0,     0,     0,     0,   533,     0,   535,     0,     0,
       0,  2117,     0,     0,   762,   760,   280,     0,     0,     0,
       0,     0,     0,   358,   536,     0,  2720,   537,     0,   238,
       0,   253,     0,     0,  1516,     0,     0,     0,     0,     0,
     784,     0,     0,     0,  2150,     0,     0,     0,     0,     0,
     352,     0,  1896,  1894,     0,  1286,     0,     0,   532,     0,
       0,     0,     0,     0,     0,     0,     0,  1545,     0,  1570,
       0,     0,     0,     0,  1923,  1921,     0,  1308,   933,     0,
       0,     0,  2545,     0,  2576,     0,     0,     0,   364,   365,
       0,     0,   627,  2197,   648,   813,   811,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   533,   734,   535,     0,     0,     0,     0,     0,
       0,     0,   238,     0,     0,  2828,     0,  2830,     0,     0,
       0,   536,     0,     0,   537,   761,   355,   253,     0,     0,
    2841,     0,     0,     0,     0,   975,     0,     0,     0,     0,
       0,     0,   783,     0,     0,     0,   356,   812,     0,     0,
       0,     0,   531,     0,   202,   203,   204,   205,     0,   279,
       0,   209,     0,     0,   224,  1416,  1414,     0,     0,   227,
     228,   229,     0,     0,     0,     0,     0,     0,     0,  1037,
       0,     0,     0,   900,     0,     0,  2023,     0,  2047,  1442,
    1440,     0,     0,     0,   280,     0,     0,     0,     0,   737,
       0,     0,  2890,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   931,  1731,     0,  1742,     0,     0,     0,   738,
       0,   764,     0,     0,     0,     0,     0,   352,  2929,     0,
    1797,   403,   404,   970,   968,     0,   532,     0,   785,     0,
       0,   765,     0,   815,     0,     0,  2107,  2105,     0,     0,
       0,     0,     0,     0,     0,     0,  1507,     0,     0,     0,
       0,     0,     0,   816,     0,     0,   364,   365,     0,     0,
       0,     0,   631,     0,     0,  2140,  2138,     0,     0,     0,
       0,     0,     0,     0,  1907,  1536,     0,  1933,     0,     0,
       0,     0,     0,   651,     0,     0,     0,     0,     0,     0,
     533,     0,   535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   669,  1565,     0,     0,     0,     0,     0,   536,
       0,     0,   537,   355,     0,     0,     0,  2456,     0,     0,
       0,     0,     0,  1031,  1029,     0,     0,  2188,  2186,     0,
    2960,     0,  2962,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2032,     0,  2966,  2485,     0,     0,   969,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
    1621,     0,   224,     0,     0,   225,   226,   227,     0,   229,
     230,     0,  2056,   742,     0,     0,  2981,     0,     0,     0,
       0,     0,     0,   342,   343,   344,     0,   345,  2117,     0,
       0,  2150,     0,  1030,     0,     0,     0,   242,     0,     0,
     768,  2777,     0,     0,     0,     0,     0,     0,     0,     0,
    2545,     0,     0,     0,     0,     0,     0,   256,     0,  1014,
       0,   202,   203,   204,   205,     0,   207,     0,   209,     0,
       0,   224,  2813,     0,   225,     0,   227,   228,   229,     0,
       0,  2576,     0,     0,     0,   972,     0,  1291,     0,  1312,
       0,   818,   342,   343,   344,     0,   345,     0,     0,     0,
     269,     0,     0,  2197,     0,   973,     0,     0,     0,     0,
       0,     0,     0,   288,     0,     0,     0,     0,     0,     0,
    3035,     0,     0,     0,     0,     0,   627,     0,     0,  1033,
       0,     0,     0,     0,     0,     0,     0,     0,   403,   404,
       0,     0,     0,   532,     0,     0,     0,   648,     0,  1034,
       0,     0,     0,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1789,  1787,     0,     0,  1421,
       0,     0,     0,   364,   365,     0,     0,     0,   591,   201,
     202,   203,   204,   205,   206,   207,   208,   209,  1181,     0,
     224,     0,  1447,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,     0,     0,     0,     0,   533,   933,   535,
       0,   342,   343,   344,     0,   345,     0,     0,     0,   269,
       0,     0,     0,     0,     0,     0,   536,     0,     0,   537,
       0,     0,     0,     0,     0,     0,     0,   734,     0,   975,
    2456,     0,   531,  2485,   202,   203,   204,   205,     0,   279,
       0,   209,     0,     0,   268,     0,     0,     0,   784,   227,
     228,   238,     0,     0,   761,     0,     0,     0,     0,     0,
       0,     0,  1896,  1894,  1512,     0,  1541,  1568,  2777,     0,
       0,   253,     0,   269,     0,     0,     0,     0,     0,     0,
       0,   783,     0,     0,     0,     0,     0,  1286,     0,  1923,
    1921,     0,     0,     0,  2545,     0,     0,     0,     0,  1037,
       0,  1287,     0,  1309,  2813,   812,     0,     0,     0,     0,
       0,   403,   404,  1308,     0,     0,   532,     0,  1624,     0,
       0,     0,     0,   737,     0,     0,     0,     0,     0,     0,
    2576,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   738,     0,     0,   364,   365,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,     0,     0,
     765,     0,     0,     0,     0,     0,     0,   785,     0,     0,
     533,     0,   535,  1415,  1416,  1414,     0,  2445,  2443,     0,
    2023,     0,     0,     0,     0,     0,     0,     0,     0,   536,
       0,   815,   537,     0,     0,     0,  1441,     0,     0,     0,
       0,  2474,  2472,     0,  2047,     0,     0,     0,     0,     0,
       0,   816,     0,     0,     0,     0,   631,     0,     0,   651,
       0,   669,     0,     0,     0,  1442,  1440,  1795,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   969,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,     0,     0,  2777,     0,     0,  2813,
       0,     0,     0,  2107,  2105,     0,     0,     0,     0,  1418,
       0,     0,     0,   356,     0,     0,     0,     0,  1508,     0,
    1537,     0,     0,     0,   742,     0,     0,  1507,     0,  1419,
       0,     0,  1444,     0,     0,     0,  2140,  2138,     0,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1445,  1030,     0,     0,     0,     0,     0,     0,
    1536,     0,  1565,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2536,     0,  2567,     0,   972,
    1903,     0,  1291,     0,     0,  2188,  2186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   973,
       0,     0,  1929,     0,  1312,     0,     0,     0,     0,  1621,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   818,     0,     0,     0,     0,  1768,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,     0,     0,   225,     0,   227,   228,   229,     0,  1033,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   342,   343,   344,     0,   345,     0,     0,     0,  1034,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     627,     0,   224,   648,     0,   225,   226,   227,   228,   229,
     230,  1788,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   343,   344,     0,   345,     0,     0,
       0,   269,     0,  1421,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2028,     0,  2052,     0,  1447,     0,   361,
     362,   363,  1789,  1787,   366,     0,     0,     0,   734,   403,
     404,     0,     0,     0,     0,   481,   482,   483,     0,   933,
       0,     0,     0,     0,     0,     0,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   975,     0,     0,     0,     0,     0,  1791,     0,     0,
       0,     0,   783,     0,  2114,     0,  1896,  1894,     0,  1923,
    1921,     0,     0,  1512,  1895,     0,  1287,  1792,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2147,     0,     0,  1922,     0,  1309,     0,
       0,     0,  1541,     0,     0,     0,     0,     0,     0,  2445,
    2443,     0,     0,     0,   737,     0,     0,   812,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1568,     0,   764,     0,   738,     0,  2023,     0,  2474,  2472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1037,   765,     0,     0,  2194,     0,     0,   785,     0,
       0,     0,     0,     0,     0,  2047,     0,     0,     0,     0,
    1898,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2107,  2105,     0,  2140,  2138,     0,     0,  1624,     0,     0,
    1899,     0,  1925,  2766,  2764,     0,     0,     0,     0,     0,
       0,     0,     0,  2536,     0,     0,     0,  1415,     0,     0,
       0,     0,  1926,   815,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2802,  2800,     0,  2024,     0,  2048,
       0,  1441,     0,   816,  2567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   591,   201,   202,   203,   204,
     205,   206,   207,   208,   209,  2188,  2186,   224,     0,     0,
     225,   226,   227,     0,   229,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   969,     0,     0,   342,   343,
     344,     0,   345,     0,     0,     0,   269,     0,  2106,     0,
       0,     0,     0,     0,     0,     0,     0,  1508,     0,     0,
       0,     0,     0,  1418,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2139,     0,     0,
       0,     0,     0,  1419,     0,     0,  1537,  1444,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1445,     0,     0,
       0,     0,     0,  1795,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   972,     0,     0,     0,  1030,     0,     0,     0,  2187,
       0,     0,     0,     0,  2109,     0,     0,     0,     0,     0,
       0,   973,  2445,  2443,     0,  2474,  2472,     0,     0,     0,
       0,     0,     0,     0,  2110,     0,     0,     0,     0,     0,
       0,     0,     0,  2142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2766,  2764,     0,  2143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2536,     0,     0,
    1903,     0,     0,     0,     0,     0,  2802,  2800,     0,     0,
       0,  1033,     0,     0,     0,  2190,     0,     0,     0,     0,
       0,     0,     0,     0,  1291,     0,     0,  1929,     0,     0,
       0,  1034,     0,  2567,     0,  2191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1312,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1788,     0,     0,
       0,     0,  1421,     0,     0,  2452,     0,  2028,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2481,
       0,  2052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2766,  2764,
       0,  2802,  2800,  1447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     783,  2114,     0,  1791,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1895,     0,     0,     0,     0,     0,
       0,     0,     0,  1792,  1512,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2147,     0,     0,     0,  1287,     0,
       0,  1922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1541,     0,  1568,
       0,     0,     0,     0,  1309,     0,     0,     0,     0,     0,
       0,     0,  2541,     0,  2572,     0,     0,     0,     0,     0,
       0,     0,     0,  2194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   785,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1624,     0,     0,     0,
    1898,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1899,     0,     0,     0,     0,     0,  1415,  1925,     0,  2444,
       0,  2024,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1926,     0,     0,
       0,     0,     0,  2473,     0,  2048,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2106,     0,     0,     0,     0,
       0,     0,  1418,     0,     0,  2447,     0,     0,     0,     0,
    1795,     0,     0,     0,     0,     0,     0,     0,  1508,     0,
       0,     0,  1419,     0,     0,  2448,     0,     0,  2139,  2476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2477,
       0,  1537,     0,  1444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1903,     0,  2537,  1929,  2568,     0,
       0,     0,     0,  1445,     0,     0,     0,  2187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2452,     0,     0,
       0,  2110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2142,     0,     0,     0,     0,     0,
       0,     0,     0,  2028,     0,     0,  2481,     0,     0,     0,
       0,     0,     0,     0,  2143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2052,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2190,     0,     0,     0,     0,  2114,     0,
       0,  2147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2773,     0,  2191,     0,     0,     0,     0,     0,     0,
    2541,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,     0,     0,
     410,     0,  2809,     0,     0,   496,     0,     0,     0,     0,
       0,  2572,     0,     0,  1788,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2194,     0,   598,   621,     0,   642,   661,
     678,   692,     0,   707,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1895,     0,
       0,  1922,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1791,  2444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1792,     0,     0,     0,     0,     0,     0,  2024,     0,     0,
    2473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1898,     0,  2048,  1925,     0,     0,
    2452,     0,     0,  2481,     0,     0,     0,     0,     0,     0,
       0,     0,  2106,     0,  1899,  2139,     0,  1926,     0,     0,
       0,     0,     0,     0,     0,  2765,     0,     0,     0,     0,
       0,     0,     0,     0,  2537,     0,     0,  2447,  2773,     0,
       0,     0,     0,     0,   381,     0,     0,     0,     0,   385,
       0,     0,     0,     0,   414,     0,  2801,  2448,     0,   502,
       0,     0,     0,     0,  2541,  2568,  2476,     0,     0,     0,
       0,     0,   896,     0,  2809,   912,   926,     0,     0,     0,
     410,     0,     0,     0,     0,     0,  2477,  2187,     0,   613,
     633,     0,   653,   670,   684,   697,     0,   712,     0,     0,
    2572,     0,     0,     0,     0,     0,     0,     0,  2109,     0,
       0,  2142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2768,     0,     0,     0,     0,     0,     0,  2110,     0,
       0,  2143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2804,   964,     0,     0,     0,     0,     0,   496,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
    1056,     0,     0,  2191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2444,     0,     0,  2473,     0,     0,
       0,     0,     0,     0,     0,     0,  2773,     0,     0,  2809,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2765,     0,     0,     0,     0,   598,   385,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2537,     0,
     621,     0,     0,     0,     0,     0,   902,     0,  2801,   919,
     934,     0,     0,     0,   414,     0,     0,     0,   490,   598,
       0,   642,     0,     0,     0,     0,     0,   541,     0,     0,
    2447,     0,     0,  2476,  2568,     0,     0,     0,     0,     0,
     661,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2448,     0,     0,  2477,     0,     0,     0,   678,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2768,     0,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1176,     0,   707,   976,  2769,     0,
       0,     0,     0,   502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2804,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2805,     0,     0,     0,     0,     0,
    1012,     0,     0,     0,  1061,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2765,     0,     0,  2801,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1281,     0,  1303,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   613,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   633,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   613,     0,   653,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   887,     0,     0,     0,     0,
     381,     0,     0,     0,   670,     0,  2768,  1410,     0,  2804,
       0,     0,     0,     0,     0,     0,     0,   896,     0,     0,
       0,   684,     0,     0,     0,     0,  2769,     0,     0,  2805,
    1436,     0,   912,     0,     0,   697,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   926,     0,  1184,     0,
     712,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   958,   964,     0,     0,
       0,     0,   490,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   496,     0,     0,     0,     0,
       0,     0,  1502,     0,  1531,  1559,     0,     0,     0,   993,
    1015,     0,     0,  1043,     0,  1006,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1294,
       0,  1315,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1593,  1616,     0,     0,     0,
       0,     0,     0,     0,     0,  1056,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   385,     0,     0,     0,     0,     0,
       0,  1422,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   902,     0,     0,     0,     0,   550,     0,     0,     0,
    1710,     0,     0,     0,  1449,     0,   919,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     934,     0,   598,     0,   621,     0,     0,   642,     0,   661,
       0,   678,     0,   692,     0,  1782,   414,     0,     0,     0,
       0,     0,     0,     0,     0,  1176,     0,     0,     0,     0,
       0,   976,     0,     0,     0,     0,     0,     0,     0,     0,
     707,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,  1515,     0,  1544,  1569,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1012,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   542,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1601,
    1625,     0,     0,     0,     0,     0,     0,     0,  1889,  1061,
    1281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1916,     0,  1303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1715,     0,     0,   911,   925,     0,
    1401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     887,     0,     0,     0,     0,     0,   613,     0,   633,     0,
       0,   653,     0,   670,     0,   684,     0,   697,     0,  1796,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1184,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1410,     0,     0,   712,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   896,     0,
     958,  2018,     0,  2042,     0,  1436,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   912,     0,   926,   490,     0,
       0,     0,     0,     0,     0,  1489,     0,  1518,  1546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,   964,
       0,     0,  1055,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2100,     0,     0,   550,     0,     0,     0,     0,
    1015,  1502,  1906,     0,  1294,     0,     0,     0,     0,     0,
       0,     0,     0,   996,  1018,     0,     0,  1046,  1580,  1603,
       0,  2133,     0,     0,  1932,     0,  1315,     0,  1043,     0,
    1531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   541,     0,  1006,     0,     0,     0,
       0,     0,     0,  2182,     0,     0,     0,     0,     0,     0,
       0,     0,  1593,     0,   994,  1016,     0,     0,  1044,     0,
       0,     0,  1084,  1697,     0,     0,     0,     0,     0,     0,
       0,   542,     0,     0,     0,  1616,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   558,     0,
       0,  1056,     0,     0,     0,  1422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   902,     0,     0,  2031,     0,  2055,     0,  1449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   919,
       0,   934,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2302,     0,     0,   976,     0,     0,     0,     0,     0,  1710,
       0,     0,     0,     0,     0,     0,  2116,     0,     0,     0,
       0,     0,     0,     0,     0,  1515,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2149,     0,     0,     0,     0,
       0,     0,     0,     0,  1544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1782,  1569,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1012,     0,     0,  1176,     0,     0,     0,  2196,     0,     0,
       0,     0,     0,     0,     0,     0,  1601,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1625,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1061,     0,     0,     0,     0,
       0,     0,  1435,     0,   911,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   925,     0,
       0,     0,     0,     0,  1401,     0,     0,     0,  1889,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   887,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1281,     0,     0,  1916,     0,     0,     0,     0,
       0,     0,     0,     0,  2310,     0,     0,   554,     0,     0,
       0,     0,     0,  1715,     0,     0,     0,     0,  1303,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   630,
       0,     0,   958,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2087,     0,     0,     0,     0,
       0,     0,     0,     0,  1489,     0,     0,     0,     0,  1492,
     741,  1521,  1549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   996,     0,  2120,     0,     0,  1592,  1615,     0,
       0,     0,     0,  1518,     0,  1796,     0,  1055,     0,     0,
    1410,     0,     0,  2438,  1018,  2018,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1184,     0,     0,
       0,  1546,  1583,  1606,     0,     0,     0,  2467,     0,  2042,
       0,     0,  1046,     0,     0,     0,     0,     0,     0,   993,
       0,     0,  1015,   550,     0,     0,  2169,     0,     0,     0,
    1490,  1436,  1519,  1547,     0,  1580,     0,     0,     0,     0,
       0,     0,     0,   994,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,     0,     0,     0,     0,  1603,     0,
       0,     0,     0,     0,     0,  1016,     0,     0,     0,  2100,
       0,     0,     0,     0,  1043,     0,     0,     0,     0,     0,
       0,     0,  1906,  1581,  1604,     0,     0,  1700,     0,     0,
       0,     0,  1502,  1044,     0,     0,     0,     0,     0,     0,
       0,     0,  2133,     0,     0,     0,  1294,     0,     0,  1932,
       0,     0,     0,     0,     0,     0,  1638,  1647,     0,     0,
       0,     0,  1084,     0,     0,  1531,     0,  1559,     0,     0,
       0,     0,  1315,     0,     0,     0,     0,     0,     0,   542,
    2531,   558,  2562,  2287,     0,     0,     0,     0,     0,     0,
       0,  2182,  1697,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1698,     0,
       0,     0,  1593,     0,  1616,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1422,     0,     0,  2455,     0,  2031,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2484,     0,  2055,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1011,
    1036,     0,     0,  1060,     0,  1449,     0,  1089,     0,     0,
       0,     0,     0,     0,     0,     0,   554,     0,     0,  2302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1710,     0,     0,     0,     0,
       0,     0,     0,  2116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1782,     0,
       0,     0,     0,     0,     0,     0,  1515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   630,     0,     0,     0,     0,     0,  1544,
       0,  1569,     0,  2016,     0,  2040,     0,  1435,     0,     0,
       0,     0,  1889,     0,  2544,  1916,  2575,     0,     0,     0,
       0,     0,     0,     0,     0,  2196,     0,   911,     0,   925,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1601,     0,  1625,     0,
       0,     0,     0,     0,     0,  2438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1183,     0,     0,
       0,  2018,     0,     0,  2467,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2090,
       0,     0,     0,  1401,   741,     0,     0,     0,  1492,     0,
    2042,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2100,     0,  2123,  2133,
       0,     0,     0,     0,     0,     0,     0,  1521,     0,  2759,
       0,     0,     0,  2310,     0,     0,     0,     0,  2531,     0,
       0,     0,     0,     0,     0,  2181,     0,     0,     0,  1715,
       0,     0,     0,     0,  1592,  1549,     0,     0,     0,     0,
    2795,     0,     0,     0,     0,     0,     0,     0,  1290,  2562,
    2088,     0,  1796,   996,     0,     0,  1018,  1615,     0,  1490,
    2172,     0,  2087,     0,     0,     0,     0,     0,     0,  1583,
       0,  2182,     0,  1055,     0,     0,     0,     0,     0,  2121,
       0,     0,     0,     0,     0,  1489,     0,     0,  1519,     0,
       0,     0,  1606,     0,     0,  2120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1906,     0,  1046,  1932,
       0,     0,     0,     0,     0,     0,  1547,     0,  1518,     0,
    1546,     0,     0,     0,  2302,     0,     0,     0,     0,     0,
       0,     0,     0,  2516,   994,  2547,     0,  1016,     0,     0,
       0,  2170,  2301,     0,  2169,     0,     0,     0,     0,  2455,
    1581,  1709,     0,     0,     0,     0,   596,   619,     0,   640,
     659,   676,   690,     0,   705,  1580,     0,  1603,     0,     0,
       0,     0,     0,  1604,     0,  2031,     0,  2290,  2484,     0,
       0,     0,     0,     0,     0,     0,  1700,     0,  1460,  1044,
    1462,  1468,  1470,     0,     0,     0,     0,     0,  1638,     0,
       0,     0,     0,     0,  2055,     0,     0,  1647,  2438,     0,
       0,  2467,     0,     0,     0,     0,     0,  1084,     0,     0,
    2116,     0,     0,  2149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2776,     0,  1511,     0,  1540,  1567,     0,
       0,     0,  2544,     0,     0,     0,  2759,     0,  1011,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2288,     0,
       0,     0,  2287,     0,  2812,     0,     0,  1698,     0,     0,
    1036,     0,  2531,  2575,     0,     0,     0,     0,  1697,     0,
       0,     0,  2795,     0,     0,     0,     0,     0,  1599,  1623,
       0,     0,     0,     0,     0,  2196,     0,     0,  1060,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1642,  1651,     0,     0,     0,     0,  1089,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   554,     0,     0,     0,  2310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1714,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   630,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1794,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2455,     0,     0,  2484,     0,     0,     0,     0,
       0,     0,     0,     0,  2759,     0,     0,  2795,     0,     0,
       0,     0,     0,     0,     0,  2436,     0,  2016,     0,     0,
       0,     0,     0,     0,     0,   741,     0,     0,     0,  2087,
    2776,     0,  2120,     0,     0,     0,     0,     0,     0,  2465,
       0,  2040,  2744,     0,     0,     0,     0,  1004,     0,     0,
       0,  2516,     0,     0,     0,     0,  2544,     0,     0,     0,
       0,     0,     0,  1435,     0,     0,  2812,     0,     0,     0,
       0,     0,     0,  2780,     0,     0,     0,     0,     0,     0,
       0,  1902,  2547,  1290,     0,     0,     0,     0,     0,     0,
       0,     0,  2575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   596,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2090,     0,     0,     0,
       0,   619,     0,     0,     0,     0,     0,   597,   620,     0,
     641,   660,   677,   691,     0,   706,     0,  2287,     0,  1492,
     596,     0,   640,     0,     0,     0,     0,     0,     0,  2123,
       0,     0,  2529,     0,  2560,     0,     0,     0,     0,     0,
       0,   659,     0,  2181,     0,     0,     0,     0,     0,     0,
       0,     0,  1521,     0,  1549,     0,     0,     0,   676,     0,
       0,     0,     0,     0,  1592,     0,  1615,  2519,     0,  2550,
       0,     0,   690,     0,     0,     0,     0,  2088,  2172,     0,
       0,     0,     0,     0,     0,  1174,     0,   705,  2776,     0,
       0,  2812,     0,     0,  2027,     0,  2051,     0,     0,  1583,
    1490,  1606,     0,     0,   819,     0,     0,     0,     0,     0,
    2121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2064,     0,     0,     0,     0,
       0,     0,  1468,  1519,     0,  1547,     0,     0,     0,  2744,
       0,     0,     0,     0,     0,     0,     0,     0,  2517,     0,
    2548,     0,     0,     0,     0,  2113,     0,     0,     0,  2170,
       0,  2301,     0,     0,  1511,  2516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2780,     0,  1709,     0,     0,
    1581,     0,  1604,     0,  2146,     0,  1279,     0,  1301,     0,
       0,     0,  1638,  1540,     0,  1647,  2290,     0,     0,     0,
       0,  2547,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1700,     0,     0,     0,     0,     0,     0,     0,
       0,  1567,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   918,  1011,
       0,     0,  1036,     0,     0,     0,  2193,     0,     0,     0,
       0,     0,     0,     0,     0,  1599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2288,  1623,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1698,  1060,     0,     0,  2436,     0,     0,
       0,     0,     0,  1642,     0,     0,     0,     0,     0,     0,
       0,     0,  1651,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1089,  2016,     0,     0,  2465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2744,  1005,     0,
    2780,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2040,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2308,     0,     0,     0,     0,     0,     0,
       0,     0,  1714,  1500,     0,  1529,  1557,     0,     0,     0,
       0,  2757,     0,     0,     0,     0,  1004,     0,   599,   622,
    2529,   643,   662,   679,   693,     0,   708,     0,     0,     0,
       0,     0,     0,  2090,     0,     0,  2123,     0,     0,   597,
       0,     0,  2793,     0,     0,     0,  2747,     0,     0,     0,
       0,  2560,     0,     0,     0,  2519,     0,     0,     0,     0,
       0,     0,   620,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2181,  1794,     0,     0,  2783,     0,     0,
       0,   597,     0,   641,     0,     0,  2550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1183,     0,     0,     0,
       0,     0,   660,     0,     0,     0,     0,     0,  2172,     0,
       0,     0,     0,     0,  2088,     0,     0,  2121,     0,   677,
       0,     0,     0,     0,     0,     0,  2301,  2745,     0,     0,
       0,     0,     0,   691,     0,     0,  2517,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1175,     0,   706,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2781,     0,
       0,  2290,     0,   596,     0,   619,     0,  2548,   640,     0,
     659,     0,   676,     0,   690,     0,  1780,     0,     0,     0,
       0,  1902,     0,     0,     0,     0,  1174,     0,     0,  2170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   705,     0,     0,     0,  1290,     0,     0,     0,     0,
    2436,     0,     0,  2465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2288,     0,     0,     0,     0,  1280,  2757,  1302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1292,     0,
    1313,     0,   819,     0,  2529,     0,     0,     0,     0,     0,
       0,     0,     0,  2747,  2793,     0,     0,     0,     0,  1887,
       0,  1279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2451,     0,  2027,  2519,
    2560,  1914,     0,  1301,     0,     0,     0,     0,     0,  2783,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2480,     0,  2051,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2550,     0,     0,     0,  1007,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1468,  2745,     0,     0,     0,     0,     0,
       0,     0,     0,  1448,     0,   918,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2517,     0,  2113,     0,     0,     0,     0,     0,     0,     0,
    2781,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1511,     0,     0,     0,     0,
     599,     0,     0,     0,     0,  2146,  2548,     0,     0,     0,
       0,     0,     0,     0,  1501,     0,  1530,  1558,     0,     0,
       0,     0,  2014,   622,  2038,     0,  2757,  1005,  1540,  2793,
    1567,     0,     0,     0,     0,  1513,     0,  1542,     0,     0,
       0,     0,   599,  2540,   643,  2571,     0,     0,     0,     0,
       0,     0,     0,     0,  2193,     0,     0,     0,     0,     0,
       0,  2747,     0,   662,  2783,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1599,     0,  1623,     0,     0,
     679,     0,     0,  2098,     0,     0,     0,  1642,  1600,     0,
    1651,     0,  1500,     0,   693,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1177,     0,   708,
       0,     0,  2131,     0,     0,     0,     0,     0,     0,     0,
       0,  1529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2745,     0,     0,  2781,     0,     0,     0,  1557,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1004,     0,     0,
    1695,     0,  2308,     0,   597,     0,   620,     0,     0,   641,
       0,   660,     0,   677,     0,   691,     0,  1781,  1714,     0,
       0,     0,     0,     0,     0,     0,     0,  1175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1282,     0,
    1304,  1794,   706,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   999,  1021,
       0,     0,  1049,  1072,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1902,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1888,     0,  1280,     0,     0,     0,     0,     0,  2451,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1904,  1915,  1292,  1302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2027,     0,     0,  2480,     0,     0,
       0,     0,     0,  1930,     0,  1313,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2051,   819,     0,     0,     0,     0,     0,
       0,     0,  1780,     0,     0,     0,     0,     0,     0,  2113,
       0,     0,  2146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2772,     0,  1174,  1503,     0,  1532,  1560,     0,
       0,  2540,     0,     0,     0,     0,     0,     0,  1007,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2808,     0,     0,     0,     0,     0,     0,
       0,     0,  2571,     0,     0,     0,     0,   997,  1019,     0,
       0,  1047,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2017,  2193,  2041,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2029,     0,  2053,     0,  1448,  1887,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   918,     0,
       0,     0,     0,  1279,     0,     0,  1914,  2308,     0,     0,
       0,     0,     0,     0,  2099,     0,     0,     0,     0,     0,
       0,     0,     0,  1501,     0,     0,     0,     0,     0,  1301,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2132,  1513,     0,     0,     0,     0,     0,
       0,     0,  1530,     0,     0,   599,     0,   622,     0,     0,
     643,     0,   662,     0,   679,     0,   693,     0,  1783,     0,
       0,     0,     0,  1542,     0,     0,     0,     0,  1177,     0,
    1558,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2451,     0,   708,  2480,     0,     0,     0,  1005,     0,
       0,     0,     0,     0,  2434,     0,  2014,     0,   995,  1017,
       0,     0,  1045,  1069,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2195,     0,  2463,  2772,
    2038,     0,     0,     0,     0,  1600,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2540,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2808,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1890,     0,  1282,     0,     0,     0,     0,     0,     0,
    2098,  2571,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1917,     0,  1304,     0,     0,     0,     0,
       0,     0,     0,  1500,  1495,     0,  1524,  1552,     0,     0,
       0,     0,     0,  2131,     0,     0,     0,   999,     0,     0,
       0,     0,     0,  1695,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2309,     0,     0,  1529,     0,  1557,  1021,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2527,     0,  2558,     0,     0,     0,  1586,  1609,     0,
       0,     0,     0,     0,     0,     0,     0,  1049,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1072,     0,     0,     0,     0,     0,     0,
    1640,  1649,     0,  1781,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1175,     0,  2772,     0,     0,
    2808,     0,     0,     0,  2019,     0,  2043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1703,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2101,     0,     0,     0,     0,
       0,     0,     0,  1493,  1503,  1522,  1550,     0,     0,     0,
    1888,     0,     0,     0,     0,     0,   997,     0,     0,     0,
       0,     0,     0,     0,  2134,     0,     0,     0,     0,  1780,
       0,  1904,     0,  1532,  1280,     0,     0,  1915,  1019,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1292,  1584,  1607,  1930,     0,
    1302,  1560,     0,     0,     0,     0,  1047,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1007,
       0,  1313,     0,  1887,     0,     0,  1914,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2434,     0,     0,     0,
       0,     0,     0,     0,     0,  2437,     0,  2017,     0,     0,
       0,  1701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2014,     0,     0,  2463,  2453,     0,  2029,  2466,
       0,  2041,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1491,     0,  1520,  1548,     0,     0,
    2482,  2038,  2053,     0,     0,     0,     0,   995,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2098,     0,     0,
    2131,     0,     0,     0,  1448,     0,     0,     0,     0,  1017,
    2755,     0,     0,     0,     0,     0,     0,     0,     0,  2527,
       0,  2099,     0,     0,     0,     0,     0,  1582,  1605,     0,
       0,     0,     0,     0,     0,     0,     0,  1045,     0,     0,
       0,  2791,     0,     0,  1501,     0,     0,     0,     0,     0,
    2558,     0,     0,  1069,  2132,     0,     0,     0,     0,     0,
    1639,  1648,     0,     0,     0,  1513,   998,  1020,     0,     0,
    1048,     0,     0,     0,     0,     0,     0,  1530,     0,  1558,
       0,     0,     0,     0,  1783,     0,     0,     0,     0,     0,
       0,     0,  2530,     0,  2561,     0,     0,     0,  1542,     0,
       0,     0,     0,     0,     0,     0,  1177,     0,     0,     0,
       0,     0,  1699,  2542,  2093,  2573,     0,     0,     0,     0,
       0,     0,     0,  1495,  2195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2126,     0,  1600,     0,     0,     0,     0,
       0,     0,  1524,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1890,     0,     0,     0,     0,     0,     0,   999,     0,
       0,  1021,     0,     0,     0,  2175,     0,     0,     0,  2434,
       0,     0,  2463,     0,  1586,  1282,     0,     0,  1917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1695,     0,     0,     0,     0,     0,     0,  1609,     0,     0,
       0,  1304,  2309,     0,     0,     0,     0,  2755,     0,     0,
       0,     0,     0,  1049,     0,     0,     0,     0,  1072,     0,
    1781,     0,  1640,     0,     0,     0,     0,     0,     0,     0,
       0,  1649,     0,  2527,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2791,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2091,     0,     0,     0,     0,     0,  2558,
       0,     0,  1493,     0,  1888,     0,  2439,  1915,  2019,     0,
       0,     0,  2293,     0,     0,     0,     0,     0,     0,     0,
       0,  1703,  2124,     0,     0,  1904,     0,     0,  1930,     0,
    2468,  1522,  2043,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2437,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1550,
       0,     0,     0,     0,     0,     0,     0,     0,  2453,     0,
       0,     0,     0,  2017,     0,     0,  2466,   997,     0,     0,
    1019,     0,     0,     0,  2173,     0,     0,     0,     0,     0,
       0,     0,  2101,  1584,  2029,     0,     0,  2482,     0,     0,
       0,     0,  2041,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1503,  1607,     0,  2099,     0,
       0,  2132,     0,  2053,     0,  2134,     0,     0,     0,     0,
       0,  2758,  1047,     0,     0,  2755,     0,     0,  2791,     0,
    2530,     0,     0,     0,     0,     0,     0,     0,  1532,     0,
    1560,     0,  2774,     0,     0,     0,     0,     0,     0,     0,
       0,  2542,  2794,  2532,  2089,  2563,     0,     0,     0,     0,
       0,  2561,     0,  1491,     0,     0,     0,     0,     0,     0,
    2366,     0,     0,  2810,     0,     0,     0,     0,     0,     0,
       0,     0,  2573,  2122,     0,     0,     0,     0,     0,     0,
       0,  2291,  1520,     0,     0,     0,     0,     0,     0,     0,
    1701,     0,     0,     0,  2195,     0,     0,     0,     0,     0,
       0,     0,  1494,     0,  1523,  1551,     0,     0,     0,     0,
    1548,     0,     0,     0,     0,   998,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   995,     0,
       0,  1017,     0,     0,     0,  2171,     0,  1020,     0,     0,
       0,     0,     0,     0,  1582,     0,     0,  2309,     0,     0,
       0,     0,     0,     0,     0,  1585,  1608,     0,     0,     0,
       0,     0,     0,     0,     0,  1048,     0,  1605,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1045,     0,     0,     0,     0,  1069,     0,
       0,     0,  1639,     0,     0,     0,     0,     0,     0,     0,
       0,  1648,     0,     0,     0,     0,     0,     0,     0,     0,
    2437,  1783,     0,  2466,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2453,     0,     0,  2482,     0,     0,     0,     0,     0,
    1702,     0,     0,     0,     0,     0,     0,     0,  2758,     0,
       0,     0,  2289,     0,     0,     0,     0,     0,     0,     0,
       0,  1699,     0,     0,     0,  1890,     0,     0,  1917,  2774,
       0,     0,     0,     0,  2530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2794,     0,     0,     0,     0,     0,
       0,  2093,     0,     0,     0,  2542,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2810,     0,     0,  2439,     0,
    2561,     0,     0,     0,  1495,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2126,     0,     0,     0,     0,     0,
       0,  2573,     0,     0,  2019,     0,     0,  2468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1524,     0,  1552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2522,  2043,  2553,     0,     0,     0,     0,     0,
       0,     0,     0,  2175,     0,     0,     0,     0,     0,  2101,
       0,     0,  2134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2760,     0,  1586,     0,  1609,     0,     0,     0,
       0,  2532,     0,     0,     0,     0,  1640,     0,     0,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2796,     0,     0,     0,     0,     0,     0,
       0,     0,  2563,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2758,     0,     0,  2794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2774,     0,     0,
    2810,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2091,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1493,     0,     0,     0,  1703,     0,     0,
       0,     0,     0,  2124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1522,     0,  1550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2520,     0,  2551,     0,     0,     0,     0,     0,     0,
       0,     0,  2173,     0,  2366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1584,     0,  1607,     0,     0,     0,     0,
       0,  2439,     0,     0,  2468,     0,     0,     0,     0,     0,
       0,     0,  2092,     0,     0,     0,     0,     0,     0,     0,
       0,  1494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2760,
       0,  2125,     0,     0,     0,     0,     0,     0,     0,     0,
    1523,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2089,     0,     0,     0,  2532,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2796,     0,     0,  1551,     0,
       0,     0,     0,     0,  1491,     0,     0,     0,     0,     0,
    2291,     0,     0,     0,  2122,     0,   998,     0,     0,  1020,
       0,  2563,     0,  2174,     0,     0,  1701,     0,  2093,     0,
       0,  2126,  1585,     0,     0,     0,     0,  1520,     0,  1548,
       0,  2750,     0,     0,     0,     0,     0,     0,     0,     0,
    2522,     0,  2518,     0,  2549,  1608,     0,     0,     0,     0,
       0,     0,     0,  2171,     0,     0,     0,     0,     0,     0,
       0,  1048,  2786,     0,     0,     0,     0,     0,     0,     0,
       0,  2553,     0,     0,  1582,     0,  1605,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1639,     0,     0,  1648,
       0,     0,     0,  2175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2292,     0,     0,     0,     0,     0,     0,     0,     0,  1702,
       0,     0,     0,     0,     0,     0,  2293,  2760,     0,     0,
    2796,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2289,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1699,     0,     0,
       0,     0,     0,     0,     0,     0,  2366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2091,     0,     0,
    2124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2748,     0,     0,     0,     0,     0,     0,     0,     0,  2520,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2784,     0,     0,     0,     0,     0,     0,     0,     0,
    2551,     0,     0,     0,     0,     0,     0,     0,  2750,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2786,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2553,     0,     0,     0,     0,  2291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2089,     0,
       0,  2122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2746,     0,     0,     0,     0,     0,     0,     0,     0,
    2518,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2782,     0,     0,     0,     0,     0,     0,     0,
       0,  2549,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2171,     0,     0,     0,  2748,     0,     0,
       0,     0,     0,     0,     0,     0,  2750,     0,     0,  2786,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2520,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2784,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2551,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2092,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1523,     0,  1551,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2521,     0,  2552,     0,     0,     0,     0,     0,     0,     0,
       0,  2174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2746,     0,
       0,     0,  1585,     0,  1608,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2518,  2748,     0,     0,  2784,     0,
       0,     0,     0,     0,  2782,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2549,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1702,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2746,     0,     0,  2782,
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
       0,     0,     0,     0,     0,     0,  2092,     0,     0,  2125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2749,
       0,     0,     0,     0,     0,     0,     0,     0,  2521,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2785,     0,     0,     0,     0,     0,     0,     0,     0,  2552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2292,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,  2749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2521,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2785,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2552,     0,
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
       0,     0,     0,     0,  2749,     0,     0,  2785
};

static const yytype_int16 yycheck[] =
{
     129,   158,   131,   158,   158,  1669,   158,   158,   158,   158,
     139,   140,   158,   142,   143,   173,  1958,   173,  1128,   401,
     402,   150,   151,   883,   530,  1127,  1128,   156,  1128,  1323,
    1298,  1128,   161,   161,   526,  1127,  1128,  1137,  1274,  1136,
    1128,   170,   398,   143,   156,  1276,   161,  1135,   401,   161,
    1705,  1116,  1579,  1118,  1171,  1431,  1688,  1465,   195,  1526,
    1296,  1051,   191,   192,  1497,   194,   195,   196,   197,  1145,
     199,  1743,  1127,  1128,  1133,  1242,  1686,   988,  1080,   990,
     991,  2266,   161,  1588,   398,   593,  1517,  1689,  1722,  1645,
    1611,  1554,  1407,  1001,   223,   556,   539,  1067,  1777,   282,
     406,   309,   953,   232,   223,   805,  1733,   347,   161,  1884,
     858,   485,   616,   656,   727,   398,   245,   392,   247,   673,
     702,   391,  1911,   511,   795,  1636,   245,   687,  2095,  2035,
    2011,  2177,   754,  2128,   398,  2295,   299,  2368,   267,  2646,
    2647,   129,   271,   131,   526,  2636,  2637,  2431,   267,  1023,
    2555,   271,    23,   282,  2460,     4,     7,   908,  2524,     4,
       4,     4,    26,    27,    41,   479,     4,    34,    32,     4,
     299,    35,     4,   922,    33,   893,    40,    25,    32,  2788,
     309,    37,  2752,   247,    33,    14,    33,    72,    36,   232,
      33,    68,   138,   637,   142,   335,   479,    33,   211,   326,
      64,    33,   193,   138,   192,    32,   194,    33,   370,   309,
      26,    33,   165,    23,    30,   479,    26,    27,   347,    35,
      30,  3001,    32,   138,    40,    35,    42,    33,    38,    39,
      40,   781,    42,    43,   188,   223,    26,    27,   138,   185,
      30,   370,    32,    17,   232,    35,    56,    57,    58,    65,
      60,    41,    44,   104,    33,   189,   247,   245,    33,   247,
       4,    52,    53,    54,   109,   402,   111,   112,    23,   398,
     398,   217,   401,   402,   119,   120,   121,   406,  3058,   233,
     233,    26,    27,   398,    30,   233,    41,    32,    23,   401,
     402,   138,     8,   248,   406,   250,    41,   149,    41,   233,
     149,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   149,   247,    35,    33,   161,    38,    39,    40,   398,
      42,    43,   165,    68,   192,    68,   194,   195,   196,   197,
     165,   199,   247,     7,    56,    57,    58,    23,    60,   165,
      23,     0,    64,   149,  2953,   398,     4,   247,   233,    33,
     479,   479,   107,    59,   165,    41,   485,   485,    41,    75,
      18,   207,   208,    69,   479,   109,   233,   111,   112,   220,
     485,   218,   107,   485,   233,   119,   120,   121,   229,   256,
    2950,   235,   218,   138,   233,   256,   700,    33,   233,   233,
     233,   247,   256,   522,   523,   233,   218,   526,   233,   247,
     479,   233,   247,   249,   233,   213,   485,   233,   235,  2814,
     539,  2717,  2778,   165,   526,   165,   574,   700,   165,   575,
     247,   107,   233,    19,   107,   247,   479,   233,   163,   164,
    2714,   213,   485,  2618,   149,  2620,   700,    33,   193,   247,
     256,   233,   233,   101,   149,     4,   256,     5,     6,  2680,
      25,     9,   138,     5,     6,   138,   213,     9,   193,    11,
     247,    36,  2404,   250,   593,   247,   256,   160,   161,   162,
    2630,  2978,   249,  2980,    33,   221,   222,   223,   224,   225,
     226,   233,   228,   233,   169,   170,   233,   616,   247,   233,
     247,   250,   247,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   186,   187,    35,   635,   193,   637,   249,
    2505,   256,   247,     4,   207,   208,    26,    27,   233,   656,
      30,    73,    32,    75,   906,    35,   908,   656,    38,    39,
      40,  2577,    42,    43,   256,  2502,     4,   893,     8,     9,
     922,   247,    33,    38,   673,   249,     4,  1407,   233,  1041,
    1042,   186,     4,    33,   247,   908,   191,   192,   687,  1051,
      59,   247,    57,    58,   247,    33,    61,    62,    63,   883,
      69,   700,   700,   702,  1080,    33,  2457,     5,     6,   893,
    2486,    33,  3073,    66,    67,   700,  1497,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   985,   727,  1159,
     883,  1272,  2391,  1157,  1186,  1218,   881,   981,   727,   879,
     893,  1359,  1155,  2388,  1236,  1526,  1681,  1317,  1683,   883,
    1722,   700,   751,  1733,  1475,   754,   834,   867,   616,   893,
    1722,  1733,   938,  1733,  1126,   754,  1733,  1627,  1099,   953,
    1148,  1733,   771,  1554,   827,  1733,  1150,   700,  1884,   637,
    2177,  2323,  2324,  1655,  1097,  2334,  2311,  2213,  2066,  1041,
    1042,  2846,  1632,  2848,  1572,  2297,  1934,  1722,   831,  1051,
     953,  2343,   801,  2283,   803,  1911,   805,  1908,  1733,  2200,
    1756,  2057,  1799,  2317,  2151,  2118,   805,  1746,  1041,   953,
    2153,  2006,  2319,  2198,   823,  1862,  2298,  2128,   827,  2210,
    1451,  1575,   831,   823,  1453,   834,  1424,   771,   751,  1153,
     850,   724,  1262,   840,   876,     8,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   256,     6,    35,   249,
       9,    38,    39,    40,   834,    42,    43,  2679,   867,   727,
     247,   165,     4,   250,  1126,   166,   256,   876,   616,    56,
      57,    58,    30,    60,   883,   883,   105,   106,   107,   108,
     248,   256,   250,   751,   893,   893,   754,   166,   883,   637,
    1123,    33,    23,  2009,     4,     8,     9,   906,   893,   908,
      26,    27,   138,   771,  2969,   922,    32,   906,   656,    35,
      41,    23,   247,   922,    40,   250,   908,  2033,   155,   156,
     157,   158,   159,    33,   883,   673,   185,     4,   101,   938,
     922,    23,   249,   801,   893,   803,   186,   220,    64,   687,
     256,   191,   192,     7,   953,   953,   938,    45,    46,    41,
     883,   210,   211,   212,   702,    33,    33,    55,   953,   101,
     893,     6,   247,    30,     9,   250,   203,  1161,    23,     5,
       6,    26,   981,   981,   991,    30,   107,  1171,   249,   988,
      35,   990,   991,    38,     4,    40,   981,    42,   247,   981,
      33,   101,  1001,   166,   953,   107,   249,   145,  1161,   249,
     148,    56,    57,    58,   249,    60,   247,   138,  1171,   250,
     247,   249,   185,    33,  1023,   107,   247,  1161,   247,   250,
     953,   250,   981,   247,   166,  1042,   250,  1171,    73,  2978,
      75,  2980,  1041,  1042,    25,    26,    27,    28,   249,    30,
     247,    32,  1051,   250,   247,   249,   138,   250,   981,  1041,
    1042,   163,   164,   801,   249,   803,   166,   167,   168,  1051,
       8,     9,   193,   221,   222,   223,   224,   225,   226,   256,
     228,    26,    27,    28,   249,   185,  2620,   247,  1116,    33,
     250,   193,  1118,  2635,  2636,  2637,     8,     9,  1097,  2641,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     226,   193,    35,     5,     6,    38,    39,    40,    41,    42,
      43,   102,   103,   247,  1123,    33,   250,  1126,    19,    74,
     988,    22,   990,    56,    57,    58,   249,    60,   249,    30,
     247,    64,    33,   250,  1126,   215,   216,   186,  1155,  1148,
     249,  1150,   191,   192,  1153,   249,  1155,   249,  1157,   249,
    1159,   233,  1161,  1161,   221,   222,   223,   224,   225,   226,
     249,   228,  1171,  1171,   249,  1427,  1161,  1429,   247,  1431,
    2577,   250,    26,    27,   233,  2349,  1171,  1186,    32,   247,
     247,   185,   250,   129,   249,   131,   249,    41,  1424,  1451,
      33,  1453,   249,   139,  2505,   249,   142,   143,   247,   145,
     247,   256,  1161,   250,  2515,   151,   210,   211,   212,  1218,
     156,   249,  1171,  1407,    68,   161,  1588,   233,  1451,  1218,
      26,    27,   247,  2397,   170,   250,    32,  1236,  1161,    35,
    1424,   160,   161,   162,    40,  2546,   249,  1236,  1171,  1611,
      75,    76,    77,   247,  1407,   191,   192,   249,   194,   195,
     196,   197,   233,   199,   247,  1627,   247,   250,    64,   247,
      33,  1424,   250,  1407,   165,  1274,  2006,  1276,   247,  1655,
     247,   250,  2388,   250,   249,  2391,   249,   223,   207,   208,
    1424,  1475,  1150,   233,   213,  1153,   232,  1296,   249,  1298,
     220,    30,   233,    25,    26,    27,    28,   138,    30,   245,
      32,   247,  2846,   219,   247,    26,    27,   250,  1317,    30,
     247,    32,  1475,   250,    35,  2431,   233,  1579,  1317,    40,
      37,   267,   249,   256,  1696,   271,  1588,  2118,   249,  2319,
      23,  1475,  2277,  1705,  2279,  2317,   249,  2319,   247,  2319,
     233,   250,  2319,    64,  2460,  2317,   249,  2319,    41,  1611,
    1218,  2319,   249,   299,   249,  1588,   160,   161,   162,   249,
    2151,   247,  2153,   309,   250,  1627,   247,   249,  1236,   250,
     102,   103,    26,    27,   249,  2166,    30,  2168,    32,   249,
     326,    35,  2317,   249,  2319,   249,    40,   233,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1407,  1407,
     247,   248,  1150,   207,   208,  1153,  1274,  1155,  1276,  1157,
      64,  1159,  1407,   249,   107,  1424,  1424,    47,  1427,   249,
    1429,   249,  1431,   247,   370,  2977,   250,  2979,  1296,  1424,
    1298,   249,  1431,   249,  1696,   249,  1453,   247,  1186,    23,
     250,  2752,  1451,  1705,  1453,   138,   247,   247,  1407,   250,
     250,   247,   398,  1686,   250,   401,   402,   247,   248,  1451,
     406,  1453,   249,  1696,   249,  1424,  1475,  1475,   160,   161,
     162,   160,   161,   162,  1407,   247,   233,  2788,   250,  1488,
    1475,   249,   221,   222,  3036,   224,   225,   226,  1497,   228,
     249,  1424,   138,   186,   187,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   226,   249,    35,  1517,   185,
      33,   247,    40,    41,   250,   249,  1475,  1526,   207,   208,
     247,  3073,    33,   250,   213,  3077,   247,  3079,  1276,   105,
     106,   107,   108,   479,   210,   211,   212,  1554,   249,   485,
      26,    27,  1475,   249,    30,  1554,    32,   249,  3100,    35,
    1298,   249,    38,    39,    40,    41,    42,    43,   247,  1427,
      41,  1429,   247,  1572,     6,   250,  1575,    30,   247,   249,
    1579,   250,   226,   247,   248,   247,   522,   523,   250,  1588,
     526,  2646,  2647,  1777,    93,    94,    95,    96,    97,    98,
      99,   100,   249,   539,  1611,   250,  1588,   249,  2714,   249,
     185,  2717,  1611,   250,   249,  1799,   134,   135,   136,   249,
     249,   139,   249,   249,  1777,   113,   114,   115,  1627,  1611,
    1488,   256,   150,   151,   152,   210,   211,   212,   213,  1497,
      87,    88,   249,  1777,   249,  1627,  1799,   249,   249,  2950,
    1678,   249,  2953,  1679,   249,   249,  1684,   593,   249,  1517,
     160,   161,   162,   249,   223,  1799,   224,    30,  1526,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   225,
     616,   247,   248,    25,    26,    27,    28,  1686,    30,  1427,
      32,  1429,   226,    35,   160,   161,   162,  1696,    40,   635,
     143,   637,   145,   146,   147,   148,  1705,   207,   208,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   185,
     656,    35,    64,  1705,    38,    39,    40,    41,    42,    43,
     105,   106,   107,   108,   233,    87,    88,   673,   256,    91,
      92,   207,   208,  2524,   210,   211,   212,   247,   250,   233,
      64,   687,   181,   182,   183,   184,   249,  2009,   248,  2011,
     102,   103,   248,   250,   700,   233,   702,   250,   221,   222,
     223,   224,   225,   226,  2555,   228,   250,   247,  1777,  1777,
     256,  2033,   247,  2035,   197,   198,   199,   200,   201,   202,
     250,   727,  1777,   248,   247,   242,   243,   244,   249,   248,
    1799,  1799,     4,     5,     6,  2057,   253,   254,   255,    11,
     250,   250,   250,    15,  1799,   751,   250,   248,   754,   249,
     142,   143,  2006,   145,   146,   147,   148,   143,  1777,   145,
     146,   147,   148,   250,   247,   771,  2198,   249,  2200,   247,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1799,   250,    35,  2006,  1777,    38,   250,    40,    41,    42,
     155,   156,   157,   158,   159,   801,   248,   803,   249,   805,
     250,   248,  2006,    56,    57,    58,  1799,    60,   250,   247,
      26,   233,   248,   250,    30,  1884,    30,   823,   248,    35,
     242,   243,   244,   247,    40,   831,    42,   247,   834,   215,
     216,   253,   254,   255,   840,   247,   250,   248,   203,  1908,
       6,   248,  1911,    33,  2166,   250,  2168,   250,    33,    65,
     249,    25,    26,    27,    28,  2177,    30,   233,    32,   249,
     249,    35,   249,  2295,   247,  1934,    40,   248,    42,    38,
     876,   250,   256,   250,   248,   248,  2198,   883,  2200,  2311,
     249,   134,   135,   136,   250,   249,   139,   893,    57,    58,
     249,    65,    61,    62,    63,   248,   250,   150,   151,   152,
     906,   249,   908,   248,   247,  2198,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   922,   233,    35,   250,
     248,    38,    39,    40,    41,    42,    43,  2778,   102,   103,
      26,    27,   938,   247,    30,   247,    32,  2006,  2006,    35,
    2009,   250,  2011,   250,   250,    41,   249,   953,   193,   233,
      70,  2006,    25,    26,    27,    28,  1884,    30,   233,    32,
     247,   250,    35,  2814,  2033,   248,  2035,    40,   250,    42,
     247,   250,   248,  2295,   247,   981,   250,   248,   233,   247,
    1908,   250,   988,  1911,   990,   991,   248,  2006,  2057,  2311,
    2283,   250,    65,   249,     6,  1001,   250,   249,  2057,   250,
     250,   250,  2295,   256,   250,   249,  1934,   221,   222,   223,
     224,   225,   226,  2006,   228,   248,   248,  1023,    93,    94,
      95,    96,    97,    98,    99,   100,  2095,   250,   250,   102,
     103,   249,   166,   247,   185,  1041,  1042,   145,   146,   147,
     148,    78,    79,    80,   248,  1051,   248,   250,   248,  2118,
      87,    88,   248,  1231,    91,    92,  1234,   250,    23,  2128,
      25,    26,    27,    28,   250,    30,   250,    32,   247,   250,
      35,   247,   250,   247,   247,    40,  2153,   248,   250,   249,
    2334,  2009,  2151,  2011,  2153,  3052,  3053,  3054,  3055,  3056,
    3057,  1097,    47,    48,    49,    50,    51,  2166,   248,  2168,
    1908,   250,   249,   249,   247,  2033,   250,  2035,  2177,  2431,
     248,  2334,   213,   250,  3081,   250,   249,  1123,   249,   249,
    1126,   249,   249,  2200,   249,   248,  1934,   248,   233,  2198,
    2334,  2200,   238,   249,   249,  2457,   233,   250,  2460,   256,
     249,   233,  1148,   247,  1150,   248,  2198,  1153,  2200,  1155,
     249,  1157,   167,  1159,   248,  1161,   233,   250,   233,   168,
     250,   248,   233,   249,  2486,  1171,   233,  2095,   248,   134,
     135,   136,   137,    71,   139,  2273,   250,   233,   248,  2275,
    1186,   250,   248,  2281,   248,   150,   151,   152,   248,   250,
    2118,   233,   251,  2515,   233,  1373,   233,   250,  2630,   233,
    2128,   250,  2524,  2011,   248,   242,   243,   244,   248,   250,
    1388,   233,  1218,   248,  2283,  1393,   253,   254,   255,   166,
     166,   250,   250,  2151,  2546,   250,  2295,  2035,   248,   250,
    1236,   250,   250,  2555,   227,   248,   247,   247,  2166,   238,
    2168,   248,  2311,   233,   250,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  2577,   250,    35,   238,  2311,
     248,   250,    40,   248,    42,  2334,  2334,   248,  1274,   233,
    1276,   197,   198,   199,   200,   201,   202,  1455,  1456,  2334,
     174,   175,   176,   177,   178,   179,   180,    65,   250,   249,
    1296,   256,  1298,     5,    93,    94,    95,    96,    97,    98,
      99,   100,  1480,  1481,   238,   250,   249,   249,  2630,   249,
     249,  1317,   249,   249,   249,  2334,   249,   238,   233,  2388,
     227,   110,  2391,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   252,   238,    35,   233,  2630,    38,    39,
      40,  2334,    42,    43,   113,   114,   115,   116,   117,   118,
     249,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   250,  2431,    35,    64,   249,    38,    39,    40,   233,
      42,    43,   233,   233,   233,   250,   248,     4,     5,   250,
       7,     8,     9,    10,    11,    12,    13,    14,  2457,    16,
     233,  2460,  2714,   250,    21,  2717,   250,   248,   233,   233,
     250,  1407,   250,   250,   248,    32,    33,   247,   194,   195,
     196,   197,   198,   199,   200,   201,   202,  2486,  1424,   248,
     248,  1427,   150,  1429,   233,  1431,   233,  2323,  3149,  2364,
    2752,  2698,   158,  2502,   233,   158,  2505,   158,    45,    46,
      47,    48,    49,    50,    51,  1451,  2515,  1453,    55,   158,
      23,   158,   158,    26,    27,  2524,  2778,   158,  1880,    32,
    2388,   247,   158,  2391,   158,  1104,  2788,  1672,    41,  1475,
     158,  2421,  1676,   172,   101,   172,  3013,  2546,   256,   172,
    3092,    23,  1488,  3064,    26,    27,  2555,  2927,    30,  2609,
      32,  1497,  2814,    35,  2618,   223,    38,  1675,    40,  2846,
      42,   158,   158,  2431,   158,   158,   158,   158,  2577,   158,
     158,  1517,   158,   158,    56,    57,    58,   245,    60,   158,
    1526,   158,    64,   158,   158,   158,   158,  2698,  2698,  2457,
     103,  2698,  2460,   158,   107,  2698,   158,  2698,   158,   267,
      23,   158,    25,    26,    27,    28,   158,    30,  1554,    32,
      87,    88,    35,   158,    91,    92,   256,    40,  2486,   158,
     158,  2630,   158,   158,   137,   138,  1572,   158,  2698,  1575,
    2698,  2698,  2698,  1579,  2502,  1355,  2698,  2505,  1350,  2698,
    1865,  3105,  1588,  2683,   256,   635,   330,  2515,  1870,   837,
    2358,  2638,    -1,    -1,    -1,    -1,  2524,    -1,   171,   172,
     173,  2698,    -1,  2698,  2698,  1611,  2698,  2698,  2698,  2698,
      -1,    -1,  2698,    -1,    -1,    -1,    -1,   190,  2546,   347,
     193,  1627,    -1,    -1,    -1,    -1,    -1,  2555,  2950,    -1,
      -1,  2953,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,  2714,    -1,    -1,  2717,  2457,
      -1,   134,   135,   136,   137,    -1,   139,    -1,    -1,    -1,
      -1,    -1,   129,    -1,   131,    -1,    -1,   150,   151,   152,
      -1,    -1,   139,    -1,   247,   142,   143,    -1,  2486,    -1,
    1686,    -1,    -1,  2752,   151,   247,    -1,    -1,    -1,   156,
    1696,    -1,    -1,    -1,   161,    -1,   233,    -1,    -1,  1705,
      -1,    -1,    -1,   170,    -1,   242,   243,   244,    -1,  2778,
      -1,    -1,    -1,    -1,   256,    -1,   253,   254,   255,  2788,
      -1,    -1,    -1,    -1,   191,   192,    -1,   194,   195,   196,
     197,    -1,   199,    -1,    -1,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,  2814,    -1,    35,    -1,    -1,
      38,   479,    40,    -1,    42,    -1,   223,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   232,    -1,    -1,    56,    57,
      58,  1777,    60,    23,    -1,    -1,    26,    27,   245,    -1,
     247,    -1,    32,    -1,  1962,    -1,  2714,    -1,    -1,  2717,
      -1,    41,    -1,  1799,    -1,   523,    -1,    -1,    -1,    -1,
     267,    -1,    23,    -1,   271,    26,    27,    -1,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,  2752,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   299,    -1,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,   309,    -1,    -1,    -1,   134,   135,   136,   137,
    2778,   139,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,
    2788,    -1,   150,   151,   152,    -1,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    -1,  1884,    91,
      92,  2950,    -1,    -1,  2953,    -1,  2814,   137,   138,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1908,   370,    35,  1911,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    78,    79,    80,    -1,
      -1,   171,   172,   173,    -1,    87,    88,    -1,  1934,    91,
      92,   398,    -1,    64,   401,   402,    -1,    -1,    -1,   406,
     190,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   256,    -1,
      -1,   102,   103,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,   233,   727,
    2006,    -1,    -1,  2009,    -1,  2011,    56,    57,    58,    -1,
      60,    -1,   479,    -1,    64,    -1,    -1,    -1,   485,    87,
      88,   233,  2950,    91,    92,  2953,   754,  2033,    -1,  2035,
     242,   243,   244,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,   253,   254,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2057,   102,   103,    -1,   522,   523,   107,    -1,   526,
     134,   135,   136,   137,   138,   139,   140,   141,    -1,    -1,
      -1,   233,   539,    -1,    -1,    -1,    -1,   805,    -1,    -1,
     242,   243,   244,    -1,    -1,    -1,    -1,   137,   138,  2095,
      -1,   253,   254,   255,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,  2118,    38,    39,    40,    41,    42,    43,    -1,
      -1,   171,  2128,   173,    87,    88,   593,    -1,    91,    92,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,   867,
     190,    -1,    -1,   193,    -1,  2151,    -1,  2153,    -1,   616,
      -1,    25,    26,    27,    28,   883,    30,    -1,    32,    -1,
    2166,    35,  2168,  2341,    -1,   233,    40,    -1,   635,    -1,
     637,  2177,    -1,   247,   242,   243,   244,    -1,   906,    -1,
      -1,    -1,   107,    -1,    -1,   253,   254,   255,    -1,   656,
      64,    -1,  2198,    -1,  2200,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   673,    23,    -1,    -1,
      26,    27,   137,   138,    30,    -1,    32,    -1,    -1,    35,
     687,    -1,    38,    39,    40,   953,    42,    43,   102,   103,
      -1,    -1,  2410,   700,    -1,   702,    -1,    -1,  2416,    -1,
      56,    57,    58,    -1,    60,    -1,   171,    -1,   173,    -1,
      26,    27,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,
     727,    -1,    38,    39,    40,   190,    42,    43,   193,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,  2283,    -1,   242,
     243,   244,    -1,    -1,   751,    -1,    -1,   754,    -1,  2295,
     253,   254,   255,    -1,    -1,  1023,    23,    -1,    -1,    26,
      -1,    -1,    -1,    30,   771,  2311,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    23,    42,    25,    26,    27,    28,
    2498,    30,   247,    32,    -1,    -1,    -1,    -1,  2334,    56,
      57,    58,    41,    60,   801,    -1,   803,    -1,   805,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,   823,    -1,    38,    39,
      40,    41,    42,    43,   831,    -1,    -1,   834,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,  2388,    -1,    -1,  2391,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,   129,    -1,   131,    -1,    -1,   876,
      -1,    -1,    -1,    -1,    -1,    23,   883,    25,    26,    27,
      28,    -1,    -1,  2601,    32,  2431,   893,   107,   137,   138,
      -1,    26,    27,  1161,    -1,    30,    -1,    32,    -1,   906,
      35,   908,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,  2457,    -1,    -1,  2460,   922,    -1,   137,   138,    -1,
      -1,    -1,   171,    -1,   173,    -1,    -1,   192,    -1,   194,
      -1,   938,    -1,  2651,  2652,    -1,    -1,    -1,    -1,    -1,
    2486,   190,    -1,    -1,   193,    -1,   953,    -1,    -1,    -1,
    1218,   171,    -1,   173,    -1,    -1,  2502,    -1,   223,  2505,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,  1236,  2515,
     190,    -1,    -1,   193,   981,    -1,    -1,  2695,  2524,    -1,
     245,   988,   247,   990,   991,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,  1001,    -1,    -1,    -1,   247,    -1,
    2546,    -1,    -1,    -1,    -1,    -1,  1274,    -1,    -1,  2555,
      -1,    -1,  2730,  2731,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,  2740,  2741,  2742,  2743,    -1,   247,  1296,    -1,
      80,  2577,    -1,    -1,  1041,  1042,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,  1051,    -1,    -1,    -1,    -1,  1317,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,  2630,    56,    57,    58,    -1,    60,
    1097,    41,    -1,    64,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  1123,    -1,    35,  1126,
      -1,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,    -1,    -1,  1407,
      -1,  1148,    -1,  1150,    -1,    -1,  1153,    64,  1155,    -1,
    1157,    -1,  1159,    -1,  1161,    -1,    -1,   107,    -1,    -1,
    2878,  2879,    -1,  1431,  1171,    -1,   137,   138,  2714,    -1,
      -1,  2717,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1186,
      -1,    -1,    -1,   233,    -1,   102,   103,   137,   138,    -1,
      -1,    -1,   242,   243,   244,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,   253,   254,   255,  2752,  1475,    -1,    -1,
      -1,  1218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
    1488,   171,   193,   173,    -1,    -1,    -1,    -1,    -1,  1236,
      -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,  2956,    -1,
     190,  2959,  2788,   193,    -1,    -1,    -1,    -1,    -1,  1517,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,  2982,  2983,  2984,  1274,  2814,  1276,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,  1296,
      35,  1298,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,  3019,  3020,  3021,  3022,    23,    -1,  1575,    26,    27,
    1317,  1579,    30,    -1,    32,    -1,   129,    35,   131,    64,
      38,    -1,    40,    -1,    42,    -1,   139,   140,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,   150,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,    -1,   161,    -1,
      -1,   616,    -1,  3071,  3072,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    23,    -1,    25,    26,
      27,    28,   637,    30,    -1,    32,    -1,    -1,    35,   192,
      -1,   194,   195,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
    1407,    -1,    -1,    -1,  2950,    -1,    -1,  2953,    -1,    -1,
     223,    -1,    -1,    -1,    -1,    -1,    -1,  1424,    -1,   232,
    1427,    -1,  1429,    -1,  1431,    -1,   171,    -1,   173,    -1,
      -1,    -1,   245,    -1,   247,   194,   195,   196,   197,   198,
     199,   200,   201,   202,  1451,   190,  1453,    -1,   193,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,   271,    -1,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,  1475,   282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,  1488,   139,    -1,    -1,    -1,   751,    -1,    -1,   754,
    1497,    -1,    -1,   150,   151,   152,    23,    -1,    25,    26,
      27,    28,   247,    30,    -1,    32,   771,    -1,    35,  1777,
    1517,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,  1526,
     194,   195,   196,   197,   198,   199,   200,   201,   202,    56,
      57,    58,    -1,    60,   347,    -1,   801,    64,   803,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,  1554,    26,    27,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,  1572,    -1,    -1,  1575,    -1,
      -1,    -1,  1579,    -1,    -1,   102,   103,    -1,    56,    57,
      58,  1588,    60,    -1,    -1,   398,    -1,    -1,   401,   402,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1611,    -1,    35,    -1,    -1,    38,
      39,    40,    41,    42,    43,    -1,  1884,    -1,    -1,    -1,
    1627,    23,    -1,    25,    26,    27,    28,    -1,    30,   107,
      32,    -1,    -1,    35,    -1,    64,    38,    -1,    40,    41,
      42,    -1,    -1,  1911,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    56,    57,    58,    -1,    60,   137,
     138,    -1,    64,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,   485,   102,   103,    -1,    -1,    -1,   107,  1686,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1696,
      -1,    -1,    -1,   171,    -1,   173,    -1,    -1,  1705,    -1,
     102,   103,    -1,    -1,    -1,   107,    -1,    -1,   137,   138,
     523,    -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,
     247,    -1,    -1,   988,    -1,   990,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,  2006,    -1,
      -1,  2009,   171,    -1,   173,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,   190,    -1,    -1,   193,  2033,    -1,    41,    -1,   171,
    1777,   173,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   190,  2057,
      35,   193,  1799,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,   616,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      65,    -1,    -1,    -1,   637,    -1,    -1,  2095,    -1,    -1,
      -1,    -1,    23,   107,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,   656,    35,   247,    -1,    -1,    -1,    40,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    2128,    -1,    35,   137,   138,    38,    39,    40,    41,    42,
      43,    23,    -1,    25,    26,    27,    28,  1884,    30,    -1,
      32,    -1,    -1,    -1,    -1,  1150,    -1,   700,  1153,    41,
      -1,    64,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,  1908,    -1,    -1,  1911,    -1,    -1,    -1,    -1,  2177,
      -1,    -1,    -1,    -1,   727,    -1,   190,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1934,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   751,    -1,
      -1,   754,    -1,   134,   135,   136,   137,    -1,   139,    -1,
     102,   103,    -1,  1218,    -1,   107,    -1,    -1,   771,   150,
     151,   152,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,  1236,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   801,    -1,
     803,    -1,   805,    -1,    -1,    -1,    -1,    -1,   171,  2006,
     173,    -1,  2009,    -1,  2011,    -1,    -1,    -1,    -1,  1274,
     823,  1276,    -1,    -1,   827,    -1,    -1,   190,    -1,   171,
     193,   173,    -1,    -1,    -1,    -1,  2033,    -1,  2035,    -1,
      -1,  1296,    -1,  1298,    -1,    -1,    -1,    -1,   190,    -1,
      -1,   193,    -1,    -1,    23,    -1,    25,    26,    27,    28,
    2057,    30,    -1,    32,   867,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,  2334,    -1,    -1,    -1,
     883,    -1,    -1,    -1,   247,    -1,    -1,    56,    57,    58,
     893,    60,    -1,    -1,    -1,    -1,    -1,    -1,  2095,    -1,
      -1,    -1,    -1,   906,    -1,   908,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   922,
      35,  2118,    -1,    38,    39,    40,    41,    42,    43,    -1,
    2388,  2128,    -1,  2391,    -1,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    64,
     953,    -1,    40,    41,  2151,    -1,  2153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,  2166,
     139,  2168,  1427,  2431,  1429,    -1,    64,    -1,   981,    -1,
    2177,   150,   151,   152,    -1,   988,    -1,   990,   991,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2198,  2460,  2200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
    1023,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,  1041,  1042,
      -1,    -1,  1497,    -1,  2502,    -1,    -1,  2505,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,   171,  2515,   173,    -1,
      -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1526,    -1,    -1,    -1,   190,    -1,    -1,   193,    -1,
      -1,    -1,    -1,   171,    -1,   173,  2283,    -1,  2546,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,  2295,    30,
      -1,    32,   190,    -1,    35,   193,    -1,    38,    39,    40,
      41,    42,    43,    -1,  2311,    -1,    -1,    -1,    -1,  2577,
    1123,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,   247,    -1,    -1,    -1,    -1,  2334,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1150,    -1,    -1,
    1153,    -1,  1155,    -1,    -1,    -1,    -1,    -1,  1161,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,  2388,    -1,    -1,  2391,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,  1218,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,  1236,  2431,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    56,    57,    58,  2714,    60,    -1,  2717,
    2457,    64,    -1,  2460,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1274,    -1,  1276,    -1,   129,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,  2486,
      -1,    -1,    -1,  1296,  2752,  1298,   150,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,  2502,    -1,    -1,  2505,    -1,
      -1,    -1,    -1,    -1,  1317,    -1,    -1,    23,  2515,    -1,
      26,    27,    -1,    -1,    30,    -1,    32,  2524,    -1,    35,
    2788,    -1,    38,    -1,    40,    41,    42,   191,   192,    -1,
     194,   195,   196,   197,    -1,   199,    -1,    -1,    -1,  2546,
      56,    57,    58,    -1,    60,    -1,    -1,    -1,  2555,    23,
      -1,    25,    26,    27,    28,    -1,    30,    -1,    32,   223,
      -1,    35,    -1,    -1,    -1,    -1,    40,    41,   232,    -1,
    2577,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,   247,   247,    -1,    -1,    -1,    -1,    -1,
      64,   107,    -1,    -1,  1407,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1424,    -1,    -1,  1427,    -1,  1429,    -1,  1431,  1884,
      -1,   137,   138,  2630,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   247,   299,    -1,    -1,  1451,    -1,
    1453,    -1,    -1,  1908,    -1,    -1,  1911,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,
      -1,    -1,  1475,   137,   138,    -1,    -1,    -1,    -1,  1934,
      -1,    -1,    -1,    -1,   190,  1488,    -1,   193,    -1,    -1,
      -1,    -1,  2950,   347,  1497,  2953,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,   171,    35,   173,
      -1,    38,    39,    40,  1517,    42,    43,  2714,    -1,    -1,
    2717,    -1,    -1,  1526,    -1,    -1,   190,    -1,    -1,   193,
      23,    -1,    25,    26,    27,    28,    -1,    30,    -1,    32,
      -1,   247,    35,    -1,   398,    38,    -1,    40,    -1,    42,
      -1,  1554,    -1,    -1,  2009,  2752,  2011,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    -1,  1575,    -1,    -1,    -1,  1579,    -1,  2033,    -1,
    2035,  2778,    -1,   247,    -1,  1588,    -1,    -1,    -1,    -1,
      -1,  2788,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,  1611,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,  2814,    -1,    23,
      -1,    25,    26,    27,    28,   479,    30,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    65,    40,    41,    42,    -1,
    2095,   134,   135,   136,   137,     4,   139,     6,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,   150,   151,   152,
      -1,    65,    21,  2118,    -1,    -1,    -1,    -1,   522,   523,
      -1,    -1,    -1,  2128,    33,    34,    -1,   107,    -1,    -1,
      -1,    -1,    -1,  1686,    43,    23,    -1,    25,    26,    27,
      28,    -1,    30,  1696,    32,    -1,  2151,    35,   102,   103,
      38,    -1,    40,   107,    42,    -1,    -1,   137,   138,    -1,
      -1,  2166,    -1,  2168,    73,    -1,    75,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,   593,
      -1,   171,   101,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2950,   247,    -1,  2953,    -1,    -1,    -1,
     190,    -1,   616,   193,   102,   103,    -1,   171,    -1,   173,
      -1,    -1,    -1,    23,  1777,    25,    26,    27,    28,    -1,
      30,   635,    32,   637,    -1,    -1,   190,    -1,    -1,   193,
     149,    41,    -1,    -1,    -1,    -1,  1799,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   673,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   687,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,   247,    -1,    -1,   700,    -1,   702,    -1,
     209,    -1,   102,   103,    -1,   214,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1884,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,    -1,    -1,
     754,   102,   103,    -1,    -1,  1908,    -1,    -1,  1911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   771,    -1,    -1,
      -1,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1934,    -1,  2388,    -1,    -1,  2391,    -1,    -1,    -1,
     190,    -1,    -1,   193,    -1,    -1,    -1,   801,    -1,   803,
      -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1198,  1199,  1200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2431,   831,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,   247,    20,    21,
      -1,    -1,  2457,  2006,    -1,  2460,  2009,    -1,  2011,    -1,
      32,    33,    34,   867,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   883,
    2033,  2486,  2035,    -1,    -1,    -1,    -1,    -1,    -1,   893,
      -1,    -1,    -1,    -1,    -1,    -1,   247,  2502,    -1,    -1,
    2505,    73,   906,    75,  2057,    -1,    -1,    -1,    -1,    -1,
    2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2524,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,  1319,    -1,    -1,    -1,    -1,    -1,
      -1,  2546,  2095,    -1,  1329,  1330,    -1,  1332,    -1,   953,
    2555,    23,    -1,    25,    26,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,  2118,    -1,    -1,    40,    41,
      -1,   143,    -1,    -1,    -1,  2128,    -1,   149,    -1,  1364,
    1365,   153,   154,  1368,   988,    -1,   990,   991,   129,    -1,
     131,    -1,    64,   165,    -1,    -1,    -1,  1001,  2151,   140,
    2153,   142,    -1,    -1,    -1,    -1,    -1,    -1,   150,   150,
      -1,    -1,    -1,  2166,    -1,  2168,    -1,    -1,    -1,  1023,
     161,    -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,    -1,
     102,   103,   204,   205,   206,   107,    -1,   209,    -1,    -1,
      -1,    -1,   214,    -1,    -1,  2198,    -1,  2200,    -1,    -1,
      -1,   192,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,   223,   223,    38,    39,    40,    41,    42,    43,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,    -1,   245,   245,    -1,   247,    -1,    -1,  2714,
      -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,   190,    -1,
     262,   193,    -1,  1127,  1128,   267,   267,    -1,    -1,    -1,
    2283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   282,  2295,    -1,  1148,    -1,  1150,  2752,    -1,  1153,
      -1,  1155,    -1,  1157,   226,  1159,    -1,  1161,   299,    -1,
      23,    -1,    25,    26,    27,    28,    -1,  1171,    -1,    32,
      -1,    -1,    35,  2778,    -1,    -1,    -1,    40,    41,    -1,
      -1,  2334,  1186,  2788,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    64,    35,    -1,    -1,   347,   347,    40,    41,  2814,
      -1,    -1,    -1,    -1,  1218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1236,    -1,    -1,  2388,    -1,    -1,  2391,   102,
     103,    -1,    -1,    -1,   107,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   398,    -1,    35,
      -1,   402,    38,    39,    40,    41,    42,    43,    -1,    -1,
    1274,    -1,  1276,    -1,   137,   138,    -1,    -1,  2431,    -1,
    1665,  1666,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,  1296,    -1,  1298,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,  2457,    -1,   139,  2460,   171,    -1,
     173,    -1,    -1,  1317,    -1,    -1,    -1,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     193,    -1,    -1,  2486,    -1,    -1,    -1,   479,   479,    -1,
      -1,    -1,    -1,    -1,   485,  2950,    -1,    -1,  2953,  2502,
      -1,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2515,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   523,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2555,  1407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1424,    -1,    -1,  1427,  2577,  1429,    -1,  1431,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1842,    -1,    -1,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    64,
      -1,  1475,    -1,    -1,    -1,   616,    -1,  2630,    -1,    -1,
      -1,    -1,    -1,  1868,  1488,    -1,    -1,    -1,    -1,    -1,
    1875,    -1,    -1,  1497,    -1,    -1,   637,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,  1517,    -1,   656,    -1,    -1,    -1,    -1,
      -1,    -1,  1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   673,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
    1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   700,
      -1,  2714,    -1,    -1,  2717,    -1,  1951,    -1,  1572,    -1,
      -1,  1575,    -1,    -1,    -1,  1579,   171,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,   727,   727,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,  2752,
    1985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     751,    -1,   754,   754,    -1,  2000,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,
     771,    -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,   781,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     801,  2814,   803,   805,   805,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,   827,    -1,    -1,    -1,
     831,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,  1722,    38,
      39,    40,    41,    42,    43,   867,   867,    -1,    -1,  1733,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   883,   883,    35,    -1,    64,    38,    39,    40,   107,
      42,    43,   893,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   906,   906,    -1,    -1,    -1,    -1,
      -1,    -1,    64,  1777,    -1,    -1,    -1,    -1,    -1,   137,
     138,   922,    -1,   102,   103,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,  1799,    -1,  2950,    -1,    -1,
    2953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   953,   953,   171,    -1,   173,    -1,    -1,   137,   138,
      -1,  2206,  2207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,
     981,    -1,    -1,    -1,  2229,    -1,    -1,   988,    -1,   990,
     991,    -1,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
    1884,  1023,  1023,    -1,    -1,   129,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,  1042,    -1,    -1,  1908,    -1,   150,  1911,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1934,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,   192,    35,
     194,   195,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,  2348,    -1,  2350,  2351,  2352,  2353,  2354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2384,
      -1,   245,  2006,   247,    -1,  2009,    -1,  2011,    -1,  1150,
      -1,  2396,  1153,    -1,  1155,    -1,  1157,    -1,    -1,  1161,
    1161,   107,    -1,   267,    -1,    -1,    -1,    -1,  2413,  2033,
    1171,  2035,    -1,    -1,    -1,  2420,    -1,    -1,   282,  2424,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,  2057,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,  1218,  1218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,
      -1,  2095,    -1,    -1,  1236,  1236,    65,    -1,    -1,    -1,
      -1,    -1,    -1,   347,   190,    -1,  2491,   193,    -1,   129,
      -1,   131,    -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,
    1262,    -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,
     150,    -1,  1274,  1274,    -1,  1276,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,
      -1,    -1,    -1,    -1,  1296,  1296,    -1,  1298,   402,    -1,
      -1,    -1,  2166,    -1,  2168,    -1,    -1,    -1,   137,   138,
      -1,    -1,   192,  2177,   194,  1317,  1317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,   223,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,  2600,    -1,  2602,    -1,    -1,
      -1,   190,    -1,    -1,   193,   245,   150,   247,    -1,    -1,
    2615,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    -1,    -1,    -1,   150,   267,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,  1407,  1407,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,
      -1,    -1,    -1,  1424,    -1,    -1,  1427,    -1,  1429,  1431,
    1431,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,   223,
      -1,    -1,  2687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1453,  2317,    -1,  2319,    -1,    -1,    -1,   223,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   347,  2713,    -1,
    2334,   102,   103,  1475,  1475,    -1,   107,    -1,   262,    -1,
      -1,   245,    -1,   267,    -1,    -1,  1488,  1488,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,   616,    -1,    -1,  1517,  1517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2388,  1526,    -1,  2391,    -1,    -1,
      -1,    -1,    -1,   637,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   656,  1554,    -1,    -1,    -1,    -1,    -1,   190,
      -1,    -1,   193,   347,    -1,    -1,    -1,  2431,    -1,    -1,
      -1,    -1,    -1,  1575,  1575,    -1,    -1,  1579,  1579,    -1,
    2825,    -1,  2827,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2457,    -1,  2840,  2460,    -1,    -1,   479,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1611,    -1,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    -1,  2486,   727,    -1,    -1,  2871,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,  2502,    -1,
      -1,  2505,    -1,   523,    -1,    -1,    -1,   751,    -1,    -1,
     754,  2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2524,    -1,    -1,    -1,    -1,    -1,    -1,   771,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,  2546,    -1,    38,    -1,    40,    41,    42,    -1,
      -1,  2555,    -1,    -1,    -1,   479,    -1,   801,    -1,   803,
      -1,   805,    56,    57,    58,    -1,    60,    -1,    -1,    -1,
      64,    -1,    -1,  2577,    -1,   479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   827,    -1,    -1,    -1,    -1,    -1,    -1,
    2975,    -1,    -1,    -1,    -1,    -1,   616,    -1,    -1,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,    -1,    -1,    -1,   637,    -1,   523,
      -1,    -1,    -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1777,  1777,    -1,    -1,   883,
      -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1799,    -1,
      35,    -1,   906,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   922,   173,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,    -1,   953,
    2714,    -1,    23,  2717,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,  1870,    40,
      41,   751,    -1,    -1,   754,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1884,  1884,   988,    -1,   990,   991,  2752,    -1,
      -1,   771,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   781,    -1,    -1,    -1,    -1,    -1,  1908,    -1,  1911,
    1911,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,  1023,
      -1,   801,    -1,   803,  2788,   805,    -1,    -1,    -1,    -1,
      -1,   102,   103,  1934,    -1,    -1,   107,    -1,  1042,    -1,
      -1,    -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,
    2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   727,    -1,    -1,   137,   138,    -1,    -1,
     754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   867,    -1,    -1,
     754,    -1,    -1,    -1,    -1,    -1,    -1,   781,    -1,    -1,
     171,    -1,   173,   883,  2006,  2006,    -1,  2009,  2009,    -1,
    2011,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,   805,   193,    -1,    -1,    -1,   906,    -1,    -1,    -1,
      -1,  2033,  2033,    -1,  2035,    -1,    -1,    -1,    -1,    -1,
      -1,   805,    -1,    -1,    -1,    -1,  1150,    -1,    -1,  1153,
      -1,  1155,    -1,    -1,    -1,  2057,  2057,  1161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   953,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   867,    -1,    -1,  2950,    -1,    -1,  2953,
      -1,    -1,    -1,  2095,  2095,    -1,    -1,    -1,    -1,   883,
      -1,    -1,    -1,   867,    -1,    -1,    -1,    -1,   988,    -1,
     990,    -1,    -1,    -1,  1218,    -1,    -1,  2118,    -1,   883,
      -1,    -1,   906,    -1,    -1,    -1,  2128,  2128,    -1,    -1,
      -1,    -1,  1236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   906,  1023,    -1,    -1,    -1,    -1,    -1,    -1,
    2151,    -1,  2153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2166,    -1,  2168,    -1,   953,
    1274,    -1,  1276,    -1,    -1,  2177,  2177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   953,
      -1,    -1,  1296,    -1,  1298,    -1,    -1,    -1,    -1,  2200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1317,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    -1,  1023,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    60,    -1,    -1,    -1,  1023,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1150,    -1,    35,  1153,    -1,    38,    39,    40,    41,    42,
      43,  1161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    64,    -1,  1407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1427,    -1,  1429,    -1,  1431,    -1,   134,
     135,   136,  2334,  2334,   139,    -1,    -1,    -1,  1218,   102,
     103,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,  1453,
      -1,    -1,    -1,    -1,    -1,    -1,  1236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1475,    -1,    -1,    -1,    -1,    -1,  1161,    -1,    -1,
      -1,    -1,  1262,    -1,  1488,    -1,  2388,  2388,    -1,  2391,
    2391,    -1,    -1,  1497,  1274,    -1,  1276,  1161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,    -1,  1296,    -1,  1298,    -1,
      -1,    -1,  1526,    -1,    -1,    -1,    -1,    -1,    -1,  2431,
    2431,    -1,    -1,    -1,  1218,    -1,    -1,  1317,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1554,    -1,  1236,    -1,  1218,    -1,  2457,    -1,  2460,  2460,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1575,  1236,    -1,    -1,  1579,    -1,    -1,  1262,    -1,
      -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,    -1,    -1,
    1274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2502,  2502,    -1,  2505,  2505,    -1,    -1,  1611,    -1,    -1,
    1274,    -1,  1296,  2515,  2515,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2524,    -1,    -1,    -1,  1407,    -1,    -1,
      -1,    -1,  1296,  1317,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2546,  2546,    -1,  1427,    -1,  1429,
      -1,  1431,    -1,  1317,  2555,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  2577,  2577,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1475,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,    -1,    64,    -1,  1488,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1497,    -1,    -1,
      -1,    -1,    -1,  1407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1517,    -1,    -1,
      -1,    -1,    -1,  1407,    -1,    -1,  1526,  1431,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1431,    -1,    -1,
      -1,    -1,    -1,  1777,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1475,    -1,    -1,    -1,  1575,    -1,    -1,    -1,  1579,
      -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,    -1,
      -1,  1475,  2714,  2714,    -1,  2717,  2717,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2752,  2752,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2778,    -1,    -1,
    1884,    -1,    -1,    -1,    -1,    -1,  2788,  2788,    -1,    -1,
      -1,  1575,    -1,    -1,    -1,  1579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1908,    -1,    -1,  1911,    -1,    -1,
      -1,  1575,    -1,  2814,    -1,  1579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1934,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1777,    -1,    -1,
      -1,    -1,  2006,    -1,    -1,  2009,    -1,  2011,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2033,
      -1,  2035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2950,  2950,
      -1,  2953,  2953,  2057,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1870,  2095,    -1,  1777,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1884,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1777,  2118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,  1908,    -1,
      -1,  1911,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,
      -1,    -1,    -1,    -1,  1934,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2166,    -1,  2168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1870,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2200,    -1,    -1,    -1,
    1884,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1884,    -1,    -1,    -1,    -1,    -1,  2006,  1911,    -1,  2009,
      -1,  2011,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1911,    -1,    -1,
      -1,    -1,    -1,  2033,    -1,  2035,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2057,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2095,    -1,    -1,    -1,    -1,
      -1,    -1,  2006,    -1,    -1,  2009,    -1,    -1,    -1,    -1,
    2334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2118,    -1,
      -1,    -1,  2006,    -1,    -1,  2009,    -1,    -1,  2128,  2033,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2033,
      -1,  2151,    -1,  2057,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2388,    -1,  2166,  2391,  2168,    -1,
      -1,    -1,    -1,  2057,    -1,    -1,    -1,  2177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2431,    -1,    -1,
      -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2457,    -1,    -1,  2460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,  2502,    -1,
      -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2515,    -1,  2177,    -1,    -1,    -1,    -1,    -1,    -1,
    2524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
     156,    -1,  2546,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,  2555,    -1,    -1,  2334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2577,    -1,   191,   192,    -1,   194,   195,
     196,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2388,    -1,
      -1,  2391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2334,  2431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2334,    -1,    -1,    -1,    -1,    -1,    -1,  2457,    -1,    -1,
    2460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2388,    -1,  2486,  2391,    -1,    -1,
    2714,    -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2502,    -1,  2388,  2505,    -1,  2391,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2515,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2524,    -1,    -1,  2431,  2752,    -1,
      -1,    -1,    -1,    -1,   370,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,   156,    -1,  2546,  2431,    -1,   161,
      -1,    -1,    -1,    -1,  2778,  2555,  2460,    -1,    -1,    -1,
      -1,    -1,   398,    -1,  2788,   401,   402,    -1,    -1,    -1,
     406,    -1,    -1,    -1,    -1,    -1,  2460,  2577,    -1,   191,
     192,    -1,   194,   195,   196,   197,    -1,   199,    -1,    -1,
    2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,
      -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2515,    -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,
      -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2546,   479,    -1,    -1,    -1,    -1,    -1,   485,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
     526,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2714,    -1,    -1,  2717,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2752,    -1,    -1,    -1,    -1,   593,   370,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2778,    -1,
     616,    -1,    -1,    -1,    -1,    -1,   398,    -1,  2788,   401,
     402,    -1,    -1,    -1,   406,    -1,    -1,    -1,   161,   635,
      -1,   637,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
    2714,    -1,    -1,  2717,  2814,    -1,    -1,    -1,    -1,    -1,
     656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2714,    -1,    -1,  2717,    -1,    -1,    -1,   673,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   700,    -1,   702,   479,  2752,    -1,
      -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,
     522,    -1,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2950,    -1,    -1,  2953,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   801,    -1,   803,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   616,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   635,    -1,   637,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
     876,    -1,    -1,    -1,   656,    -1,  2950,   883,    -1,  2953,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,    -1,
      -1,   673,    -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,
     906,    -1,   908,    -1,    -1,   687,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,   700,    -1,
     702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   938,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,   953,    -1,    -1,
      -1,    -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   981,    -1,    -1,    -1,    -1,
      -1,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,   522,
     523,    -1,    -1,   526,    -1,  1001,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   539,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   801,
      -1,   803,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,
      -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   893,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
    1126,    -1,    -1,    -1,   906,    -1,   908,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     922,    -1,  1148,    -1,  1150,    -1,    -1,  1153,    -1,  1155,
      -1,  1157,    -1,  1159,    -1,  1161,   938,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1171,    -1,    -1,    -1,    -1,
      -1,   953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   981,
      -1,    -1,    -1,    -1,    -1,    -1,   988,    -1,   990,   991,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1041,
    1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1274,  1051,
    1276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1296,    -1,  1298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1126,    -1,    -1,   401,   402,    -1,
     883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     893,    -1,    -1,    -1,    -1,    -1,  1148,    -1,  1150,    -1,
      -1,  1153,    -1,  1155,    -1,  1157,    -1,  1159,    -1,  1161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1407,    -1,    -1,  1186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1424,    -1,
     953,  1427,    -1,  1429,    -1,  1431,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1451,    -1,  1453,   981,    -1,
      -1,    -1,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,  1475,
      -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1488,    -1,    -1,   539,    -1,    -1,    -1,    -1,
    1023,  1497,  1274,    -1,  1276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   522,   523,    -1,    -1,   526,  1041,  1042,
      -1,  1517,    -1,    -1,  1296,    -1,  1298,    -1,  1051,    -1,
    1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1554,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1097,    -1,  1572,    -1,    -1,    -1,
      -1,    -1,    -1,  1579,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1588,    -1,   522,   523,    -1,    -1,   526,    -1,
      -1,    -1,   530,  1126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   539,    -1,    -1,    -1,  1611,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   556,    -1,
      -1,  1627,    -1,    -1,    -1,  1407,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1424,    -1,    -1,  1427,    -1,  1429,    -1,  1431,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1451,
      -1,  1453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1696,    -1,    -1,  1475,    -1,    -1,    -1,    -1,    -1,  1705,
      -1,    -1,    -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1777,  1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1572,    -1,    -1,  1799,    -1,    -1,    -1,  1579,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1611,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1627,    -1,    -1,    -1,    -1,
      -1,    -1,   906,    -1,   908,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,
      -1,    -1,    -1,    -1,  1407,    -1,    -1,    -1,  1884,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1908,    -1,    -1,  1911,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1696,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,  1705,    -1,    -1,    -1,    -1,  1934,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
      -1,    -1,  1475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,    -1,   988,
     223,   990,   991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1001,    -1,  1517,    -1,    -1,  1041,  1042,    -1,
      -1,    -1,    -1,  1526,    -1,  1777,    -1,  1051,    -1,    -1,
    2006,    -1,    -1,  2009,  1023,  2011,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1799,    -1,    -1,
      -1,  1554,  1041,  1042,    -1,    -1,    -1,  2033,    -1,  2035,
      -1,    -1,  1051,    -1,    -1,    -1,    -1,    -1,    -1,  1572,
      -1,    -1,  1575,  1097,    -1,    -1,  1579,    -1,    -1,    -1,
     988,  2057,   990,   991,    -1,  1588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1001,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1126,    -1,    -1,    -1,    -1,    -1,  1611,    -1,
      -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,  2095,
      -1,    -1,    -1,    -1,  1627,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1884,  1041,  1042,    -1,    -1,  1126,    -1,    -1,
      -1,    -1,  2118,  1051,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2128,    -1,    -1,    -1,  1908,    -1,    -1,  1911,
      -1,    -1,    -1,    -1,    -1,    -1,  1074,  1075,    -1,    -1,
      -1,    -1,  1080,    -1,    -1,  2151,    -1,  2153,    -1,    -1,
      -1,    -1,  1934,    -1,    -1,    -1,    -1,    -1,    -1,  1097,
    2166,  1099,  2168,  1696,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2177,  1705,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1126,    -1,
      -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2006,    -1,    -1,  2009,    -1,  2011,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2033,    -1,  2035,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,
     523,    -1,    -1,   526,    -1,  2057,    -1,   530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   539,    -1,    -1,  2295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   616,    -1,    -1,    -1,    -1,    -1,  2151,
      -1,  2153,    -1,  1427,    -1,  1429,    -1,  1431,    -1,    -1,
      -1,    -1,  2388,    -1,  2166,  2391,  2168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2177,    -1,  1451,    -1,  1453,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,    -1,
      -1,    -1,    -1,    -1,    -1,  2431,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   700,    -1,    -1,
      -1,  2457,    -1,    -1,  2460,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1488,
      -1,    -1,    -1,  2006,   727,    -1,    -1,    -1,  1497,    -1,
    2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,  1517,  2505,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1526,    -1,  2515,
      -1,    -1,    -1,  2295,    -1,    -1,    -1,    -1,  2524,    -1,
      -1,    -1,    -1,    -1,    -1,  1579,    -1,    -1,    -1,  2311,
      -1,    -1,    -1,    -1,  1588,  1554,    -1,    -1,    -1,    -1,
    2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   801,  2555,
    1488,    -1,  2334,  1572,    -1,    -1,  1575,  1611,    -1,  1497,
    1579,    -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,  1588,
      -1,  2577,    -1,  1627,    -1,    -1,    -1,    -1,    -1,  1517,
      -1,    -1,    -1,    -1,    -1,  2118,    -1,    -1,  1526,    -1,
      -1,    -1,  1611,    -1,    -1,  2128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2388,    -1,  1627,  2391,
      -1,    -1,    -1,    -1,    -1,    -1,  1554,    -1,  2151,    -1,
    2153,    -1,    -1,    -1,  2630,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2166,  1572,  2168,    -1,  1575,    -1,    -1,
      -1,  1579,  1696,    -1,  2177,    -1,    -1,    -1,    -1,  2431,
    1588,  1705,    -1,    -1,    -1,    -1,   191,   192,    -1,   194,
     195,   196,   197,    -1,   199,  2198,    -1,  2200,    -1,    -1,
      -1,    -1,    -1,  1611,    -1,  2457,    -1,  1696,  2460,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1705,    -1,   941,  1627,
     943,   944,   945,    -1,    -1,    -1,    -1,    -1,  1636,    -1,
      -1,    -1,    -1,    -1,  2486,    -1,    -1,  1645,  2714,    -1,
      -1,  2717,    -1,    -1,    -1,    -1,    -1,  1655,    -1,    -1,
    2502,    -1,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2515,    -1,   988,    -1,   990,   991,    -1,
      -1,    -1,  2524,    -1,    -1,    -1,  2752,    -1,  1001,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1696,    -1,
      -1,    -1,  2295,    -1,  2546,    -1,    -1,  1705,    -1,    -1,
    1023,    -1,  2778,  2555,    -1,    -1,    -1,    -1,  2311,    -1,
      -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,  1041,  1042,
      -1,    -1,    -1,    -1,    -1,  2577,    -1,    -1,  1051,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2814,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1074,  1075,    -1,    -1,    -1,    -1,  1080,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1097,    -1,    -1,    -1,  2630,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2714,    -1,    -1,  2717,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2009,    -1,  2011,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1218,    -1,    -1,    -1,  2502,
    2752,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,  2033,
      -1,  2035,  2515,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,  2524,    -1,    -1,    -1,    -1,  2778,    -1,    -1,    -1,
      -1,    -1,    -1,  2057,    -1,    -1,  2788,    -1,    -1,    -1,
      -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1274,  2555,  1276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   593,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2095,    -1,    -1,    -1,
      -1,   616,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,
     194,   195,   196,   197,    -1,   199,    -1,  2630,    -1,  2118,
     635,    -1,   637,    -1,    -1,    -1,    -1,    -1,    -1,  2128,
      -1,    -1,  2166,    -1,  2168,    -1,    -1,    -1,    -1,    -1,
      -1,   656,    -1,  2177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2151,    -1,  2153,    -1,    -1,    -1,   673,    -1,
      -1,    -1,    -1,    -1,  2198,    -1,  2200,  2166,    -1,  2168,
      -1,    -1,   687,    -1,    -1,    -1,    -1,  2095,  2177,    -1,
      -1,    -1,    -1,    -1,    -1,   700,    -1,   702,  2950,    -1,
      -1,  2953,    -1,    -1,  1427,    -1,  1429,    -1,    -1,  2198,
    2118,  2200,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
    2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1458,    -1,    -1,    -1,    -1,
      -1,    -1,  1465,  2151,    -1,  2153,    -1,    -1,    -1,  2752,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2166,    -1,
    2168,    -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,  2177,
      -1,  2295,    -1,    -1,  1497,  2778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2788,    -1,  2311,    -1,    -1,
    2198,    -1,  2200,    -1,  1517,    -1,   801,    -1,   803,    -1,
      -1,    -1,  2210,  1526,    -1,  2213,  2295,    -1,    -1,    -1,
      -1,  2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,  1572,
      -1,    -1,  1575,    -1,    -1,    -1,  1579,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2295,  1611,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2311,  1627,    -1,    -1,  2431,    -1,    -1,
      -1,    -1,    -1,  1636,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1655,  2457,    -1,    -1,  2460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2950,   522,    -1,
    2953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1696,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1705,   988,    -1,   990,   991,    -1,    -1,    -1,
      -1,  2515,    -1,    -1,    -1,    -1,  1001,    -1,   191,   192,
    2524,   194,   195,   196,   197,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,  2502,    -1,    -1,  2505,    -1,    -1,   593,
      -1,    -1,  2546,    -1,    -1,    -1,  2515,    -1,    -1,    -1,
      -1,  2555,    -1,    -1,    -1,  2524,    -1,    -1,    -1,    -1,
      -1,    -1,   616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2577,  1777,    -1,    -1,  2546,    -1,    -1,
      -1,   635,    -1,   637,    -1,    -1,  2555,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1799,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    -1,    -1,    -1,    -1,  2577,    -1,
      -1,    -1,    -1,    -1,  2502,    -1,    -1,  2505,    -1,   673,
      -1,    -1,    -1,    -1,    -1,    -1,  2630,  2515,    -1,    -1,
      -1,    -1,    -1,   687,    -1,    -1,  2524,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   700,    -1,   702,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2546,    -1,
      -1,  2630,    -1,  1148,    -1,  1150,    -1,  2555,  1153,    -1,
    1155,    -1,  1157,    -1,  1159,    -1,  1161,    -1,    -1,    -1,
      -1,  1884,    -1,    -1,    -1,    -1,  1171,    -1,    -1,  2577,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1186,    -1,    -1,    -1,  1908,    -1,    -1,    -1,    -1,
    2714,    -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2630,    -1,    -1,    -1,    -1,   801,  2752,   803,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   801,    -1,
     803,    -1,   805,    -1,  2778,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2752,  2788,    -1,    -1,    -1,    -1,  1274,
      -1,  1276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2009,    -1,  2011,  2778,
    2814,  1296,    -1,  1298,    -1,    -1,    -1,    -1,    -1,  2788,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2033,    -1,  2035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2814,    -1,    -1,    -1,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2066,  2752,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   906,    -1,   908,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2778,    -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2788,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2118,    -1,    -1,    -1,    -1,
     593,    -1,    -1,    -1,    -1,  2128,  2814,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,    -1,
      -1,    -1,  1427,   616,  1429,    -1,  2950,  1001,  2151,  2953,
    2153,    -1,    -1,    -1,    -1,   988,    -1,   990,    -1,    -1,
      -1,    -1,   635,  2166,   637,  2168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,    -1,
      -1,  2950,    -1,   656,  2953,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2198,    -1,  2200,    -1,    -1,
     673,    -1,    -1,  1488,    -1,    -1,    -1,  2210,  1041,    -1,
    2213,    -1,  1497,    -1,   687,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   700,    -1,   702,
      -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2950,    -1,    -1,  2953,    -1,    -1,    -1,  1554,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1572,    -1,    -1,
    1123,    -1,  2295,    -1,  1148,    -1,  1150,    -1,    -1,  1153,
      -1,  1155,    -1,  1157,    -1,  1159,    -1,  1161,  2311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   801,    -1,
     803,  2334,  1186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,   523,
      -1,    -1,   526,   527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2388,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1274,    -1,  1276,    -1,    -1,    -1,    -1,    -1,  2431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1274,  1296,  1276,  1298,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2457,    -1,    -1,  2460,    -1,    -1,
      -1,    -1,    -1,  1296,    -1,  1298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2486,  1317,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1777,    -1,    -1,    -1,    -1,    -1,    -1,  2502,
      -1,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2515,    -1,  1799,   988,    -1,   990,   991,    -1,
      -1,  2524,    -1,    -1,    -1,    -1,    -1,    -1,  1001,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2555,    -1,    -1,    -1,    -1,   522,   523,    -1,
      -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1427,  2577,  1429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1427,    -1,  1429,    -1,  1431,  1884,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1451,    -1,
      -1,    -1,    -1,  1908,    -1,    -1,  1911,  2630,    -1,    -1,
      -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1497,    -1,    -1,    -1,    -1,    -1,  1934,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,  1497,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1526,    -1,    -1,  1148,    -1,  1150,    -1,    -1,
    1153,    -1,  1155,    -1,  1157,    -1,  1159,    -1,  1161,    -1,
      -1,    -1,    -1,  1526,    -1,    -1,    -1,    -1,  1171,    -1,
    1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,  1186,  2717,    -1,    -1,    -1,  1572,    -1,
      -1,    -1,    -1,    -1,  2009,    -1,  2011,    -1,   522,   523,
      -1,    -1,   526,   527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1579,    -1,  2033,  2752,
    2035,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1274,    -1,  1276,    -1,    -1,    -1,    -1,    -1,    -1,
    2095,  2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1296,    -1,  1298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2118,   988,    -1,   990,   991,    -1,    -1,
      -1,    -1,    -1,  2128,    -1,    -1,    -1,  1001,    -1,    -1,
      -1,    -1,    -1,  1686,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1696,    -1,    -1,  2151,    -1,  2153,  1023,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2166,    -1,  2168,    -1,    -1,    -1,  1041,  1042,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1051,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1067,    -1,    -1,    -1,    -1,    -1,    -1,
    1074,  1075,    -1,  1777,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1799,    -1,  2950,    -1,    -1,
    2953,    -1,    -1,    -1,  1427,    -1,  1429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   988,  1497,   990,   991,    -1,    -1,    -1,
    1884,    -1,    -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,  2334,
      -1,  1884,    -1,  1526,  1908,    -1,    -1,  1911,  1023,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1908,  1041,  1042,  1911,    -1,
    1934,  1554,    -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1572,
      -1,  1934,    -1,  2388,    -1,    -1,  2391,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2009,    -1,  2011,    -1,    -1,
      -1,  1126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2457,    -1,    -1,  2460,  2009,    -1,  2011,  2033,
      -1,  2035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,    -1,
    2033,  2486,  2035,    -1,    -1,    -1,    -1,  1001,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,    -1,
    2505,    -1,    -1,    -1,  2057,    -1,    -1,    -1,    -1,  1023,
    2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2524,
      -1,  2095,    -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1051,    -1,    -1,
      -1,  2546,    -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,
    2555,    -1,    -1,  1067,  2128,    -1,    -1,    -1,    -1,    -1,
    1074,  1075,    -1,    -1,    -1,  2118,   522,   523,    -1,    -1,
     526,    -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,
      -1,    -1,    -1,    -1,  1777,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2166,    -1,  2168,    -1,    -1,    -1,  2151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1799,    -1,    -1,    -1,
      -1,    -1,  1126,  2166,  1488,  2168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1497,  2177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,  2198,    -1,    -1,    -1,    -1,
      -1,    -1,  1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1554,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1884,    -1,    -1,    -1,    -1,    -1,    -1,  1572,    -1,
      -1,  1575,    -1,    -1,    -1,  1579,    -1,    -1,    -1,  2714,
      -1,    -1,  2717,    -1,  1588,  1908,    -1,    -1,  1911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2283,    -1,    -1,    -1,    -1,    -1,    -1,  1611,    -1,    -1,
      -1,  1934,  2295,    -1,    -1,    -1,    -1,  2752,    -1,    -1,
      -1,    -1,    -1,  1627,    -1,    -1,    -1,    -1,  1632,    -1,
    2334,    -1,  1636,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1645,    -1,  2778,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1488,    -1,    -1,    -1,    -1,    -1,  2814,
      -1,    -1,  1497,    -1,  2388,    -1,  2009,  2391,  2011,    -1,
      -1,    -1,  1696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1705,  1517,    -1,    -1,  2388,    -1,    -1,  2391,    -1,
    2033,  1526,  2035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2431,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1554,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2431,    -1,
      -1,    -1,    -1,  2457,    -1,    -1,  2460,  1572,    -1,    -1,
    1575,    -1,    -1,    -1,  1579,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2095,  1588,  2457,    -1,    -1,  2460,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2118,  1611,    -1,  2502,    -1,
      -1,  2505,    -1,  2486,    -1,  2128,    -1,    -1,    -1,    -1,
      -1,  2515,  1627,    -1,    -1,  2950,    -1,    -1,  2953,    -1,
    2524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,
    2153,    -1,  2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2524,  2546,  2166,  1488,  2168,    -1,    -1,    -1,    -1,
      -1,  2555,    -1,  1497,    -1,    -1,    -1,    -1,    -1,    -1,
    1864,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2555,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1696,  1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1705,    -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,    -1,
    1554,    -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1572,    -1,
      -1,  1575,    -1,    -1,    -1,  1579,    -1,  1023,    -1,    -1,
      -1,    -1,    -1,    -1,  1588,    -1,    -1,  2630,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1051,    -1,  1611,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1627,    -1,    -1,    -1,    -1,  1632,    -1,
      -1,    -1,  1636,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2714,  2334,    -1,  2717,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,
    1126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,    -1,  1696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1705,    -1,    -1,    -1,  2388,    -1,    -1,  2391,  2752,
      -1,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,
      -1,  2095,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,  2431,    -1,
    2814,    -1,    -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,
      -1,  2814,    -1,    -1,  2457,    -1,    -1,  2460,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2166,  2486,  2168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,    -1,  2502,
      -1,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2515,    -1,  2198,    -1,  2200,    -1,    -1,    -1,
      -1,  2524,    -1,    -1,    -1,    -1,  2210,    -1,    -1,  2213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2950,    -1,    -1,
    2953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2118,    -1,    -1,    -1,  2311,    -1,    -1,
      -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2166,    -1,  2168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2177,    -1,  2368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,    -1,  2717,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1497,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,
      -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2095,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,  1554,    -1,
      -1,    -1,    -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,
    2295,    -1,    -1,    -1,  2128,    -1,  1572,    -1,    -1,  1575,
      -1,  2814,    -1,  1579,    -1,    -1,  2311,    -1,  2502,    -1,
      -1,  2505,  1588,    -1,    -1,    -1,    -1,  2151,    -1,  2153,
      -1,  2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2524,    -1,  2166,    -1,  2168,  1611,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1627,  2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2555,    -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2210,    -1,    -1,  2213,
      -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1705,
      -1,    -1,    -1,    -1,    -1,    -1,  2630,  2950,    -1,    -1,
    2953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2680,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,    -1,
    2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2524,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2814,    -1,    -1,    -1,    -1,  2630,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,
      -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2577,    -1,    -1,    -1,  2752,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2630,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2814,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2095,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2151,    -1,  2153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2166,    -1,  2168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,    -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2778,  2950,    -1,    -1,  2953,    -1,
      -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953,
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
      -1,    -1,    -1,    -1,    -1,    -1,  2502,    -1,    -1,  2505,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2524,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2555,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2577,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2630,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2788,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2814,    -1,
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
      -1,    -1,    -1,    -1,  2950,    -1,    -1,  2953
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    21,    32,    33,    34,    43,
      73,    75,   101,   104,   143,   149,   153,   154,   165,   204,
     205,   206,   209,   214,   271,   272,   276,   279,   311,   320,
     339,   341,   343,   345,   346,   348,   350,   352,   354,   356,
     358,   360,   362,   363,   364,   365,   367,   369,   371,   373,
     400,   569,   574,   579,   584,   589,   594,   599,   604,   609,
     614,   619,   624,   629,   634,   639,   644,   649,   654,   659,
     664,   669,   674,   679,   681,   685,   687,   689,   693,   694,
     696,   698,   701,   703,   705,   707,   709,   711,   713,   715,
     717,   719,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   741,   742,   746,   749,   751,   753,   755,   760,   764,
     771,     5,     6,     9,    11,    73,    75,   321,    33,   680,
      33,   682,    19,    22,    30,    33,   165,     4,    33,   702,
     734,   736,   738,   743,   750,   368,    17,   761,   280,   756,
     686,   340,   374,   149,     8,     9,   754,     7,   277,   372,
      33,   342,   347,     4,    33,   101,   166,   167,   168,   185,
     355,   366,   361,   401,   370,     0,     7,   104,   220,   229,
     273,   322,   324,   325,   326,   328,   330,   332,   334,   336,
     337,    33,   714,    33,   716,   718,   720,   722,   149,   724,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     777,   825,   867,   916,   976,   984,   986,   990,   994,   999,
    1014,  1074,  1076,   688,    35,    38,    39,    40,    41,    42,
      43,   786,   834,   887,   994,   999,  1014,  1020,  1027,  1045,
    1047,  1050,  1051,  1066,  1076,   690,   787,   835,   888,   994,
     999,  1014,  1020,  1027,  1045,  1047,  1051,  1066,  1076,   312,
     772,   765,   697,   699,   359,     5,     6,   704,    35,    64,
     795,   841,   894,   994,   999,  1014,  1024,  1045,  1063,    30,
      65,   811,   857,   910,   992,   999,  1020,  1045,  1051,  1090,
      66,    67,   812,   858,   911,  1057,  1059,    41,   813,   859,
     912,   994,   999,  1014,  1020,  1049,  1076,    68,   815,   860,
     913,   994,   999,  1014,  1018,  1049,     4,     5,     6,    11,
      15,   818,   862,   915,   235,   420,   432,   446,   559,   994,
     752,   249,    25,    36,   281,   282,   283,   284,   988,   249,
     757,    23,    56,    57,    58,    60,   789,   836,   889,   952,
     999,  1020,  1027,  1032,  1039,  1041,  1043,  1045,  1051,  1076,
      23,   134,   135,   136,   137,   138,   139,   140,   141,   383,
     421,   433,   447,   449,   450,   451,   454,   478,   480,   493,
     919,   986,   994,   999,  1014,  1074,    33,   138,   218,   473,
     562,   563,   564,   565,   566,   567,   568,    33,   726,     4,
      33,   570,   600,   102,   103,   785,   833,   886,   978,   982,
     986,   994,   999,  1014,  1074,  1090,   165,     4,     6,     8,
      11,    13,    73,   101,   165,   275,   278,   279,   320,   339,
     341,   343,   348,   354,   363,   367,   369,   373,   400,   569,
     574,   584,   594,   599,   604,   614,   624,   629,   634,   639,
     644,   649,   654,   664,   674,   683,   685,   691,   694,   701,
     703,   707,   711,   715,   717,   721,   723,   725,   727,   729,
     731,   733,   739,   741,   744,   747,   753,   249,   376,   344,
      23,   150,   151,   152,   384,   422,   434,   447,   449,   450,
     451,   478,   495,   497,   499,   922,   986,   994,   999,  1014,
    1020,  1045,  1074,  1090,   155,   156,   157,   158,   159,   203,
     386,   424,   436,   500,   501,   502,   503,   505,   506,     5,
       6,     9,   605,   635,     8,     9,   640,   349,   166,   166,
     357,    23,   107,   171,   172,   173,   190,   193,   390,   428,
     440,   451,   454,   507,   518,   520,   522,   527,   547,   942,
     982,   994,   999,  1014,  1050,   419,   431,   445,   454,   161,
     207,   208,   249,   395,   398,   399,   415,   416,   417,   160,
     162,   213,   402,   404,   407,   408,   414,   415,   416,   417,
     418,   249,   375,   220,     7,     8,   101,   166,   185,   323,
     338,    23,   793,   839,   892,   955,   976,   984,   986,   990,
     994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,
    1047,  1051,  1066,  1074,  1076,   801,   847,   900,   916,   976,
     984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,  1047,
    1050,  1051,  1066,  1074,  1076,   695,   802,   848,   901,   916,
     976,   984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,
    1047,  1051,  1066,  1074,  1076,   803,   849,   902,   916,   976,
     984,   986,   990,   992,   994,   999,  1014,  1020,  1045,  1051,
    1074,  1076,   804,   850,   903,   916,   976,   984,   986,   990,
     994,   999,  1014,  1020,  1074,  1076,   805,   851,   904,   916,
     976,   984,   986,   990,   994,   999,  1014,  1074,  1076,    33,
     730,   806,   852,   905,   916,   976,   984,   986,   990,   994,
     999,  1014,  1074,  1076,   249,   977,   249,  1000,  1015,  1075,
     985,  1077,   249,   249,   247,   867,   790,   837,   890,   952,
     994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,
    1047,  1050,  1051,  1066,  1076,   249,   249,  1067,  1046,   249,
    1048,   256,   887,   791,   838,   891,   952,   994,   999,  1014,
    1020,  1027,  1032,  1039,  1041,  1043,  1045,  1047,  1051,  1066,
    1076,   256,   888,   249,   313,   249,   249,    61,    62,    63,
     794,   840,   893,  1027,  1032,  1041,  1053,  1055,  1056,   249,
     186,   191,   192,   249,   392,   430,   444,   533,   543,   545,
      33,   706,    33,   708,   796,   842,   895,   952,   994,   999,
    1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,  1051,  1063,
    1076,  1025,   249,   256,   894,  1091,   249,   256,   910,  1058,
    1060,   256,   912,  1019,   256,   913,    23,   256,   964,   249,
     247,   446,   819,   863,   915,   233,   762,   763,   249,   285,
     247,   283,   233,   758,   759,    59,    69,   820,   821,   864,
     980,  1061,   249,  1040,  1042,   249,  1044,   256,   889,   249,
     448,   249,   455,   479,   249,   494,   247,   433,   474,   247,
     566,   247,   565,   728,   447,   449,   450,   451,   478,   495,
     497,   499,   807,   853,   906,   922,   986,   994,   999,  1014,
    1020,  1045,  1074,  1076,     5,     6,   575,   571,   572,   573,
     978,   982,   986,   994,   999,  1014,  1024,  1045,  1063,  1074,
    1090,   601,   602,   603,   978,   982,   986,   992,   994,   999,
    1014,  1020,  1045,  1051,  1074,  1090,   979,   983,   247,   886,
      33,   684,     4,   740,   745,   748,     8,     4,   101,   233,
     377,    23,   385,   423,   435,   447,   449,   450,   451,   478,
     495,   497,   499,   948,   986,   994,   999,  1014,  1020,  1027,
    1032,  1039,  1041,  1043,  1045,  1051,  1074,  1076,   249,   496,
     498,   247,   434,   249,   233,   247,   436,    33,   610,    33,
     615,   630,    23,   451,   454,   507,   518,   522,   527,   547,
     606,   607,   608,   928,   976,   984,   986,   990,   994,   999,
    1014,  1050,  1074,  1076,    23,   451,   454,   507,   518,   522,
     527,   547,   636,   637,   638,   932,   994,   999,  1014,  1020,
    1027,  1032,  1039,  1041,  1043,  1045,  1050,  1051,  1076,     4,
      33,   645,   655,   451,   454,   507,   518,   522,   527,   547,
     641,   642,   643,   942,   978,   982,   986,   994,   999,  1014,
    1050,  1074,  1090,    23,   163,   164,   387,   425,   437,   507,
     514,   516,   547,   925,   351,   353,    23,   107,   187,   391,
     429,   441,   442,   443,   454,   511,   533,   538,   945,  1050,
     249,   249,   519,   521,   523,   528,   548,   247,   440,   247,
     445,   233,   396,   397,   249,   409,   185,   210,   211,   212,
     403,   406,   410,   411,   412,   413,   247,   408,   247,   407,
     233,   382,   220,   333,     8,    75,   331,   327,   329,   221,
     222,   228,   778,   826,   868,   869,   870,   871,   872,   873,
    1001,  1002,  1006,   138,   784,   832,   883,   249,   256,   892,
     256,   900,   793,   256,   901,   256,   902,   256,   903,   256,
     904,   732,    23,   447,   449,   450,   478,   495,   497,   499,
     809,   855,   908,   967,   976,   984,   986,   990,   994,   999,
    1014,  1020,  1045,  1050,  1074,  1076,   256,   905,     4,   233,
     917,   249,    26,    27,    28,    74,   987,   249,   249,   249,
     249,   249,    75,    76,    77,   991,    93,    94,    95,    96,
      97,    98,    99,   100,   233,   995,   998,   867,   256,   890,
      44,   233,  1021,  1026,    52,    53,    54,   233,  1029,  1031,
     249,   249,   219,  1052,   249,   887,   256,   891,   888,   233,
      37,   315,   316,   317,   318,    72,   233,   773,   774,   775,
     776,    87,    88,   242,   243,   244,   253,   254,   255,   766,
     767,  1054,   256,   893,   233,   700,   249,   544,   249,   233,
     393,   394,   247,   444,   710,   797,   843,   896,   916,   976,
     984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,  1047,
    1050,  1051,  1063,  1066,  1074,  1076,   712,   798,   844,   897,
     916,   976,   984,   986,   990,   994,   999,  1014,  1020,  1027,
    1045,  1047,  1051,  1063,  1066,  1074,  1076,   256,   895,   249,
      47,  1064,   894,   249,     4,    18,   101,   993,   910,   249,
     249,   912,   249,   913,   249,   964,    87,    88,    91,    92,
     233,   242,   243,   244,   253,   254,   255,   560,   561,   446,
     247,   250,   989,   249,   283,   247,   250,   981,   249,   247,
     864,    33,   233,   953,   249,   249,   233,  1034,   249,   889,
      34,   233,   920,   249,    87,    88,    91,    92,   233,   242,
     243,   244,   253,   254,   255,   452,   453,   249,   249,   142,
     233,   481,   483,   249,   433,   249,   566,   565,   447,   449,
     450,   451,   478,   495,   497,   499,   808,   854,   907,   948,
     986,   994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,
    1045,  1051,  1074,  1076,   256,   906,    33,   580,    33,   585,
     576,   577,   578,   952,   978,   982,   986,   994,   999,  1014,
    1020,  1027,  1032,  1039,  1041,  1043,  1045,  1051,  1063,  1074,
    1076,   247,   573,   247,   603,   249,   249,   886,   692,   788,
    1050,   814,  1050,    68,   816,   861,   914,  1016,  1050,   817,
    1050,     4,     8,   250,   249,   247,   435,   149,   233,   923,
     249,   249,   434,   160,   161,   162,   504,   436,   620,   451,
     454,   507,   518,   522,   527,   547,   611,   612,   613,   928,
     976,   984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,
    1047,  1050,  1051,  1063,  1066,  1074,  1076,   625,   451,   454,
     507,   518,   522,   527,   547,   616,   617,   618,   928,   976,
     984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,  1047,
    1050,  1051,  1063,  1066,  1074,  1076,   451,   454,   507,   518,
     522,   527,   547,   631,   632,   633,   928,   976,   984,   986,
     990,   992,   994,   999,  1014,  1020,  1045,  1050,  1051,  1074,
    1076,   249,   247,   608,   249,   247,   638,     5,     6,   650,
     451,   454,   507,   518,   522,   527,   547,   646,   647,   648,
     942,   978,   982,   986,   994,   999,  1014,  1024,  1045,  1050,
    1063,  1074,  1090,   451,   454,   507,   518,   522,   527,   547,
     656,   657,   658,   942,   978,   982,   986,   992,   994,   999,
    1014,  1020,  1045,  1050,  1051,  1074,  1090,   247,   643,   249,
     515,   517,   247,   437,    23,   388,   426,   438,   454,   507,
     547,   936,  1050,    23,   389,   427,   439,   454,   507,   547,
     939,  1050,   249,   249,   249,   247,   441,   165,   233,   943,
     169,   170,   233,   508,   510,   249,   249,   249,   249,   249,
     440,   445,   247,   250,   396,   249,   247,   405,   407,   408,
     403,   408,   403,   407,   250,   782,   830,   877,   878,   879,
     994,   999,  1014,  1024,  1045,  1063,   335,   451,   454,   507,
     518,   522,   527,   547,   781,   829,   876,   942,   978,   982,
     986,   994,   999,  1014,  1050,  1074,  1090,   223,   224,   225,
     226,   779,   827,   874,  1001,  1002,  1004,  1006,  1008,  1010,
    1012,  1076,   780,   828,   875,  1001,  1002,  1004,  1006,  1008,
    1010,  1012,  1076,   249,  1003,  1007,   247,   868,  1004,  1008,
    1010,    30,  1078,   226,  1080,   884,   247,   883,     4,    33,
     233,   956,   892,   900,   901,   902,   903,   904,    23,   447,
     449,   450,   478,   495,   497,   499,   810,   856,   909,   971,
     976,   984,   986,   990,   994,   999,  1014,  1020,  1027,  1032,
    1039,  1041,  1043,  1045,  1050,  1051,  1074,  1076,   249,   256,
     908,   905,   248,   250,   233,   258,   250,   233,   259,   260,
     260,   260,   260,    78,    79,    80,    87,    88,    91,    92,
     233,   242,   243,   244,   253,   254,   255,  1086,  1087,  1088,
    1089,   250,   247,   250,   248,   890,   247,   250,   248,   247,
     248,   250,   249,    45,    46,    47,    48,    49,    50,    51,
      55,  1068,  1069,  1070,  1072,  1073,   258,   250,   258,   891,
     314,   319,   247,   317,   250,   248,   250,   248,   249,   893,
     250,   188,   233,   534,   536,   249,   113,   114,   115,   546,
     247,   250,   444,   799,   845,   898,   955,   976,   984,   986,
     990,   994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,
    1045,  1047,  1050,  1051,  1063,  1066,  1074,  1076,   256,   896,
     800,   846,   899,   955,   976,   984,   986,   990,   994,   999,
    1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,  1047,  1051,
    1063,  1066,  1074,  1076,   256,   897,   895,   260,  1065,   250,
      80,  1087,  1092,  1093,   250,   260,   260,   260,    14,   233,
     965,   248,   762,   250,   105,   106,   107,   108,   289,   290,
     293,   758,   249,    93,    94,    95,    96,    97,    98,    99,
     100,   233,  1062,   864,   248,   250,   260,   260,   247,   248,
     250,   260,   248,   250,   258,   248,   142,   143,   145,   146,
     147,   148,   456,   457,   458,   468,   258,   484,   247,   250,
     248,   258,   215,   216,   475,   476,   256,   907,   906,   590,
     581,   582,   583,   916,   976,   978,   982,   984,   986,   990,
     994,   999,  1014,  1020,  1027,  1045,  1047,  1050,  1051,  1063,
    1066,  1074,  1076,   595,   586,   587,   588,   916,   976,   978,
     982,   984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,
    1047,  1050,  1051,  1063,  1066,  1074,  1076,   247,   578,   573,
     603,   258,   258,   792,  1050,  1017,   256,   914,     4,   138,
     185,   217,   378,   379,   380,   469,    33,   149,   233,   949,
     435,   248,   250,   258,   258,   250,    23,   451,   454,   507,
     518,   522,   527,   547,   621,   622,   623,   959,   976,   984,
     986,   990,   994,   999,  1014,  1020,  1027,  1032,  1039,  1041,
    1043,  1045,  1047,  1050,  1051,  1066,  1074,  1076,   247,   613,
     451,   454,   507,   518,   522,   527,   547,   626,   627,   628,
     959,   976,   984,   986,   990,   994,   999,  1014,  1020,  1027,
    1032,  1039,  1041,  1043,  1045,  1047,  1050,  1051,  1066,  1074,
    1076,   247,   618,   247,   633,     4,   165,   233,   929,   608,
      33,   165,   233,   933,   638,    33,   660,    33,   665,   451,
     454,   507,   518,   522,   527,   547,   651,   652,   653,   932,
     978,   982,   986,   994,   999,  1014,  1020,  1027,  1032,  1039,
    1041,  1043,  1045,  1050,  1051,  1063,  1074,  1076,   247,   648,
     247,   658,   643,   165,   233,   926,   249,   249,   437,   249,
     247,   438,   249,   247,   439,   165,   233,   946,   233,   512,
     189,   233,   539,   541,   441,   248,   250,   247,   250,   248,
     260,   260,   174,   175,   176,   177,   178,   179,   180,   524,
     525,    93,    94,    95,    96,    97,    98,    99,   100,   233,
     529,   530,   531,   532,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   233,   549,   551,   554,   557,   558,   397,
     250,   258,   405,   247,   408,   247,   407,   247,   403,   247,
     403,   247,   408,   247,   877,  1078,  1080,   451,   454,   507,
     518,   522,   527,   547,   783,   831,   880,   881,   882,   942,
     978,   982,   986,   994,   999,  1014,  1024,  1045,  1050,  1063,
    1074,   247,   876,  1005,  1009,  1011,  1013,   247,   874,   247,
     875,   259,   261,   249,   249,   868,  1079,  1081,   249,   883,
     248,   248,   250,   249,   256,   909,     4,   149,   233,   968,
     908,   918,   250,   247,   250,   250,   250,   250,   248,   247,
     996,   997,  1022,  1023,  1030,   233,   260,   250,   248,   247,
     247,   250,   250,   250,   249,   317,   547,   823,   824,   866,
     233,   776,    70,   822,   865,  1036,   233,   768,   769,   260,
     794,   537,   247,   250,   248,   260,   250,   393,   256,   898,
     896,   256,   899,   897,   250,   247,   248,   247,   250,   250,
     250,   248,   250,   260,   247,   248,   290,   291,   258,   250,
     954,   250,   250,  1035,   233,   250,   921,   250,   260,   459,
     248,   247,   250,   249,   482,   260,   250,   477,   250,   907,
     591,   592,   593,   955,   976,   978,   982,   984,   986,   990,
     994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,
    1047,  1050,  1051,  1063,  1066,  1074,  1076,   247,   583,   596,
     597,   598,   955,   976,   978,   982,   984,   986,   990,   994,
     999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,  1045,  1047,
    1050,  1051,  1063,  1066,  1074,  1076,   247,   588,   578,   250,
     250,   249,   914,   470,   249,   248,   248,   250,   924,   250,
     250,   249,   247,   623,   613,   247,   628,   618,   633,   248,
     248,   250,   248,   248,   250,   670,   451,   454,   507,   518,
     522,   527,   547,   661,   662,   663,   928,   976,   978,   982,
     984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,  1047,
    1050,  1051,  1063,  1066,  1074,  1076,   675,   451,   454,   507,
     518,   522,   527,   547,   666,   667,   668,   928,   976,   978,
     982,   984,   986,   990,   994,   999,  1014,  1020,  1027,  1045,
    1047,  1050,  1051,  1063,  1066,  1074,  1076,   247,   653,   648,
     658,   166,   250,   260,   260,   165,   233,   937,   438,   165,
     233,   940,   439,   185,   250,   247,   250,   542,   247,   250,
     248,   944,   509,   260,   250,   250,   250,   248,   250,   247,
     249,   249,   249,   247,   250,   248,   194,   195,   247,   552,
     555,   557,   558,   250,   408,   407,   403,   403,   408,   877,
     247,   880,  1078,  1080,   876,   249,   249,   249,   249,   874,
     875,   247,   250,   261,   259,   264,   249,   249,   145,   148,
     885,   958,   957,     4,    33,   149,   233,   972,   909,   248,
     248,   250,   258,   259,   260,  1087,   260,   260,   260,   260,
     260,  1028,   250,  1069,    45,    46,    55,  1071,   233,   289,
     247,   866,   249,   247,   248,   250,   249,   535,   260,   250,
     898,   899,   233,   260,  1087,   966,   250,   290,   286,   238,
     250,   258,   260,  1033,   258,   250,   249,   260,   457,   233,
     485,   486,   260,   248,   247,   593,   583,   247,   598,   588,
     260,   249,   143,   145,   146,   147,   148,   215,   216,   381,
     951,   950,   258,     4,    33,   165,   233,   960,   623,   628,
     931,   930,   935,   934,   451,   454,   507,   518,   522,   527,
     547,   671,   672,   673,   959,   976,   978,   982,   984,   986,
     990,   994,   999,  1014,  1020,  1027,  1032,  1039,  1041,  1043,
    1045,  1047,  1050,  1051,  1063,  1066,  1074,  1076,   247,   663,
     451,   454,   507,   518,   522,   527,   547,   676,   677,   678,
     959,   976,   978,   982,   984,   986,   990,   994,   999,  1014,
    1020,  1027,  1032,  1039,  1041,  1043,  1045,  1047,  1050,  1051,
    1063,  1066,  1074,  1076,   247,   668,   653,   248,   250,   250,
     167,   250,   168,   250,   248,   513,   249,   540,   260,   258,
     260,   181,   182,   183,   184,   526,   529,   233,   233,   233,
     550,   260,   552,   557,   194,   195,   247,   553,   556,   557,
     558,   880,   259,   269,   269,   269,  1086,   259,   250,   248,
     250,   233,  1083,  1085,  1088,  1089,   233,  1082,  1084,  1088,
    1089,   248,   258,   258,   248,   248,   248,   250,   969,   970,
     250,   250,   250,   866,    71,  1037,   768,   233,   770,   233,
     260,   250,   258,     4,     7,     8,   101,   274,   279,   288,
     311,   320,   679,   685,   687,   696,   701,   703,   705,   709,
     733,   735,   737,   741,   742,   749,   751,   753,   755,   251,
     250,   233,   460,   461,   250,   233,   488,   247,   250,   260,
     593,   598,   250,   145,   146,   147,   148,   471,   472,   250,
     258,   258,   248,   248,   248,   250,   258,   258,   258,   258,
     247,   673,   663,   247,   678,   668,   927,   166,   166,   947,
     260,   233,   260,   250,   250,   250,   260,   553,   557,   247,
     557,   270,   250,   250,   250,   248,   227,   248,   247,   248,
     247,   260,   973,   975,   974,   258,   258,   238,   250,   250,
      33,     4,   287,     4,   109,   111,   112,   119,   120,   121,
     233,   294,   295,   296,   298,   299,   301,   302,   303,   305,
     306,   233,   463,   247,   250,   487,   238,   486,   250,   248,
     962,   961,   963,   673,   678,   258,   248,   248,   258,   250,
     557,   247,   248,   265,   267,   260,   249,   259,   262,  1085,
     259,   263,  1085,   250,   258,   258,   258,   233,  1038,   250,
     249,   249,   249,   249,   249,   249,   249,   249,   247,   292,
     295,   462,   238,   461,   238,   233,   489,   258,   258,   258,
     258,   938,   941,   266,   227,   250,   259,   247,   250,   247,
     250,   307,   110,   309,   309,   309,   309,   309,   309,   309,
     295,   252,   238,   233,   464,   489,   490,   258,   258,   269,
     249,   250,   259,   259,   308,   309,   249,   233,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     304,   113,   114,   115,   116,   117,   118,   300,   233,   233,
     233,   250,   464,   465,   248,   259,   250,   777,   233,   297,
     250,   250,   248,   233,   250,   310,   250,   233,   491,   268,
     250,   466,   248,   492,   265,   248,   248,   467,   233,   233
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   257,   258,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   265,   266,   265,   267,   268,   267,   270,
     269,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   272,   271,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   277,   276,
     278,   280,   279,   281,   281,   282,   282,   282,   283,   283,
     285,   286,   287,   284,   288,   288,   289,   289,   289,   291,
     292,   290,   293,   293,   293,   293,   294,   294,   294,   295,
     295,   295,   295,   297,   296,   298,   298,   298,   299,   300,
     300,   300,   300,   300,   300,   301,   302,   303,   303,   303,
     303,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   305,   306,   307,   306,   308,   309,   310,
     309,   312,   311,   314,   313,   315,   315,   316,   316,   316,
     317,   319,   318,   321,   320,   323,   322,   324,   325,   327,
     326,   329,   328,   331,   330,   333,   332,   335,   334,   336,
     338,   337,   340,   339,   342,   341,   344,   343,   345,   347,
     346,   349,   348,   351,   350,   353,   352,   355,   354,   357,
     356,   359,   358,   361,   360,   362,   363,   364,   366,   365,
     368,   367,   370,   369,   372,   371,   374,   373,   375,   375,
     375,   375,   376,   377,   378,   378,   378,   379,   380,   381,
     381,   381,   381,   381,   381,   381,   382,   383,   383,   384,
     384,   385,   385,   386,   387,   388,   388,   389,   389,   390,
     390,   391,   392,   392,   392,   393,   394,   394,   395,   395,
     395,   396,   396,   397,   398,   398,   399,   399,   399,   401,
     400,   402,   402,   402,   402,   402,   402,   402,   402,   403,
     403,   404,   404,   404,   404,   404,   405,   405,   405,   405,
     405,   405,   405,   406,   406,   406,   406,   407,   407,   407,
     407,   407,   409,   408,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   419,   420,   420,   421,   421,   421,
     422,   422,   422,   423,   423,   423,   424,   424,   424,   425,
     425,   425,   426,   426,   426,   427,   427,   427,   428,   428,
     428,   429,   429,   429,   430,   430,   430,   431,   431,   431,
     432,   432,   432,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   436,   436,   436,
     436,   436,   436,   437,   437,   437,   437,   437,   438,   438,
     438,   438,   438,   439,   439,   439,   439,   439,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   441,   441,   442,   442,   443,   443,   443,   443,
     444,   444,   444,   445,   446,   446,   448,   447,   449,   450,
     451,   452,   452,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   455,   454,   456,   456,   457,   459,   458,
     460,   460,   462,   461,   463,   461,   465,   466,   464,   467,
     467,   468,   468,   468,   468,   468,   470,   469,   471,   472,
     472,   472,   472,   474,   473,   475,   476,   477,   476,   479,
     478,   480,   481,   482,   481,   481,   484,   483,   485,   485,
     487,   486,   488,   486,   490,   491,   489,   492,   492,   494,
     493,   496,   495,   498,   497,   499,   500,   501,   502,   503,
     504,   504,   504,   505,   506,   507,   508,   509,   508,   508,
     510,   510,   511,   512,   513,   512,   515,   514,   517,   516,
     519,   518,   521,   520,   523,   522,   524,   524,   525,   525,
     525,   525,   525,   525,   525,   526,   526,   526,   526,   528,
     527,   529,   529,   530,   530,   530,   530,   531,   531,   531,
     531,   531,   531,   531,   531,   532,   533,   534,   535,   534,
     534,   537,   536,   538,   539,   540,   539,   539,   542,   541,
     544,   543,   545,   546,   546,   546,   548,   547,   549,   550,
     549,   549,   551,   551,   551,   551,   551,   552,   552,   552,
     552,   553,   553,   554,   554,   554,   555,   555,   555,   556,
     556,   556,   557,   557,   557,   557,   557,   557,   558,   559,
     560,   560,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   562,   562,   562,   563,   563,   563,   564,   564,
     564,   565,   566,   566,   567,   568,   570,   569,   571,   571,
     572,   572,   572,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   575,   574,   576,   576,   577,   577,
     577,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   580,
     579,   581,   581,   582,   582,   582,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   585,   584,   586,   586,
     587,   587,   587,   588,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   590,   589,   591,   591,   592,   592,   592,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   595,   594,   596,   596,   597,   597,
     597,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   600,   599,   601,   601,   602,
     602,   602,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   605,   604,   606,   606,   607,   607,
     607,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   610,
     609,   611,   611,   612,   612,   612,   613,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   615,   614,   616,   616,   617,   617,   617,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   620,   619,   621,   621,   622,   622,   622,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   625,   624,
     626,   626,   627,   627,   627,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   630,   629,   631,   631,   632,   632,   632,
     633,   633,   633,   633,   633,   633,   633,   633,   633,   633,
     633,   633,   633,   633,   633,   633,   633,   633,   633,   633,
     633,   633,   635,   634,   636,   636,   637,   637,   637,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     640,   639,   641,   641,   642,   642,   642,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   645,   644,   646,   646,   647,   647,
     647,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   650,   649,   651,   651,   652,   652,   652,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   655,   654,   656,   656,   657,   657,
     657,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   660,   659,   661,   661,   662,   662,   662,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   665,   664,   666,   666,
     667,   667,   667,   668,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     670,   669,   671,   671,   672,   672,   672,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   675,   674,
     676,   676,   677,   677,   677,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   680,   679,   682,   681,
     684,   683,   686,   685,   688,   687,   690,   689,   692,   691,
     693,   695,   694,   697,   696,   699,   698,   700,   700,   702,
     701,   704,   703,   706,   705,   708,   707,   710,   709,   712,
     711,   714,   713,   716,   715,   718,   717,   720,   719,   722,
     721,   724,   723,   726,   725,   728,   727,   730,   729,   732,
     731,   734,   733,   736,   735,   738,   737,   740,   739,   741,
     743,   742,   745,   744,   746,   748,   747,   750,   749,   752,
     751,   754,   753,   756,   755,   757,   758,   759,   759,   761,
     760,   762,   763,   763,   765,   764,   766,   767,   767,   767,
     767,   767,   767,   767,   767,   768,   769,   769,   770,   772,
     771,   773,   774,   774,   775,   775,   776,   777,   777,   778,
     778,   779,   780,   781,   781,   782,   782,   783,   783,   784,
     784,   785,   785,   786,   786,   787,   787,   788,   788,   789,
     789,   790,   790,   791,   791,   792,   792,   793,   793,   794,
     794,   795,   795,   796,   796,   797,   797,   798,   798,   799,
     799,   800,   800,   801,   801,   802,   802,   803,   803,   804,
     804,   805,   805,   806,   806,   807,   807,   808,   808,   809,
     809,   810,   810,   811,   811,   812,   813,   813,   814,   814,
     815,   815,   816,   816,   817,   817,   818,   818,   819,   819,
     820,   820,   821,   821,   821,   822,   822,   823,   823,   824,
     824,   824,   825,   825,   825,   826,   826,   826,   827,   827,
     827,   828,   828,   828,   829,   829,   829,   830,   830,   830,
     831,   831,   831,   832,   832,   832,   833,   833,   833,   834,
     834,   834,   835,   835,   835,   836,   836,   836,   837,   837,
     837,   838,   838,   838,   839,   839,   839,   840,   840,   840,
     841,   841,   841,   842,   842,   842,   843,   843,   843,   844,
     844,   844,   845,   845,   845,   846,   846,   846,   847,   847,
     847,   848,   848,   848,   849,   849,   849,   850,   850,   850,
     851,   851,   851,   852,   852,   852,   853,   853,   853,   854,
     854,   854,   855,   855,   855,   856,   856,   856,   857,   857,
     857,   858,   859,   859,   859,   860,   860,   860,   861,   861,
     861,   862,   862,   862,   863,   864,   864,   865,   866,   867,
     867,   867,   867,   867,   867,   867,   867,   867,   867,   868,
     868,   869,   868,   870,   868,   871,   868,   868,   872,   868,
     873,   868,   874,   874,   874,   874,   874,   874,   874,   874,
     875,   875,   875,   875,   875,   875,   875,   875,   876,   876,
     876,   876,   876,   876,   876,   876,   876,   876,   876,   876,
     876,   876,   876,   876,   876,   877,   877,   877,   877,   877,
     877,   878,   877,   879,   877,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   881,   880,   882,   880,   884,   883,
     885,   885,   886,   886,   886,   886,   886,   886,   886,   886,
     887,   887,   887,   887,   887,   887,   887,   887,   887,   887,
     887,   888,   888,   888,   888,   888,   888,   888,   888,   888,
     888,   889,   889,   889,   889,   889,   889,   889,   889,   889,
     889,   889,   890,   890,   890,   890,   890,   890,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   891,   891,
     891,   891,   891,   891,   891,   891,   891,   891,   891,   891,
     891,   891,   891,   892,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   893,   893,   893,   893,   893,   893,   894,
     894,   894,   894,   894,   894,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     902,   902,   902,   902,   902,   902,   902,   902,   902,   902,
     902,   902,   902,   902,   903,   903,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   906,   906,   906,   906,   906,
     906,   906,   906,   906,   906,   906,   906,   906,   906,   906,
     906,   906,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   908,   908,   908,   908,   908,
     908,   908,   908,   908,   908,   908,   908,   908,   908,   908,
     908,   908,   908,   908,   908,   909,   909,   909,   909,   909,
     909,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   910,   910,   910,   910,   910,   910,   911,   911,   912,
     912,   912,   912,   912,   912,   913,   913,   913,   913,   913,
     914,   914,   915,   915,   915,   915,   915,   916,   918,   917,
     917,   919,   921,   920,   920,   922,   924,   923,   923,   925,
     927,   926,   926,   928,   930,   929,   931,   929,   929,   932,
     934,   933,   935,   933,   933,   936,   938,   937,   937,   939,
     941,   940,   940,   942,   944,   943,   943,   945,   947,   946,
     946,   948,   950,   949,   951,   949,   949,   952,   954,   953,
     953,   955,   957,   956,   958,   956,   956,   959,   961,   960,
     962,   960,   963,   960,   960,   964,   966,   965,   965,   967,
     969,   968,   970,   968,   968,   971,   973,   972,   974,   972,
     975,   972,   972,   977,   976,   979,   978,   981,   980,   983,
     982,   985,   984,   986,   987,   987,   987,   987,   988,   989,
     990,   991,   991,   991,   992,   993,   993,   993,   994,   995,
     996,   995,   997,   995,   998,   998,   998,   998,   998,   998,
     998,   998,   998,  1000,   999,  1001,  1003,  1002,  1005,  1004,
    1007,  1006,  1009,  1008,  1011,  1010,  1013,  1012,  1015,  1014,
    1017,  1016,  1019,  1018,  1020,  1021,  1022,  1021,  1023,  1021,
    1025,  1024,  1026,  1027,  1028,  1027,  1029,  1030,  1029,  1029,
    1031,  1031,  1031,  1032,  1033,  1032,  1034,  1035,  1034,  1036,
    1037,  1038,  1040,  1039,  1042,  1041,  1044,  1043,  1046,  1045,
    1048,  1047,  1047,  1049,  1050,  1051,  1052,  1054,  1053,  1055,
    1056,  1058,  1057,  1060,  1059,  1061,  1062,  1062,  1062,  1062,
    1062,  1062,  1062,  1062,  1062,  1063,  1064,  1065,  1064,  1067,
    1066,  1068,  1068,  1069,  1069,  1070,  1070,  1071,  1071,  1071,
    1072,  1072,  1072,  1073,  1073,  1073,  1073,  1073,  1075,  1074,
    1077,  1076,  1079,  1078,  1081,  1080,  1082,  1082,  1083,  1083,
    1084,  1084,  1085,  1085,  1086,  1086,  1087,  1087,  1088,  1088,
    1088,  1089,  1089,  1089,  1089,  1089,  1089,  1089,  1089,  1089,
    1089,  1091,  1090,  1092,  1092,  1093
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     6,     0,     0,     3,     1,     0,     7,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
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
       4,     0,     5,     0,     4,     0,     7,     0,     1,     0,
       3,     0,     4,     0,     5,     0,     5,     0,     6,     0,
       6,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     5,     0,     5,     0,
       6,     0,     3,     0,     3,     0,     3,     0,     3,     1,
       0,     3,     0,     3,     1,     0,     3,     0,     3,     0,
       4,     0,     3,     0,     4,     3,     1,     1,     3,     0,
       5,     1,     1,     3,     0,     7,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     0,
       7,     1,     1,     3,     1,     1,     1,     0,     1,     0,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     2,     3,     0,     1,     0,     1,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     7,
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
       1,     1,     1,     1,     1,     1,     1,     4,     0,     4,
       1,     4,     0,     4,     1,     4,     0,     4,     1,     4,
       0,     5,     1,     4,     0,     4,     0,     4,     1,     4,
       0,     4,     0,     4,     1,     4,     0,     6,     1,     4,
       0,     6,     1,     4,     0,     4,     1,     4,     0,     5,
       1,     4,     0,     4,     0,     4,     1,     4,     0,     4,
       1,     4,     0,     4,     0,     4,     1,     4,     0,     4,
       0,     4,     0,     4,     1,     4,     0,     4,     1,     4,
       0,     4,     0,     4,     1,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     4,     1,     1,     1,     1,     4,     0,
       4,     1,     1,     1,     4,     1,     1,     1,     4,     1,
       0,     4,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     4,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     7,     0,     5,
       0,     5,     0,     5,     4,     1,     0,     4,     0,     4,
       0,     5,     1,     4,     0,     7,     1,     0,     4,     4,
       1,     1,     1,     4,     0,     7,     1,     0,     4,     4,
       3,     1,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     1,     1,     1,     4,     1,     0,     5,     1,
       1,     0,     5,     0,     5,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       5,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     7,     0,     7,     0,     7,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     1,     3,     1
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
#line 136 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8125 "ompparser.cc"
    break;

  case 3: /* variable: EXPR_STRING  */
#line 137 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8131 "ompparser.cc"
    break;

  case 6: /* var_list_cluster: variable  */
#line 148 "ompparser.yy"
                            {
                      printf("var: %s\n", (yyvsp[0].stype));
                      addArg((yyvsp[0].stype));
                    }
#line 8140 "ompparser.cc"
    break;

  case 7: /* var_list_cluster: var_list_cluster ',' variable  */
#line 153 "ompparser.yy"
                    {
                      printf("var: %s\n", (yyvsp[0].stype));
                      addArg((yyvsp[0].stype));
                    }
#line 8149 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 159 "ompparser.yy"
                              { if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8155 "ompparser.cc"
    break;

  case 9: /* var_list_reduction: var_list_reduction ',' variable  */
#line 160 "ompparser.yy"
                                          { if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8161 "ompparser.cc"
    break;

  case 10: /* var_list_allreduction: variable  */
#line 163 "ompparser.yy"
                                 { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8167 "ompparser.cc"
    break;

  case 11: /* var_list_allreduction: var_list_allreduction ',' variable  */
#line 164 "ompparser.yy"
                                             { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8173 "ompparser.cc"
    break;

  case 14: /* $@1: %empty  */
#line 172 "ompparser.yy"
                                    {
                                      chunk_pos += 1;
                                      if (enScatter) {
                                        aumentarScatter();
                                      }
                                      else if (enGatherInst) {
                                        aumentarGather();
                                      }
                                      else if (enAllGatherInst) {
                                        aumentarAllGather();
                                      }
                                    }
#line 8190 "ompparser.cc"
    break;

  case 17: /* $@2: %empty  */
#line 188 "ompparser.yy"
                                {
                                  if (enScatter) {
                                    addArgScatter((yyvsp[-1].stype));
                                  }
                                  else if (enGatherInst) {
                                    addArgGather((yyvsp[-1].stype));
                                  }
                                  else if (enAllGatherInst) {
                                    addArgAllGather((yyvsp[-1].stype));
                                  }
                                }
#line 8206 "ompparser.cc"
    break;

  case 19: /* $@3: %empty  */
#line 203 "ompparser.yy"
                          {
                            if (enScatter) {
                              addArgScatter((yyvsp[0].stype));
                            }
                            else if (enGatherInst) {
                              addArgGather((yyvsp[0].stype));
                            }
                            else if (enAllGatherInst) {
                              addArgAllGather((yyvsp[0].stype));
                            }
                          }
#line 8222 "ompparser.cc"
    break;

  case 106: /* $@4: %empty  */
#line 303 "ompparser.yy"
                   {
                      if(main_init == 1 && MPIInitDone == 0){
                      	MPIInit();
                      	main_init = 0;
                      	MPIInitDone = 1;
                      	main_end = 1;
                      }

                      if (!enCluster) {
                        enCluster = 1;
                        MPIWriteCluster();
                      }
                    }
#line 8240 "ompparser.cc"
    break;

  case 108: /* directiveAuxCluster: cluster_directive  */
#line 320 "ompparser.yy"
                                      {n_llaves = 0;}
#line 8246 "ompparser.cc"
    break;

  case 114: /* directiveAuxCluster: cluster_distribute_directive  */
#line 326 "ompparser.yy"
                                                                         {dist_n_llaves = 0;}
#line 8252 "ompparser.cc"
    break;

  case 115: /* directiveAuxCluster: cluster_teams_distribute_directive  */
#line 327 "ompparser.yy"
                                                                               {dist_n_llaves = 0;}
#line 8258 "ompparser.cc"
    break;

  case 188: /* $@5: %empty  */
#line 406 "ompparser.yy"
                    { }
#line 8264 "ompparser.cc"
    break;

  case 189: /* end_directive: END $@5 end_clause_seq  */
#line 406 "ompparser.yy"
                                       { }
#line 8270 "ompparser.cc"
    break;

  case 191: /* $@6: %empty  */
#line 412 "ompparser.yy"
                                        { }
#line 8276 "ompparser.cc"
    break;

  case 200: /* $@7: %empty  */
#line 429 "ompparser.yy"
                   { }
#line 8282 "ompparser.cc"
    break;

  case 201: /* $@8: %empty  */
#line 429 "ompparser.yy"
                                                              { }
#line 8288 "ompparser.cc"
    break;

  case 202: /* $@9: %empty  */
#line 429 "ompparser.yy"
                                                                                         { }
#line 8294 "ompparser.cc"
    break;

  case 204: /* when_variant_directive: variant_directive  */
#line 432 "ompparser.yy"
                                           { }
#line 8300 "ompparser.cc"
    break;

  case 205: /* when_variant_directive: %empty  */
#line 433 "ompparser.yy"
                  { ; }
#line 8306 "ompparser.cc"
    break;

  case 209: /* $@10: %empty  */
#line 441 "ompparser.yy"
                                             { }
#line 8312 "ompparser.cc"
    break;

  case 210: /* $@11: %empty  */
#line 441 "ompparser.yy"
                                                                             { }
#line 8318 "ompparser.cc"
    break;

  case 212: /* trait_set_selector_name: USER  */
#line 444 "ompparser.yy"
                               { }
#line 8324 "ompparser.cc"
    break;

  case 213: /* trait_set_selector_name: CONSTRUCT  */
#line 445 "ompparser.yy"
                            { }
#line 8330 "ompparser.cc"
    break;

  case 214: /* trait_set_selector_name: DEVICE  */
#line 446 "ompparser.yy"
                         { }
#line 8336 "ompparser.cc"
    break;

  case 215: /* trait_set_selector_name: IMPLEMENTATION  */
#line 447 "ompparser.yy"
                                 { }
#line 8342 "ompparser.cc"
    break;

  case 216: /* trait_selector_list: trait_selector  */
#line 450 "ompparser.yy"
                                     { }
#line 8348 "ompparser.cc"
    break;

  case 217: /* trait_selector_list: trait_selector_list trait_selector  */
#line 451 "ompparser.yy"
                                                     { }
#line 8354 "ompparser.cc"
    break;

  case 218: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 452 "ompparser.yy"
                                                         { }
#line 8360 "ompparser.cc"
    break;

  case 220: /* trait_selector: construct_selector  */
#line 456 "ompparser.yy"
                                     { }
#line 8366 "ompparser.cc"
    break;

  case 223: /* $@12: %empty  */
#line 461 "ompparser.yy"
                                                           { }
#line 8372 "ompparser.cc"
    break;

  case 229: /* context_kind_name: HOST  */
#line 472 "ompparser.yy"
                         { }
#line 8378 "ompparser.cc"
    break;

  case 230: /* context_kind_name: NOHOST  */
#line 473 "ompparser.yy"
                           { }
#line 8384 "ompparser.cc"
    break;

  case 231: /* context_kind_name: ANY  */
#line 474 "ompparser.yy"
                        { }
#line 8390 "ompparser.cc"
    break;

  case 232: /* context_kind_name: CPU  */
#line 475 "ompparser.yy"
                        { }
#line 8396 "ompparser.cc"
    break;

  case 233: /* context_kind_name: GPU  */
#line 476 "ompparser.yy"
                        { }
#line 8402 "ompparser.cc"
    break;

  case 234: /* context_kind_name: FPGA  */
#line 477 "ompparser.yy"
                         { }
#line 8408 "ompparser.cc"
    break;

  case 235: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 480 "ompparser.yy"
                                              { }
#line 8414 "ompparser.cc"
    break;

  case 236: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 483 "ompparser.yy"
                                                { }
#line 8420 "ompparser.cc"
    break;

  case 238: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 487 "ompparser.yy"
                                                                { }
#line 8426 "ompparser.cc"
    break;

  case 239: /* implementation_selector: EXPR_STRING  */
#line 488 "ompparser.yy"
                                      { }
#line 8432 "ompparser.cc"
    break;

  case 240: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 489 "ompparser.yy"
                                                          { }
#line 8438 "ompparser.cc"
    break;

  case 241: /* context_vendor_name: AMD  */
#line 492 "ompparser.yy"
                          { }
#line 8444 "ompparser.cc"
    break;

  case 242: /* context_vendor_name: ARM  */
#line 493 "ompparser.yy"
                          { }
#line 8450 "ompparser.cc"
    break;

  case 243: /* context_vendor_name: BSC  */
#line 494 "ompparser.yy"
                          { }
#line 8456 "ompparser.cc"
    break;

  case 244: /* context_vendor_name: CRAY  */
#line 495 "ompparser.yy"
                           { }
#line 8462 "ompparser.cc"
    break;

  case 245: /* context_vendor_name: FUJITSU  */
#line 496 "ompparser.yy"
                              { }
#line 8468 "ompparser.cc"
    break;

  case 246: /* context_vendor_name: GNU  */
#line 497 "ompparser.yy"
                          { }
#line 8474 "ompparser.cc"
    break;

  case 247: /* context_vendor_name: IBM  */
#line 498 "ompparser.yy"
                          { }
#line 8480 "ompparser.cc"
    break;

  case 248: /* context_vendor_name: INTEL  */
#line 499 "ompparser.yy"
                            { }
#line 8486 "ompparser.cc"
    break;

  case 249: /* context_vendor_name: LLVM  */
#line 500 "ompparser.yy"
                           { }
#line 8492 "ompparser.cc"
    break;

  case 250: /* context_vendor_name: PGI  */
#line 501 "ompparser.yy"
                          { }
#line 8498 "ompparser.cc"
    break;

  case 251: /* context_vendor_name: TI  */
#line 502 "ompparser.yy"
                         { }
#line 8504 "ompparser.cc"
    break;

  case 252: /* context_vendor_name: UNKNOWN  */
#line 503 "ompparser.yy"
                              { }
#line 8510 "ompparser.cc"
    break;

  case 254: /* parallel_selector: PARALLEL  */
#line 509 "ompparser.yy"
                             { }
#line 8516 "ompparser.cc"
    break;

  case 255: /* $@13: %empty  */
#line 510 "ompparser.yy"
                               { }
#line 8522 "ompparser.cc"
    break;

  case 259: /* $@14: %empty  */
#line 517 "ompparser.yy"
                                    { }
#line 8528 "ompparser.cc"
    break;

  case 261: /* $@15: %empty  */
#line 520 "ompparser.yy"
                                            { }
#line 8534 "ompparser.cc"
    break;

  case 263: /* $@16: %empty  */
#line 524 "ompparser.yy"
                                  { }
#line 8540 "ompparser.cc"
    break;

  case 271: /* $@17: %empty  */
#line 539 "ompparser.yy"
                     { }
#line 8546 "ompparser.cc"
    break;

  case 272: /* match_clause: MATCH $@17 '(' context_selector_specification ')'  */
#line 540 "ompparser.yy"
                                                       { }
#line 8552 "ompparser.cc"
    break;

  case 273: /* $@18: %empty  */
#line 544 "ompparser.yy"
                              { }
#line 8558 "ompparser.cc"
    break;

  case 275: /* $@19: %empty  */
#line 547 "ompparser.yy"
                            { }
#line 8564 "ompparser.cc"
    break;

  case 277: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 550 "ompparser.yy"
                                            { }
#line 8570 "ompparser.cc"
    break;

  case 278: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 553 "ompparser.yy"
                                                    { }
#line 8576 "ompparser.cc"
    break;

  case 279: /* $@20: %empty  */
#line 556 "ompparser.yy"
                                      { }
#line 8582 "ompparser.cc"
    break;

  case 281: /* $@21: %empty  */
#line 559 "ompparser.yy"
                                          { update =1; }
#line 8588 "ompparser.cc"
    break;

  case 282: /* cluster_update_directive: CLUSTER UPDATE $@21 cluster_update_clause_optseq  */
#line 559 "ompparser.yy"
                                                                                      { }
#line 8594 "ompparser.cc"
    break;

  case 283: /* $@22: %empty  */
#line 562 "ompparser.yy"
                                        { }
#line 8600 "ompparser.cc"
    break;

  case 285: /* $@23: %empty  */
#line 565 "ompparser.yy"
                                                  {enDistribute = 1;}
#line 8606 "ompparser.cc"
    break;

  case 287: /* $@24: %empty  */
#line 568 "ompparser.yy"
                                                              {enDistribute = 1;}
#line 8612 "ompparser.cc"
    break;

  case 289: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 571 "ompparser.yy"
                                                      { }
#line 8618 "ompparser.cc"
    break;

  case 290: /* $@25: %empty  */
#line 574 "ompparser.yy"
                                  { }
#line 8624 "ompparser.cc"
    break;

  case 291: /* task_async_directive: TASK_ASYNC $@25 task_async_clause_optseq  */
#line 574 "ompparser.yy"
                                                               { MPITask(); }
#line 8630 "ompparser.cc"
    break;

  case 292: /* $@26: %empty  */
#line 579 "ompparser.yy"
                      { }
#line 8636 "ompparser.cc"
    break;

  case 294: /* $@27: %empty  */
#line 581 "ompparser.yy"
                              { }
#line 8642 "ompparser.cc"
    break;

  case 296: /* $@28: %empty  */
#line 583 "ompparser.yy"
                                        { }
#line 8648 "ompparser.cc"
    break;

  case 298: /* taskyield_directive: TASKYIELD  */
#line 585 "ompparser.yy"
                                { }
#line 8654 "ompparser.cc"
    break;

  case 299: /* $@29: %empty  */
#line 587 "ompparser.yy"
                              { }
#line 8660 "ompparser.cc"
    break;

  case 301: /* $@30: %empty  */
#line 589 "ompparser.yy"
                                     { }
#line 8666 "ompparser.cc"
    break;

  case 303: /* $@31: %empty  */
#line 591 "ompparser.yy"
                                                 { }
#line 8672 "ompparser.cc"
    break;

  case 305: /* $@32: %empty  */
#line 593 "ompparser.yy"
                                               { }
#line 8678 "ompparser.cc"
    break;

  case 307: /* $@33: %empty  */
#line 595 "ompparser.yy"
                           { }
#line 8684 "ompparser.cc"
    break;

  case 309: /* $@34: %empty  */
#line 597 "ompparser.yy"
                                        { }
#line 8690 "ompparser.cc"
    break;

  case 311: /* $@35: %empty  */
#line 599 "ompparser.yy"
                                          { }
#line 8696 "ompparser.cc"
    break;

  case 313: /* $@36: %empty  */
#line 601 "ompparser.yy"
                        { }
#line 8702 "ompparser.cc"
    break;

  case 315: /* end_declare_target_directive: END DECLARE TARGET  */
#line 604 "ompparser.yy"
                                                  { }
#line 8708 "ompparser.cc"
    break;

  case 316: /* master_directive: MASTER  */
#line 606 "ompparser.yy"
                          { }
#line 8714 "ompparser.cc"
    break;

  case 317: /* barrier_directive: BARRIER  */
#line 608 "ompparser.yy"
                            { }
#line 8720 "ompparser.cc"
    break;

  case 318: /* $@37: %empty  */
#line 610 "ompparser.yy"
                              { }
#line 8726 "ompparser.cc"
    break;

  case 320: /* $@38: %empty  */
#line 612 "ompparser.yy"
                                { }
#line 8732 "ompparser.cc"
    break;

  case 322: /* $@39: %empty  */
#line 614 "ompparser.yy"
                              { }
#line 8738 "ompparser.cc"
    break;

  case 324: /* $@40: %empty  */
#line 616 "ompparser.yy"
                          { }
#line 8744 "ompparser.cc"
    break;

  case 326: /* $@41: %empty  */
#line 618 "ompparser.yy"
                            { }
#line 8750 "ompparser.cc"
    break;

  case 333: /* depobj: EXPR_STRING  */
#line 627 "ompparser.yy"
                     { }
#line 8756 "ompparser.cc"
    break;

  case 337: /* destroy_clause: DESTROY  */
#line 634 "ompparser.yy"
                        {}
#line 8762 "ompparser.cc"
    break;

  case 339: /* update_dependence_type: SOURCE  */
#line 639 "ompparser.yy"
                                { }
#line 8768 "ompparser.cc"
    break;

  case 340: /* update_dependence_type: IN  */
#line 640 "ompparser.yy"
                            { }
#line 8774 "ompparser.cc"
    break;

  case 341: /* update_dependence_type: OUT  */
#line 641 "ompparser.yy"
                             { }
#line 8780 "ompparser.cc"
    break;

  case 342: /* update_dependence_type: INOUT  */
#line 642 "ompparser.yy"
                               { }
#line 8786 "ompparser.cc"
    break;

  case 343: /* update_dependence_type: MUTEXINOUTSET  */
#line 643 "ompparser.yy"
                                       { }
#line 8792 "ompparser.cc"
    break;

  case 344: /* update_dependence_type: DEPOBJ  */
#line 644 "ompparser.yy"
                                { }
#line 8798 "ompparser.cc"
    break;

  case 345: /* update_dependence_type: SINK  */
#line 645 "ompparser.yy"
                              { }
#line 8804 "ompparser.cc"
    break;

  case 346: /* critical_name: EXPR_STRING  */
#line 648 "ompparser.yy"
                            { }
#line 8810 "ompparser.cc"
    break;

  case 365: /* extended_variable: EXPR_STRING  */
#line 679 "ompparser.yy"
                                { }
#line 8816 "ompparser.cc"
    break;

  case 373: /* flush_variable: EXPR_STRING  */
#line 691 "ompparser.yy"
                             { }
#line 8822 "ompparser.cc"
    break;

  case 379: /* $@42: %empty  */
#line 701 "ompparser.yy"
                          { }
#line 8828 "ompparser.cc"
    break;

  case 412: /* $@43: %empty  */
#line 744 "ompparser.yy"
                  { 
                     }
#line 8835 "ompparser.cc"
    break;

  case 414: /* read_clause: READ  */
#line 747 "ompparser.yy"
                   { }
#line 8841 "ompparser.cc"
    break;

  case 415: /* write_clause: WRITE  */
#line 749 "ompparser.yy"
                     { }
#line 8847 "ompparser.cc"
    break;

  case 416: /* update_clause: UPDATE  */
#line 751 "ompparser.yy"
                       { }
#line 8853 "ompparser.cc"
    break;

  case 417: /* capture_clause: CAPTURE  */
#line 753 "ompparser.yy"
                         { }
#line 8859 "ompparser.cc"
    break;

  case 418: /* seq_cst_clause: SEQ_CST  */
#line 756 "ompparser.yy"
                         { }
#line 8865 "ompparser.cc"
    break;

  case 419: /* acq_rel_clause: ACQ_REL  */
#line 758 "ompparser.yy"
                         { }
#line 8871 "ompparser.cc"
    break;

  case 420: /* release_clause: RELEASE  */
#line 760 "ompparser.yy"
                         { }
#line 8877 "ompparser.cc"
    break;

  case 421: /* acquire_clause: ACQUIRE  */
#line 762 "ompparser.yy"
                         { }
#line 8883 "ompparser.cc"
    break;

  case 422: /* relaxed_clause: RELAXED  */
#line 764 "ompparser.yy"
                         { }
#line 8889 "ompparser.cc"
    break;

  case 566: /* $@44: %empty  */
#line 941 "ompparser.yy"
                    { }
#line 8895 "ompparser.cc"
    break;

  case 568: /* untied_clause: UNTIED  */
#line 943 "ompparser.yy"
                      { }
#line 8901 "ompparser.cc"
    break;

  case 569: /* mergeable_clause: MERGEABLE  */
#line 945 "ompparser.yy"
                            { }
#line 8907 "ompparser.cc"
    break;

  case 570: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 947 "ompparser.yy"
                                                                                { }
#line 8913 "ompparser.cc"
    break;

  case 572: /* in_reduction_identifier: EXPR_STRING  */
#line 950 "ompparser.yy"
                                      { }
#line 8919 "ompparser.cc"
    break;

  case 573: /* in_reduction_enum_identifier: '+'  */
#line 953 "ompparser.yy"
                                   { }
#line 8925 "ompparser.cc"
    break;

  case 574: /* in_reduction_enum_identifier: '-'  */
#line 954 "ompparser.yy"
                                  { }
#line 8931 "ompparser.cc"
    break;

  case 575: /* in_reduction_enum_identifier: '*'  */
#line 955 "ompparser.yy"
                                  { }
#line 8937 "ompparser.cc"
    break;

  case 576: /* in_reduction_enum_identifier: '&'  */
#line 956 "ompparser.yy"
                                  { }
#line 8943 "ompparser.cc"
    break;

  case 577: /* in_reduction_enum_identifier: '|'  */
#line 957 "ompparser.yy"
                                  { }
#line 8949 "ompparser.cc"
    break;

  case 578: /* in_reduction_enum_identifier: '^'  */
#line 958 "ompparser.yy"
                                  { }
#line 8955 "ompparser.cc"
    break;

  case 579: /* in_reduction_enum_identifier: LOGAND  */
#line 959 "ompparser.yy"
                                     { }
#line 8961 "ompparser.cc"
    break;

  case 580: /* in_reduction_enum_identifier: LOGOR  */
#line 960 "ompparser.yy"
                                    { }
#line 8967 "ompparser.cc"
    break;

  case 581: /* in_reduction_enum_identifier: MAX  */
#line 961 "ompparser.yy"
                                  { }
#line 8973 "ompparser.cc"
    break;

  case 582: /* in_reduction_enum_identifier: MIN  */
#line 962 "ompparser.yy"
                                  { }
#line 8979 "ompparser.cc"
    break;

  case 583: /* $@45: %empty  */
#line 965 "ompparser.yy"
                                     { }
#line 8985 "ompparser.cc"
    break;

  case 584: /* depend_with_modifier_clause: DEPEND $@45 '(' depend_parameter ':' var_list ')'  */
#line 965 "ompparser.yy"
                                                                               { }
#line 8991 "ompparser.cc"
    break;

  case 586: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 969 "ompparser.yy"
                                                       { }
#line 8997 "ompparser.cc"
    break;

  case 588: /* $@46: %empty  */
#line 973 "ompparser.yy"
                                    { }
#line 9003 "ompparser.cc"
    break;

  case 592: /* $@47: %empty  */
#line 978 "ompparser.yy"
                                                    { }
#line 9009 "ompparser.cc"
    break;

  case 594: /* $@48: %empty  */
#line 979 "ompparser.yy"
                                        { }
#line 9015 "ompparser.cc"
    break;

  case 596: /* $@49: %empty  */
#line 981 "ompparser.yy"
                                         { }
#line 9021 "ompparser.cc"
    break;

  case 597: /* $@50: %empty  */
#line 981 "ompparser.yy"
                                                             { }
#line 9027 "ompparser.cc"
    break;

  case 598: /* depend_range_specification: EXPR_STRING $@49 ':' EXPR_STRING $@50 depend_range_step  */
#line 981 "ompparser.yy"
                                                                                   { }
#line 9033 "ompparser.cc"
    break;

  case 599: /* depend_range_step: %empty  */
#line 983 "ompparser.yy"
                              { }
#line 9039 "ompparser.cc"
    break;

  case 600: /* depend_range_step: ':' EXPR_STRING  */
#line 984 "ompparser.yy"
                                    { }
#line 9045 "ompparser.cc"
    break;

  case 601: /* depend_enum_type: IN  */
#line 986 "ompparser.yy"
                      { }
#line 9051 "ompparser.cc"
    break;

  case 602: /* depend_enum_type: OUT  */
#line 987 "ompparser.yy"
                       { }
#line 9057 "ompparser.cc"
    break;

  case 603: /* depend_enum_type: INOUT  */
#line 988 "ompparser.yy"
                         { }
#line 9063 "ompparser.cc"
    break;

  case 604: /* depend_enum_type: MUTEXINOUTSET  */
#line 989 "ompparser.yy"
                                 { }
#line 9069 "ompparser.cc"
    break;

  case 605: /* depend_enum_type: DEPOBJ  */
#line 990 "ompparser.yy"
                          { }
#line 9075 "ompparser.cc"
    break;

  case 606: /* $@51: %empty  */
#line 993 "ompparser.yy"
                              { }
#line 9081 "ompparser.cc"
    break;

  case 607: /* depend_depobj_clause: DEPEND $@51 '(' dependence_depobj_parameter ')'  */
#line 993 "ompparser.yy"
                                                                     {
}
#line 9088 "ompparser.cc"
    break;

  case 609: /* dependence_depobj_type: IN  */
#line 998 "ompparser.yy"
                                        { }
#line 9094 "ompparser.cc"
    break;

  case 610: /* dependence_depobj_type: OUT  */
#line 999 "ompparser.yy"
                                        { }
#line 9100 "ompparser.cc"
    break;

  case 611: /* dependence_depobj_type: INOUT  */
#line 1000 "ompparser.yy"
                                        { }
#line 9106 "ompparser.cc"
    break;

  case 612: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 1001 "ompparser.yy"
                                        { }
#line 9112 "ompparser.cc"
    break;

  case 613: /* $@52: %empty  */
#line 1003 "ompparser.yy"
                               { }
#line 9118 "ompparser.cc"
    break;

  case 614: /* depend_ordered_clause: DEPEND $@52 '(' dependence_ordered_parameter ')'  */
#line 1003 "ompparser.yy"
                                                                       {
}
#line 9125 "ompparser.cc"
    break;

  case 616: /* dependence_ordered_type: SOURCE  */
#line 1008 "ompparser.yy"
                                  { }
#line 9131 "ompparser.cc"
    break;

  case 617: /* $@53: %empty  */
#line 1009 "ompparser.yy"
                               { }
#line 9137 "ompparser.cc"
    break;

  case 619: /* $@54: %empty  */
#line 1012 "ompparser.yy"
                          { }
#line 9143 "ompparser.cc"
    break;

  case 622: /* affinity_parameter: EXPR_STRING  */
#line 1017 "ompparser.yy"
                                 { }
#line 9149 "ompparser.cc"
    break;

  case 623: /* $@55: %empty  */
#line 1018 "ompparser.yy"
                                     { }
#line 9155 "ompparser.cc"
    break;

  case 626: /* $@56: %empty  */
#line 1022 "ompparser.yy"
                                      { }
#line 9161 "ompparser.cc"
    break;

  case 627: /* affinity_modifier: MODIFIER_ITERATOR $@56 '(' iterators_definition ')'  */
#line 1022 "ompparser.yy"
                                                                   {}
#line 9167 "ompparser.cc"
    break;

  case 630: /* $@57: %empty  */
#line 1027 "ompparser.yy"
                                             { }
#line 9173 "ompparser.cc"
    break;

  case 632: /* $@58: %empty  */
#line 1028 "ompparser.yy"
                                { }
#line 9179 "ompparser.cc"
    break;

  case 634: /* $@59: %empty  */
#line 1030 "ompparser.yy"
                                  { }
#line 9185 "ompparser.cc"
    break;

  case 635: /* $@60: %empty  */
#line 1030 "ompparser.yy"
                                                      { }
#line 9191 "ompparser.cc"
    break;

  case 636: /* range_specification: EXPR_STRING $@59 ':' EXPR_STRING $@60 range_step  */
#line 1030 "ompparser.yy"
                                                                     { }
#line 9197 "ompparser.cc"
    break;

  case 637: /* range_step: %empty  */
#line 1033 "ompparser.yy"
                       { }
#line 9203 "ompparser.cc"
    break;

  case 638: /* range_step: ':' EXPR_STRING  */
#line 1034 "ompparser.yy"
                             { }
#line 9209 "ompparser.cc"
    break;

  case 639: /* $@61: %empty  */
#line 1037 "ompparser.yy"
                      { }
#line 9215 "ompparser.cc"
    break;

  case 641: /* $@62: %empty  */
#line 1039 "ompparser.yy"
                            { }
#line 9221 "ompparser.cc"
    break;

  case 643: /* $@63: %empty  */
#line 1041 "ompparser.yy"
                            { }
#line 9227 "ompparser.cc"
    break;

  case 645: /* nogroup_clause: NOGROUP  */
#line 1043 "ompparser.yy"
                        { }
#line 9233 "ompparser.cc"
    break;

  case 646: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 1045 "ompparser.yy"
                                        { }
#line 9239 "ompparser.cc"
    break;

  case 647: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 1047 "ompparser.yy"
                                        { }
#line 9245 "ompparser.cc"
    break;

  case 648: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 1049 "ompparser.yy"
                                                    { }
#line 9251 "ompparser.cc"
    break;

  case 649: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 1051 "ompparser.yy"
                                                                                                      { }
#line 9257 "ompparser.cc"
    break;

  case 650: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 1053 "ompparser.yy"
                                             { }
#line 9263 "ompparser.cc"
    break;

  case 651: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 1054 "ompparser.yy"
                                             { }
#line 9269 "ompparser.cc"
    break;

  case 652: /* atomic_default_mem_order_parameter: RELAXED  */
#line 1055 "ompparser.yy"
                                             { }
#line 9275 "ompparser.cc"
    break;

  case 653: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 1057 "ompparser.yy"
                                              { }
#line 9281 "ompparser.cc"
    break;

  case 654: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 1059 "ompparser.yy"
                                                                { }
#line 9287 "ompparser.cc"
    break;

  case 656: /* device_parameter: EXPR_STRING  */
#line 1063 "ompparser.yy"
                                { }
#line 9293 "ompparser.cc"
    break;

  case 657: /* $@64: %empty  */
#line 1064 "ompparser.yy"
                                   { }
#line 9299 "ompparser.cc"
    break;

  case 660: /* device_modifier_parameter: ANCESTOR  */
#line 1068 "ompparser.yy"
                                     { }
#line 9305 "ompparser.cc"
    break;

  case 661: /* device_modifier_parameter: DEVICE_NUM  */
#line 1069 "ompparser.yy"
                                       { }
#line 9311 "ompparser.cc"
    break;

  case 663: /* device_without_modifier_parameter: EXPR_STRING  */
#line 1074 "ompparser.yy"
                                                 { }
#line 9317 "ompparser.cc"
    break;

  case 664: /* $@65: %empty  */
#line 1075 "ompparser.yy"
                                                    { }
#line 9323 "ompparser.cc"
    break;

  case 666: /* $@66: %empty  */
#line 1078 "ompparser.yy"
                                       { }
#line 9329 "ompparser.cc"
    break;

  case 668: /* $@67: %empty  */
#line 1081 "ompparser.yy"
                                         { }
#line 9335 "ompparser.cc"
    break;

  case 670: /* $@68: %empty  */
#line 1083 "ompparser.yy"
                                     { }
#line 9341 "ompparser.cc"
    break;

  case 671: /* is_device_ptr_clause: IS_DEVICE_PTR $@68 '(' var_list ')'  */
#line 1083 "ompparser.yy"
                                                          {
}
#line 9348 "ompparser.cc"
    break;

  case 672: /* $@69: %empty  */
#line 1087 "ompparser.yy"
                                         { }
#line 9354 "ompparser.cc"
    break;

  case 673: /* has_device_addr_clause: HAS_DEVICE_ADDR $@69 '(' var_list ')'  */
#line 1087 "ompparser.yy"
                                                              {
}
#line 9361 "ompparser.cc"
    break;

  case 674: /* $@70: %empty  */
#line 1090 "ompparser.yy"
                              { }
#line 9367 "ompparser.cc"
    break;

  case 676: /* defaultmap_parameter: defaultmap_behavior  */
#line 1092 "ompparser.yy"
                                           { }
#line 9373 "ompparser.cc"
    break;

  case 678: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1096 "ompparser.yy"
                                     { }
#line 9379 "ompparser.cc"
    break;

  case 679: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1097 "ompparser.yy"
                                  { }
#line 9385 "ompparser.cc"
    break;

  case 680: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1098 "ompparser.yy"
                                    { }
#line 9391 "ompparser.cc"
    break;

  case 681: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1099 "ompparser.yy"
                                      {}
#line 9397 "ompparser.cc"
    break;

  case 682: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1100 "ompparser.yy"
                                            { }
#line 9403 "ompparser.cc"
    break;

  case 683: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1101 "ompparser.yy"
                                    { }
#line 9409 "ompparser.cc"
    break;

  case 684: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1102 "ompparser.yy"
                                       { }
#line 9415 "ompparser.cc"
    break;

  case 685: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1104 "ompparser.yy"
                                      { }
#line 9421 "ompparser.cc"
    break;

  case 686: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1105 "ompparser.yy"
                                         { }
#line 9427 "ompparser.cc"
    break;

  case 687: /* defaultmap_category: CATEGORY_POINTER  */
#line 1106 "ompparser.yy"
                                       { }
#line 9433 "ompparser.cc"
    break;

  case 688: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1107 "ompparser.yy"
                                           { }
#line 9439 "ompparser.cc"
    break;

  case 689: /* $@71: %empty  */
#line 1109 "ompparser.yy"
                                          { }
#line 9445 "ompparser.cc"
    break;

  case 693: /* allocators_list: allocators_list_parameter_enum  */
#line 1114 "ompparser.yy"
                                                 { }
#line 9451 "ompparser.cc"
    break;

  case 694: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1115 "ompparser.yy"
                                                                     { }
#line 9457 "ompparser.cc"
    break;

  case 695: /* allocators_list: allocators_list_parameter_user  */
#line 1116 "ompparser.yy"
                                                 { }
#line 9463 "ompparser.cc"
    break;

  case 696: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1117 "ompparser.yy"
                                                                     { }
#line 9469 "ompparser.cc"
    break;

  case 697: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1120 "ompparser.yy"
                                                   { }
#line 9475 "ompparser.cc"
    break;

  case 698: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1121 "ompparser.yy"
                                                     { }
#line 9481 "ompparser.cc"
    break;

  case 699: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1122 "ompparser.yy"
                                                 { }
#line 9487 "ompparser.cc"
    break;

  case 700: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1123 "ompparser.yy"
                                                   { }
#line 9493 "ompparser.cc"
    break;

  case 701: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1124 "ompparser.yy"
                                                   { }
#line 9499 "ompparser.cc"
    break;

  case 702: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1125 "ompparser.yy"
                                                  { }
#line 9505 "ompparser.cc"
    break;

  case 703: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1126 "ompparser.yy"
                                                 { }
#line 9511 "ompparser.cc"
    break;

  case 704: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1127 "ompparser.yy"
                                                  { }
#line 9517 "ompparser.cc"
    break;

  case 705: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1129 "ompparser.yy"
                                             { }
#line 9523 "ompparser.cc"
    break;

  case 707: /* to_parameter: EXPR_STRING  */
#line 1132 "ompparser.yy"
                            { }
#line 9529 "ompparser.cc"
    break;

  case 708: /* $@72: %empty  */
#line 1133 "ompparser.yy"
                               { }
#line 9535 "ompparser.cc"
    break;

  case 711: /* $@73: %empty  */
#line 1136 "ompparser.yy"
                      { }
#line 9541 "ompparser.cc"
    break;

  case 712: /* to_mapper: TO_MAPPER $@73 '(' EXPR_STRING ')'  */
#line 1136 "ompparser.yy"
                                           { }
#line 9547 "ompparser.cc"
    break;

  case 714: /* from_parameter: EXPR_STRING  */
#line 1140 "ompparser.yy"
                             { }
#line 9553 "ompparser.cc"
    break;

  case 715: /* $@74: %empty  */
#line 1141 "ompparser.yy"
                                 { }
#line 9559 "ompparser.cc"
    break;

  case 718: /* $@75: %empty  */
#line 1144 "ompparser.yy"
                          { }
#line 9565 "ompparser.cc"
    break;

  case 719: /* from_mapper: FROM_MAPPER $@75 '(' EXPR_STRING ')'  */
#line 1144 "ompparser.yy"
                                               { }
#line 9571 "ompparser.cc"
    break;

  case 720: /* $@76: %empty  */
#line 1146 "ompparser.yy"
                   {
}
#line 9578 "ompparser.cc"
    break;

  case 721: /* link_clause: LINK $@76 '(' var_list ')'  */
#line 1147 "ompparser.yy"
                   { }
#line 9584 "ompparser.cc"
    break;

  case 722: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1149 "ompparser.yy"
                                                               { }
#line 9590 "ompparser.cc"
    break;

  case 723: /* device_type_parameter: HOST  */
#line 1151 "ompparser.yy"
                             { }
#line 9596 "ompparser.cc"
    break;

  case 724: /* device_type_parameter: NOHOST  */
#line 1152 "ompparser.yy"
                             { }
#line 9602 "ompparser.cc"
    break;

  case 725: /* device_type_parameter: ANY  */
#line 1153 "ompparser.yy"
                          { }
#line 9608 "ompparser.cc"
    break;

  case 726: /* $@77: %empty  */
#line 1156 "ompparser.yy"
                 { }
#line 9614 "ompparser.cc"
    break;

  case 728: /* map_parameter: EXPR_STRING  */
#line 1158 "ompparser.yy"
                            { }
#line 9620 "ompparser.cc"
    break;

  case 729: /* $@78: %empty  */
#line 1159 "ompparser.yy"
                                { }
#line 9626 "ompparser.cc"
    break;

  case 743: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1177 "ompparser.yy"
                                    { }
#line 9632 "ompparser.cc"
    break;

  case 744: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1178 "ompparser.yy"
                                    { }
#line 9638 "ompparser.cc"
    break;

  case 745: /* map_modifier1: map_modifier_mapper  */
#line 1179 "ompparser.yy"
                                    { }
#line 9644 "ompparser.cc"
    break;

  case 746: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1181 "ompparser.yy"
                                    { }
#line 9650 "ompparser.cc"
    break;

  case 747: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1182 "ompparser.yy"
                                    { }
#line 9656 "ompparser.cc"
    break;

  case 748: /* map_modifier2: map_modifier_mapper  */
#line 1183 "ompparser.yy"
                                    { }
#line 9662 "ompparser.cc"
    break;

  case 749: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1185 "ompparser.yy"
                                    { }
#line 9668 "ompparser.cc"
    break;

  case 750: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1186 "ompparser.yy"
                                    { }
#line 9674 "ompparser.cc"
    break;

  case 751: /* map_modifier3: map_modifier_mapper  */
#line 1187 "ompparser.yy"
                                    { }
#line 9680 "ompparser.cc"
    break;

  case 752: /* map_type: MAP_TYPE_TO  */
#line 1189 "ompparser.yy"
                       { }
#line 9686 "ompparser.cc"
    break;

  case 753: /* map_type: MAP_TYPE_FROM  */
#line 1190 "ompparser.yy"
                         { }
#line 9692 "ompparser.cc"
    break;

  case 754: /* map_type: MAP_TYPE_TOFROM  */
#line 1191 "ompparser.yy"
                           { }
#line 9698 "ompparser.cc"
    break;

  case 755: /* map_type: MAP_TYPE_ALLOC  */
#line 1192 "ompparser.yy"
                          { }
#line 9704 "ompparser.cc"
    break;

  case 756: /* map_type: MAP_TYPE_RELEASE  */
#line 1193 "ompparser.yy"
                            { }
#line 9710 "ompparser.cc"
    break;

  case 757: /* map_type: MAP_TYPE_DELETE  */
#line 1194 "ompparser.yy"
                           { }
#line 9716 "ompparser.cc"
    break;

  case 758: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1196 "ompparser.yy"
                                                            { }
#line 9722 "ompparser.cc"
    break;

  case 759: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1199 "ompparser.yy"
                                                                                      { }
#line 9728 "ompparser.cc"
    break;

  case 761: /* task_reduction_identifier: EXPR_STRING  */
#line 1202 "ompparser.yy"
                                        { }
#line 9734 "ompparser.cc"
    break;

  case 762: /* task_reduction_enum_identifier: '+'  */
#line 1205 "ompparser.yy"
                                     { }
#line 9740 "ompparser.cc"
    break;

  case 763: /* task_reduction_enum_identifier: '-'  */
#line 1206 "ompparser.yy"
                                     { }
#line 9746 "ompparser.cc"
    break;

  case 764: /* task_reduction_enum_identifier: '*'  */
#line 1207 "ompparser.yy"
                                     { }
#line 9752 "ompparser.cc"
    break;

  case 765: /* task_reduction_enum_identifier: '&'  */
#line 1208 "ompparser.yy"
                                     { }
#line 9758 "ompparser.cc"
    break;

  case 766: /* task_reduction_enum_identifier: '|'  */
#line 1209 "ompparser.yy"
                                     { }
#line 9764 "ompparser.cc"
    break;

  case 767: /* task_reduction_enum_identifier: '^'  */
#line 1210 "ompparser.yy"
                                     { }
#line 9770 "ompparser.cc"
    break;

  case 768: /* task_reduction_enum_identifier: LOGAND  */
#line 1211 "ompparser.yy"
                                        { }
#line 9776 "ompparser.cc"
    break;

  case 769: /* task_reduction_enum_identifier: LOGOR  */
#line 1212 "ompparser.yy"
                                       { }
#line 9782 "ompparser.cc"
    break;

  case 770: /* task_reduction_enum_identifier: MAX  */
#line 1213 "ompparser.yy"
                                     { }
#line 9788 "ompparser.cc"
    break;

  case 771: /* task_reduction_enum_identifier: MIN  */
#line 1214 "ompparser.yy"
                                     { }
#line 9794 "ompparser.cc"
    break;

  case 784: /* threads_clause: THREADS  */
#line 1233 "ompparser.yy"
                         { }
#line 9800 "ompparser.cc"
    break;

  case 785: /* simd_ordered_clause: SIMD  */
#line 1235 "ompparser.yy"
                           { }
#line 9806 "ompparser.cc"
    break;

  case 786: /* $@79: %empty  */
#line 1237 "ompparser.yy"
                                              { }
#line 9812 "ompparser.cc"
    break;

  case 804: /* $@80: %empty  */
#line 1258 "ompparser.yy"
                                                         { }
#line 9818 "ompparser.cc"
    break;

  case 829: /* $@81: %empty  */
#line 1286 "ompparser.yy"
                                                                         { }
#line 9824 "ompparser.cc"
    break;

  case 856: /* $@82: %empty  */
#line 1316 "ompparser.yy"
                                                                       { }
#line 9830 "ompparser.cc"
    break;

  case 883: /* $@83: %empty  */
#line 1346 "ompparser.yy"
                                                                                  { }
#line 9836 "ompparser.cc"
    break;

  case 914: /* $@84: %empty  */
#line 1380 "ompparser.yy"
                                                                                { }
#line 9842 "ompparser.cc"
    break;

  case 945: /* $@85: %empty  */
#line 1414 "ompparser.yy"
                                 { }
#line 9848 "ompparser.cc"
    break;

  case 964: /* $@86: %empty  */
#line 1436 "ompparser.yy"
                                           { }
#line 9854 "ompparser.cc"
    break;

  case 989: /* $@87: %empty  */
#line 1465 "ompparser.yy"
                                                   { }
#line 9860 "ompparser.cc"
    break;

  case 1021: /* $@88: %empty  */
#line 1500 "ompparser.yy"
                                                 { }
#line 9866 "ompparser.cc"
    break;

  case 1053: /* $@89: %empty  */
#line 1535 "ompparser.yy"
                                                             { }
#line 9872 "ompparser.cc"
    break;

  case 1088: /* $@90: %empty  */
#line 1573 "ompparser.yy"
                                                           { }
#line 9878 "ompparser.cc"
    break;

  case 1123: /* $@91: %empty  */
#line 1611 "ompparser.yy"
                                                     { }
#line 9884 "ompparser.cc"
    break;

  case 1152: /* $@92: %empty  */
#line 1643 "ompparser.yy"
                                   { }
#line 9890 "ompparser.cc"
    break;

  case 1180: /* $@93: %empty  */
#line 1674 "ompparser.yy"
                                     { }
#line 9896 "ompparser.cc"
    break;

  case 1204: /* $@94: %empty  */
#line 1701 "ompparser.yy"
                                                           { }
#line 9902 "ompparser.cc"
    break;

  case 1231: /* $@95: %empty  */
#line 1731 "ompparser.yy"
                                                                     { }
#line 9908 "ompparser.cc"
    break;

  case 1264: /* $@96: %empty  */
#line 1767 "ompparser.yy"
                                               { }
#line 9914 "ompparser.cc"
    break;

  case 1292: /* $@97: %empty  */
#line 1798 "ompparser.yy"
                                                                                     { }
#line 9920 "ompparser.cc"
    break;

  case 1326: /* $@98: %empty  */
#line 1835 "ompparser.yy"
                                                                                   { }
#line 9926 "ompparser.cc"
    break;

  case 1360: /* $@99: %empty  */
#line 1872 "ompparser.yy"
                                                                                               { }
#line 9932 "ompparser.cc"
    break;

  case 1398: /* $@100: %empty  */
#line 1913 "ompparser.yy"
                                                                                             { }
#line 9938 "ompparser.cc"
    break;

  case 1436: /* $@101: %empty  */
#line 1956 "ompparser.yy"
                    { }
#line 9944 "ompparser.cc"
    break;

  case 1438: /* $@102: %empty  */
#line 1958 "ompparser.yy"
                  { }
#line 9950 "ompparser.cc"
    break;

  case 1440: /* $@103: %empty  */
#line 1960 "ompparser.yy"
                         { }
#line 9956 "ompparser.cc"
    break;

  case 1442: /* $@104: %empty  */
#line 1962 "ompparser.yy"
                      { }
#line 9962 "ompparser.cc"
    break;

  case 1444: /* $@105: %empty  */
#line 1964 "ompparser.yy"
                              { }
#line 9968 "ompparser.cc"
    break;

  case 1446: /* $@106: %empty  */
#line 1966 "ompparser.yy"
                            { }
#line 9974 "ompparser.cc"
    break;

  case 1448: /* $@107: %empty  */
#line 1968 "ompparser.yy"
                                   { }
#line 9980 "ompparser.cc"
    break;

  case 1451: /* $@108: %empty  */
#line 1972 "ompparser.yy"
                                              { }
#line 9986 "ompparser.cc"
    break;

  case 1453: /* $@109: %empty  */
#line 1974 "ompparser.yy"
                                      { }
#line 9992 "ompparser.cc"
    break;

  case 1455: /* $@110: %empty  */
#line 1976 "ompparser.yy"
                                              { }
#line 9998 "ompparser.cc"
    break;

  case 1458: /* proc_name: EXPR_STRING  */
#line 1979 "ompparser.yy"
                        { }
#line 10004 "ompparser.cc"
    break;

  case 1459: /* $@111: %empty  */
#line 1981 "ompparser.yy"
                                  { }
#line 10010 "ompparser.cc"
    break;

  case 1461: /* $@112: %empty  */
#line 1983 "ompparser.yy"
                                            { }
#line 10016 "ompparser.cc"
    break;

  case 1463: /* $@113: %empty  */
#line 1985 "ompparser.yy"
                                                            { }
#line 10022 "ompparser.cc"
    break;

  case 1465: /* $@114: %empty  */
#line 1987 "ompparser.yy"
                                                          { }
#line 10028 "ompparser.cc"
    break;

  case 1467: /* $@115: %empty  */
#line 1989 "ompparser.yy"
                                                                      { }
#line 10034 "ompparser.cc"
    break;

  case 1469: /* $@116: %empty  */
#line 1991 "ompparser.yy"
                                                                    { }
#line 10040 "ompparser.cc"
    break;

  case 1471: /* $@117: %empty  */
#line 1993 "ompparser.yy"
                                      { }
#line 10046 "ompparser.cc"
    break;

  case 1473: /* $@118: %empty  */
#line 1995 "ompparser.yy"
                                    { }
#line 10052 "ompparser.cc"
    break;

  case 1475: /* $@119: %empty  */
#line 1997 "ompparser.yy"
                                        { }
#line 10058 "ompparser.cc"
    break;

  case 1477: /* $@120: %empty  */
#line 1999 "ompparser.yy"
                                                { }
#line 10064 "ompparser.cc"
    break;

  case 1479: /* $@121: %empty  */
#line 2001 "ompparser.yy"
                                                  { }
#line 10070 "ompparser.cc"
    break;

  case 1481: /* $@122: %empty  */
#line 2003 "ompparser.yy"
                                            { }
#line 10076 "ompparser.cc"
    break;

  case 1483: /* $@123: %empty  */
#line 2005 "ompparser.yy"
                                            {
                          }
#line 10083 "ompparser.cc"
    break;

  case 1485: /* $@124: %empty  */
#line 2009 "ompparser.yy"
                                                      {
                               }
#line 10090 "ompparser.cc"
    break;

  case 1487: /* $@125: %empty  */
#line 2013 "ompparser.yy"
                                                              {
                                   }
#line 10097 "ompparser.cc"
    break;

  case 1489: /* $@126: %empty  */
#line 2017 "ompparser.yy"
                                                                        {
                                        }
#line 10104 "ompparser.cc"
    break;

  case 1491: /* $@127: %empty  */
#line 2021 "ompparser.yy"
                      { }
#line 10110 "ompparser.cc"
    break;

  case 1493: /* $@128: %empty  */
#line 2023 "ompparser.yy"
                      { }
#line 10116 "ompparser.cc"
    break;

  case 1495: /* $@129: %empty  */
#line 2025 "ompparser.yy"
                              { }
#line 10122 "ompparser.cc"
    break;

  case 1497: /* $@130: %empty  */
#line 2027 "ompparser.yy"
                                     { }
#line 10128 "ompparser.cc"
    break;

  case 1499: /* section_directive: SECTION  */
#line 2029 "ompparser.yy"
                            { }
#line 10134 "ompparser.cc"
    break;

  case 1500: /* $@131: %empty  */
#line 2031 "ompparser.yy"
                          { }
#line 10140 "ompparser.cc"
    break;

  case 1502: /* $@132: %empty  */
#line 2033 "ompparser.yy"
                                 { }
#line 10146 "ompparser.cc"
    break;

  case 1504: /* workshare_directive: WORKSHARE  */
#line 2035 "ompparser.yy"
                                { }
#line 10152 "ompparser.cc"
    break;

  case 1505: /* $@133: %empty  */
#line 2037 "ompparser.yy"
                                       { }
#line 10158 "ompparser.cc"
    break;

  case 1507: /* $@134: %empty  */
#line 2039 "ompparser.yy"
                          { }
#line 10164 "ompparser.cc"
    break;

  case 1509: /* $@135: %empty  */
#line 2046 "ompparser.yy"
                                                  { }
#line 10170 "ompparser.cc"
    break;

  case 1511: /* $@136: %empty  */
#line 2053 "ompparser.yy"
                        { }
#line 10176 "ompparser.cc"
    break;

  case 1513: /* $@137: %empty  */
#line 2056 "ompparser.yy"
                              { }
#line 10182 "ompparser.cc"
    break;

  case 1516: /* directive_variable: EXPR_STRING  */
#line 2061 "ompparser.yy"
                                 { }
#line 10188 "ompparser.cc"
    break;

  case 1519: /* $@138: %empty  */
#line 2067 "ompparser.yy"
                                        {  }
#line 10194 "ompparser.cc"
    break;

  case 1521: /* threadprivate_variable: EXPR_STRING  */
#line 2069 "ompparser.yy"
                                     { }
#line 10200 "ompparser.cc"
    break;

  case 1524: /* $@139: %empty  */
#line 2075 "ompparser.yy"
                                                { }
#line 10206 "ompparser.cc"
    break;

  case 1527: /* reduction_identifiers: '+'  */
#line 2081 "ompparser.yy"
                           { }
#line 10212 "ompparser.cc"
    break;

  case 1528: /* reduction_identifiers: '-'  */
#line 2082 "ompparser.yy"
                           { }
#line 10218 "ompparser.cc"
    break;

  case 1529: /* reduction_identifiers: '*'  */
#line 2083 "ompparser.yy"
                           { }
#line 10224 "ompparser.cc"
    break;

  case 1530: /* reduction_identifiers: '&'  */
#line 2084 "ompparser.yy"
                           { }
#line 10230 "ompparser.cc"
    break;

  case 1531: /* reduction_identifiers: '|'  */
#line 2085 "ompparser.yy"
                           { }
#line 10236 "ompparser.cc"
    break;

  case 1532: /* reduction_identifiers: '^'  */
#line 2086 "ompparser.yy"
                           { }
#line 10242 "ompparser.cc"
    break;

  case 1533: /* reduction_identifiers: LOGAND  */
#line 2087 "ompparser.yy"
                              { }
#line 10248 "ompparser.cc"
    break;

  case 1534: /* reduction_identifiers: LOGOR  */
#line 2088 "ompparser.yy"
                             { }
#line 10254 "ompparser.cc"
    break;

  case 1535: /* typername_variable: EXPR_STRING  */
#line 2091 "ompparser.yy"
                                 { }
#line 10260 "ompparser.cc"
    break;

  case 1538: /* combiner: EXPR_STRING  */
#line 2096 "ompparser.yy"
                       { }
#line 10266 "ompparser.cc"
    break;

  case 1539: /* $@140: %empty  */
#line 2099 "ompparser.yy"
                                          { }
#line 10272 "ompparser.cc"
    break;

  case 1544: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2109 "ompparser.yy"
                                       { }
#line 10278 "ompparser.cc"
    break;

  case 1545: /* mapper_identifier: EXPR_STRING  */
#line 2110 "ompparser.yy"
                                { }
#line 10284 "ompparser.cc"
    break;

  case 1546: /* type_var: EXPR_STRING  */
#line 2113 "ompparser.yy"
                       { }
#line 10290 "ompparser.cc"
    break;

  case 1771: /* $@141: %empty  */
#line 2473 "ompparser.yy"
                             {enScatter = 1; chunk_pos = 0; aumentarScatter();}
#line 10296 "ompparser.cc"
    break;

  case 1772: /* cluster_clause: $@141 scatter_clause  */
#line 2473 "ompparser.yy"
                                                                                               {enScatter = 0;}
#line 10302 "ompparser.cc"
    break;

  case 1773: /* $@142: %empty  */
#line 2474 "ompparser.yy"
                             {enGather = 1; chunk_pos = 0; aumentarGather(); enGatherInst = 1;}
#line 10308 "ompparser.cc"
    break;

  case 1774: /* cluster_clause: $@142 gather_clause  */
#line 2474 "ompparser.yy"
                                                                                                              {enGatherInst = 0;}
#line 10314 "ompparser.cc"
    break;

  case 1775: /* $@143: %empty  */
#line 2475 "ompparser.yy"
                             {enAllGather = 1; chunk_pos = 0; aumentarAllGather(); enAllGatherInst = 1;}
#line 10320 "ompparser.cc"
    break;

  case 1776: /* cluster_clause: $@143 allgather_clause  */
#line 2475 "ompparser.yy"
                                                                                                                          {enAllGatherInst = 0;}
#line 10326 "ompparser.cc"
    break;

  case 1778: /* $@144: %empty  */
#line 2477 "ompparser.yy"
                             {enReductionCluster = 1;}
#line 10332 "ompparser.cc"
    break;

  case 1780: /* $@145: %empty  */
#line 2478 "ompparser.yy"
                             {enAllReductionCluster = 1;}
#line 10338 "ompparser.cc"
    break;

  case 1821: /* $@146: %empty  */
#line 2525 "ompparser.yy"
                      {enReductionDistribute = 1;}
#line 10344 "ompparser.cc"
    break;

  case 1823: /* $@147: %empty  */
#line 2526 "ompparser.yy"
                      {enAllReductionDistribute = 1;}
#line 10350 "ompparser.cc"
    break;

  case 1844: /* $@148: %empty  */
#line 2548 "ompparser.yy"
                                  {enReductionDistribute = 1;}
#line 10356 "ompparser.cc"
    break;

  case 1846: /* $@149: %empty  */
#line 2549 "ompparser.yy"
                                  {enAllReductionDistribute = 1;}
#line 10362 "ompparser.cc"
    break;

  case 1848: /* $@150: %empty  */
#line 2552 "ompparser.yy"
                           { }
#line 10368 "ompparser.cc"
    break;

  case 1850: /* dependance_type: IN  */
#line 2555 "ompparser.yy"
                     {printf("var: IN\n");
                      addArg("IN"); }
#line 10375 "ompparser.cc"
    break;

  case 1851: /* dependance_type: OUT  */
#line 2557 "ompparser.yy"
                                      {printf("var: OUT\n");
                      addArg("OUT"); }
#line 10382 "ompparser.cc"
    break;

  case 2232: /* construct_type_clause: PARALLEL  */
#line 2977 "ompparser.yy"
                                 { }
#line 10388 "ompparser.cc"
    break;

  case 2233: /* construct_type_clause: SECTIONS  */
#line 2978 "ompparser.yy"
                                 { }
#line 10394 "ompparser.cc"
    break;

  case 2234: /* construct_type_clause: FOR  */
#line 2979 "ompparser.yy"
                            { }
#line 10400 "ompparser.cc"
    break;

  case 2235: /* construct_type_clause: DO  */
#line 2980 "ompparser.yy"
                           { }
#line 10406 "ompparser.cc"
    break;

  case 2236: /* construct_type_clause: TASKGROUP  */
#line 2981 "ompparser.yy"
                                  { }
#line 10412 "ompparser.cc"
    break;

  case 2237: /* if_parallel_clause: IF '(' if_parallel_parameter ')'  */
#line 2988 "ompparser.yy"
                                                      { ; }
#line 10418 "ompparser.cc"
    break;

  case 2238: /* $@151: %empty  */
#line 2991 "ompparser.yy"
                                     { }
#line 10424 "ompparser.cc"
    break;

  case 2239: /* if_parallel_parameter: PARALLEL ':' $@151 expression  */
#line 2992 "ompparser.yy"
                                   { ; }
#line 10430 "ompparser.cc"
    break;

  case 2240: /* if_parallel_parameter: EXPR_STRING  */
#line 2993 "ompparser.yy"
                                    { }
#line 10436 "ompparser.cc"
    break;

  case 2241: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 2995 "ompparser.yy"
                                              { ; }
#line 10442 "ompparser.cc"
    break;

  case 2242: /* $@152: %empty  */
#line 2998 "ompparser.yy"
                             { }
#line 10448 "ompparser.cc"
    break;

  case 2243: /* if_task_parameter: TASK ':' $@152 expression  */
#line 2998 "ompparser.yy"
                                             { ; }
#line 10454 "ompparser.cc"
    break;

  case 2244: /* if_task_parameter: EXPR_STRING  */
#line 2999 "ompparser.yy"
                                { }
#line 10460 "ompparser.cc"
    break;

  case 2245: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 3001 "ompparser.yy"
                                                      { ; }
#line 10466 "ompparser.cc"
    break;

  case 2246: /* $@153: %empty  */
#line 3004 "ompparser.yy"
                                     { }
#line 10472 "ompparser.cc"
    break;

  case 2247: /* if_taskloop_parameter: TASKLOOP ':' $@153 expression  */
#line 3004 "ompparser.yy"
                                                     { ; }
#line 10478 "ompparser.cc"
    break;

  case 2248: /* if_taskloop_parameter: EXPR_STRING  */
#line 3005 "ompparser.yy"
                                    { }
#line 10484 "ompparser.cc"
    break;

  case 2249: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 3007 "ompparser.yy"
                                                            { ; }
#line 10490 "ompparser.cc"
    break;

  case 2250: /* $@154: %empty  */
#line 3010 "ompparser.yy"
                                           { }
#line 10496 "ompparser.cc"
    break;

  case 2251: /* if_target_data_parameter: TARGET DATA ':' $@154 expression  */
#line 3010 "ompparser.yy"
                                                           { ; }
#line 10502 "ompparser.cc"
    break;

  case 2252: /* if_target_data_parameter: EXPR_STRING  */
#line 3011 "ompparser.yy"
                                       { }
#line 10508 "ompparser.cc"
    break;

  case 2253: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 3013 "ompparser.yy"
                                                                    { ; }
#line 10514 "ompparser.cc"
    break;

  case 2254: /* $@155: %empty  */
#line 3016 "ompparser.yy"
                                          { }
#line 10520 "ompparser.cc"
    break;

  case 2255: /* if_target_parallel_parameter: TARGET ':' $@155 expression  */
#line 3016 "ompparser.yy"
                                                          { ; }
#line 10526 "ompparser.cc"
    break;

  case 2256: /* $@156: %empty  */
#line 3017 "ompparser.yy"
                                            { }
#line 10532 "ompparser.cc"
    break;

  case 2257: /* if_target_parallel_parameter: PARALLEL ':' $@156 expression  */
#line 3017 "ompparser.yy"
                                                            { ; }
#line 10538 "ompparser.cc"
    break;

  case 2258: /* if_target_parallel_parameter: EXPR_STRING  */
#line 3018 "ompparser.yy"
                                           { }
#line 10544 "ompparser.cc"
    break;

  case 2259: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 3020 "ompparser.yy"
                                                            { ; }
#line 10550 "ompparser.cc"
    break;

  case 2260: /* $@157: %empty  */
#line 3023 "ompparser.yy"
                                      { }
#line 10556 "ompparser.cc"
    break;

  case 2261: /* if_target_simd_parameter: TARGET ':' $@157 expression  */
#line 3023 "ompparser.yy"
                                                      { ; }
#line 10562 "ompparser.cc"
    break;

  case 2262: /* $@158: %empty  */
#line 3024 "ompparser.yy"
                                    { }
#line 10568 "ompparser.cc"
    break;

  case 2263: /* if_target_simd_parameter: SIMD ':' $@158 expression  */
#line 3024 "ompparser.yy"
                                                    { ; }
#line 10574 "ompparser.cc"
    break;

  case 2264: /* if_target_simd_parameter: EXPR_STRING  */
#line 3025 "ompparser.yy"
                                       { }
#line 10580 "ompparser.cc"
    break;

  case 2265: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 3027 "ompparser.yy"
                                                                        { ; }
#line 10586 "ompparser.cc"
    break;

  case 2266: /* $@159: %empty  */
#line 3030 "ompparser.yy"
                                                       { }
#line 10592 "ompparser.cc"
    break;

  case 2267: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@159 expression  */
#line 3030 "ompparser.yy"
                                                                       { ; }
#line 10598 "ompparser.cc"
    break;

  case 2268: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 3031 "ompparser.yy"
                                             { }
#line 10604 "ompparser.cc"
    break;

  case 2269: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 3033 "ompparser.yy"
                                                                      { ; }
#line 10610 "ompparser.cc"
    break;

  case 2270: /* $@160: %empty  */
#line 3036 "ompparser.yy"
                                                     { }
#line 10616 "ompparser.cc"
    break;

  case 2271: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@160 expression  */
#line 3036 "ompparser.yy"
                                                                     { ; }
#line 10622 "ompparser.cc"
    break;

  case 2272: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 3037 "ompparser.yy"
                                            { }
#line 10628 "ompparser.cc"
    break;

  case 2273: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 3039 "ompparser.yy"
                                                  { ; }
#line 10634 "ompparser.cc"
    break;

  case 2274: /* $@161: %empty  */
#line 3042 "ompparser.yy"
                                 { }
#line 10640 "ompparser.cc"
    break;

  case 2275: /* if_target_parameter: TARGET ':' $@161 expression  */
#line 3042 "ompparser.yy"
                                                 { ; }
#line 10646 "ompparser.cc"
    break;

  case 2276: /* if_target_parameter: EXPR_STRING  */
#line 3043 "ompparser.yy"
                                  { }
#line 10652 "ompparser.cc"
    break;

  case 2277: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 3045 "ompparser.yy"
                                                                { ; }
#line 10658 "ompparser.cc"
    break;

  case 2278: /* $@162: %empty  */
#line 3048 "ompparser.yy"
                                               { }
#line 10664 "ompparser.cc"
    break;

  case 2279: /* if_target_update_parameter: TARGET UPDATE ':' $@162 expression  */
#line 3048 "ompparser.yy"
                                                               { ; }
#line 10670 "ompparser.cc"
    break;

  case 2280: /* if_target_update_parameter: EXPR_STRING  */
#line 3049 "ompparser.yy"
                                         { }
#line 10676 "ompparser.cc"
    break;

  case 2281: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3051 "ompparser.yy"
                                                                { ; }
#line 10682 "ompparser.cc"
    break;

  case 2282: /* $@163: %empty  */
#line 3054 "ompparser.yy"
                                          { }
#line 10688 "ompparser.cc"
    break;

  case 2283: /* if_taskloop_simd_parameter: TASKLOOP ':' $@163 expression  */
#line 3054 "ompparser.yy"
                                                          { ; }
#line 10694 "ompparser.cc"
    break;

  case 2284: /* $@164: %empty  */
#line 3055 "ompparser.yy"
                                      { }
#line 10700 "ompparser.cc"
    break;

  case 2285: /* if_taskloop_simd_parameter: SIMD ':' $@164 expression  */
#line 3055 "ompparser.yy"
                                                      { ; }
#line 10706 "ompparser.cc"
    break;

  case 2286: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3056 "ompparser.yy"
                                         {
                             }
#line 10713 "ompparser.cc"
    break;

  case 2287: /* if_simd_clause: IF '(' if_simd_parameter ')'  */
#line 3058 "ompparser.yy"
                                              { ; }
#line 10719 "ompparser.cc"
    break;

  case 2288: /* $@165: %empty  */
#line 3060 "ompparser.yy"
                             { }
#line 10725 "ompparser.cc"
    break;

  case 2289: /* if_simd_parameter: SIMD ':' $@165 expression  */
#line 3060 "ompparser.yy"
                                             { ; }
#line 10731 "ompparser.cc"
    break;

  case 2290: /* if_simd_parameter: EXPR_STRING  */
#line 3061 "ompparser.yy"
                                { }
#line 10737 "ompparser.cc"
    break;

  case 2291: /* if_parallel_simd_clause: IF '(' if_parallel_simd_parameter ')'  */
#line 3063 "ompparser.yy"
                                                                { ; }
#line 10743 "ompparser.cc"
    break;

  case 2292: /* $@166: %empty  */
#line 3065 "ompparser.yy"
                                      { }
#line 10749 "ompparser.cc"
    break;

  case 2293: /* if_parallel_simd_parameter: SIMD ':' $@166 expression  */
#line 3065 "ompparser.yy"
                                                      { ; }
#line 10755 "ompparser.cc"
    break;

  case 2294: /* $@167: %empty  */
#line 3066 "ompparser.yy"
                                          { }
#line 10761 "ompparser.cc"
    break;

  case 2295: /* if_parallel_simd_parameter: PARALLEL ':' $@167 expression  */
#line 3066 "ompparser.yy"
                                                          { ; }
#line 10767 "ompparser.cc"
    break;

  case 2296: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3067 "ompparser.yy"
                                         { }
#line 10773 "ompparser.cc"
    break;

  case 2297: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3069 "ompparser.yy"
                                                                              { ; }
#line 10779 "ompparser.cc"
    break;

  case 2298: /* $@168: %empty  */
#line 3071 "ompparser.yy"
                                             { }
#line 10785 "ompparser.cc"
    break;

  case 2299: /* if_target_parallel_simd_parameter: SIMD ':' $@168 expression  */
#line 3071 "ompparser.yy"
                                                             { ; }
#line 10791 "ompparser.cc"
    break;

  case 2300: /* $@169: %empty  */
#line 3072 "ompparser.yy"
                                                 { }
#line 10797 "ompparser.cc"
    break;

  case 2301: /* if_target_parallel_simd_parameter: PARALLEL ':' $@169 expression  */
#line 3072 "ompparser.yy"
                                                                 { ; }
#line 10803 "ompparser.cc"
    break;

  case 2302: /* $@170: %empty  */
#line 3073 "ompparser.yy"
                                               { }
#line 10809 "ompparser.cc"
    break;

  case 2303: /* if_target_parallel_simd_parameter: TARGET ':' $@170 expression  */
#line 3073 "ompparser.yy"
                                                               { ; }
#line 10815 "ompparser.cc"
    break;

  case 2304: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3074 "ompparser.yy"
                                                { }
#line 10821 "ompparser.cc"
    break;

  case 2305: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3076 "ompparser.yy"
                                                  { ; }
#line 10827 "ompparser.cc"
    break;

  case 2306: /* $@171: %empty  */
#line 3078 "ompparser.yy"
                                 { }
#line 10833 "ompparser.cc"
    break;

  case 2307: /* if_cancel_parameter: CANCEL ':' $@171 expression  */
#line 3078 "ompparser.yy"
                                                 { ; }
#line 10839 "ompparser.cc"
    break;

  case 2308: /* if_cancel_parameter: EXPR_STRING  */
#line 3079 "ompparser.yy"
                                  { }
#line 10845 "ompparser.cc"
    break;

  case 2309: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3081 "ompparser.yy"
                                                                        { ; }
#line 10851 "ompparser.cc"
    break;

  case 2310: /* $@172: %empty  */
#line 3083 "ompparser.yy"
                                              { }
#line 10857 "ompparser.cc"
    break;

  case 2311: /* if_parallel_taskloop_parameter: PARALLEL ':' $@172 expression  */
#line 3083 "ompparser.yy"
                                                              { ; }
#line 10863 "ompparser.cc"
    break;

  case 2312: /* $@173: %empty  */
#line 3084 "ompparser.yy"
                                              { }
#line 10869 "ompparser.cc"
    break;

  case 2313: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@173 expression  */
#line 3084 "ompparser.yy"
                                                              { ; }
#line 10875 "ompparser.cc"
    break;

  case 2314: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3085 "ompparser.yy"
                                             {
                                }
#line 10882 "ompparser.cc"
    break;

  case 2315: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3087 "ompparser.yy"
                                                                                  { ; }
#line 10888 "ompparser.cc"
    break;

  case 2316: /* $@174: %empty  */
#line 3089 "ompparser.yy"
                                                   { }
#line 10894 "ompparser.cc"
    break;

  case 2317: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@174 expression  */
#line 3089 "ompparser.yy"
                                                                   { ; }
#line 10900 "ompparser.cc"
    break;

  case 2318: /* $@175: %empty  */
#line 3090 "ompparser.yy"
                                                   { }
#line 10906 "ompparser.cc"
    break;

  case 2319: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@175 expression  */
#line 3090 "ompparser.yy"
                                                                   { ; }
#line 10912 "ompparser.cc"
    break;

  case 2320: /* $@176: %empty  */
#line 3091 "ompparser.yy"
                                               { }
#line 10918 "ompparser.cc"
    break;

  case 2321: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@176 expression  */
#line 3091 "ompparser.yy"
                                                               { ; }
#line 10924 "ompparser.cc"
    break;

  case 2322: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3092 "ompparser.yy"
                                                  { }
#line 10930 "ompparser.cc"
    break;

  case 2323: /* $@177: %empty  */
#line 3103 "ompparser.yy"
                                {
                         }
#line 10937 "ompparser.cc"
    break;

  case 2325: /* $@178: %empty  */
#line 3106 "ompparser.yy"
                            {
                         }
#line 10944 "ompparser.cc"
    break;

  case 2327: /* $@179: %empty  */
#line 3109 "ompparser.yy"
                    {
                  }
#line 10951 "ompparser.cc"
    break;

  case 2329: /* $@180: %empty  */
#line 3113 "ompparser.yy"
                                  { }
#line 10957 "ompparser.cc"
    break;

  case 2331: /* $@181: %empty  */
#line 3115 "ompparser.yy"
                      {
                }
#line 10964 "ompparser.cc"
    break;

  case 2333: /* default_clause: DEFAULT '(' default_parameter ')'  */
#line 3119 "ompparser.yy"
                                                   { }
#line 10970 "ompparser.cc"
    break;

  case 2334: /* default_parameter: SHARED  */
#line 3122 "ompparser.yy"
                           { }
#line 10976 "ompparser.cc"
    break;

  case 2335: /* default_parameter: NONE  */
#line 3123 "ompparser.yy"
                         { }
#line 10982 "ompparser.cc"
    break;

  case 2336: /* default_parameter: FIRSTPRIVATE  */
#line 3124 "ompparser.yy"
                                 { }
#line 10988 "ompparser.cc"
    break;

  case 2337: /* default_parameter: PRIVATE  */
#line 3125 "ompparser.yy"
                            { }
#line 10994 "ompparser.cc"
    break;

  case 2338: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3128 "ompparser.yy"
                                                                   { }
#line 11000 "ompparser.cc"
    break;

  case 2339: /* default_variant_directive: %empty  */
#line 3131 "ompparser.yy"
                            { }
#line 11006 "ompparser.cc"
    break;

  case 2340: /* proc_bind_clause: PROC_BIND '(' proc_bind_parameter ')'  */
#line 3134 "ompparser.yy"
                                                         { }
#line 11012 "ompparser.cc"
    break;

  case 2341: /* proc_bind_parameter: MASTER  */
#line 3136 "ompparser.yy"
                             { }
#line 11018 "ompparser.cc"
    break;

  case 2342: /* proc_bind_parameter: CLOSE  */
#line 3137 "ompparser.yy"
                            { }
#line 11024 "ompparser.cc"
    break;

  case 2343: /* proc_bind_parameter: SPREAD  */
#line 3138 "ompparser.yy"
                             { }
#line 11030 "ompparser.cc"
    break;

  case 2344: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3140 "ompparser.yy"
                                          { }
#line 11036 "ompparser.cc"
    break;

  case 2345: /* bind_parameter: TEAMS  */
#line 3142 "ompparser.yy"
                       { }
#line 11042 "ompparser.cc"
    break;

  case 2346: /* bind_parameter: PARALLEL  */
#line 3143 "ompparser.yy"
                          { }
#line 11048 "ompparser.cc"
    break;

  case 2347: /* bind_parameter: THREAD  */
#line 3144 "ompparser.yy"
                        { }
#line 11054 "ompparser.cc"
    break;

  case 2349: /* allocate_parameter: EXPR_STRING  */
#line 3148 "ompparser.yy"
                                  { }
#line 11060 "ompparser.cc"
    break;

  case 2350: /* $@182: %empty  */
#line 3149 "ompparser.yy"
                                     { }
#line 11066 "ompparser.cc"
    break;

  case 2352: /* $@183: %empty  */
#line 3150 "ompparser.yy"
                                             { ; }
#line 11072 "ompparser.cc"
    break;

  case 2354: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3152 "ompparser.yy"
                                        { }
#line 11078 "ompparser.cc"
    break;

  case 2355: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3153 "ompparser.yy"
                                          { }
#line 11084 "ompparser.cc"
    break;

  case 2356: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3154 "ompparser.yy"
                                      { }
#line 11090 "ompparser.cc"
    break;

  case 2357: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3155 "ompparser.yy"
                                        { }
#line 11096 "ompparser.cc"
    break;

  case 2358: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3156 "ompparser.yy"
                                        { }
#line 11102 "ompparser.cc"
    break;

  case 2359: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3157 "ompparser.yy"
                                       { }
#line 11108 "ompparser.cc"
    break;

  case 2360: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3158 "ompparser.yy"
                                      { }
#line 11114 "ompparser.cc"
    break;

  case 2361: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3159 "ompparser.yy"
                                       { }
#line 11120 "ompparser.cc"
    break;

  case 2362: /* allocator_parameter: EXPR_STRING  */
#line 3160 "ompparser.yy"
                                  { }
#line 11126 "ompparser.cc"
    break;

  case 2363: /* $@184: %empty  */
#line 3163 "ompparser.yy"
                         { }
#line 11132 "ompparser.cc"
    break;

  case 2364: /* private_clause: PRIVATE $@184 '(' var_list ')'  */
#line 3163 "ompparser.yy"
                                              { }
#line 11138 "ompparser.cc"
    break;

  case 2365: /* alloc_clause: ALLOC '(' var_list_cluster ')'  */
#line 3166 "ompparser.yy"
                                              { MPIAlloc(); }
#line 11144 "ompparser.cc"
    break;

  case 2366: /* $@185: %empty  */
#line 3168 "ompparser.yy"
                     { }
#line 11150 "ompparser.cc"
    break;

  case 2367: /* broad_clause: BROAD $@185 '(' var_list_cluster ')'  */
#line 3168 "ompparser.yy"
                                                  { MPIBroad(); }
#line 11156 "ompparser.cc"
    break;

  case 2368: /* $@186: %empty  */
#line 3170 "ompparser.yy"
                         { }
#line 11162 "ompparser.cc"
    break;

  case 2369: /* scatter_clause: SCATTER $@186 '(' var_chunk_list_cluster ')'  */
#line 3170 "ompparser.yy"
                                                             { if(chunk == 1){ MPIScatterChunk(); }}
#line 11168 "ompparser.cc"
    break;

  case 2370: /* $@187: %empty  */
#line 3172 "ompparser.yy"
                   { }
#line 11174 "ompparser.cc"
    break;

  case 2371: /* halo_clause: HALO $@187 '(' var_chunk ')'  */
#line 3173 "ompparser.yy"
        { 
		if(update==1){
			MPIUpdateHalo(); 
			update = 0;
		}else{
			MPIScatterHalo(); 
		}
	}
#line 11187 "ompparser.cc"
    break;

  case 2372: /* $@188: %empty  */
#line 3182 "ompparser.yy"
                       { }
#line 11193 "ompparser.cc"
    break;

  case 2374: /* $@189: %empty  */
#line 3184 "ompparser.yy"
                             { }
#line 11199 "ompparser.cc"
    break;

  case 2376: /* $@190: %empty  */
#line 3186 "ompparser.yy"
                                   { }
#line 11205 "ompparser.cc"
    break;

  case 2378: /* $@191: %empty  */
#line 3188 "ompparser.yy"
                                   { }
#line 11211 "ompparser.cc"
    break;

  case 2379: /* firstprivate_clause: FIRSTPRIVATE $@191 '(' var_list ')'  */
#line 3188 "ompparser.yy"
                                                        { }
#line 11217 "ompparser.cc"
    break;

  case 2380: /* $@192: %empty  */
#line 3191 "ompparser.yy"
                                 { }
#line 11223 "ompparser.cc"
    break;

  case 2381: /* copyprivate_clause: COPYPRIVATE $@192 '(' var_list ')'  */
#line 3191 "ompparser.yy"
                                                      { }
#line 11229 "ompparser.cc"
    break;

  case 2382: /* $@193: %empty  */
#line 3193 "ompparser.yy"
                                         { }
#line 11235 "ompparser.cc"
    break;

  case 2383: /* fortran_copyprivate_clause: COPYPRIVATE $@193 '(' var_list ')'  */
#line 3193 "ompparser.yy"
                                                              { }
#line 11241 "ompparser.cc"
    break;

  case 2385: /* lastprivate_parameter: EXPR_STRING  */
#line 3197 "ompparser.yy"
                                    { }
#line 11247 "ompparser.cc"
    break;

  case 2386: /* $@194: %empty  */
#line 3198 "ompparser.yy"
                                        { }
#line 11253 "ompparser.cc"
    break;

  case 2388: /* $@195: %empty  */
#line 3199 "ompparser.yy"
                                                {;}
#line 11259 "ompparser.cc"
    break;

  case 2390: /* $@196: %empty  */
#line 3202 "ompparser.yy"
                                            { }
#line 11265 "ompparser.cc"
    break;

  case 2391: /* lastprivate_distribute_clause: LASTPRIVATE $@196 '(' var_list ')'  */
#line 3202 "ompparser.yy"
                                                                 { }
#line 11271 "ompparser.cc"
    break;

  case 2392: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3204 "ompparser.yy"
                                            { }
#line 11277 "ompparser.cc"
    break;

  case 2394: /* $@197: %empty  */
#line 3208 "ompparser.yy"
                                                            { }
#line 11283 "ompparser.cc"
    break;

  case 2396: /* linear_parameter: EXPR_STRING  */
#line 3211 "ompparser.yy"
                                { }
#line 11289 "ompparser.cc"
    break;

  case 2397: /* $@198: %empty  */
#line 3212 "ompparser.yy"
                                   {  }
#line 11295 "ompparser.cc"
    break;

  case 2400: /* linear_modifier: MODOFIER_VAL  */
#line 3215 "ompparser.yy"
                               { }
#line 11301 "ompparser.cc"
    break;

  case 2401: /* linear_modifier: MODOFIER_REF  */
#line 3216 "ompparser.yy"
                               { }
#line 11307 "ompparser.cc"
    break;

  case 2402: /* linear_modifier: MODOFIER_UVAL  */
#line 3217 "ompparser.yy"
                                { }
#line 11313 "ompparser.cc"
    break;

  case 2404: /* $@199: %empty  */
#line 3221 "ompparser.yy"
                                                               { }
#line 11319 "ompparser.cc"
    break;

  case 2406: /* aligned_parameter: EXPR_STRING  */
#line 3225 "ompparser.yy"
                                { }
#line 11325 "ompparser.cc"
    break;

  case 2407: /* $@200: %empty  */
#line 3226 "ompparser.yy"
                                    { }
#line 11331 "ompparser.cc"
    break;

  case 2411: /* expr: EXPR_STRING  */
#line 3233 "ompparser.yy"
                  { }
#line 11337 "ompparser.cc"
    break;

  case 2412: /* $@201: %empty  */
#line 3235 "ompparser.yy"
                        { }
#line 11343 "ompparser.cc"
    break;

  case 2413: /* safelen_clause: SAFELEN $@201 '(' var_list ')'  */
#line 3235 "ompparser.yy"
                                             { }
#line 11349 "ompparser.cc"
    break;

  case 2414: /* $@202: %empty  */
#line 3238 "ompparser.yy"
                        { }
#line 11355 "ompparser.cc"
    break;

  case 2415: /* simdlen_clause: SIMDLEN $@202 '(' var_list ')'  */
#line 3238 "ompparser.yy"
                                             { }
#line 11361 "ompparser.cc"
    break;

  case 2416: /* $@203: %empty  */
#line 3241 "ompparser.yy"
                                { }
#line 11367 "ompparser.cc"
    break;

  case 2417: /* nontemporal_clause: NONTEMPORAL $@203 '(' var_list ')'  */
#line 3241 "ompparser.yy"
                                                     { }
#line 11373 "ompparser.cc"
    break;

  case 2418: /* $@204: %empty  */
#line 3244 "ompparser.yy"
                          { }
#line 11379 "ompparser.cc"
    break;

  case 2419: /* collapse_clause: COLLAPSE $@204 '(' expression ')'  */
#line 3244 "ompparser.yy"
                                                 { }
#line 11385 "ompparser.cc"
    break;

  case 2420: /* $@205: %empty  */
#line 3247 "ompparser.yy"
                        { }
#line 11391 "ompparser.cc"
    break;

  case 2422: /* ordered_clause: ORDERED  */
#line 3248 "ompparser.yy"
                        { }
#line 11397 "ompparser.cc"
    break;

  case 2423: /* fortran_nowait_clause: NOWAIT  */
#line 3250 "ompparser.yy"
                              { }
#line 11403 "ompparser.cc"
    break;

  case 2424: /* nowait_clause: NOWAIT  */
#line 3252 "ompparser.yy"
                      { }
#line 11409 "ompparser.cc"
    break;

  case 2425: /* order_clause: ORDER '(' order_parameter ')'  */
#line 3254 "ompparser.yy"
                                            { }
#line 11415 "ompparser.cc"
    break;

  case 2426: /* order_parameter: CONCURRENT  */
#line 3257 "ompparser.yy"
                             { }
#line 11421 "ompparser.cc"
    break;

  case 2427: /* $@206: %empty  */
#line 3260 "ompparser.yy"
                        { }
#line 11427 "ompparser.cc"
    break;

  case 2429: /* inbranch_clause: INBRANCH  */
#line 3263 "ompparser.yy"
                          { }
#line 11433 "ompparser.cc"
    break;

  case 2430: /* notinbranch_clause: NOTINBRANCH  */
#line 3266 "ompparser.yy"
                                { }
#line 11439 "ompparser.cc"
    break;

  case 2431: /* $@207: %empty  */
#line 3268 "ompparser.yy"
                            { }
#line 11445 "ompparser.cc"
    break;

  case 2433: /* $@208: %empty  */
#line 3270 "ompparser.yy"
                            { }
#line 11451 "ompparser.cc"
    break;

  case 2436: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3273 "ompparser.yy"
                                         { }
#line 11457 "ompparser.cc"
    break;

  case 2437: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3274 "ompparser.yy"
                                           { }
#line 11463 "ompparser.cc"
    break;

  case 2438: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3275 "ompparser.yy"
                                       { }
#line 11469 "ompparser.cc"
    break;

  case 2439: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3276 "ompparser.yy"
                                         { }
#line 11475 "ompparser.cc"
    break;

  case 2440: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3277 "ompparser.yy"
                                         { }
#line 11481 "ompparser.cc"
    break;

  case 2441: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3278 "ompparser.yy"
                                        { }
#line 11487 "ompparser.cc"
    break;

  case 2442: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3279 "ompparser.yy"
                                       { }
#line 11493 "ompparser.cc"
    break;

  case 2443: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3280 "ompparser.yy"
                                        { }
#line 11499 "ompparser.cc"
    break;

  case 2444: /* allocator1_parameter: EXPR_STRING  */
#line 3281 "ompparser.yy"
                                   { }
#line 11505 "ompparser.cc"
    break;

  case 2445: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3284 "ompparser.yy"
                                                                     {}
#line 11511 "ompparser.cc"
    break;

  case 2446: /* dist_schedule_parameter: STATIC  */
#line 3286 "ompparser.yy"
                                 { }
#line 11517 "ompparser.cc"
    break;

  case 2447: /* $@209: %empty  */
#line 3287 "ompparser.yy"
                                 { }
#line 11523 "ompparser.cc"
    break;

  case 2448: /* dist_schedule_parameter: STATIC $@209 ',' EXPR_STRING  */
#line 3287 "ompparser.yy"
                                                     { }
#line 11529 "ompparser.cc"
    break;

  case 2449: /* $@210: %empty  */
#line 3289 "ompparser.yy"
                           { }
#line 11535 "ompparser.cc"
    break;

  case 2450: /* schedule_clause: SCHEDULE $@210 '(' schedule_parameter ')'  */
#line 3289 "ompparser.yy"
                                                         {
                }
#line 11542 "ompparser.cc"
    break;

  case 2451: /* schedule_parameter: schedule_kind  */
#line 3293 "ompparser.yy"
                                   {}
#line 11548 "ompparser.cc"
    break;

  case 2453: /* schedule_kind: schedule_enum_kind  */
#line 3298 "ompparser.yy"
                                   { }
#line 11554 "ompparser.cc"
    break;

  case 2454: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3299 "ompparser.yy"
                                                    { }
#line 11560 "ompparser.cc"
    break;

  case 2457: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3306 "ompparser.yy"
                                        { }
#line 11566 "ompparser.cc"
    break;

  case 2458: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3307 "ompparser.yy"
                                           { }
#line 11572 "ompparser.cc"
    break;

  case 2459: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3308 "ompparser.yy"
                                   { }
#line 11578 "ompparser.cc"
    break;

  case 2460: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3310 "ompparser.yy"
                                            { }
#line 11584 "ompparser.cc"
    break;

  case 2461: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3311 "ompparser.yy"
                                               { }
#line 11590 "ompparser.cc"
    break;

  case 2462: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3312 "ompparser.yy"
                                       { }
#line 11596 "ompparser.cc"
    break;

  case 2463: /* schedule_enum_kind: STATIC  */
#line 3315 "ompparser.yy"
                            { }
#line 11602 "ompparser.cc"
    break;

  case 2464: /* schedule_enum_kind: DYNAMIC  */
#line 3316 "ompparser.yy"
                             { }
#line 11608 "ompparser.cc"
    break;

  case 2465: /* schedule_enum_kind: GUIDED  */
#line 3317 "ompparser.yy"
                            { }
#line 11614 "ompparser.cc"
    break;

  case 2466: /* schedule_enum_kind: AUTO  */
#line 3318 "ompparser.yy"
                          { }
#line 11620 "ompparser.cc"
    break;

  case 2467: /* schedule_enum_kind: RUNTIME  */
#line 3319 "ompparser.yy"
                             { }
#line 11626 "ompparser.cc"
    break;

  case 2468: /* $@211: %empty  */
#line 3321 "ompparser.yy"
                       { }
#line 11632 "ompparser.cc"
    break;

  case 2470: /* $@212: %empty  */
#line 3324 "ompparser.yy"
                             { }
#line 11638 "ompparser.cc"
    break;

  case 2471: /* reduction_clause: REDUCTION $@212 '(' reduction_parameter ':' var_list ')'  */
#line 3324 "ompparser.yy"
                                                                          {
                 }
#line 11645 "ompparser.cc"
    break;

  case 2472: /* $@213: %empty  */
#line 3328 "ompparser.yy"
                                     { aumentarReduction(); }
#line 11651 "ompparser.cc"
    break;

  case 2474: /* $@214: %empty  */
#line 3331 "ompparser.yy"
                                           { aumentarAllReduction(); }
#line 11657 "ompparser.cc"
    break;

  case 2480: /* allreduction_identifier_cluster: reduction_enum_identifier  */
#line 3341 "ompparser.yy"
                                                            { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(false, (yyvsp[0].stype));}}
#line 11663 "ompparser.cc"
    break;

  case 2481: /* allreduction_identifier_cluster: EXPR_STRING  */
#line 3342 "ompparser.yy"
                                              { }
#line 11669 "ompparser.cc"
    break;

  case 2482: /* reduction_identifier_cluster: reduction_enum_identifier  */
#line 3345 "ompparser.yy"
                                                         { if(enReductionCluster || enReductionDistribute){addReduce(false, (yyvsp[0].stype));}}
#line 11675 "ompparser.cc"
    break;

  case 2483: /* reduction_identifier_cluster: EXPR_STRING  */
#line 3346 "ompparser.yy"
                                            { }
#line 11681 "ompparser.cc"
    break;

  case 2484: /* reduction_parameter: reduction_identifier  */
#line 3349 "ompparser.yy"
                                           {}
#line 11687 "ompparser.cc"
    break;

  case 2486: /* reduction_identifier: reduction_enum_identifier  */
#line 3353 "ompparser.yy"
                                                 {}
#line 11693 "ompparser.cc"
    break;

  case 2487: /* reduction_identifier: EXPR_STRING  */
#line 3354 "ompparser.yy"
                                   { }
#line 11699 "ompparser.cc"
    break;

  case 2488: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3357 "ompparser.yy"
                                     { }
#line 11705 "ompparser.cc"
    break;

  case 2489: /* reduction_modifier: MODIFIER_TASK  */
#line 3358 "ompparser.yy"
                                   { }
#line 11711 "ompparser.cc"
    break;

  case 2490: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3359 "ompparser.yy"
                                      { }
#line 11717 "ompparser.cc"
    break;

  case 2491: /* reduction_enum_identifier: '+'  */
#line 3362 "ompparser.yy"
                               { (yyval.stype) = "+"; }
#line 11723 "ompparser.cc"
    break;

  case 2492: /* reduction_enum_identifier: '-'  */
#line 3363 "ompparser.yy"
                               { }
#line 11729 "ompparser.cc"
    break;

  case 2493: /* reduction_enum_identifier: '*'  */
#line 3364 "ompparser.yy"
                               { (yyval.stype) = "*"; }
#line 11735 "ompparser.cc"
    break;

  case 2494: /* reduction_enum_identifier: '&'  */
#line 3365 "ompparser.yy"
                               { (yyval.stype) = "&"; }
#line 11741 "ompparser.cc"
    break;

  case 2495: /* reduction_enum_identifier: '|'  */
#line 3366 "ompparser.yy"
                               { (yyval.stype) = "|"; }
#line 11747 "ompparser.cc"
    break;

  case 2496: /* reduction_enum_identifier: '^'  */
#line 3367 "ompparser.yy"
                               { (yyval.stype) = "^"; }
#line 11753 "ompparser.cc"
    break;

  case 2497: /* reduction_enum_identifier: LOGAND  */
#line 3368 "ompparser.yy"
                                  { }
#line 11759 "ompparser.cc"
    break;

  case 2498: /* reduction_enum_identifier: LOGOR  */
#line 3369 "ompparser.yy"
                                 { }
#line 11765 "ompparser.cc"
    break;

  case 2499: /* reduction_enum_identifier: MAX  */
#line 3370 "ompparser.yy"
                               { (yyval.stype) = "MAX"; }
#line 11771 "ompparser.cc"
    break;

  case 2500: /* reduction_enum_identifier: MIN  */
#line 3371 "ompparser.yy"
                               { (yyval.stype) = "MIN"; }
#line 11777 "ompparser.cc"
    break;

  case 2501: /* $@215: %empty  */
#line 3374 "ompparser.yy"
                                          { }
#line 11783 "ompparser.cc"
    break;

  case 2502: /* reduction_default_only_clause: REDUCTION $@215 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3374 "ompparser.yy"
                                                                                                    {
                              }
#line 11790 "ompparser.cc"
    break;

  case 2503: /* reduction_default_only_parameter: reduction_identifier  */
#line 3378 "ompparser.yy"
                                                        {}
#line 11796 "ompparser.cc"
    break;

  case 2505: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3382 "ompparser.yy"
                                                   { }
#line 11802 "ompparser.cc"
    break;


#line 11806 "ompparser.cc"

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

#line 3385 "ompparser.yy"


int yyerror(const char *s) {
    // printf(" %s!\n", s);
    fprintf(stdout,"error: %s\n",s);
    return 0;
}
 
int yywrap()
{
    return 1;
} 

// Standalone ompparser
void parseOpenMP(const char* _input, void * _exprParse(const char*)) {
    printf("Start parsing...\n");
    const char *input = _input;
    start_lexer(input);
    yyparse();
    end_lexer();
}
