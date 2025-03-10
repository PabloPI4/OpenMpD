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

int includeStringDone = 0;
int enCluster = 0;
int enDistribute = 0;
int enDistributeExtendido = 0;
int meterEnClause = 0;
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
int enDeclare = 0;

extern int dist_n_llaves;
extern string scheduleDist;
extern string guardarLineasDist;

void * (*exprParse)(const char*) = NULL;

//From template
extern void addArg(const char *arg);
extern void MPIAlloc();
extern void MPIBroad();
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
extern void IncludeString();
extern void MPIDeclareCluster();
extern void MPIScatter();


#line 161 "ompparser.cc"

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
  YYSYMBOL_FOR = 4,                        /* FOR  */
  YYSYMBOL_DO = 5,                         /* DO  */
  YYSYMBOL_DECLARE = 6,                    /* DECLARE  */
  YYSYMBOL_DISTRIBUTE = 7,                 /* DISTRIBUTE  */
  YYSYMBOL_LOOP = 8,                       /* LOOP  */
  YYSYMBOL_SCAN = 9,                       /* SCAN  */
  YYSYMBOL_SECTIONS = 10,                  /* SECTIONS  */
  YYSYMBOL_SECTION = 11,                   /* SECTION  */
  YYSYMBOL_SINGLE = 12,                    /* SINGLE  */
  YYSYMBOL_CANCEL = 13,                    /* CANCEL  */
  YYSYMBOL_TASKGROUP = 14,                 /* TASKGROUP  */
  YYSYMBOL_CANCELLATION = 15,              /* CANCELLATION  */
  YYSYMBOL_POINT = 16,                     /* POINT  */
  YYSYMBOL_THREAD = 17,                    /* THREAD  */
  YYSYMBOL_VARIANT = 18,                   /* VARIANT  */
  YYSYMBOL_THREADPRIVATE = 19,             /* THREADPRIVATE  */
  YYSYMBOL_METADIRECTIVE = 20,             /* METADIRECTIVE  */
  YYSYMBOL_MAPPER = 21,                    /* MAPPER  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_NUM_THREADS = 23,               /* NUM_THREADS  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_COPYIN = 25,                    /* COPYIN  */
  YYSYMBOL_REDUCTION = 26,                 /* REDUCTION  */
  YYSYMBOL_PROC_BIND = 27,                 /* PROC_BIND  */
  YYSYMBOL_ALLOCATE = 28,                  /* ALLOCATE  */
  YYSYMBOL_SIMD = 29,                      /* SIMD  */
  YYSYMBOL_TASK = 30,                      /* TASK  */
  YYSYMBOL_LASTPRIVATE = 31,               /* LASTPRIVATE  */
  YYSYMBOL_WHEN = 32,                      /* WHEN  */
  YYSYMBOL_MATCH = 33,                     /* MATCH  */
  YYSYMBOL_LINEAR = 34,                    /* LINEAR  */
  YYSYMBOL_SCHEDULE = 35,                  /* SCHEDULE  */
  YYSYMBOL_COLLAPSE = 36,                  /* COLLAPSE  */
  YYSYMBOL_NOWAIT = 37,                    /* NOWAIT  */
  YYSYMBOL_ORDER = 38,                     /* ORDER  */
  YYSYMBOL_ORDERED = 39,                   /* ORDERED  */
  YYSYMBOL_STATIC = 40,                    /* STATIC  */
  YYSYMBOL_DYNAMIC = 41,                   /* DYNAMIC  */
  YYSYMBOL_GUIDED = 42,                    /* GUIDED  */
  YYSYMBOL_AUTO = 43,                      /* AUTO  */
  YYSYMBOL_RUNTIME = 44,                   /* RUNTIME  */
  YYSYMBOL_SAFELEN = 45,                   /* SAFELEN  */
  YYSYMBOL_SIMDLEN = 46,                   /* SIMDLEN  */
  YYSYMBOL_ALIGNED = 47,                   /* ALIGNED  */
  YYSYMBOL_ALIGN = 48,                     /* ALIGN  */
  YYSYMBOL_NONTEMPORAL = 49,               /* NONTEMPORAL  */
  YYSYMBOL_UNIFORM = 50,                   /* UNIFORM  */
  YYSYMBOL_INBRANCH = 51,                  /* INBRANCH  */
  YYSYMBOL_NOTINBRANCH = 52,               /* NOTINBRANCH  */
  YYSYMBOL_DIST_SCHEDULE = 53,             /* DIST_SCHEDULE  */
  YYSYMBOL_BIND = 54,                      /* BIND  */
  YYSYMBOL_INCLUSIVE = 55,                 /* INCLUSIVE  */
  YYSYMBOL_EXCLUSIVE = 56,                 /* EXCLUSIVE  */
  YYSYMBOL_COPYPRIVATE = 57,               /* COPYPRIVATE  */
  YYSYMBOL_ALLOCATOR = 58,                 /* ALLOCATOR  */
  YYSYMBOL_INITIALIZER = 59,               /* INITIALIZER  */
  YYSYMBOL_OMP_PRIV = 60,                  /* OMP_PRIV  */
  YYSYMBOL_IDENTIFIER_DEFAULT = 61,        /* IDENTIFIER_DEFAULT  */
  YYSYMBOL_WORKSHARE = 62,                 /* WORKSHARE  */
  YYSYMBOL_PLUS = 63,                      /* PLUS  */
  YYSYMBOL_MINUS = 64,                     /* MINUS  */
  YYSYMBOL_STAR = 65,                      /* STAR  */
  YYSYMBOL_BITAND = 66,                    /* BITAND  */
  YYSYMBOL_BITOR = 67,                     /* BITOR  */
  YYSYMBOL_BITXOR = 68,                    /* BITXOR  */
  YYSYMBOL_LOGAND = 69,                    /* LOGAND  */
  YYSYMBOL_LOGOR = 70,                     /* LOGOR  */
  YYSYMBOL_EQV = 71,                       /* EQV  */
  YYSYMBOL_NEQV = 72,                      /* NEQV  */
  YYSYMBOL_MAX = 73,                       /* MAX  */
  YYSYMBOL_MIN = 74,                       /* MIN  */
  YYSYMBOL_DEFAULT_MEM_ALLOC = 75,         /* DEFAULT_MEM_ALLOC  */
  YYSYMBOL_LARGE_CAP_MEM_ALLOC = 76,       /* LARGE_CAP_MEM_ALLOC  */
  YYSYMBOL_CONST_MEM_ALLOC = 77,           /* CONST_MEM_ALLOC  */
  YYSYMBOL_HIGH_BW_MEM_ALLOC = 78,         /* HIGH_BW_MEM_ALLOC  */
  YYSYMBOL_LOW_LAT_MEM_ALLOC = 79,         /* LOW_LAT_MEM_ALLOC  */
  YYSYMBOL_CGROUP_MEM_ALLOC = 80,          /* CGROUP_MEM_ALLOC  */
  YYSYMBOL_PTEAM_MEM_ALLOC = 81,           /* PTEAM_MEM_ALLOC  */
  YYSYMBOL_THREAD_MEM_ALLOC = 82,          /* THREAD_MEM_ALLOC  */
  YYSYMBOL_TEAMS = 83,                     /* TEAMS  */
  YYSYMBOL_NUM_TEAMS = 84,                 /* NUM_TEAMS  */
  YYSYMBOL_THREAD_LIMIT = 85,              /* THREAD_LIMIT  */
  YYSYMBOL_END = 86,                       /* END  */
  YYSYMBOL_USER = 87,                      /* USER  */
  YYSYMBOL_CONSTRUCT = 88,                 /* CONSTRUCT  */
  YYSYMBOL_DEVICE = 89,                    /* DEVICE  */
  YYSYMBOL_IMPLEMENTATION = 90,            /* IMPLEMENTATION  */
  YYSYMBOL_CONDITION = 91,                 /* CONDITION  */
  YYSYMBOL_SCORE = 92,                     /* SCORE  */
  YYSYMBOL_VENDOR = 93,                    /* VENDOR  */
  YYSYMBOL_KIND = 94,                      /* KIND  */
  YYSYMBOL_HOST = 95,                      /* HOST  */
  YYSYMBOL_NOHOST = 96,                    /* NOHOST  */
  YYSYMBOL_ANY = 97,                       /* ANY  */
  YYSYMBOL_CPU = 98,                       /* CPU  */
  YYSYMBOL_GPU = 99,                       /* GPU  */
  YYSYMBOL_FPGA = 100,                     /* FPGA  */
  YYSYMBOL_ISA = 101,                      /* ISA  */
  YYSYMBOL_ARCH = 102,                     /* ARCH  */
  YYSYMBOL_EXTENSION = 103,                /* EXTENSION  */
  YYSYMBOL_AMD = 104,                      /* AMD  */
  YYSYMBOL_ARM = 105,                      /* ARM  */
  YYSYMBOL_BSC = 106,                      /* BSC  */
  YYSYMBOL_CRAY = 107,                     /* CRAY  */
  YYSYMBOL_FUJITSU = 108,                  /* FUJITSU  */
  YYSYMBOL_GNU = 109,                      /* GNU  */
  YYSYMBOL_IBM = 110,                      /* IBM  */
  YYSYMBOL_INTEL = 111,                    /* INTEL  */
  YYSYMBOL_LLVM = 112,                     /* LLVM  */
  YYSYMBOL_PGI = 113,                      /* PGI  */
  YYSYMBOL_TI = 114,                       /* TI  */
  YYSYMBOL_UNKNOWN = 115,                  /* UNKNOWN  */
  YYSYMBOL_FINAL = 116,                    /* FINAL  */
  YYSYMBOL_UNTIED = 117,                   /* UNTIED  */
  YYSYMBOL_MERGEABLE = 118,                /* MERGEABLE  */
  YYSYMBOL_IN_REDUCTION = 119,             /* IN_REDUCTION  */
  YYSYMBOL_DEPEND = 120,                   /* DEPEND  */
  YYSYMBOL_PRIORITY = 121,                 /* PRIORITY  */
  YYSYMBOL_AFFINITY = 122,                 /* AFFINITY  */
  YYSYMBOL_DETACH = 123,                   /* DETACH  */
  YYSYMBOL_MODIFIER_ITERATOR = 124,        /* MODIFIER_ITERATOR  */
  YYSYMBOL_DEPOBJ = 125,                   /* DEPOBJ  */
  YYSYMBOL_FINAL_CLAUSE = 126,             /* FINAL_CLAUSE  */
  YYSYMBOL_IN = 127,                       /* IN  */
  YYSYMBOL_INOUT = 128,                    /* INOUT  */
  YYSYMBOL_MUTEXINOUTSET = 129,            /* MUTEXINOUTSET  */
  YYSYMBOL_OUT = 130,                      /* OUT  */
  YYSYMBOL_TASKLOOP = 131,                 /* TASKLOOP  */
  YYSYMBOL_GRAINSIZE = 132,                /* GRAINSIZE  */
  YYSYMBOL_NUM_TASKS = 133,                /* NUM_TASKS  */
  YYSYMBOL_NOGROUP = 134,                  /* NOGROUP  */
  YYSYMBOL_TASKYIELD = 135,                /* TASKYIELD  */
  YYSYMBOL_REQUIRES = 136,                 /* REQUIRES  */
  YYSYMBOL_REVERSE_OFFLOAD = 137,          /* REVERSE_OFFLOAD  */
  YYSYMBOL_UNIFIED_ADDRESS = 138,          /* UNIFIED_ADDRESS  */
  YYSYMBOL_UNIFIED_SHARED_MEMORY = 139,    /* UNIFIED_SHARED_MEMORY  */
  YYSYMBOL_ATOMIC_DEFAULT_MEM_ORDER = 140, /* ATOMIC_DEFAULT_MEM_ORDER  */
  YYSYMBOL_DYNAMIC_ALLOCATORS = 141,       /* DYNAMIC_ALLOCATORS  */
  YYSYMBOL_SEQ_CST = 142,                  /* SEQ_CST  */
  YYSYMBOL_ACQ_REL = 143,                  /* ACQ_REL  */
  YYSYMBOL_RELAXED = 144,                  /* RELAXED  */
  YYSYMBOL_USE_DEVICE_PTR = 145,           /* USE_DEVICE_PTR  */
  YYSYMBOL_USE_DEVICE_ADDR = 146,          /* USE_DEVICE_ADDR  */
  YYSYMBOL_TARGET = 147,                   /* TARGET  */
  YYSYMBOL_DATA = 148,                     /* DATA  */
  YYSYMBOL_ENTER = 149,                    /* ENTER  */
  YYSYMBOL_EXIT = 150,                     /* EXIT  */
  YYSYMBOL_ANCESTOR = 151,                 /* ANCESTOR  */
  YYSYMBOL_DEVICE_NUM = 152,               /* DEVICE_NUM  */
  YYSYMBOL_IS_DEVICE_PTR = 153,            /* IS_DEVICE_PTR  */
  YYSYMBOL_HAS_DEVICE_ADDR = 154,          /* HAS_DEVICE_ADDR  */
  YYSYMBOL_DEFAULTMAP = 155,               /* DEFAULTMAP  */
  YYSYMBOL_BEHAVIOR_ALLOC = 156,           /* BEHAVIOR_ALLOC  */
  YYSYMBOL_BEHAVIOR_TO = 157,              /* BEHAVIOR_TO  */
  YYSYMBOL_BEHAVIOR_FROM = 158,            /* BEHAVIOR_FROM  */
  YYSYMBOL_BEHAVIOR_TOFROM = 159,          /* BEHAVIOR_TOFROM  */
  YYSYMBOL_BEHAVIOR_FIRSTPRIVATE = 160,    /* BEHAVIOR_FIRSTPRIVATE  */
  YYSYMBOL_BEHAVIOR_NONE = 161,            /* BEHAVIOR_NONE  */
  YYSYMBOL_BEHAVIOR_DEFAULT = 162,         /* BEHAVIOR_DEFAULT  */
  YYSYMBOL_CATEGORY_SCALAR = 163,          /* CATEGORY_SCALAR  */
  YYSYMBOL_CATEGORY_AGGREGATE = 164,       /* CATEGORY_AGGREGATE  */
  YYSYMBOL_CATEGORY_POINTER = 165,         /* CATEGORY_POINTER  */
  YYSYMBOL_CATEGORY_ALLOCATABLE = 166,     /* CATEGORY_ALLOCATABLE  */
  YYSYMBOL_UPDATE = 167,                   /* UPDATE  */
  YYSYMBOL_TO = 168,                       /* TO  */
  YYSYMBOL_FROM = 169,                     /* FROM  */
  YYSYMBOL_TO_MAPPER = 170,                /* TO_MAPPER  */
  YYSYMBOL_FROM_MAPPER = 171,              /* FROM_MAPPER  */
  YYSYMBOL_USES_ALLOCATORS = 172,          /* USES_ALLOCATORS  */
  YYSYMBOL_LINK = 173,                     /* LINK  */
  YYSYMBOL_DEVICE_TYPE = 174,              /* DEVICE_TYPE  */
  YYSYMBOL_MAP = 175,                      /* MAP  */
  YYSYMBOL_MAP_MODIFIER_ALWAYS = 176,      /* MAP_MODIFIER_ALWAYS  */
  YYSYMBOL_MAP_MODIFIER_CLOSE = 177,       /* MAP_MODIFIER_CLOSE  */
  YYSYMBOL_MAP_MODIFIER_MAPPER = 178,      /* MAP_MODIFIER_MAPPER  */
  YYSYMBOL_MAP_TYPE_TO = 179,              /* MAP_TYPE_TO  */
  YYSYMBOL_MAP_TYPE_FROM = 180,            /* MAP_TYPE_FROM  */
  YYSYMBOL_MAP_TYPE_TOFROM = 181,          /* MAP_TYPE_TOFROM  */
  YYSYMBOL_MAP_TYPE_ALLOC = 182,           /* MAP_TYPE_ALLOC  */
  YYSYMBOL_MAP_TYPE_RELEASE = 183,         /* MAP_TYPE_RELEASE  */
  YYSYMBOL_MAP_TYPE_DELETE = 184,          /* MAP_TYPE_DELETE  */
  YYSYMBOL_EXT_ = 185,                     /* EXT_  */
  YYSYMBOL_BARRIER = 186,                  /* BARRIER  */
  YYSYMBOL_TASKWAIT = 187,                 /* TASKWAIT  */
  YYSYMBOL_FLUSH = 188,                    /* FLUSH  */
  YYSYMBOL_RELEASE = 189,                  /* RELEASE  */
  YYSYMBOL_ACQUIRE = 190,                  /* ACQUIRE  */
  YYSYMBOL_ATOMIC = 191,                   /* ATOMIC  */
  YYSYMBOL_READ = 192,                     /* READ  */
  YYSYMBOL_WRITE = 193,                    /* WRITE  */
  YYSYMBOL_CAPTURE = 194,                  /* CAPTURE  */
  YYSYMBOL_HINT = 195,                     /* HINT  */
  YYSYMBOL_CRITICAL = 196,                 /* CRITICAL  */
  YYSYMBOL_SOURCE = 197,                   /* SOURCE  */
  YYSYMBOL_SINK = 198,                     /* SINK  */
  YYSYMBOL_DESTROY = 199,                  /* DESTROY  */
  YYSYMBOL_THREADS = 200,                  /* THREADS  */
  YYSYMBOL_CLUSTER = 201,                  /* CLUSTER  */
  YYSYMBOL_ALLOC = 202,                    /* ALLOC  */
  YYSYMBOL_BROAD = 203,                    /* BROAD  */
  YYSYMBOL_SCATTER = 204,                  /* SCATTER  */
  YYSYMBOL_GATHER = 205,                   /* GATHER  */
  YYSYMBOL_ALLGATHER = 206,                /* ALLGATHER  */
  YYSYMBOL_ALLREDUCTION = 207,             /* ALLREDUCTION  */
  YYSYMBOL_CHUNK = 208,                    /* CHUNK  */
  YYSYMBOL_HALO = 209,                     /* HALO  */
  YYSYMBOL_TASK_ASYNC = 210,               /* TASK_ASYNC  */
  YYSYMBOL_ICONSTANT = 211,                /* ICONSTANT  */
  YYSYMBOL_EXPRESSION = 212,               /* EXPRESSION  */
  YYSYMBOL_ID_EXPRESSION = 213,            /* ID_EXPRESSION  */
  YYSYMBOL_EXPR_STRING = 214,              /* EXPR_STRING  */
  YYSYMBOL_VAR_STRING = 215,               /* VAR_STRING  */
  YYSYMBOL_TASK_REDUCTION = 216,           /* TASK_REDUCTION  */
  YYSYMBOL_MODIFIER_CONDITIONAL = 217,     /* MODIFIER_CONDITIONAL  */
  YYSYMBOL_MODOFIER_VAL = 218,             /* MODOFIER_VAL  */
  YYSYMBOL_MODOFIER_REF = 219,             /* MODOFIER_REF  */
  YYSYMBOL_MODOFIER_UVAL = 220,            /* MODOFIER_UVAL  */
  YYSYMBOL_MODIFIER_INSCAN = 221,          /* MODIFIER_INSCAN  */
  YYSYMBOL_MODIFIER_TASK = 222,            /* MODIFIER_TASK  */
  YYSYMBOL_MODIFIER_DEFAULT = 223,         /* MODIFIER_DEFAULT  */
  YYSYMBOL_CONCURRENT = 224,               /* CONCURRENT  */
  YYSYMBOL_PARALLEL = 225,                 /* PARALLEL  */
  YYSYMBOL_SHARED = 226,                   /* SHARED  */
  YYSYMBOL_NONE = 227,                     /* NONE  */
  YYSYMBOL_PRIVATE = 228,                  /* PRIVATE  */
  YYSYMBOL_FIRSTPRIVATE = 229,             /* FIRSTPRIVATE  */
  YYSYMBOL_MASTER = 230,                   /* MASTER  */
  YYSYMBOL_CLOSE = 231,                    /* CLOSE  */
  YYSYMBOL_SPREAD = 232,                   /* SPREAD  */
  YYSYMBOL_MODIFIER_MONOTONIC = 233,       /* MODIFIER_MONOTONIC  */
  YYSYMBOL_MODIFIER_NONMONOTONIC = 234,    /* MODIFIER_NONMONOTONIC  */
  YYSYMBOL_MODIFIER_SIMD = 235,            /* MODIFIER_SIMD  */
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
  YYSYMBOL_263_1 = 263,                    /* $@1  */
  YYSYMBOL_var_list_allreduction = 264,    /* var_list_allreduction  */
  YYSYMBOL_var_chunk = 265,                /* var_chunk  */
  YYSYMBOL_var_chunk_list_cluster_aux_aux = 266, /* var_chunk_list_cluster_aux_aux  */
  YYSYMBOL_267_2 = 267,                    /* $@2  */
  YYSYMBOL_var_chunk_list_cluster_aux = 268, /* var_chunk_list_cluster_aux  */
  YYSYMBOL_269_3 = 269,                    /* $@3  */
  YYSYMBOL_var_chunk_list_cluster = 270,   /* var_chunk_list_cluster  */
  YYSYMBOL_271_4 = 271,                    /* $@4  */
  YYSYMBOL_dist_schedule_clause_cluster = 272, /* dist_schedule_clause_cluster  */
  YYSYMBOL_dist_schedule_parameter_cluster = 273, /* dist_schedule_parameter_cluster  */
  YYSYMBOL_openmp_directive = 274,         /* openmp_directive  */
  YYSYMBOL_275_5 = 275,                    /* $@5  */
  YYSYMBOL_directiveAuxCluster = 276,      /* directiveAuxCluster  */
  YYSYMBOL_variant_directive = 277,        /* variant_directive  */
  YYSYMBOL_fortran_paired_directive = 278, /* fortran_paired_directive  */
  YYSYMBOL_end_directive = 279,            /* end_directive  */
  YYSYMBOL_280_6 = 280,                    /* $@6  */
  YYSYMBOL_end_clause_seq = 281,           /* end_clause_seq  */
  YYSYMBOL_metadirective_directive = 282,  /* metadirective_directive  */
  YYSYMBOL_283_7 = 283,                    /* $@7  */
  YYSYMBOL_metadirective_clause_optseq = 284, /* metadirective_clause_optseq  */
  YYSYMBOL_metadirective_clause_seq = 285, /* metadirective_clause_seq  */
  YYSYMBOL_metadirective_clause = 286,     /* metadirective_clause  */
  YYSYMBOL_when_clause = 287,              /* when_clause  */
  YYSYMBOL_288_8 = 288,                    /* $@8  */
  YYSYMBOL_289_9 = 289,                    /* $@9  */
  YYSYMBOL_290_10 = 290,                   /* $@10  */
  YYSYMBOL_when_variant_directive = 291,   /* when_variant_directive  */
  YYSYMBOL_context_selector_specification = 292, /* context_selector_specification  */
  YYSYMBOL_trait_set_selector = 293,       /* trait_set_selector  */
  YYSYMBOL_294_11 = 294,                   /* $@11  */
  YYSYMBOL_295_12 = 295,                   /* $@12  */
  YYSYMBOL_trait_set_selector_name = 296,  /* trait_set_selector_name  */
  YYSYMBOL_trait_selector_list = 297,      /* trait_selector_list  */
  YYSYMBOL_trait_selector = 298,           /* trait_selector  */
  YYSYMBOL_condition_selector = 299,       /* condition_selector  */
  YYSYMBOL_300_13 = 300,                   /* $@13  */
  YYSYMBOL_device_selector = 301,          /* device_selector  */
  YYSYMBOL_context_kind = 302,             /* context_kind  */
  YYSYMBOL_context_kind_name = 303,        /* context_kind_name  */
  YYSYMBOL_context_isa = 304,              /* context_isa  */
  YYSYMBOL_context_arch = 305,             /* context_arch  */
  YYSYMBOL_implementation_selector = 306,  /* implementation_selector  */
  YYSYMBOL_context_vendor_name = 307,      /* context_vendor_name  */
  YYSYMBOL_construct_selector = 308,       /* construct_selector  */
  YYSYMBOL_parallel_selector = 309,        /* parallel_selector  */
  YYSYMBOL_310_14 = 310,                   /* $@14  */
  YYSYMBOL_parallel_selector_parameter = 311, /* parallel_selector_parameter  */
  YYSYMBOL_trait_score = 312,              /* trait_score  */
  YYSYMBOL_313_15 = 313,                   /* $@15  */
  YYSYMBOL_declare_variant_directive = 314, /* declare_variant_directive  */
  YYSYMBOL_315_16 = 315,                   /* $@16  */
  YYSYMBOL_variant_func_id = 316,          /* variant_func_id  */
  YYSYMBOL_317_17 = 317,                   /* $@17  */
  YYSYMBOL_declare_variant_clause_optseq = 318, /* declare_variant_clause_optseq  */
  YYSYMBOL_declare_variant_clause_seq = 319, /* declare_variant_clause_seq  */
  YYSYMBOL_declare_variant_clause = 320,   /* declare_variant_clause  */
  YYSYMBOL_match_clause = 321,             /* match_clause  */
  YYSYMBOL_322_18 = 322,                   /* $@18  */
  YYSYMBOL_parallel_directive = 323,       /* parallel_directive  */
  YYSYMBOL_324_19 = 324,                   /* $@19  */
  YYSYMBOL_cluster_directive = 325,        /* cluster_directive  */
  YYSYMBOL_326_20 = 326,                   /* $@20  */
  YYSYMBOL_declare_cluster_directive = 327, /* declare_cluster_directive  */
  YYSYMBOL_end_declare_cluster_directive = 328, /* end_declare_cluster_directive  */
  YYSYMBOL_cluster_data_directive = 329,   /* cluster_data_directive  */
  YYSYMBOL_330_21 = 330,                   /* $@21  */
  YYSYMBOL_cluster_update_directive = 331, /* cluster_update_directive  */
  YYSYMBOL_332_22 = 332,                   /* $@22  */
  YYSYMBOL_cluster_teams_directive = 333,  /* cluster_teams_directive  */
  YYSYMBOL_334_23 = 334,                   /* $@23  */
  YYSYMBOL_cluster_distribute_directive = 335, /* cluster_distribute_directive  */
  YYSYMBOL_336_24 = 336,                   /* $@24  */
  YYSYMBOL_cluster_teams_distribute_directive = 337, /* cluster_teams_distribute_directive  */
  YYSYMBOL_338_25 = 338,                   /* $@25  */
  YYSYMBOL_cluster_teams_master_directive = 339, /* cluster_teams_master_directive  */
  YYSYMBOL_task_async_directive = 340,     /* task_async_directive  */
  YYSYMBOL_341_26 = 341,                   /* $@26  */
  YYSYMBOL_task_directive = 342,           /* task_directive  */
  YYSYMBOL_343_27 = 343,                   /* $@27  */
  YYSYMBOL_taskloop_directive = 344,       /* taskloop_directive  */
  YYSYMBOL_345_28 = 345,                   /* $@28  */
  YYSYMBOL_taskloop_simd_directive = 346,  /* taskloop_simd_directive  */
  YYSYMBOL_347_29 = 347,                   /* $@29  */
  YYSYMBOL_taskyield_directive = 348,      /* taskyield_directive  */
  YYSYMBOL_requires_directive = 349,       /* requires_directive  */
  YYSYMBOL_350_30 = 350,                   /* $@30  */
  YYSYMBOL_target_data_directive = 351,    /* target_data_directive  */
  YYSYMBOL_352_31 = 352,                   /* $@31  */
  YYSYMBOL_target_enter_data_directive = 353, /* target_enter_data_directive  */
  YYSYMBOL_354_32 = 354,                   /* $@32  */
  YYSYMBOL_target_exit_data_directive = 355, /* target_exit_data_directive  */
  YYSYMBOL_356_33 = 356,                   /* $@33  */
  YYSYMBOL_target_directive = 357,         /* target_directive  */
  YYSYMBOL_358_34 = 358,                   /* $@34  */
  YYSYMBOL_target_update_directive = 359,  /* target_update_directive  */
  YYSYMBOL_360_35 = 360,                   /* $@35  */
  YYSYMBOL_declare_target_directive = 361, /* declare_target_directive  */
  YYSYMBOL_362_36 = 362,                   /* $@36  */
  YYSYMBOL_flush_directive = 363,          /* flush_directive  */
  YYSYMBOL_364_37 = 364,                   /* $@37  */
  YYSYMBOL_end_declare_target_directive = 365, /* end_declare_target_directive  */
  YYSYMBOL_master_directive = 366,         /* master_directive  */
  YYSYMBOL_barrier_directive = 367,        /* barrier_directive  */
  YYSYMBOL_taskwait_directive = 368,       /* taskwait_directive  */
  YYSYMBOL_369_38 = 369,                   /* $@38  */
  YYSYMBOL_taskgroup_directive = 370,      /* taskgroup_directive  */
  YYSYMBOL_371_39 = 371,                   /* $@39  */
  YYSYMBOL_critical_directive = 372,       /* critical_directive  */
  YYSYMBOL_373_40 = 373,                   /* $@40  */
  YYSYMBOL_depobj_directive = 374,         /* depobj_directive  */
  YYSYMBOL_375_41 = 375,                   /* $@41  */
  YYSYMBOL_ordered_directive = 376,        /* ordered_directive  */
  YYSYMBOL_377_42 = 377,                   /* $@42  */
  YYSYMBOL_critical_clause_optseq = 378,   /* critical_clause_optseq  */
  YYSYMBOL_depobj_clause_optseq = 379,     /* depobj_clause_optseq  */
  YYSYMBOL_depobj = 380,                   /* depobj  */
  YYSYMBOL_depobj_clause = 381,            /* depobj_clause  */
  YYSYMBOL_destroy_clause = 382,           /* destroy_clause  */
  YYSYMBOL_depobj_update_clause = 383,     /* depobj_update_clause  */
  YYSYMBOL_update_dependence_type = 384,   /* update_dependence_type  */
  YYSYMBOL_critical_name = 385,            /* critical_name  */
  YYSYMBOL_task_clause_optseq = 386,       /* task_clause_optseq  */
  YYSYMBOL_taskloop_clause_optseq = 387,   /* taskloop_clause_optseq  */
  YYSYMBOL_taskloop_simd_clause_optseq = 388, /* taskloop_simd_clause_optseq  */
  YYSYMBOL_requires_clause_optseq = 389,   /* requires_clause_optseq  */
  YYSYMBOL_target_data_clause_optseq = 390, /* target_data_clause_optseq  */
  YYSYMBOL_target_enter_data_clause_optseq = 391, /* target_enter_data_clause_optseq  */
  YYSYMBOL_target_exit_data_clause_optseq = 392, /* target_exit_data_clause_optseq  */
  YYSYMBOL_target_clause_optseq = 393,     /* target_clause_optseq  */
  YYSYMBOL_target_update_clause_optseq = 394, /* target_update_clause_optseq  */
  YYSYMBOL_declare_target_clause_optseq = 395, /* declare_target_clause_optseq  */
  YYSYMBOL_extended_variable = 396,        /* extended_variable  */
  YYSYMBOL_declare_target_extended_list = 397, /* declare_target_extended_list  */
  YYSYMBOL_flush_clause_optseq = 398,      /* flush_clause_optseq  */
  YYSYMBOL_flush_list = 399,               /* flush_list  */
  YYSYMBOL_flush_variable = 400,           /* flush_variable  */
  YYSYMBOL_flush_clause_seq = 401,         /* flush_clause_seq  */
  YYSYMBOL_flush_memory_order_clause = 402, /* flush_memory_order_clause  */
  YYSYMBOL_atomic_directive = 403,         /* atomic_directive  */
  YYSYMBOL_404_43 = 404,                   /* $@43  */
  YYSYMBOL_atomic_clause_optseq = 405,     /* atomic_clause_optseq  */
  YYSYMBOL_atomic_clause_seq = 406,        /* atomic_clause_seq  */
  YYSYMBOL_memory_order_clause_seq = 407,  /* memory_order_clause_seq  */
  YYSYMBOL_memory_order_clause_seq_after = 408, /* memory_order_clause_seq_after  */
  YYSYMBOL_atomic_clause = 409,            /* atomic_clause  */
  YYSYMBOL_memory_order_clause = 410,      /* memory_order_clause  */
  YYSYMBOL_hint_clause = 411,              /* hint_clause  */
  YYSYMBOL_412_44 = 412,                   /* $@44  */
  YYSYMBOL_read_clause = 413,              /* read_clause  */
  YYSYMBOL_write_clause = 414,             /* write_clause  */
  YYSYMBOL_update_clause = 415,            /* update_clause  */
  YYSYMBOL_capture_clause = 416,           /* capture_clause  */
  YYSYMBOL_seq_cst_clause = 417,           /* seq_cst_clause  */
  YYSYMBOL_acq_rel_clause = 418,           /* acq_rel_clause  */
  YYSYMBOL_release_clause = 419,           /* release_clause  */
  YYSYMBOL_acquire_clause = 420,           /* acquire_clause  */
  YYSYMBOL_relaxed_clause = 421,           /* relaxed_clause  */
  YYSYMBOL_taskwait_clause_optseq = 422,   /* taskwait_clause_optseq  */
  YYSYMBOL_taskgroup_clause_optseq = 423,  /* taskgroup_clause_optseq  */
  YYSYMBOL_task_clause_seq = 424,          /* task_clause_seq  */
  YYSYMBOL_taskloop_clause_seq = 425,      /* taskloop_clause_seq  */
  YYSYMBOL_taskloop_simd_clause_seq = 426, /* taskloop_simd_clause_seq  */
  YYSYMBOL_requires_clause_seq = 427,      /* requires_clause_seq  */
  YYSYMBOL_target_data_clause_seq = 428,   /* target_data_clause_seq  */
  YYSYMBOL_target_enter_data_clause_seq = 429, /* target_enter_data_clause_seq  */
  YYSYMBOL_target_exit_data_clause_seq = 430, /* target_exit_data_clause_seq  */
  YYSYMBOL_target_clause_seq = 431,        /* target_clause_seq  */
  YYSYMBOL_target_update_clause_seq = 432, /* target_update_clause_seq  */
  YYSYMBOL_declare_target_seq = 433,       /* declare_target_seq  */
  YYSYMBOL_taskwait_clause_seq = 434,      /* taskwait_clause_seq  */
  YYSYMBOL_taskgroup_clause_seq = 435,     /* taskgroup_clause_seq  */
  YYSYMBOL_task_clause = 436,              /* task_clause  */
  YYSYMBOL_taskloop_clause = 437,          /* taskloop_clause  */
  YYSYMBOL_taskloop_simd_clause = 438,     /* taskloop_simd_clause  */
  YYSYMBOL_requires_clause = 439,          /* requires_clause  */
  YYSYMBOL_target_data_clause = 440,       /* target_data_clause  */
  YYSYMBOL_target_enter_data_clause = 441, /* target_enter_data_clause  */
  YYSYMBOL_target_exit_data_clause = 442,  /* target_exit_data_clause  */
  YYSYMBOL_target_clause = 443,            /* target_clause  */
  YYSYMBOL_target_update_clause = 444,     /* target_update_clause  */
  YYSYMBOL_motion_clause = 445,            /* motion_clause  */
  YYSYMBOL_target_update_other_clause = 446, /* target_update_other_clause  */
  YYSYMBOL_declare_target_clause = 447,    /* declare_target_clause  */
  YYSYMBOL_taskwait_clause = 448,          /* taskwait_clause  */
  YYSYMBOL_taskgroup_clause = 449,         /* taskgroup_clause  */
  YYSYMBOL_final_clause = 450,             /* final_clause  */
  YYSYMBOL_451_45 = 451,                   /* $@45  */
  YYSYMBOL_untied_clause = 452,            /* untied_clause  */
  YYSYMBOL_mergeable_clause = 453,         /* mergeable_clause  */
  YYSYMBOL_in_reduction_clause = 454,      /* in_reduction_clause  */
  YYSYMBOL_in_reduction_identifier = 455,  /* in_reduction_identifier  */
  YYSYMBOL_in_reduction_enum_identifier = 456, /* in_reduction_enum_identifier  */
  YYSYMBOL_depend_with_modifier_clause = 457, /* depend_with_modifier_clause  */
  YYSYMBOL_458_46 = 458,                   /* $@46  */
  YYSYMBOL_depend_parameter = 459,         /* depend_parameter  */
  YYSYMBOL_dependence_type = 460,          /* dependence_type  */
  YYSYMBOL_depend_modifier = 461,          /* depend_modifier  */
  YYSYMBOL_462_47 = 462,                   /* $@47  */
  YYSYMBOL_depend_iterators_definition = 463, /* depend_iterators_definition  */
  YYSYMBOL_depend_iterator_specifier = 464, /* depend_iterator_specifier  */
  YYSYMBOL_465_48 = 465,                   /* $@48  */
  YYSYMBOL_466_49 = 466,                   /* $@49  */
  YYSYMBOL_depend_range_specification = 467, /* depend_range_specification  */
  YYSYMBOL_468_50 = 468,                   /* $@50  */
  YYSYMBOL_469_51 = 469,                   /* $@51  */
  YYSYMBOL_depend_range_step = 470,        /* depend_range_step  */
  YYSYMBOL_depend_enum_type = 471,         /* depend_enum_type  */
  YYSYMBOL_depend_depobj_clause = 472,     /* depend_depobj_clause  */
  YYSYMBOL_473_52 = 473,                   /* $@52  */
  YYSYMBOL_dependence_depobj_parameter = 474, /* dependence_depobj_parameter  */
  YYSYMBOL_dependence_depobj_type = 475,   /* dependence_depobj_type  */
  YYSYMBOL_depend_ordered_clause = 476,    /* depend_ordered_clause  */
  YYSYMBOL_477_53 = 477,                   /* $@53  */
  YYSYMBOL_dependence_ordered_parameter = 478, /* dependence_ordered_parameter  */
  YYSYMBOL_dependence_ordered_type = 479,  /* dependence_ordered_type  */
  YYSYMBOL_480_54 = 480,                   /* $@54  */
  YYSYMBOL_priority_clause = 481,          /* priority_clause  */
  YYSYMBOL_482_55 = 482,                   /* $@55  */
  YYSYMBOL_affinity_clause = 483,          /* affinity_clause  */
  YYSYMBOL_affinity_parameter = 484,       /* affinity_parameter  */
  YYSYMBOL_485_56 = 485,                   /* $@56  */
  YYSYMBOL_affinity_modifier = 486,        /* affinity_modifier  */
  YYSYMBOL_487_57 = 487,                   /* $@57  */
  YYSYMBOL_iterators_definition = 488,     /* iterators_definition  */
  YYSYMBOL_iterator_specifier = 489,       /* iterator_specifier  */
  YYSYMBOL_490_58 = 490,                   /* $@58  */
  YYSYMBOL_491_59 = 491,                   /* $@59  */
  YYSYMBOL_range_specification = 492,      /* range_specification  */
  YYSYMBOL_493_60 = 493,                   /* $@60  */
  YYSYMBOL_494_61 = 494,                   /* $@61  */
  YYSYMBOL_range_step = 495,               /* range_step  */
  YYSYMBOL_detach_clause = 496,            /* detach_clause  */
  YYSYMBOL_497_62 = 497,                   /* $@62  */
  YYSYMBOL_grainsize_clause = 498,         /* grainsize_clause  */
  YYSYMBOL_499_63 = 499,                   /* $@63  */
  YYSYMBOL_num_tasks_clause = 500,         /* num_tasks_clause  */
  YYSYMBOL_501_64 = 501,                   /* $@64  */
  YYSYMBOL_nogroup_clause = 502,           /* nogroup_clause  */
  YYSYMBOL_reverse_offload_clause = 503,   /* reverse_offload_clause  */
  YYSYMBOL_unified_address_clause = 504,   /* unified_address_clause  */
  YYSYMBOL_unified_shared_memory_clause = 505, /* unified_shared_memory_clause  */
  YYSYMBOL_atomic_default_mem_order_clause = 506, /* atomic_default_mem_order_clause  */
  YYSYMBOL_atomic_default_mem_order_parameter = 507, /* atomic_default_mem_order_parameter  */
  YYSYMBOL_dynamic_allocators_clause = 508, /* dynamic_allocators_clause  */
  YYSYMBOL_ext_implementation_defined_requirement_clause = 509, /* ext_implementation_defined_requirement_clause  */
  YYSYMBOL_device_clause = 510,            /* device_clause  */
  YYSYMBOL_device_parameter = 511,         /* device_parameter  */
  YYSYMBOL_512_65 = 512,                   /* $@65  */
  YYSYMBOL_device_modifier_parameter = 513, /* device_modifier_parameter  */
  YYSYMBOL_device_without_modifier_clause = 514, /* device_without_modifier_clause  */
  YYSYMBOL_device_without_modifier_parameter = 515, /* device_without_modifier_parameter  */
  YYSYMBOL_516_66 = 516,                   /* $@66  */
  YYSYMBOL_use_device_ptr_clause = 517,    /* use_device_ptr_clause  */
  YYSYMBOL_518_67 = 518,                   /* $@67  */
  YYSYMBOL_use_device_addr_clause = 519,   /* use_device_addr_clause  */
  YYSYMBOL_520_68 = 520,                   /* $@68  */
  YYSYMBOL_is_device_ptr_clause = 521,     /* is_device_ptr_clause  */
  YYSYMBOL_522_69 = 522,                   /* $@69  */
  YYSYMBOL_has_device_addr_clause = 523,   /* has_device_addr_clause  */
  YYSYMBOL_524_70 = 524,                   /* $@70  */
  YYSYMBOL_defaultmap_clause = 525,        /* defaultmap_clause  */
  YYSYMBOL_526_71 = 526,                   /* $@71  */
  YYSYMBOL_defaultmap_parameter = 527,     /* defaultmap_parameter  */
  YYSYMBOL_defaultmap_behavior = 528,      /* defaultmap_behavior  */
  YYSYMBOL_defaultmap_category = 529,      /* defaultmap_category  */
  YYSYMBOL_uses_allocators_clause = 530,   /* uses_allocators_clause  */
  YYSYMBOL_531_72 = 531,                   /* $@72  */
  YYSYMBOL_uses_allocators_parameter = 532, /* uses_allocators_parameter  */
  YYSYMBOL_allocators_list = 533,          /* allocators_list  */
  YYSYMBOL_allocators_list_parameter_enum = 534, /* allocators_list_parameter_enum  */
  YYSYMBOL_allocators_list_parameter_user = 535, /* allocators_list_parameter_user  */
  YYSYMBOL_to_clause = 536,                /* to_clause  */
  YYSYMBOL_to_parameter = 537,             /* to_parameter  */
  YYSYMBOL_538_73 = 538,                   /* $@73  */
  YYSYMBOL_to_mapper = 539,                /* to_mapper  */
  YYSYMBOL_540_74 = 540,                   /* $@74  */
  YYSYMBOL_from_clause = 541,              /* from_clause  */
  YYSYMBOL_from_parameter = 542,           /* from_parameter  */
  YYSYMBOL_543_75 = 543,                   /* $@75  */
  YYSYMBOL_from_mapper = 544,              /* from_mapper  */
  YYSYMBOL_545_76 = 545,                   /* $@76  */
  YYSYMBOL_link_clause = 546,              /* link_clause  */
  YYSYMBOL_547_77 = 547,                   /* $@77  */
  YYSYMBOL_device_type_clause = 548,       /* device_type_clause  */
  YYSYMBOL_device_type_parameter = 549,    /* device_type_parameter  */
  YYSYMBOL_map_clause = 550,               /* map_clause  */
  YYSYMBOL_551_78 = 551,                   /* $@78  */
  YYSYMBOL_map_parameter = 552,            /* map_parameter  */
  YYSYMBOL_553_79 = 553,                   /* $@79  */
  YYSYMBOL_map_modifier_type = 554,        /* map_modifier_type  */
  YYSYMBOL_map_modifier_parameter1 = 555,  /* map_modifier_parameter1  */
  YYSYMBOL_map_modifier_parameter2 = 556,  /* map_modifier_parameter2  */
  YYSYMBOL_map_modifier1 = 557,            /* map_modifier1  */
  YYSYMBOL_map_modifier2 = 558,            /* map_modifier2  */
  YYSYMBOL_map_modifier3 = 559,            /* map_modifier3  */
  YYSYMBOL_map_type = 560,                 /* map_type  */
  YYSYMBOL_map_modifier_mapper = 561,      /* map_modifier_mapper  */
  YYSYMBOL_task_reduction_clause = 562,    /* task_reduction_clause  */
  YYSYMBOL_task_reduction_identifier = 563, /* task_reduction_identifier  */
  YYSYMBOL_task_reduction_enum_identifier = 564, /* task_reduction_enum_identifier  */
  YYSYMBOL_ordered_clause_optseq = 565,    /* ordered_clause_optseq  */
  YYSYMBOL_ordered_clause_threads_simd_seq = 566, /* ordered_clause_threads_simd_seq  */
  YYSYMBOL_ordered_clause_depend_seq = 567, /* ordered_clause_depend_seq  */
  YYSYMBOL_ordered_clause_depend = 568,    /* ordered_clause_depend  */
  YYSYMBOL_ordered_clause_threads_simd = 569, /* ordered_clause_threads_simd  */
  YYSYMBOL_threads_clause = 570,           /* threads_clause  */
  YYSYMBOL_simd_ordered_clause = 571,      /* simd_ordered_clause  */
  YYSYMBOL_teams_distribute_directive = 572, /* teams_distribute_directive  */
  YYSYMBOL_573_80 = 573,                   /* $@80  */
  YYSYMBOL_teams_distribute_clause_optseq = 574, /* teams_distribute_clause_optseq  */
  YYSYMBOL_teams_distribute_clause_seq = 575, /* teams_distribute_clause_seq  */
  YYSYMBOL_teams_distribute_clause = 576,  /* teams_distribute_clause  */
  YYSYMBOL_teams_distribute_simd_directive = 577, /* teams_distribute_simd_directive  */
  YYSYMBOL_578_81 = 578,                   /* $@81  */
  YYSYMBOL_teams_distribute_simd_clause_optseq = 579, /* teams_distribute_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_simd_clause_seq = 580, /* teams_distribute_simd_clause_seq  */
  YYSYMBOL_teams_distribute_simd_clause = 581, /* teams_distribute_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_for_directive = 582, /* teams_distribute_parallel_for_directive  */
  YYSYMBOL_583_82 = 583,                   /* $@82  */
  YYSYMBOL_teams_distribute_parallel_for_clause_optseq = 584, /* teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_clause_seq = 585, /* teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_clause = 586, /* teams_distribute_parallel_for_clause  */
  YYSYMBOL_teams_distribute_parallel_do_directive = 587, /* teams_distribute_parallel_do_directive  */
  YYSYMBOL_588_83 = 588,                   /* $@83  */
  YYSYMBOL_teams_distribute_parallel_do_clause_optseq = 589, /* teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_clause_seq = 590, /* teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_clause = 591, /* teams_distribute_parallel_do_clause  */
  YYSYMBOL_teams_distribute_parallel_for_simd_directive = 592, /* teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_593_84 = 593,                   /* $@84  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_optseq = 594, /* teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_seq = 595, /* teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause = 596, /* teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_do_simd_directive = 597, /* teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_598_85 = 598,                   /* $@85  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_optseq = 599, /* teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_seq = 600, /* teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause = 601, /* teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_teams_loop_directive = 602,     /* teams_loop_directive  */
  YYSYMBOL_603_86 = 603,                   /* $@86  */
  YYSYMBOL_teams_loop_clause_optseq = 604, /* teams_loop_clause_optseq  */
  YYSYMBOL_teams_loop_clause_seq = 605,    /* teams_loop_clause_seq  */
  YYSYMBOL_teams_loop_clause = 606,        /* teams_loop_clause  */
  YYSYMBOL_target_parallel_directive = 607, /* target_parallel_directive  */
  YYSYMBOL_608_87 = 608,                   /* $@87  */
  YYSYMBOL_target_parallel_clause_optseq = 609, /* target_parallel_clause_optseq  */
  YYSYMBOL_target_parallel_clause_seq = 610, /* target_parallel_clause_seq  */
  YYSYMBOL_target_parallel_clause = 611,   /* target_parallel_clause  */
  YYSYMBOL_target_parallel_for_directive = 612, /* target_parallel_for_directive  */
  YYSYMBOL_613_88 = 613,                   /* $@88  */
  YYSYMBOL_target_parallel_for_clause_optseq = 614, /* target_parallel_for_clause_optseq  */
  YYSYMBOL_target_parallel_for_clause_seq = 615, /* target_parallel_for_clause_seq  */
  YYSYMBOL_target_parallel_for_clause = 616, /* target_parallel_for_clause  */
  YYSYMBOL_target_parallel_do_directive = 617, /* target_parallel_do_directive  */
  YYSYMBOL_618_89 = 618,                   /* $@89  */
  YYSYMBOL_target_parallel_do_clause_optseq = 619, /* target_parallel_do_clause_optseq  */
  YYSYMBOL_target_parallel_do_clause_seq = 620, /* target_parallel_do_clause_seq  */
  YYSYMBOL_target_parallel_do_clause = 621, /* target_parallel_do_clause  */
  YYSYMBOL_target_parallel_for_simd_directive = 622, /* target_parallel_for_simd_directive  */
  YYSYMBOL_623_90 = 623,                   /* $@90  */
  YYSYMBOL_target_parallel_for_simd_clause_optseq = 624, /* target_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_parallel_for_simd_clause_seq = 625, /* target_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_parallel_for_simd_clause = 626, /* target_parallel_for_simd_clause  */
  YYSYMBOL_target_parallel_do_simd_directive = 627, /* target_parallel_do_simd_directive  */
  YYSYMBOL_628_91 = 628,                   /* $@91  */
  YYSYMBOL_target_parallel_do_simd_clause_optseq = 629, /* target_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_parallel_do_simd_clause_seq = 630, /* target_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_parallel_do_simd_clause = 631, /* target_parallel_do_simd_clause  */
  YYSYMBOL_target_parallel_loop_directive = 632, /* target_parallel_loop_directive  */
  YYSYMBOL_633_92 = 633,                   /* $@92  */
  YYSYMBOL_target_parallel_loop_clause_optseq = 634, /* target_parallel_loop_clause_optseq  */
  YYSYMBOL_target_parallel_loop_clause_seq = 635, /* target_parallel_loop_clause_seq  */
  YYSYMBOL_target_parallel_loop_clause = 636, /* target_parallel_loop_clause  */
  YYSYMBOL_target_simd_directive = 637,    /* target_simd_directive  */
  YYSYMBOL_638_93 = 638,                   /* $@93  */
  YYSYMBOL_target_simd_clause_optseq = 639, /* target_simd_clause_optseq  */
  YYSYMBOL_target_simd_clause_seq = 640,   /* target_simd_clause_seq  */
  YYSYMBOL_target_simd_clause = 641,       /* target_simd_clause  */
  YYSYMBOL_target_teams_directive = 642,   /* target_teams_directive  */
  YYSYMBOL_643_94 = 643,                   /* $@94  */
  YYSYMBOL_target_teams_clause_optseq = 644, /* target_teams_clause_optseq  */
  YYSYMBOL_target_teams_clause_seq = 645,  /* target_teams_clause_seq  */
  YYSYMBOL_target_teams_clause = 646,      /* target_teams_clause  */
  YYSYMBOL_target_teams_distribute_directive = 647, /* target_teams_distribute_directive  */
  YYSYMBOL_648_95 = 648,                   /* $@95  */
  YYSYMBOL_target_teams_distribute_clause_optseq = 649, /* target_teams_distribute_clause_optseq  */
  YYSYMBOL_target_teams_distribute_clause_seq = 650, /* target_teams_distribute_clause_seq  */
  YYSYMBOL_target_teams_distribute_clause = 651, /* target_teams_distribute_clause  */
  YYSYMBOL_target_teams_distribute_simd_directive = 652, /* target_teams_distribute_simd_directive  */
  YYSYMBOL_653_96 = 653,                   /* $@96  */
  YYSYMBOL_target_teams_distribute_simd_clause_optseq = 654, /* target_teams_distribute_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_simd_clause_seq = 655, /* target_teams_distribute_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_simd_clause = 656, /* target_teams_distribute_simd_clause  */
  YYSYMBOL_target_teams_loop_directive = 657, /* target_teams_loop_directive  */
  YYSYMBOL_658_97 = 658,                   /* $@97  */
  YYSYMBOL_target_teams_loop_clause_optseq = 659, /* target_teams_loop_clause_optseq  */
  YYSYMBOL_target_teams_loop_clause_seq = 660, /* target_teams_loop_clause_seq  */
  YYSYMBOL_target_teams_loop_clause = 661, /* target_teams_loop_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_directive = 662, /* target_teams_distribute_parallel_for_directive  */
  YYSYMBOL_663_98 = 663,                   /* $@98  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_optseq = 664, /* target_teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_seq = 665, /* target_teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause = 666, /* target_teams_distribute_parallel_for_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_directive = 667, /* target_teams_distribute_parallel_do_directive  */
  YYSYMBOL_668_99 = 668,                   /* $@99  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_optseq = 669, /* target_teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_seq = 670, /* target_teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause = 671, /* target_teams_distribute_parallel_do_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_directive = 672, /* target_teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_673_100 = 673,                  /* $@100  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_optseq = 674, /* target_teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_seq = 675, /* target_teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause = 676, /* target_teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_directive = 677, /* target_teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_678_101 = 678,                  /* $@101  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_optseq = 679, /* target_teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_seq = 680, /* target_teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause = 681, /* target_teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_for_directive = 682,            /* for_directive  */
  YYSYMBOL_683_102 = 683,                  /* $@102  */
  YYSYMBOL_do_directive = 684,             /* do_directive  */
  YYSYMBOL_685_103 = 685,                  /* $@103  */
  YYSYMBOL_do_paired_directive = 686,      /* do_paired_directive  */
  YYSYMBOL_687_104 = 687,                  /* $@104  */
  YYSYMBOL_simd_directive = 688,           /* simd_directive  */
  YYSYMBOL_689_105 = 689,                  /* $@105  */
  YYSYMBOL_for_simd_directive = 690,       /* for_simd_directive  */
  YYSYMBOL_691_106 = 691,                  /* $@106  */
  YYSYMBOL_do_simd_directive = 692,        /* do_simd_directive  */
  YYSYMBOL_693_107 = 693,                  /* $@107  */
  YYSYMBOL_do_simd_paired_directive = 694, /* do_simd_paired_directive  */
  YYSYMBOL_695_108 = 695,                  /* $@108  */
  YYSYMBOL_parallel_for_simd_directive = 696, /* parallel_for_simd_directive  */
  YYSYMBOL_parallel_do_simd_directive = 697, /* parallel_do_simd_directive  */
  YYSYMBOL_698_109 = 698,                  /* $@109  */
  YYSYMBOL_declare_simd_directive = 699,   /* declare_simd_directive  */
  YYSYMBOL_700_110 = 700,                  /* $@110  */
  YYSYMBOL_declare_simd_fortran_directive = 701, /* declare_simd_fortran_directive  */
  YYSYMBOL_702_111 = 702,                  /* $@111  */
  YYSYMBOL_proc_name = 703,                /* proc_name  */
  YYSYMBOL_distribute_directive = 704,     /* distribute_directive  */
  YYSYMBOL_705_112 = 705,                  /* $@112  */
  YYSYMBOL_distribute_simd_directive = 706, /* distribute_simd_directive  */
  YYSYMBOL_707_113 = 707,                  /* $@113  */
  YYSYMBOL_distribute_parallel_for_directive = 708, /* distribute_parallel_for_directive  */
  YYSYMBOL_709_114 = 709,                  /* $@114  */
  YYSYMBOL_distribute_parallel_do_directive = 710, /* distribute_parallel_do_directive  */
  YYSYMBOL_711_115 = 711,                  /* $@115  */
  YYSYMBOL_distribute_parallel_for_simd_directive = 712, /* distribute_parallel_for_simd_directive  */
  YYSYMBOL_713_116 = 713,                  /* $@116  */
  YYSYMBOL_distribute_parallel_do_simd_directive = 714, /* distribute_parallel_do_simd_directive  */
  YYSYMBOL_715_117 = 715,                  /* $@117  */
  YYSYMBOL_parallel_for_directive = 716,   /* parallel_for_directive  */
  YYSYMBOL_717_118 = 717,                  /* $@118  */
  YYSYMBOL_parallel_do_directive = 718,    /* parallel_do_directive  */
  YYSYMBOL_719_119 = 719,                  /* $@119  */
  YYSYMBOL_parallel_loop_directive = 720,  /* parallel_loop_directive  */
  YYSYMBOL_721_120 = 721,                  /* $@120  */
  YYSYMBOL_parallel_sections_directive = 722, /* parallel_sections_directive  */
  YYSYMBOL_723_121 = 723,                  /* $@121  */
  YYSYMBOL_parallel_workshare_directive = 724, /* parallel_workshare_directive  */
  YYSYMBOL_725_122 = 725,                  /* $@122  */
  YYSYMBOL_parallel_master_directive = 726, /* parallel_master_directive  */
  YYSYMBOL_727_123 = 727,                  /* $@123  */
  YYSYMBOL_master_taskloop_directive = 728, /* master_taskloop_directive  */
  YYSYMBOL_729_124 = 729,                  /* $@124  */
  YYSYMBOL_master_taskloop_simd_directive = 730, /* master_taskloop_simd_directive  */
  YYSYMBOL_731_125 = 731,                  /* $@125  */
  YYSYMBOL_parallel_master_taskloop_directive = 732, /* parallel_master_taskloop_directive  */
  YYSYMBOL_733_126 = 733,                  /* $@126  */
  YYSYMBOL_parallel_master_taskloop_simd_directive = 734, /* parallel_master_taskloop_simd_directive  */
  YYSYMBOL_735_127 = 735,                  /* $@127  */
  YYSYMBOL_loop_directive = 736,           /* loop_directive  */
  YYSYMBOL_737_128 = 737,                  /* $@128  */
  YYSYMBOL_scan_directive = 738,           /* scan_directive  */
  YYSYMBOL_739_129 = 739,                  /* $@129  */
  YYSYMBOL_sections_directive = 740,       /* sections_directive  */
  YYSYMBOL_741_130 = 741,                  /* $@130  */
  YYSYMBOL_sections_paired_directive = 742, /* sections_paired_directive  */
  YYSYMBOL_743_131 = 743,                  /* $@131  */
  YYSYMBOL_section_directive = 744,        /* section_directive  */
  YYSYMBOL_single_directive = 745,         /* single_directive  */
  YYSYMBOL_746_132 = 746,                  /* $@132  */
  YYSYMBOL_single_paired_directive = 747,  /* single_paired_directive  */
  YYSYMBOL_748_133 = 748,                  /* $@133  */
  YYSYMBOL_workshare_directive = 749,      /* workshare_directive  */
  YYSYMBOL_workshare_paired_directive = 750, /* workshare_paired_directive  */
  YYSYMBOL_751_134 = 751,                  /* $@134  */
  YYSYMBOL_cancel_directive = 752,         /* cancel_directive  */
  YYSYMBOL_753_135 = 753,                  /* $@135  */
  YYSYMBOL_cancellation_point_directive = 754, /* cancellation_point_directive  */
  YYSYMBOL_755_136 = 755,                  /* $@136  */
  YYSYMBOL_teams_directive = 756,          /* teams_directive  */
  YYSYMBOL_757_137 = 757,                  /* $@137  */
  YYSYMBOL_allocate_directive = 758,       /* allocate_directive  */
  YYSYMBOL_759_138 = 759,                  /* $@138  */
  YYSYMBOL_allocate_list = 760,            /* allocate_list  */
  YYSYMBOL_directive_variable = 761,       /* directive_variable  */
  YYSYMBOL_directive_varlist = 762,        /* directive_varlist  */
  YYSYMBOL_threadprivate_directive = 763,  /* threadprivate_directive  */
  YYSYMBOL_764_139 = 764,                  /* $@139  */
  YYSYMBOL_threadprivate_variable = 765,   /* threadprivate_variable  */
  YYSYMBOL_threadprivate_list = 766,       /* threadprivate_list  */
  YYSYMBOL_declare_reduction_directive = 767, /* declare_reduction_directive  */
  YYSYMBOL_768_140 = 768,                  /* $@140  */
  YYSYMBOL_reduction_list = 769,           /* reduction_list  */
  YYSYMBOL_reduction_identifiers = 770,    /* reduction_identifiers  */
  YYSYMBOL_typername_variable = 771,       /* typername_variable  */
  YYSYMBOL_typername_list = 772,           /* typername_list  */
  YYSYMBOL_combiner = 773,                 /* combiner  */
  YYSYMBOL_declare_mapper_directive = 774, /* declare_mapper_directive  */
  YYSYMBOL_775_141 = 775,                  /* $@141  */
  YYSYMBOL_mapper_list = 776,              /* mapper_list  */
  YYSYMBOL_mapper_identifier_optseq = 777, /* mapper_identifier_optseq  */
  YYSYMBOL_mapper_identifier = 778,        /* mapper_identifier  */
  YYSYMBOL_type_var = 779,                 /* type_var  */
  YYSYMBOL_parallel_clause_optseq = 780,   /* parallel_clause_optseq  */
  YYSYMBOL_cluster_clause_optseq = 781,    /* cluster_clause_optseq  */
  YYSYMBOL_cluster_data_clause_optseq = 782, /* cluster_data_clause_optseq  */
  YYSYMBOL_cluster_update_clause_optseq = 783, /* cluster_update_clause_optseq  */
  YYSYMBOL_cluster_teams_clause_optseq = 784, /* cluster_teams_clause_optseq  */
  YYSYMBOL_cluster_distribute_clause_optseq = 785, /* cluster_distribute_clause_optseq  */
  YYSYMBOL_cluster_teams_distribute_clause_optseq = 786, /* cluster_teams_distribute_clause_optseq  */
  YYSYMBOL_task_async_clause_optseq = 787, /* task_async_clause_optseq  */
  YYSYMBOL_teams_clause_optseq = 788,      /* teams_clause_optseq  */
  YYSYMBOL_for_clause_optseq = 789,        /* for_clause_optseq  */
  YYSYMBOL_do_clause_optseq = 790,         /* do_clause_optseq  */
  YYSYMBOL_do_paried_clause_optseq = 791,  /* do_paried_clause_optseq  */
  YYSYMBOL_simd_clause_optseq = 792,       /* simd_clause_optseq  */
  YYSYMBOL_for_simd_clause_optseq = 793,   /* for_simd_clause_optseq  */
  YYSYMBOL_do_simd_clause_optseq = 794,    /* do_simd_clause_optseq  */
  YYSYMBOL_do_simd_paried_clause_optseq = 795, /* do_simd_paried_clause_optseq  */
  YYSYMBOL_parallel_for_simd_clause_optseq = 796, /* parallel_for_simd_clause_optseq  */
  YYSYMBOL_declare_simd_clause_optseq = 797, /* declare_simd_clause_optseq  */
  YYSYMBOL_distribute_clause_optseq = 798, /* distribute_clause_optseq  */
  YYSYMBOL_distribute_simd_clause_optseq = 799, /* distribute_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_clause_optseq = 800, /* distribute_parallel_for_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_clause_optseq = 801, /* distribute_parallel_do_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_optseq = 802, /* distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_optseq = 803, /* distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_parallel_for_clause_optseq = 804, /* parallel_for_clause_optseq  */
  YYSYMBOL_parallel_do_clause_optseq = 805, /* parallel_do_clause_optseq  */
  YYSYMBOL_parallel_loop_clause_optseq = 806, /* parallel_loop_clause_optseq  */
  YYSYMBOL_parallel_sections_clause_optseq = 807, /* parallel_sections_clause_optseq  */
  YYSYMBOL_parallel_workshare_clause_optseq = 808, /* parallel_workshare_clause_optseq  */
  YYSYMBOL_parallel_master_clause_optseq = 809, /* parallel_master_clause_optseq  */
  YYSYMBOL_master_taskloop_clause_optseq = 810, /* master_taskloop_clause_optseq  */
  YYSYMBOL_master_taskloop_simd_clause_optseq = 811, /* master_taskloop_simd_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_clause_optseq = 812, /* parallel_master_taskloop_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_optseq = 813, /* parallel_master_taskloop_simd_clause_optseq  */
  YYSYMBOL_loop_clause_optseq = 814,       /* loop_clause_optseq  */
  YYSYMBOL_scan_clause_optseq = 815,       /* scan_clause_optseq  */
  YYSYMBOL_sections_clause_optseq = 816,   /* sections_clause_optseq  */
  YYSYMBOL_sections_paired_clause_optseq = 817, /* sections_paired_clause_optseq  */
  YYSYMBOL_single_clause_optseq = 818,     /* single_clause_optseq  */
  YYSYMBOL_single_paired_clause_optseq = 819, /* single_paired_clause_optseq  */
  YYSYMBOL_workshare_paired_clause_optseq = 820, /* workshare_paired_clause_optseq  */
  YYSYMBOL_cancel_clause_optseq = 821,     /* cancel_clause_optseq  */
  YYSYMBOL_cancellation_point_clause_optseq = 822, /* cancellation_point_clause_optseq  */
  YYSYMBOL_allocate_clause_optseq = 823,   /* allocate_clause_optseq  */
  YYSYMBOL_allocate_clause_seq = 824,      /* allocate_clause_seq  */
  YYSYMBOL_declare_reduction_clause_optseq = 825, /* declare_reduction_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_optseq = 826, /* declare_mapper_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_seq = 827, /* declare_mapper_clause_seq  */
  YYSYMBOL_parallel_clause_seq = 828,      /* parallel_clause_seq  */
  YYSYMBOL_cluster_clause_seq = 829,       /* cluster_clause_seq  */
  YYSYMBOL_cluster_data_clause_seq = 830,  /* cluster_data_clause_seq  */
  YYSYMBOL_cluster_update_clause_seq = 831, /* cluster_update_clause_seq  */
  YYSYMBOL_cluster_teams_clause_seq = 832, /* cluster_teams_clause_seq  */
  YYSYMBOL_cluster_distribute_clause_seq = 833, /* cluster_distribute_clause_seq  */
  YYSYMBOL_cluster_teams_distribute_clause_seq = 834, /* cluster_teams_distribute_clause_seq  */
  YYSYMBOL_task_async_clause_seq = 835,    /* task_async_clause_seq  */
  YYSYMBOL_teams_clause_seq = 836,         /* teams_clause_seq  */
  YYSYMBOL_for_clause_seq = 837,           /* for_clause_seq  */
  YYSYMBOL_do_clause_seq = 838,            /* do_clause_seq  */
  YYSYMBOL_simd_clause_seq = 839,          /* simd_clause_seq  */
  YYSYMBOL_for_simd_clause_seq = 840,      /* for_simd_clause_seq  */
  YYSYMBOL_do_simd_clause_seq = 841,       /* do_simd_clause_seq  */
  YYSYMBOL_parallel_for_simd_clause_seq = 842, /* parallel_for_simd_clause_seq  */
  YYSYMBOL_declare_simd_clause_seq = 843,  /* declare_simd_clause_seq  */
  YYSYMBOL_distribute_clause_seq = 844,    /* distribute_clause_seq  */
  YYSYMBOL_distribute_simd_clause_seq = 845, /* distribute_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_for_clause_seq = 846, /* distribute_parallel_for_clause_seq  */
  YYSYMBOL_distribute_parallel_do_clause_seq = 847, /* distribute_parallel_do_clause_seq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_seq = 848, /* distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_seq = 849, /* distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_parallel_for_clause_seq = 850,  /* parallel_for_clause_seq  */
  YYSYMBOL_parallel_do_clause_seq = 851,   /* parallel_do_clause_seq  */
  YYSYMBOL_parallel_loop_clause_seq = 852, /* parallel_loop_clause_seq  */
  YYSYMBOL_parallel_sections_clause_seq = 853, /* parallel_sections_clause_seq  */
  YYSYMBOL_parallel_workshare_clause_seq = 854, /* parallel_workshare_clause_seq  */
  YYSYMBOL_parallel_master_clause_seq = 855, /* parallel_master_clause_seq  */
  YYSYMBOL_master_taskloop_clause_seq = 856, /* master_taskloop_clause_seq  */
  YYSYMBOL_master_taskloop_simd_clause_seq = 857, /* master_taskloop_simd_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_clause_seq = 858, /* parallel_master_taskloop_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_seq = 859, /* parallel_master_taskloop_simd_clause_seq  */
  YYSYMBOL_loop_clause_seq = 860,          /* loop_clause_seq  */
  YYSYMBOL_scan_clause_seq = 861,          /* scan_clause_seq  */
  YYSYMBOL_sections_clause_seq = 862,      /* sections_clause_seq  */
  YYSYMBOL_single_clause_seq = 863,        /* single_clause_seq  */
  YYSYMBOL_single_paired_clause_seq = 864, /* single_paired_clause_seq  */
  YYSYMBOL_cancel_clause_seq = 865,        /* cancel_clause_seq  */
  YYSYMBOL_cancellation_point_clause_seq = 866, /* cancellation_point_clause_seq  */
  YYSYMBOL_allocate_directive_clause = 867, /* allocate_directive_clause  */
  YYSYMBOL_declare_reduction_clause_seq = 868, /* declare_reduction_clause_seq  */
  YYSYMBOL_declare_mapper_clause = 869,    /* declare_mapper_clause  */
  YYSYMBOL_parallel_clause = 870,          /* parallel_clause  */
  YYSYMBOL_cluster_clause = 871,           /* cluster_clause  */
  YYSYMBOL_872_142 = 872,                  /* $@142  */
  YYSYMBOL_873_143 = 873,                  /* $@143  */
  YYSYMBOL_874_144 = 874,                  /* $@144  */
  YYSYMBOL_875_145 = 875,                  /* $@145  */
  YYSYMBOL_876_146 = 876,                  /* $@146  */
  YYSYMBOL_cluster_data_clause = 877,      /* cluster_data_clause  */
  YYSYMBOL_cluster_update_clause = 878,    /* cluster_update_clause  */
  YYSYMBOL_cluster_teams_clause = 879,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 880, /* cluster_distribute_clause  */
  YYSYMBOL_881_147 = 881,                  /* $@147  */
  YYSYMBOL_882_148 = 882,                  /* $@148  */
  YYSYMBOL_cluster_teams_distribute_clause = 883, /* cluster_teams_distribute_clause  */
  YYSYMBOL_884_149 = 884,                  /* $@149  */
  YYSYMBOL_885_150 = 885,                  /* $@150  */
  YYSYMBOL_task_async_clause = 886,        /* task_async_clause  */
  YYSYMBOL_887_151 = 887,                  /* $@151  */
  YYSYMBOL_dependance_type = 888,          /* dependance_type  */
  YYSYMBOL_teams_clause = 889,             /* teams_clause  */
  YYSYMBOL_for_clause = 890,               /* for_clause  */
  YYSYMBOL_do_clause = 891,                /* do_clause  */
  YYSYMBOL_simd_clause = 892,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 893,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 894,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 895, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 896,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 897,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 898,   /* distribute_simd_clause  */
  YYSYMBOL_899_152 = 899,                  /* $@152  */
  YYSYMBOL_900_153 = 900,                  /* $@153  */
  YYSYMBOL_distribute_parallel_for_clause = 901, /* distribute_parallel_for_clause  */
  YYSYMBOL_902_154 = 902,                  /* $@154  */
  YYSYMBOL_903_155 = 903,                  /* $@155  */
  YYSYMBOL_distribute_parallel_do_clause = 904, /* distribute_parallel_do_clause  */
  YYSYMBOL_905_156 = 905,                  /* $@156  */
  YYSYMBOL_906_157 = 906,                  /* $@157  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 907, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_908_158 = 908,                  /* $@158  */
  YYSYMBOL_909_159 = 909,                  /* $@159  */
  YYSYMBOL_910_160 = 910,                  /* $@160  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 911, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_912_161 = 912,                  /* $@161  */
  YYSYMBOL_913_162 = 913,                  /* $@162  */
  YYSYMBOL_914_163 = 914,                  /* $@163  */
  YYSYMBOL_parallel_for_clause = 915,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 916,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 917,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 918, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 919, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 920,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 921,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 922, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 923, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 924, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 925,              /* loop_clause  */
  YYSYMBOL_scan_clause = 926,              /* scan_clause  */
  YYSYMBOL_sections_clause = 927,          /* sections_clause  */
  YYSYMBOL_single_clause = 928,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 929,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 930,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 931,       /* if_parallel_clause  */
  YYSYMBOL_932_164 = 932,                  /* $@164  */
  YYSYMBOL_if_parallel_parameter = 933,    /* if_parallel_parameter  */
  YYSYMBOL_934_165 = 934,                  /* $@165  */
  YYSYMBOL_if_task_clause = 935,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 936,        /* if_task_parameter  */
  YYSYMBOL_937_166 = 937,                  /* $@166  */
  YYSYMBOL_if_taskloop_clause = 938,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 939,    /* if_taskloop_parameter  */
  YYSYMBOL_940_167 = 940,                  /* $@167  */
  YYSYMBOL_if_target_data_clause = 941,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 942, /* if_target_data_parameter  */
  YYSYMBOL_943_168 = 943,                  /* $@168  */
  YYSYMBOL_if_target_parallel_clause = 944, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 945, /* if_target_parallel_parameter  */
  YYSYMBOL_946_169 = 946,                  /* $@169  */
  YYSYMBOL_947_170 = 947,                  /* $@170  */
  YYSYMBOL_if_target_simd_clause = 948,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 949, /* if_target_simd_parameter  */
  YYSYMBOL_950_171 = 950,                  /* $@171  */
  YYSYMBOL_951_172 = 951,                  /* $@172  */
  YYSYMBOL_if_target_enter_data_clause = 952, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 953, /* if_target_enter_data_parameter  */
  YYSYMBOL_954_173 = 954,                  /* $@173  */
  YYSYMBOL_if_target_exit_data_clause = 955, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 956, /* if_target_exit_data_parameter  */
  YYSYMBOL_957_174 = 957,                  /* $@174  */
  YYSYMBOL_if_target_clause = 958,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 959,      /* if_target_parameter  */
  YYSYMBOL_960_175 = 960,                  /* $@175  */
  YYSYMBOL_if_target_update_clause = 961,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 962, /* if_target_update_parameter  */
  YYSYMBOL_963_176 = 963,                  /* $@176  */
  YYSYMBOL_if_taskloop_simd_clause = 964,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 965, /* if_taskloop_simd_parameter  */
  YYSYMBOL_966_177 = 966,                  /* $@177  */
  YYSYMBOL_967_178 = 967,                  /* $@178  */
  YYSYMBOL_if_simd_clause = 968,           /* if_simd_clause  */
  YYSYMBOL_969_179 = 969,                  /* $@179  */
  YYSYMBOL_if_simd_parameter = 970,        /* if_simd_parameter  */
  YYSYMBOL_971_180 = 971,                  /* $@180  */
  YYSYMBOL_if_parallel_simd_clause = 972,  /* if_parallel_simd_clause  */
  YYSYMBOL_973_181 = 973,                  /* $@181  */
  YYSYMBOL_if_parallel_simd_parameter = 974, /* if_parallel_simd_parameter  */
  YYSYMBOL_if_target_parallel_simd_clause = 975, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 976, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_977_182 = 977,                  /* $@182  */
  YYSYMBOL_978_183 = 978,                  /* $@183  */
  YYSYMBOL_979_184 = 979,                  /* $@184  */
  YYSYMBOL_if_cancel_clause = 980,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 981,      /* if_cancel_parameter  */
  YYSYMBOL_982_185 = 982,                  /* $@185  */
  YYSYMBOL_if_parallel_taskloop_clause = 983, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 984, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_985_186 = 985,                  /* $@186  */
  YYSYMBOL_986_187 = 986,                  /* $@187  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 987, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 988, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_989_188 = 989,                  /* $@188  */
  YYSYMBOL_990_189 = 990,                  /* $@189  */
  YYSYMBOL_991_190 = 991,                  /* $@190  */
  YYSYMBOL_num_threads_clause = 992,       /* num_threads_clause  */
  YYSYMBOL_993_191 = 993,                  /* $@191  */
  YYSYMBOL_num_teams_clause = 994,         /* num_teams_clause  */
  YYSYMBOL_995_192 = 995,                  /* $@192  */
  YYSYMBOL_align_clause = 996,             /* align_clause  */
  YYSYMBOL_997_193 = 997,                  /* $@193  */
  YYSYMBOL_thread_limit_clause = 998,      /* thread_limit_clause  */
  YYSYMBOL_999_194 = 999,                  /* $@194  */
  YYSYMBOL_copyin_clause = 1000,           /* copyin_clause  */
  YYSYMBOL_1001_195 = 1001,                /* $@195  */
  YYSYMBOL_default_clause = 1002,          /* default_clause  */
  YYSYMBOL_1003_196 = 1003,                /* $@196  */
  YYSYMBOL_default_parameter = 1004,       /* default_parameter  */
  YYSYMBOL_default_variant_clause = 1005,  /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 1006, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 1007,        /* proc_bind_clause  */
  YYSYMBOL_1008_197 = 1008,                /* $@197  */
  YYSYMBOL_proc_bind_parameter = 1009,     /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 1010,             /* bind_clause  */
  YYSYMBOL_bind_parameter = 1011,          /* bind_parameter  */
  YYSYMBOL_allocate_clause = 1012,         /* allocate_clause  */
  YYSYMBOL_1013_198 = 1013,                /* $@198  */
  YYSYMBOL_allocate_parameter = 1014,      /* allocate_parameter  */
  YYSYMBOL_1015_199 = 1015,                /* $@199  */
  YYSYMBOL_1016_200 = 1016,                /* $@200  */
  YYSYMBOL_allocator_parameter = 1017,     /* allocator_parameter  */
  YYSYMBOL_private_clause = 1018,          /* private_clause  */
  YYSYMBOL_1019_201 = 1019,                /* $@201  */
  YYSYMBOL_alloc_clause = 1020,            /* alloc_clause  */
  YYSYMBOL_broad_clause = 1021,            /* broad_clause  */
  YYSYMBOL_1022_202 = 1022,                /* $@202  */
  YYSYMBOL_scatter_clause = 1023,          /* scatter_clause  */
  YYSYMBOL_1024_203 = 1024,                /* $@203  */
  YYSYMBOL_halo_clause = 1025,             /* halo_clause  */
  YYSYMBOL_1026_204 = 1026,                /* $@204  */
  YYSYMBOL_gather_clause = 1027,           /* gather_clause  */
  YYSYMBOL_1028_205 = 1028,                /* $@205  */
  YYSYMBOL_allgather_clause = 1029,        /* allgather_clause  */
  YYSYMBOL_1030_206 = 1030,                /* $@206  */
  YYSYMBOL_allreduction_clause = 1031,     /* allreduction_clause  */
  YYSYMBOL_1032_207 = 1032,                /* $@207  */
  YYSYMBOL_firstprivate_clause = 1033,     /* firstprivate_clause  */
  YYSYMBOL_1034_208 = 1034,                /* $@208  */
  YYSYMBOL_copyprivate_clause = 1035,      /* copyprivate_clause  */
  YYSYMBOL_1036_209 = 1036,                /* $@209  */
  YYSYMBOL_fortran_copyprivate_clause = 1037, /* fortran_copyprivate_clause  */
  YYSYMBOL_1038_210 = 1038,                /* $@210  */
  YYSYMBOL_lastprivate_clause = 1039,      /* lastprivate_clause  */
  YYSYMBOL_1040_211 = 1040,                /* $@211  */
  YYSYMBOL_lastprivate_parameter = 1041,   /* lastprivate_parameter  */
  YYSYMBOL_1042_212 = 1042,                /* $@212  */
  YYSYMBOL_1043_213 = 1043,                /* $@213  */
  YYSYMBOL_lastprivate_distribute_clause = 1044, /* lastprivate_distribute_clause  */
  YYSYMBOL_1045_214 = 1045,                /* $@214  */
  YYSYMBOL_lastprivate_modifier = 1046,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1047,           /* linear_clause  */
  YYSYMBOL_1048_215 = 1048,                /* $@215  */
  YYSYMBOL_linear_parameter = 1049,        /* linear_parameter  */
  YYSYMBOL_1050_216 = 1050,                /* $@216  */
  YYSYMBOL_1051_217 = 1051,                /* $@217  */
  YYSYMBOL_linear_modifier = 1052,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1053,          /* aligned_clause  */
  YYSYMBOL_aligned_parameter = 1054,       /* aligned_parameter  */
  YYSYMBOL_1055_218 = 1055,                /* $@218  */
  YYSYMBOL_initializer_clause = 1056,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1057,        /* initializer_expr  */
  YYSYMBOL_expr = 1058,                    /* expr  */
  YYSYMBOL_safelen_clause = 1059,          /* safelen_clause  */
  YYSYMBOL_1060_219 = 1060,                /* $@219  */
  YYSYMBOL_simdlen_clause = 1061,          /* simdlen_clause  */
  YYSYMBOL_1062_220 = 1062,                /* $@220  */
  YYSYMBOL_nontemporal_clause = 1063,      /* nontemporal_clause  */
  YYSYMBOL_1064_221 = 1064,                /* $@221  */
  YYSYMBOL_collapse_clause = 1065,         /* collapse_clause  */
  YYSYMBOL_1066_222 = 1066,                /* $@222  */
  YYSYMBOL_ordered_clause = 1067,          /* ordered_clause  */
  YYSYMBOL_1068_223 = 1068,                /* $@223  */
  YYSYMBOL_fortran_nowait_clause = 1069,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1070,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1071,            /* order_clause  */
  YYSYMBOL_1072_224 = 1072,                /* $@224  */
  YYSYMBOL_order_parameter = 1073,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1074,          /* uniform_clause  */
  YYSYMBOL_1075_225 = 1075,                /* $@225  */
  YYSYMBOL_inbranch_clause = 1076,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1077,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1078,        /* inclusive_clause  */
  YYSYMBOL_1079_226 = 1079,                /* $@226  */
  YYSYMBOL_exclusive_clause = 1080,        /* exclusive_clause  */
  YYSYMBOL_1081_227 = 1081,                /* $@227  */
  YYSYMBOL_allocator_clause = 1082,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1083,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1084,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1085, /* dist_schedule_parameter  */
  YYSYMBOL_1086_228 = 1086,                /* $@228  */
  YYSYMBOL_schedule_clause = 1087,         /* schedule_clause  */
  YYSYMBOL_1088_229 = 1088,                /* $@229  */
  YYSYMBOL_schedule_parameter = 1089,      /* schedule_parameter  */
  YYSYMBOL_1090_230 = 1090,                /* $@230  */
  YYSYMBOL_schedule_kind = 1091,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1092,       /* schedule_modifier  */
  YYSYMBOL_1093_231 = 1093,                /* $@231  */
  YYSYMBOL_schedule_modifier2 = 1094,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1095,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1096,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1097,           /* shared_clause  */
  YYSYMBOL_1098_232 = 1098,                /* $@232  */
  YYSYMBOL_reduction_clause = 1099,        /* reduction_clause  */
  YYSYMBOL_reduction_clause_cluster = 1100, /* reduction_clause_cluster  */
  YYSYMBOL_1101_233 = 1101,                /* $@233  */
  YYSYMBOL_1102_234 = 1102,                /* $@234  */
  YYSYMBOL_allreduction_clause_cluster = 1103, /* allreduction_clause_cluster  */
  YYSYMBOL_1104_235 = 1104,                /* $@235  */
  YYSYMBOL_allreduction_parameter_cluster = 1105, /* allreduction_parameter_cluster  */
  YYSYMBOL_reduction_parameter_cluster = 1106, /* reduction_parameter_cluster  */
  YYSYMBOL_1107_236 = 1107,                /* $@236  */
  YYSYMBOL_allreduction_identifier_cluster = 1108, /* allreduction_identifier_cluster  */
  YYSYMBOL_reduction_identifier_cluster = 1109, /* reduction_identifier_cluster  */
  YYSYMBOL_reduction_parameter = 1110,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1111,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1112,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1113, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1114, /* reduction_default_only_clause  */
  YYSYMBOL_1115_237 = 1115,                /* $@237  */
  YYSYMBOL_reduction_default_only_parameter = 1116, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1117 /* reduction_default_only_modifier  */
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
#define YYFINAL  178
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  861
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2530
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3186

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
       0,   146,   146,   147,   154,   155,   158,   161,   167,   168,
     168,   171,   172,   175,   178,   180,   179,   194,   196,   195,
     211,   210,   224,   227,   228,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   278,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   330,   347,   348,   349,   350,   351,   352,
     353,   354,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   431,   431,   434,   437,   437,   441,   442,   445,
     446,   447,   450,   451,   454,   454,   454,   454,   457,   458,
     461,   462,   463,   466,   466,   466,   469,   470,   471,   472,
     475,   476,   477,   480,   481,   482,   483,   486,   486,   489,
     490,   491,   494,   497,   498,   499,   500,   501,   502,   505,
     508,   511,   512,   513,   514,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   531,   534,   535,
     535,   538,   541,   542,   542,   545,   545,   549,   549,   552,
     553,   556,   557,   558,   561,   564,   564,   569,   569,   572,
     572,   575,   580,   583,   583,   586,   586,   589,   589,   592,
     592,   595,   595,   598,   601,   601,   606,   606,   608,   608,
     610,   610,   612,   614,   614,   616,   616,   618,   618,   620,
     620,   622,   622,   624,   624,   626,   626,   628,   628,   631,
     633,   635,   637,   637,   639,   639,   641,   641,   643,   643,
     645,   645,   647,   648,   649,   650,   652,   654,   657,   658,
     659,   661,   664,   666,   667,   668,   669,   670,   671,   672,
     675,   677,   678,   680,   681,   683,   684,   686,   688,   690,
     691,   693,   694,   696,   697,   699,   701,   702,   703,   706,
     708,   709,   711,   712,   713,   715,   716,   718,   720,   721,
     723,   724,   725,   728,   728,   730,   731,   732,   733,   734,
     735,   736,   737,   740,   741,   744,   745,   746,   747,   748,
     750,   751,   752,   753,   754,   755,   756,   758,   759,   760,
     761,   764,   765,   766,   767,   768,   771,   771,   774,   776,
     778,   780,   783,   785,   787,   789,   791,   794,   795,   797,
     798,   801,   802,   803,   805,   806,   807,   809,   810,   811,
     813,   814,   815,   818,   819,   820,   822,   823,   824,   826,
     827,   828,   830,   831,   832,   834,   835,   836,   838,   839,
     840,   842,   843,   844,   846,   847,   848,   851,   852,   853,
     854,   855,   856,   857,   858,   859,   860,   861,   862,   863,
     864,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   908,   909,   910,   911,   912,   913,   915,   916,   917,
     918,   919,   921,   922,   923,   924,   925,   927,   928,   929,
     930,   931,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   948,   949,   951,   952,
     954,   955,   956,   957,   959,   960,   961,   963,   965,   966,
     968,   968,   970,   972,   974,   976,   977,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   992,   992,   995,
     996,   998,  1000,  1000,  1002,  1003,  1005,  1005,  1006,  1006,
    1008,  1008,  1008,  1010,  1011,  1013,  1014,  1015,  1016,  1017,
    1020,  1020,  1023,  1025,  1026,  1027,  1028,  1030,  1030,  1033,
    1035,  1036,  1036,  1039,  1039,  1042,  1044,  1045,  1045,  1046,
    1049,  1049,  1051,  1052,  1054,  1054,  1055,  1055,  1057,  1057,
    1057,  1060,  1061,  1064,  1064,  1066,  1066,  1068,  1068,  1070,
    1072,  1074,  1076,  1078,  1080,  1081,  1082,  1084,  1086,  1088,
    1090,  1091,  1091,  1092,  1095,  1096,  1099,  1101,  1102,  1102,
    1105,  1105,  1108,  1108,  1110,  1110,  1114,  1114,  1117,  1117,
    1119,  1120,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1131,
    1132,  1133,  1134,  1136,  1136,  1137,  1138,  1141,  1142,  1143,
    1144,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1156,
    1158,  1159,  1160,  1160,  1161,  1163,  1163,  1166,  1167,  1168,
    1168,  1169,  1171,  1171,  1173,  1173,  1176,  1178,  1179,  1180,
    1183,  1183,  1185,  1186,  1186,  1187,  1189,  1190,  1191,  1192,
    1193,  1195,  1196,  1197,  1198,  1200,  1201,  1204,  1205,  1206,
    1208,  1209,  1210,  1212,  1213,  1214,  1216,  1217,  1218,  1219,
    1220,  1221,  1223,  1226,  1228,  1229,  1232,  1233,  1234,  1235,
    1236,  1237,  1238,  1239,  1240,  1241,  1243,  1244,  1245,  1247,
    1248,  1249,  1251,  1252,  1253,  1255,  1257,  1258,  1260,  1262,
    1264,  1264,  1266,  1267,  1269,  1270,  1271,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1285,  1285,
    1287,  1288,  1290,  1291,  1292,  1294,  1295,  1296,  1297,  1298,
    1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1313,  1313,  1315,  1316,  1318,  1319,  1320,
    1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,
    1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,
    1343,  1343,  1345,  1346,  1348,  1349,  1350,  1352,  1353,  1354,
    1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1373,  1373,  1375,
    1376,  1378,  1379,  1380,  1382,  1383,  1384,  1385,  1386,  1387,
    1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,
    1398,  1399,  1400,  1401,  1402,  1403,  1404,  1405,  1407,  1407,
    1409,  1410,  1412,  1413,  1414,  1416,  1417,  1418,  1419,  1420,
    1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,
    1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,  1439,  1441,
    1441,  1443,  1444,  1446,  1447,  1448,  1450,  1451,  1452,  1453,
    1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1463,  1463,
    1465,  1466,  1468,  1469,  1470,  1472,  1473,  1474,  1475,  1476,
    1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,
    1487,  1488,  1489,  1492,  1492,  1494,  1495,  1497,  1498,  1499,
    1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,
    1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
    1521,  1522,  1523,  1524,  1525,  1527,  1527,  1529,  1530,  1532,
    1533,  1534,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,
    1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,
    1554,  1555,  1556,  1557,  1558,  1559,  1560,  1562,  1562,  1564,
    1565,  1567,  1568,  1569,  1571,  1572,  1573,  1574,  1575,  1576,
    1577,  1578,  1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,
    1587,  1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,
    1597,  1598,  1600,  1600,  1602,  1603,  1605,  1606,  1607,  1609,
    1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,  1618,  1619,
    1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,  1629,
    1630,  1631,  1632,  1633,  1634,  1635,  1636,  1638,  1638,  1640,
    1641,  1643,  1644,  1645,  1647,  1648,  1649,  1650,  1651,  1652,
    1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  1666,  1667,  1668,  1670,  1670,  1672,  1673,
    1675,  1676,  1677,  1679,  1680,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1698,  1699,  1701,  1701,  1703,  1704,  1706,  1707,
    1708,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1728,  1728,
    1730,  1731,  1733,  1734,  1735,  1737,  1738,  1739,  1740,  1741,
    1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,
    1752,  1753,  1754,  1755,  1756,  1758,  1758,  1760,  1761,  1763,
    1764,  1765,  1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1794,  1794,
    1796,  1797,  1799,  1800,  1801,  1803,  1804,  1805,  1806,  1807,
    1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,
    1818,  1819,  1820,  1821,  1822,  1823,  1825,  1825,  1827,  1828,
    1830,  1831,  1832,  1834,  1835,  1836,  1837,  1838,  1839,  1840,
    1841,  1842,  1843,  1844,  1845,  1846,  1847,  1848,  1849,  1850,
    1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,
    1862,  1862,  1864,  1865,  1867,  1868,  1869,  1871,  1872,  1873,
    1874,  1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,  1896,  1897,  1899,  1899,  1901,  1902,  1904,  1905,
    1906,  1908,  1909,  1910,  1911,  1912,  1913,  1914,  1915,  1916,
    1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,
    1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,
    1937,  1938,  1940,  1940,  1942,  1943,  1945,  1946,  1947,  1949,
    1950,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,
    1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,
    1983,  1983,  1985,  1985,  1987,  1987,  1989,  1989,  1991,  1991,
    1993,  1993,  1995,  1995,  1997,  1999,  1999,  2001,  2001,  2003,
    2003,  2005,  2006,  2008,  2008,  2010,  2010,  2012,  2012,  2014,
    2014,  2016,  2016,  2018,  2018,  2020,  2020,  2022,  2022,  2024,
    2024,  2026,  2026,  2028,  2028,  2030,  2030,  2032,  2032,  2036,
    2036,  2040,  2040,  2044,  2044,  2048,  2048,  2050,  2050,  2052,
    2052,  2054,  2054,  2056,  2058,  2058,  2060,  2060,  2062,  2064,
    2064,  2066,  2066,  2073,  2073,  2080,  2080,  2083,  2083,  2085,
    2088,  2090,  2091,  2094,  2094,  2096,  2098,  2099,  2102,  2102,
    2105,  2108,  2109,  2110,  2111,  2112,  2113,  2114,  2115,  2118,
    2120,  2121,  2123,  2126,  2126,  2129,  2132,  2133,  2136,  2137,
    2140,  2143,  2144,  2147,  2148,  2151,  2155,  2158,  2159,  2162,
    2163,  2166,  2167,  2170,  2171,  2174,  2175,  2178,  2179,  2181,
    2182,  2184,  2185,  2187,  2188,  2190,  2191,  2193,  2194,  2196,
    2197,  2199,  2200,  2202,  2203,  2205,  2206,  2208,  2209,  2211,
    2212,  2214,  2215,  2217,  2218,  2220,  2221,  2223,  2224,  2226,
    2227,  2229,  2230,  2232,  2233,  2235,  2236,  2238,  2239,  2241,
    2242,  2244,  2245,  2247,  2248,  2250,  2251,  2253,  2254,  2256,
    2258,  2259,  2261,  2262,  2264,  2265,  2267,  2268,  2270,  2271,
    2273,  2274,  2279,  2280,  2285,  2286,  2288,  2289,  2290,  2295,
    2296,  2298,  2299,  2301,  2302,  2303,  2305,  2306,  2307,  2310,
    2311,  2312,  2315,  2316,  2317,  2320,  2321,  2322,  2325,  2326,
    2327,  2330,  2331,  2332,  2335,  2336,  2337,  2340,  2341,  2342,
    2345,  2346,  2347,  2350,  2351,  2352,  2355,  2356,  2357,  2360,
    2361,  2362,  2365,  2366,  2367,  2369,  2370,  2371,  2373,  2374,
    2375,  2377,  2378,  2379,  2381,  2382,  2383,  2385,  2386,  2387,
    2389,  2390,  2391,  2393,  2394,  2395,  2397,  2398,  2399,  2401,
    2402,  2403,  2405,  2406,  2407,  2409,  2410,  2411,  2413,  2414,
    2415,  2417,  2418,  2419,  2421,  2422,  2423,  2425,  2426,  2427,
    2429,  2430,  2431,  2433,  2434,  2435,  2437,  2438,  2439,  2441,
    2442,  2443,  2445,  2446,  2447,  2449,  2451,  2452,  2453,  2459,
    2460,  2461,  2463,  2464,  2465,  2467,  2468,  2469,  2475,  2479,
    2480,  2482,  2484,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
    2493,  2494,  2495,  2498,  2499,  2500,  2500,  2501,  2501,  2502,
    2502,  2503,  2504,  2504,  2505,  2505,  2508,  2509,  2510,  2511,
    2512,  2513,  2514,  2515,  2517,  2518,  2519,  2520,  2521,  2522,
    2523,  2524,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,
    2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2546,
    2547,  2548,  2549,  2550,  2551,  2552,  2552,  2553,  2553,  2556,
    2557,  2558,  2559,  2560,  2561,  2562,  2563,  2564,  2565,  2566,
    2567,  2568,  2569,  2570,  2571,  2572,  2573,  2574,  2575,  2575,
    2576,  2576,  2579,  2579,  2582,  2584,  2589,  2590,  2591,  2592,
    2593,  2594,  2595,  2596,  2599,  2600,  2601,  2602,  2603,  2604,
    2605,  2606,  2607,  2608,  2609,  2612,  2613,  2614,  2615,  2616,
    2617,  2618,  2619,  2620,  2621,  2624,  2625,  2626,  2627,  2628,
    2629,  2630,  2631,  2632,  2633,  2634,  2637,  2638,  2639,  2640,
    2641,  2642,  2643,  2644,  2645,  2646,  2647,  2648,  2649,  2650,
    2651,  2652,  2654,  2655,  2656,  2657,  2658,  2659,  2660,  2661,
    2662,  2663,  2664,  2665,  2666,  2667,  2668,  2670,  2671,  2672,
    2673,  2674,  2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,
    2683,  2684,  2685,  2686,  2687,  2688,  2689,  2692,  2693,  2694,
    2695,  2696,  2697,  2700,  2701,  2702,  2703,  2704,  2705,  2708,
    2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,  2717,
    2718,  2718,  2719,  2720,  2721,  2724,  2725,  2726,  2727,  2728,
    2729,  2730,  2731,  2732,  2733,  2734,  2735,  2735,  2736,  2737,
    2738,  2738,  2739,  2740,  2741,  2743,  2744,  2745,  2746,  2747,
    2748,  2749,  2750,  2751,  2752,  2753,  2754,  2754,  2755,  2756,
    2757,  2757,  2758,  2759,  2761,  2762,  2763,  2764,  2765,  2766,
    2767,  2768,  2769,  2770,  2771,  2772,  2772,  2773,  2774,  2775,
    2775,  2776,  2777,  2778,  2779,  2780,  2781,  2781,  2782,  2784,
    2785,  2786,  2787,  2788,  2789,  2790,  2791,  2792,  2793,  2794,
    2795,  2795,  2796,  2797,  2798,  2798,  2799,  2800,  2801,  2802,
    2803,  2803,  2804,  2806,  2807,  2808,  2809,  2810,  2811,  2812,
    2813,  2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,
    2824,  2825,  2826,  2827,  2828,  2829,  2830,  2831,  2832,  2833,
    2834,  2835,  2836,  2837,  2838,  2839,  2841,  2842,  2843,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2856,  2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,
    2866,  2868,  2869,  2870,  2871,  2872,  2873,  2874,  2875,  2876,
    2877,  2879,  2880,  2881,  2882,  2883,  2884,  2885,  2886,  2887,
    2888,  2890,  2891,  2892,  2893,  2894,  2895,  2896,  2897,  2898,
    2899,  2900,  2901,  2902,  2903,  2904,  2905,  2906,  2908,  2909,
    2910,  2911,  2912,  2913,  2914,  2915,  2916,  2917,  2918,  2919,
    2920,  2921,  2922,  2923,  2924,  2925,  2926,  2927,  2928,  2929,
    2930,  2932,  2933,  2934,  2935,  2936,  2937,  2938,  2939,  2940,
    2941,  2942,  2943,  2944,  2945,  2946,  2947,  2948,  2949,  2950,
    2951,  2953,  2954,  2955,  2956,  2957,  2958,  2959,  2960,  2961,
    2962,  2963,  2964,  2965,  2966,  2967,  2968,  2969,  2970,  2971,
    2972,  2973,  2974,  2975,  2976,  2977,  2978,  2980,  2981,  2982,
    2983,  2984,  2985,  2987,  2988,  2990,  2991,  2992,  2993,  2994,
    2995,  2997,  2998,  2999,  3000,  3001,  3003,  3004,  3006,  3007,
    3008,  3009,  3010,  3017,  3017,  3020,  3020,  3022,  3024,  3027,
    3027,  3028,  3030,  3033,  3033,  3034,  3036,  3039,  3039,  3040,
    3042,  3045,  3045,  3046,  3046,  3047,  3049,  3052,  3052,  3053,
    3053,  3054,  3056,  3059,  3059,  3060,  3062,  3065,  3065,  3066,
    3068,  3071,  3071,  3072,  3074,  3077,  3077,  3078,  3080,  3083,
    3083,  3084,  3084,  3085,  3087,  3087,  3089,  3089,  3090,  3092,
    3092,  3094,  3095,  3096,  3098,  3100,  3100,  3101,  3101,  3102,
    3102,  3103,  3105,  3107,  3107,  3108,  3110,  3112,  3112,  3113,
    3113,  3114,  3116,  3118,  3118,  3119,  3119,  3120,  3120,  3121,
    3132,  3132,  3134,  3134,  3137,  3137,  3141,  3141,  3143,  3143,
    3146,  3146,  3149,  3150,  3151,  3152,  3155,  3158,  3161,  3161,
    3164,  3165,  3166,  3168,  3170,  3171,  3172,  3175,  3175,  3178,
    3179,  3179,  3180,  3180,  3182,  3183,  3184,  3185,  3186,  3187,
    3188,  3189,  3190,  3193,  3193,  3196,  3198,  3198,  3200,  3200,
    3202,  3202,  3212,  3212,  3214,  3214,  3216,  3216,  3218,  3218,
    3221,  3221,  3223,  3223,  3225,  3225,  3228,  3229,  3229,  3230,
    3230,  3233,  3233,  3235,  3238,  3239,  3239,  3242,  3243,  3243,
    3244,  3244,  3246,  3247,  3248,  3251,  3252,  3256,  3257,  3257,
    3260,  3262,  3264,  3266,  3266,  3269,  3269,  3272,  3272,  3275,
    3275,  3278,  3278,  3279,  3281,  3283,  3285,  3285,  3288,  3291,
    3291,  3294,  3297,  3299,  3299,  3301,  3301,  3303,  3304,  3305,
    3306,  3307,  3308,  3309,  3310,  3311,  3312,  3315,  3317,  3318,
    3318,  3320,  3320,  3323,  3324,  3324,  3328,  3329,  3332,  3332,
    3333,  3336,  3337,  3338,  3340,  3341,  3342,  3345,  3346,  3347,
    3348,  3349,  3351,  3351,  3354,  3357,  3357,  3357,  3360,  3360,
    3363,  3364,  3366,  3367,  3367,  3370,  3371,  3374,  3375,  3378,
    3379,  3382,  3383,  3386,  3387,  3388,  3391,  3392,  3393,  3394,
    3395,  3396,  3397,  3398,  3399,  3400,  3403,  3403,  3407,  3408,
    3411
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
  "\"end of file\"", "error", "\"invalid token\"", "OMP", "FOR", "DO",
  "DECLARE", "DISTRIBUTE", "LOOP", "SCAN", "SECTIONS", "SECTION", "SINGLE",
  "CANCEL", "TASKGROUP", "CANCELLATION", "POINT", "THREAD", "VARIANT",
  "THREADPRIVATE", "METADIRECTIVE", "MAPPER", "IF", "NUM_THREADS",
  "DEFAULT", "COPYIN", "REDUCTION", "PROC_BIND", "ALLOCATE", "SIMD",
  "TASK", "LASTPRIVATE", "WHEN", "MATCH", "LINEAR", "SCHEDULE", "COLLAPSE",
  "NOWAIT", "ORDER", "ORDERED", "STATIC", "DYNAMIC", "GUIDED", "AUTO",
  "RUNTIME", "SAFELEN", "SIMDLEN", "ALIGNED", "ALIGN", "NONTEMPORAL",
  "UNIFORM", "INBRANCH", "NOTINBRANCH", "DIST_SCHEDULE", "BIND",
  "INCLUSIVE", "EXCLUSIVE", "COPYPRIVATE", "ALLOCATOR", "INITIALIZER",
  "OMP_PRIV", "IDENTIFIER_DEFAULT", "WORKSHARE", "PLUS", "MINUS", "STAR",
  "BITAND", "BITOR", "BITXOR", "LOGAND", "LOGOR", "EQV", "NEQV", "MAX",
  "MIN", "DEFAULT_MEM_ALLOC", "LARGE_CAP_MEM_ALLOC", "CONST_MEM_ALLOC",
  "HIGH_BW_MEM_ALLOC", "LOW_LAT_MEM_ALLOC", "CGROUP_MEM_ALLOC",
  "PTEAM_MEM_ALLOC", "THREAD_MEM_ALLOC", "TEAMS", "NUM_TEAMS",
  "THREAD_LIMIT", "END", "USER", "CONSTRUCT", "DEVICE", "IMPLEMENTATION",
  "CONDITION", "SCORE", "VENDOR", "KIND", "HOST", "NOHOST", "ANY", "CPU",
  "GPU", "FPGA", "ISA", "ARCH", "EXTENSION", "AMD", "ARM", "BSC", "CRAY",
  "FUJITSU", "GNU", "IBM", "INTEL", "LLVM", "PGI", "TI", "UNKNOWN",
  "FINAL", "UNTIED", "MERGEABLE", "IN_REDUCTION", "DEPEND", "PRIORITY",
  "AFFINITY", "DETACH", "MODIFIER_ITERATOR", "DEPOBJ", "FINAL_CLAUSE",
  "IN", "INOUT", "MUTEXINOUTSET", "OUT", "TASKLOOP", "GRAINSIZE",
  "NUM_TASKS", "NOGROUP", "TASKYIELD", "REQUIRES", "REVERSE_OFFLOAD",
  "UNIFIED_ADDRESS", "UNIFIED_SHARED_MEMORY", "ATOMIC_DEFAULT_MEM_ORDER",
  "DYNAMIC_ALLOCATORS", "SEQ_CST", "ACQ_REL", "RELAXED", "USE_DEVICE_PTR",
  "USE_DEVICE_ADDR", "TARGET", "DATA", "ENTER", "EXIT", "ANCESTOR",
  "DEVICE_NUM", "IS_DEVICE_PTR", "HAS_DEVICE_ADDR", "DEFAULTMAP",
  "BEHAVIOR_ALLOC", "BEHAVIOR_TO", "BEHAVIOR_FROM", "BEHAVIOR_TOFROM",
  "BEHAVIOR_FIRSTPRIVATE", "BEHAVIOR_NONE", "BEHAVIOR_DEFAULT",
  "CATEGORY_SCALAR", "CATEGORY_AGGREGATE", "CATEGORY_POINTER",
  "CATEGORY_ALLOCATABLE", "UPDATE", "TO", "FROM", "TO_MAPPER",
  "FROM_MAPPER", "USES_ALLOCATORS", "LINK", "DEVICE_TYPE", "MAP",
  "MAP_MODIFIER_ALWAYS", "MAP_MODIFIER_CLOSE", "MAP_MODIFIER_MAPPER",
  "MAP_TYPE_TO", "MAP_TYPE_FROM", "MAP_TYPE_TOFROM", "MAP_TYPE_ALLOC",
  "MAP_TYPE_RELEASE", "MAP_TYPE_DELETE", "EXT_", "BARRIER", "TASKWAIT",
  "FLUSH", "RELEASE", "ACQUIRE", "ATOMIC", "READ", "WRITE", "CAPTURE",
  "HINT", "CRITICAL", "SOURCE", "SINK", "DESTROY", "THREADS", "CLUSTER",
  "ALLOC", "BROAD", "SCATTER", "GATHER", "ALLGATHER", "ALLREDUCTION",
  "CHUNK", "HALO", "TASK_ASYNC", "ICONSTANT", "EXPRESSION",
  "ID_EXPRESSION", "EXPR_STRING", "VAR_STRING", "TASK_REDUCTION",
  "MODIFIER_CONDITIONAL", "MODOFIER_VAL", "MODOFIER_REF", "MODOFIER_UVAL",
  "MODIFIER_INSCAN", "MODIFIER_TASK", "MODIFIER_DEFAULT", "CONCURRENT",
  "PARALLEL", "SHARED", "NONE", "PRIVATE", "FIRSTPRIVATE", "MASTER",
  "CLOSE", "SPREAD", "MODIFIER_MONOTONIC", "MODIFIER_NONMONOTONIC",
  "MODIFIER_SIMD", "'<'", "'>'", "'='", "\"!=\"", "\"<=\"", "\">=\"",
  "'+'", "'-'", "'*'", "'/'", "'%'", "','", "':'", "'('", "')'", "'{'",
  "'}'", "'&'", "'|'", "'^'", "\",\"", "$accept", "expression", "variable",
  "var_list", "var_list_cluster", "var_list_reduction", "$@1",
  "var_list_allreduction", "var_chunk", "var_chunk_list_cluster_aux_aux",
  "$@2", "var_chunk_list_cluster_aux", "$@3", "var_chunk_list_cluster",
  "$@4", "dist_schedule_clause_cluster", "dist_schedule_parameter_cluster",
  "openmp_directive", "$@5", "directiveAuxCluster", "variant_directive",
  "fortran_paired_directive", "end_directive", "$@6", "end_clause_seq",
  "metadirective_directive", "$@7", "metadirective_clause_optseq",
  "metadirective_clause_seq", "metadirective_clause", "when_clause", "$@8",
  "$@9", "$@10", "when_variant_directive",
  "context_selector_specification", "trait_set_selector", "$@11", "$@12",
  "trait_set_selector_name", "trait_selector_list", "trait_selector",
  "condition_selector", "$@13", "device_selector", "context_kind",
  "context_kind_name", "context_isa", "context_arch",
  "implementation_selector", "context_vendor_name", "construct_selector",
  "parallel_selector", "$@14", "parallel_selector_parameter",
  "trait_score", "$@15", "declare_variant_directive", "$@16",
  "variant_func_id", "$@17", "declare_variant_clause_optseq",
  "declare_variant_clause_seq", "declare_variant_clause", "match_clause",
  "$@18", "parallel_directive", "$@19", "cluster_directive", "$@20",
  "declare_cluster_directive", "end_declare_cluster_directive",
  "cluster_data_directive", "$@21", "cluster_update_directive", "$@22",
  "cluster_teams_directive", "$@23", "cluster_distribute_directive",
  "$@24", "cluster_teams_distribute_directive", "$@25",
  "cluster_teams_master_directive", "task_async_directive", "$@26",
  "task_directive", "$@27", "taskloop_directive", "$@28",
  "taskloop_simd_directive", "$@29", "taskyield_directive",
  "requires_directive", "$@30", "target_data_directive", "$@31",
  "target_enter_data_directive", "$@32", "target_exit_data_directive",
  "$@33", "target_directive", "$@34", "target_update_directive", "$@35",
  "declare_target_directive", "$@36", "flush_directive", "$@37",
  "end_declare_target_directive", "master_directive", "barrier_directive",
  "taskwait_directive", "$@38", "taskgroup_directive", "$@39",
  "critical_directive", "$@40", "depobj_directive", "$@41",
  "ordered_directive", "$@42", "critical_clause_optseq",
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
  "$@43", "atomic_clause_optseq", "atomic_clause_seq",
  "memory_order_clause_seq", "memory_order_clause_seq_after",
  "atomic_clause", "memory_order_clause", "hint_clause", "$@44",
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
  "taskwait_clause", "taskgroup_clause", "final_clause", "$@45",
  "untied_clause", "mergeable_clause", "in_reduction_clause",
  "in_reduction_identifier", "in_reduction_enum_identifier",
  "depend_with_modifier_clause", "$@46", "depend_parameter",
  "dependence_type", "depend_modifier", "$@47",
  "depend_iterators_definition", "depend_iterator_specifier", "$@48",
  "$@49", "depend_range_specification", "$@50", "$@51",
  "depend_range_step", "depend_enum_type", "depend_depobj_clause", "$@52",
  "dependence_depobj_parameter", "dependence_depobj_type",
  "depend_ordered_clause", "$@53", "dependence_ordered_parameter",
  "dependence_ordered_type", "$@54", "priority_clause", "$@55",
  "affinity_clause", "affinity_parameter", "$@56", "affinity_modifier",
  "$@57", "iterators_definition", "iterator_specifier", "$@58", "$@59",
  "range_specification", "$@60", "$@61", "range_step", "detach_clause",
  "$@62", "grainsize_clause", "$@63", "num_tasks_clause", "$@64",
  "nogroup_clause", "reverse_offload_clause", "unified_address_clause",
  "unified_shared_memory_clause", "atomic_default_mem_order_clause",
  "atomic_default_mem_order_parameter", "dynamic_allocators_clause",
  "ext_implementation_defined_requirement_clause", "device_clause",
  "device_parameter", "$@65", "device_modifier_parameter",
  "device_without_modifier_clause", "device_without_modifier_parameter",
  "$@66", "use_device_ptr_clause", "$@67", "use_device_addr_clause",
  "$@68", "is_device_ptr_clause", "$@69", "has_device_addr_clause", "$@70",
  "defaultmap_clause", "$@71", "defaultmap_parameter",
  "defaultmap_behavior", "defaultmap_category", "uses_allocators_clause",
  "$@72", "uses_allocators_parameter", "allocators_list",
  "allocators_list_parameter_enum", "allocators_list_parameter_user",
  "to_clause", "to_parameter", "$@73", "to_mapper", "$@74", "from_clause",
  "from_parameter", "$@75", "from_mapper", "$@76", "link_clause", "$@77",
  "device_type_clause", "device_type_parameter", "map_clause", "$@78",
  "map_parameter", "$@79", "map_modifier_type", "map_modifier_parameter1",
  "map_modifier_parameter2", "map_modifier1", "map_modifier2",
  "map_modifier3", "map_type", "map_modifier_mapper",
  "task_reduction_clause", "task_reduction_identifier",
  "task_reduction_enum_identifier", "ordered_clause_optseq",
  "ordered_clause_threads_simd_seq", "ordered_clause_depend_seq",
  "ordered_clause_depend", "ordered_clause_threads_simd", "threads_clause",
  "simd_ordered_clause", "teams_distribute_directive", "$@80",
  "teams_distribute_clause_optseq", "teams_distribute_clause_seq",
  "teams_distribute_clause", "teams_distribute_simd_directive", "$@81",
  "teams_distribute_simd_clause_optseq",
  "teams_distribute_simd_clause_seq", "teams_distribute_simd_clause",
  "teams_distribute_parallel_for_directive", "$@82",
  "teams_distribute_parallel_for_clause_optseq",
  "teams_distribute_parallel_for_clause_seq",
  "teams_distribute_parallel_for_clause",
  "teams_distribute_parallel_do_directive", "$@83",
  "teams_distribute_parallel_do_clause_optseq",
  "teams_distribute_parallel_do_clause_seq",
  "teams_distribute_parallel_do_clause",
  "teams_distribute_parallel_for_simd_directive", "$@84",
  "teams_distribute_parallel_for_simd_clause_optseq",
  "teams_distribute_parallel_for_simd_clause_seq",
  "teams_distribute_parallel_for_simd_clause",
  "teams_distribute_parallel_do_simd_directive", "$@85",
  "teams_distribute_parallel_do_simd_clause_optseq",
  "teams_distribute_parallel_do_simd_clause_seq",
  "teams_distribute_parallel_do_simd_clause", "teams_loop_directive",
  "$@86", "teams_loop_clause_optseq", "teams_loop_clause_seq",
  "teams_loop_clause", "target_parallel_directive", "$@87",
  "target_parallel_clause_optseq", "target_parallel_clause_seq",
  "target_parallel_clause", "target_parallel_for_directive", "$@88",
  "target_parallel_for_clause_optseq", "target_parallel_for_clause_seq",
  "target_parallel_for_clause", "target_parallel_do_directive", "$@89",
  "target_parallel_do_clause_optseq", "target_parallel_do_clause_seq",
  "target_parallel_do_clause", "target_parallel_for_simd_directive",
  "$@90", "target_parallel_for_simd_clause_optseq",
  "target_parallel_for_simd_clause_seq", "target_parallel_for_simd_clause",
  "target_parallel_do_simd_directive", "$@91",
  "target_parallel_do_simd_clause_optseq",
  "target_parallel_do_simd_clause_seq", "target_parallel_do_simd_clause",
  "target_parallel_loop_directive", "$@92",
  "target_parallel_loop_clause_optseq", "target_parallel_loop_clause_seq",
  "target_parallel_loop_clause", "target_simd_directive", "$@93",
  "target_simd_clause_optseq", "target_simd_clause_seq",
  "target_simd_clause", "target_teams_directive", "$@94",
  "target_teams_clause_optseq", "target_teams_clause_seq",
  "target_teams_clause", "target_teams_distribute_directive", "$@95",
  "target_teams_distribute_clause_optseq",
  "target_teams_distribute_clause_seq", "target_teams_distribute_clause",
  "target_teams_distribute_simd_directive", "$@96",
  "target_teams_distribute_simd_clause_optseq",
  "target_teams_distribute_simd_clause_seq",
  "target_teams_distribute_simd_clause", "target_teams_loop_directive",
  "$@97", "target_teams_loop_clause_optseq",
  "target_teams_loop_clause_seq", "target_teams_loop_clause",
  "target_teams_distribute_parallel_for_directive", "$@98",
  "target_teams_distribute_parallel_for_clause_optseq",
  "target_teams_distribute_parallel_for_clause_seq",
  "target_teams_distribute_parallel_for_clause",
  "target_teams_distribute_parallel_do_directive", "$@99",
  "target_teams_distribute_parallel_do_clause_optseq",
  "target_teams_distribute_parallel_do_clause_seq",
  "target_teams_distribute_parallel_do_clause",
  "target_teams_distribute_parallel_for_simd_directive", "$@100",
  "target_teams_distribute_parallel_for_simd_clause_optseq",
  "target_teams_distribute_parallel_for_simd_clause_seq",
  "target_teams_distribute_parallel_for_simd_clause",
  "target_teams_distribute_parallel_do_simd_directive", "$@101",
  "target_teams_distribute_parallel_do_simd_clause_optseq",
  "target_teams_distribute_parallel_do_simd_clause_seq",
  "target_teams_distribute_parallel_do_simd_clause", "for_directive",
  "$@102", "do_directive", "$@103", "do_paired_directive", "$@104",
  "simd_directive", "$@105", "for_simd_directive", "$@106",
  "do_simd_directive", "$@107", "do_simd_paired_directive", "$@108",
  "parallel_for_simd_directive", "parallel_do_simd_directive", "$@109",
  "declare_simd_directive", "$@110", "declare_simd_fortran_directive",
  "$@111", "proc_name", "distribute_directive", "$@112",
  "distribute_simd_directive", "$@113",
  "distribute_parallel_for_directive", "$@114",
  "distribute_parallel_do_directive", "$@115",
  "distribute_parallel_for_simd_directive", "$@116",
  "distribute_parallel_do_simd_directive", "$@117",
  "parallel_for_directive", "$@118", "parallel_do_directive", "$@119",
  "parallel_loop_directive", "$@120", "parallel_sections_directive",
  "$@121", "parallel_workshare_directive", "$@122",
  "parallel_master_directive", "$@123", "master_taskloop_directive",
  "$@124", "master_taskloop_simd_directive", "$@125",
  "parallel_master_taskloop_directive", "$@126",
  "parallel_master_taskloop_simd_directive", "$@127", "loop_directive",
  "$@128", "scan_directive", "$@129", "sections_directive", "$@130",
  "sections_paired_directive", "$@131", "section_directive",
  "single_directive", "$@132", "single_paired_directive", "$@133",
  "workshare_directive", "workshare_paired_directive", "$@134",
  "cancel_directive", "$@135", "cancellation_point_directive", "$@136",
  "teams_directive", "$@137", "allocate_directive", "$@138",
  "allocate_list", "directive_variable", "directive_varlist",
  "threadprivate_directive", "$@139", "threadprivate_variable",
  "threadprivate_list", "declare_reduction_directive", "$@140",
  "reduction_list", "reduction_identifiers", "typername_variable",
  "typername_list", "combiner", "declare_mapper_directive", "$@141",
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
  "parallel_clause", "cluster_clause", "$@142", "$@143", "$@144", "$@145",
  "$@146", "cluster_data_clause", "cluster_update_clause",
  "cluster_teams_clause", "cluster_distribute_clause", "$@147", "$@148",
  "cluster_teams_distribute_clause", "$@149", "$@150", "task_async_clause",
  "$@151", "dependance_type", "teams_clause", "for_clause", "do_clause",
  "simd_clause", "for_simd_clause", "do_simd_clause",
  "parallel_for_simd_clause", "declare_simd_clause", "distribute_clause",
  "distribute_simd_clause", "$@152", "$@153",
  "distribute_parallel_for_clause", "$@154", "$@155",
  "distribute_parallel_do_clause", "$@156", "$@157",
  "distribute_parallel_for_simd_clause", "$@158", "$@159", "$@160",
  "distribute_parallel_do_simd_clause", "$@161", "$@162", "$@163",
  "parallel_for_clause", "parallel_do_clause", "parallel_loop_clause",
  "parallel_sections_clause", "parallel_workshare_clause",
  "parallel_master_clause", "master_taskloop_clause",
  "master_taskloop_simd_clause", "parallel_master_taskloop_clause",
  "parallel_master_taskloop_simd_clause", "loop_clause", "scan_clause",
  "sections_clause", "single_clause", "single_paired_clause",
  "construct_type_clause", "if_parallel_clause", "$@164",
  "if_parallel_parameter", "$@165", "if_task_clause", "if_task_parameter",
  "$@166", "if_taskloop_clause", "if_taskloop_parameter", "$@167",
  "if_target_data_clause", "if_target_data_parameter", "$@168",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@169",
  "$@170", "if_target_simd_clause", "if_target_simd_parameter", "$@171",
  "$@172", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@173", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@174", "if_target_clause", "if_target_parameter", "$@175",
  "if_target_update_clause", "if_target_update_parameter", "$@176",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@177",
  "$@178", "if_simd_clause", "$@179", "if_simd_parameter", "$@180",
  "if_parallel_simd_clause", "$@181", "if_parallel_simd_parameter",
  "if_target_parallel_simd_clause", "if_target_parallel_simd_parameter",
  "$@182", "$@183", "$@184", "if_cancel_clause", "if_cancel_parameter",
  "$@185", "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter",
  "$@186", "$@187", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@188", "$@189", "$@190",
  "num_threads_clause", "$@191", "num_teams_clause", "$@192",
  "align_clause", "$@193", "thread_limit_clause", "$@194", "copyin_clause",
  "$@195", "default_clause", "$@196", "default_parameter",
  "default_variant_clause", "default_variant_directive",
  "proc_bind_clause", "$@197", "proc_bind_parameter", "bind_clause",
  "bind_parameter", "allocate_clause", "$@198", "allocate_parameter",
  "$@199", "$@200", "allocator_parameter", "private_clause", "$@201",
  "alloc_clause", "broad_clause", "$@202", "scatter_clause", "$@203",
  "halo_clause", "$@204", "gather_clause", "$@205", "allgather_clause",
  "$@206", "allreduction_clause", "$@207", "firstprivate_clause", "$@208",
  "copyprivate_clause", "$@209", "fortran_copyprivate_clause", "$@210",
  "lastprivate_clause", "$@211", "lastprivate_parameter", "$@212", "$@213",
  "lastprivate_distribute_clause", "$@214", "lastprivate_modifier",
  "linear_clause", "$@215", "linear_parameter", "$@216", "$@217",
  "linear_modifier", "aligned_clause", "aligned_parameter", "$@218",
  "initializer_clause", "initializer_expr", "expr", "safelen_clause",
  "$@219", "simdlen_clause", "$@220", "nontemporal_clause", "$@221",
  "collapse_clause", "$@222", "ordered_clause", "$@223",
  "fortran_nowait_clause", "nowait_clause", "order_clause", "$@224",
  "order_parameter", "uniform_clause", "$@225", "inbranch_clause",
  "notinbranch_clause", "inclusive_clause", "$@226", "exclusive_clause",
  "$@227", "allocator_clause", "allocator1_parameter",
  "dist_schedule_clause", "dist_schedule_parameter", "$@228",
  "schedule_clause", "$@229", "schedule_parameter", "$@230",
  "schedule_kind", "schedule_modifier", "$@231", "schedule_modifier2",
  "schedule_enum_modifier", "schedule_enum_kind", "shared_clause", "$@232",
  "reduction_clause", "reduction_clause_cluster", "$@233", "$@234",
  "allreduction_clause_cluster", "$@235", "allreduction_parameter_cluster",
  "reduction_parameter_cluster", "$@236",
  "allreduction_identifier_cluster", "reduction_identifier_cluster",
  "reduction_parameter", "reduction_identifier", "reduction_modifier",
  "reduction_enum_identifier", "reduction_default_only_clause", "$@237",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2714)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2481)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3308,   312,   343,   709,   218, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,   276, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
     439,   383, -2714,   399, -2714, -2714,  1030, -2714, -2714, -2714,
   -2714, -2714,   173,   338,   500,   291, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  2304, -2714,  2550, -2714, -2714, -2714,
     253, -2714, -2714, -2714,   481,   743,  1050,   542,   804,   314,
     569,   132, -2714,   308,   491,   344,   943,  3343,   210,   237,
   -2714,   262,    60,  5212,   353, -2714,  3761,  1910, -2714,   625,
   -2714,   458,   472, -2714,   949,  1799,   520,   263,  1405,   379,
     722,   724, -2714, -2714, -2714,   630,  1396,   728, -2714,   422,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    3480,   393, -2714, -2714,   537, -2714, -2714, -2714, -2714,   539,
   -2714, -2714, -2714,   900, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  3897, -2714,   773, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
     544,   570,   584,  1322,   651,   650,  4602,   865,   884, -2714,
     660, -2714, -2714,   798, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,   681, -2714,   759, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
     231, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
     188, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,   127,   683, -2714,   144, -2714, -2714,
   -2714,   569,   657,   713, -2714, -2714,   135, -2714, -2714, -2714,
     752,   397, -2714, -2714, -2714,   719, -2714, -2714,   554, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,   721, -2714, -2714, -2714, -2714,   729, -2714, -2714,   731,
   -2714, -2714, -2714,  2176, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,   221,   147, -2714, -2714, -2714, -2714,
   -2714,   727,  1986,  1761, -2714, -2714, -2714,  1088, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   955,
     294, -2714, -2714, -2714,   737,   177,   146, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   800,
   -2714,  7407,   774, -2714, -2714, -2714, -2714,  2912, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   782,
   -2714,   805, -2714,  2353, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  6141,   295, -2714,  6673,  1182, -2714, -2714,  1377,  1010,
    1020, -2714,  5144,   836,   843, -2714, -2714, -2714, -2714, -2714,
   -2714,  3326, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   246, -2714,
   -2714, -2714, -2714, -2714,   839, -2714, -2714,   852, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,   842,   -10,  1635, -2714, -2714,
   -2714, -2714, -2714,   912, -2714,  7666,  5116, -2714,  6910,  4334,
    1840,  1396,  1105,  1396, -2714, -2714, -2714, -2714, -2714,  1161,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  5400, -2714,   155, -2714, -2714,  2152,  1039, -2714,
     195, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  3890,   914,
     916,  1344,   918,   944,   946, -2714,   950,   971,  2304, -2714,
   -2714,  1434, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  2550, -2714,
     968,  1143,   121,  1149, -2714, -2714, -2714, -2714,   118, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1016,   986, -2714,   995,
    1038, -2714,   901, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    1115, -2714,  1220,  1216, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  4561, -2714,  5596,  1034,
    1247,   743, -2714,  1040,   163,  1050, -2714,  1048,  1055,   804,
   -2714,  1060,   314, -2714,  1063,  1273, -2714,  1595,   132, -2714,
   -2714, -2714, -2714, -2714, -2714,    64, -2714,  1066,   491, -2714,
   -2714, -2714,   220, -2714,  1070, -2714,   166, -2714, -2714, -2714,
    1087,  1090,  1092,  1138,  1104,   943, -2714,   136,  1109,  1110,
    2796,  1114,  1121,    80,  1126,  1128,  3343, -2714,  1131,   226,
   -2714,  1234, -2714,  6027,  1335,  1353, -2714, -2714,  2056, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  1401, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  1134,  1136,   262, -2714, -2714,
    1349,  1389,  1349,   265,  1349,   299,   933,   579, -2714,  1145,
    1148, -2714,  3146, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,   182,  1152,  1162,
    3761, -2714,   862, -2714,  1910, -2714,  1163, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  1485, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  1057,  8429,  4161, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  2452, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  1167, -2714, -2714, -2714,   154,
   -2714, -2714, -2714, -2714, -2714, -2714,   726,  1191,  1177,  1181,
    1185, -2714,   175, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  6061, -2714,  6061,  8073,  1186, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1906, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,    49,
     745,  1189,  1199,  1200,  1201,  1204,  1799, -2714,   520, -2714,
   -2714,   371, -2714,   839,  1205, -2714, -2714, -2714, -2714, -2714,
    1575, -2714, -2714, -2714, -2714,   938, -2714,  2690, -2714, -2714,
    1160,  1209, -2714,  2927, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,   281, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  7666, -2714,  2406, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  2157, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,   330, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,   508, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    4788, -2714,   854, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  1210,  1212,  1214,  1215,  1396, -2714,
    7407, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    2141, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  1709, -2714, -2714,  6673,  2245,  2245,  1218, -2714, -2714,
   -2714,   275, -2714,  1194,  1283,  1272,  1464,  1208, -2714, -2714,
   -2714, -2714, -2714,   249, -2714,  3480, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  1255, -2714,  1259, -2714,  2646,   511,  1262, -2714, -2714,
   -2714,   -12, -2714,  1866,  1296,  1290,  1296,  1303,  1303, -2714,
    3897, -2714, -2714, -2714, -2714, -2714,   130, -2714, -2714, -2714,
    1274,  1275, -2714,  1278, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  1289,  1280,  1284,  1322, -2714, -2714,  1301,
     260,  1291,   976, -2714, -2714,   528,   632, -2714,  1307,  6387,
   -2714, -2714, -2714,  4664, -2714, -2714,   880, -2714,  1220,  1522,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  6448, -2714, -2714,  1670, -2714,
    1220,  1522, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1303,  1318,  1317, -2714,
    2541, -2714, -2714, -2714,  1319, -2714,  1303,  1303, -2714,  1303,
   -2714,   148, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  1323, -2714, -2714,   657, -2714,  1320,
    1387, -2714,   752, -2714,  1324,  2765,   397, -2714,   198,  1303,
    1303,  1341,    89,  1303, -2714,  1343, -2714,  1339,  1615,  1296,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  1348, -2714,  1552,  1296, -2714,  1345,  1358,  1355,  1296,
    1303, -2714,   993, -2714, -2714, -2714, -2714,  5042, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  4205, -2714,  4205,
    1986, -2714,  1761, -2714,  1296,  1296, -2714,  1349, -2714, -2714,
   -2714, -2714, -2714, -2714,   142, -2714, -2714, -2714, -2714, -2714,
    1605,   302,   322,   145,  7407, -2714,  1365, -2714,  1364,  1296,
    1296, -2714, -2714, -2714, -2714,  1368, -2714,   250,  6141, -2714,
    8135,  1586,  1594,  1382, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  3831, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  3602, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  6673, -2714,   603,  1383,  1384,  1182, -2714,  1386, -2714,
     832, -2714, -2714, -2714, -2714, -2714, -2714,  1388, -2714,   923,
   -2714, -2714, -2714, -2714, -2714, -2714,   613,  1412,   425,  1377,
   -2714,  6358, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    5461, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    6358, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  5644,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  2970, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,   600,  5144, -2714,  1395, -2714,  1404,
   -2714, -2714,  1406,  1409,  1402,  1303,  1303,  2731,  2834,  3839,
   -2714, -2714,   839, -2714,   534,  1296,  1405, -2714,    63,  1668,
   -2714,   574, -2714,   695,   424, -2714,  7666, -2714,  5116, -2714,
   -2714,  6910, -2714,  4334, -2714,  1840, -2714,  1396, -2714,  7038,
    1417, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   247,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  1396, -2714,   124,  1296,  1303,  1042,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    2670, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  5400, -2714, -2714,
   -2714,   837, -2714,  1464,  1208, -2714, -2714, -2714, -2714, -2714,
    6714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  5749,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1482, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1551, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1303,  1418,  1422,
    1238, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1423,  1039,
   -2714, -2714,  1303,  3044, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,   962,  1411,  1407,  1427, -2714,  1452,  1459, -2714,
    1437, -2714,  1461, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  1462, -2714, -2714,  1467,  1473, -2714,  1471, -2714,  1474,
    1480, -2714, -2714,   597,   605, -2714,  1484,  1487,  1143, -2714,
    1563,  1527,  1577,  1528,  1303, -2714,  1322, -2714,  1496,  1497,
    1500,  1303, -2714, -2714, -2714,  1499,  1038, -2714, -2714,  6369,
   -2714, -2714, -2714,  2630, -2714,  1220,  1522,  1216, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  5562, -2714, -2714, -2714,
   -2714, -2714,  2713, -2714,  1220,  1522,  1216, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  7974, -2714, -2714, -2714,   617,  1537,
   -2714, -2714, -2714,  1504,  1516, -2714,   645,   699,   714,  1518,
   -2714,  1519,  1303, -2714, -2714, -2714, -2714, -2714, -2714,   770,
   -2714, -2714, -2714,  1296, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  1524, -2714,  1520, -2714,  1531,   744,   748,
   -2714,  1558, -2714,   778, -2714, -2714, -2714, -2714, -2714, -2714,
    1533,  1534,  1303, -2714, -2714, -2714, -2714, -2714, -2714,  1540,
   -2714,  1543, -2714,  1544,  1547, -2714, -2714,  1303,  1553,   808,
   -2714, -2714,  1555, -2714,  6027, -2714,  7541, -2714, -2714,  3785,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    7541, -2714, -2714,  4644, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1557,  1564, -2714, -2714,
    1567,   265, -2714,  1788, -2714,  1571, -2714, -2714, -2714, -2714,
   -2714,  1565,  1578, -2714,  1573, -2714, -2714, -2714,  1581,  1583,
   -2714,  1580,  1603, -2714,  1584, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  5301, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  6752, -2714,  6752,  1813,
    8429, -2714,  4161, -2714, -2714,  1653, -2714,  1611,  1303,  1303,
   -2714,   622,   726, -2714,   636,  1191, -2714,  1688, -2714,  1620,
    1626,  1624, -2714,  1629,  1628,  1631, -2714,  1636, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  4931, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  6061,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  5074,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  6061, -2714,  8073, -2714,  1638, -2714,  1641,  1640,
   -2714, -2714, -2714, -2714, -2714,  1303,   840,   846, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  1643,  1647, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  1650,  1655,  1673,  1675,
   -2714, -2714,  1678, -2714, -2714, -2714, -2714, -2714, -2714,  1693,
    1685,  1697,  3220, -2714, -2714, -2714, -2714,  1691, -2714,  1752,
   -2714,   696, -2714,   842, -2714,   842, -2714,  1752, -2714,   292,
   -2714, -2714, -2714, -2714, -2714, -2714,  1701, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,   164, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,    40,  4788, -2714, -2714,
   -2714,  1707,  1706,  1710,   847, -2714, -2714, -2714,  1715,  7407,
   -2714, -2714,   817, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  5725, -2714,  1464,  1208, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    6673, -2714,  1708,  1727,  1729,  1731,  2245, -2714,  2245, -2714,
   -2714,   853,  1303,  1303, -2714,  1734,   988, -2714,   873, -2714,
   -2714, -2714, -2714,  1737, -2714, -2714,  1303, -2714,  1303, -2714,
    1738,  1741,  1777, -2714, -2714, -2714,  1303, -2714, -2714, -2714,
    1387, -2714, -2714, -2714,    30, -2714, -2714, -2714,  1743, -2714,
   -2714, -2714, -2714, -2714,  1078,   875, -2714,  1745, -2714, -2714,
    1303,   888, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  5804,
   -2714, -2714, -2714, -2714, -2714,  7259, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  1303,  3044, -2714, -2714, -2714, -2714, -2714,
     892,  1387, -2714, -2714,  1758,  1747, -2714, -2714, -2714, -2714,
   -2714,  1303,  1749, -2714,  1296, -2714, -2714,   907,  1753,  1303,
    1371, -2714,  1787,  1303,  1757, -2714, -2714,  1759, -2714, -2714,
   -2714, -2714,  4046, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  4205, -2714, -2714,
   -2714,  4417, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  4205, -2714, -2714, -2714,
    1303, -2714,  1760,  2264, -2714, -2714, -2714,  1296, -2714, -2714,
   -2714, -2714, -2714,  8135, -2714,  6109, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  3570, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714,  6109, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  4818, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1766,  1756, -2714,
   -2714,  1768, -2714,   908,   927,  1869, -2714,  1769, -2714,  1873,
   -2714,  1785, -2714,  1789, -2714, -2714, -2714,  1793, -2714, -2714,
    1303,   258,  6358, -2714, -2714,  6358, -2714, -2714, -2714, -2714,
   -2714, -2714,  1296,  1303,  1757, -2714, -2714, -2714,  1804, -2714,
    2834,  1829,  1831,  1839, -2714, -2714,  1303, -2714, -2714,  3865,
   -2714,  3792, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    1806, -2714,  1808,  1810,   398,  7038, -2714,  1814, -2714,  1815,
    1817, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  8542,
   -2714, -2714, -2714, -2714,  1303,  1303,  1303,  3890, -2714, -2714,
    1303, -2714,   953,  1816,  1822,  6888, -2714, -2714,  1827, -2714,
    1303,  1303,  1303,  1303,  1757,  1826,   964,  1989,  1099, -2714,
   -2714,   526,  1563, -2714,  1998,  1528,  1865, -2714,  1871,  1303,
    1757, -2714,  1835,  1841, -2714, -2714,   975, -2714,  1296, -2714,
   -2714,  3223,  1842, -2714,  1296,  1757, -2714, -2714, -2714,  1876,
     991, -2714,  1882,   992, -2714,  1757,  1303,  7541, -2714, -2714,
    7541, -2714, -2714,  1006,  1985, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  1847,  1296,  1296, -2714,  1296,  1296, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  4486, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  6752, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  4713, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  6752,
   -2714,  1851, -2714, -2714, -2714, -2714,  1955, -2714,  1956, -2714,
   -2714,  1303,  1892,  1303,  1757,  1859,  1860, -2714,  1862,  1868,
   -2714, -2714,  1296,  1296, -2714,  1757, -2714, -2714, -2714, -2714,
   -2714, -2714,  1879,  1880,  1881,  1303,  1757, -2714, -2714, -2714,
   -2714,  4086, -2714,  1166, -2714, -2714,  1296,  1296, -2714,  1885,
    1888, -2714,  1889,  1894, -2714, -2714, -2714, -2714,  1296, -2714,
   -2714,  1895,  1897,  1898,  1890, -2714, -2714,  1908, -2714, -2714,
    1891, -2714,  1872, -2714,  1303,  1757,  1757,  1757,  1757, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1913,  1902,
   -2714, -2714, -2714,  1914,  1757,  1303,  3461, -2714, -2714,   736,
     316, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  2472, -2714,  1946,  1011, -2714,
   -2714, -2714,  1928,  1787, -2714,  1757, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  1918,  1922, -2714, -2714, -2714, -2714, -2714,
    6109, -2714, -2714,  6109, -2714, -2714,  1959,  1296,  1927,  1939,
    1296,  1757,  1926,  1757, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  1757, -2714, -2714,  1400, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  1296,  1296, -2714,  1082, -2714, -2714,
   -2714,  1303,  1943,  1303,  3461,  1035,  1980, -2714, -2714, -2714,
    1947, -2714, -2714,  2192,  1949,  1952,  1957,  1958,  1960,  1969,
    1971,  1972,  1974,  2149, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  1987,  1876, -2714,  1990,  2013, -2714,
   -2714,  1296, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    1296,  1296,  1296, -2714,  1296,  1296,  1296, -2714, -2714, -2714,
    2021, -2714, -2714,  1046,  1303, -2714,  1053, -2714, -2714, -2714,
   -2714, -2714,  1983, -2714,  2139,  2139,  2139,  2139,  2139,  2139,
    2139, -2714,  2472,  1982, -2714,  2003,  2030, -2714,  2013, -2714,
   -2714, -2714,  1296,  1296, -2714, -2714, -2714, -2714, -2714, -2714,
    1303,  2000, -2714,  2004,  1303, -2714,  1303,  2007,  2039,  4288,
    2027,  2049,  2050,  2051,  2018,  2139, -2714, -2714,  2030, -2714,
   -2714, -2714,  2022, -2714, -2714, -2714,  1303, -2714, -2714, -2714,
    2055, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,  2028, -2714, -2714, -2714, -2714, -2714,
   -2714,  2029, -2714, -2714, -2714, -2714,  2033,  1396, -2714,  2024,
    2063,  2037, -2714,  2041, -2714, -2714, -2714, -2714,  2066, -2714,
   -2714,  2052, -2714, -2714,  2053,  2042,  2057,  2059,  2090, -2714,
   -2714, -2714,  2095, -2714, -2714, -2714
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     112,  1440,  1442,     0,  1463,  1495,  1497,  1499,  1503,  1504,
    1511,   324,     0,  1523,   195,  1517,  1446,   296,   330,  1508,
    1515,   192,   328,   298,   302,   303,   311,   321,   322,   317,
     383,   326,   277,   320,     0,     0,    79,    26,    27,    25,
     110,   111,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    83,    74,    75,    80,    81,    82,    85,
      86,    87,    84,    88,    89,    90,   104,    91,   105,    92,
      93,    94,   106,    95,   107,    96,    97,    98,    99,   100,
     101,   102,   108,   103,   109,    28,    29,    30,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    31,    62,
      76,    77,    78,  1448,  1567,  1450,  1569,   265,  1543,  1528,
    1457,   315,   281,  1465,     0,  1585,  1617,     0,  1620,  1624,
    1630,   429,  1513,     0,   197,     0,  1573,   351,   776,   790,
     949,  1565,     0,     0,     0,   300,   353,     0,  1156,  1184,
     305,     0,     0,   313,   968,   363,   427,   372,   395,   332,
    1475,  1477,  1479,  1481,  1483,  1485,  1551,  1487,     1,   279,
     294,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    1575,     0,  2367,  2404,     0,  2471,  2439,  2445,  2446,  2443,
    2383,  2398,  1441,  1568,  1673,  1873,  1864,  1865,  1866,  1867,
    1870,  1871,  1872,  1874,  1869,  1868,  1577,  1443,  1570,  1676,
    1883,  1875,  1876,  1877,  1878,  1881,  1882,  1884,  1880,  1879,
       0,     0,     0,  1583,     0,   366,  1587,  1467,  1469,  2411,
       0,  1957,  1464,  1586,  1694,  1958,  1953,  1954,  1955,  1956,
    2526,     0,  1496,  1618,  1742,  2227,  2230,  2231,  2228,  2229,
    2232,  2453,  2455,  1498,  1619,  1745,  2233,  2234,  2444,  1500,
    1621,  1746,  2239,  2235,  2236,  2237,  2240,  2238,  2402,  1505,
    1625,  1749,  2244,  2241,  2242,  2243,  2245,  2250,  2251,  2249,
    2252,  2248,  1512,  1631,  1755,     0,   325,   430,   464,   568,
     569,  1632,     0,     0,   204,   196,   198,   199,   202,   203,
       0,  1634,  2304,  2433,  2435,     0,  2437,  1447,  1574,  1679,
    1885,  1891,  1892,  1888,  1889,  1886,  1887,  1890,  1894,  1895,
    1893,     0,  2350,   570,   572,   573,     0,   587,   623,     0,
     643,  2492,   297,   352,   431,   468,   469,   471,   475,   476,
     477,   479,   480,   467,   470,   478,   472,   473,   474,   789,
     617,   788,   785,   331,   777,   778,   782,   779,   786,   787,
     808,     0,   792,   951,  2342,  2346,  1516,  1566,  1670,  1856,
    1857,  1858,  1863,  1859,  1860,  1861,  1862,   319,   282,  1444,
    1463,  1501,  1506,  1509,  1515,   311,   277,   194,   193,   144,
     142,   167,   168,   169,   171,   170,   145,   173,   172,   175,
     174,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   143,   149,   150,
     158,   151,   152,   153,   154,   155,   156,   157,   159,   160,
     161,   162,   163,   164,   148,   147,   165,   166,   146,     0,
     329,   355,     0,   645,   647,   649,   299,   354,   434,   492,
     494,   495,   487,   493,   489,   490,   496,   481,   488,   497,
     483,   484,   485,   491,   482,   486,   650,   651,   652,     0,
     657,     0,   304,   357,   440,   521,   522,   523,   524,   525,
     526,  1158,  1208,  1268,  1186,     0,   307,   309,     0,   993,
    1025,  1127,   970,     0,     0,   674,   676,   678,   693,   730,
     312,   364,   452,   547,   554,   543,   549,   550,   551,   555,
     548,   542,   544,   553,   545,   546,   552,   323,   428,   461,
     567,   423,   424,   425,     0,   318,   374,   378,   380,   381,
     382,   422,   426,   416,   384,   385,   398,   399,   411,   412,
     413,   414,   415,     0,   327,  1581,  1597,  1455,  1599,  1601,
    1603,  1605,  1491,  1607,  2253,  2340,  2348,  2358,   278,  1552,
    1646,  1763,  1764,  1769,  1765,  1771,  1772,  1766,  1767,  1768,
    1770,  1489,  1609,   289,   287,   283,   285,  1553,  1563,  1449,
    1576,  1682,  1896,  1909,  1901,  1902,  1903,  1899,  1900,  1897,
    1898,  1911,  1906,  1907,  1908,  1910,  1905,  1904,     0,     0,
       0,     0,     0,     0,     0,  2441,     0,     0,     0,  1674,
    1451,  1578,  1685,  1912,  1924,  1917,  1918,  1919,  1915,  1916,
    1913,  1914,  1926,  1922,  1923,  1925,  1921,  1920,     0,  1677,
       0,   269,     0,     0,  2449,  2451,  2452,  1458,  1584,  1691,
    1948,  1949,  1947,  1950,  1951,  1952,  1461,     0,   724,     0,
       0,   316,   368,   458,   564,   565,   566,  2495,  1963,  1466,
    1588,  1697,     0,     0,  1965,  1964,  1959,  1960,  1961,  1966,
    1967,  1972,  1962,  1974,  1973,  1471,  1589,  1473,  1591,     0,
       0,     0,  1695,     0,     0,     0,  1743,     0,     0,     0,
    1747,     0,     0,  1750,     0,     0,  1756,     0,     0,   465,
    1514,  1633,  1758,  1525,  1526,     0,  2357,     0,     0,   200,
    1520,  1521,     0,  2344,     0,  1518,  1635,  1636,  1760,  1759,
       0,     0,     0,     0,     0,     0,  1680,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   432,     0,     0,
     780,     0,   783,   810,   833,   860,   807,   791,   793,   794,
     797,   798,   799,   804,   800,   801,   805,   806,   802,   803,
     950,   952,   953,   956,   957,   958,   964,   963,   959,   960,
     967,   965,   966,   961,   962,     0,     0,     0,  1671,  1452,
    1571,     0,  1622,  1626,  1628,   790,  1184,   968,   337,     0,
       0,   301,   356,   437,   509,   511,   512,   504,   510,   506,
     507,   513,   498,   505,   514,   500,   501,   502,   517,   518,
     515,   516,   519,   508,   520,   499,   503,     0,     0,     0,
       0,   435,     0,   658,     0,   441,     0,  1167,  1173,  1164,
    1169,  1170,  1174,  1168,  1157,  1159,  1160,  1163,  1172,  1165,
    1166,  1180,  1177,  1178,  1175,  1176,  1179,  1182,  1171,  1183,
    1181,  1235,     0,  1210,  1270,  1195,  1201,  1192,  1197,  1198,
    1202,  1196,  1185,  1187,  1188,  1191,  1203,  1204,  1205,  1200,
    1193,  1194,  1199,  1206,  1207,     0,   670,   672,   306,   358,
     443,   528,   530,   531,   529,   527,   359,   361,     0,     0,
       0,   314,   365,   455,   556,   557,   562,   561,   558,   559,
     560,   563,  1057,   995,  1092,  1027,  1129,     0,   979,   985,
     976,   981,   982,   986,   980,   969,   971,   972,   975,   987,
     990,   988,   992,   984,   977,   978,   983,   989,   991,     0,
       0,     0,     0,     0,     0,     0,     0,   453,     0,   462,
     377,     0,   375,     0,     0,   420,   418,   419,   421,   386,
     400,   407,   408,   409,   410,     0,   396,     0,   397,   350,
       0,     0,  1454,  1582,  1688,  1927,  1928,  1933,  1929,  1935,
    1936,  1930,  1931,  1937,  1938,  1945,  1943,  1944,  1946,  1940,
    1941,  1942,  1939,  1932,  1934,  1476,  1598,  1712,  2063,  2064,
    2069,  2065,  2071,  2072,  2066,  2067,  2073,  2074,  2076,  2077,
    2078,  2079,  2075,  2068,  2070,  1581,  1478,  1600,  1715,  2080,
    2081,  2086,  2082,  2088,  2089,  2083,  2084,  2090,  2091,  2093,
    2094,  2095,  2092,  2085,  2087,  1480,  1602,  1718,  2096,  2097,
    2102,  2098,  2104,  2108,  2105,  2099,  2100,  2106,  2107,  2109,
    2101,  2103,  1482,  1604,  1721,  2110,  2111,  2116,  2112,  2118,
    2119,  2113,  2114,  2120,  2115,  2117,  1484,  1606,  1724,  2121,
    2122,  2127,  2123,  2129,  2130,  2124,  2125,  2126,  2128,  1493,
    1613,  1486,  1608,  1727,  2131,  2132,  2137,  2133,  2139,  2140,
    2134,  2135,  2136,  2138,     0,     0,     0,     0,     0,  1647,
    1611,  2152,  2154,  2155,  2147,  2153,  2149,  2150,  2156,  1488,
    1610,  1730,  2141,  2148,  2157,  2143,  2144,  2145,  2151,  2142,
    2146,  1559,   291,   293,  1557,     0,     0,     0,  2386,  2390,
     280,  1554,  1649,     0,     0,     0,     0,     0,  1773,  1774,
    1781,  1852,   295,  1564,  1667,     0,  1683,  2522,  2523,  2524,
    2525,  2512,  2513,  2514,  2515,  2516,  2517,  2518,  2519,  2520,
    2521,     0,  2509,     0,  2511,     0,     0,  2417,  2422,  2423,
    2424,     0,  2420,     0,     0,     0,     0,     0,     0,  1675,
       0,  1686,  1678,   267,   275,   266,   270,   271,   274,  1548,
    1549,     0,  1545,     0,  1546,  1537,  1538,  1531,  1532,  1533,
    1534,  1535,  1536,     0,     0,     0,     0,  1692,  1462,     0,
       0,     0,     0,   369,   370,     0,     0,   459,     0,  1968,
    1698,  1969,  1971,  1593,  1994,  1468,  1590,  1700,     0,     0,
    1975,  1976,  1981,  1977,  1983,  1984,  1978,  1979,  1985,  1989,
    1992,  1993,  1988,  1980,  1982,  1595,  2013,  1470,  1592,  1703,
       0,     0,  1995,  1996,  2001,  1997,  2003,  2004,  1998,  1999,
    2005,  2009,  2012,  2008,  2000,  2002,     0,    23,     0,  1696,
       0,  2366,  2364,  2365,     0,  1744,     0,     0,  1748,     0,
    1751,     0,  1757,   772,   773,   774,   775,   765,   766,   767,
     768,   769,   770,   771,     0,   764,   466,     0,  1524,     0,
       0,   201,     0,  1519,     0,     0,     0,  1637,     0,     0,
       0,  2427,     0,     0,  1681,     0,  2261,     0,     0,     0,
     583,   584,   585,   586,   576,   577,   578,   579,   580,   581,
     582,     0,   575,     0,     0,   630,   626,     0,     0,     0,
       0,   433,     0,   781,   784,   825,   809,   811,   812,   826,
     815,   816,   817,   822,   818,   819,   823,   829,   830,   827,
     828,   831,   824,   832,   820,   821,   887,   835,   918,   862,
       0,   795,     0,   954,     0,     0,  1672,  1579,  1445,  1572,
    1502,  1623,  2400,  1507,  1627,  1752,  2246,  2247,  1510,  1629,
       0,  1208,     0,     0,     0,   438,     0,  2265,     0,     0,
       0,   436,   654,   655,   656,     0,   442,     0,     0,  1161,
    1237,  1296,  1330,     0,  1219,  1225,  1216,  1221,  1222,  1226,
    1220,  1209,  1211,  1212,  1215,  1227,  1228,  1229,  1224,  1217,
    1218,  1232,  1233,  1223,  1234,  1230,  1231,  1279,  1285,  1276,
    1281,  1282,  1286,  1280,  1269,  1271,  1272,  1275,  1287,  1288,
    1289,  1292,  1284,  1277,  1278,  1295,  1293,  1283,  1294,  1290,
    1291,     0,  1189,     0,     0,     0,     0,   444,     0,   308,
     360,   446,   535,   533,   534,   532,   536,     0,   310,   362,
     449,   540,   538,   539,   537,   541,     0,     0,     0,     0,
     456,  1059,  1004,  1010,  1001,  1006,  1007,  1011,  1005,   994,
     996,   997,  1000,  1012,  1015,  1013,  1017,  1009,  1002,  1003,
    1018,  1019,  1021,  1022,  1008,  1023,  1024,  1020,  1014,  1016,
    1094,  1036,  1042,  1033,  1038,  1039,  1043,  1037,  1026,  1028,
    1029,  1032,  1044,  1047,  1045,  1049,  1041,  1034,  1035,  1050,
    1051,  1053,  1054,  1040,  1055,  1056,  1052,  1046,  1048,  1138,
    1144,  1135,  1140,  1141,  1145,  1139,  1128,  1130,  1131,  1134,
    1146,  1149,  1147,  1151,  1154,  1143,  1136,  1137,  1152,  1153,
    1142,  1155,  1148,  1150,     0,     0,   973,     0,  2293,     0,
     664,   665,   660,     0,     0,     0,     0,     0,     0,     0,
     454,   463,     0,   373,     0,     0,   400,   393,   405,   406,
     389,     0,   392,     0,   333,  2309,     0,  1689,     0,  1713,
    1456,     0,  1716,     0,  1719,     0,  1722,     0,  1725,  1615,
       0,  2196,  2198,  2199,  2197,  2193,  2194,  2200,  1492,  1614,
    1736,  2181,  2182,  2187,  2183,  2189,  2190,  2184,  2185,  2191,
    2195,  2192,  2186,  2188,     0,  1728,     0,     0,     0,     0,
    1648,  2169,  2171,  2172,  2164,  2170,  2166,  2167,  2173,  1490,
    1612,  1733,  2158,  2165,  2174,  2160,  2161,  2162,  2177,  2178,
    2175,  2176,  2179,  2168,  2180,  2159,  2163,     0,  1731,  1823,
     290,  1560,  1661,     0,     0,  1824,  1819,  1820,  1821,  1822,
    1561,  1806,  1812,  1803,  1808,  1809,  1813,  1807,   288,  1558,
    1658,  1802,  1814,  1815,  1816,  1811,  1804,  1805,  1810,  1817,
    1818,  2388,  2392,  2394,  2396,   284,  1555,  1652,  1786,  1787,
    1788,  1791,  1789,  1790,  1793,  1792,   286,  1556,  1655,  1794,
    1795,  1796,  1799,  1797,  1798,  1801,  1800,     0,     0,     0,
    1775,  1650,  1776,  1778,  1780,  1783,  2498,  1785,     0,     0,
    1668,  1684,     0,     0,  2374,  2375,  2376,  2377,  2378,  2379,
    2380,  2381,  2369,     0,     0,  2406,  2413,     0,     0,  2418,
       0,  2414,     0,  2487,  2488,  2489,  2490,  2491,  2484,  2485,
    2486,     0,  2473,  2474,  2478,  2476,     2,     0,  2448,     0,
       0,     3,     4,     0,     0,  1687,     0,     0,     0,   272,
    1641,     0,  1639,     0,     0,  1693,  1583,   715,   711,     0,
       0,     0,   727,   728,   729,     0,     0,   367,   460,     0,
    1699,  2033,  1472,  1594,  1706,     0,     0,     0,  2014,  2015,
    2020,  2016,  2022,  2023,  2017,  2018,  2024,  2034,  2035,  2038,
    2028,  2031,  2032,  2027,  2019,  2021,  1986,  1701,  1987,  1991,
    2057,  1474,  1596,  1709,     0,     0,     0,  2039,  2040,  2045,
    2041,  2047,  2048,  2042,  2043,  2049,  2058,  2059,  2062,  2053,
    2056,  2052,  2044,  2046,  2006,  1704,  2007,  2011,     0,     0,
      22,  2530,  2528,     0,     0,  2363,     0,     0,     0,     0,
    2325,     0,     0,  1527,  2356,   216,   217,   218,   219,     0,
     210,   213,  1522,     0,  2458,  2459,  2460,  2461,  2462,  2463,
    2464,  2465,  2466,     0,  1638,     0,  2308,     0,     0,     0,
    2428,     0,  2425,     0,  2259,  2258,  2352,  2353,  2355,  2354,
       0,     0,     0,   592,   609,   605,   607,   608,   606,     0,
     589,     0,   591,     0,     0,   627,   625,     0,     0,     0,
     620,   621,     0,   619,     0,   813,   889,   859,   834,   836,
     837,   848,   849,   840,   841,   850,   842,   851,   847,   843,
     844,   852,   853,   855,   856,   857,   858,   854,   845,   846,
     920,   886,   861,   863,   864,   875,   876,   867,   868,   877,
     869,   878,   874,   870,   871,   879,   880,   882,   883,   884,
     885,   881,   872,   873,   796,   955,     0,     0,  1453,  1580,
       0,     0,  1753,     0,   610,     0,   341,   336,   339,   340,
     338,     0,     0,  2303,     0,   439,  2263,  2262,     0,     0,
     653,     0,     0,  2281,     0,  1162,  1246,  1252,  1243,  1248,
    1249,  1253,  1247,  1236,  1238,  1239,  1242,  1254,  1255,  1256,
    1251,  1244,  1245,  1259,  1264,  1265,  1262,  1263,  1266,  1260,
    1250,  1267,  1261,  1257,  1258,  1364,  1298,  1402,  1332,     0,
       0,  1213,     0,  1273,  1190,     0,  2269,     0,     0,     0,
     445,     0,     0,   447,     0,     0,   450,     0,  2297,     0,
     667,     0,   722,   718,     0,     0,   457,     0,  1068,  1074,
    1065,  1070,  1071,  1075,  1069,  1058,  1060,  1061,  1064,  1076,
    1079,  1077,  1081,  1073,  1066,  1067,  1082,  1083,  1090,  1088,
    1089,  1091,  1085,  1086,  1072,  1087,  1084,  1078,  1080,     0,
     998,  1103,  1109,  1100,  1105,  1106,  1110,  1104,  1093,  1095,
    1096,  1099,  1111,  1114,  1112,  1116,  1108,  1101,  1102,  1117,
    1118,  1125,  1123,  1124,  1126,  1120,  1121,  1107,  1122,  1119,
    1113,  1115,     0,  1030,     0,  1132,     0,  2275,     0,     0,
     974,  2291,  2290,   661,   659,     0,     0,     0,   682,   683,
     684,   685,   686,   687,   688,     0,   680,   701,   702,   703,
     704,   705,   706,   707,   708,   709,     0,   695,   697,   699,
     747,   748,     0,   756,   757,   758,   759,   760,   761,   732,
       0,     0,     0,   736,   749,   376,   379,     0,   394,     0,
     401,     0,   402,     0,   391,     0,   390,     0,   334,     0,
    1690,  1714,  1717,  1720,  1723,  1726,     0,  2216,  2218,  2219,
    2217,  2213,  2214,  2220,  1494,  1616,  1739,  2201,  2202,  2207,
    2203,  2209,  2210,  2204,  2205,  2211,  2223,  2224,  2221,  2222,
    2225,  2215,  2212,  2226,  2206,  2208,     0,     0,  1737,  1729,
    2257,     0,     0,     0,     0,  2360,  2361,  2362,     0,     0,
    1734,  1732,  1825,  1662,  1826,  1828,  1847,  1833,  1839,  1830,
    1835,  1836,  1840,  1834,   292,  1562,  1664,     0,     0,  1829,
    1841,  1842,  1843,  1838,  1831,  1832,  1845,  1846,  1837,  1844,
       0,  1659,     0,     0,     0,     0,     0,  1653,     0,  1656,
       6,     0,     0,     0,  1651,     0,     0,  1669,     0,  2510,
    2370,  2368,  2372,     0,  2405,  2409,     0,  2415,     0,  2472,
       0,     0,     0,  2440,  2447,  2442,     0,  2384,  2399,   268,
       0,   273,  1762,  1544,  1642,  1643,  1550,  1547,     0,  1529,
    1640,  1761,  1539,  1540,     0,     0,  1460,     0,   712,   710,
       0,     0,   726,   371,  2508,  2496,  2502,  2503,  2507,  2025,
    1707,  2026,  2030,  2037,  1702,  2050,  1710,  2051,  2055,  2061,
    1705,  2412,    24,     0,     0,  2454,  2456,  2403,  2323,  2322,
       0,     0,   205,   211,     0,     0,  2457,  2306,  2305,  2434,
    2436,     0,     0,  2438,     0,  2351,   571,     0,     0,     0,
       0,   624,     0,     0,   629,   644,  2493,     0,   618,   814,
     913,   888,   890,   891,   902,   903,   894,   895,   904,   896,
     905,   901,   897,   898,   906,   907,   916,   914,   915,   917,
     909,   910,   911,   912,   908,   899,   900,     0,   838,   944,
     919,   921,   922,   933,   934,   925,   926,   935,   927,   936,
     932,   928,   929,   937,   938,   947,   945,   946,   948,   940,
     941,   942,   943,   939,   930,   931,     0,   865,  2343,  2347,
       0,  1754,     0,     0,  2301,  2299,  2298,     0,   646,   648,
    2279,  2277,  2276,     0,  1240,  1366,  1307,  1313,  1304,  1309,
    1310,  1314,  1308,  1297,  1299,  1300,  1303,  1320,  1315,  1316,
    1321,  1317,  1322,  1312,  1305,  1306,  1323,  1324,  1326,  1327,
    1311,  1328,  1329,  1325,  1318,  1319,  1404,  1341,  1347,  1338,
    1343,  1344,  1348,  1342,  1331,  1333,  1334,  1337,  1354,  1349,
    1350,  1355,  1351,  1356,  1346,  1339,  1340,  1357,  1358,  1360,
    1361,  1345,  1362,  1363,  1359,  1352,  1353,  2468,     0,  1214,
    1274,     0,  2266,     0,     0,     0,  2285,     0,   448,     0,
    2289,     0,   451,     0,  2294,   668,   666,     0,   719,   717,
       0,     0,     0,  1062,   999,     0,  1097,  1031,  1133,  2271,
    2273,  2270,     0,     0,   663,   675,   677,   679,     0,   694,
       0,     0,     0,     0,   733,   731,     0,   750,   751,     0,
     740,     0,   737,   752,   417,   403,   404,   388,   387,   335,
       0,  2313,     0,     0,     0,     0,  1740,     0,  2331,     0,
       0,  1738,  2255,  2254,  2341,  2349,  2359,  1735,  1663,  1848,
    1665,  1849,  1851,  1660,     0,     0,     0,     0,  1654,  1657,
       0,  2385,     0,     0,     0,     0,  1854,  1855,     0,  2494,
       0,     0,     0,     0,  2419,     0,     0,     0,     0,  2477,
       5,     0,     0,  1644,     0,     0,     0,  2450,     0,     0,
     714,   725,     0,     0,  1708,  1711,     0,  2529,     0,   763,
     212,   209,     0,  2345,     0,  2429,  2426,  2260,   574,     0,
       0,   590,   636,     0,   632,   628,     0,     0,   892,   839,
       0,   923,   866,     0,     0,   348,   344,   346,   347,   345,
     343,   349,     0,     0,     0,  2264,     0,     0,  1241,  1375,
    1381,  1372,  1377,  1378,  1382,  1376,  1365,  1367,  1368,  1371,
    1388,  1383,  1384,  1389,  1385,  1390,  1380,  1373,  1374,  1391,
    1392,  1400,  1398,  1399,  1401,  1394,  1395,  1379,  1396,  1397,
    1393,  1386,  1387,     0,  1301,  1413,  1419,  1410,  1415,  1416,
    1420,  1414,  1403,  1405,  1406,  1409,  1426,  1421,  1422,  1427,
    1423,  1428,  1418,  1411,  1412,  1429,  1430,  1438,  1436,  1437,
    1439,  1432,  1433,  1417,  1434,  1435,  1431,  1424,  1425,     0,
    1335,     0,  2467,  2267,   671,   673,     0,  2282,     0,  2286,
    2295,     0,     0,     0,   721,     0,     0,  2321,     0,     0,
    1063,  1098,     0,     0,  2292,   662,   689,   690,   691,   692,
     681,   696,     0,     0,     0,     0,   735,   739,   738,   753,
     754,     0,   743,     0,   741,   755,     0,     0,  2310,     0,
       0,  2339,     0,     0,  1741,  2329,  2327,  2326,     0,  1666,
      20,     0,     0,     0,     0,     7,  2387,     0,  2391,  2506,
       0,  2500,     0,  2505,     0,  2371,  2373,  2408,  2410,  2416,
    2421,  2475,  2481,  2482,  2483,  2479,   276,  1645,     0,     0,
    1541,  1542,  1530,     0,   713,     0,     0,  2527,  2324,     0,
    1463,  1515,   277,   208,   123,   206,   124,   122,   125,   126,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   127,   141,     0,  2307,   598,     0,   594,
     588,   634,     0,     0,   631,   622,   893,   924,  2401,   613,
     615,   616,   614,     0,     0,   342,  2302,  2300,  2280,  2278,
       0,  1369,  1302,     0,  1407,  1336,     0,     0,     0,     0,
       0,   669,     0,   720,  2315,  2319,  2317,  2314,  2272,  2274,
     698,   700,   762,   734,   744,   742,     0,   745,  2311,  2312,
    2337,  2335,  2333,  2332,     0,     0,  2256,    14,  2389,  2393,
    2395,     0,     0,     0,     0,     0,     0,  2430,   716,     8,
       9,  2504,  1457,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   258,   214,   220,   223,   225,   229,   230,   231,
     226,   224,   257,   596,     0,     0,   593,     0,     0,   633,
     611,     0,  1370,  1408,  2470,  2268,  2283,  2287,  2296,   723,
       0,     0,     0,   746,     0,     0,     0,  2330,  2328,    15,
       0,    17,    21,     0,     0,    11,     0,  2501,  1853,  2432,
    2431,  2497,     0,   207,   262,   262,   262,   262,   262,   262,
     262,   259,     0,     0,   221,     0,     0,   595,     0,   638,
     637,   612,     0,     0,  2316,  2320,  2318,  2338,  2336,  2334,
       0,     0,  2397,     0,     0,  2499,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   222,   215,     0,   600,
     599,   635,     0,  2284,  2288,    16,     0,    13,    12,    10,
       0,   227,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,     0,   233,   234,   235,   236,   237,
     238,     0,   239,   240,   242,   244,     0,  1551,   597,     0,
       0,     0,   263,     0,   241,   232,   260,   261,     0,   639,
      18,     0,   228,   601,   641,    14,     0,   603,     0,   640,
      19,   264,     0,   602,   642,   604
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2714,  1168, -1448,  6366,   -11, -2714, -2714, -2714, -2714,  -865,
   -2714, -2714, -2714, -2539, -2714,   -79, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  -152, -2714, -2714, -2714,  -164,
   -2714, -2714, -2714, -2714, -2714,   -38, -1850, -2714, -2714, -2714,
   -2714, -2446, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  -433, -2714,  -388, -2714, -2714,
   -2714, -2714, -2714, -1114, -2714, -2714,  -150, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714,  2162, -2714,  2164, -2714,  2167,
   -2714, -2714, -2714, -2714,  2168, -2714, -2714, -2714, -2714, -2714,
    2169, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  2172,
   -2714, -2714, -2714,  2173, -2714,  2174, -2714, -2714, -2714,  2175,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,   515,
   -2714, -2714,  1381,   753, -2714, -2714,  2183, -2714, -2714,  -915,
   -2714,   756, -2714,  -147,  -162, -2714, -2714, -2714, -2714, -2714,
   -2714,  2193,  2197,  2198, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  -206,
    -317,  -725,  -339,  -805, -1371, -1368,  -391,  -819, -2714, -2714,
    -559,  -396,  -139,  -125, -2714,  -117,   -43,  5855, -2714, -2714,
    9044, -2714, -2714,   -54, -2714, -2714, -2714,  -667, -2714, -2714,
    -747, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714,   -32, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,  -570, -2714, -2714,  -711, -2714, -2714, -2714, -2714,
   -2714,  -427, -2714,  -398, -2714,  -354, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, 10757, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, 10942, -2714, -2714, -2714, 11022, -2714,
   -2714, -2714, -2714, 11082, -2714,  -230, -2714, -2714, -2714,  -469,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714,  9546, -2714, -2714, -2714, -2714,  -235,  -464,
   -2714, -2714, -2714, -2158, -1570, -2714, -2714, -2714, -2714, -2714,
   -2714,  -226,  -223, -2714, -2714,  2235, -2714, -2714, -2714,  -671,
    2242, -2714, -2714, -2714, -1279, -2714, -2714, -2714, -2714, -1852,
    2247, -2714, -2714, -2714, -1882, -2714, -2714, -2714, -2714, -2279,
    2248, -2714, -2714, -2714, -2313,  2250, -2714, -2714, -2714,  -653,
    2253, -2714, -2714, -2714,  -868, -2714, -2714, -2714, -2714, -1439,
    2255, -2714, -2714, -2714, -1470, -2714, -2714, -2714, -2714, -1998,
    2256, -2714, -2714, -2714, -2029,  2257, -2714, -2714, -2714, -1488,
    2258, -2714, -2714, -2714,  -763,  2261, -2714, -2714, -2714,  -797,
    2262, -2714, -2714, -2714, -1367,  2263, -2714, -2714, -2714, -1935,
    2266, -2714, -2714, -2714, -1383, -2714, -2714, -2714, -2714, -2364,
    2269, -2714, -2714, -2714, -2398, -2714, -2714, -2714, -2714, -2574,
    2271, -2714, -2714, -2714, -2568,  -303, -2714, -2714, -2714, -2714,
   -2714,  -149, -2714,  -284, -2714, -2714, -2714, -2714, -2714, -2714,
    2272, -2714,  -275, -2714, -2714, -2714, -2714,  -148, -2714,  -146,
   -2714,  -274, -2714,  2282, -2714,  -263, -2714,  2290, -2714, -2714,
   -2714,  2293, -2714,  2302, -2714, -2714, -2714,  2306, -2714,  2310,
   -2714,  2311, -2714,  2312, -2714,  2313, -2714,  2314, -2714,  -145,
   -2714,  -244, -2714,  -232, -2714, -2714, -2714,  -144,  -229, -2714,
   -2714, -2714, -2714, -2714, -2714,  -228, -2714,  -224, -2714,  -143,
   -2714,  -222, -2714, -2714,  1173, -2714, -2714, -2714,  1184, -2714,
   -2714, -2714, -2714, -2714,  -201, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714,   685,  -669, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,  1481,
     689, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
    -648, -2714, -2211,  -473, -1025, -2714, -2714, -2714, -2714, -2714,
   -1593, -1653, -1594, -1560, -2714, -2714, -2150, -2714, -2714, -1029,
   -2714, -2714,  -242,   -69,   -85,  -187,  -499,  -526,  -910,  -555,
    -128,  -495, -2714, -2714, -1146, -2714, -2714, -1183, -2714, -2714,
   -1723, -2714, -2714, -2714, -1754, -2714, -2714, -2714,  -894,  -944,
    -951,  -967,  -945,  -992, -1022, -1571, -1569, -2107,  -123, -2714,
    -134,  -155, -1314,  2196,   364, -2714, -2714, -2714, -2714, -2714,
   -2714,  -566, -2714, -2714, -2714, -2714, -2714,  -870, -2714, -2714,
   -2714, -1384, -2714, -2714, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714,  -423, -2714, -2714, -2714, -2714, -2714, -1043, -2714, -2714,
   -2714,  -172, -2714, -2714, -2714, -1119, -2714, -2714, -1445, -2714,
   -2714, -2714, -2714,  1794, -2714, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, 11710, -2714, 10181, -2714, -2714,
   -2714, 10032, -2714, 12731, -2714,  8688, -2714, -2714, -2714, -2714,
   12955, -2714, -2714,  -356, -2714,  1403, -2714, -2714, -2714, -2714,
   -2714,  -124, -2714, -1092, -1089, -2714, -1086, -2714,  -998, -2714,
   -1078, -2714, -1084, -2714, -1101, -2714,  2930, -2714, -2714, -2714,
   -2714, -2714,  5355, -2714, -2714, -2714, -2714,  -359, -2714, -2714,
     392, -2714, -2714, -2714, -2714, -2714,   626, -2714, -2714, -2714,
   -2714, -2714,  3616, -2714,  6736, -2714,  7060, -2714,  4035, -2714,
    1601, -2714,   -58,  9777,  6429, -2714, -2714, -2714, -2714, -2714,
   -2714, -2714, -2714, -2714, -2714, -2714, -2714,  -459, -2714, -2714,
    6415, -2714, -2714, -2714,  -177, -2714, -2714, -2714, -2714, -2714,
    9259, -2714,  6108,  -468, -2714, -2714, -1617, -2714, -2714, -2714,
   -2714, -2714, -2713,  -151, -1242, -1781, -1799,  -121, -2714, -2714,
   -2714
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1787,  1792,  1793,  2321,  3010,  3072,  3066,  2664,  3061,
    3100,  3062,  3175,  2871,  2997,   241,  1268,    34,    35,   181,
    2913,   397,    36,   153,   398,    37,   144,   305,   306,   307,
     308,   717,  2701,  3014,  2915,  1899,  1900,  2404,  3083,  1901,
    3023,  3024,  3025,  3163,  3026,  3027,  3151,  3028,  3029,  3030,
    3144,  3031,  3032,  3115,  3156,  3108,  3171,    38,   230,   641,
    1796,  1185,  1186,  1187,  1188,  1797,    39,   176,   182,   587,
      40,    41,   183,  1125,   184,  1126,   185,  1124,   186,  1121,
     187,  1690,   188,   189,   588,    42,   147,    43,   156,    44,
     451,    45,    46,   157,    47,   495,    48,   896,    49,   897,
      50,   165,    51,   498,    52,   235,    53,   167,    54,    55,
      56,    57,   166,    58,   141,    59,   169,    60,   154,    61,
     148,   554,   450,   799,  2017,  2018,  2019,  2732,   970,   342,
     456,   801,   482,   888,  1469,  1478,   510,   901,   661,  1214,
    1215,   535,   951,   952,   536,   537,    62,   168,   544,   959,
     545,  1597,   960,  1598,  1599,   954,   961,   962,   963,   964,
     548,   549,   550,   551,   552,   527,   296,   343,   457,   802,
     483,   889,  1470,  1479,   511,   902,   662,   528,   297,   344,
     458,   803,   484,   890,  1471,  1480,   512,   903,   904,   905,
     663,   529,   298,   345,   739,   346,   347,   348,  1331,  1332,
     349,   741,  1939,  1940,  1941,  2418,  2938,  2939,  3085,  3034,
    3120,  3159,  3177,  3183,  1942,  2020,  2492,  2953,  2954,   362,
     748,  1952,  1953,  2427,   350,   742,   351,  1337,  2423,  1338,
    1944,  2713,  2714,  3037,  2942,  3090,  3122,  3174,  3179,   352,
     744,   464,   828,   465,   829,   466,   485,   486,   487,   488,
    1405,   489,   490,   515,  1583,  2603,  1584,   907,  2091,  2821,
     892,  1464,   893,  1465,   516,   941,   517,   942,   518,   943,
    2185,  2186,  2840,   519,   944,  2196,  2197,  2198,  2199,   664,
    1809,  2689,  1810,  2367,   909,  2094,  2823,  2095,  2587,   665,
    1211,   666,  1815,   520,   945,  2210,  2845,  2211,  2620,  2852,
    2212,  2621,  2853,  2213,  2623,   299,  1294,  1295,   363,   364,
     365,   366,   367,   368,   369,    63,   372,   757,   758,   759,
      64,   753,  1346,  1347,  1348,    65,  1367,  1958,  1959,  1960,
      66,  1369,  1982,  1983,  1984,    67,  1956,  2431,  2432,  2433,
      68,  1980,  2460,  2461,  2462,    69,   373,   770,   771,   772,
      70,   502,   925,   926,   927,    71,   913,  1499,  1500,  1501,
      72,   915,  1528,  1529,  1530,    73,  1491,  2105,  2106,  2107,
      74,  1520,  2138,  2139,  2140,    75,   916,  1556,  1557,  1558,
      76,   491,   844,   845,   846,    77,   494,   872,   873,   874,
      78,   863,  1421,  1422,  1423,    79,  1410,  2043,  2044,  2045,
      80,   864,  1444,  1445,  1446,    81,  2066,  2513,  2514,  2515,
      82,  2068,  2544,  2545,  2546,    83,  2505,  2746,  2747,  2748,
      84,  2536,  2782,  2783,  2784,    85,   124,    86,   126,   427,
     790,    87,   146,    88,   190,    89,   216,   429,  1377,    90,
      91,  1015,    92,   233,    93,   234,  1209,    94,   135,    95,
     236,    96,   686,    97,   688,    98,  1223,    99,  1245,   100,
     556,   101,   558,   102,   559,   103,   560,   104,   561,   105,
     563,   106,   582,   107,  1100,   108,  1080,   109,  1619,   110,
     136,   111,   137,   112,   138,   444,   792,   113,   114,   139,
     446,   793,   115,   447,   794,   116,   140,   117,   301,   118,
     151,   119,   145,   311,   721,   722,   120,   143,   714,   715,
     121,   232,  1203,  1204,  2363,  2364,  2902,   122,   231,  1191,
    1192,  1193,  1194,   568,  1130,  1715,  1726,  1698,  1680,  2294,
    1142,   376,   202,   217,  1378,   317,   589,   620,  2008,   972,
     647,   242,   669,  1225,  1247,  1822,  1851,   995,  1016,  1035,
    1052,  1066,  1081,  1109,  1659,  1628,  2244,   252,   263,   269,
    1380,   279,  1383,  1388,   292,   710,   725,   726,  2359,  2353,
    2354,   569,  1131,  1716,  1727,  1699,  1681,  2295,  1143,   377,
     203,   218,   318,   590,   621,   973,   648,   243,   670,  1226,
    1248,  1823,  1852,   996,  1017,  1036,  1053,  1067,  1082,  1110,
    1660,  1629,  2245,   253,   264,   270,   280,  1384,   293,   711,
     727,  2360,  2355,   570,  1132,  1133,  1134,  1135,  1136,  1137,
    1717,  1728,  1700,  1682,  1683,  1684,  2296,  2297,  2298,  1144,
    1748,  2668,   378,   204,   219,   319,   591,   622,   974,   649,
     244,   671,   672,   673,  1227,  1228,  1229,  1249,  1250,  1251,
    1824,  1825,  1826,  1827,  1853,  1854,  1855,  1856,   997,  1018,
    1037,  1054,  1068,  1083,  1111,  1661,  1630,  2246,   254,   265,
     271,   281,  1385,   294,   571,  1094,  2272,  2868,   353,  1317,
    2414,   467,  1398,  2497,   895,  2077,  2967,   928,  2169,  2832,
    2833,   847,  2034,  2737,  2736,  1475,  2577,  3092,  1484,  2581,
    3093,   521,  1579,  2602,   910,  2089,  2970,   812,  2024,  2734,
    2733,   320,   730,  1917,  2704,   975,  2229,  2633,  2108,  2829,
    3050,  3052,  3051,   706,  1891,  2698,  1631,  2640,  2995,  2994,
    2247,  2863,  3056,  3055,  3054,   572,  1095,   379,   785,   728,
    1304,   380,   786,   573,  1096,   574,   738,  1930,   309,  1299,
     575,  1097,  2278,   255,  1274,   576,   609,  1763,  2670,  2671,
    1764,   577,   616,  1138,  1139,  1738,  1720,  2312,  1140,  1739,
    1722,  2313,  1723,  2314,  1724,  2315,   578,   617,  1386,  2010,
     285,   701,   983,   610,  1767,  2333,  2673,   248,   689,  1768,
     650,  2675,  1171,  2336,  1772,  1172,   651,  1312,  2411,  2361,
    2899,  3070,   986,   731,   652,   732,   988,   734,   989,   613,
     990,  1176,   276,   212,   991,   614,  1789,   653,  1205,   654,
     655,   266,   697,   267,   698,   729,  1913,  1434,  2568,  2811,
     992,   612,  1781,  2340,  1782,  1783,  2341,  2895,  1784,  1785,
     579,   745,   580,   684,  1218,  2692,  1747,  2325,  2880,  2375,
    2693,  2881,  2376,  1161,  1162,  1163,  1164,   260,   693,  1883,
    1884
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     206,   399,   221,   400,   428,   431,   547,   432,   443,   445,
     448,   246,   256,   766,   273,   283,  1112,   776,   592,  2214,
    2378,   546,   321,   356,   809,  1735,  2046,   383,  1882,   908,
     386,   459,   470,  1718,  1729,   475,  1719,  1730,  2377,   460,
    1731,   524,  1734,  1502,   623,  1531,  1559,  1742,  1733,  2403,
    1600,  1744,  1602,   810,  2622,  2071,  1743,  1662,  1576,  2163,
    2268,  2130,  2073,  1607,   674,  1875,   594,  2285,  1955,  2165,
    2012,   875,  1799,  1612,  2319,  2141,  1462,  1395,  1307,   206,
    1847,   286,  1409,  1490,  1467,  1614,  1616,  1371,  1678,  2280,
    1645,  1146,   625,  1207,   221,  1181,  1099,   811,  2386,  2083,
    2380,  2487,  1609,  1217,  1828,  2311,  1741,  2458,  2593,  2504,
    2596,  2086,   676,   461,  1750,   692,  2872,  2873,  1373,   246,
     947,  2283,  1618,  2317,   463,   703,  1857,  1721,  1732,   256,
     696,   736,   949,   639,   619,   788,   700,   747,  2636,   752,
     831,   750,   719,  2683,   835,  2650,   273,  2810,  2721,   704,
    2774,   171,   194,  2718,   172,  1106,   283,   668,   709,   303,
     192,  1889,  1122,  1184,   314,   315,  1315,   304,   644,   645,
     646,  2637,   192,  2961,  2021,  1220,   885,   170,   171,   197,
    1271,   172,  1189,   173,  1107,   543,  2236,   565,   332,   566,
     191,   567,   192,  3011,   321,   193,  1577,   898,   194,  1382,
     196,   197,   198,  1043,  1335,   509,   158,   387,   174,   313,
     314,   315,   197,   316,   723,  2964,   192,   312,  1244,   356,
    1265,   191,   286,   192,   724,   268,   193,  1915,  1108,   194,
     195,   196,   197,   198,   199,   174,  1770,   965,  1771,   359,
     313,   314,   315,   504,   316,   278,  1272,   133,   764,   778,
     359,   769,   784,   383,  2638,   359,   386,   191,   543,   192,
     796,   388,   193,  1578,   899,  2639,   370,   360,   268,  1620,
     565,   332,   566,   191,   567,   192,  2022,  2682,   193,  2031,
     333,   334,   335,   196,   197,   338,   332,  2825,   250,  2320,
     192,  3067,   142,   756,  1336,   337,   453,   454,   455,   886,
     887, -1782,   197,   564,   565,   332,   566,   191,   567,   192,
    2219,  1297,   193,  1396,  1298,   194,   195,   196,   197,   198,
     199,  2630,  1382,   133,   861,   160,   804,   815,   370,   509,
     360,   861,   459,   470,   805,  1190,   475,  1921,  2270,  1922,
     460,   123,   192,   657,   900,   133,   374,   375,   295,  2271,
    1316,   268,   564,   565,   332,   566,   191,   567,   192,  2023,
     295,   193,  1890,   333,   334,   335,   337,   849,   338,  1141,
     880,   278,   125,   884,  1206,   809,   175,  1798,   934,   453,
     454,   455,   718,   705,   966,  1123,  3042,   524,  1273,   152,
     341,   708,   200,   201,   751,  3043,  1397,  2032,  2011,   766,
     968,  1466,   797,   175,   810,  2826,   531,  2947,   806,  2962,
     361,  2965,  1916,  1306,   461,   776,   200,   201,   592,   808,
    2635,   361,  1489,   200,   201,   463,   361,  2859,   155,   583,
    1807,   981,  1004,   908,  1025,  1045,  1061,  1075,  2946,  1090,
    1424,  1447,  2014,   134,   702,   723,   149,   150,   811,   623,
     875,  1145,   532,   533,  1516,   724,  1545,  1101,  1115,   200,
     201,  2848,   371,  2854,  2033,  1102,   594,  1302,   749,   177,
    1303,  2897,  2827,   341,  1808,   200,   201,  1127,  1128, -1775,
   -1777, -1779, -1784,  2828,  1129,   237,   238,   699,   341,  2015,
     200,   201,   179,   948,   206,  1406,  1749,   625,   674,  2869,
     178,   180, -1459,  2267,  1431,   584,  2631,   341,  1451,   200,
     201,  2329,   534,  1401,   221,   303,   209,  2632,   224,   791,
     862,  2016,  1740,   304,  1390,  1344,  1343,  2013,  2864,  2860,
     564,   565,   332,   566,   191,   567,   192,  1608,   323,  1103,
    1341,  3013,   200,   201,  1112,  1376,   676,  1280,  1314,  1179,
    1105,  2700,  1591,  1182,  1301,  1590,   341,   302,   200,   201,
    1564,  3125,  1236,  1269,  1258,  1278,  2831,   246,  2738,  1296,
     585,   256,  1275,   287,   288,   273,   312,  3084,   283,   289,
     191,  1349,   597,   290,   500,   193,  1615,   501,   194,   586,
     196,   668,   198,   310,  2830,   209,  2092,   261,   262,   313,
     314,   315,   449,   316,  2722,  2719,   496,  1224,   628,  1246,
     224,   321,  2861,  1895,  1896,  1897,  1898,  1662,  1592,   543,
     497,  1593,   356,  2862,  1718,  1650,  1735,  1719,   553,  1354,
    1502,  2695,   492,   493,   764,  1729,  3116,   769,  1730,  2093,
     337,  1731,   608,  1734,   286,  2035,  1751,   778,  2234,  1733,
     784,  1805,  2269,  1625,  1795,  2281,  2694,  1818,  1914,  1531,
    2046,  2080,  2233,   383,  2074,  2659,   386,  2232,  1745,  2025,
    2096,  2227,  2235,  1656,  1345,  2429,  2598,   804,   815,   756,
    1043,  2652,  1626,  1106,  2351,   805,  2224,  1559,  2226,  2570,
    2594,  2390,  2597,  2985,  2141,  2987,  2230,  2491,  2641,  2004,
    2384,  1701,  1657,  2569,  1828,   459,   470,  2170,  2647,   475,
     323,  2578,  1107,   460,  2231,  2324,  2653,  2582,  1721,  2005,
    2327,   849,  2648,  2658,  1820,  1765,  1627,   127,  1766,  1732,
     128,   754,   755,  1857,   341,   129,   200,   201,   130,  1429,
    1453,   955,  1436,  1460,   795,   150,  1658,  2166,  1468,   880,
    2075,   555,   884,   557,   127,  1845,  1108,   581,  1244,   806,
    2087,   562,  1688,   197,  1617,  3012,   956,   957,   958,  2575,
     808,   192,   324,  2401,   239,  1816,  2896,  1873,  1817,   196,
    1265,  1592,   200,  2579,  2216,   250,   611,   461,   615,  1508,
     193,  1537,  1566,   640,   291,   196,   240,   198,   463,   191,
     657,   192,   934,  1601,   193,   658,   659,   194,   195,   196,
     735,   198,   199,   251,  2167,   504,   598,  2076,   657,   642,
    1603,  2223,   524,   658,   659,  2168,   192,  2088,  3053,   239,
     191,  2403,   192,   643,   196,   193,  2576,  2434,   541,   531,
     542,   268,   629,   818,  2346,   192,   337,  2347,   239,   981,
    2580,   240,  2346,   196,  1468,  2348,   131,  1895,  1896,  1897,
    1898,  2463,   955, -1825,  2346,   192,  2883,  2391,   239,   197,
     240,   713,  1004,   196,  2320,  2663,   564,   565,   332,   566,
     191,   567,   192,   852,  2882,   532,   533,   956,   957,   958,
     240,   981,  2346,  1025,   685,  2395,  1580,  1581,  2680,   660,
     656,   509,   564,   565,   332,   566,   667,   567,   192,   690,
     132,   193,  1045,   687, -1986,   195,   196,   197,   198, -1990,
     998,   504,  1019,  1038,  1055,  1069,   191,  1084,   192,  1061,
     694,   193,   707,   240,   194,   195,   196,   197,   198,   199,
    1391,   493,  2225,  1075,   324,  1477,  2346,   984,  1007,  2396,
    1028,  2062,   337,   499,   500,  1621,  1637,   501,  1090,  1582,
     197,  2346,   716,  1622,  2397,   312,   720,   809,   733,   191,
     737,   200,   201,   592,   193,  1651,  1665,   194,   740,   196,
     743,   198,   597,  1652,   789,  1101,  1115,   200,   313,   314,
     315,  2346,   316,  1102,  2409,  2346,   810,  1686,  2410,  1424,
    1706,   200,   201,  1710,  1402,  1403,  1404,   509,   623,   955,
     209,   766,   504,   628,   798,   695,   776,  2401,  2402,   833,
     908,   594,  1447,   827, -1827,  2346,   200,   201,  2413,   638,
     224,   832,   200,   201,   956,   957,   958,  1623,   875,   912,
     811,  1516,  1679,   337, -1827,   200,   201,   674,  1624,   914,
    1230,  2855,  1252,   950,   691,  2346,   625,  1653,  2426,   158,
    2749,  1411,  1412,  1431,  1221,   200,   201,  1103,  1655,   657,
    1545,  1812,  1813,  1814,   658,   659,   250,   819,  1105,  2082,
     341,   193,   200,   201,  2282,   939,   196,  2346,   198,  1451,
    2605,  2785,   940,  2346,  2346,   676,  2606,  2645,   509,  1834,
    2660,   953,  1236,  2661,   251,   955,   341,  2378,   200,   201,
    1644,  1112,   332,   159,   250,  2666,   192,   853,  2667,  2046,
    2346,  1863,  2346,  2669,  1258,  2687,   969,   323,   200,   201,
     956,   957,   958,   543,  1079,  2346,  1846,   312,  2691,  2346,
     668,   667,  2699,   192,  1821,  1357,   193,  1224,  1216, -1968,
    2141,   196,  2697,   198,  2346,  2346,   618,  2708,  2814,  1141,
     313,   314, -1970,  1165,   316,  1166,  1850,  1173,   240,  1246,
    2085,   200,   374,   375,  2346,  1349,  1184,  2815,   160,   161,
     162,   985,  1183,   564,   565,   332,   566,   191,   567,   192,
    1950,  1951,  2241,  1174,   818,  1175,  2516,   163,  2547,  1177,
    2660,  1564,  1625,  2876,   885,  2378,  2870,  2870,  2870,  2330,
   -2382,  2346,  2875,  1477,  2890,  2284,   598,  1735,  1195,  1196,
    1178,  2242,  2346,  1354,  1718,  2907,  1729,  1719,   197,  1730,
    1208,  1626,  1731,  1656,  1734,  1210,  1662,   852,  2346,  2943,
    1733,  2940,  2944,  1969,  1212,  1993,   764,   629,   778,   769,
    1106,   784,  1213,  2346,   194,   164,  2948,  1043,  3035,  1502,
    1828,  3036,  1657,   315, -1782,  2243,  1857,  2299,  1345,   804,
     815,   504,  2275,  2276,  2277,  1627,  1701,   805,   200,  1107,
     504,  2855,  2346,  1266,   849,  3068,  2051,  1267,  1957,  1270,
    1981,   756,  1531,  2346,  1559,   704,  3102,  1276,  1429,  1222,
    3104,  1436,  2749,  3105,  1277,  1511,  1658,  1540,  2627,  1279,
    2628,   337,  1281,  2434,   341,  1300,   200,   201,  1721,  1305,
    1732,  1453,  1688,  1108,  1460,  2685,  2686,   886,   887,  3059,
    3060,  2306,  2892,  2893,  2894,   787,  1308,   880,  2785,  1309,
     884,  1310,  2463,   200,   201,  2203,  2204,  2205,  2206,  2207,
    2208,   806,  1311,  1313,   360,  1845,   194,   509,  1318,  1319,
     998,   324,   808,  1333,  1366,   984,   509,  2114,   314,   315,
    1334,  1219,   644,   645,   646,  1339,  1508,  1340,  1244,  1358,
    1342,  1019,  1368,  1374,  1873,  1375,   197,   341,  1007,   200,
     201,  1197,  1198,  1199,   238,  1392,  2147,  1393,  1711,   898,
    1038,  1399,  1200,  1201,  1202,  1537,  1265,   984,  1098,  1028,
    1604,  1400,  1407,  2986,   197,  1746,  1463,  1055,   564,   565,
     332,   566,   191,   567,   192,   332,  1486,   250,   819,   192,
    1487,  1069,   193,  1566,  1488,  1574,  2220,   196,  1585,   198,
    1127,  1128,  2228, -1777, -1779, -1784,  1084,  1129,  1586,  1587,
    1588,   934,  2222,  1589,  1595,   251,   312,  3009,  1605,  1646,
     191,  1647,   192,  1648,  1649,   193,   899,  1737,   194,   195,
     196,   853,   198,   199,  1895,  1896,  1897,  1898,  1713,   313,
     314,   315,   981,   316,  1004,   374,   375,  1025,  1712,  1045,
     667,  1061,  1668,  1075,  2237,  2253,  1934,   337,  1935,  1936,
    1937,  1938,  2238,  1752,  1621,  1637,  1753,   836,   191,  1769,
    1786,   191,  1622,   192,  1788,  2749,   193,  1791,  2785,   194,
    1090,   196,   197,   198, -1550,  1800,  1801,   205,  1803,   220,
     313,   314,   315,  1804,   316,  1651,  1665,   597,   245,  1802,
    1811,   272,   282,  1652,   300,   657,   900,   541,   531,   542,
     355,  1806,  1101,  1115,   382,  3065,  1819,  1686,  1167,   469,
    1102,   199,  1168,  1169,  1170,  1879,  2304,  1880,   523,  1885,
    1894,  1892,   628,  1903,   504,  1706,  2239,   191,  1710,  2203,
    2204,  2205,  2206,  2207,  2208,  2062,  1623,  2240,  1920,  1925,
    1230,  1924,  1945,   593,   532,   533,  1932,  1624,  2434,   985,
     543,  2463,  1679,  1947,   336,   337,   205,  2532,  1946,  2563,
     755,  2286,  1252,  2026,  2027,  2065,  3103,  1653,  2030,   624,
    1848,   220,   341,  2067,   200,   201,  2090,   341,  1655,   200,
     201,  2069,  2078,  2079,  1103,  2081,  2358,  2084,   505,   675,
     507,   985,  1876,  2171,  2516,  1105,   245,  1424,  1372,  1447,
    2175,  2337,  2870,  2173,  2172,  2332,  3128,   508,  3129,  2174,
     509,  2331,   200,   201,  1283,  1284,  2266,  2322,  1285,  1286,
    1516,  2323,  2326,   272, -2407,  2547,  1933,  1934,  3161,  1935,
    1936,  1937,  1938,   282,  1127,  1128,  1711,  1712,  1713,  1714,
    1180,  1129,   564,   565,   332,   566,   667,   567,   192,  1834,
     300,   193,  2334,  1545, -2006,   195,   196,  2335,   198, -2010,
    2338,  1431,  2339,   200,   201, -2480,  1451,   541,   531,   542,
    2342,  2343,  1236,   240,  2344,   211,  1669,   226,  1863,  2316,
    2345,  1961,  1408,  1985,  2349, -1825,  2350,   192,   509,  1357,
     239,  2356,  2362,  2368,  1821,   196,   355,  2369,  2370,  2372,
    1258,  2392,  2393,  1127,  1128,  1711,  1712,  1713,  1714,  1972,
    1129,  1996,   240,  2394,   532,   533,  2398,  1224,  2407,  2399,
     543,   598,  2412,  1850,  2406,   763,   777,   541,   531,   542,
     382,  2408,  1349,  2415,  2416,   332,   818,   250,  2419,   192,
    2420,   603,   193,  1412,  2421,  1246,  2422,   196,  2318,   198,
     852,  2571,  2054,  2425,   211,  2428,   629,  2488,  1564,  1287,
     541,   531,   542,  2494,  2489,   251,  2490,   634,  2241,   226,
    2493,   503,  1596,  2496,   532,   533,  2495,   192,  2500,  2651,
    1354,  2498,  2442,  2499,  2502,  1969,   197,  1288,  1289,  1290,
    1625,  1926,  1927,  1928,  1929,   374,   375,  2242,  1291,  1292,
    1293,  2501,  1656,  2567,   814,  2583,  2471,   532,   533,  1993,
     469,  2572,   564,   565,   332,   566,   191,   567,   192,  1626,
    2584,   193,  2299,  2585,  2586,  1345,  2588,  2430,  2589,  2590,
    1957,  1657,   967,  2117,   375,  2591,  2599,  1701,   504,  2600,
    2601,  2243,  1511,  2607,   848,  2608,   341,   879,   200,   201,
    2609,  2459,  2610,  2516,  1981,   933,  1773,  1774,  1775,  1776,
    1777,  1845,  2150,  1627,   523,  2221, -1827,  1873,   336,   337,
    2051,  1540,  2611,  1688,  2612,  1658,  1874,  2613,   917,   565,
     332,   566,   191,   567,   192,  2615,  2306,   200,   201,  2547,
    2614,  2624,  2524,   197,  2555,  2616,  1429,   543,  1453,  1436,
    2634,  1460,   505,   506,   507,  2642,  2643,  2654,   980,  1003,
    2644,  1024,  1044,  1060,  1074,  2646,  1089,  2836,  2837,  2838,
    2839,   508,   998,  1358,   509,  1019,  2655,  1038,  2656,  1055,
    2657,  1069,  2114,  2665,  2672,  1114,  2677,   341,  2678,   200,
     201,  2679,  2684,   593,  2688,   504,  2702,  2703,   984,  2706,
    1007,  2712,  2709,  1028,  2346,  1508,  2812,  2716,  1084,  2724,
     332,  2256,   250, -2469,   192,  2147,  2813,   239,  2816,  2817,
     819,   205,   196,  2818,   624,   336,   337,   200,   201,  1773,
    1774,  1775,  1776,  1777,   853,  2819,  2055,  2820,  1537,   240,
    1566,   220,  2822,  2842,  2062,  2843,  2769,   476,   477,   478,
     479,   480,  1668,  2844,  2856,  2532,  2857,  2625,  2898,   505,
    2858,   507,  2865,  2866,  2877,  2629,   341,  2867,   200,   201,
     374,   375,  2878,   675,  2626,  2884,  2889,  2805,   508,  2901,
     332,   509,   250,  2905,   192,  2903,  2563,   239,  2906,  1235,
    2937,  1257,   196,  2935,   245,   481,  2941,  2955,  2966,  1778,
    1779,  1780,   272,  2968,  2969,   282,  2972,  2974,  2975,   240,
    2976,   300,  2949,  2950,  2951,  2952,  3002,  2118,  2977,  3004,
    2237,  2253,  3145,  3146,  3147,  3148,  3149,  3150,  2238,  2980,
    2981,  2982,   341,  2990,   200,   201,  2991,  2992,  3001,  3003,
     374,   375,  1621,  1637,  2993,  2998,  2151,  2999,  3000,   355,
    1622,  3006,  3007,  1575,  1651,  1665,  1353,  1009,  1686,  1030,
    3033,   763,  1652,   452,  3008,   332,  3038,   191,  3040,   192,
    3041,  2304,   193,  3044,   777,  3046,  3049,   196, -1782,   564,
     565,   332,   566,   191,   567,   192,  1706,  3047,   193,  1710,
     382,   603,  3064,   196,  3069,   198,   237,  3071,   331,  3073,
     332,  3074,  2239,  1679,   192,   814,  3075,  3076,  2241,  3077,
    1230,   251,   341,  2240,   200,   201,  2286,  2381,  3078,   211,
    3079,  3080,   634,  3081,  1623,  3086,  2299,  3089,  3088,  3101,
    3106,  3107,   985,   469,  3117,  1624,  1653,  2242,  1252,   226,
    3015,  3118,  3016,  3017,  3119,  2257,  2387,  1655,   848,  3126,
    3018,  3019,  3020,  3131,  3127,  1834,  3130,   333,   334,   335,
     336,  1863,   338,  3152,  3153,  3154,  1428,  1452,  3155,  3162,
    3160,   191,  3168,   453,   454,   455,   879,  3169,  3164,  3165,
    3173,  2243,   341,  3166,   200,   201,  1669,  3170,  2769,  3059,
    2306,  3172,   333,   334,   335,   336,   337,   338,   339,   340,
    1821,  3178,  3176,  1370,  3184,  3181,  1850,  3182,  2442,  3185,
    3180,  2662,  2681,  2916,  2532,   401,  1507,   402,  1536,  1565,
     403,   404,   405,  1961,  2805,   406,   407,   408,   409,   933,
     191,  2373,   192,  1969,  1594,   193,   410,  2471,   194,   195,
     196,   197,   198,   199,  1790,  2215,  1357,  1985,  2445,   523,
    2563,  1972,  2218,  2430,  1127,  1128, -1775, -1777, -1779, -1784,
     538,  1129,  1993,  3021,   539,   540,  2711,   341,  3087,   200,
     201,  3158,  2474,  3039,  3022,  1996,   980,  3121,  1957,  2051,
    2841,  2757,  2459,   341,  2847,   200,   201,  2984,   411,  2725,
    2524,  2726,  2727,  2728,  2729,   412,  3082,  1677,  2918,  1003,
     413,   414,   341,   415,   200,   201,   416,  1981,   417,   418,
     419,   420,  2793,  1613,   421,   422,   423,  2920,   980,   424,
    1024,  2555,   425,   746,   426,   430,  2921,  2924,   564,   565,
     332,   566,   191,   567,   192,   433,  2054,   193,  2925,  1044,
     194,   195,   196,   434,   198,   199,   435,  1127,  1128,  1711,
    1712,  1713,  1714,  2383,  1129,   436,  1060,  2927,  2527,   437,
    2558,  2730,  2731,   438,   439,   440,   441,   442,  2114,  2928,
    1074,  2147,  2930,  2931,   503,  1902,   332,  2932,   250,  2934,
     192,  1893,  2389,  1636,  2900,  1089,  2357,  1931,  3167,   197,
     476,   477,   478,   479,   480,  2366,  1610,   712,  2117,  1282,
    2891,  2769,  1943,  1664,  2805,     0,  2874,  1948,     0,     0,
    2237,  2253,     0,  1114,  1513,     0,  1542,     0,  2238,     0,
       0,  1511,     0,     0,  1685,  2304,     0,  1705,     0,     0,
       0,  2150,   200,   201,     0,     0,   374,   375,   481,     0,
       0,   504,  2006,  2007,     0,     0,     0,     0,   593,  2914,
       0,  2917,  2919,  2922,  1540,  2923,  2926,  2929,  2933,     0,
       0,     0,     0,  3015,     0,  3016,  3017,  2028,  2029,     0,
    2286,   336,   337,  3018,  3019,  3020,   191,     0,   192,     0,
    1358,   193,  2446,   624,   194,   195,   196,     0,   198,   199,
       0,     0,  2239,  2442,     0,     0,  2471,  1009,     0,     0,
     834,     0,     0,  2240,     0,   505,  2475,   507,     0,     0,
    1147,  1148,     0,     0,  1149,  1150,     0,     0,  1030,     0,
       0,     0,   675,  2757,   508,     0,  1833,   509,     0,  1235,
       0,     0,   341,     0,   200,   201,     0,  2256,  2430,     0,
       0,  2459,  3109,  3110,  3111,  3112,  3113,  3114,  1862,  2524,
       0,  1257,   971,   565,   332,   566,   667,   567,   192,  2793,
       0,   193,  1611,     0, -2025,   195,   196,   197,   198, -2029,
    2055,  1668,     0,     0,     0,   313,   314, -2036,   341,   316,
     200,   201,  3157,   240,     0,  2555,  3021,     0,     0,     0,
       0,     0,   800,     0,   332,     0,   191,  3022,   192,  1461,
       0,   193,     0,     0,   194,     0,   196,     0,   198,     0,
       0,     0,     0,     0,     0,   313,   314,   315,     0,   316,
       0,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,     0,
       0,     0,  2118,     0,     0,   971,   565,   332,   566,   667,
     567,   192,     0,     0,   193,     0,   603, -2050,   195,   196,
    1353,   198, -2054,     0,     0,  1151,     0,     0,   313,   314,
   -2060,     0,   316,  2217,  1881,  2151,   240,     0,     0,     0,
    1968,     0,  1992,   763,     0,   777,     0,     0,   200,   201,
       0,   634,     0,  1155,  1156,  1157,   333,   334,   335,   336,
       0,   338,     0,     0,  1158,  1159,  1160,   814,     0,     0,
       0,     0,   453,   454,   455,     0,     0,     0,     0,     0,
       0,   848,     0,  2050,     0,  2273,     0,     0,     0,     0,
       0,  1961,     0,     0,  2445,  1428,     0,     0,     0,     0,
    1849,     0,   541,   531,   542,     0,  2757,     0,     0,  2793,
    1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,  1452,  1972,
    1985,     0,  1877,  2474,     0,     0,   341,   955,   200,   201,
    1762,     0,     0,     0,   879,  1320,  1321,     0,     0,  1322,
    1323,  2257,     0,     0,     0,     0,     0,     0,  1996,   532,
     533,     0,   956,   957,   958,     0,  2379,  2178,  2179,  2180,
    2181,  2182,  2183,  2184,  2113,  2054,   341,  2760,   200,   201,
       0,     0,     0,  1507,     0,  1669,  2527,     0,     0,  2187,
    2188,  2189,  2190,  2191,  2192,  2193,  2194,     0,     0,     0,
       0,     0,     0,  2146,     0,     0,  2279,     0,  2796,     0,
       0,     0,  1536,     0,   452,     0,   332,  2558,   250,   341,
     192,   200,   201,   193,     0,     0,     0,     0,   196,   971,
     565,   332,   566,   191,   567,   192,     0,     0,   193,     0,
    1565,   194,   195,   196,     0,   198,   199,     0,  1974,  2385,
    1998,     0,   313,   314,   315,     0,   316,     0,   933,  1912,
       0,     0,     0,     0,  2117,     0,     0,  2150,     0,     0,
       0,     0,   917,   565,   332,   566,   191,   567,   192,     0,
       0,   193,     0,     0,     0,     0,   196,   197,   198,   980,
    1324,  1003,     0,     0,  1024,     0,  1044,     0,  1060,     0,
    1074,     0,  2252,     0,   251,     0,     0,  2256,   333,   334,
     335,   336,  1636,   338,     0,     0,     0,     0,  1325,  1326,
    1327,     0,     0,     0,   453,   454,   455,  1089,  2195,  1328,
    1329,  1330,     0,     0,   207,     0,   222,     0,  2446,   504,
       0,     0,     0,  1664,     0,   247,     0,     0,   274,   284,
       0,  2405,     0,     0,     0,     0,     0,   357,     0,     0,
    1114,   384,     0,     0,  1685,     0,   471,  2475,     0,   336,
     337,     0,  2123,  2303,     0,   525,     0,     0,     0,     0,
       0,  1513,  1705,     0,     0,     0,     0,     0,     0,  2445,
       0,     0,  2474,  1147,  1148,     0,     0,  1149,  1150,     0,
     595,  2156,     0,   505,     0,   507,     0,     0,     0,  2055,
    1542,  2761,     0,   207,     0,     0,     0,     0,   341,  2760,
     200,   201,   508,     0,     0,   509,   626,     0,   222,     0,
       0,     0,     0,   341,     0,   200,   201,     0,     0,   830,
       0,     0,  2797,     0,     0,  2527,   677,     0,   800,     0,
     332,     0,   191,   247,   192,  2796,     0,   193,     0,     0,
     194,     0,   196,  1606,   198,     0,     0,     0,     0,     0,
       0,   313,   314,   315,     0,   316,   341,     0,   200,   201,
     274,  2558,     0,     0,     0,     0,     0,     0,     0,  1009,
     284,     0,  1030,     0,     0,     0,     0,  2164,  2118,     0,
       0,  2151,     0,     0,     0,     0,  1833,     1,     0,  2909,
    2910,     5,     6,     7,     8,     9,    10,     0,    12,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,  1235,
       0,    15,    16,     0,     0,  1862,     0,     0,  1151,     0,
       0,  2257,   333,   334,   335,   336,     0,   338,     0,     0,
       0,     0,     0,   357,     0,     0,     0,  1257,   453,   454,
     455,     0,     0,     0,     0,     0,  1155,  1156,  1157,     0,
       0,     0,     0,     0,     0,     0,     0,  1158,  1159,  1160,
       0,     0,   765,   779,     0,     0,  2911,   384,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,    14,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,     0,
       0,     0,     0,  2446,     0,     0,  2475,    18,   503,     0,
       0,     0,  2760,     0,   192,  2796,     0,  1353,     0,  2441,
       0,     0,  1968,   197,     0,   331,     0,   332,     0,     0,
      19,   192,   341,  2761,   200,   201,     0,     0,     0,     0,
       0,   816,     0,  2470,     0,     0,  1992,   471,     0,     0,
       0,    20,     0,  1394,    21,     0,  2617,  2618,  2202,  2203,
    2204,  2205,  2206,  2207,  2208,     0,     0,     0,     0,  2797,
       0,   375,     0,     0,     0,   504,     0,     0,     0,     0,
       0,   850,     0,     0,   881,     0,     0,  2382,     0,     0,
       0,     0,   935,    22,     0,     0,     0,     0,     0,    23,
       0,   525,     0,    24,    25,   336,   337,  2050,  2912,     0,
       0,     0,     0,     0,     0,    26,  2388,     0,     0,   333,
     334,   335,   336,   337,   338,   339,   340,  2619,     0,  2523,
       0,  2554,     0,  1428,     0,  1452,     0,     0,     0,   505,
     506,   507,     0,     0,     0,   982,  1005,     0,  1026,  1046,
    1062,  1076,     0,  1091,    27,    28,    29,     0,   508,    30,
       0,   509,   312,     0,    31,     0,   191,     0,   192,  2113,
       0,   193,  1116,     0,   194,   195,   196,   197,   198,   199,
     595,     0,     0,     0,     0,   313,   314,   315,     0,   316,
    1147,  1148,  1507,    32,  1149,  1150,     0,     0,    33,     0,
       0,     0,  2146,     0,     0,     0,     0,     0,   207,     0,
       0,   626,     0,     0,   200,   201,     0,  2451,     0,     0,
    1974,     0,     0,     0,     0,  1536,     0,  1565,   222,   341,
       0,   200,   201,   946,     0,     0,     0,     0,     0,     0,
       0,  2480,  2707,     0,  1998,     0,  2761,     0,     0,  2797,
       0,     0,   917,   565,   332,   566,   191,   567,   192,     0,
     677,   193,     0,     0,   194,   195,   196,   197,   198,   199,
       0,     0,     0,     0,     0,     0,  1237,     0,  1259,     0,
       0,   247,     0,  1413,   503,     0,   332,     0,   250,   274,
     192,     0,   284,   193,     0,     0,     0,     0,   196,   197,
     198,     0,     0,     0,     0,     0,     0,     0,  2252,     0,
       0,     0,     0,     0,   374,   375,   251,     0,     0,   504,
       0,     0,     0,     0,     0,  2735,     0,  2529,     0,  2560,
    1636,     0,     0,     0,     0,  2374,   357,     0,     0,     0,
       0,     0,  1664,  1355,     0,  1685,   374,   375,   765,   336,
     337,   504,     0,     0,     0,     0,     0,     0,  2303,     0,
       0,   779,     0,  1155,  1156,  1157,     0,  2123,   200,   201,
       0,     0,     0,  1705,  1158,  1159,  1160,   384,     0,     0,
       0,   336,   337,   505,     0,   507,     0,     0,     0,     0,
    1513,     0,   816,     0,     0,     0,     0,     0,     0,     0,
    2156,     0,   508,     0,     0,   509,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   505,     0,   507,     0,     0,
     471,     0,   325,  1542,     0,     0,     0,     0,     0,     0,
    2834,     0,     0,     0,   508,   850,     0,   509,     0,     0,
       0,     0,  1833,   452,     0,   332,     0,   250,  1862,   192,
       0,     0,   193,  1430,  1454,     0,   341,   196,   200,   201,
       0,     0,     0,   881,     0,     0,   599,   564,   565,   332,
     566,   191,   567,   192,     0,     0,   193,  2773,     0,   194,
     195,   196,   197,   198,   199,     0,     0,     0,   341,     0,
     200,   201,   630,     0,     0,  2441,     0,     0,   240,     0,
       0,     0,     0,  1509,     0,  1538,  1567,     0,     0,  2072,
       0,     0,   679,   503,     0,   332,   935,   250,     0,   192,
    1968,     0,   239,     0,  2470,     0,  2908,   196,   197,   374,
     375,     0,  2936,     0,     0,     0,   525,   333,   334,   335,
     336,     0,   338,     0,  1413,     0,     0,     0,     0,  1992,
       0,     0,     0,   453,   454,   455,     0,     0,     0,     0,
       0,  2956,  2957,   982,  2958,  2959,  2050,     0,  2756,     0,
       0,     0,     0,     0,     0,   374,   375,  2523,     0,   312,
     504,     0,     0,   191,     0,   192,  1005,     0,   193,     0,
       0,   194,   195,   196,   325,   198,   199,     0,     0,  2792,
       0,     0,   313,   314,   315,   982,   316,  1026,  2554,     0,
     336,   337,     0,     0,     0,     0,     0,     0,     0,  1147,
    1148,     0,     0,  1149,  1150,     0,  1046,     0,  2849,  2850,
    2202,  2203,  2204,  2205,  2206,  2207,  2208,     0,     0,     0,
       0,     0,     0,  1062,   505,     0,   507,   341,     0,   200,
     201,     0,     0,     0,     0,  2113,     0,  1076,  2146,     0,
    2978,  2979,     0,   508,     0,     0,   509,     0,     0,     0,
    1638,   341,  1091,   200,   201,  2200,  2201,  2202,  2203,  2204,
    2205,  2206,  2207,  2208,  2988,  2989,     0,     0,     0,     0,
    1666,     0,  2457,  2451,     0,     0,  2996,     0,  2252,  2851,
    1116,  2617,  2618,  2202,  2203,  2204,  2205,  2206,  2207,  2208,
       0,  1687,  2303,  2209,  1707,     0,     0,   341,  1974,   200,
     201,     0,  2480,     0,     0,     0,     0,   820,   971,   565,
     332,   566,   191,   567,   192,   595,     0,   193,  2070,     0,
     194,   195,   196,   197,   198,   199,     0,  1998,     0,     0,
       0,   313,   314,   315,     0,   316,     0,     0,     0,   240,
       0,     0,     0,     0,  1151,     0,  2766,   854,     0,     0,
     626,  1152,  1153,  1154,     0,  2529,     0,     0,     0,     0,
    2441,     0,     0,  2470,     0,   200,   201,     0,     0,     0,
     374,   375,  1155,  1156,  1157,  3045,     0,  2802,  3048,     0,
       0,     0,     0,  1158,  1159,  1160,  2560,     0,     0,   677,
    2756,     0,     0,  1835,     0,     0,  1237,     0,     0,   210,
       0,   225,  3057,  3058,     0,     0,     0,     0,     0,     0,
     249,   258,     0,     0,     0,  1864,  2523,     0,  1259,     0,
       0,   328,     0,   503,     0,   332,  2792,   250,     0,   192,
       0,   473,   193,  2123,     0,     0,  2156,   196,   197,   198,
       0,     0,     0,     0,     0,     0,   599,     0,     0,  3091,
       0,     0,  2554,     0,     0,   251,     0,     0,  3094,  3095,
    3096,     0,  3097,  3098,  3099,   602,     0,   564,   565,   332,
     566,   191,   567,   192,     0,     0,   193,   630,   210,   194,
     195,   196,   197,   198,   199,   374,   375,     0,     0,     0,
     504,   633,     0,   225,     0,     0,     0,     0,   240,     0,
    3123,  3124,  2849,  2850,  2202,  2203,  2204,  2205,  2206,  2207,
    2208,   682,   341,     0,   200,   201,     0,  1355,   249,     0,
     336,   337,     0,     0,     0,     0,   679,     0,   258,   374,
     375,     0,     0,  2717,     0,     0,     0,  1970,     0,  1994,
     765,     0,   779,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   505,     0,   507,     0,  2451,     0,
       0,  2480,     0,     0,   816,     0,     0,     0,     0,     0,
       0,     0,     0,   508,     0,     0,   509,     0,   850,     0,
    2052,     0,     0,     0,     0,     0,     0,     0,  2766,     0,
       0,   325,  1430,   328,     0,     0,   564,   565,   332,   566,
     191,   567,   192,  2756,     0,   193,  2792,     0,     0,  1359,
     196,     0,   198,     0,  2529,  1454,     0,     0,     0,     0,
       0,     0,     0,     0,  2802,     0,     0,   341,   251,   200,
     201,   881,  3132,  3133,  3134,  3135,  3136,  3137,  3138,  3139,
    3140,  3141,  3142,  3143,     0,     0,     0,   767,   781,     0,
    2560,     0,     0,     0,     0,     0,     0,     0,   820,     0,
       0,  2115,     0,     0,     0,     0,     0,     0,     0,     0,
    1509,   341,     0,   200,   201,     0,     0,     0,     0,   971,
     565,   332,   566,   191,   567,   192,     0,     0,   193,     0,
    2148,   194,   195,   196,   197,   198,   199,     0,     0,  1538,
       0,   854,   313,   314,   315,     0,   316,     0,     0,     0,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   823,  1567,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
       0,   374,   375,     0,     0,   935,     0,     0,  2097,   565,
     332,   566,   191,   567,   192,     0,     0,   193,     0,     0,
     194,   195,   196,   197,   198,   199,   857,     0,     0,     0,
       0,   313,   314,   315,     0,   316,   982,     0,  1005,  1413,
       0,  1026,     0,  1046,     0,  1062,     0,  1076,     0,  2254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1638,
     341,  2766,   200,   201,  2802,     0,     0,     0,     0,     0,
     374,   375,     0,     0,  1091,   504,     0,     0,     0,     0,
       0,     0,     0,   564,   565,   332,   566,   667,   567,   192,
    1666,  1008,   193,  1029,  1048, -1986,   195,   196,   197,   198,
   -1990,     0,     0,     0,     0,   336,   337,  1116,     0,     0,
       0,  1687,     0,     0,   240,     0,     0,  1118,     0,     0,
    2305,     0,     0,     0,   312,   602,     0,     0,   667,  1707,
     192,     0,     0,   193,     0,     0, -1968,     0,   196,   505,
     198,   507,     0,   341,     0,   200,   201,   313,   314, -1970,
       0,   316,     0,   210,     0,   240,   633,     0,   508,     0,
       0,   509,     0,     0,  2720,     0,   564,   565,   332,   566,
     191,   567,   192,   225,     0,   193,     0,     0,   194,   195,
     196,   197,   198,   199,     0,     0,   971,   565,   332,   566,
     667,   567,   192,     0,     0,   193,     0,   240, -2025,   195,
     196,   197,   198, -2029,     0,   682,     0,     0,     0,   313,
     314, -2036,   341,   316,   200,   201,  1670,   240,     0,     0,
       0,  1239,     0,  1261,     0,     0,   249,     0,   374,   375,
     258,     0,     0,  2960,     0,  2097,   565,   332,   566,   191,
     567,   192,     0,     0,   193,     0,     0,   194,   195,   196,
     197,   198,   199,  1835,     0,     0,     0,     0,   313,   314,
     315,   599,   316,     0,     0,     0,  1413,     0,     0,     0,
     328,     0,     0,     0,     0,     0,  1237,     0,     0,     0,
       0,     0,  1864,     0,     0,     0,     0,   341,  1362,   200,
     201,     0,     0,   767,     0,     0,   630,   374,   375,     0,
       0,     0,   504,     0,  1259,     0,   781,     0,     0,     0,
    1620,   565,   332,   566,   191,   567,   192,     0,     0,   193,
       0,     0,     0,     0,   196,   197,     0,     0,     0,     0,
     200,   201,   336,   337,     0,   679,     0,   823,     0,  1837,
     917,   565,   332,   566,   191,   567,   192,     0,     0,   193,
       0,     0,   194,   195,   196,   197,   198,   199,     0,     0,
       0,  1866,     0,     0,     0,   473,   505,     0,   507,     0,
     341,  1413,   200,   201,     0,     0,     0,     0,     0,     0,
     857,     0,     0,     0,  1355,   508,  2443,     0,   509,  1970,
     341,  2486,   200,   201,     0,     0,     0,     0,  1432,  1456,
       0,     0,   374,   375,   333,   334,   335,   504,     0,   338,
    2472,     0,     0,  1994,     0,     0,     0,     0,     0,     0,
     453,   454,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,   337,   341,
       0,   200,   201,     0,     0,     0,     0,     0,  1512,     0,
    1541,  1569,     0,  2097,   565,   332,   566,   191,   567,   192,
    2963,     0,   193,  1359,     0,   194,   195,   196,   197,   198,
     199,   505,     0,   507,  2052,     0,   313,   314,   315,     0,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     508,     0,     0,   509,     0,     0,  2525,     0,  2556,     0,
    1430,     0,  1454,     0,     0,     0,     0,     0,     0,     0,
     820,     0,     0,     0,   341,     0,   200,   201,     0,     0,
     504,     0,     0,     0,   854,     0,  2056,     0,     0,     0,
       0,  1008,     0,     0,     0,     0,  2115,     0,     0,     0,
       0,     0,     0,     0,   341,     0,   200,   201,     0,     0,
     336,   337,  1029,     0,     0,     0,     0,     0,     0,  1509,
       0,     0,     0,     0,   312,  2809,   332,     0,   191,  2148,
     192,  1048,     0,   193,     0,     0,   194,     0,   196,     0,
     198,     0,     0,     0,   505,     0,   507,   313,   314,   315,
       0,   316,  1538,     0,  1567,   240,  2097,   565,   332,   566,
     191,   567,   192,   508,     0,   193,   509,  2119,   194,   195,
     196,   197,   198,   199,     0,  1640,     0,     0,     0,   313,
     314,   315,     0,   316,     0,     0,   374,   375,     0,     0,
       0,     0,     0,     0,     0,  1673,  2152,     0,   564,   565,
     332,   566,   191,   567,   192,  1118,     0,   193,     0,     0,
     194,   195,   196,   197,   198,   199,  1689,   341,     0,   200,
     201,     0,     0,   504,     0,     0,   917,   565,   332,   566,
     191,   567,   192,     0,     0,  2254,     0,     0,  2592,     0,
     602,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   336,   337,     0,     0,  1638,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1666,
       0,     0,  1687,     0,     0,   633,     0,   389,     0,   390,
       5,     0,   391,     8,   392,  2305,    11,   505,     0,   507,
       0,     0,    14,   504,     0,  2258,     0,     0,     0,     0,
    1707,    16,    17,     0,     0,     0,   508,     0,     0,   509,
       0,    18,     0,     0,   682,     0,     0,     0,  1840,     0,
       0,  1239,     0,   336,   337,     0,     0,     0,   341,     0,
     200,   201,     0,     0,   393,     0,  1670,     0,     0,     0,
    1869,     0,     0,  1261,     0,     0,     0,     0,     0,  1954,
       0,     0,     0,     0,     0,   394,     0,   505,     0,   507,
     341,     0,   200,   201,     0,     0,     0,     0,     0,  1835,
       0,     0,     0,     0,     0,  1864,   508,     0,     0,   509,
       0,  2595,     0,   836,     0,   332,     0,   191,     0,   192,
       0,     0,   193,     0,     0,   194,     0,   196,   197,   198,
       0,     0,   341,    23,   200,   201,   313,   314,   315,     0,
     316,     0,     0,     0,  1413,     0,     0,     0,     0,   395,
       0,     0,  2443,     0,     0,     0,     0,     0,     0,     0,
     341,     0,   200,   201,     0,     0,     0,     0,     0,     0,
       0,     0,  1362,     0,     0,   374,   375,  1970,     0,     0,
     504,  2472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1973,    30,  1997,   767,     0,   781,    31,     0,
       0,     0,     0,     0,     0,     0,  1994,     0,     0,     0,
     336,   337,   452,     0,   332,     0,   191,     0,   192,   823,
       0,   193,     0,  2052,     0,  2758,   196,   396,     0,  1837,
       0,     0,    33,   857,  2525,  2059,     0,     0,     0,     0,
       0,     0,     0,     0,   505,     0,   507,  1432,     0,     0,
       0,     0,     0,     0,     0,     0,  2794,     0,  1866,     0,
       0,     0,     0,   508,     0,  2556,   509,     0,     0,   208,
    1456,   223,     0,   917,   565,   332,   566,   191,   567,   192,
       0,   257,   193,   275,     0,   194,   195,   196,   197,   198,
     199,   322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,  1413,     0,   333,   334,   335,   336,
       0,   338,  2115,     0,     0,  2148,  2122,   341,     0,   200,
     201,     0,   453,   454,   455,  1512,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   596,     0,     0,  2503,     0,
     504,     0,     0,     0,     0,  2155,     0,     0,   208,     0,
       0,     0,     0,     0,  1541,  2254,     0,     0,     0,     0,
    1359,   627,  2447,   223,     0,     0,     0,     0,     0,  2305,
     336,   337,     0,     0,   564,   565,   332,   566,   667,   567,
     192,   678,  1569,   193,     0,     0,  2476,   195,   196,   197,
     198, -1990,     0,     0,     0,     0,     0,     0,   257,     0,
       0,     0,     0,     0,   505,   240,   507,     0,   564,   565,
     332,   566,   667,   567,   192,   275,   341,   193,   200,   201,
   -2006,   195,   196,   508,   198, -2010,   509,     0,     0,     0,
       0,     0,     0,  1008,     0,     0,  1029,  2443,  1048,   240,
    2472,     0,     0,     0,  2261,     0,     0,     0,     0,     0,
    2056,     0,     0,     0,  1640,     0,   917,   565,   332,   566,
     191,   567,   192,   322,     0,   193,     0,  2758,   194,   195,
     196,   197,   198,   199,     0,     0,     0,   341,     0,   200,
     201,     0,     0,     0,     0,  1673,     0,  1413,     0,     0,
       0,     0,     0,  2525,     0,     0,     0,     0,  2129,     0,
       0,     0,  1118,  2794,     0,     0,  1689,     0,     0,     0,
       0,     0,  2119,     0,     0,  2307,     0,     0,   780,     0,
       0,     0,     0,   504,     0,     0,     0,     0,     0,  2556,
       0,     0,     0,     0,     0,     0,     0,   503,     0,   332,
       0, -1848,     0,   192,     0,  2152,   239,     0,     0,     0,
       0,   196,   197,   336,   337,     0,     0,     0,     0,     0,
       0,   503,     0,   332,     0,   250,     0,   192,   240,     0,
       0,     0,     0,     0,     0,     0,   197,     0,   341,     0,
     200,   201,     0,     0,     0,     0,     0,   505,     0,   507,
       0,     0,     0,     0,     0,     0,   817,     0,     0,   374,
     375,     0,   472,     0,   504,     0,   508,     0,     0,   509,
       0,     0,   341,     0,   200,   201,   971,   565,   332,   566,
     667,   567,   192,   374,   375,   193,     0,     0,   504,   195,
     196,   197,   198, -2029,   336,   337,   851,     0,     0,   313,
     314, -2036,     0,   316,     0,     0,     0,   240,  1840,     0,
       0,  2258,     0,     0,     0,     0,     0,     0,   336,   337,
     341,     0,   200,   201,     0,     0,     0,     0,   505,     0,
     507,  1239,     0,     0,     0,     0,     0,  1869,     0,     0,
    2758,  2162,     0,  2794,     0,  1670,     0,   508,     0,     0,
     509,     0,   505,     0,   507,     0,     0,     0,     0,  1261,
       0,  1006,     0,  1027,  1047,  1063,     0,     0,     0,     0,
       0,   508,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0, -1850,     0,     0,     0,     0,  1117,     0,     0,
       0,     0,     0,     0,     0,   596,     0,     0,     0,     0,
       0,   341,     0,   200,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2649,   208,     0,   341,   627,   200,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1362,
       0,  2450,     0,   223,  1973,  1837,  2310,     0,     0,     0,
       0,  1866,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   462,     0,     0,     0,  2479,     0,     0,  1997,     0,
     513,     0,     0,     0,     0,   678,     0,     0,     0,     0,
     341,     0,   200,   201,     0,     0,     0,     0,     0,     0,
       0,  1238,     0,  1260,     0,     0,     0,     0,  2447,   312,
     257,   332,     0,   191,   275,   192,     0,     0,   193,     0,
       0,   194,     0,   196,     0,   198,     0,     0,     0,     0,
       0,     0,   313,   314,   315,     0,   316,  2476,     0,  2059,
     240,     0,     0,   917,   565,   332,   566,   191,   567,   192,
     322,     0,   193,     0,     0,   194,   195,   196,   197,   198,
     199,  2528,     0,  2559,     0,  1432,     0,  1456,  1356,     0,
       0,   374,   375,     0,  1413,     0,     0,     0,     0,  2056,
       0,  2762,     0,     0,     0,     0,   780,     0,     0,     0,
       0,  2097,   565,   332,   566,   191,   567,   192,     0,     0,
     193,  2122,     0,   194,   195,   196,   197,   198,   199,     0,
     504,     0,  2798,     0,   313,   314,   315,   817,   316,     0,
       0,     0,  1413,   836,  1512,     0,     0,   191,     0,   192,
       0,     0,   193,     0,  2155,   194,     0,   196,   197,   198,
     336,   337,     0,     0,     0,   472,   313,   314,   315,     0,
     316,     0,     0,   374,   375,     0,     0,  1541,   504,  1569,
     851,     0,     0,     0,     0,     0,     0,     0,  2119,     0,
       0,  2152,     0,     0,   505,     0,   507,     0,     0,  1455,
       0,     0,     0,     0,     0,     0,     0,     0,   336,   337,
     504,     0,   215,   508,   229,     0,   509,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,     0,     0,
       0,  2258,     0,   341,   330,   200,   201,     0,     0,     0,
     336,   337,   505,     0,   507,     0,     0,     0,  1510,     0,
    1539,  1568,     0,     0,     0,     0,     0,     0,     0,     0,
    2261,   508,     0,     0,   509,     0,     0,   341,     0,   200,
     201,     0,     0,     0,   505,     0,   507,     0,   607,     0,
       0,     0,  1640,     0,     0,     0,   807,     0,     0,     0,
       0,   215,   462,   508,  1673,     0,   509,  1689,     0,     0,
       0,     0,     0,     0,   637,     0,   229,     0,     0,     0,
    2307,     0,     0,  2447,     0,   341,  2476,   200,   201,     0,
       0,     0,     0,     0,     0,     0,   837,     0,     0,   865,
       0,  1006,     0,     0,     0,     0,     0,   918,     0,     0,
       0,     0,     0,  2762,     0,     0,   513,     0,     0,   200,
     201,     0,  1027,     0,     0,     0,     0,     0,   277,     0,
    2097,   565,   332,   566,   191,   567,   192,     0,     0,   193,
       0,  1047,   194,   195,   196,   197,   198,   199,     0,  2798,
       0,     0,     0,   313,   314,   315,     0,   316,  1063,   312,
       0,     0,     0,   667,  1840,   192,     0,     0,   193,     0,
    1869,     0,     0,   196,     0,   198,   330,     0,     0,     0,
       0,     0,   313,   314, -1970,  1639,   316,  1104,  1147,  1148,
     240,     0,  1149,  1150,     0,     0,     0,   504,     0,     0,
       0,     0,     0,     0,     0,  1667,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1117,     0,  2450,     0,     0,
     971,   565,   332,   566,   667,   567,   192,   336,   337,   193,
       0,     0, -2050,   195,   196,     0,   198, -2054,     0,     0,
       0,     0,  1973,   313,   314, -2060,  2479,   316,     0,     0,
     596,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,   507,     0,     0,     0,     0,     0,     0,
       0,  1997,     0,     0,     0,     0,     0,     0,     0,     0,
     508,     0,     0,   509,     0,   627,     0,     0,  2059,   214,
    2765,   228,     0,     0,     0,     0,     0,     0,     0,  2528,
       0,     0,     0,   213,     0,   227,     0,     0,     0,   826,
       0,     0,     0,     0,     0,   259,     0,     0,     0,     0,
       0,  2801,     0,     0,   678,   329,  2762,     0,  1836,  2798,
    2559,  1238,     0,  2374,   341,     0,   200,   201,     0,     0,
    1152,  1153,  1154,     0,     0,     0,     0,     0,     0,   860,
    1865,     0,     0,  1260,     0,   606,     0,     0,     0,     0,
     938,  1155,  1156,  1157,     0,   200,   201,     0,   214,   605,
       0,     0,  1158,  1159,  1160,     0,     0,  2122,     0,     0,
    2155,   636,   213,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   635,     0,   227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   807,     0,     0,
       0,     0,     0,   994,  1014,   683,  1034,  1051,  1065,  1078,
    2261,  1093,     0,     0,   341,     0,   200,   201,     0,     0,
       0,     0,   259,     0,  2307,   462,     0,     0,     0,     0,
    1120,     0,     0,     0,     0,   503,     0,   332,   607,   250,
     837,   192,  1356,     0,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,  1414,  1437,
       0,     0,  1971,     0,  1995,     0,   215,   780,   865,   637,
       0,     0,     0,     0,     0,     0,   503,     0,   332,     0,
   -1848,     0,   192,     0,     0,   239,   229,   329,     0,   817,
     196,   197,  2450,     0,     0,  2479,     0,   374,   375,     0,
       0,     0,   504,   851,     0,  2053,     0,   240,  1492,     0,
    1521,  1549,     0,     0,   917,   565,   332,   566,   191,   567,
     192,   918,  2765,   193,     0,     0,   194,   195,   196,   197,
     198,   199,   336,   337,     0,     0,     0,     0,   374,   375,
    1455,   513,   782,   504,     0,  1413,     0,   277,  2528,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2801,     0,
       0,     0,     0,     0,     0,     0,   505,     0,   507,     0,
       0,     0,     0,   336,   337,     0,   374,   375,     0,     0,
       0,   504,     0,   330,  2559,   508,  2116,     0,   509,     0,
       0,     0,     0,     0,     0,  1510,     0,     0,     0,     0,
       0,  1365,     0,     0,     0,     0,     0,   505,     0,   507,
       0,   336,   337,     0,     0,  2149,     0,     0,     0,     0,
     824,     0,   326,     0,  1539,     0,   508,     0,     0,   509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,   200,   201,     0,     0,   505,     0,   507,     0,     0,
     826,     0,  1568,     0,     0,     0,     0,     0,     0,     0,
     859, -1850,     0,     0,   508,     0,   600,   509,     0,     0,
       0,     0,   564,   565,   332,   566,   191,   567,   192,     0,
     341,   193,   200,   201,   194,   195,   196,     0,   198,   199,
       0,     0,   631,   860,     0,  1654,     0,  1147,  1148,     0,
       0,  1149,  1150,  1006,     0,  1104,  1027,     0,  1047,     0,
    1063,  1012,   680,  1032,  2255,     0,     0,     0,   341,  1691,
     200,   201,     0,     0,  1639,  1011,     0,  1031,  1049,     0,
       0,     0,     0,     0,     0,  2765,     0,     0,  2801,     0,
       0,     0,     0,     0,     0,   606,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1667,     0,     0,     0,   605,
       0,  1519,     0,  1548,  1573,     0,     0,     0,     0,     0,
       0,     0,  1117,   214,   938,     0,   636,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
     635,     0,     0,   228,   326,     0,     0,     0,     0,     0,
    2236,   565,   332,   566,   191,   567,   192,   227,     0,   193,
       0,     0,   194,     0,   196,   197,   198,     0,     0,     0,
       0,   994,     0,   313,   314,   315,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   683,
       0,  1242,  2879,  1263,  1014,     0,     0,     0,     0,  1152,
    1153,  1154,     0,     0,     0,  1241,     0,  1262,     0,     0,
       0,     0,     0,   994,   259,  1034,     0,     0,     0,     0,
    1155,  1156,  1157,     0,     0,     0,   341,     0,   200,   201,
       0,  1158,  1159,  1160,  1051,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,     0,     0,   338,
       0,  1065,     0,     0,   329,     0,     0,     0,     0,     0,
     453,   454,   455,     0,     0,  1078,     0,     0,  1836,     0,
       0,     0,  1363,     0,     0,     0,     0,   821,  1643,     0,
    1093,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     782,  1238,     0,     0,     0,     0,   327,  1865,  1676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1120,     0,
       0,     0,     0,     0,     0,     0,     0,   855,     0,  1260,
       0,   824,     0,  1725,  1736,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   807,
     601,     0,     0,   607,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   837,   341,  2036,   200,   201,     0,     0,
       0,     0,     0,     0,   859,     0,   632,  1414,     0,     0,
       0,   971,   565,   332,   566,   667,   567,   192,   637,     0,
     193,   987,     0,  1458,   195,   196,   681,   198, -2054,     0,
    1437,     0,     0,     0,   313,   314, -2060,     0,   316,  1356,
       0,  2444,   240,     0,  1971,     0,   865,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   600,     0,  1517,     0,
    1546,     0,     0,     0,     0,  2473,     0,     0,  1995,     0,
       0,     0,  1515,     0,  1544,  1571,  2098,     0,     0,     0,
       0,     0,     0,     0,     0,  1492,     0,   631,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2131,     0,     0,   327,     0,
       0,     0,     0,     0,  1521,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2053,
       0,     0,     0,     0,     0,     0,   680,     0,     0,     0,
       0,  1012,  1549,     0,     0,     0,     0,     0,     0,     0,
       0,  2526,     0,  2557,     0,  1011,     0,  1455,     0,   800,
     918,   332,  1032,   191,     0,   192,     0,     0,   193,     0,
       0,   194,     0,   196,     0,   198,  1031,     0,     0,     0,
       0,     0,   313,   314,   315,  1365,   316,     0,     0,     0,
       0,  2116,     0,     0,     0,  1049,     0,     0,     0,     0,
       0,   326,     0,     0,     0,  1979,     0,  2003,     0,     0,
       0,     0,     0,     0,  1510,   341,     0,   200,   201,  1360,
       0,     0,     0,     0,  2149,     0,     0,     0,     0,     0,
       0,     0,   826,     0,     0,     0,     0,     0,     0,     0,
       0,   822,     0,     0,     0,  1654,   860,  1539,  2064,  1568,
       0,     0,     0,   333,   334,   335,   336,     0,   338,  1674,
       0,     0,  1104,     0,     0,     0,     0,     0,   821,   453,
     454,   455,     0,     0,  1794,  2287,     0,     0,     0,     0,
       0,   856,     0,     0,  1691,     0,     0,     0,     0,     0,
     606,     0,     0,   971,   565,   332,   566,   191,   567,   192,
       0,     0,   193,     0,   605,   194,   195,   196,   197,   198,
     199,   855,     0,     0,     0,     0,   313,   314,   315,     0,
     316,     0,     0,     0,   240,   636,     0,     0,     0,  2128,
    2255,     0,     0,     0,     0,     0,     0,     0,  1519,   635,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1639,     0,     0,   374,   375,     0,  2161,     0,
       0,     0,  1878,   341,  1667,   200,   201,  1548,  1843,     0,
       0,  1242,  1886,  1887,     0,  1888,     0,     0,   683,     0,
     601,     0,  1842,     0,     0,  1241,     0,     0,     0,     0,
    1871,     0,     0,  1263,     0,  1573,     0,     0,     0,     0,
       0,     0,     0,     0,  1870,  1918,  1919,  1262,     0,  1923,
       0,   632,     0,   938,     0,     0,     0,     0,   971,   565,
     332,   566,   191,   567,   192,     0,     0,   193,     0,     0,
     194,   195,   196,     0,   198,   199,  1949,     0,     0,   987,
       0,   313,   314,   315,   994,   316,  1014,     0,     0,  1034,
       0,  1051,     0,  1065,     0,  1078,     0,  2265,     0,     0,
     681,     0,     0,     0,  1836,     0,     0,  1643,     0,     0,
    1865,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,  1093,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,  1676,   200,
     201,     0,     0,     0,     0,     0,  1363,     0,     0,     0,
       0,     0,  1977,     0,  2001,  1120,     0,  2444,     0,     0,
       0,     0,     0,     0,     0,   327,  1976,     0,  2000,     0,
       0,   782,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1971,  1361,     0,     0,  2473,     0,     0,     0,
       0,     0,     0,   824,  1725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1736,  1671,   859,     0,  2061,
       0,  1995,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2053,     0,
    2759,     0,   822,     0,     0,     0,     0,     0,     0,  2526,
       0,     0,     0,     0,  1458,     0,     0,     0,     0,     0,
       0,   600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2795,   341,     0,   200,   201,     0,     0,     0,  2036,
    2557,     0,     0,     0,     0,   856,  2126,     0,     0,     0,
       0,     0,     0,     0,     0,  1517,   631,     0,     0,     0,
    2125,  2506,     0,  2537,     0,  1414,     0,  1437,     0,  1515,
       0,     0,     0,     0,     0,  2159,     0,     0,     0,     0,
       0,     0,     0,     0,  1546,     0,     0,  2116,     0,  2158,
    2149,  2176,  2177,     0,     0,   680,     0,     0,  1544,  1838,
       0,  2098,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1867,     0,     0,  1492,     0,  1571,     0,     0,     0,
    2255,     0,     0,     0,  2131,     0,   564,   565,   332,   566,
     667,   567,   192,     0,     0,   193,     0,     0,     0,   195,
     196,     0,   198, -2010,  2274,     0,     0,  1521,     0,  1549,
       0,     0,     0,  1012,     0,     0,  1032,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1011,     0,     0,
    1031,     0,  1049,     0,     0,     0,     0,     0,  2263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1365,     0,  2456,     0,     0,  1979,     0,     0,
       0,     0,  2444,     0,     0,  2473,     0,     0,     0,     0,
       0,     0,     0,  1360,     0,     0,     0,     0,  2485,  1674,
       0,  2003,     0,     0,     0,   917,   565,   332,   566,   191,
     567,   192,  2759,     0,   193,     0,     0,     0,     0,   196,
     197,   198,     0,     0,     0,     0,     0,     0,  2328,     0,
       0,     0,     0,     0,     0,     0,     0,   251,  2526,     0,
     821,     0,     0,     0,  1654,     0,     0,     0,  2795,     0,
       0,     0,     0,     0,   855,     0,  2057,     0,     0,     0,
    2287,     0,  2064,     0,     0,     0,     0,   836,     0,   332,
    1672,   191,   504,   192,  2557,  1691,   193,     0,     0,   194,
    2365,   196,   197,   198,  2535,     0,  2566,  2371,     0,     0,
     313,   314,   315,     0,   316,     0,     0,     0,  1413,     0,
       0,     0,   336,   337,     0,     0,     0,     0,     0,     0,
     341,     0,   200,   201,     0,   601,     0,     0,     0,     0,
       0,     0,     0,     0,  2128,     0,     0,     0,     0,   374,
     375,     0,     0,     0,   504,     0,   505,  2120,   507,     0,
       0,     0,     0,     0,     0,     0,     0,  1519,  1843,     0,
     632,     0,     0,     0,     0,   508,     0,  2161,   509,     0,
       0,     0,  1842,     0,   336,   337,  2153,     0,  2400,     0,
       0,  1242,     0,     0,     0,     0,     0,  1871,     0,     0,
    1548,     0,  1573,     0,     0,  1241,     0,     0,     0,   681,
       0,  1870,     0,  1839,     0,     0,     0,     0,   505,  1263,
     507,     0,     0,     0,     0,     0,     0,     0,  2417,   341,
       0,   200,   201,  1262,     0,  1868,     0,   508,     0,     0,
     509,     0,     0,  2424,     0,  2759,     0,     0,  2795,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2265,     0,  2259,     0,     0,  2036,     0,
    2739,   341,     0,   200,   201,     0,     0,     0,     0,  2506,
       0,  2454,     0,     0,  1977,  1643,     0,     0,     0,     0,
       0,     0,     0,  1363,     0,  2453,     0,  1676,  1976,     0,
       0,  2775,     0,     0,     0,  2483,  1671,     0,  2001,     0,
    2537,     0,     0,     0,     0,     0,     0,  1361,     0,  2482,
       0,     0,  2000,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1725,     0,  1736,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2573,  2574,     0,  2098,     0,     0,
    2131,   503,     0,   332,   822,   250,     0,   192,     0,     0,
     239,     0,     0,     0,     0,   196,   197,     0,   856,     0,
    2058,     0,     0,  2061,     0,     0,     0,     0,     0,     0,
       0,  2533,  1413,  2564,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2531,     0,  2562,     0,     0,
       0,  1458,     0,     0,  2287,     0,     0,     0,     0,     0,
       0,     0,     0,   374,   375,     0,     0,     0,   504,     0,
       0,  2126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2125,     0,     0,     0,     0,
    2456,  2604,     0,     0,  1517,     0,     0,     0,   336,   337,
       0,  2121,     0,     0,  2159,     0,     0,     0,  1515,  1838,
       0,     0,     0,     0,   503,  1979,   332,     0,  2158,  2485,
     192,     0,     0,   239,     0,     0,     0,  1546,   196,   197,
    2154,     0,   505,     0,   507,     0,     0,     0,  1867,     0,
       0,  1544,     0,  1571,  2003,   240,     0,     0,     0,     0,
       0,   508,  2739,     0,   509,     0,     0,     0,     0,     0,
       0,  2064,     0,  2772,     0,     0,     0,     0,     0,     0,
       0,     0,  2535,     0,     0,     0,   374,   375,  2506,     0,
       0,   504,     0,     0,     0,     0,     0,     0,  2775,     0,
       0,     0,     0,     0,  2808,     0,     0,     0,     0,     0,
       0,     0,     0,  2566,     0,   341,     0,   200,   201,     0,
       0,   336,   337,     0,  2537,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2263,     0,     0,     0,     0,  2260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1360,     0,  2448,     0,     0,   505,     0,   507,     0,     0,
    2128,     0,  2674,  2161,  2676,     0,     0,     0,  1674,     0,
       0,     0,     0,     0,   508,     0,  2477,   509,     0,     0,
    1672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2690,     0,     0,     0,
       0,     0,     0,  2265,     0,     0,     0,     0,     0, -1850,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2696,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
     200,   201,     0,     0,     0,     0,     0,  2705,     0,     0,
    2057,     0,     0,     0,     0,  2710,     0,     0,     0,  2715,
       0,     0,     0,     0,  1843,     0,     0,     0,     0,     0,
    1871,     0,     0,     0,     0,     0,     0,     0,  1842,     0,
       0,     0,     0,     0,  1870,  2739,     0,     0,  2775,     0,
       0,     0,     0,     0,     0,  2456,     0,     0,  2485,     0,
       0,     0,     0,     0,     0,   354,     0,     0,     0,   381,
       0,     0,  2120,     0,   468,     0,     0,  2454,     0,     0,
       0,     0,     0,     0,     0,  2772,  2723,     0,     0,     0,
       0,  2453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1977,     0,     0,  2153,  2483,     0,     0,     0,
       0,  2535,     0,  1839,     0,     0,  1976,     0,     0,     0,
    2482,  2808,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2001,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1868,     0,     0,  2000,     0,  2566,     0,     0,
    2770,     0,     0,     0,     0,     0,     0,     0,     0,  2533,
       0,     0,  2061,     0,  2768,     0,     0,     0,     0,     0,
       0,     0,     0,  2531,     0,     0,     0,     0,     0,     0,
       0,  2806,     0,     0,     0,     0,  2824,     0,     0,     0,
    2564,     0,     0,     0,     0,  2804,     0,     0,     0,  2835,
       0,     0,     0,     0,  2562,     0,     0,     0,     0,     0,
       0,  2259,  2846,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2126,     0,     0,
    2159,     0,     0,     0,  1361,  1671,  2449,     0,     0,     0,
       0,  2125,     0,     0,  2158,     0,     0,     0,     0,     0,
       0,   354,     0,     0,     0,     0,  2885,  2886,  2887,  2888,
    2478,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2904,     0,     0,     0,     0,
     762,   775,     0,     0,  2263,   381,     0,     0,  2772,     0,
       0,  2808,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2945,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2058,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1838,     0,     0,     0,     0,
       0,  1867,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2454,     0,     0,  2483,     0,     0,     0,   813,
       0,     0,     0,     0,     0,   468,  2453,     0,     0,  2482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2770,     0,     0,     0,  2121,     0,  2448,     0,
       0,     0,     0,     0,     0,     0,  2768,     0,     0,     0,
       0,     0,   878,     0,     0,     0,     0,  2971,  2533,  2973,
     931,     0,     0,     0,     0,     0,     0,  2477,  2806,  2154,
       0,     0,  2531,     0,     0,     0,     0,     0,     0,   514,
     530,  2983,  2804,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2564,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2562,  2057,
       0,  2763,     0,   978,  1001,     0,  1022,  1041,  1058,  1072,
    3005,  1087,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1113,     0,  2799,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2120,     0,
       0,  2153,     0,     0,     0,     0,     0,     0,     0,  1672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3063,     0,     0,
       0,  2259,     0,     0,  1233,  2770,  1255,     0,  2806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2768,
       0,     0,  2804,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,     0,     0,
     385,     0,     0,     0,     0,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,     0,     0,     0,     0,  1839,
       0,  1352,     0,     0,     0,  1868,   762,     0,     0,     0,
       0,     0,     0,  2448,     0,     0,  2477,     0,     0,   775,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,     0,     0,
       0,     0,     0,  2763,     0,     0,     0,     0,     0,     0,
     813,     0,  2449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   468,  2799,
       0,  2478,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   838,     0,     0,   866,     0,
       0,     0,   906,     0,     0,     0,   919,     0,     0,     0,
       0,  1427,  1450,     0,     0,   514,     0,     0,     0,     0,
       0,   878,     0,  2058,     0,  2764,     0,     0,     0,     0,
       0,     0,   530,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2800,     0,     0,     0,
       0,  1505,   358,  1534,  1562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   931,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   768,   783,     0,     0,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2121,     0,     0,  2154,     0,     0,     0,     0,
       0,   978,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1001,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2260,  2763,     0,     0,  2799,
       0,     0,     0,   978,     0,  1022,     0,     0,     0,     0,
     825,     0,     0,     0,     0,     0,   474,     0,     0,     0,
       0,     0,     0,     0,  1041,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1058,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   883,     0,  1072,     0,     0,     0,     0,
       0,   937,     0,     0,     0,     0,     0,     0,  1634,     0,
    1087,     0,     0,     0,     0,     0,     0,  2449,     0,     0,
    2478,     0,     0,     0,     0,     0,     0,     0,  1663,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1113,     0,
       0,     0,     0,     0,     0,     0,     0,  2764,     0,     0,
       0,     0,  1704,     0,   993,  1013,     0,  1033,  1050,  1064,
    1077,     0,  1092,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1119,     0,  2800,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   838,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1415,  1438,     0,
       0,  1831,     0,     0,  1233,     0,     0,   866,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1860,     0,     0,  1255,     0,     0,     0,
    1472,  1481,   526,     0,     0,  1243,   906,  1264,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1493,     0,  1522,
    1550,     0,     0,     0,     0,     0,     0,   604,     0,     0,
     919,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     514,     0,   530,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   358,     0,     0,     0,     0,
       0,     0,  1364,     0,     0,     0,     0,   768,     0,     0,
    2764,     0,     0,  2800,     0,     0,     0,     0,     0,     0,
     783,     0,     0,     0,     0,  1352,     0,   843,     0,     0,
     871,   894,     0,     0,     0,     0,   385,     0,   924,     0,
       0,     0,     0,     0,     0,  1966,     0,  1990,   762,     0,
     775,   825,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   813,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,     0,     0,     0,     0,  2049,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1427,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1435,  1459,     0,     0,     0,     0,     0,     0,
       0,     0,   883,  1450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   878,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1692,     0,
       0,     0,  1518,     0,  1547,  1572,     0,     0,     0,  2111,
       0,     0,     0,     0,     0,   937,     0,     0,  1505,     0,
       0,     0,     0,     0,     0,     0,     0,   522,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2144,     0,
       0,     0,     0,     0,     0,     0,     0,  1534,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   993,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1562,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1013,     0,     0,     0,     0,
       0,     0,     0,   931,     0,     0,     0,     0,   858,     0,
       0,   882,     0,     0,   993,   911,  1033,     0,     0,   936,
       0,     0,     0,     0,     0,     0,     0,     0,   526,     0,
       0,     0,     0,     0,   978,  1050,  1001,     0,     0,  1022,
       0,  1041,     0,  1058,     0,  1072,     0,  2250,     0,     0,
       0,     0,  1064,     0,     0,     0,     0,  1634,     0,     0,
       0,     0,     0,     0,     0,     0,  1077,     0,     0,     0,
       0,     0,  1087,  1010,     0,     0,     0,     0,     0,  1642,
       0,  1092,     0,     0,     0,     0,     0,     0,  1663,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1675,
       0,     0,     0,     0,     0,  1113,     0,   604,     0,  1119,
       0,     0,     0,     0,     0,     0,     0,     0,  2302,     0,
       0,     0,     0,  1709,     0,     0,     0,  1704,     0,     0,
       0,   843,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   761,   774,     0,     0,     0,  1420,
    1443,     0,     0,     0,     0,     0,     0,     0,     0,   871,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   894,     0,     0,     0,     0,
       0,     0,  1474,  1483,     0,     0,     0,     0,     0,     0,
       0,     0,   838,     0,  2037,     0,     0,     0,     0,  1498,
       0,  1527,  1555,  1240,     0,     0,  1415,     0,     0,     0,
       0,     0,   924,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1844,     0,     0,  1243,     0,     0,     0,  1438,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1872,   866,     0,  1264,     0,     0,
       0,  1831,     0,     0,  1472,     0,     0,     0,     0,     0,
       0,     0,     0,  1481,     0,     0,   877,     0,     0,     0,
       0,     0,     0,   906,  1233,  2099,     0,     0,     0,     0,
    1860,     0,     0,   522,  1493,     0,     0,     0,     0,     0,
       0,     0,     0,   760,   773,     0,     0,     0,     0,     0,
       0,     0,  1255,     0,  2132,     0,     0,  1379,     0,  1381,
    1387,  1389,     0,  1522,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1550,     0,     0,     0,     0,  1364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   919,
       0,     0,   858,     0,     0,     0,  1978,     0,  2002,   768,
       0,   783,     0,     0,     0,     0,     0,     0,     0,     0,
    1433,  1457,  1352,     0,  2439,     0,     0,  1966,     0,     0,
     882,     0,     0,   825,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2468,  2063,
    1697,  1990,     0,  1476,  1485,   876,     0,     0,     0,   911,
       0,  1435,     0,     0,     0,     0,     0,     0,     0,     0,
    1514,     0,  1543,  1570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   936,  1459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     883,     0,     0,   526,     0,     0,     0,     0,     0,     0,
       0,     0,  2049,     0,  2288,     0,     0,     0,     0,     0,
       0,     0,     0,  1692,     0,     0,     0,     0,     0,     0,
    2127,     0,     0,     0,  2521,     0,  2552,     0,  1427,  1518,
    1450,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1010,     0,     0,     0,     0,     0,  2160,
       0,     0,     0,     0,     0,  1351,     0,     0,  1547,     0,
     761,     0,     0,     0,  2111,     0,     0,     0,     0,     0,
       0,     0,     0,   774,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1572,  1505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2144,     0,     0,
       0,     0,     0,     0,   937,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1534,     0,  1562,     0,     0,     0,     0,  1641,     0,     0,
       0,     0,     0,     0,     0,   993,     0,  1013,     0,     0,
    1033,     0,  1050,     0,  1064,     0,  1077,     0,  2264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1642,     0,
       0,     0,     0,     0,     0,  1426,  1449,     0,     0,     0,
       0,  1708,     0,  1092,     0,   877,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1675,
       0,     0,   604,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2250,  1350,     0,  1119,     0,     0,   760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2309,
       0,     0,   773,     0,   843,  1634,  2042,     0,  1709,     0,
       0,     0,     0,     0,     0,     0,     0,  1663,  1420,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   522,     0,
       0,     0,     0,  2302,     0,     0,     0,     0,     0,     0,
       0,  1443,     0,     0,     0,     0,     0,     0,  1704,     0,
    1841,     0,     0,  1240,     0,     0,     0,   871,     0,     0,
       0,     0,   894,     0,     0,     0,  1474,     0,     0,     0,
       0,     0,     0,     0,     0,  1483,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2104,     0,     0,
       0,     0,     0,     0,  1425,  1448,  1498,     0,     0,     0,
       0,     0,     0,     0,   876,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2137,  1831,     0,     0,
       0,     0,     0,  1860,     0,  1527,     0,     0,     0,     0,
       0,     0,  1844,     0,     0,     0,     0,     0,  2037,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1555,     0,  1243,     0,     0,     0,     0,
    2507,  1872,  2538,     0,  1415,     0,  1438,     0,     0,     0,
    2439,   924,     0,     0,     0,     0,  1472,     0,     0,  1481,
       0,     0,     0,  1264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1975,  1966,  1999,     0,     0,  2468,
    2099,     0,     0,     0,  2009,     0,  1703,     0,     0,     0,
       0,  1387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1493,  1990,     0,     0,     0,     0,     0,
       0,     0,     0,  2132,     0,   858,     0,  2060,     0,     0,
       0,  2049,     0,  2754,     0,     0,     0,     0,     0,  1433,
       0,     0,  2521,     0,     0,     0,  1522,     0,  1550,     0,
       0,     0,     0,  1364,     0,  2455,     0,     0,  1978,     0,
       0,     0,  1457,     0,  2790,     0,     0,     0,     0,     0,
       0,     0,     0,  2552,     0,     0,  2293,     0,   882,  2484,
       0,     0,  2002,     0,     0,  1697,     0,  1476,   839,     0,
       0,   867,   891,     0,     0,     0,  1485,     0,     0,   920,
       0,     0,     0,     0,     0,     0,   911,     0,  2124,     0,
       0,     0,     0,     0,     0,     0,     0,  1514,     0,     0,
    2111,     0,     0,  2144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2157,     0,     0,
       0,     0,     0,  2063,     0,  1702,  1543,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2250,     0,  2534,     0,  2565,     0,  1435,
       0,  1459,     0,     0,  1570,     0,     0,  2302,     0,  2288,
       0,     0,     0,     0,     0,     0,  2352,     0,     0,     0,
       0,     0,   936,     0,  1692,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1351,
       0,     0,     0,     0,     0,  1010,     0,     0,  1518,     0,
       0,     0,     0,     0,     0,     0,  2262,     0,  2160,  1964,
       0,  1988,   761,     0,   774,  2439,  1641,     0,  2468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1547,     0,  1572,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   840,     0,  2754,   868,     0,     0,     0,
       0,     0,  2048,     0,   921,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1426,     0,     0,     0,     0,     0,
       0,  2521,     0,     0,     0,     0,     0,  2308,     0,     0,
       0,  2790,     0,     0,     0,     0,  1708,  1449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   877,     0,     0,     0,  2552,     0,     0,
       0,     0,     0,     0,  2264,     0,     0,     0,     0,     0,
       0,     0,     0,   841,     0,     0,   869,     0,     0,     0,
       0,     0,     0,     0,   922,     0,  1642,     0,  1350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1675,     0,
       0,     0,     0,     0,     0,     0,     0,  2037,  1963,  2740,
    1987,   760,     0,   773,  2309,     0,     0,     0,  2507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1709,
       0,     0,     0,   842,     0,     0,   870,     0,     0,     0,
    2776,     0,     0,     0,   923,     0,     0,     0,     0,  2538,
    2042,  2047,     0,     0,     0,     0,     0,     0,     0,     0,
    1841,     0,   839,  1425,     0,     0,     0,     0,     0,     0,
       0,     0,  2512,     0,  2543,     0,  1420,     0,  1443,     0,
    1416,  1439,     0,  1240,     0,     0,  1448,     0,  1474,     0,
     867,  1483,     0,     0,     0,     0,  2099,     0,  1844,  2132,
       0,     0,   876,     0,  1872,     0,   891,     0,  2754,     0,
       0,  2790,  2104,  1473,  1482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1494,     0,  1523,  1551,     0,  1498,     0,     0,     0,     0,
       0,     0,     0,   920,     0,  2137,     0,     0,     0,     0,
       0,  2455,     0,  2288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1527,     0,
    1555,     0,     0,     0,     0,     0,  1978,     0,     0,     0,
    2484,     0,  2301,     0,     0,     0,     0,     0,     0,     0,
       0,  1703,     0,  2452,     0,     0,  1975,     0,     0,     0,
       0,     0,     0,     0,     0,  2002,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2481,     0,     0,
    1999,     0,  2063,     0,  2771,     0,     0,     0,     0,     0,
       0,     0,     0,  2534,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   840,  1387,     0,
       0,  2740,     0,     0,     0,  2807,     0,     0,     0,     0,
       0,     0,     0,     0,  2565,  1417,  1440,     0,     0,     0,
       0,     0,     0,     0,     0,   868,     0,  2507,     0,     0,
       0,  2060,     0,     0,     0,     0,     0,  2776,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2293,     0,  2530,     0,  2561,     0,  1433,     0,  1457,
       0,  2127,     0,  2538,  2160,  1495,  1697,  1524,  1552,  1476,
       0,     0,  1485,     0,     0,     0,     0,   841,   921,     0,
       0,  2300,     0,     0,     0,     0,     0,     0,     0,     0,
    1702,  1693,     0,  2124,     0,  1418,  1441,     0,     0,     0,
       0,     0,     0,     0,  2264,   869,     0,     0,     0,     0,
    2352,     0,     0,     0,     0,     0,  1514,     0,  2309,     0,
       0,     0,     0,     0,     0,     0,  2157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   842,     0,     0,
       0,     0,     0,     0,     0,  1496,     0,  1525,  1553,  1543,
       0,  1570,     0,     0,     0,  1419,  1442,     0,   922,     0,
       0,     0,     0,     0,     0,   870,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2455,     0,     0,  2484,
       0,     0,     0,     0,     0,     0,  1351,     0,  2437,     0,
       0,  1964,     0,     0,     0,  1497,     0,  1526,  1554,     0,
       0,     0,     0,     0,  2740,     0,  2771,  2776,   923,     0,
       0,     0,  2466,     0,     0,  1988,     0,     0,     0,     0,
       0,     0,  2262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2534,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2807,     0,  1641,     0,     0,     0,     0,  2042,
       0,  2745,     0,     0,     0,     0,     0,     0,     0,     0,
    2512,     0,     0,     0,     0,     0,  1694,     0,  2565,     0,
       0,     0,  2308,     0,     0,     0,  2048,     0,     0,     0,
       0,     0,  2781,     0,     0,     0,     0,  1708,     0,     0,
       0,  2543,     0,     0,     0,     0,     0,     0,  2519,     0,
    2550,     0,  1426,     0,  1449,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1350,     0,  2436,  2104,     0,
    1963,  2137,     0,     0,     0,     0,  1695,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1841,     0,     0,     0,
       0,  2465,     0,     0,  1987,   839,     0,  2038,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1416,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2293,     0,     0,     0,     0,
       0,     0,  1439,     0,     0,     0,  1696,     0,     0,  2452,
       0,     0,   929,     0,     0,     0,     0,     0,   867,  2771,
       0,     0,  2807,   891,     0,  2047,     0,  1473,  2352,     0,
       0,     0,     0,     0,  1975,     0,  1482,     0,  2481,     0,
       0,     0,     0,     0,     0,     0,     0,  2518,  2100,  2549,
       0,  1425,     0,  1448,     0,     0,     0,  1494,     0,     0,
       0,     0,     0,  1999,     0,   976,   999,     0,  1020,  1039,
    1056,  1070,     0,  1085,     0,     0,     0,  2133,     0,     0,
    2060,     0,  2767,     0,     0,     0,  1523,     0,     0,     0,
       0,  2530,     0,  2745,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2803,  1551,     0,     0,     0,     0,  2512,
       0,     0,  2561,     0,     0,     0,     0,  2301,     0,  2781,
       0,     0,   920,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1703,     0,     0,     0,     0,     0,     0,     0,
     840,     0,  2039,     0,     0,  2543,     0,     0,     0,     0,
       0,     0,     0,     0,  1417,     0,     0,     0,     0,  2124,
       0,     0,  2157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1440,     0,     0,
       0,     0,     0,     0,     0,     0,  1231,     0,  1253,     0,
       0,     0,     0,   868,     0,     0,     0,     0,     0,     0,
       0,     0,  2262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2308,     0,     0,     0,
     841,     0,  2040,  2101,     0,     0,     0,     0,     0,     0,
       0,     0,  1495,     0,  1418,     0,     0,  2289,     0,     0,
       0,     0,     0,     0,     0,     0,  1693,     0,     0,     0,
       0,     0,  2134,     0,  2437,     0,     0,  1441,     0,     0,
       0,  1524,     0,     0,     0,     0,  2300,     0,     0,     0,
       0,     0,     0,   869,     0,     0,     0,     0,     0,  1964,
     842,  1702,  2041,  2466,  2452,     0,     0,  2481,     0,  1552,
       0,     0,     0,     0,  1419,     0,  2745,     0,     0,  2781,
       0,     0,     0,  2102,     0,     0,     0,   921,  1988,     0,
       0,     0,  1496,     0,  2767,     0,     0,  1442,     0,     0,
       0,     0,     0,     0,     0,  2048,     0,  2752,     0,     0,
       0,     0,  2135,   870,     0,     0,  2519,     0,     0,     0,
    2530,  1525,     0,     0,     0,     0,     0,     0,     0,     0,
    2803,     0,     0,     0,     0,     0,     0,     0,  2788,     0,
       0,     0,     0,  2103,     0,     0,     0,  2550,     0,  1553,
       0,     0,  1497,     0,     0,     0,  2561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   922,     0,     0,
       0,     0,  2136,     0,     0,     0,     0,     0,     0,     0,
       0,  1526,     0,  2436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1503,     0,  1532,  1560,     0,     0,     0,
       0,     0,  2290,     0,     0,     0,   929,     0,  1963,  1554,
       0,  1694,  2465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   923,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2301,     0,   976,  2047,     0,  2751,     0,     0,     0,
       0,     0,     0,     0,     0,  2518,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   999,     0,     0,     0,
       0,     0,  2291,     0,     0,     0,     0,  2787,     0,     0,
       0,  1695,     0,     0,     0,   976,  2549,  1020,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2767,     0,     0,
    2803,     0,     0,     0,     0,     0,  1039,     0,     0,  2437,
       0,     0,  2466,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1056,     0,     0,     0,     0,     0,     0,
       0,     0,  2292,     0,     0,     0,     0,  1070,     0,  2752,
       0,  1696,     0,     0,     0,     0,     0,     0,     0,     0,
    1632,     0,  1085,     0,     0,     0,     0,     0,     0,     0,
       0,  2038,     0,     0,     0,  2519,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2788,     0,     0,     0,     0,
       0,     0,     0,  2508,     0,  2539,     0,  1416,     0,  1439,
    2300,     0,     0,     0,     0,     0,     0,     0,     0,  1473,
       0,  2550,  1482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2133,     0,  2436,     0,
       0,  2465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1523,
       0,  1551,     0,     0,     0,     0,     0,     0,  2751,     0,
       0,     0,     0,  1829,     0,     0,  1231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2518,  1858,     0,     0,  1253,     0,
       0,     0,     0,     0,  2787,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2039,     0,     0,     0,
    2549,     0,  2752,     0,     0,  2788,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2509,     0,
    2540,     0,  1417,     0,  1440,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2101,     0,
       0,     0,  2289,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2040,  1693,     0,     0,
       0,  1495,     0,     0,     0,     0,     0,  1962,     0,  1986,
       0,  2134,     0,     0,     0,     0,     0,     0,  2510,     0,
    2541,     0,  1418,     0,  1441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1524,     0,  1552,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2041,     0,  2102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2751,     0,     0,  2787,     0,     0,     0,  2511,     0,
    2542,  1496,  1419,     0,  1442,     0,     0,     0,     0,     0,
       0,  2135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1525,     0,  1553,     0,  2103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2109,     0,     0,     0,     0,     0,     0,     0,     0,
    1503,  1497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2136,     0,     0,     0,     0,     0,     0,     0,     0,
    2142,     0,     0,   930,     0,     0,     0,  2290,     0,  1532,
       0,     0,     0,     0,  1526,     0,  1554,     0,     0,     0,
       0,     0,  1694,     0,     0,     0,     0,     0,     0,     0,
    2038,     0,  2741,     0,     0,     0,     0,  1560,     0,     0,
       0,  2508,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   929,   977,  1000,     0,  1021,
    1040,  1057,  1071,  2777,  1086,     0,     0,     0,     0,     0,
       0,     0,  2539,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   976,  2291,   999,     0,
       0,  1020,     0,  1039,     0,  1056,     0,  1070,     0,  2248,
       0,     0,  1695,     0,     0,     0,     0,     0,     0,  1632,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2100,
       0,     0,  2133,     0,  1085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2292,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1696,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1232,     0,  1254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2039,     0,  2742,     0,     0,
       0,     0,     0,     0,     0,     0,  2509,   932,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2778,     0,
       0,     0,     0,     0,     0,     0,     0,  2540,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2741,     0,     0,     0,     0,     0,
     979,  1002,     0,  1023,  1042,  1059,  1073,     0,  1088,     0,
       0,     0,     0,     0,     0,  2040,     0,  2743,     0,     0,
    2508,     0,     0,  1829,  2101,     0,  2510,  2134,     0,     0,
    2777,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1231,     0,  2779,     0,
       0,     0,  1858,     0,     0,     0,  2539,  2541,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1253,  2041,     0,  2744,     0,     0,
       0,  2290,     0,     0,     0,     0,  2511,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2102,     0,     0,  2135,  2780,     0,
       0,     0,     0,     0,     0,     0,     0,  2542,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,  1256,  1504,     0,  1533,  1561,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   930,     0,     0,
       0,     0,     0,     0,     0,     0,  2435,     0,     0,  1962,
       0,  2291,     0,     0,  2103,     0,     0,  2136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2742,
    2464,     0,     0,  1986,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   977,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2509,     0,  2741,     0,     0,
    2777,     0,     0,     0,     0,  2778,     0,  1000,     0,     0,
       0,  2292,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   977,     0,  1021,     0,
       0,  2540,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1040,     0,  2743,
       0,     0,     0,     0,     0,     0,  2517,     0,  2548,     0,
       0,     0,     0,     0,  1057,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2510,     0,     0,  1071,     0,
       0,     0,     0,     0,     0,  2779,     0,     0,     0,     0,
       0,  1633,     0,  1086,     0,     0,  2109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2744,
       0,  2541,     0,     0,     0,     0,     0,     0,     0,  1503,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2142,
       0,     0,     0,     0,     0,  2511,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2780,     0,     0,  1506,     0,
    1535,  1563,  1532,     0,  1560,     0,     0,     0,     0,     0,
       0,   932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2742,     0,     0,  2778,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1002,     0,     0,  1830,  2248,     0,  1232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,  1023,     0,     0,     0,  1859,  1632,     0,  1254,
       0,     0,  2743,     0,     0,  2779,     0,     0,     0,     0,
       0,  1042,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1059,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1073,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1635,     0,  1088,     0,     0,
       0,     0,  2744,     0,     0,  2780,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1829,
       0,     0,     0,     0,     0,  1858,     0,     0,  1965,     0,
    1989,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1962,     0,     0,
       0,  2464,     0,     0,     0,     0,     0,     0,  1832,     0,
       0,  1234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1986,     0,     0,     0,
    1861,     0,     0,  1256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2750,     0,     0,     0,     0,
       0,     0,  2110,     0,  2517,     0,     0,     0,     0,     0,
       0,  1504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2786,     0,     0,     0,
       0,  2143,     0,     0,     0,  2548,     0,     0,     0,     0,
    1533,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1561,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2109,     0,     0,  2142,   930,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1967,     0,  1991,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   977,     0,  1000,
       0,     0,  1021,     0,  1040,  2248,  1057,     0,  1071,     0,
    2249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1086,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2435,     0,     0,
    2464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2112,     0,     0,     0,
       0,     0,     0,     0,     0,  1506,     0,  2750,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2145,     0,     0,     0,     0,
       0,     0,     0,  2517,  1535,     0,     0,     0,     0,     0,
       0,     0,     0,  2786,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1563,     0,     0,     0,     0,     0,     0,  2548,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     932,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1830,     0,     0,     0,     0,     0,
       0,   979,     0,  1002,     0,     0,  1023,     0,  1042,     0,
    1059,     0,  1073,     0,  2251,     0,     0,  1232,     0,     0,
       0,     0,     0,  1859,  1635,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,  1254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2750,     0,     0,  2786,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2438,     0,     0,
    1965,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2467,     0,     0,  1989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1832,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2520,     0,  2551,
       0,  1234,     0,     0,     0,     0,     0,  1861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1256,
       0,     0,     0,     0,     0,     0,     0,  2110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1533,     0,  1561,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2440,     0,     0,  1967,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2469,     0,     0,  1991,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1633,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2522,     0,  2553,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1830,     0,     0,     0,     0,     0,  1859,  1535,     0,  1563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2438,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1965,     0,
       0,     0,  2467,     0,     0,     0,     0,     0,     0,     0,
    2251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1989,     0,     0,
       0,     0,  1635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2753,     0,     0,     0,
       0,     0,     0,     0,     0,  2520,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2789,     0,     0,
       0,     0,     0,     0,     0,     0,  2551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2110,     0,     0,  2143,     0,     0,     0,
       0,     0,     0,     0,  1832,     0,     0,     0,     0,     0,
    1861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2440,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1967,     0,     0,     0,  2469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1991,     0,     0,     0,     0,     0,     0,  2438,     0,
       0,  2467,     0,     0,     0,     0,     0,     0,     0,     0,
    2755,     0,     0,     0,     0,     0,     0,     0,     0,  2522,
       0,     0,     0,     0,     0,     0,     0,     0,  2753,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2791,     0,     0,     0,     0,     0,     0,     0,     0,
    2553,     0,     0,     0,  2520,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2789,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2551,     0,     0,     0,     0,     0,     0,  2112,     0,     0,
    2145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2440,     0,     0,  2469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2753,     0,     0,  2789,     0,     0,     0,     0,     0,
       0,     0,  2755,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2522,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2791,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2553,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,  2755,     0,     0,  2791
};

static const yytype_int16 yycheck[] =
{
     124,   153,   126,   153,   153,   153,   168,   153,   153,   153,
     153,   135,   136,   372,   138,   139,   582,   373,   190,  1589,
    1819,   168,   146,   147,   451,  1126,  1410,   151,  1270,   498,
     151,   156,   156,  1125,  1126,   156,  1125,  1126,  1819,   156,
    1126,   165,  1126,   913,   216,   915,   916,  1133,  1126,  1899,
     965,  1135,   967,   451,  2212,  1422,  1134,  1100,   926,  1529,
    1629,  1500,  1445,   973,   236,  1248,   190,  1684,  1347,  1557,
    1384,   494,  1186,  1017,  1727,  1520,   873,   802,   726,   203,
    1226,   139,   845,   902,   889,  1036,  1053,   758,  1110,  1660,
    1082,   590,   216,   648,   218,   621,   569,   451,  1852,  1470,
    1823,  1983,   996,   662,  1223,  1699,  1131,  1959,  2106,  2044,
    2139,  1479,   236,   156,  1143,   243,  2655,  2656,   771,   243,
     511,  1681,  1067,  1716,   156,   280,  1245,  1125,  1126,   253,
     253,   318,   528,   218,   203,   377,   270,   343,  2245,   365,
     457,   364,   306,  2354,   483,  2295,   270,  2545,  2461,    22,
    2514,     5,    34,  2432,     8,   582,   280,   236,   297,    24,
      28,    13,     7,    33,    46,    47,    30,    32,    50,    51,
      52,   131,    28,  2747,    29,   670,    22,     4,     5,    37,
      17,     8,    61,    10,   582,   195,    22,    23,    24,    25,
      26,    27,    28,  2906,   318,    31,   147,    22,    34,    57,
      36,    37,    38,   559,   124,   175,    29,   147,    62,    45,
      46,    47,    37,    49,    48,  2783,    28,    22,   686,   343,
     688,    26,   280,    28,    58,    37,    31,    29,   582,    34,
      35,    36,    37,    38,    39,    62,   248,   247,   250,    29,
      45,    46,    47,    89,    49,    57,    83,    29,   372,   373,
      29,   372,   373,   377,   214,    29,   377,    26,   195,    28,
      83,   201,    31,   214,    89,   225,    29,   120,    37,    22,
      23,    24,    25,    26,    27,    28,   131,   247,    31,    29,
     116,   117,   118,    36,    37,   121,    24,    29,    26,  1737,
      28,  3004,    16,   372,   214,   120,   132,   133,   134,   145,
     146,    26,    37,    22,    23,    24,    25,    26,    27,    28,
     247,   247,    31,   131,   250,    34,    35,    36,    37,    38,
      39,    29,    57,    29,    29,   148,   451,   451,    29,   175,
     120,    29,   457,   457,   451,   214,   457,   248,   214,   250,
     457,    29,    28,   168,   169,    29,    84,    85,   216,   225,
     214,    37,    22,    23,    24,    25,    26,    27,    28,   214,
     216,    31,   214,   116,   117,   118,   120,   491,   121,   120,
     494,    57,    29,   494,   256,   802,   230,   247,   502,   132,
     133,   134,   247,   256,   546,   230,  2960,   511,   225,     6,
     226,   247,   228,   229,   247,  2963,   214,   147,   256,   758,
     547,   247,   225,   230,   802,   147,   143,  2720,   451,  2773,
     200,  2809,   214,   247,   457,   771,   228,   229,   590,   451,
     256,   200,   247,   228,   229,   457,   200,    29,    29,     7,
     170,   555,   556,   902,   558,   559,   560,   561,  2717,   563,
     863,   864,   120,   225,   256,    48,     7,     8,   802,   621,
     873,   256,   189,   190,   913,    58,   915,   582,   582,   228,
     229,  2619,   225,  2621,   214,   582,   590,   247,   247,   131,
     250,  2682,   214,   226,   214,   228,   229,   202,   203,   204,
     205,   206,   207,   225,   209,     4,     5,   256,   226,   167,
     228,   229,   201,   247,   618,   834,   247,   621,   670,  2649,
       0,   210,   249,   256,   863,    83,   214,   226,   864,   228,
     229,  1753,   249,   830,   638,    24,   124,   225,   126,   225,
     225,   199,   247,    32,   225,   751,   749,   225,  2635,   131,
      22,    23,    24,    25,    26,    27,    28,   256,   146,   582,
     746,   225,   228,   229,  1110,   787,   670,   702,   735,   618,
     582,  2401,   948,   638,   718,   946,   226,   249,   228,   229,
     916,  3100,   686,   691,   688,   699,  2595,   691,  2503,   708,
     148,   695,   695,     4,     5,   699,    22,  3023,   702,    10,
      26,   753,   190,    14,     5,    31,   256,     8,    34,   167,
      36,   670,    38,   249,  2592,   203,   171,    55,    56,    45,
      46,    47,   249,    49,  2486,  2457,   148,   686,   216,   688,
     218,   735,   214,    87,    88,    89,    90,  1660,   247,   195,
     148,   250,   746,   225,  1716,  1098,  1727,  1716,   249,   753,
    1500,  2385,     7,     8,   758,  1727,  3082,   758,  1727,   214,
     120,  1727,   249,  1727,   702,  1408,  1145,   771,  1615,  1727,
     771,  1206,  1644,  1080,  1180,  1677,  2379,  1216,  1306,  1529,
    2044,  1466,  1613,   787,  1461,  2318,   787,  1611,  1136,  1394,
    1489,   247,  1617,  1100,   753,  1954,  2164,   802,   802,   758,
    1036,  2298,  1080,  1110,  1798,   802,  1601,  1557,  1603,  2072,
    2129,  1874,  2162,  2851,  2139,  2853,  1606,  2011,  2267,  1370,
    1846,  1124,  1100,  2070,  1823,   830,   830,  1575,  2279,   830,
     318,  2082,  1110,   830,  1608,  1740,  2310,  2085,  1716,  1372,
    1749,   845,  2282,  2316,  1219,   214,  1080,    18,   217,  1727,
      21,     4,     5,  1852,   226,    26,   228,   229,    29,   863,
     864,   167,   863,   864,     7,     8,  1100,   147,    22,   873,
     147,    29,   873,    29,    18,  1223,  1110,    29,  1226,   802,
     147,   131,  1121,    37,   256,    29,   192,   193,   194,   147,
     802,    28,   146,   247,    31,   247,   250,  1245,   250,    36,
    1248,   247,   228,   147,   250,    26,   249,   830,   249,   913,
      31,   915,   916,   249,   225,    36,    53,    38,   830,    26,
     168,    28,   926,   965,    31,   173,   174,    34,    35,    36,
     256,    38,    39,    54,   214,    89,   190,   214,   168,   249,
     967,   247,   946,   173,   174,   225,    28,   214,  2986,    31,
      26,  2681,    28,   249,    36,    31,   214,  1956,   142,   143,
     144,    37,   216,   451,   247,    28,   120,   250,    31,   973,
     214,    53,   247,    36,    22,   250,   147,    87,    88,    89,
      90,  1980,   167,    26,   247,    28,  2665,   250,    31,    37,
      53,   214,   996,    36,  2322,  2323,    22,    23,    24,    25,
      26,    27,    28,   491,  2665,   189,   190,   192,   193,   194,
      53,  1015,   247,  1017,    29,   250,   151,   152,  2346,   249,
     249,   175,    22,    23,    24,    25,    26,    27,    28,   249,
     201,    31,  1036,    29,    34,    35,    36,    37,    38,    39,
     556,    89,   558,   559,   560,   561,    26,   563,    28,  1053,
     249,    31,   249,    53,    34,    35,    36,    37,    38,    39,
       7,     8,   247,  1067,   318,    22,   247,   555,   556,   250,
     558,  1410,   120,     4,     5,  1080,  1080,     8,  1082,   214,
      37,   247,   249,  1080,   250,    22,   214,  1394,   249,    26,
     249,   228,   229,  1145,    31,  1100,  1100,    34,   249,    36,
     249,    38,   590,  1100,    29,  1110,  1110,   228,    45,    46,
      47,   247,    49,  1110,   250,   247,  1394,  1121,   250,  1422,
    1124,   228,   229,  1124,   142,   143,   144,   175,  1180,   167,
     618,  1370,    89,   621,   214,   256,  1372,   247,   248,   214,
    1489,  1145,  1445,   249,   207,   247,   228,   229,   250,   256,
     638,   249,   228,   229,   192,   193,   194,  1080,  1461,    29,
    1394,  1500,  1121,   120,   207,   228,   229,  1219,  1080,    29,
     686,  2621,   688,   214,   256,   247,  1180,  1100,   250,    29,
    2505,     4,     5,  1422,   672,   228,   229,  1110,  1100,   168,
    1529,    95,    96,    97,   173,   174,    26,   451,  1110,   247,
     226,    31,   228,   229,   247,   249,    36,   247,    38,  1445,
     250,  2536,   249,   247,   247,  1219,   250,   250,   175,  1223,
     247,   249,  1226,   250,    54,   167,   226,  2906,   228,   229,
     256,  1677,    24,    83,    26,   127,    28,   491,   130,  2503,
     247,  1245,   247,   250,  1248,   250,   214,   735,   228,   229,
     192,   193,   194,   195,    29,   247,   256,    22,   250,   247,
    1219,    26,   250,    28,  1223,   753,    31,  1226,   247,    34,
    2595,    36,  2394,    38,   247,   247,   256,   250,   250,   120,
      45,    46,    47,   249,    49,   249,  1245,   249,    53,  1248,
     247,   228,    84,    85,   247,  1347,    33,   250,   148,   149,
     150,   555,   214,    22,    23,    24,    25,    26,    27,    28,
     197,   198,  1619,   249,   802,   249,  2066,   167,  2068,   249,
     247,  1557,  1629,   250,    22,  3004,  2654,  2655,  2656,   247,
     248,   247,  2660,    22,   250,  1683,   590,  2318,    69,    70,
     249,  1619,   247,  1347,  2316,   250,  2318,  2316,    37,  2318,
     214,  1629,  2318,  1660,  2318,   249,  2279,   845,   247,   247,
    2318,   250,   250,  1367,   249,  1369,  1370,   621,  1372,  1370,
    1677,  1372,   214,   247,    34,   225,   250,  1613,   247,  2129,
    2379,   250,  1660,    47,    26,  1619,  2385,  1690,  1347,  1394,
    1394,    89,   230,   231,   232,  1629,  1699,  1394,   228,  1677,
      89,  2851,   247,   249,  1408,   250,  1410,    40,  1367,   249,
    1369,  1370,  2162,   247,  2164,    22,   250,   249,  1422,   673,
     247,  1422,  2747,   250,   249,   913,  1660,   915,  2223,   249,
    2225,   120,   249,  2432,   226,   249,   228,   229,  2316,   249,
    2318,  1445,  1681,  1677,  1445,   247,   248,   145,   146,   247,
     248,  1690,   233,   234,   235,   247,   249,  1461,  2783,   249,
    1461,   249,  2461,   228,   229,   179,   180,   181,   182,   183,
     184,  1394,   214,   249,   120,  1823,    34,   175,   249,   249,
     996,   735,  1394,   249,    29,   973,   175,  1491,    46,    47,
     249,   256,    50,    51,    52,   249,  1500,   249,  1846,   753,
     249,  1017,    29,   249,  1852,   249,    37,   226,   996,   228,
     229,   242,   243,   244,     5,   250,  1520,   249,   204,    22,
    1036,   249,   253,   254,   255,  1529,  1874,  1015,   247,  1017,
     250,   249,   249,   247,    37,   207,   249,  1053,    22,    23,
      24,    25,    26,    27,    28,    24,   249,    26,   802,    28,
     249,  1067,    31,  1557,   249,   249,  1598,    36,   249,    38,
     202,   203,  1604,   205,   206,   207,  1082,   209,   249,   249,
     249,  1575,  1599,   249,   249,    54,    22,  2905,   249,   249,
      26,   249,    28,   249,   249,    31,    89,   249,    34,    35,
      36,   845,    38,    39,    87,    88,    89,    90,   206,    45,
      46,    47,  1606,    49,  1608,    84,    85,  1611,   205,  1613,
      26,  1615,  1100,  1617,  1619,  1619,   125,   120,   127,   128,
     129,   130,  1619,   248,  1629,  1629,   247,    22,    26,   247,
     214,    26,  1629,    28,   224,  2960,    31,   214,  2963,    34,
    1644,    36,    37,    38,   250,   250,   248,   124,   248,   126,
      45,    46,    47,   249,    49,  1660,  1660,  1145,   135,   250,
     249,   138,   139,  1660,   141,   168,   169,   142,   143,   144,
     147,   250,  1677,  1677,   151,  3003,   249,  1681,   214,   156,
    1677,    39,   218,   219,   220,   247,  1690,   250,   165,   250,
     250,   248,  1180,   249,    89,  1699,  1619,    26,  1699,   179,
     180,   181,   182,   183,   184,  2044,  1629,  1619,   247,   250,
    1226,   248,   247,   190,   189,   190,   248,  1629,  2717,   973,
     195,  2720,  1681,   248,   119,   120,   203,  2066,   250,  2068,
       5,  1690,  1248,   248,   250,    29,  3064,  1660,   250,   216,
    1228,   218,   226,    29,   228,   229,   214,   226,  1660,   228,
     229,   249,   249,   249,  1677,   249,    59,   249,   153,   236,
     155,  1015,  1250,   248,  2514,  1677,   243,  2070,   247,  2072,
     248,   214,  3100,   247,   250,   248,  3104,   172,  3106,   250,
     175,   250,   228,   229,    69,    70,   249,   249,    73,    74,
    2129,   249,   249,   270,   247,  2545,   124,   125,  3126,   127,
     128,   129,   130,   280,   202,   203,   204,   205,   206,   207,
     256,   209,    22,    23,    24,    25,    26,    27,    28,  1823,
     297,    31,   250,  2162,    34,    35,    36,   248,    38,    39,
     249,  2070,   250,   228,   229,   248,  2072,   142,   143,   144,
     247,   250,  1846,    53,   250,   124,  1100,   126,  1852,   247,
     250,  1367,   247,  1369,   250,    26,   249,    28,   175,  1347,
      31,   214,   214,   247,  1823,    36,   343,   250,   248,   250,
    1874,   214,   248,   202,   203,   204,   205,   206,   207,  1367,
     209,  1369,    53,   247,   189,   190,   248,  1846,   248,   250,
     195,  1145,   214,  1852,   250,   372,   373,   142,   143,   144,
     377,   250,  1954,   250,   250,    24,  1394,    26,   248,    28,
     247,   190,    31,     5,   250,  1874,   249,    36,   247,    38,
    1408,   148,  1410,   250,   203,   250,  1180,   250,  2164,   214,
     142,   143,   144,   248,   250,    54,   249,   216,  2245,   218,
     249,    22,   247,   250,   189,   190,   248,    28,   248,  2297,
    1954,   250,  1956,   250,   250,  1959,    37,   242,   243,   244,
    2267,   226,   227,   228,   229,    84,    85,  2245,   253,   254,
     255,   248,  2279,    40,   451,   167,  1980,   189,   190,  1983,
     457,   250,    22,    23,    24,    25,    26,    27,    28,  2267,
     250,    31,  2295,   247,   250,  1954,   247,  1956,   250,   248,
    1959,  2279,   247,  1491,    85,   249,   248,  2310,    89,   248,
     250,  2245,  1500,   250,   491,   248,   226,   494,   228,   229,
     250,  1980,   247,  2773,  1983,   502,    40,    41,    42,    43,
      44,  2379,  1520,  2267,   511,   247,   207,  2385,   119,   120,
    2044,  1529,   249,  2282,   249,  2279,   256,   249,    22,    23,
      24,    25,    26,    27,    28,   250,  2295,   228,   229,  2809,
     247,   250,  2066,    37,  2068,   248,  2070,   195,  2072,  2070,
     249,  2072,   153,   154,   155,   248,   250,   249,   555,   556,
     250,   558,   559,   560,   561,   250,   563,   163,   164,   165,
     166,   172,  1608,  1347,   175,  1611,   249,  1613,   249,  1615,
     249,  1617,  2106,   249,   247,   582,   248,   226,   247,   228,
     229,   214,   249,   590,   249,    89,   238,   250,  1606,   250,
    1608,   214,   249,  1611,   247,  2129,   250,   248,  1644,   249,
      24,  1619,    26,   247,    28,  2139,   248,    31,   149,   250,
    1394,   618,    36,   150,   621,   119,   120,   228,   229,    40,
      41,    42,    43,    44,  1408,   250,  1410,   248,  2162,    53,
    2164,   638,   249,   214,  2503,   214,  2505,   137,   138,   139,
     140,   141,  1660,   214,   248,  2514,   248,  2219,    60,   153,
     250,   155,   248,   248,   248,  2227,   226,   250,   228,   229,
      84,    85,   250,   670,  2221,   248,   250,  2536,   172,   214,
      24,   175,    26,   248,    28,   214,  2545,    31,   247,   686,
     214,   688,    36,   251,   691,   185,   214,   250,   247,   233,
     234,   235,   699,   148,   148,   702,   214,   248,   248,    53,
     248,   708,   127,   128,   129,   130,   208,  1491,   250,   247,
    2245,  2245,    95,    96,    97,    98,    99,   100,  2245,   250,
     250,   250,   226,   248,   228,   229,   248,   248,   248,   248,
      84,    85,  2267,  2267,   250,   250,  1520,   250,   250,   746,
    2267,   238,   250,   247,  2279,  2279,   753,   556,  2282,   558,
     214,   758,  2279,    22,   250,    24,   238,    26,   250,    28,
     248,  2295,    31,   214,   771,   248,   250,    36,    26,    22,
      23,    24,    25,    26,    27,    28,  2310,   248,    31,  2310,
     787,   590,   249,    36,   214,    38,     4,   250,    22,   250,
      24,   249,  2245,  2282,    28,   802,   249,   249,  2635,   249,
    1846,    54,   226,  2245,   228,   229,  2295,  1825,   249,   618,
     249,   249,   621,   249,  2267,   238,  2649,   214,   238,   208,
     247,    92,  1606,   830,   252,  2267,  2279,  2635,  1874,   638,
      91,   238,    93,    94,   214,  1619,  1854,  2279,   845,   249,
     101,   102,   103,   214,   250,  2379,   249,   116,   117,   118,
     119,  2385,   121,   214,   214,   214,   863,   864,   250,   214,
     248,    26,   248,   132,   133,   134,   873,   214,   250,   250,
     214,  2635,   226,   250,   228,   229,  1660,   250,  2747,   247,
    2649,   250,   116,   117,   118,   119,   120,   121,   122,   123,
    2379,   248,   250,   247,   214,   248,  2385,   248,  2432,   214,
    3175,  2322,  2350,  2701,  2773,   153,   913,   153,   915,   916,
     153,   153,   153,  1959,  2783,   153,   153,   153,   153,   926,
      26,  1816,    28,  2457,   953,    31,   153,  2461,    34,    35,
      36,    37,    38,    39,  1176,  1592,  1954,  1983,  1956,   946,
    2809,  1959,  1596,  2432,   202,   203,   204,   205,   206,   207,
     167,   209,  2486,   214,   167,   167,  2420,   226,  3035,   228,
     229,  3118,  1980,  2943,   225,  1983,   973,  3088,  2457,  2503,
    2610,  2505,  2461,   226,  2619,   228,   229,  2851,   153,   125,
    2514,   127,   128,   129,   130,   153,   247,   256,  2701,   996,
     153,   153,   226,   153,   228,   229,   153,  2486,   153,   153,
     153,   153,  2536,   256,   153,   153,   153,  2701,  1015,   153,
    1017,  2545,   153,   247,   153,   153,  2701,  2701,    22,    23,
      24,    25,    26,    27,    28,   153,  2044,    31,  2701,  1036,
      34,    35,    36,   153,    38,    39,   153,   202,   203,   204,
     205,   206,   207,  1827,   209,   153,  1053,  2701,  2066,   153,
    2068,   197,   198,   153,   153,   153,   153,   153,  2592,  2701,
    1067,  2595,  2701,  2701,    22,  1302,    24,  2701,    26,  2701,
      28,  1297,  1856,  1080,  2685,  1082,  1801,  1319,  3157,    37,
     137,   138,   139,   140,   141,  1806,  1015,   301,  2106,   705,
    2677,  2960,  1334,  1100,  2963,    -1,  2657,  1339,    -1,    -1,
    2635,  2635,    -1,  1110,   913,    -1,   915,    -1,  2635,    -1,
      -1,  2129,    -1,    -1,  1121,  2649,    -1,  1124,    -1,    -1,
      -1,  2139,   228,   229,    -1,    -1,    84,    85,   185,    -1,
      -1,    89,  1374,  1375,    -1,    -1,    -1,    -1,  1145,  2701,
      -1,  2701,  2701,  2701,  2162,  2701,  2701,  2701,  2701,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,  1399,  1400,    -1,
    2649,   119,   120,   101,   102,   103,    26,    -1,    28,    -1,
    1954,    31,  1956,  1180,    34,    35,    36,    -1,    38,    39,
      -1,    -1,  2635,  2717,    -1,    -1,  2720,   996,    -1,    -1,
     247,    -1,    -1,  2635,    -1,   153,  1980,   155,    -1,    -1,
      69,    70,    -1,    -1,    73,    74,    -1,    -1,  1017,    -1,
      -1,    -1,  1219,  2747,   172,    -1,  1223,   175,    -1,  1226,
      -1,    -1,   226,    -1,   228,   229,    -1,  2245,  2717,    -1,
      -1,  2720,  3075,  3076,  3077,  3078,  3079,  3080,  1245,  2773,
      -1,  1248,    22,    23,    24,    25,    26,    27,    28,  2783,
      -1,    31,   256,    -1,    34,    35,    36,    37,    38,    39,
    2044,  2279,    -1,    -1,    -1,    45,    46,    47,   226,    49,
     228,   229,  3115,    53,    -1,  2809,   214,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    24,    -1,    26,   225,    28,   247,
      -1,    31,    -1,    -1,    34,    -1,    36,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,  2106,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    -1,  1145,    34,    35,    36,
    1347,    38,    39,    -1,    -1,   214,    -1,    -1,    45,    46,
      47,    -1,    49,  1595,   223,  2139,    53,    -1,    -1,    -1,
    1367,    -1,  1369,  1370,    -1,  1372,    -1,    -1,   228,   229,
      -1,  1180,    -1,   242,   243,   244,   116,   117,   118,   119,
      -1,   121,    -1,    -1,   253,   254,   255,  1394,    -1,    -1,
      -1,    -1,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,  1408,    -1,  1410,    -1,  1647,    -1,    -1,    -1,    -1,
      -1,  2457,    -1,    -1,  2432,  1422,    -1,    -1,    -1,    -1,
    1229,    -1,   142,   143,   144,    -1,  2960,    -1,    -1,  2963,
      75,    76,    77,    78,    79,    80,    81,    82,  1445,  2457,
    2486,    -1,  1251,  2461,    -1,    -1,   226,   167,   228,   229,
     214,    -1,    -1,    -1,  1461,    69,    70,    -1,    -1,    73,
      74,  2245,    -1,    -1,    -1,    -1,    -1,    -1,  2486,   189,
     190,    -1,   192,   193,   194,    -1,   256,   156,   157,   158,
     159,   160,   161,   162,  1491,  2503,   226,  2505,   228,   229,
      -1,    -1,    -1,  1500,    -1,  2279,  2514,    -1,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,  1520,    -1,    -1,   256,    -1,  2536,    -1,
      -1,    -1,  1529,    -1,    22,    -1,    24,  2545,    26,   226,
      28,   228,   229,    31,    -1,    -1,    -1,    -1,    36,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
    1557,    34,    35,    36,    -1,    38,    39,    -1,  1367,   256,
    1369,    -1,    45,    46,    47,    -1,    49,    -1,  1575,   214,
      -1,    -1,    -1,    -1,  2592,    -1,    -1,  2595,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    37,    38,  1606,
     214,  1608,    -1,    -1,  1611,    -1,  1613,    -1,  1615,    -1,
    1617,    -1,  1619,    -1,    54,    -1,    -1,  2635,   116,   117,
     118,   119,  1629,   121,    -1,    -1,    -1,    -1,   242,   243,
     244,    -1,    -1,    -1,   132,   133,   134,  1644,   214,   253,
     254,   255,    -1,    -1,   124,    -1,   126,    -1,  2432,    89,
      -1,    -1,    -1,  1660,    -1,   135,    -1,    -1,   138,   139,
      -1,  1903,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
    1677,   151,    -1,    -1,  1681,    -1,   156,  2461,    -1,   119,
     120,    -1,  1491,  1690,    -1,   165,    -1,    -1,    -1,    -1,
      -1,  1500,  1699,    -1,    -1,    -1,    -1,    -1,    -1,  2717,
      -1,    -1,  2720,    69,    70,    -1,    -1,    73,    74,    -1,
     190,  1520,    -1,   153,    -1,   155,    -1,    -1,    -1,  2503,
    1529,  2505,    -1,   203,    -1,    -1,    -1,    -1,   226,  2747,
     228,   229,   172,    -1,    -1,   175,   216,    -1,   218,    -1,
      -1,    -1,    -1,   226,    -1,   228,   229,    -1,    -1,   247,
      -1,    -1,  2536,    -1,    -1,  2773,   236,    -1,    22,    -1,
      24,    -1,    26,   243,    28,  2783,    -1,    31,    -1,    -1,
      34,    -1,    36,   256,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,   226,    -1,   228,   229,
     270,  2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1608,
     280,    -1,  1611,    -1,    -1,    -1,    -1,   247,  2592,    -1,
      -1,  2595,    -1,    -1,    -1,    -1,  1823,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,  1846,
      -1,    28,    29,    -1,    -1,  1852,    -1,    -1,   214,    -1,
      -1,  2635,   116,   117,   118,   119,    -1,   121,    -1,    -1,
      -1,    -1,    -1,   343,    -1,    -1,    -1,  1874,   132,   133,
     134,    -1,    -1,    -1,    -1,    -1,   242,   243,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,   255,
      -1,    -1,   372,   373,    -1,    -1,    83,   377,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,  2717,    -1,    -1,  2720,    39,    22,    -1,
      -1,    -1,  2960,    -1,    28,  2963,    -1,  1954,    -1,  1956,
      -1,    -1,  1959,    37,    -1,    22,    -1,    24,    -1,    -1,
      62,    28,   226,  2747,   228,   229,    -1,    -1,    -1,    -1,
      -1,   451,    -1,  1980,    -1,    -1,  1983,   457,    -1,    -1,
      -1,    83,    -1,   247,    86,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,  2783,
      -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,   494,    -1,    -1,  1826,    -1,    -1,
      -1,    -1,   502,   125,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   511,    -1,   135,   136,   119,   120,  2044,   225,    -1,
      -1,    -1,    -1,    -1,    -1,   147,  1855,    -1,    -1,   116,
     117,   118,   119,   120,   121,   122,   123,   247,    -1,  2066,
      -1,  2068,    -1,  2070,    -1,  2072,    -1,    -1,    -1,   153,
     154,   155,    -1,    -1,    -1,   555,   556,    -1,   558,   559,
     560,   561,    -1,   563,   186,   187,   188,    -1,   172,   191,
      -1,   175,    22,    -1,   196,    -1,    26,    -1,    28,  2106,
      -1,    31,   582,    -1,    34,    35,    36,    37,    38,    39,
     590,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      69,    70,  2129,   225,    73,    74,    -1,    -1,   230,    -1,
      -1,    -1,  2139,    -1,    -1,    -1,    -1,    -1,   618,    -1,
      -1,   621,    -1,    -1,   228,   229,    -1,  1956,    -1,    -1,
    1959,    -1,    -1,    -1,    -1,  2162,    -1,  2164,   638,   226,
      -1,   228,   229,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1980,  2414,    -1,  1983,    -1,  2960,    -1,    -1,  2963,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
     670,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,   688,    -1,
      -1,   691,    -1,    53,    22,    -1,    24,    -1,    26,   699,
      28,    -1,   702,    31,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2245,    -1,
      -1,    -1,    -1,    -1,    84,    85,    54,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,  2497,    -1,  2066,    -1,  2068,
    2267,    -1,    -1,    -1,    -1,   214,   746,    -1,    -1,    -1,
      -1,    -1,  2279,   753,    -1,  2282,    84,    85,   758,   119,
     120,    89,    -1,    -1,    -1,    -1,    -1,    -1,  2295,    -1,
      -1,   771,    -1,   242,   243,   244,    -1,  2106,   228,   229,
      -1,    -1,    -1,  2310,   253,   254,   255,   787,    -1,    -1,
      -1,   119,   120,   153,    -1,   155,    -1,    -1,    -1,    -1,
    2129,    -1,   802,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2139,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,   155,    -1,    -1,
     830,    -1,   146,  2162,    -1,    -1,    -1,    -1,    -1,    -1,
    2602,    -1,    -1,    -1,   172,   845,    -1,   175,    -1,    -1,
      -1,    -1,  2379,    22,    -1,    24,    -1,    26,  2385,    28,
      -1,    -1,    31,   863,   864,    -1,   226,    36,   228,   229,
      -1,    -1,    -1,   873,    -1,    -1,   190,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,   247,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,   226,    -1,
     228,   229,   216,    -1,    -1,  2432,    -1,    -1,    53,    -1,
      -1,    -1,    -1,   913,    -1,   915,   916,    -1,    -1,   247,
      -1,    -1,   236,    22,    -1,    24,   926,    26,    -1,    28,
    2457,    -1,    31,    -1,  2461,    -1,  2698,    36,    37,    84,
      85,    -1,  2704,    -1,    -1,    -1,   946,   116,   117,   118,
     119,    -1,   121,    -1,    53,    -1,    -1,    -1,    -1,  2486,
      -1,    -1,    -1,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,  2733,  2734,   973,  2736,  2737,  2503,    -1,  2505,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,  2514,    -1,    22,
      89,    -1,    -1,    26,    -1,    28,   996,    -1,    31,    -1,
      -1,    34,    35,    36,   318,    38,    39,    -1,    -1,  2536,
      -1,    -1,    45,    46,    47,  1015,    49,  1017,  2545,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    74,    -1,  1036,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,  1053,   153,    -1,   155,   226,    -1,   228,
     229,    -1,    -1,    -1,    -1,  2592,    -1,  1067,  2595,    -1,
    2832,  2833,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
    1080,   226,  1082,   228,   229,   176,   177,   178,   179,   180,
     181,   182,   183,   184,  2856,  2857,    -1,    -1,    -1,    -1,
    1100,    -1,   247,  2432,    -1,    -1,  2868,    -1,  2635,   247,
    1110,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,  1121,  2649,   214,  1124,    -1,    -1,   226,  2457,   228,
     229,    -1,  2461,    -1,    -1,    -1,    -1,   451,    22,    23,
      24,    25,    26,    27,    28,  1145,    -1,    31,   247,    -1,
      34,    35,    36,    37,    38,    39,    -1,  2486,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,   214,    -1,  2505,   491,    -1,    -1,
    1180,   221,   222,   223,    -1,  2514,    -1,    -1,    -1,    -1,
    2717,    -1,    -1,  2720,    -1,   228,   229,    -1,    -1,    -1,
      84,    85,   242,   243,   244,  2967,    -1,  2536,  2970,    -1,
      -1,    -1,    -1,   253,   254,   255,  2545,    -1,    -1,  1219,
    2747,    -1,    -1,  1223,    -1,    -1,  1226,    -1,    -1,   124,
      -1,   126,  2994,  2995,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,    -1,    -1,  1245,  2773,    -1,  1248,    -1,
      -1,   146,    -1,    22,    -1,    24,  2783,    26,    -1,    28,
      -1,   156,    31,  2592,    -1,    -1,  2595,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,  3041,
      -1,    -1,  2809,    -1,    -1,    54,    -1,    -1,  3050,  3051,
    3052,    -1,  3054,  3055,  3056,   190,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,   621,   203,    34,
      35,    36,    37,    38,    39,    84,    85,    -1,    -1,    -1,
      89,   216,    -1,   218,    -1,    -1,    -1,    -1,    53,    -1,
    3092,  3093,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   236,   226,    -1,   228,   229,    -1,  1347,   243,    -1,
     119,   120,    -1,    -1,    -1,    -1,   670,    -1,   253,    84,
      85,    -1,    -1,   247,    -1,    -1,    -1,  1367,    -1,  1369,
    1370,    -1,  1372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,   155,    -1,  2717,    -1,
      -1,  2720,    -1,    -1,  1394,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   175,    -1,  1408,    -1,
    1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,   735,  1422,   318,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,  2960,    -1,    31,  2963,    -1,    -1,   753,
      36,    -1,    38,    -1,  2773,  1445,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2783,    -1,    -1,   226,    54,   228,
     229,  1461,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,   372,   373,    -1,
    2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   802,    -1,
      -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1500,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
    1520,    34,    35,    36,    37,    38,    39,    -1,    -1,  1529,
      -1,   845,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   451,  1557,    -1,    -1,
      -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    -1,    -1,  1575,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,   491,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,  1606,    -1,  1608,    53,
      -1,  1611,    -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1629,
     226,  2960,   228,   229,  2963,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,  1644,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
    1660,   556,    31,   558,   559,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,   119,   120,  1677,    -1,    -1,
      -1,  1681,    -1,    -1,    53,    -1,    -1,   582,    -1,    -1,
    1690,    -1,    -1,    -1,    22,   590,    -1,    -1,    26,  1699,
      28,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,   153,
      38,   155,    -1,   226,    -1,   228,   229,    45,    46,    47,
      -1,    49,    -1,   618,    -1,    53,   621,    -1,   172,    -1,
      -1,   175,    -1,    -1,   247,    -1,    22,    23,    24,    25,
      26,    27,    28,   638,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    53,    34,    35,
      36,    37,    38,    39,    -1,   670,    -1,    -1,    -1,    45,
      46,    47,   226,    49,   228,   229,  1100,    53,    -1,    -1,
      -1,   686,    -1,   688,    -1,    -1,   691,    -1,    84,    85,
     695,    -1,    -1,   247,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,  1823,    -1,    -1,    -1,    -1,    45,    46,
      47,  1145,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,
     735,    -1,    -1,    -1,    -1,    -1,  1846,    -1,    -1,    -1,
      -1,    -1,  1852,    -1,    -1,    -1,    -1,   226,   753,   228,
     229,    -1,    -1,   758,    -1,    -1,  1180,    84,    85,    -1,
      -1,    -1,    89,    -1,  1874,    -1,   771,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
     228,   229,   119,   120,    -1,  1219,    -1,   802,    -1,  1223,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,  1245,    -1,    -1,    -1,   830,   153,    -1,   155,    -1,
     226,    53,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
     845,    -1,    -1,    -1,  1954,   172,  1956,    -1,   175,  1959,
     226,   247,   228,   229,    -1,    -1,    -1,    -1,   863,   864,
      -1,    -1,    84,    85,   116,   117,   118,    89,    -1,   121,
    1980,    -1,    -1,  1983,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   226,
      -1,   228,   229,    -1,    -1,    -1,    -1,    -1,   913,    -1,
     915,   916,    -1,    22,    23,    24,    25,    26,    27,    28,
     247,    -1,    31,  1347,    -1,    34,    35,    36,    37,    38,
      39,   153,    -1,   155,  2044,    -1,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,  2066,    -1,  2068,    -1,
    2070,    -1,  2072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1394,    -1,    -1,    -1,   226,    -1,   228,   229,    -1,    -1,
      89,    -1,    -1,    -1,  1408,    -1,  1410,    -1,    -1,    -1,
      -1,   996,    -1,    -1,    -1,    -1,  2106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,   228,   229,    -1,    -1,
     119,   120,  1017,    -1,    -1,    -1,    -1,    -1,    -1,  2129,
      -1,    -1,    -1,    -1,    22,   247,    24,    -1,    26,  2139,
      28,  1036,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,
      38,    -1,    -1,    -1,   153,    -1,   155,    45,    46,    47,
      -1,    49,  2162,    -1,  2164,    53,    22,    23,    24,    25,
      26,    27,    28,   172,    -1,    31,   175,  1491,    34,    35,
      36,    37,    38,    39,    -1,  1080,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    -1,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1100,  1520,    -1,    22,    23,
      24,    25,    26,    27,    28,  1110,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,  1121,   226,    -1,   228,
     229,    -1,    -1,    89,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,  2245,    -1,    -1,   247,    -1,
    1145,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,  2267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2279,
      -1,    -1,  2282,    -1,    -1,  1180,    -1,     5,    -1,     7,
       8,    -1,    10,    11,    12,  2295,    14,   153,    -1,   155,
      -1,    -1,    20,    89,    -1,  1619,    -1,    -1,    -1,    -1,
    2310,    29,    30,    -1,    -1,    -1,   172,    -1,    -1,   175,
      -1,    39,    -1,    -1,  1219,    -1,    -1,    -1,  1223,    -1,
      -1,  1226,    -1,   119,   120,    -1,    -1,    -1,   226,    -1,
     228,   229,    -1,    -1,    62,    -1,  1660,    -1,    -1,    -1,
    1245,    -1,    -1,  1248,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    83,    -1,   153,    -1,   155,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,  2379,
      -1,    -1,    -1,    -1,    -1,  2385,   172,    -1,    -1,   175,
      -1,   247,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    37,    38,
      -1,    -1,   226,   131,   228,   229,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,   147,
      -1,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1347,    -1,    -1,    84,    85,  2457,    -1,    -1,
      89,  2461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1367,   191,  1369,  1370,    -1,  1372,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,    -1,
     119,   120,    22,    -1,    24,    -1,    26,    -1,    28,  1394,
      -1,    31,    -1,  2503,    -1,  2505,    36,   225,    -1,  1823,
      -1,    -1,   230,  1408,  2514,  1410,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,   155,  1422,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,  1852,    -1,
      -1,    -1,    -1,   172,    -1,  2545,   175,    -1,    -1,   124,
    1445,   126,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,   136,    31,   138,    -1,    34,    35,    36,    37,    38,
      39,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    53,    -1,   116,   117,   118,   119,
      -1,   121,  2592,    -1,    -1,  2595,  1491,   226,    -1,   228,
     229,    -1,   132,   133,   134,  1500,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   247,    -1,
      89,    -1,    -1,    -1,    -1,  1520,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,  1529,  2635,    -1,    -1,    -1,    -1,
    1954,   216,  1956,   218,    -1,    -1,    -1,    -1,    -1,  2649,
     119,   120,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,   236,  1557,    31,    -1,    -1,  1980,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,   153,    53,   155,    -1,    22,    23,
      24,    25,    26,    27,    28,   270,   226,    31,   228,   229,
      34,    35,    36,   172,    38,    39,   175,    -1,    -1,    -1,
      -1,    -1,    -1,  1608,    -1,    -1,  1611,  2717,  1613,    53,
    2720,    -1,    -1,    -1,  1619,    -1,    -1,    -1,    -1,    -1,
    2044,    -1,    -1,    -1,  1629,    -1,    22,    23,    24,    25,
      26,    27,    28,   318,    -1,    31,    -1,  2747,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,   226,    -1,   228,
     229,    -1,    -1,    -1,    -1,  1660,    -1,    53,    -1,    -1,
      -1,    -1,    -1,  2773,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,  1677,  2783,    -1,    -1,  1681,    -1,    -1,    -1,
      -1,    -1,  2106,    -1,    -1,  1690,    -1,    -1,   373,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,  2809,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    -1,  2139,    31,    -1,    -1,    -1,
      -1,    36,    37,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,   226,    -1,
     228,   229,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,    -1,    84,
      85,    -1,   457,    -1,    89,    -1,   172,    -1,    -1,   175,
      -1,    -1,   226,    -1,   228,   229,    22,    23,    24,    25,
      26,    27,    28,    84,    85,    31,    -1,    -1,    89,    35,
      36,    37,    38,    39,   119,   120,   491,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    53,  1823,    -1,
      -1,  2245,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,   153,    -1,
     155,  1846,    -1,    -1,    -1,    -1,    -1,  1852,    -1,    -1,
    2960,   247,    -1,  2963,    -1,  2279,    -1,   172,    -1,    -1,
     175,    -1,   153,    -1,   155,    -1,    -1,    -1,    -1,  1874,
      -1,   556,    -1,   558,   559,   560,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,    -1,    -1,    -1,   582,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,
      -1,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   618,    -1,   226,   621,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1954,
      -1,  1956,    -1,   638,  1959,  2379,   247,    -1,    -1,    -1,
      -1,  2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    -1,  1980,    -1,    -1,  1983,    -1,
     165,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,    -1,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   686,    -1,   688,    -1,    -1,    -1,    -1,  2432,    22,
     695,    24,    -1,    26,   699,    28,    -1,    -1,    31,    -1,
      -1,    34,    -1,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,  2461,    -1,  2044,
      53,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
     735,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,  2066,    -1,  2068,    -1,  2070,    -1,  2072,   753,    -1,
      -1,    84,    85,    -1,    53,    -1,    -1,    -1,    -1,  2503,
      -1,  2505,    -1,    -1,    -1,    -1,   771,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,  2106,    -1,    34,    35,    36,    37,    38,    39,    -1,
      89,    -1,  2536,    -1,    45,    46,    47,   802,    49,    -1,
      -1,    -1,    53,    22,  2129,    -1,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,  2139,    34,    -1,    36,    37,    38,
     119,   120,    -1,    -1,    -1,   830,    45,    46,    47,    -1,
      49,    -1,    -1,    84,    85,    -1,    -1,  2162,    89,  2164,
     845,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,    -1,
      -1,  2595,    -1,    -1,   153,    -1,   155,    -1,    -1,   864,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
      89,    -1,   124,   172,   126,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,  2635,    -1,   226,   146,   228,   229,    -1,    -1,    -1,
     119,   120,   153,    -1,   155,    -1,    -1,    -1,   913,    -1,
     915,   916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2245,   172,    -1,    -1,   175,    -1,    -1,   226,    -1,   228,
     229,    -1,    -1,    -1,   153,    -1,   155,    -1,   190,    -1,
      -1,    -1,  2267,    -1,    -1,    -1,   451,    -1,    -1,    -1,
      -1,   203,   457,   172,  2279,    -1,   175,  2282,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,   218,    -1,    -1,    -1,
    2295,    -1,    -1,  2717,    -1,   226,  2720,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,   494,
      -1,   996,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,
      -1,    -1,    -1,  2747,    -1,    -1,   511,    -1,    -1,   228,
     229,    -1,  1017,    -1,    -1,    -1,    -1,    -1,   270,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,  1036,    34,    35,    36,    37,    38,    39,    -1,  2783,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,  1053,    22,
      -1,    -1,    -1,    26,  2379,    28,    -1,    -1,    31,    -1,
    2385,    -1,    -1,    36,    -1,    38,   318,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,  1080,    49,   582,    69,    70,
      53,    -1,    73,    74,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1110,    -1,  2432,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,   119,   120,    31,
      -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,    -1,
      -1,    -1,  2457,    45,    46,    47,  2461,    49,    -1,    -1,
    1145,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,  1180,    -1,    -1,  2503,   124,
    2505,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
      -1,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,   451,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,  2536,    -1,    -1,  1219,   146,  2960,    -1,  1223,  2963,
    2545,  1226,    -1,   214,   226,    -1,   228,   229,    -1,    -1,
     221,   222,   223,    -1,    -1,    -1,    -1,    -1,    -1,   491,
    1245,    -1,    -1,  1248,    -1,   190,    -1,    -1,    -1,    -1,
     502,   242,   243,   244,    -1,   228,   229,    -1,   203,   190,
      -1,    -1,   253,   254,   255,    -1,    -1,  2592,    -1,    -1,
    2595,   216,   203,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   802,    -1,    -1,
      -1,    -1,    -1,   555,   556,   236,   558,   559,   560,   561,
    2635,   563,    -1,    -1,   226,    -1,   228,   229,    -1,    -1,
      -1,    -1,   253,    -1,  2649,   830,    -1,    -1,    -1,    -1,
     582,    -1,    -1,    -1,    -1,    22,    -1,    24,   590,    26,
     845,    28,  1347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,   864,
      -1,    -1,  1367,    -1,  1369,    -1,   618,  1372,   873,   621,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    -1,    31,   638,   318,    -1,  1394,
      36,    37,  2717,    -1,    -1,  2720,    -1,    84,    85,    -1,
      -1,    -1,    89,  1408,    -1,  1410,    -1,    53,   913,    -1,
     915,   916,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,   926,  2747,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,   119,   120,    -1,    -1,    -1,    -1,    84,    85,
    1445,   946,   373,    89,    -1,    53,    -1,   699,  2773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,    -1,
      -1,    -1,    -1,   119,   120,    -1,    84,    85,    -1,    -1,
      -1,    89,    -1,   735,  2809,   172,  1491,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,    -1,
      -1,   753,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,
      -1,   119,   120,    -1,    -1,  1520,    -1,    -1,    -1,    -1,
     451,    -1,   146,    -1,  1529,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,   228,   229,    -1,    -1,   153,    -1,   155,    -1,    -1,
     802,    -1,  1557,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,   207,    -1,    -1,   172,    -1,   190,   175,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
     226,    31,   228,   229,    34,    35,    36,    -1,    38,    39,
      -1,    -1,   216,   845,    -1,  1100,    -1,    69,    70,    -1,
      -1,    73,    74,  1608,    -1,  1110,  1611,    -1,  1613,    -1,
    1615,   556,   236,   558,  1619,    -1,    -1,    -1,   226,  1124,
     228,   229,    -1,    -1,  1629,   556,    -1,   558,   559,    -1,
      -1,    -1,    -1,    -1,    -1,  2960,    -1,    -1,  2963,    -1,
      -1,    -1,    -1,    -1,    -1,   590,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1660,    -1,    -1,    -1,   590,
      -1,   913,    -1,   915,   916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1677,   618,   926,    -1,   621,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   618,    -1,    -1,
     621,    -1,    -1,   638,   318,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,   638,    -1,    31,
      -1,    -1,    34,    -1,    36,    37,    38,    -1,    -1,    -1,
      -1,   973,    -1,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   670,
      -1,   686,   214,   688,   996,    -1,    -1,    -1,    -1,   221,
     222,   223,    -1,    -1,    -1,   686,    -1,   688,    -1,    -1,
      -1,    -1,    -1,  1015,   695,  1017,    -1,    -1,    -1,    -1,
     242,   243,   244,    -1,    -1,    -1,   226,    -1,   228,   229,
      -1,   253,   254,   255,  1036,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,    -1,    -1,   121,
      -1,  1053,    -1,    -1,   735,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,    -1,    -1,  1067,    -1,    -1,  1823,    -1,
      -1,    -1,   753,    -1,    -1,    -1,    -1,   451,  1080,    -1,
    1082,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     771,  1846,    -1,    -1,    -1,    -1,   146,  1852,  1100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,  1874,
      -1,   802,    -1,  1125,  1126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1394,
     190,    -1,    -1,  1145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1408,   226,  1410,   228,   229,    -1,    -1,
      -1,    -1,    -1,    -1,   845,    -1,   216,  1422,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,  1180,    -1,
      31,   555,    -1,   864,    35,    36,   236,    38,    39,    -1,
    1445,    -1,    -1,    -1,    45,    46,    47,    -1,    49,  1954,
      -1,  1956,    53,    -1,  1959,    -1,  1461,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,   913,    -1,
     915,    -1,    -1,    -1,    -1,  1980,    -1,    -1,  1983,    -1,
      -1,    -1,   913,    -1,   915,   916,  1491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1500,    -1,   621,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1520,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,  1529,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2044,
      -1,    -1,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,
      -1,   996,  1557,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2066,    -1,  2068,    -1,   996,    -1,  2072,    -1,    22,
    1575,    24,  1017,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    -1,    36,    -1,    38,  1017,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,  1347,    49,    -1,    -1,    -1,
      -1,  2106,    -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,
      -1,   735,    -1,    -1,    -1,  1367,    -1,  1369,    -1,    -1,
      -1,    -1,    -1,    -1,  2129,   226,    -1,   228,   229,   753,
      -1,    -1,    -1,    -1,  2139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,  1660,  1408,  2162,  1410,  2164,
      -1,    -1,    -1,   116,   117,   118,   119,    -1,   121,  1100,
      -1,    -1,  1677,    -1,    -1,    -1,    -1,    -1,   802,   132,
     133,   134,    -1,    -1,  1178,  1690,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,  1699,    -1,    -1,    -1,    -1,    -1,
    1145,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,  1145,    34,    35,    36,    37,    38,
      39,   845,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    53,  1180,    -1,    -1,    -1,  1491,
    2245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1500,  1180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2267,    -1,    -1,    84,    85,    -1,  1520,    -1,
      -1,    -1,  1266,   226,  2279,   228,   229,  1529,  1223,    -1,
      -1,  1226,  1276,  1277,    -1,  1279,    -1,    -1,  1219,    -1,
     590,    -1,  1223,    -1,    -1,  1226,    -1,    -1,    -1,    -1,
    1245,    -1,    -1,  1248,    -1,  1557,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1245,  1309,  1310,  1248,    -1,  1313,
      -1,   621,    -1,  1575,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    38,    39,  1340,    -1,    -1,   973,
      -1,    45,    46,    47,  1606,    49,  1608,    -1,    -1,  1611,
      -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,    -1,    -1,
     670,    -1,    -1,    -1,  2379,    -1,    -1,  1629,    -1,    -1,
    2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1015,  1644,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,  1660,   228,
     229,    -1,    -1,    -1,    -1,    -1,  1347,    -1,    -1,    -1,
      -1,    -1,  1367,    -1,  1369,  1677,    -1,  2432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   735,  1367,    -1,  1369,    -1,
      -1,  1372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2457,   753,    -1,    -1,  2461,    -1,    -1,    -1,
      -1,    -1,    -1,  1394,  1716,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1727,  1100,  1408,    -1,  1410,
      -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2503,    -1,
    2505,    -1,   802,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
      -1,    -1,    -1,    -1,  1445,    -1,    -1,    -1,    -1,    -1,
      -1,  1145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2536,   226,    -1,   228,   229,    -1,    -1,    -1,  2044,
    2545,    -1,    -1,    -1,    -1,   845,  1491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1500,  1180,    -1,    -1,    -1,
    1491,  2066,    -1,  2068,    -1,  2070,    -1,  2072,    -1,  1500,
      -1,    -1,    -1,    -1,    -1,  1520,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1529,    -1,    -1,  2592,    -1,  1520,
    2595,  1585,  1586,    -1,    -1,  1219,    -1,    -1,  1529,  1223,
      -1,  2106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1245,    -1,    -1,  2129,    -1,  1557,    -1,    -1,    -1,
    2635,    -1,    -1,    -1,  2139,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,  1648,    -1,    -1,  2162,    -1,  2164,
      -1,    -1,    -1,  1608,    -1,    -1,  1611,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1608,    -1,    -1,
    1611,    -1,  1613,    -1,    -1,    -1,    -1,    -1,  1619,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1954,    -1,  1956,    -1,    -1,  1959,    -1,    -1,
      -1,    -1,  2717,    -1,    -1,  2720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1347,    -1,    -1,    -1,    -1,  1980,  1660,
      -1,  1983,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,  2747,    -1,    31,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,  1752,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,  2773,    -1,
    1394,    -1,    -1,    -1,  2279,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,  1408,    -1,  1410,    -1,    -1,    -1,
    2295,    -1,  2044,    -1,    -1,    -1,    -1,    22,    -1,    24,
    1100,    26,    89,    28,  2809,  2310,    31,    -1,    -1,    34,
    1804,    36,    37,    38,  2066,    -1,  2068,  1811,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,   229,    -1,  1145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2106,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    -1,   153,  1491,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2129,  1823,    -1,
    1180,    -1,    -1,    -1,    -1,   172,    -1,  2139,   175,    -1,
      -1,    -1,  1823,    -1,   119,   120,  1520,    -1,  1892,    -1,
      -1,  1846,    -1,    -1,    -1,    -1,    -1,  1852,    -1,    -1,
    2162,    -1,  2164,    -1,    -1,  1846,    -1,    -1,    -1,  1219,
      -1,  1852,    -1,  1223,    -1,    -1,    -1,    -1,   153,  1874,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1932,   226,
      -1,   228,   229,  1874,    -1,  1245,    -1,   172,    -1,    -1,
     175,    -1,    -1,  1947,    -1,  2960,    -1,    -1,  2963,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2245,    -1,  1619,    -1,    -1,  2503,    -1,
    2505,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,  2514,
      -1,  1956,    -1,    -1,  1959,  2267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1954,    -1,  1956,    -1,  2279,  1959,    -1,
      -1,  2536,    -1,    -1,    -1,  1980,  1660,    -1,  1983,    -1,
    2545,    -1,    -1,    -1,    -1,    -1,    -1,  1347,    -1,  1980,
      -1,    -1,  1983,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2316,    -1,  2318,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2078,  2079,    -1,  2592,    -1,    -1,
    2595,    22,    -1,    24,  1394,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,  1408,    -1,
    1410,    -1,    -1,  2044,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2066,    53,  2068,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2066,    -1,  2068,    -1,    -1,
      -1,  2072,    -1,    -1,  2649,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    89,    -1,
      -1,  2106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2106,    -1,    -1,    -1,    -1,
    2432,  2175,    -1,    -1,  2129,    -1,    -1,    -1,   119,   120,
      -1,  1491,    -1,    -1,  2139,    -1,    -1,    -1,  2129,  1823,
      -1,    -1,    -1,    -1,    22,  2457,    24,    -1,  2139,  2461,
      28,    -1,    -1,    31,    -1,    -1,    -1,  2162,    36,    37,
    1520,    -1,   153,    -1,   155,    -1,    -1,    -1,  1852,    -1,
      -1,  2162,    -1,  2164,  2486,    53,    -1,    -1,    -1,    -1,
      -1,   172,  2747,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,  2503,    -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2514,    -1,    -1,    -1,    84,    85,  2773,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2545,    -1,   226,    -1,   228,   229,    -1,
      -1,   119,   120,    -1,  2809,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2245,    -1,    -1,    -1,    -1,  1619,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1954,    -1,  1956,    -1,    -1,   153,    -1,   155,    -1,    -1,
    2592,    -1,  2336,  2595,  2338,    -1,    -1,    -1,  2279,    -1,
      -1,    -1,    -1,    -1,   172,    -1,  1980,   175,    -1,    -1,
    1660,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2370,    -1,    -1,    -1,
      -1,    -1,    -1,  2635,    -1,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2393,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,    -1,    -1,    -1,    -1,    -1,  2411,    -1,    -1,
    2044,    -1,    -1,    -1,    -1,  2419,    -1,    -1,    -1,  2423,
      -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,    -1,    -1,
    2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2379,    -1,
      -1,    -1,    -1,    -1,  2385,  2960,    -1,    -1,  2963,    -1,
      -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,  2720,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,   151,
      -1,    -1,  2106,    -1,   156,    -1,    -1,  2432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2747,  2490,    -1,    -1,    -1,
      -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2457,    -1,    -1,  2139,  2461,    -1,    -1,    -1,
      -1,  2773,    -1,  1823,    -1,    -1,  2457,    -1,    -1,    -1,
    2461,  2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1852,    -1,    -1,  2486,    -1,  2809,    -1,    -1,
    2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
      -1,    -1,  2503,    -1,  2505,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2514,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2536,    -1,    -1,    -1,    -1,  2590,    -1,    -1,    -1,
    2545,    -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,  2603,
      -1,    -1,    -1,    -1,  2545,    -1,    -1,    -1,    -1,    -1,
      -1,  2245,  2616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,    -1,    -1,
    2595,    -1,    -1,    -1,  1954,  2279,  1956,    -1,    -1,    -1,
      -1,  2592,    -1,    -1,  2595,    -1,    -1,    -1,    -1,    -1,
      -1,   343,    -1,    -1,    -1,    -1,  2670,  2671,  2672,  2673,
    1980,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2689,    -1,    -1,    -1,    -1,
     372,   373,    -1,    -1,  2635,   377,    -1,    -1,  2960,    -1,
      -1,  2963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2716,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2044,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,    -1,
      -1,  2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2717,    -1,    -1,  2720,    -1,    -1,    -1,   451,
      -1,    -1,    -1,    -1,    -1,   457,  2717,    -1,    -1,  2720,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2747,    -1,    -1,    -1,  2106,    -1,  2432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,    -1,    -1,
      -1,    -1,   494,    -1,    -1,    -1,    -1,  2821,  2773,  2823,
     502,    -1,    -1,    -1,    -1,    -1,    -1,  2461,  2783,  2139,
      -1,    -1,  2773,    -1,    -1,    -1,    -1,    -1,    -1,   165,
     166,  2845,  2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2809,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2809,  2503,
      -1,  2505,    -1,   555,   556,    -1,   558,   559,   560,   561,
    2884,   563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     582,    -1,  2536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2245,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,    -1,
      -1,  2595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2279,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3001,    -1,    -1,
      -1,  2635,    -1,    -1,   686,  2960,   688,    -1,  2963,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2960,
      -1,    -1,  2963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   746,    -1,    -1,    -1,    -1,  2379,
      -1,   753,    -1,    -1,    -1,  2385,   758,    -1,    -1,    -1,
      -1,    -1,    -1,  2717,    -1,    -1,  2720,    -1,    -1,   771,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2747,    -1,    -1,    -1,    -1,    -1,    -1,
     802,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,  2783,
      -1,  2461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,   494,    -1,
      -1,    -1,   498,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,   863,   864,    -1,    -1,   511,    -1,    -1,    -1,    -1,
      -1,   873,    -1,  2503,    -1,  2505,    -1,    -1,    -1,    -1,
      -1,    -1,   528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,
      -1,   913,   343,   915,   916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   372,   373,    -1,    -1,    -1,   377,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2592,    -1,    -1,  2595,    -1,    -1,    -1,    -1,
      -1,   973,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2635,  2960,    -1,    -1,  2963,
      -1,    -1,    -1,  1015,    -1,  1017,    -1,    -1,    -1,    -1,
     451,    -1,    -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,  1067,    -1,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,  1080,    -1,
    1082,    -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,
    2720,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,    -1,
      -1,    -1,  1124,    -1,   555,   556,    -1,   558,   559,   560,
     561,    -1,   563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   582,    -1,  2783,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,   864,    -1,
      -1,  1223,    -1,    -1,  1226,    -1,    -1,   873,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1245,    -1,    -1,  1248,    -1,    -1,    -1,
     896,   897,   165,    -1,    -1,   686,   902,   688,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,    -1,   915,
     916,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     946,    -1,   948,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   746,    -1,    -1,    -1,    -1,
      -1,    -1,   753,    -1,    -1,    -1,    -1,   758,    -1,    -1,
    2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,    -1,    -1,
     771,    -1,    -1,    -1,    -1,  1347,    -1,   491,    -1,    -1,
     494,   495,    -1,    -1,    -1,    -1,   787,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,  1367,    -1,  1369,  1370,    -1,
    1372,   802,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1394,    -1,    -1,    -1,    -1,    -1,    -1,   830,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1410,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   863,   864,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   873,  1445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1461,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1124,    -1,
      -1,    -1,   913,    -1,   915,   916,    -1,    -1,    -1,  1491,
      -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,  1500,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1520,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1529,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   973,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1557,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1575,    -1,    -1,    -1,    -1,   491,    -1,
      -1,   494,    -1,    -1,  1015,   498,  1017,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
      -1,    -1,    -1,    -1,  1606,  1036,  1608,    -1,    -1,  1611,
      -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,    -1,    -1,
      -1,    -1,  1053,    -1,    -1,    -1,    -1,  1629,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1067,    -1,    -1,    -1,
      -1,    -1,  1644,   556,    -1,    -1,    -1,    -1,    -1,  1080,
      -1,  1082,    -1,    -1,    -1,    -1,    -1,    -1,  1660,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1100,
      -1,    -1,    -1,    -1,    -1,  1677,    -1,   590,    -1,  1110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,    -1,
      -1,    -1,    -1,  1124,    -1,    -1,    -1,  1699,    -1,    -1,
      -1,   845,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   372,   373,    -1,    -1,    -1,   863,
     864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   889,    -1,    -1,    -1,    -1,
      -1,    -1,   896,   897,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1408,    -1,  1410,    -1,    -1,    -1,    -1,   913,
      -1,   915,   916,   686,    -1,    -1,  1422,    -1,    -1,    -1,
      -1,    -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1223,    -1,    -1,  1226,    -1,    -1,    -1,  1445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1245,  1461,    -1,  1248,    -1,    -1,
      -1,  1823,    -1,    -1,  1470,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1479,    -1,    -1,   494,    -1,    -1,    -1,
      -1,    -1,    -1,  1489,  1846,  1491,    -1,    -1,    -1,    -1,
    1852,    -1,    -1,   511,  1500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   372,   373,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1874,    -1,  1520,    -1,    -1,   790,    -1,   792,
     793,   794,    -1,  1529,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1557,    -1,    -1,    -1,    -1,  1347,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,
      -1,    -1,   845,    -1,    -1,    -1,  1367,    -1,  1369,  1370,
      -1,  1372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     863,   864,  1954,    -1,  1956,    -1,    -1,  1959,    -1,    -1,
     873,    -1,    -1,  1394,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1980,  1410,
    1124,  1983,    -1,   896,   897,   494,    -1,    -1,    -1,   902,
      -1,  1422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     913,    -1,   915,   916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   926,  1445,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1461,    -1,    -1,   946,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2044,    -1,  1690,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,    -1,    -1,
    1491,    -1,    -1,    -1,  2066,    -1,  2068,    -1,  2070,  1500,
    2072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,    -1,  1520,
      -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,  1529,    -1,
     758,    -1,    -1,    -1,  2106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   771,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1557,  2129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2139,    -1,    -1,
      -1,    -1,    -1,    -1,  1575,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2162,    -1,  2164,    -1,    -1,    -1,    -1,  1080,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1606,    -1,  1608,    -1,    -1,
    1611,    -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1629,    -1,
      -1,    -1,    -1,    -1,    -1,   863,   864,    -1,    -1,    -1,
      -1,  1124,    -1,  1644,    -1,   873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1660,
      -1,    -1,  1145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2245,   753,    -1,  1677,    -1,    -1,   758,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,
      -1,    -1,   771,    -1,  1408,  2267,  1410,    -1,  1699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2279,  1422,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   946,    -1,
      -1,    -1,    -1,  2295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1445,    -1,    -1,    -1,    -1,    -1,    -1,  2310,    -1,
    1223,    -1,    -1,  1226,    -1,    -1,    -1,  1461,    -1,    -1,
      -1,    -1,  1466,    -1,    -1,    -1,  1470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1491,    -1,    -1,
      -1,    -1,    -1,    -1,   863,   864,  1500,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1520,  2379,    -1,    -1,
      -1,    -1,    -1,  2385,    -1,  1529,    -1,    -1,    -1,    -1,
      -1,    -1,  1823,    -1,    -1,    -1,    -1,    -1,  2044,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1557,    -1,  1846,    -1,    -1,    -1,    -1,
    2066,  1852,  2068,    -1,  2070,    -1,  2072,    -1,    -1,    -1,
    2432,  1575,    -1,    -1,    -1,    -1,  2082,    -1,    -1,  2085,
      -1,    -1,    -1,  1874,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1367,  2457,  1369,    -1,    -1,  2461,
    2106,    -1,    -1,    -1,  1377,    -1,  1124,    -1,    -1,    -1,
      -1,  1384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2129,  2486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2139,    -1,  1408,    -1,  1410,    -1,    -1,
      -1,  2503,    -1,  2505,    -1,    -1,    -1,    -1,    -1,  1422,
      -1,    -1,  2514,    -1,    -1,    -1,  2162,    -1,  2164,    -1,
      -1,    -1,    -1,  1954,    -1,  1956,    -1,    -1,  1959,    -1,
      -1,    -1,  1445,    -1,  2536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2545,    -1,    -1,  1690,    -1,  1461,  1980,
      -1,    -1,  1983,    -1,    -1,  1699,    -1,  1470,   491,    -1,
      -1,   494,   495,    -1,    -1,    -1,  1479,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,  1489,    -1,  1491,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1500,    -1,    -1,
    2592,    -1,    -1,  2595,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1520,    -1,    -1,
      -1,    -1,    -1,  2044,    -1,  1124,  1529,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2635,    -1,  2066,    -1,  2068,    -1,  2070,
      -1,  2072,    -1,    -1,  1557,    -1,    -1,  2649,    -1,  2295,
      -1,    -1,    -1,    -1,    -1,    -1,  1800,    -1,    -1,    -1,
      -1,    -1,  1575,    -1,  2310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1347,
      -1,    -1,    -1,    -1,    -1,  1608,    -1,    -1,  2129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1619,    -1,  2139,  1367,
      -1,  1369,  1370,    -1,  1372,  2717,  1629,    -1,  2720,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2162,    -1,  2164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,  2747,   494,    -1,    -1,    -1,
      -1,    -1,  1410,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1422,    -1,    -1,    -1,    -1,    -1,
      -1,  2773,    -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,
      -1,  2783,    -1,    -1,    -1,    -1,  1699,  1445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1461,    -1,    -1,    -1,  2809,    -1,    -1,
      -1,    -1,    -1,    -1,  2245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,   494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   502,    -1,  2267,    -1,  1347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2503,  1367,  2505,
    1369,  1370,    -1,  1372,  2295,    -1,    -1,    -1,  2514,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2310,
      -1,    -1,    -1,   491,    -1,    -1,   494,    -1,    -1,    -1,
    2536,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,  2545,
    2044,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1823,    -1,   845,  1422,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2066,    -1,  2068,    -1,  2070,    -1,  2072,    -1,
     863,   864,    -1,  1846,    -1,    -1,  1445,    -1,  2082,    -1,
     873,  2085,    -1,    -1,    -1,    -1,  2592,    -1,  2379,  2595,
      -1,    -1,  1461,    -1,  2385,    -1,   889,    -1,  2960,    -1,
      -1,  2963,  2106,   896,   897,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     913,    -1,   915,   916,    -1,  2129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   926,    -1,  2139,    -1,    -1,    -1,    -1,
      -1,  2432,    -1,  2649,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2162,    -1,
    2164,    -1,    -1,    -1,    -1,    -1,  2457,    -1,    -1,    -1,
    2461,    -1,  1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1699,    -1,  1956,    -1,    -1,  1959,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1980,    -1,    -1,
    1983,    -1,  2503,    -1,  2505,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2514,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,  2011,    -1,
      -1,  2747,    -1,    -1,    -1,  2536,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2545,   863,   864,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,  2773,    -1,    -1,
      -1,  2044,    -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2295,    -1,  2066,    -1,  2068,    -1,  2070,    -1,  2072,
      -1,  2592,    -1,  2809,  2595,   913,  2310,   915,   916,  2082,
      -1,    -1,  2085,    -1,    -1,    -1,    -1,   845,   926,    -1,
      -1,  1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1699,  1124,    -1,  2106,    -1,   863,   864,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2635,   873,    -1,    -1,    -1,    -1,
    2354,    -1,    -1,    -1,    -1,    -1,  2129,    -1,  2649,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   913,    -1,   915,   916,  2162,
      -1,  2164,    -1,    -1,    -1,   863,   864,    -1,   926,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,  2720,
      -1,    -1,    -1,    -1,    -1,    -1,  1954,    -1,  1956,    -1,
      -1,  1959,    -1,    -1,    -1,   913,    -1,   915,   916,    -1,
      -1,    -1,    -1,    -1,  2960,    -1,  2747,  2963,   926,    -1,
      -1,    -1,  1980,    -1,    -1,  1983,    -1,    -1,    -1,    -1,
      -1,    -1,  2245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2783,    -1,  2267,    -1,    -1,    -1,    -1,  2503,
      -1,  2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2514,    -1,    -1,    -1,    -1,    -1,  1124,    -1,  2809,    -1,
      -1,    -1,  2295,    -1,    -1,    -1,  2044,    -1,    -1,    -1,
      -1,    -1,  2536,    -1,    -1,    -1,    -1,  2310,    -1,    -1,
      -1,  2545,    -1,    -1,    -1,    -1,    -1,    -1,  2066,    -1,
    2068,    -1,  2070,    -1,  2072,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1954,    -1,  1956,  2592,    -1,
    1959,  2595,    -1,    -1,    -1,    -1,  1124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,
      -1,  1980,    -1,    -1,  1983,  1408,    -1,  1410,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1422,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2649,    -1,    -1,    -1,    -1,
      -1,    -1,  1445,    -1,    -1,    -1,  1124,    -1,    -1,  2432,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,  1461,  2960,
      -1,    -1,  2963,  1466,    -1,  2044,    -1,  1470,  2682,    -1,
      -1,    -1,    -1,    -1,  2457,    -1,  1479,    -1,  2461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2066,  1491,  2068,
      -1,  2070,    -1,  2072,    -1,    -1,    -1,  1500,    -1,    -1,
      -1,    -1,    -1,  2486,    -1,   555,   556,    -1,   558,   559,
     560,   561,    -1,   563,    -1,    -1,    -1,  1520,    -1,    -1,
    2503,    -1,  2505,    -1,    -1,    -1,  1529,    -1,    -1,    -1,
      -1,  2514,    -1,  2747,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2536,  1557,    -1,    -1,    -1,    -1,  2773,
      -1,    -1,  2545,    -1,    -1,    -1,    -1,  2295,    -1,  2783,
      -1,    -1,  1575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1408,    -1,  1410,    -1,    -1,  2809,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1422,    -1,    -1,    -1,    -1,  2592,
      -1,    -1,  2595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,   688,    -1,
      -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2649,    -1,    -1,    -1,
    1408,    -1,  1410,  1491,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1500,    -1,  1422,    -1,    -1,  1690,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1699,    -1,    -1,    -1,
      -1,    -1,  1520,    -1,  2432,    -1,    -1,  1445,    -1,    -1,
      -1,  1529,    -1,    -1,    -1,    -1,  2295,    -1,    -1,    -1,
      -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,    -1,  2457,
    1408,  2310,  1410,  2461,  2717,    -1,    -1,  2720,    -1,  1557,
      -1,    -1,    -1,    -1,  1422,    -1,  2960,    -1,    -1,  2963,
      -1,    -1,    -1,  1491,    -1,    -1,    -1,  1575,  2486,    -1,
      -1,    -1,  1500,    -1,  2747,    -1,    -1,  1445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2503,    -1,  2505,    -1,    -1,
      -1,    -1,  1520,  1461,    -1,    -1,  2514,    -1,    -1,    -1,
    2773,  1529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,
      -1,    -1,    -1,  1491,    -1,    -1,    -1,  2545,    -1,  1557,
      -1,    -1,  1500,    -1,    -1,    -1,  2809,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,    -1,    -1,
      -1,    -1,  1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1529,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   913,    -1,   915,   916,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,   926,    -1,  2457,  1557,
      -1,  1699,  2461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2649,    -1,   973,  2503,    -1,  2505,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,    -1,  2536,    -1,    -1,
      -1,  1699,    -1,    -1,    -1,  1015,  2545,  1017,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2960,    -1,    -1,
    2963,    -1,    -1,    -1,    -1,    -1,  1036,    -1,    -1,  2717,
      -1,    -1,  2720,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,    -1,  1067,    -1,  2747,
      -1,  1699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1080,    -1,  1082,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2044,    -1,    -1,    -1,  2773,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2066,    -1,  2068,    -1,  2070,    -1,  2072,
    2649,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2082,
      -1,  2809,  2085,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2139,    -1,  2717,    -1,
      -1,  2720,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2162,
      -1,  2164,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,    -1,    -1,  1223,    -1,    -1,  1226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2773,  1245,    -1,    -1,  1248,    -1,
      -1,    -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2044,    -1,    -1,    -1,
    2809,    -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2066,    -1,
    2068,    -1,  2070,    -1,  2072,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2106,    -1,
      -1,    -1,  2295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2044,  2310,    -1,    -1,
      -1,  2129,    -1,    -1,    -1,    -1,    -1,  1367,    -1,  1369,
      -1,  2139,    -1,    -1,    -1,    -1,    -1,    -1,  2066,    -1,
    2068,    -1,  2070,    -1,  2072,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2162,    -1,  2164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2044,    -1,  2106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,  2066,    -1,
    2068,  2129,  2070,    -1,  2072,    -1,    -1,    -1,    -1,    -1,
      -1,  2139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2162,    -1,  2164,    -1,  2106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1500,  2129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1520,    -1,    -1,   502,    -1,    -1,    -1,  2295,    -1,  1529,
      -1,    -1,    -1,    -1,  2162,    -1,  2164,    -1,    -1,    -1,
      -1,    -1,  2310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2503,    -1,  2505,    -1,    -1,    -1,    -1,  1557,    -1,    -1,
      -1,  2514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1575,   555,   556,    -1,   558,
     559,   560,   561,  2536,   563,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1606,  2295,  1608,    -1,
      -1,  1611,    -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,
      -1,    -1,  2310,    -1,    -1,    -1,    -1,    -1,    -1,  1629,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,
      -1,    -1,  2595,    -1,  1644,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2649,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,   688,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2503,    -1,  2505,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2514,   502,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2545,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2747,    -1,    -1,    -1,    -1,    -1,
     555,   556,    -1,   558,   559,   560,   561,    -1,   563,    -1,
      -1,    -1,    -1,    -1,    -1,  2503,    -1,  2505,    -1,    -1,
    2773,    -1,    -1,  1823,  2592,    -1,  2514,  2595,    -1,    -1,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1846,    -1,  2536,    -1,
      -1,    -1,  1852,    -1,    -1,    -1,  2809,  2545,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1874,  2503,    -1,  2505,    -1,    -1,
      -1,  2649,    -1,    -1,    -1,    -1,  2514,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2592,    -1,    -1,  2595,  2536,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2545,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   686,    -1,   688,   913,    -1,   915,   916,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1956,    -1,    -1,  1959,
      -1,  2649,    -1,    -1,  2592,    -1,    -1,  2595,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,
    1980,    -1,    -1,  1983,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   973,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2773,    -1,  2960,    -1,    -1,
    2963,    -1,    -1,    -1,    -1,  2783,    -1,   996,    -1,    -1,
      -1,  2649,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1015,    -1,  1017,    -1,
      -1,  2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1036,    -1,  2747,
      -1,    -1,    -1,    -1,    -1,    -1,  2066,    -1,  2068,    -1,
      -1,    -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2773,    -1,    -1,  1067,    -1,
      -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,
      -1,  1080,    -1,  1082,    -1,    -1,  2106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,
      -1,  2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2139,
      -1,    -1,    -1,    -1,    -1,  2773,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,   913,    -1,
     915,   916,  2162,    -1,  2164,    -1,    -1,    -1,    -1,    -1,
      -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   973,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   996,    -1,    -1,  1223,  2245,    -1,  1226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1015,    -1,  1017,    -1,    -1,    -1,  1245,  2267,    -1,  1248,
      -1,    -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,
      -1,  1036,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1053,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1067,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1080,    -1,  1082,    -1,    -1,
      -1,    -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2379,
      -1,    -1,    -1,    -1,    -1,  2385,    -1,    -1,  1367,    -1,
    1369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2457,    -1,    -1,
      -1,  2461,    -1,    -1,    -1,    -1,    -1,    -1,  1223,    -1,
      -1,  1226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,    -1,
    1245,    -1,    -1,  1248,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2505,    -1,    -1,    -1,    -1,
      -1,    -1,  1491,    -1,  2514,    -1,    -1,    -1,    -1,    -1,
      -1,  1500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,    -1,    -1,
      -1,  1520,    -1,    -1,    -1,  2545,    -1,    -1,    -1,    -1,
    1529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1557,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2592,    -1,    -1,  2595,  1575,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1367,    -1,  1369,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1606,    -1,  1608,
      -1,    -1,  1611,    -1,  1613,  2635,  1615,    -1,  1617,    -1,
    1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1644,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,
    2720,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1500,    -1,  2747,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1520,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2773,  1529,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1557,    -1,    -1,    -1,    -1,    -1,    -1,  2809,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1823,    -1,    -1,    -1,    -1,    -1,
      -1,  1606,    -1,  1608,    -1,    -1,  1611,    -1,  1613,    -1,
    1615,    -1,  1617,    -1,  1619,    -1,    -1,  1846,    -1,    -1,
      -1,    -1,    -1,  1852,  1629,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1644,
      -1,    -1,    -1,    -1,    -1,  1874,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1956,    -1,    -1,
    1959,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1980,    -1,    -1,  1983,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1823,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2066,    -1,  2068,
      -1,  1846,    -1,    -1,    -1,    -1,    -1,  1852,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1874,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2162,    -1,  2164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1956,    -1,    -1,  1959,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1980,    -1,    -1,  1983,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2066,    -1,  2068,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2379,    -1,    -1,    -1,    -1,    -1,  2385,  2162,    -1,  2164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2457,    -1,
      -1,    -1,  2461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2486,    -1,    -1,
      -1,    -1,  2267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2505,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2536,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2545,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2592,    -1,    -1,  2595,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,    -1,    -1,
    2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2635,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2457,    -1,    -1,    -1,  2461,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,
      -1,  2720,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2545,    -1,    -1,    -1,  2773,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2809,    -1,    -1,    -1,    -1,    -1,    -1,  2592,    -1,    -1,
    2595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2717,    -1,    -1,  2720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2960,    -1,    -1,  2963,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2747,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2809,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,  2960,    -1,    -1,  2963
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    19,    20,    28,    29,    30,    39,    62,
      83,    86,   125,   131,   135,   136,   147,   186,   187,   188,
     191,   196,   225,   230,   274,   275,   279,   282,   314,   323,
     327,   328,   342,   344,   346,   348,   349,   351,   353,   355,
     357,   359,   361,   363,   365,   366,   367,   368,   370,   372,
     374,   376,   403,   572,   577,   582,   587,   592,   597,   602,
     607,   612,   617,   622,   627,   632,   637,   642,   647,   652,
     657,   662,   667,   672,   677,   682,   684,   688,   690,   692,
     696,   697,   699,   701,   704,   706,   708,   710,   712,   714,
     716,   718,   720,   722,   724,   726,   728,   730,   732,   734,
     736,   738,   740,   744,   745,   749,   752,   754,   756,   758,
     763,   767,   774,    29,   683,    29,   685,    18,    21,    26,
      29,   147,   201,    29,   225,   705,   737,   739,   741,   746,
     753,   371,    16,   764,   283,   759,   689,   343,   377,     7,
       8,   757,     6,   280,   375,    29,   345,   350,    29,    83,
     148,   149,   150,   167,   225,   358,   369,   364,   404,   373,
       4,     5,     8,    10,    62,   230,   324,   131,     0,   201,
     210,   276,   325,   329,   331,   333,   335,   337,   339,   340,
     691,    26,    28,    31,    34,    35,    36,    37,    38,    39,
     228,   229,   789,   837,   890,  1012,  1018,  1033,  1039,  1047,
    1065,  1067,  1070,  1071,  1087,  1099,   693,   790,   838,   891,
    1012,  1018,  1033,  1039,  1047,  1065,  1067,  1071,  1087,  1099,
     315,   775,   768,   700,   702,   362,   707,     4,     5,    31,
      53,   272,   798,   844,   897,  1012,  1018,  1033,  1044,  1065,
      26,    54,   814,   860,   925,  1010,  1018,  1039,  1065,  1071,
    1114,    55,    56,   815,   861,   926,  1078,  1080,    37,   816,
     862,   927,  1012,  1018,  1033,  1039,  1069,  1099,    57,   818,
     863,   928,  1012,  1018,  1033,  1037,  1069,     4,     5,    10,
      14,   225,   821,   865,   930,   216,   423,   435,   449,   562,
    1012,   755,   249,    24,    32,   284,   285,   286,   287,  1005,
     249,   760,    22,    45,    46,    47,    49,   792,   839,   892,
     968,  1018,  1039,  1047,  1053,  1059,  1061,  1063,  1065,  1071,
    1099,    22,    24,   116,   117,   118,   119,   120,   121,   122,
     123,   226,   386,   424,   436,   450,   452,   453,   454,   457,
     481,   483,   496,   935,  1002,  1012,  1018,  1033,  1097,    29,
     120,   200,   476,   565,   566,   567,   568,   569,   570,   571,
      29,   225,   573,   603,    84,    85,   788,   836,   889,   994,
     998,  1002,  1012,  1018,  1033,  1097,  1114,   147,   201,     5,
       7,    10,    12,    62,    83,   147,   225,   278,   281,   282,
     323,   342,   344,   346,   351,   357,   366,   370,   372,   376,
     403,   572,   577,   587,   597,   602,   607,   617,   627,   632,
     637,   642,   647,   652,   657,   667,   677,   686,   688,   694,
     697,   704,   706,   710,   714,   718,   720,   724,   726,   728,
     730,   732,   734,   736,   742,   744,   747,   750,   756,   249,
     379,   347,    22,   132,   133,   134,   387,   425,   437,   450,
     452,   453,   454,   481,   498,   500,   502,   938,  1002,  1012,
    1018,  1033,  1039,  1065,  1097,  1114,   137,   138,   139,   140,
     141,   185,   389,   427,   439,   503,   504,   505,   506,   508,
     509,   638,     7,     8,   643,   352,   148,   148,   360,     4,
       5,     8,   608,    22,    89,   153,   154,   155,   172,   175,
     393,   431,   443,   454,   457,   510,   521,   523,   525,   530,
     550,   958,   998,  1012,  1018,  1033,  1070,   422,   434,   448,
     457,   143,   189,   190,   249,   398,   401,   402,   418,   419,
     420,   142,   144,   195,   405,   407,   410,   411,   417,   418,
     419,   420,   421,   249,   378,    29,   717,    29,   719,   721,
     723,   725,   131,   727,    22,    23,    25,    27,   780,   828,
     870,   931,   992,  1000,  1002,  1007,  1012,  1018,  1033,  1097,
    1099,    29,   729,     7,    83,   148,   167,   326,   341,   793,
     840,   893,   968,  1012,  1018,  1033,  1039,  1047,  1053,  1059,
    1061,  1063,  1065,  1067,  1070,  1071,  1087,  1099,   249,  1013,
    1040,   249,  1088,  1066,  1072,   249,  1019,  1034,   256,   890,
     794,   841,   894,   968,  1012,  1018,  1033,  1039,  1047,  1053,
    1059,  1061,  1063,  1065,  1067,  1071,  1087,  1099,   256,   891,
     249,   316,   249,   249,    50,    51,    52,   797,   843,   896,
    1047,  1053,  1061,  1074,  1076,  1077,   249,   168,   173,   174,
     249,   395,   433,   447,   536,   546,   548,    26,   272,   799,
     845,   898,   899,   900,   968,  1012,  1018,  1033,  1039,  1059,
    1061,  1063,  1065,  1071,  1100,    29,   709,    29,   711,  1045,
     249,   256,   897,  1115,   249,   256,   925,  1079,  1081,   256,
     927,  1038,   256,   928,    22,   256,   980,   249,   247,   449,
     822,   866,   930,   214,   765,   766,   249,   288,   247,   286,
     214,   761,   762,    48,    58,   823,   824,   867,   996,  1082,
     969,  1060,  1062,   249,  1064,   256,   892,   249,  1003,   451,
     249,   458,   482,   249,   497,  1098,   247,   436,   477,   247,
     569,   247,   568,   578,     4,     5,   272,   574,   575,   576,
     994,   998,  1002,  1012,  1018,  1033,  1044,  1065,  1097,  1114,
     604,   605,   606,   994,   998,  1002,  1010,  1012,  1018,  1033,
    1039,  1065,  1071,  1097,  1114,   995,   999,   247,   889,    29,
     687,   225,   743,   748,   751,     7,    83,   225,   214,   380,
      22,   388,   426,   438,   450,   452,   453,   454,   481,   498,
     500,   502,   964,  1002,  1012,  1018,  1033,  1039,  1047,  1053,
    1059,  1061,  1063,  1065,  1071,  1097,  1099,   249,   499,   501,
     247,   437,   249,   214,   247,   439,    22,   454,   457,   510,
     521,   525,   530,   550,   639,   640,   641,   948,  1012,  1018,
    1033,  1039,  1047,  1053,  1059,  1061,  1063,  1065,  1070,  1071,
    1099,    29,   225,   648,   658,   454,   457,   510,   521,   525,
     530,   550,   644,   645,   646,   958,   994,   998,  1002,  1012,
    1018,  1033,  1070,  1097,  1114,    22,   145,   146,   390,   428,
     440,   510,   517,   519,   550,   941,   354,   356,    22,    89,
     169,   394,   432,   444,   445,   446,   457,   514,   536,   541,
     961,  1070,    29,   613,    29,   618,   633,    22,   454,   457,
     510,   521,   525,   530,   550,   609,   610,   611,   944,   992,
    1000,  1002,  1007,  1012,  1018,  1033,  1070,  1097,  1099,   249,
     249,   522,   524,   526,   531,   551,   247,   443,   247,   448,
     214,   399,   400,   249,   412,   167,   192,   193,   194,   406,
     409,   413,   414,   415,   416,   247,   411,   247,   410,   214,
     385,    22,   796,   842,   895,   972,   992,  1000,  1002,  1007,
    1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,  1063,  1065,
    1067,  1071,  1087,  1097,  1099,   804,   850,   915,   931,   992,
    1000,  1002,  1007,  1012,  1018,  1033,  1039,  1047,  1065,  1067,
    1070,  1071,  1087,  1097,  1099,   698,   805,   851,   916,   931,
     992,  1000,  1002,  1007,  1012,  1018,  1033,  1039,  1047,  1065,
    1067,  1071,  1087,  1097,  1099,   806,   852,   917,   931,   992,
    1000,  1002,  1007,  1010,  1012,  1018,  1033,  1039,  1065,  1071,
    1097,  1099,   807,   853,   918,   931,   992,  1000,  1002,  1007,
    1012,  1018,  1033,  1039,  1097,  1099,   808,   854,   919,   931,
     992,  1000,  1002,  1007,  1012,  1018,  1033,  1097,  1099,    29,
     733,   809,   855,   920,   931,   992,  1000,  1002,  1007,  1012,
    1018,  1033,  1097,  1099,   932,   993,  1001,  1008,   247,   870,
     731,   450,   452,   453,   454,   481,   498,   500,   502,   810,
     856,   921,   938,  1002,  1012,  1018,  1033,  1039,  1065,  1097,
    1099,   336,     7,   230,   334,   330,   332,   202,   203,   209,
     781,   829,   871,   872,   873,   874,   875,   876,  1020,  1021,
    1025,   120,   787,   835,   886,   256,   893,    69,    70,    73,
      74,   214,   221,   222,   223,   242,   243,   244,   253,   254,
     255,  1110,  1111,  1112,  1113,   249,   249,   214,   218,   219,
     220,  1049,  1052,   249,   249,   249,  1068,   249,   249,   890,
     256,   894,   891,   214,    33,   318,   319,   320,   321,    61,
     214,   776,   777,   778,   779,    69,    70,   242,   243,   244,
     253,   254,   255,   769,   770,  1075,   256,   896,   214,   703,
     249,   547,   249,   214,   396,   397,   247,   447,  1101,   256,
     898,  1047,  1053,   713,   272,   800,   846,   901,   902,   903,
     931,   992,  1000,  1002,  1007,  1012,  1018,  1033,  1039,  1065,
    1070,  1071,  1087,  1097,  1100,   715,   272,   801,   847,   904,
     905,   906,   931,   992,  1000,  1002,  1007,  1012,  1018,  1033,
    1039,  1065,  1071,  1087,  1097,  1100,   249,    40,   273,   897,
     249,    17,    83,   225,  1011,   925,   249,   249,   927,   249,
     928,   249,   980,    69,    70,    73,    74,   214,   242,   243,
     244,   253,   254,   255,   563,   564,   449,   247,   250,  1006,
     249,   286,   247,   250,   997,   249,   247,   867,   249,   249,
     249,   214,  1054,   249,   892,    30,   214,   936,   249,   249,
      69,    70,    73,    74,   214,   242,   243,   244,   253,   254,
     255,   455,   456,   249,   249,   124,   214,   484,   486,   249,
     249,   436,   249,   569,   568,   272,   579,   580,   581,   968,
     994,   998,  1002,  1012,  1018,  1033,  1039,  1047,  1053,  1059,
    1061,  1063,  1065,  1071,  1097,  1099,    29,   583,    29,   588,
     247,   576,   247,   606,   249,   249,   889,   695,   791,  1070,
     817,  1070,    57,   819,   864,   929,  1035,  1070,   820,  1070,
     225,     7,   250,   249,   247,   438,   131,   214,   939,   249,
     249,   437,   142,   143,   144,   507,   439,   249,   247,   641,
     653,     4,     5,    53,   454,   457,   510,   521,   525,   530,
     550,   649,   650,   651,   958,   994,   998,  1002,  1012,  1018,
    1033,  1044,  1065,  1070,  1084,  1097,  1114,   454,   457,   510,
     521,   525,   530,   550,   659,   660,   661,   958,   994,   998,
    1002,  1010,  1012,  1018,  1033,  1039,  1065,  1070,  1071,  1097,
    1114,   247,   646,   249,   518,   520,   247,   440,    22,   391,
     429,   441,   457,   510,   550,   952,  1070,    22,   392,   430,
     442,   457,   510,   550,   955,  1070,   249,   249,   249,   247,
     444,   623,   454,   457,   510,   521,   525,   530,   550,   614,
     615,   616,   944,   992,  1000,  1002,  1007,  1012,  1018,  1033,
    1039,  1047,  1065,  1067,  1070,  1071,  1084,  1087,  1097,  1099,
     628,   454,   457,   510,   521,   525,   530,   550,   619,   620,
     621,   944,   992,  1000,  1002,  1007,  1012,  1018,  1033,  1039,
    1047,  1065,  1067,  1070,  1071,  1084,  1087,  1097,  1099,   454,
     457,   510,   521,   525,   530,   550,   634,   635,   636,   944,
     992,  1000,  1002,  1007,  1010,  1012,  1018,  1033,  1039,  1065,
    1070,  1071,  1097,  1099,   249,   247,   611,   147,   214,   959,
     151,   152,   214,   511,   513,   249,   249,   249,   249,   249,
     443,   448,   247,   250,   399,   249,   247,   408,   410,   411,
     406,   411,   406,   410,   250,   249,   256,   895,   256,   915,
     796,   256,   916,   256,   917,   256,   918,   256,   919,   735,
      22,   450,   452,   453,   481,   498,   500,   502,   812,   858,
     923,   983,   992,  1000,  1002,  1007,  1012,  1018,  1033,  1039,
    1065,  1070,  1097,  1099,   256,   920,   249,   249,   249,   249,
     870,   450,   452,   453,   454,   481,   498,   500,   502,   811,
     857,   922,   964,  1002,  1012,  1018,  1033,  1039,  1047,  1053,
    1059,  1061,  1063,  1065,  1071,  1097,  1099,   256,   921,   272,
     785,   833,   880,   881,   882,  1012,  1018,  1033,  1044,  1065,
     338,   454,   457,   510,   521,   525,   530,   550,   784,   832,
     879,   958,   994,   998,  1002,  1012,  1018,  1033,  1070,  1097,
    1114,   204,   205,   206,   207,   782,   830,   877,  1020,  1021,
    1023,  1025,  1027,  1029,  1031,  1099,   783,   831,   878,  1020,
    1021,  1023,  1025,  1027,  1029,  1031,  1099,   249,  1022,  1026,
     247,   871,  1023,  1027,  1029,  1100,   207,  1103,   887,   247,
     886,   893,   248,   247,    75,    76,    77,    78,    79,    80,
      81,    82,   214,  1014,  1017,   214,   217,  1041,  1046,   247,
     248,   250,  1051,    40,    41,    42,    43,    44,   233,   234,
     235,  1089,  1091,  1092,  1095,  1096,   214,   258,   224,  1073,
     258,   214,   259,   260,   260,   894,   317,   322,   247,   320,
     250,   248,   250,   248,   249,   896,   250,   170,   214,   537,
     539,   249,    95,    96,    97,   549,   247,   250,   447,   249,
     898,   272,   802,   848,   907,   908,   909,   910,   972,   992,
    1000,  1002,  1007,  1012,  1018,  1033,  1039,  1059,  1061,  1063,
    1065,  1070,  1071,  1087,  1097,  1100,   256,   901,  1047,  1067,
     272,   803,   849,   911,   912,   913,   914,   972,   992,  1000,
    1002,  1007,  1012,  1018,  1033,  1039,  1059,  1061,  1063,  1065,
    1071,  1087,  1097,  1100,   256,   904,  1047,  1067,   260,   247,
     250,   223,  1111,  1116,  1117,   250,   260,   260,   260,    13,
     214,   981,   248,   765,   250,    87,    88,    89,    90,   292,
     293,   296,   761,   249,    75,    76,    77,    78,    79,    80,
      81,    82,   214,  1083,   867,    29,   214,   970,   260,   260,
     247,   248,   250,   260,   248,   250,   226,   227,   228,   229,
    1004,   258,   248,   124,   125,   127,   128,   129,   130,   459,
     460,   461,   471,   258,   487,   247,   250,   248,   258,   260,
     197,   198,   478,   479,   247,   581,   593,   272,   584,   585,
     586,   931,   992,   994,   998,  1000,  1002,  1007,  1012,  1018,
    1033,  1039,  1047,  1065,  1067,  1070,  1071,  1087,  1097,  1099,
     598,   272,   589,   590,   591,   931,   992,   994,   998,  1000,
    1002,  1007,  1012,  1018,  1033,  1039,  1047,  1065,  1067,  1070,
    1071,  1087,  1097,  1099,   576,   606,   258,   258,   795,  1070,
    1036,   256,   929,   225,   120,   167,   199,   381,   382,   383,
     472,    29,   131,   214,   965,   438,   248,   250,   258,   258,
     250,    29,   147,   214,   949,   641,   454,   457,   510,   521,
     525,   530,   550,   654,   655,   656,   948,   994,   998,  1002,
    1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,  1063,  1065,
    1070,  1071,  1084,  1097,  1099,    29,   663,    29,   668,   249,
     247,   651,   247,   661,   646,   147,   214,   942,   249,   249,
     440,   249,   247,   441,   249,   247,   442,   147,   214,   962,
     214,   515,   171,   214,   542,   544,   444,    22,   454,   457,
     510,   521,   525,   530,   550,   624,   625,   626,   975,   992,
    1000,  1002,  1007,  1012,  1018,  1033,  1039,  1047,  1053,  1059,
    1061,  1063,  1065,  1067,  1070,  1071,  1087,  1097,  1099,   247,
     616,   454,   457,   510,   521,   525,   530,   550,   629,   630,
     631,   975,   992,  1000,  1002,  1007,  1012,  1018,  1033,  1039,
    1047,  1053,  1059,  1061,  1063,  1065,  1067,  1070,  1071,  1087,
    1097,  1099,   247,   621,   247,   636,   147,   214,   225,   945,
     611,   248,   250,   247,   250,   248,   260,   260,   156,   157,
     158,   159,   160,   161,   162,   527,   528,    75,    76,    77,
      78,    79,    80,    81,    82,   214,   532,   533,   534,   535,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   214,
     552,   554,   557,   560,   561,   400,   250,   258,   408,   247,
     411,   247,   410,   247,   406,   247,   406,   247,   411,   973,
     895,   915,   916,   917,   918,   919,    22,   450,   452,   453,
     481,   498,   500,   502,   813,   859,   924,   987,   992,  1000,
    1002,  1007,  1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,
    1063,  1065,  1070,  1071,  1097,  1099,   249,   256,   923,   920,
     214,   225,   933,   258,   260,   230,   231,   232,  1009,   256,
     922,   921,   247,   880,  1100,  1103,   272,   454,   457,   510,
     521,   525,   530,   550,   786,   834,   883,   884,   885,   958,
     994,   998,  1002,  1012,  1018,  1033,  1044,  1065,  1070,  1097,
     247,   879,  1024,  1028,  1030,  1032,   247,   877,   247,   878,
     259,   261,   249,   249,   871,  1104,   249,   886,   260,  1111,
     247,   250,   248,  1042,   250,   248,  1050,   214,   249,   250,
    1090,  1093,   247,   250,   250,   250,   247,   250,   250,   250,
     249,   320,   550,   826,   827,   869,   214,   779,    59,   825,
     868,  1056,   214,   771,   772,   260,   797,   540,   247,   250,
     248,   260,   250,   396,   214,  1106,  1109,  1112,  1113,   256,
     907,  1047,  1067,  1053,   901,   256,   911,  1047,  1067,  1053,
     904,   250,   214,   248,   247,   250,   250,   250,   248,   250,
     260,   247,   248,   293,   294,   258,   250,   248,   250,   250,
     250,  1055,   214,   250,   937,   250,   250,   260,   462,   248,
     247,   250,   249,   485,   260,   250,   250,   480,   250,   581,
     272,   594,   595,   596,   972,   992,   994,   998,  1000,  1002,
    1007,  1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,  1063,
    1065,  1067,  1070,  1071,  1087,  1097,  1099,   247,   586,   272,
     599,   600,   601,   972,   992,   994,   998,  1000,  1002,  1007,
    1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,  1063,  1065,
    1067,  1070,  1071,  1087,  1097,  1099,   247,   591,   250,   250,
     249,   929,   473,   249,   248,   248,   250,   940,   250,   250,
     248,   248,   250,   247,   656,   673,   454,   457,   510,   521,
     525,   530,   550,   664,   665,   666,   944,   992,   994,   998,
    1000,  1002,  1007,  1012,  1018,  1033,  1039,  1047,  1065,  1067,
    1070,  1071,  1084,  1087,  1097,  1099,   678,   454,   457,   510,
     521,   525,   530,   550,   669,   670,   671,   944,   992,   994,
     998,  1000,  1002,  1007,  1012,  1018,  1033,  1039,  1047,  1065,
    1067,  1070,  1071,  1084,  1087,  1097,  1099,    40,  1085,   651,
     661,   148,   250,   260,   260,   147,   214,   953,   441,   147,
     214,   956,   442,   167,   250,   247,   250,   545,   247,   250,
     248,   249,   247,   626,   616,   247,   631,   621,   636,   248,
     248,   250,   960,   512,   260,   250,   250,   250,   248,   250,
     247,   249,   249,   249,   247,   250,   248,   176,   177,   247,
     555,   558,   560,   561,   250,   411,   410,   406,   406,   411,
      29,   214,   225,   974,   249,   256,   924,   131,   214,   225,
     984,   923,   248,   250,   250,   250,   250,   922,   880,   247,
     883,  1100,  1103,   879,   249,   249,   249,   249,   877,   878,
     247,   250,   261,   259,   265,   249,   127,   130,   888,   250,
    1015,  1016,   247,  1043,   260,  1048,   260,   248,   247,   214,
     259,   292,   247,   869,   249,   247,   248,   250,   249,   538,
     260,   250,  1102,  1107,   907,   911,   260,  1111,   982,   250,
     293,   289,   238,   250,   971,   260,   250,   258,   250,   249,
     260,   460,   214,   488,   489,   260,   248,   247,   596,   586,
     247,   601,   591,   260,   249,   125,   127,   128,   129,   130,
     197,   198,   384,   967,   966,   258,   951,   950,   656,   454,
     457,   510,   521,   525,   530,   550,   674,   675,   676,   975,
     992,   994,   998,  1000,  1002,  1007,  1012,  1018,  1033,  1039,
    1047,  1053,  1059,  1061,  1063,  1065,  1067,  1070,  1071,  1084,
    1087,  1097,  1099,   247,   666,   454,   457,   510,   521,   525,
     530,   550,   679,   680,   681,   975,   992,   994,   998,  1000,
    1002,  1007,  1012,  1018,  1033,  1039,  1047,  1053,  1059,  1061,
    1063,  1065,  1067,  1070,  1071,  1084,  1087,  1097,  1099,   247,
     671,  1086,   250,   248,   250,   250,   149,   250,   150,   250,
     248,   516,   249,   543,   260,    29,   147,   214,   225,   976,
     626,   631,   946,   947,   258,   260,   163,   164,   165,   166,
     529,   532,   214,   214,   214,   553,   260,   555,   560,   176,
     177,   247,   556,   559,   560,   561,   248,   248,   250,    29,
     131,   214,   225,   988,   924,   248,   248,   250,   934,   883,
     259,   270,   270,   270,  1110,   259,   250,   248,   250,   214,
    1105,  1108,  1112,  1113,   248,   260,   260,   260,   260,   250,
     250,  1091,   233,   234,   235,  1094,   250,   869,    60,  1057,
     771,   214,   773,   214,   260,   248,   247,   250,   258,     6,
       7,    83,   225,   277,   282,   291,   314,   323,   682,   688,
     690,   699,   704,   706,   708,   712,   736,   738,   740,   744,
     745,   752,   754,   756,   758,   251,   258,   214,   463,   464,
     250,   214,   491,   247,   250,   260,   596,   601,   250,   127,
     128,   129,   130,   474,   475,   250,   258,   258,   258,   258,
     247,   676,   666,   247,   681,   671,   247,   943,   148,   148,
     963,   260,   214,   260,   248,   248,   248,   250,   258,   258,
     250,   250,   250,   260,   556,   560,   247,   560,   258,   258,
     248,   248,   248,   250,   986,   985,   258,   271,   250,   250,
     250,   248,   208,   248,   247,   260,   238,   250,   250,   259,
     262,  1109,    29,   225,   290,    91,    93,    94,   101,   102,
     103,   214,   225,   297,   298,   299,   301,   302,   304,   305,
     306,   308,   309,   214,   466,   247,   250,   490,   238,   489,
     250,   248,   676,   681,   214,   258,   248,   248,   258,   250,
     977,   979,   978,   560,   991,   990,   989,   258,   258,   247,
     248,   266,   268,   260,   249,   259,   264,  1109,   250,   214,
    1058,   250,   263,   250,   249,   249,   249,   249,   249,   249,
     249,   249,   247,   295,   298,   465,   238,   464,   238,   214,
     492,   258,   954,   957,   258,   258,   258,   258,   258,   258,
     267,   208,   250,   259,   247,   250,   247,    92,   312,   312,
     312,   312,   312,   312,   312,   310,   298,   252,   238,   214,
     467,   492,   493,   258,   258,   270,   249,   250,   259,   259,
     249,   214,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   307,    95,    96,    97,    98,    99,
     100,   303,   214,   214,   214,   250,   311,   312,   467,   468,
     248,   259,   214,   300,   250,   250,   250,   780,   248,   214,
     250,   313,   250,   214,   494,   269,   250,   469,   248,   495,
     266,   248,   248,   470,   214,   214
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   257,   258,   259,   260,   260,   261,   261,   262,   263,
     262,   264,   264,   265,   266,   267,   266,   268,   269,   268,
     271,   270,   272,   273,   273,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   274,   276,   276,   276,   276,   276,   276,
     276,   276,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   280,   279,   281,   283,   282,   284,   284,   285,
     285,   285,   286,   286,   288,   289,   290,   287,   291,   291,
     292,   292,   292,   294,   295,   293,   296,   296,   296,   296,
     297,   297,   297,   298,   298,   298,   298,   300,   299,   301,
     301,   301,   302,   303,   303,   303,   303,   303,   303,   304,
     305,   306,   306,   306,   306,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   308,   309,   310,
     309,   311,   312,   313,   312,   315,   314,   317,   316,   318,
     318,   319,   319,   319,   320,   322,   321,   324,   323,   326,
     325,   327,   328,   330,   329,   332,   331,   334,   333,   336,
     335,   338,   337,   339,   341,   340,   343,   342,   345,   344,
     347,   346,   348,   350,   349,   352,   351,   354,   353,   356,
     355,   358,   357,   360,   359,   362,   361,   364,   363,   365,
     366,   367,   369,   368,   371,   370,   373,   372,   375,   374,
     377,   376,   378,   378,   378,   378,   379,   380,   381,   381,
     381,   382,   383,   384,   384,   384,   384,   384,   384,   384,
     385,   386,   386,   387,   387,   388,   388,   389,   390,   391,
     391,   392,   392,   393,   393,   394,   395,   395,   395,   396,
     397,   397,   398,   398,   398,   399,   399,   400,   401,   401,
     402,   402,   402,   404,   403,   405,   405,   405,   405,   405,
     405,   405,   405,   406,   406,   407,   407,   407,   407,   407,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   410,   410,   410,   410,   410,   412,   411,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   422,   423,
     423,   424,   424,   424,   425,   425,   425,   426,   426,   426,
     427,   427,   427,   428,   428,   428,   429,   429,   429,   430,
     430,   430,   431,   431,   431,   432,   432,   432,   433,   433,
     433,   434,   434,   434,   435,   435,   435,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   439,   439,   439,   439,   439,   439,   440,   440,   440,
     440,   440,   441,   441,   441,   441,   441,   442,   442,   442,
     442,   442,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   444,   444,   445,   445,
     446,   446,   446,   446,   447,   447,   447,   448,   449,   449,
     451,   450,   452,   453,   454,   455,   455,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   458,   457,   459,
     459,   460,   462,   461,   463,   463,   465,   464,   466,   464,
     468,   469,   467,   470,   470,   471,   471,   471,   471,   471,
     473,   472,   474,   475,   475,   475,   475,   477,   476,   478,
     479,   480,   479,   482,   481,   483,   484,   485,   484,   484,
     487,   486,   488,   488,   490,   489,   491,   489,   493,   494,
     492,   495,   495,   497,   496,   499,   498,   501,   500,   502,
     503,   504,   505,   506,   507,   507,   507,   508,   509,   510,
     511,   512,   511,   511,   513,   513,   514,   515,   516,   515,
     518,   517,   520,   519,   522,   521,   524,   523,   526,   525,
     527,   527,   528,   528,   528,   528,   528,   528,   528,   529,
     529,   529,   529,   531,   530,   532,   532,   533,   533,   533,
     533,   534,   534,   534,   534,   534,   534,   534,   534,   535,
     536,   537,   538,   537,   537,   540,   539,   541,   542,   543,
     542,   542,   545,   544,   547,   546,   548,   549,   549,   549,
     551,   550,   552,   553,   552,   552,   554,   554,   554,   554,
     554,   555,   555,   555,   555,   556,   556,   557,   557,   557,
     558,   558,   558,   559,   559,   559,   560,   560,   560,   560,
     560,   560,   561,   562,   563,   563,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   565,   565,   565,   566,
     566,   566,   567,   567,   567,   568,   569,   569,   570,   571,
     573,   572,   574,   574,   575,   575,   575,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   578,   577,
     579,   579,   580,   580,   580,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   583,   582,   584,   584,   585,   585,   585,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     588,   587,   589,   589,   590,   590,   590,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   593,   592,   594,
     594,   595,   595,   595,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   598,   597,
     599,   599,   600,   600,   600,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   603,
     602,   604,   604,   605,   605,   605,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   608,   607,
     609,   609,   610,   610,   610,   611,   611,   611,   611,   611,
     611,   611,   611,   611,   611,   611,   611,   611,   611,   611,
     611,   611,   611,   613,   612,   614,   614,   615,   615,   615,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   618,   617,   619,   619,   620,
     620,   620,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   621,   621,   621,   621,   621,   623,   622,   624,
     624,   625,   625,   625,   626,   626,   626,   626,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   626,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   626,   626,   626,
     626,   626,   628,   627,   629,   629,   630,   630,   630,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   633,   632,   634,
     634,   635,   635,   635,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   638,   637,   639,   639,
     640,   640,   640,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   643,   642,   644,   644,   645,   645,
     645,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   648,   647,
     649,   649,   650,   650,   650,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   651,   653,   652,   654,   654,   655,
     655,   655,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   658,   657,
     659,   659,   660,   660,   660,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   663,   662,   664,   664,
     665,   665,   665,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   666,   666,   666,
     668,   667,   669,   669,   670,   670,   670,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   671,   671,   673,   672,   674,   674,   675,   675,
     675,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   678,   677,   679,   679,   680,   680,   680,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     683,   682,   685,   684,   687,   686,   689,   688,   691,   690,
     693,   692,   695,   694,   696,   698,   697,   700,   699,   702,
     701,   703,   703,   705,   704,   707,   706,   709,   708,   711,
     710,   713,   712,   715,   714,   717,   716,   719,   718,   721,
     720,   723,   722,   725,   724,   727,   726,   729,   728,   731,
     730,   733,   732,   735,   734,   737,   736,   739,   738,   741,
     740,   743,   742,   744,   746,   745,   748,   747,   749,   751,
     750,   753,   752,   755,   754,   757,   756,   759,   758,   760,
     761,   762,   762,   764,   763,   765,   766,   766,   768,   767,
     769,   770,   770,   770,   770,   770,   770,   770,   770,   771,
     772,   772,   773,   775,   774,   776,   777,   777,   778,   778,
     779,   780,   780,   781,   781,   782,   783,   784,   784,   785,
     785,   786,   786,   787,   787,   788,   788,   789,   789,   790,
     790,   791,   791,   792,   792,   793,   793,   794,   794,   795,
     795,   796,   796,   797,   797,   798,   798,   799,   799,   800,
     800,   801,   801,   802,   802,   803,   803,   804,   804,   805,
     805,   806,   806,   807,   807,   808,   808,   809,   809,   810,
     810,   811,   811,   812,   812,   813,   813,   814,   814,   815,
     816,   816,   817,   817,   818,   818,   819,   819,   820,   820,
     821,   821,   822,   822,   823,   823,   824,   824,   824,   825,
     825,   826,   826,   827,   827,   827,   828,   828,   828,   829,
     829,   829,   830,   830,   830,   831,   831,   831,   832,   832,
     832,   833,   833,   833,   834,   834,   834,   835,   835,   835,
     836,   836,   836,   837,   837,   837,   838,   838,   838,   839,
     839,   839,   840,   840,   840,   841,   841,   841,   842,   842,
     842,   843,   843,   843,   844,   844,   844,   845,   845,   845,
     846,   846,   846,   847,   847,   847,   848,   848,   848,   849,
     849,   849,   850,   850,   850,   851,   851,   851,   852,   852,
     852,   853,   853,   853,   854,   854,   854,   855,   855,   855,
     856,   856,   856,   857,   857,   857,   858,   858,   858,   859,
     859,   859,   860,   860,   860,   861,   862,   862,   862,   863,
     863,   863,   864,   864,   864,   865,   865,   865,   866,   867,
     867,   868,   869,   870,   870,   870,   870,   870,   870,   870,
     870,   870,   870,   871,   871,   872,   871,   873,   871,   874,
     871,   871,   875,   871,   876,   871,   877,   877,   877,   877,
     877,   877,   877,   877,   878,   878,   878,   878,   878,   878,
     878,   878,   879,   879,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   879,   879,   879,   879,   880,
     880,   880,   880,   880,   880,   881,   880,   882,   880,   883,
     883,   883,   883,   883,   883,   883,   883,   883,   883,   883,
     883,   883,   883,   883,   883,   883,   883,   883,   884,   883,
     885,   883,   887,   886,   888,   888,   889,   889,   889,   889,
     889,   889,   889,   889,   890,   890,   890,   890,   890,   890,
     890,   890,   890,   890,   890,   891,   891,   891,   891,   891,
     891,   891,   891,   891,   891,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   894,   894,   894,   894,   894,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   896,   896,   896,
     896,   896,   896,   897,   897,   897,   897,   897,   897,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   899,   898,
     900,   898,   898,   898,   898,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   902,   901,   901,   901,
     903,   901,   901,   901,   901,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   905,   904,   904,   904,
     906,   904,   904,   904,   907,   907,   907,   907,   907,   907,
     907,   907,   907,   907,   907,   908,   907,   907,   907,   909,
     907,   907,   907,   907,   907,   907,   910,   907,   907,   911,
     911,   911,   911,   911,   911,   911,   911,   911,   911,   911,
     912,   911,   911,   911,   913,   911,   911,   911,   911,   911,
     914,   911,   911,   915,   915,   915,   915,   915,   915,   915,
     915,   915,   915,   915,   915,   915,   915,   915,   915,   915,
     916,   916,   916,   916,   916,   916,   916,   916,   916,   916,
     916,   916,   916,   916,   916,   916,   917,   917,   917,   917,
     917,   917,   917,   917,   917,   917,   917,   917,   917,   917,
     918,   918,   918,   918,   918,   918,   918,   918,   918,   918,
     918,   919,   919,   919,   919,   919,   919,   919,   919,   919,
     919,   920,   920,   920,   920,   920,   920,   920,   920,   920,
     920,   921,   921,   921,   921,   921,   921,   921,   921,   921,
     921,   921,   921,   921,   921,   921,   921,   921,   922,   922,
     922,   922,   922,   922,   922,   922,   922,   922,   922,   922,
     922,   922,   922,   922,   922,   922,   922,   922,   922,   922,
     922,   923,   923,   923,   923,   923,   923,   923,   923,   923,
     923,   923,   923,   923,   923,   923,   923,   923,   923,   923,
     923,   924,   924,   924,   924,   924,   924,   924,   924,   924,
     924,   924,   924,   924,   924,   924,   924,   924,   924,   924,
     924,   924,   924,   924,   924,   924,   924,   925,   925,   925,
     925,   925,   925,   926,   926,   927,   927,   927,   927,   927,
     927,   928,   928,   928,   928,   928,   929,   929,   930,   930,
     930,   930,   930,   932,   931,   934,   933,   933,   935,   937,
     936,   936,   938,   940,   939,   939,   941,   943,   942,   942,
     944,   946,   945,   947,   945,   945,   948,   950,   949,   951,
     949,   949,   952,   954,   953,   953,   955,   957,   956,   956,
     958,   960,   959,   959,   961,   963,   962,   962,   964,   966,
     965,   967,   965,   965,   969,   968,   971,   970,   970,   973,
     972,   974,   974,   974,   975,   977,   976,   978,   976,   979,
     976,   976,   980,   982,   981,   981,   983,   985,   984,   986,
     984,   984,   987,   989,   988,   990,   988,   991,   988,   988,
     993,   992,   995,   994,   997,   996,   999,   998,  1001,  1000,
    1003,  1002,  1004,  1004,  1004,  1004,  1005,  1006,  1008,  1007,
    1009,  1009,  1009,  1010,  1011,  1011,  1011,  1013,  1012,  1014,
    1015,  1014,  1016,  1014,  1017,  1017,  1017,  1017,  1017,  1017,
    1017,  1017,  1017,  1019,  1018,  1020,  1022,  1021,  1024,  1023,
    1026,  1025,  1028,  1027,  1030,  1029,  1032,  1031,  1034,  1033,
    1036,  1035,  1038,  1037,  1040,  1039,  1041,  1042,  1041,  1043,
    1041,  1045,  1044,  1046,  1047,  1048,  1047,  1049,  1050,  1049,
    1051,  1049,  1052,  1052,  1052,  1053,  1053,  1054,  1055,  1054,
    1056,  1057,  1058,  1060,  1059,  1062,  1061,  1064,  1063,  1066,
    1065,  1068,  1067,  1067,  1069,  1070,  1072,  1071,  1073,  1075,
    1074,  1076,  1077,  1079,  1078,  1081,  1080,  1082,  1083,  1083,
    1083,  1083,  1083,  1083,  1083,  1083,  1083,  1084,  1085,  1086,
    1085,  1088,  1087,  1089,  1090,  1089,  1091,  1091,  1093,  1092,
    1092,  1094,  1094,  1094,  1095,  1095,  1095,  1096,  1096,  1096,
    1096,  1096,  1098,  1097,  1099,  1101,  1102,  1100,  1104,  1103,
    1105,  1105,  1106,  1107,  1106,  1108,  1108,  1109,  1109,  1110,
    1110,  1111,  1111,  1112,  1112,  1112,  1113,  1113,  1113,  1113,
    1113,  1113,  1113,  1113,  1113,  1113,  1115,  1114,  1116,  1116,
    1117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     0,
       4,     1,     3,     6,     0,     0,     3,     1,     0,     7,
       0,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     0,     3,     0,     1,     1,
       2,     3,     1,     1,     0,     0,     0,     9,     1,     0,
       1,     2,     3,     0,     0,     7,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     0,     6,     1,
       1,     1,     5,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     4,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     2,     0,     0,     6,     0,     5,     0,     4,     0,
       1,     1,     2,     3,     1,     0,     5,     0,     3,     0,
       3,     2,     3,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     5,     3,     0,     3,     0,     3,     0,     3,
       0,     4,     1,     0,     3,     0,     4,     0,     5,     0,
       5,     0,     3,     0,     4,     0,     4,     0,     3,     3,
       1,     1,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     4,     5,     4,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     3,     1,     1,
       1,     3,     0,     3,     1,     1,     3,     1,     1,     4,
       1,     1,     1,     0,     3,     1,     2,     5,     5,     3,
       4,     4,     3,     2,     3,     0,     2,     2,     1,     1,
       0,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     1,     1,
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
       0,     5,     1,     1,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     1,
       3,     1,     0,     5,     1,     3,     0,     5,     0,     4,
       0,     0,     6,     0,     2,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     0,     5,     1,
       1,     0,     4,     0,     5,     4,     1,     0,     4,     3,
       0,     5,     1,     3,     0,     5,     0,     4,     0,     0,
       6,     0,     2,     0,     5,     0,     5,     0,     5,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     2,     4,
       1,     0,     4,     3,     1,     1,     4,     1,     0,     4,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     1,     3,     1,     4,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     0,     4,     3,     0,     5,     4,     1,     0,
       4,     3,     0,     5,     0,     5,     4,     1,     1,     1,
       0,     5,     1,     0,     4,     3,     1,     2,     3,     3,
       2,     2,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       2,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       0,     4,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     0,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     8,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     8,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     4,
       0,     4,     0,     4,     4,     0,     5,     0,     4,     0,
       7,     0,     1,     0,     3,     0,     4,     0,     5,     0,
       5,     0,     6,     0,     6,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       5,     0,     5,     0,     6,     0,     3,     0,     3,     0,
       3,     0,     3,     1,     0,     3,     0,     3,     1,     0,
       3,     0,     3,     0,     4,     0,     3,     0,     4,     3,
       1,     1,     3,     0,     5,     1,     1,     3,     0,     7,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     7,     1,     1,     3,     1,     1,
       1,     0,     1,     0,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     2,     3,     0,
       1,     0,     1,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     7,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     0,     2,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     0,     5,     0,     4,     1,     4,     0,
       4,     1,     4,     0,     4,     1,     4,     0,     5,     1,
       4,     0,     4,     0,     4,     1,     4,     0,     4,     0,
       4,     1,     4,     0,     6,     1,     4,     0,     6,     1,
       4,     0,     4,     1,     4,     0,     5,     1,     4,     0,
       4,     0,     4,     1,     0,     5,     0,     4,     1,     0,
       5,     3,     3,     1,     4,     0,     4,     0,     4,     0,
       4,     1,     4,     0,     4,     1,     4,     0,     4,     0,
       4,     1,     4,     0,     4,     0,     4,     0,     4,     1,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     1,     1,     1,     1,     4,     0,     0,     5,
       1,     1,     1,     4,     1,     1,     1,     0,     5,     1,
       0,     4,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     4,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     7,     0,     5,
       0,     5,     0,     5,     0,     5,     1,     0,     4,     0,
       4,     0,     5,     1,     4,     0,     7,     1,     0,     4,
       0,     5,     1,     1,     1,     4,     6,     1,     0,     4,
       4,     3,     1,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     1,     1,     1,     0,     5,     1,     0,
       5,     1,     1,     0,     5,     0,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     5,     1,     0,     4,     1,     3,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     6,     0,     0,     8,     0,     7,
       1,     3,     1,     0,     4,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     1,     3,
       1
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
#line 146 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8080 "ompparser.cc"
    break;

  case 3: /* variable: EXPR_STRING  */
#line 147 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8086 "ompparser.cc"
    break;

  case 4: /* var_list: variable  */
#line 154 "ompparser.yy"
                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 8092 "ompparser.cc"
    break;

  case 5: /* var_list: var_list ',' variable  */
#line 155 "ompparser.yy"
                                  {if (meterEnClause) {guardarLineasDist += ","; guardarLineasDist += (yyvsp[0].stype);}}
#line 8098 "ompparser.cc"
    break;

  case 6: /* var_list_cluster: variable  */
#line 158 "ompparser.yy"
                            {
                      addArg((yyvsp[0].stype));
                    }
#line 8106 "ompparser.cc"
    break;

  case 7: /* var_list_cluster: var_list_cluster ',' variable  */
#line 162 "ompparser.yy"
                    {
                      addArg((yyvsp[0].stype));
                    }
#line 8114 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 167 "ompparser.yy"
                              {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8120 "ompparser.cc"
    break;

  case 9: /* $@1: %empty  */
#line 168 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += ",";}}
#line 8126 "ompparser.cc"
    break;

  case 10: /* var_list_reduction: var_list_reduction $@1 ',' variable  */
#line 168 "ompparser.yy"
                                                                                          {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8132 "ompparser.cc"
    break;

  case 11: /* var_list_allreduction: variable  */
#line 171 "ompparser.yy"
                                 { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8138 "ompparser.cc"
    break;

  case 12: /* var_list_allreduction: var_list_allreduction ',' variable  */
#line 172 "ompparser.yy"
                                             { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8144 "ompparser.cc"
    break;

  case 15: /* $@2: %empty  */
#line 180 "ompparser.yy"
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
#line 8161 "ompparser.cc"
    break;

  case 18: /* $@3: %empty  */
#line 196 "ompparser.yy"
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
#line 8177 "ompparser.cc"
    break;

  case 20: /* $@4: %empty  */
#line 211 "ompparser.yy"
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
#line 8193 "ompparser.cc"
    break;

  case 24: /* dist_schedule_parameter_cluster: STATIC ',' EXPR_STRING  */
#line 229 "ompparser.yy"
                                  {
                                    if (enCluster) {
                                      if (scheduleDist.size() != 0) {
                                        fprintf(stderr, "Doble shcedule en cluster distribute\n");
                                        exit(245);
                                      }

                                      scheduleDist = (yyvsp[0].stype);
                                    }
                                  }
#line 8208 "ompparser.cc"
    break;

  case 38: /* openmp_directive: distribute_directive  */
#line 254 "ompparser.yy"
                                        {dist_n_llaves = 0;}
#line 8214 "ompparser.cc"
    break;

  case 39: /* openmp_directive: distribute_simd_directive  */
#line 255 "ompparser.yy"
                                             {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8220 "ompparser.cc"
    break;

  case 40: /* openmp_directive: distribute_parallel_for_directive  */
#line 256 "ompparser.yy"
                                                     {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8226 "ompparser.cc"
    break;

  case 41: /* openmp_directive: distribute_parallel_do_directive  */
#line 257 "ompparser.yy"
                                                    {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8232 "ompparser.cc"
    break;

  case 42: /* openmp_directive: distribute_parallel_for_simd_directive  */
#line 258 "ompparser.yy"
                                                          {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8238 "ompparser.cc"
    break;

  case 43: /* openmp_directive: distribute_parallel_do_simd_directive  */
#line 259 "ompparser.yy"
                                                         {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8244 "ompparser.cc"
    break;

  case 88: /* openmp_directive: teams_distribute_directive  */
#line 306 "ompparser.yy"
                                              {dist_n_llaves = 0;}
#line 8250 "ompparser.cc"
    break;

  case 89: /* openmp_directive: teams_distribute_simd_directive  */
#line 307 "ompparser.yy"
                                                   {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8256 "ompparser.cc"
    break;

  case 90: /* openmp_directive: teams_distribute_parallel_for_directive  */
#line 308 "ompparser.yy"
                                                           {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8262 "ompparser.cc"
    break;

  case 91: /* openmp_directive: teams_distribute_parallel_for_simd_directive  */
#line 309 "ompparser.yy"
                                                                {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8268 "ompparser.cc"
    break;

  case 112: /* $@5: %empty  */
#line 330 "ompparser.yy"
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
#line 8286 "ompparser.cc"
    break;

  case 114: /* directiveAuxCluster: cluster_directive  */
#line 347 "ompparser.yy"
                                      {n_llaves = 0;}
#line 8292 "ompparser.cc"
    break;

  case 118: /* directiveAuxCluster: cluster_distribute_directive  */
#line 351 "ompparser.yy"
                                                                         {dist_n_llaves = 0;}
#line 8298 "ompparser.cc"
    break;

  case 119: /* directiveAuxCluster: cluster_teams_distribute_directive  */
#line 352 "ompparser.yy"
                                                                               {dist_n_llaves = 0;}
#line 8304 "ompparser.cc"
    break;

  case 192: /* $@6: %empty  */
#line 431 "ompparser.yy"
                    { }
#line 8310 "ompparser.cc"
    break;

  case 193: /* end_directive: END $@6 end_clause_seq  */
#line 431 "ompparser.yy"
                                       { }
#line 8316 "ompparser.cc"
    break;

  case 195: /* $@7: %empty  */
#line 437 "ompparser.yy"
                                        { }
#line 8322 "ompparser.cc"
    break;

  case 204: /* $@8: %empty  */
#line 454 "ompparser.yy"
                   { }
#line 8328 "ompparser.cc"
    break;

  case 205: /* $@9: %empty  */
#line 454 "ompparser.yy"
                                                              { }
#line 8334 "ompparser.cc"
    break;

  case 206: /* $@10: %empty  */
#line 454 "ompparser.yy"
                                                                                         { }
#line 8340 "ompparser.cc"
    break;

  case 208: /* when_variant_directive: variant_directive  */
#line 457 "ompparser.yy"
                                           { }
#line 8346 "ompparser.cc"
    break;

  case 209: /* when_variant_directive: %empty  */
#line 458 "ompparser.yy"
                  { ; }
#line 8352 "ompparser.cc"
    break;

  case 213: /* $@11: %empty  */
#line 466 "ompparser.yy"
                                             { }
#line 8358 "ompparser.cc"
    break;

  case 214: /* $@12: %empty  */
#line 466 "ompparser.yy"
                                                                             { }
#line 8364 "ompparser.cc"
    break;

  case 216: /* trait_set_selector_name: USER  */
#line 469 "ompparser.yy"
                               { }
#line 8370 "ompparser.cc"
    break;

  case 217: /* trait_set_selector_name: CONSTRUCT  */
#line 470 "ompparser.yy"
                            { }
#line 8376 "ompparser.cc"
    break;

  case 218: /* trait_set_selector_name: DEVICE  */
#line 471 "ompparser.yy"
                         { }
#line 8382 "ompparser.cc"
    break;

  case 219: /* trait_set_selector_name: IMPLEMENTATION  */
#line 472 "ompparser.yy"
                                 { }
#line 8388 "ompparser.cc"
    break;

  case 220: /* trait_selector_list: trait_selector  */
#line 475 "ompparser.yy"
                                     { }
#line 8394 "ompparser.cc"
    break;

  case 221: /* trait_selector_list: trait_selector_list trait_selector  */
#line 476 "ompparser.yy"
                                                     { }
#line 8400 "ompparser.cc"
    break;

  case 222: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 477 "ompparser.yy"
                                                         { }
#line 8406 "ompparser.cc"
    break;

  case 224: /* trait_selector: construct_selector  */
#line 481 "ompparser.yy"
                                     { }
#line 8412 "ompparser.cc"
    break;

  case 227: /* $@13: %empty  */
#line 486 "ompparser.yy"
                                                           { }
#line 8418 "ompparser.cc"
    break;

  case 233: /* context_kind_name: HOST  */
#line 497 "ompparser.yy"
                         { }
#line 8424 "ompparser.cc"
    break;

  case 234: /* context_kind_name: NOHOST  */
#line 498 "ompparser.yy"
                           { }
#line 8430 "ompparser.cc"
    break;

  case 235: /* context_kind_name: ANY  */
#line 499 "ompparser.yy"
                        { }
#line 8436 "ompparser.cc"
    break;

  case 236: /* context_kind_name: CPU  */
#line 500 "ompparser.yy"
                        { }
#line 8442 "ompparser.cc"
    break;

  case 237: /* context_kind_name: GPU  */
#line 501 "ompparser.yy"
                        { }
#line 8448 "ompparser.cc"
    break;

  case 238: /* context_kind_name: FPGA  */
#line 502 "ompparser.yy"
                         { }
#line 8454 "ompparser.cc"
    break;

  case 239: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 505 "ompparser.yy"
                                              { }
#line 8460 "ompparser.cc"
    break;

  case 240: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 508 "ompparser.yy"
                                                { }
#line 8466 "ompparser.cc"
    break;

  case 242: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 512 "ompparser.yy"
                                                                { }
#line 8472 "ompparser.cc"
    break;

  case 243: /* implementation_selector: EXPR_STRING  */
#line 513 "ompparser.yy"
                                      { }
#line 8478 "ompparser.cc"
    break;

  case 244: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 514 "ompparser.yy"
                                                          { }
#line 8484 "ompparser.cc"
    break;

  case 245: /* context_vendor_name: AMD  */
#line 517 "ompparser.yy"
                          { }
#line 8490 "ompparser.cc"
    break;

  case 246: /* context_vendor_name: ARM  */
#line 518 "ompparser.yy"
                          { }
#line 8496 "ompparser.cc"
    break;

  case 247: /* context_vendor_name: BSC  */
#line 519 "ompparser.yy"
                          { }
#line 8502 "ompparser.cc"
    break;

  case 248: /* context_vendor_name: CRAY  */
#line 520 "ompparser.yy"
                           { }
#line 8508 "ompparser.cc"
    break;

  case 249: /* context_vendor_name: FUJITSU  */
#line 521 "ompparser.yy"
                              { }
#line 8514 "ompparser.cc"
    break;

  case 250: /* context_vendor_name: GNU  */
#line 522 "ompparser.yy"
                          { }
#line 8520 "ompparser.cc"
    break;

  case 251: /* context_vendor_name: IBM  */
#line 523 "ompparser.yy"
                          { }
#line 8526 "ompparser.cc"
    break;

  case 252: /* context_vendor_name: INTEL  */
#line 524 "ompparser.yy"
                            { }
#line 8532 "ompparser.cc"
    break;

  case 253: /* context_vendor_name: LLVM  */
#line 525 "ompparser.yy"
                           { }
#line 8538 "ompparser.cc"
    break;

  case 254: /* context_vendor_name: PGI  */
#line 526 "ompparser.yy"
                          { }
#line 8544 "ompparser.cc"
    break;

  case 255: /* context_vendor_name: TI  */
#line 527 "ompparser.yy"
                         { }
#line 8550 "ompparser.cc"
    break;

  case 256: /* context_vendor_name: UNKNOWN  */
#line 528 "ompparser.yy"
                              { }
#line 8556 "ompparser.cc"
    break;

  case 258: /* parallel_selector: PARALLEL  */
#line 534 "ompparser.yy"
                             { }
#line 8562 "ompparser.cc"
    break;

  case 259: /* $@14: %empty  */
#line 535 "ompparser.yy"
                               { }
#line 8568 "ompparser.cc"
    break;

  case 263: /* $@15: %empty  */
#line 542 "ompparser.yy"
                                    { }
#line 8574 "ompparser.cc"
    break;

  case 265: /* $@16: %empty  */
#line 545 "ompparser.yy"
                                            { }
#line 8580 "ompparser.cc"
    break;

  case 267: /* $@17: %empty  */
#line 549 "ompparser.yy"
                                  { }
#line 8586 "ompparser.cc"
    break;

  case 275: /* $@18: %empty  */
#line 564 "ompparser.yy"
                     { }
#line 8592 "ompparser.cc"
    break;

  case 276: /* match_clause: MATCH $@18 '(' context_selector_specification ')'  */
#line 565 "ompparser.yy"
                                                       { }
#line 8598 "ompparser.cc"
    break;

  case 277: /* $@19: %empty  */
#line 569 "ompparser.yy"
                              { }
#line 8604 "ompparser.cc"
    break;

  case 279: /* $@20: %empty  */
#line 572 "ompparser.yy"
                            { }
#line 8610 "ompparser.cc"
    break;

  case 281: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 575 "ompparser.yy"
                                            {
                                enDeclare = 1;
                            }
#line 8618 "ompparser.cc"
    break;

  case 282: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 580 "ompparser.yy"
                                                    { enDeclare = 0; MPIDeclareCluster(); }
#line 8624 "ompparser.cc"
    break;

  case 283: /* $@21: %empty  */
#line 583 "ompparser.yy"
                                      { }
#line 8630 "ompparser.cc"
    break;

  case 285: /* $@22: %empty  */
#line 586 "ompparser.yy"
                                          { update =1; }
#line 8636 "ompparser.cc"
    break;

  case 286: /* cluster_update_directive: CLUSTER UPDATE $@22 cluster_update_clause_optseq  */
#line 586 "ompparser.yy"
                                                                                      { }
#line 8642 "ompparser.cc"
    break;

  case 287: /* $@23: %empty  */
#line 589 "ompparser.yy"
                                        { }
#line 8648 "ompparser.cc"
    break;

  case 289: /* $@24: %empty  */
#line 592 "ompparser.yy"
                                                  {enDistribute = 1;}
#line 8654 "ompparser.cc"
    break;

  case 291: /* $@25: %empty  */
#line 595 "ompparser.yy"
                                                              {enDistribute = 1;}
#line 8660 "ompparser.cc"
    break;

  case 293: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 598 "ompparser.yy"
                                                      { }
#line 8666 "ompparser.cc"
    break;

  case 294: /* $@26: %empty  */
#line 601 "ompparser.yy"
                                  { }
#line 8672 "ompparser.cc"
    break;

  case 295: /* task_async_directive: TASK_ASYNC $@26 task_async_clause_optseq  */
#line 601 "ompparser.yy"
                                                               { MPITask(); }
#line 8678 "ompparser.cc"
    break;

  case 296: /* $@27: %empty  */
#line 606 "ompparser.yy"
                      { }
#line 8684 "ompparser.cc"
    break;

  case 298: /* $@28: %empty  */
#line 608 "ompparser.yy"
                              { }
#line 8690 "ompparser.cc"
    break;

  case 300: /* $@29: %empty  */
#line 610 "ompparser.yy"
                                        { }
#line 8696 "ompparser.cc"
    break;

  case 302: /* taskyield_directive: TASKYIELD  */
#line 612 "ompparser.yy"
                                { }
#line 8702 "ompparser.cc"
    break;

  case 303: /* $@30: %empty  */
#line 614 "ompparser.yy"
                              { }
#line 8708 "ompparser.cc"
    break;

  case 305: /* $@31: %empty  */
#line 616 "ompparser.yy"
                                     { }
#line 8714 "ompparser.cc"
    break;

  case 307: /* $@32: %empty  */
#line 618 "ompparser.yy"
                                                 { }
#line 8720 "ompparser.cc"
    break;

  case 309: /* $@33: %empty  */
#line 620 "ompparser.yy"
                                               { }
#line 8726 "ompparser.cc"
    break;

  case 311: /* $@34: %empty  */
#line 622 "ompparser.yy"
                           { }
#line 8732 "ompparser.cc"
    break;

  case 313: /* $@35: %empty  */
#line 624 "ompparser.yy"
                                        { }
#line 8738 "ompparser.cc"
    break;

  case 315: /* $@36: %empty  */
#line 626 "ompparser.yy"
                                          { }
#line 8744 "ompparser.cc"
    break;

  case 317: /* $@37: %empty  */
#line 628 "ompparser.yy"
                        { }
#line 8750 "ompparser.cc"
    break;

  case 319: /* end_declare_target_directive: END DECLARE TARGET  */
#line 631 "ompparser.yy"
                                                  { }
#line 8756 "ompparser.cc"
    break;

  case 320: /* master_directive: MASTER  */
#line 633 "ompparser.yy"
                          { }
#line 8762 "ompparser.cc"
    break;

  case 321: /* barrier_directive: BARRIER  */
#line 635 "ompparser.yy"
                            { }
#line 8768 "ompparser.cc"
    break;

  case 322: /* $@38: %empty  */
#line 637 "ompparser.yy"
                              { }
#line 8774 "ompparser.cc"
    break;

  case 324: /* $@39: %empty  */
#line 639 "ompparser.yy"
                                { }
#line 8780 "ompparser.cc"
    break;

  case 326: /* $@40: %empty  */
#line 641 "ompparser.yy"
                              { }
#line 8786 "ompparser.cc"
    break;

  case 328: /* $@41: %empty  */
#line 643 "ompparser.yy"
                          { }
#line 8792 "ompparser.cc"
    break;

  case 330: /* $@42: %empty  */
#line 645 "ompparser.yy"
                            { }
#line 8798 "ompparser.cc"
    break;

  case 337: /* depobj: EXPR_STRING  */
#line 654 "ompparser.yy"
                     { }
#line 8804 "ompparser.cc"
    break;

  case 341: /* destroy_clause: DESTROY  */
#line 661 "ompparser.yy"
                        {}
#line 8810 "ompparser.cc"
    break;

  case 343: /* update_dependence_type: SOURCE  */
#line 666 "ompparser.yy"
                                { }
#line 8816 "ompparser.cc"
    break;

  case 344: /* update_dependence_type: IN  */
#line 667 "ompparser.yy"
                            { }
#line 8822 "ompparser.cc"
    break;

  case 345: /* update_dependence_type: OUT  */
#line 668 "ompparser.yy"
                             { }
#line 8828 "ompparser.cc"
    break;

  case 346: /* update_dependence_type: INOUT  */
#line 669 "ompparser.yy"
                               { }
#line 8834 "ompparser.cc"
    break;

  case 347: /* update_dependence_type: MUTEXINOUTSET  */
#line 670 "ompparser.yy"
                                       { }
#line 8840 "ompparser.cc"
    break;

  case 348: /* update_dependence_type: DEPOBJ  */
#line 671 "ompparser.yy"
                                { }
#line 8846 "ompparser.cc"
    break;

  case 349: /* update_dependence_type: SINK  */
#line 672 "ompparser.yy"
                              { }
#line 8852 "ompparser.cc"
    break;

  case 350: /* critical_name: EXPR_STRING  */
#line 675 "ompparser.yy"
                            { }
#line 8858 "ompparser.cc"
    break;

  case 369: /* extended_variable: EXPR_STRING  */
#line 706 "ompparser.yy"
                                { }
#line 8864 "ompparser.cc"
    break;

  case 377: /* flush_variable: EXPR_STRING  */
#line 718 "ompparser.yy"
                             { }
#line 8870 "ompparser.cc"
    break;

  case 383: /* $@43: %empty  */
#line 728 "ompparser.yy"
                          { }
#line 8876 "ompparser.cc"
    break;

  case 416: /* $@44: %empty  */
#line 771 "ompparser.yy"
                  { 
                     }
#line 8883 "ompparser.cc"
    break;

  case 418: /* read_clause: READ  */
#line 774 "ompparser.yy"
                   { }
#line 8889 "ompparser.cc"
    break;

  case 419: /* write_clause: WRITE  */
#line 776 "ompparser.yy"
                     { }
#line 8895 "ompparser.cc"
    break;

  case 420: /* update_clause: UPDATE  */
#line 778 "ompparser.yy"
                       { }
#line 8901 "ompparser.cc"
    break;

  case 421: /* capture_clause: CAPTURE  */
#line 780 "ompparser.yy"
                         { }
#line 8907 "ompparser.cc"
    break;

  case 422: /* seq_cst_clause: SEQ_CST  */
#line 783 "ompparser.yy"
                         { }
#line 8913 "ompparser.cc"
    break;

  case 423: /* acq_rel_clause: ACQ_REL  */
#line 785 "ompparser.yy"
                         { }
#line 8919 "ompparser.cc"
    break;

  case 424: /* release_clause: RELEASE  */
#line 787 "ompparser.yy"
                         { }
#line 8925 "ompparser.cc"
    break;

  case 425: /* acquire_clause: ACQUIRE  */
#line 789 "ompparser.yy"
                         { }
#line 8931 "ompparser.cc"
    break;

  case 426: /* relaxed_clause: RELAXED  */
#line 791 "ompparser.yy"
                         { }
#line 8937 "ompparser.cc"
    break;

  case 570: /* $@45: %empty  */
#line 968 "ompparser.yy"
                    { }
#line 8943 "ompparser.cc"
    break;

  case 572: /* untied_clause: UNTIED  */
#line 970 "ompparser.yy"
                      { }
#line 8949 "ompparser.cc"
    break;

  case 573: /* mergeable_clause: MERGEABLE  */
#line 972 "ompparser.yy"
                            { }
#line 8955 "ompparser.cc"
    break;

  case 574: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 974 "ompparser.yy"
                                                                                { }
#line 8961 "ompparser.cc"
    break;

  case 576: /* in_reduction_identifier: EXPR_STRING  */
#line 977 "ompparser.yy"
                                      { }
#line 8967 "ompparser.cc"
    break;

  case 577: /* in_reduction_enum_identifier: '+'  */
#line 980 "ompparser.yy"
                                   { }
#line 8973 "ompparser.cc"
    break;

  case 578: /* in_reduction_enum_identifier: '-'  */
#line 981 "ompparser.yy"
                                  { }
#line 8979 "ompparser.cc"
    break;

  case 579: /* in_reduction_enum_identifier: '*'  */
#line 982 "ompparser.yy"
                                  { }
#line 8985 "ompparser.cc"
    break;

  case 580: /* in_reduction_enum_identifier: '&'  */
#line 983 "ompparser.yy"
                                  { }
#line 8991 "ompparser.cc"
    break;

  case 581: /* in_reduction_enum_identifier: '|'  */
#line 984 "ompparser.yy"
                                  { }
#line 8997 "ompparser.cc"
    break;

  case 582: /* in_reduction_enum_identifier: '^'  */
#line 985 "ompparser.yy"
                                  { }
#line 9003 "ompparser.cc"
    break;

  case 583: /* in_reduction_enum_identifier: LOGAND  */
#line 986 "ompparser.yy"
                                     { }
#line 9009 "ompparser.cc"
    break;

  case 584: /* in_reduction_enum_identifier: LOGOR  */
#line 987 "ompparser.yy"
                                    { }
#line 9015 "ompparser.cc"
    break;

  case 585: /* in_reduction_enum_identifier: MAX  */
#line 988 "ompparser.yy"
                                  { }
#line 9021 "ompparser.cc"
    break;

  case 586: /* in_reduction_enum_identifier: MIN  */
#line 989 "ompparser.yy"
                                  { }
#line 9027 "ompparser.cc"
    break;

  case 587: /* $@46: %empty  */
#line 992 "ompparser.yy"
                                     { }
#line 9033 "ompparser.cc"
    break;

  case 588: /* depend_with_modifier_clause: DEPEND $@46 '(' depend_parameter ':' var_list ')'  */
#line 992 "ompparser.yy"
                                                                               { }
#line 9039 "ompparser.cc"
    break;

  case 590: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 996 "ompparser.yy"
                                                       { }
#line 9045 "ompparser.cc"
    break;

  case 592: /* $@47: %empty  */
#line 1000 "ompparser.yy"
                                    { }
#line 9051 "ompparser.cc"
    break;

  case 596: /* $@48: %empty  */
#line 1005 "ompparser.yy"
                                                    { }
#line 9057 "ompparser.cc"
    break;

  case 598: /* $@49: %empty  */
#line 1006 "ompparser.yy"
                                        { }
#line 9063 "ompparser.cc"
    break;

  case 600: /* $@50: %empty  */
#line 1008 "ompparser.yy"
                                         { }
#line 9069 "ompparser.cc"
    break;

  case 601: /* $@51: %empty  */
#line 1008 "ompparser.yy"
                                                             { }
#line 9075 "ompparser.cc"
    break;

  case 602: /* depend_range_specification: EXPR_STRING $@50 ':' EXPR_STRING $@51 depend_range_step  */
#line 1008 "ompparser.yy"
                                                                                   { }
#line 9081 "ompparser.cc"
    break;

  case 603: /* depend_range_step: %empty  */
#line 1010 "ompparser.yy"
                              { }
#line 9087 "ompparser.cc"
    break;

  case 604: /* depend_range_step: ':' EXPR_STRING  */
#line 1011 "ompparser.yy"
                                    { }
#line 9093 "ompparser.cc"
    break;

  case 605: /* depend_enum_type: IN  */
#line 1013 "ompparser.yy"
                      { }
#line 9099 "ompparser.cc"
    break;

  case 606: /* depend_enum_type: OUT  */
#line 1014 "ompparser.yy"
                       { }
#line 9105 "ompparser.cc"
    break;

  case 607: /* depend_enum_type: INOUT  */
#line 1015 "ompparser.yy"
                         { }
#line 9111 "ompparser.cc"
    break;

  case 608: /* depend_enum_type: MUTEXINOUTSET  */
#line 1016 "ompparser.yy"
                                 { }
#line 9117 "ompparser.cc"
    break;

  case 609: /* depend_enum_type: DEPOBJ  */
#line 1017 "ompparser.yy"
                          { }
#line 9123 "ompparser.cc"
    break;

  case 610: /* $@52: %empty  */
#line 1020 "ompparser.yy"
                              { }
#line 9129 "ompparser.cc"
    break;

  case 611: /* depend_depobj_clause: DEPEND $@52 '(' dependence_depobj_parameter ')'  */
#line 1020 "ompparser.yy"
                                                                     {
}
#line 9136 "ompparser.cc"
    break;

  case 613: /* dependence_depobj_type: IN  */
#line 1025 "ompparser.yy"
                                        { }
#line 9142 "ompparser.cc"
    break;

  case 614: /* dependence_depobj_type: OUT  */
#line 1026 "ompparser.yy"
                                        { }
#line 9148 "ompparser.cc"
    break;

  case 615: /* dependence_depobj_type: INOUT  */
#line 1027 "ompparser.yy"
                                        { }
#line 9154 "ompparser.cc"
    break;

  case 616: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 1028 "ompparser.yy"
                                        { }
#line 9160 "ompparser.cc"
    break;

  case 617: /* $@53: %empty  */
#line 1030 "ompparser.yy"
                               { }
#line 9166 "ompparser.cc"
    break;

  case 618: /* depend_ordered_clause: DEPEND $@53 '(' dependence_ordered_parameter ')'  */
#line 1030 "ompparser.yy"
                                                                       {
}
#line 9173 "ompparser.cc"
    break;

  case 620: /* dependence_ordered_type: SOURCE  */
#line 1035 "ompparser.yy"
                                  { }
#line 9179 "ompparser.cc"
    break;

  case 621: /* $@54: %empty  */
#line 1036 "ompparser.yy"
                               { }
#line 9185 "ompparser.cc"
    break;

  case 623: /* $@55: %empty  */
#line 1039 "ompparser.yy"
                          { }
#line 9191 "ompparser.cc"
    break;

  case 626: /* affinity_parameter: EXPR_STRING  */
#line 1044 "ompparser.yy"
                                 { }
#line 9197 "ompparser.cc"
    break;

  case 627: /* $@56: %empty  */
#line 1045 "ompparser.yy"
                                     { }
#line 9203 "ompparser.cc"
    break;

  case 630: /* $@57: %empty  */
#line 1049 "ompparser.yy"
                                      { }
#line 9209 "ompparser.cc"
    break;

  case 631: /* affinity_modifier: MODIFIER_ITERATOR $@57 '(' iterators_definition ')'  */
#line 1049 "ompparser.yy"
                                                                   {}
#line 9215 "ompparser.cc"
    break;

  case 634: /* $@58: %empty  */
#line 1054 "ompparser.yy"
                                             { }
#line 9221 "ompparser.cc"
    break;

  case 636: /* $@59: %empty  */
#line 1055 "ompparser.yy"
                                { }
#line 9227 "ompparser.cc"
    break;

  case 638: /* $@60: %empty  */
#line 1057 "ompparser.yy"
                                  { }
#line 9233 "ompparser.cc"
    break;

  case 639: /* $@61: %empty  */
#line 1057 "ompparser.yy"
                                                      { }
#line 9239 "ompparser.cc"
    break;

  case 640: /* range_specification: EXPR_STRING $@60 ':' EXPR_STRING $@61 range_step  */
#line 1057 "ompparser.yy"
                                                                     { }
#line 9245 "ompparser.cc"
    break;

  case 641: /* range_step: %empty  */
#line 1060 "ompparser.yy"
                       { }
#line 9251 "ompparser.cc"
    break;

  case 642: /* range_step: ':' EXPR_STRING  */
#line 1061 "ompparser.yy"
                             { }
#line 9257 "ompparser.cc"
    break;

  case 643: /* $@62: %empty  */
#line 1064 "ompparser.yy"
                      { }
#line 9263 "ompparser.cc"
    break;

  case 645: /* $@63: %empty  */
#line 1066 "ompparser.yy"
                            { }
#line 9269 "ompparser.cc"
    break;

  case 647: /* $@64: %empty  */
#line 1068 "ompparser.yy"
                            { }
#line 9275 "ompparser.cc"
    break;

  case 649: /* nogroup_clause: NOGROUP  */
#line 1070 "ompparser.yy"
                        { }
#line 9281 "ompparser.cc"
    break;

  case 650: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 1072 "ompparser.yy"
                                        { }
#line 9287 "ompparser.cc"
    break;

  case 651: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 1074 "ompparser.yy"
                                        { }
#line 9293 "ompparser.cc"
    break;

  case 652: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 1076 "ompparser.yy"
                                                    { }
#line 9299 "ompparser.cc"
    break;

  case 653: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 1078 "ompparser.yy"
                                                                                                      { }
#line 9305 "ompparser.cc"
    break;

  case 654: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 1080 "ompparser.yy"
                                             { }
#line 9311 "ompparser.cc"
    break;

  case 655: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 1081 "ompparser.yy"
                                             { }
#line 9317 "ompparser.cc"
    break;

  case 656: /* atomic_default_mem_order_parameter: RELAXED  */
#line 1082 "ompparser.yy"
                                             { }
#line 9323 "ompparser.cc"
    break;

  case 657: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 1084 "ompparser.yy"
                                              { }
#line 9329 "ompparser.cc"
    break;

  case 658: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 1086 "ompparser.yy"
                                                                { }
#line 9335 "ompparser.cc"
    break;

  case 660: /* device_parameter: EXPR_STRING  */
#line 1090 "ompparser.yy"
                                { }
#line 9341 "ompparser.cc"
    break;

  case 661: /* $@65: %empty  */
#line 1091 "ompparser.yy"
                                   { }
#line 9347 "ompparser.cc"
    break;

  case 664: /* device_modifier_parameter: ANCESTOR  */
#line 1095 "ompparser.yy"
                                     { }
#line 9353 "ompparser.cc"
    break;

  case 665: /* device_modifier_parameter: DEVICE_NUM  */
#line 1096 "ompparser.yy"
                                       { }
#line 9359 "ompparser.cc"
    break;

  case 667: /* device_without_modifier_parameter: EXPR_STRING  */
#line 1101 "ompparser.yy"
                                                 { }
#line 9365 "ompparser.cc"
    break;

  case 668: /* $@66: %empty  */
#line 1102 "ompparser.yy"
                                                    { }
#line 9371 "ompparser.cc"
    break;

  case 670: /* $@67: %empty  */
#line 1105 "ompparser.yy"
                                       { }
#line 9377 "ompparser.cc"
    break;

  case 672: /* $@68: %empty  */
#line 1108 "ompparser.yy"
                                         { }
#line 9383 "ompparser.cc"
    break;

  case 674: /* $@69: %empty  */
#line 1110 "ompparser.yy"
                                     { }
#line 9389 "ompparser.cc"
    break;

  case 675: /* is_device_ptr_clause: IS_DEVICE_PTR $@69 '(' var_list ')'  */
#line 1110 "ompparser.yy"
                                                          {
}
#line 9396 "ompparser.cc"
    break;

  case 676: /* $@70: %empty  */
#line 1114 "ompparser.yy"
                                         { }
#line 9402 "ompparser.cc"
    break;

  case 677: /* has_device_addr_clause: HAS_DEVICE_ADDR $@70 '(' var_list ')'  */
#line 1114 "ompparser.yy"
                                                              {
}
#line 9409 "ompparser.cc"
    break;

  case 678: /* $@71: %empty  */
#line 1117 "ompparser.yy"
                              { }
#line 9415 "ompparser.cc"
    break;

  case 680: /* defaultmap_parameter: defaultmap_behavior  */
#line 1119 "ompparser.yy"
                                           { }
#line 9421 "ompparser.cc"
    break;

  case 682: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1123 "ompparser.yy"
                                     { }
#line 9427 "ompparser.cc"
    break;

  case 683: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1124 "ompparser.yy"
                                  { }
#line 9433 "ompparser.cc"
    break;

  case 684: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1125 "ompparser.yy"
                                    { }
#line 9439 "ompparser.cc"
    break;

  case 685: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1126 "ompparser.yy"
                                      {}
#line 9445 "ompparser.cc"
    break;

  case 686: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1127 "ompparser.yy"
                                            { }
#line 9451 "ompparser.cc"
    break;

  case 687: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1128 "ompparser.yy"
                                    { }
#line 9457 "ompparser.cc"
    break;

  case 688: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1129 "ompparser.yy"
                                       { }
#line 9463 "ompparser.cc"
    break;

  case 689: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1131 "ompparser.yy"
                                      { }
#line 9469 "ompparser.cc"
    break;

  case 690: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1132 "ompparser.yy"
                                         { }
#line 9475 "ompparser.cc"
    break;

  case 691: /* defaultmap_category: CATEGORY_POINTER  */
#line 1133 "ompparser.yy"
                                       { }
#line 9481 "ompparser.cc"
    break;

  case 692: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1134 "ompparser.yy"
                                           { }
#line 9487 "ompparser.cc"
    break;

  case 693: /* $@72: %empty  */
#line 1136 "ompparser.yy"
                                          { }
#line 9493 "ompparser.cc"
    break;

  case 697: /* allocators_list: allocators_list_parameter_enum  */
#line 1141 "ompparser.yy"
                                                 { }
#line 9499 "ompparser.cc"
    break;

  case 698: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1142 "ompparser.yy"
                                                                     { }
#line 9505 "ompparser.cc"
    break;

  case 699: /* allocators_list: allocators_list_parameter_user  */
#line 1143 "ompparser.yy"
                                                 { }
#line 9511 "ompparser.cc"
    break;

  case 700: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1144 "ompparser.yy"
                                                                     { }
#line 9517 "ompparser.cc"
    break;

  case 701: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1147 "ompparser.yy"
                                                   { }
#line 9523 "ompparser.cc"
    break;

  case 702: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1148 "ompparser.yy"
                                                     { }
#line 9529 "ompparser.cc"
    break;

  case 703: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1149 "ompparser.yy"
                                                 { }
#line 9535 "ompparser.cc"
    break;

  case 704: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1150 "ompparser.yy"
                                                   { }
#line 9541 "ompparser.cc"
    break;

  case 705: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1151 "ompparser.yy"
                                                   { }
#line 9547 "ompparser.cc"
    break;

  case 706: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1152 "ompparser.yy"
                                                  { }
#line 9553 "ompparser.cc"
    break;

  case 707: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1153 "ompparser.yy"
                                                 { }
#line 9559 "ompparser.cc"
    break;

  case 708: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1154 "ompparser.yy"
                                                  { }
#line 9565 "ompparser.cc"
    break;

  case 709: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1156 "ompparser.yy"
                                             { }
#line 9571 "ompparser.cc"
    break;

  case 711: /* to_parameter: EXPR_STRING  */
#line 1159 "ompparser.yy"
                            { }
#line 9577 "ompparser.cc"
    break;

  case 712: /* $@73: %empty  */
#line 1160 "ompparser.yy"
                               { }
#line 9583 "ompparser.cc"
    break;

  case 715: /* $@74: %empty  */
#line 1163 "ompparser.yy"
                      { }
#line 9589 "ompparser.cc"
    break;

  case 716: /* to_mapper: TO_MAPPER $@74 '(' EXPR_STRING ')'  */
#line 1163 "ompparser.yy"
                                           { }
#line 9595 "ompparser.cc"
    break;

  case 718: /* from_parameter: EXPR_STRING  */
#line 1167 "ompparser.yy"
                             { }
#line 9601 "ompparser.cc"
    break;

  case 719: /* $@75: %empty  */
#line 1168 "ompparser.yy"
                                 { }
#line 9607 "ompparser.cc"
    break;

  case 722: /* $@76: %empty  */
#line 1171 "ompparser.yy"
                          { }
#line 9613 "ompparser.cc"
    break;

  case 723: /* from_mapper: FROM_MAPPER $@76 '(' EXPR_STRING ')'  */
#line 1171 "ompparser.yy"
                                               { }
#line 9619 "ompparser.cc"
    break;

  case 724: /* $@77: %empty  */
#line 1173 "ompparser.yy"
                   {
}
#line 9626 "ompparser.cc"
    break;

  case 725: /* link_clause: LINK $@77 '(' var_list ')'  */
#line 1174 "ompparser.yy"
                   { }
#line 9632 "ompparser.cc"
    break;

  case 726: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1176 "ompparser.yy"
                                                               { }
#line 9638 "ompparser.cc"
    break;

  case 727: /* device_type_parameter: HOST  */
#line 1178 "ompparser.yy"
                             { }
#line 9644 "ompparser.cc"
    break;

  case 728: /* device_type_parameter: NOHOST  */
#line 1179 "ompparser.yy"
                             { }
#line 9650 "ompparser.cc"
    break;

  case 729: /* device_type_parameter: ANY  */
#line 1180 "ompparser.yy"
                          { }
#line 9656 "ompparser.cc"
    break;

  case 730: /* $@78: %empty  */
#line 1183 "ompparser.yy"
                 { }
#line 9662 "ompparser.cc"
    break;

  case 732: /* map_parameter: EXPR_STRING  */
#line 1185 "ompparser.yy"
                            { }
#line 9668 "ompparser.cc"
    break;

  case 733: /* $@79: %empty  */
#line 1186 "ompparser.yy"
                                { }
#line 9674 "ompparser.cc"
    break;

  case 747: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1204 "ompparser.yy"
                                    { }
#line 9680 "ompparser.cc"
    break;

  case 748: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1205 "ompparser.yy"
                                    { }
#line 9686 "ompparser.cc"
    break;

  case 749: /* map_modifier1: map_modifier_mapper  */
#line 1206 "ompparser.yy"
                                    { }
#line 9692 "ompparser.cc"
    break;

  case 750: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1208 "ompparser.yy"
                                    { }
#line 9698 "ompparser.cc"
    break;

  case 751: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1209 "ompparser.yy"
                                    { }
#line 9704 "ompparser.cc"
    break;

  case 752: /* map_modifier2: map_modifier_mapper  */
#line 1210 "ompparser.yy"
                                    { }
#line 9710 "ompparser.cc"
    break;

  case 753: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1212 "ompparser.yy"
                                    { }
#line 9716 "ompparser.cc"
    break;

  case 754: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1213 "ompparser.yy"
                                    { }
#line 9722 "ompparser.cc"
    break;

  case 755: /* map_modifier3: map_modifier_mapper  */
#line 1214 "ompparser.yy"
                                    { }
#line 9728 "ompparser.cc"
    break;

  case 756: /* map_type: MAP_TYPE_TO  */
#line 1216 "ompparser.yy"
                       { }
#line 9734 "ompparser.cc"
    break;

  case 757: /* map_type: MAP_TYPE_FROM  */
#line 1217 "ompparser.yy"
                         { }
#line 9740 "ompparser.cc"
    break;

  case 758: /* map_type: MAP_TYPE_TOFROM  */
#line 1218 "ompparser.yy"
                           { }
#line 9746 "ompparser.cc"
    break;

  case 759: /* map_type: MAP_TYPE_ALLOC  */
#line 1219 "ompparser.yy"
                          { }
#line 9752 "ompparser.cc"
    break;

  case 760: /* map_type: MAP_TYPE_RELEASE  */
#line 1220 "ompparser.yy"
                            { }
#line 9758 "ompparser.cc"
    break;

  case 761: /* map_type: MAP_TYPE_DELETE  */
#line 1221 "ompparser.yy"
                           { }
#line 9764 "ompparser.cc"
    break;

  case 762: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1223 "ompparser.yy"
                                                            { }
#line 9770 "ompparser.cc"
    break;

  case 763: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1226 "ompparser.yy"
                                                                                      { }
#line 9776 "ompparser.cc"
    break;

  case 765: /* task_reduction_identifier: EXPR_STRING  */
#line 1229 "ompparser.yy"
                                        { }
#line 9782 "ompparser.cc"
    break;

  case 766: /* task_reduction_enum_identifier: '+'  */
#line 1232 "ompparser.yy"
                                     { }
#line 9788 "ompparser.cc"
    break;

  case 767: /* task_reduction_enum_identifier: '-'  */
#line 1233 "ompparser.yy"
                                     { }
#line 9794 "ompparser.cc"
    break;

  case 768: /* task_reduction_enum_identifier: '*'  */
#line 1234 "ompparser.yy"
                                     { }
#line 9800 "ompparser.cc"
    break;

  case 769: /* task_reduction_enum_identifier: '&'  */
#line 1235 "ompparser.yy"
                                     { }
#line 9806 "ompparser.cc"
    break;

  case 770: /* task_reduction_enum_identifier: '|'  */
#line 1236 "ompparser.yy"
                                     { }
#line 9812 "ompparser.cc"
    break;

  case 771: /* task_reduction_enum_identifier: '^'  */
#line 1237 "ompparser.yy"
                                     { }
#line 9818 "ompparser.cc"
    break;

  case 772: /* task_reduction_enum_identifier: LOGAND  */
#line 1238 "ompparser.yy"
                                        { }
#line 9824 "ompparser.cc"
    break;

  case 773: /* task_reduction_enum_identifier: LOGOR  */
#line 1239 "ompparser.yy"
                                       { }
#line 9830 "ompparser.cc"
    break;

  case 774: /* task_reduction_enum_identifier: MAX  */
#line 1240 "ompparser.yy"
                                     { }
#line 9836 "ompparser.cc"
    break;

  case 775: /* task_reduction_enum_identifier: MIN  */
#line 1241 "ompparser.yy"
                                     { }
#line 9842 "ompparser.cc"
    break;

  case 788: /* threads_clause: THREADS  */
#line 1260 "ompparser.yy"
                         { }
#line 9848 "ompparser.cc"
    break;

  case 789: /* simd_ordered_clause: SIMD  */
#line 1262 "ompparser.yy"
                           { }
#line 9854 "ompparser.cc"
    break;

  case 790: /* $@80: %empty  */
#line 1264 "ompparser.yy"
                                              {if (enCluster) {enDistribute = 1;}}
#line 9860 "ompparser.cc"
    break;

  case 808: /* $@81: %empty  */
#line 1285 "ompparser.yy"
                                                         {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp simd";}}
#line 9866 "ompparser.cc"
    break;

  case 809: /* teams_distribute_simd_directive: TEAMS DISTRIBUTE SIMD $@81 teams_distribute_simd_clause_optseq  */
#line 1285 "ompparser.yy"
                                                                                                                                                                                                      {if (enCluster) {enDistributeExtendido = 0;}}
#line 9872 "ompparser.cc"
    break;

  case 833: /* $@82: %empty  */
#line 1313 "ompparser.yy"
                                                                         {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel for";}}
#line 9878 "ompparser.cc"
    break;

  case 834: /* teams_distribute_parallel_for_directive: TEAMS DISTRIBUTE PARALLEL FOR $@82 teams_distribute_parallel_for_clause_optseq  */
#line 1313 "ompparser.yy"
                                                                                                                                                                                                                                      {if (enCluster) {enDistributeExtendido = 0;}}
#line 9884 "ompparser.cc"
    break;

  case 860: /* $@83: %empty  */
#line 1343 "ompparser.yy"
                                                                       {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel do";}}
#line 9890 "ompparser.cc"
    break;

  case 861: /* teams_distribute_parallel_do_directive: TEAMS DISTRIBUTE PARALLEL DO $@83 teams_distribute_parallel_do_clause_optseq  */
#line 1343 "ompparser.yy"
                                                                                                                                                                                                                                  {if (enCluster) {enDistributeExtendido = 0;}}
#line 9896 "ompparser.cc"
    break;

  case 887: /* $@84: %empty  */
#line 1373 "ompparser.yy"
                                                                                  {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel for simd";}}
#line 9902 "ompparser.cc"
    break;

  case 888: /* teams_distribute_parallel_for_simd_directive: TEAMS DISTRIBUTE PARALLEL FOR SIMD $@84 teams_distribute_parallel_for_simd_clause_optseq  */
#line 1373 "ompparser.yy"
                                                                                                                                                                                                                                                         {if (enCluster) {enDistributeExtendido = 0;}}
#line 9908 "ompparser.cc"
    break;

  case 918: /* $@85: %empty  */
#line 1407 "ompparser.yy"
                                                                                {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel do simd";}}
#line 9914 "ompparser.cc"
    break;

  case 919: /* teams_distribute_parallel_do_simd_directive: TEAMS DISTRIBUTE PARALLEL DO SIMD $@85 teams_distribute_parallel_do_simd_clause_optseq  */
#line 1407 "ompparser.yy"
                                                                                                                                                                                                                                                     {if (enCluster) {enDistributeExtendido = 0;}}
#line 9920 "ompparser.cc"
    break;

  case 949: /* $@86: %empty  */
#line 1441 "ompparser.yy"
                                 { }
#line 9926 "ompparser.cc"
    break;

  case 968: /* $@87: %empty  */
#line 1463 "ompparser.yy"
                                           { }
#line 9932 "ompparser.cc"
    break;

  case 993: /* $@88: %empty  */
#line 1492 "ompparser.yy"
                                                   { }
#line 9938 "ompparser.cc"
    break;

  case 1025: /* $@89: %empty  */
#line 1527 "ompparser.yy"
                                                 { }
#line 9944 "ompparser.cc"
    break;

  case 1057: /* $@90: %empty  */
#line 1562 "ompparser.yy"
                                                             { }
#line 9950 "ompparser.cc"
    break;

  case 1092: /* $@91: %empty  */
#line 1600 "ompparser.yy"
                                                           { }
#line 9956 "ompparser.cc"
    break;

  case 1127: /* $@92: %empty  */
#line 1638 "ompparser.yy"
                                                     { }
#line 9962 "ompparser.cc"
    break;

  case 1156: /* $@93: %empty  */
#line 1670 "ompparser.yy"
                                   { }
#line 9968 "ompparser.cc"
    break;

  case 1184: /* $@94: %empty  */
#line 1701 "ompparser.yy"
                                     { }
#line 9974 "ompparser.cc"
    break;

  case 1208: /* $@95: %empty  */
#line 1728 "ompparser.yy"
                                                           { }
#line 9980 "ompparser.cc"
    break;

  case 1235: /* $@96: %empty  */
#line 1758 "ompparser.yy"
                                                                     { }
#line 9986 "ompparser.cc"
    break;

  case 1268: /* $@97: %empty  */
#line 1794 "ompparser.yy"
                                               { }
#line 9992 "ompparser.cc"
    break;

  case 1296: /* $@98: %empty  */
#line 1825 "ompparser.yy"
                                                                                     { }
#line 9998 "ompparser.cc"
    break;

  case 1330: /* $@99: %empty  */
#line 1862 "ompparser.yy"
                                                                                   { }
#line 10004 "ompparser.cc"
    break;

  case 1364: /* $@100: %empty  */
#line 1899 "ompparser.yy"
                                                                                               { }
#line 10010 "ompparser.cc"
    break;

  case 1402: /* $@101: %empty  */
#line 1940 "ompparser.yy"
                                                                                             { }
#line 10016 "ompparser.cc"
    break;

  case 1440: /* $@102: %empty  */
#line 1983 "ompparser.yy"
                    { }
#line 10022 "ompparser.cc"
    break;

  case 1442: /* $@103: %empty  */
#line 1985 "ompparser.yy"
                  { }
#line 10028 "ompparser.cc"
    break;

  case 1444: /* $@104: %empty  */
#line 1987 "ompparser.yy"
                         { }
#line 10034 "ompparser.cc"
    break;

  case 1446: /* $@105: %empty  */
#line 1989 "ompparser.yy"
                      { }
#line 10040 "ompparser.cc"
    break;

  case 1448: /* $@106: %empty  */
#line 1991 "ompparser.yy"
                              { }
#line 10046 "ompparser.cc"
    break;

  case 1450: /* $@107: %empty  */
#line 1993 "ompparser.yy"
                            { }
#line 10052 "ompparser.cc"
    break;

  case 1452: /* $@108: %empty  */
#line 1995 "ompparser.yy"
                                   { }
#line 10058 "ompparser.cc"
    break;

  case 1455: /* $@109: %empty  */
#line 1999 "ompparser.yy"
                                              { }
#line 10064 "ompparser.cc"
    break;

  case 1457: /* $@110: %empty  */
#line 2001 "ompparser.yy"
                                      { }
#line 10070 "ompparser.cc"
    break;

  case 1459: /* $@111: %empty  */
#line 2003 "ompparser.yy"
                                              { }
#line 10076 "ompparser.cc"
    break;

  case 1462: /* proc_name: EXPR_STRING  */
#line 2006 "ompparser.yy"
                        { }
#line 10082 "ompparser.cc"
    break;

  case 1463: /* $@112: %empty  */
#line 2008 "ompparser.yy"
                                  {if (enCluster) {enDistribute = 1;}}
#line 10088 "ompparser.cc"
    break;

  case 1465: /* $@113: %empty  */
#line 2010 "ompparser.yy"
                                            {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp simd";}}
#line 10094 "ompparser.cc"
    break;

  case 1466: /* distribute_simd_directive: DISTRIBUTE SIMD $@113 distribute_simd_clause_optseq  */
#line 2010 "ompparser.yy"
                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10100 "ompparser.cc"
    break;

  case 1467: /* $@114: %empty  */
#line 2012 "ompparser.yy"
                                                            {if (enCluster) {enDistribute = 1; enDistributeExtendido = 2; guardarLineasDist += "#pragma omp parallel for";}}
#line 10106 "ompparser.cc"
    break;

  case 1468: /* distribute_parallel_for_directive: DISTRIBUTE PARALLEL FOR $@114 distribute_parallel_for_clause_optseq  */
#line 2012 "ompparser.yy"
                                                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10112 "ompparser.cc"
    break;

  case 1469: /* $@115: %empty  */
#line 2014 "ompparser.yy"
                                                          {if (enCluster) {enDistribute = 1; enDistributeExtendido = 3; guardarLineasDist += "#pragma omp parallel do";}}
#line 10118 "ompparser.cc"
    break;

  case 1470: /* distribute_parallel_do_directive: DISTRIBUTE PARALLEL DO $@115 distribute_parallel_do_clause_optseq  */
#line 2014 "ompparser.yy"
                                                                                                                                                                                                               {if (enCluster) {enDistributeExtendido = 0;}}
#line 10124 "ompparser.cc"
    break;

  case 1471: /* $@116: %empty  */
#line 2016 "ompparser.yy"
                                                                      {if (enCluster) {enDistribute = 1; enDistributeExtendido = 4; guardarLineasDist += "#pragma omp parallel for simd";}}
#line 10130 "ompparser.cc"
    break;

  case 1472: /* distribute_parallel_for_simd_directive: DISTRIBUTE PARALLEL FOR SIMD $@116 distribute_parallel_for_simd_clause_optseq  */
#line 2016 "ompparser.yy"
                                                                                                                                                                                                                                       {if (enCluster) {enDistributeExtendido = 0;}}
#line 10136 "ompparser.cc"
    break;

  case 1473: /* $@117: %empty  */
#line 2018 "ompparser.yy"
                                                                    {if (enCluster) {enDistribute = 1; enDistributeExtendido = 5; guardarLineasDist += "#pragma omp parallel do simd";}}
#line 10142 "ompparser.cc"
    break;

  case 1474: /* distribute_parallel_do_simd_directive: DISTRIBUTE PARALLEL DO SIMD $@117 distribute_parallel_do_simd_clause_optseq  */
#line 2018 "ompparser.yy"
                                                                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10148 "ompparser.cc"
    break;

  case 1475: /* $@118: %empty  */
#line 2020 "ompparser.yy"
                                      { }
#line 10154 "ompparser.cc"
    break;

  case 1477: /* $@119: %empty  */
#line 2022 "ompparser.yy"
                                    { }
#line 10160 "ompparser.cc"
    break;

  case 1479: /* $@120: %empty  */
#line 2024 "ompparser.yy"
                                        { }
#line 10166 "ompparser.cc"
    break;

  case 1481: /* $@121: %empty  */
#line 2026 "ompparser.yy"
                                                { }
#line 10172 "ompparser.cc"
    break;

  case 1483: /* $@122: %empty  */
#line 2028 "ompparser.yy"
                                                  { }
#line 10178 "ompparser.cc"
    break;

  case 1485: /* $@123: %empty  */
#line 2030 "ompparser.yy"
                                            { }
#line 10184 "ompparser.cc"
    break;

  case 1487: /* $@124: %empty  */
#line 2032 "ompparser.yy"
                                            {
                          }
#line 10191 "ompparser.cc"
    break;

  case 1489: /* $@125: %empty  */
#line 2036 "ompparser.yy"
                                                      {
                               }
#line 10198 "ompparser.cc"
    break;

  case 1491: /* $@126: %empty  */
#line 2040 "ompparser.yy"
                                                              {
                                   }
#line 10205 "ompparser.cc"
    break;

  case 1493: /* $@127: %empty  */
#line 2044 "ompparser.yy"
                                                                        {
                                        }
#line 10212 "ompparser.cc"
    break;

  case 1495: /* $@128: %empty  */
#line 2048 "ompparser.yy"
                      { }
#line 10218 "ompparser.cc"
    break;

  case 1497: /* $@129: %empty  */
#line 2050 "ompparser.yy"
                      { }
#line 10224 "ompparser.cc"
    break;

  case 1499: /* $@130: %empty  */
#line 2052 "ompparser.yy"
                              { }
#line 10230 "ompparser.cc"
    break;

  case 1501: /* $@131: %empty  */
#line 2054 "ompparser.yy"
                                     { }
#line 10236 "ompparser.cc"
    break;

  case 1503: /* section_directive: SECTION  */
#line 2056 "ompparser.yy"
                            { }
#line 10242 "ompparser.cc"
    break;

  case 1504: /* $@132: %empty  */
#line 2058 "ompparser.yy"
                          { }
#line 10248 "ompparser.cc"
    break;

  case 1506: /* $@133: %empty  */
#line 2060 "ompparser.yy"
                                 { }
#line 10254 "ompparser.cc"
    break;

  case 1508: /* workshare_directive: WORKSHARE  */
#line 2062 "ompparser.yy"
                                { }
#line 10260 "ompparser.cc"
    break;

  case 1509: /* $@134: %empty  */
#line 2064 "ompparser.yy"
                                       { }
#line 10266 "ompparser.cc"
    break;

  case 1511: /* $@135: %empty  */
#line 2066 "ompparser.yy"
                          { }
#line 10272 "ompparser.cc"
    break;

  case 1513: /* $@136: %empty  */
#line 2073 "ompparser.yy"
                                                  { }
#line 10278 "ompparser.cc"
    break;

  case 1515: /* $@137: %empty  */
#line 2080 "ompparser.yy"
                        { }
#line 10284 "ompparser.cc"
    break;

  case 1517: /* $@138: %empty  */
#line 2083 "ompparser.yy"
                              { }
#line 10290 "ompparser.cc"
    break;

  case 1520: /* directive_variable: EXPR_STRING  */
#line 2088 "ompparser.yy"
                                 { }
#line 10296 "ompparser.cc"
    break;

  case 1523: /* $@139: %empty  */
#line 2094 "ompparser.yy"
                                        {  }
#line 10302 "ompparser.cc"
    break;

  case 1525: /* threadprivate_variable: EXPR_STRING  */
#line 2096 "ompparser.yy"
                                     { }
#line 10308 "ompparser.cc"
    break;

  case 1528: /* $@140: %empty  */
#line 2102 "ompparser.yy"
                                                { }
#line 10314 "ompparser.cc"
    break;

  case 1531: /* reduction_identifiers: '+'  */
#line 2108 "ompparser.yy"
                           { }
#line 10320 "ompparser.cc"
    break;

  case 1532: /* reduction_identifiers: '-'  */
#line 2109 "ompparser.yy"
                           { }
#line 10326 "ompparser.cc"
    break;

  case 1533: /* reduction_identifiers: '*'  */
#line 2110 "ompparser.yy"
                           { }
#line 10332 "ompparser.cc"
    break;

  case 1534: /* reduction_identifiers: '&'  */
#line 2111 "ompparser.yy"
                           { }
#line 10338 "ompparser.cc"
    break;

  case 1535: /* reduction_identifiers: '|'  */
#line 2112 "ompparser.yy"
                           { }
#line 10344 "ompparser.cc"
    break;

  case 1536: /* reduction_identifiers: '^'  */
#line 2113 "ompparser.yy"
                           { }
#line 10350 "ompparser.cc"
    break;

  case 1537: /* reduction_identifiers: LOGAND  */
#line 2114 "ompparser.yy"
                              { }
#line 10356 "ompparser.cc"
    break;

  case 1538: /* reduction_identifiers: LOGOR  */
#line 2115 "ompparser.yy"
                             { }
#line 10362 "ompparser.cc"
    break;

  case 1539: /* typername_variable: EXPR_STRING  */
#line 2118 "ompparser.yy"
                                 { }
#line 10368 "ompparser.cc"
    break;

  case 1542: /* combiner: EXPR_STRING  */
#line 2123 "ompparser.yy"
                       { }
#line 10374 "ompparser.cc"
    break;

  case 1543: /* $@141: %empty  */
#line 2126 "ompparser.yy"
                                          { }
#line 10380 "ompparser.cc"
    break;

  case 1548: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2136 "ompparser.yy"
                                       { }
#line 10386 "ompparser.cc"
    break;

  case 1549: /* mapper_identifier: EXPR_STRING  */
#line 2137 "ompparser.yy"
                                { }
#line 10392 "ompparser.cc"
    break;

  case 1550: /* type_var: EXPR_STRING  */
#line 2140 "ompparser.yy"
                       { }
#line 10398 "ompparser.cc"
    break;

  case 1775: /* $@142: %empty  */
#line 2500 "ompparser.yy"
                             {enScatter = 1; chunk_pos = 0; aumentarScatter();}
#line 10404 "ompparser.cc"
    break;

  case 1776: /* cluster_clause: $@142 scatter_clause  */
#line 2500 "ompparser.yy"
                                                                                               {enScatter = 0; MPIScatter(); if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10410 "ompparser.cc"
    break;

  case 1777: /* $@143: %empty  */
#line 2501 "ompparser.yy"
                             {enGather = 1; chunk_pos = 0; aumentarGather(); enGatherInst = 1;}
#line 10416 "ompparser.cc"
    break;

  case 1778: /* cluster_clause: $@143 gather_clause  */
#line 2501 "ompparser.yy"
                                                                                                              {enGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10422 "ompparser.cc"
    break;

  case 1779: /* $@144: %empty  */
#line 2502 "ompparser.yy"
                             {enAllGather = 1; chunk_pos = 0; aumentarAllGather(); enAllGatherInst = 1;}
#line 10428 "ompparser.cc"
    break;

  case 1780: /* cluster_clause: $@144 allgather_clause  */
#line 2502 "ompparser.yy"
                                                                                                                          {enAllGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10434 "ompparser.cc"
    break;

  case 1782: /* $@145: %empty  */
#line 2504 "ompparser.yy"
                             {enReductionCluster = 1;}
#line 10440 "ompparser.cc"
    break;

  case 1784: /* $@146: %empty  */
#line 2505 "ompparser.yy"
                             {enAllReductionCluster = 1;}
#line 10446 "ompparser.cc"
    break;

  case 1825: /* $@147: %empty  */
#line 2552 "ompparser.yy"
                      {enReductionDistribute = 1;}
#line 10452 "ompparser.cc"
    break;

  case 1827: /* $@148: %empty  */
#line 2553 "ompparser.yy"
                      {enAllReductionDistribute = 1;}
#line 10458 "ompparser.cc"
    break;

  case 1848: /* $@149: %empty  */
#line 2575 "ompparser.yy"
                                  {enReductionDistribute = 1;}
#line 10464 "ompparser.cc"
    break;

  case 1850: /* $@150: %empty  */
#line 2576 "ompparser.yy"
                                  {enAllReductionDistribute = 1;}
#line 10470 "ompparser.cc"
    break;

  case 1852: /* $@151: %empty  */
#line 2579 "ompparser.yy"
                           { }
#line 10476 "ompparser.cc"
    break;

  case 1854: /* dependance_type: IN  */
#line 2582 "ompparser.yy"
                     {
                      addArg("IN"); }
#line 10483 "ompparser.cc"
    break;

  case 1855: /* dependance_type: OUT  */
#line 2584 "ompparser.yy"
                                      {
                      addArg("OUT"); }
#line 10490 "ompparser.cc"
    break;

  case 1968: /* $@152: %empty  */
#line 2717 "ompparser.yy"
                         {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10496 "ompparser.cc"
    break;

  case 1970: /* $@153: %empty  */
#line 2718 "ompparser.yy"
                         {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10502 "ompparser.cc"
    break;

  case 1986: /* $@154: %empty  */
#line 2735 "ompparser.yy"
                                 {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10508 "ompparser.cc"
    break;

  case 1990: /* $@155: %empty  */
#line 2738 "ompparser.yy"
                                 {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10514 "ompparser.cc"
    break;

  case 2006: /* $@156: %empty  */
#line 2754 "ompparser.yy"
                                {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10520 "ompparser.cc"
    break;

  case 2010: /* $@157: %empty  */
#line 2757 "ompparser.yy"
                                {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10526 "ompparser.cc"
    break;

  case 2025: /* $@158: %empty  */
#line 2772 "ompparser.yy"
                                      {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10532 "ompparser.cc"
    break;

  case 2029: /* $@159: %empty  */
#line 2775 "ompparser.yy"
                                      {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10538 "ompparser.cc"
    break;

  case 2036: /* $@160: %empty  */
#line 2781 "ompparser.yy"
                                      {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10544 "ompparser.cc"
    break;

  case 2050: /* $@161: %empty  */
#line 2795 "ompparser.yy"
                                     {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10550 "ompparser.cc"
    break;

  case 2054: /* $@162: %empty  */
#line 2798 "ompparser.yy"
                                     {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10556 "ompparser.cc"
    break;

  case 2060: /* $@163: %empty  */
#line 2803 "ompparser.yy"
                                     {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10562 "ompparser.cc"
    break;

  case 2248: /* construct_type_clause: PARALLEL  */
#line 3006 "ompparser.yy"
                                 { }
#line 10568 "ompparser.cc"
    break;

  case 2249: /* construct_type_clause: SECTIONS  */
#line 3007 "ompparser.yy"
                                 { }
#line 10574 "ompparser.cc"
    break;

  case 2250: /* construct_type_clause: FOR  */
#line 3008 "ompparser.yy"
                            { }
#line 10580 "ompparser.cc"
    break;

  case 2251: /* construct_type_clause: DO  */
#line 3009 "ompparser.yy"
                           { }
#line 10586 "ompparser.cc"
    break;

  case 2252: /* construct_type_clause: TASKGROUP  */
#line 3010 "ompparser.yy"
                                  { }
#line 10592 "ompparser.cc"
    break;

  case 2253: /* $@164: %empty  */
#line 3017 "ompparser.yy"
                        {if (enDistributeExtendido == 2 || enDistributeExtendido == 3){guardarLineasDist += " if("; meterEnClause = 1;}}
#line 10598 "ompparser.cc"
    break;

  case 2254: /* if_parallel_clause: IF $@164 '(' if_parallel_parameter ')'  */
#line 3017 "ompparser.yy"
                                                                                                                                                                       {if (enDistributeExtendido == 2 || enDistributeExtendido == 3){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 10604 "ompparser.cc"
    break;

  case 2255: /* $@165: %empty  */
#line 3020 "ompparser.yy"
                                     {if (meterEnClause){guardarLineasDist += (yyvsp[-1].stype);}}
#line 10610 "ompparser.cc"
    break;

  case 2256: /* if_parallel_parameter: PARALLEL ':' $@165 expression  */
#line 3021 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[-3].stype);}}
#line 10616 "ompparser.cc"
    break;

  case 2257: /* if_parallel_parameter: EXPR_STRING  */
#line 3022 "ompparser.yy"
                                    {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 10622 "ompparser.cc"
    break;

  case 2258: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 3024 "ompparser.yy"
                                              { ; }
#line 10628 "ompparser.cc"
    break;

  case 2259: /* $@166: %empty  */
#line 3027 "ompparser.yy"
                             { }
#line 10634 "ompparser.cc"
    break;

  case 2260: /* if_task_parameter: TASK ':' $@166 expression  */
#line 3027 "ompparser.yy"
                                             { ; }
#line 10640 "ompparser.cc"
    break;

  case 2261: /* if_task_parameter: EXPR_STRING  */
#line 3028 "ompparser.yy"
                                { }
#line 10646 "ompparser.cc"
    break;

  case 2262: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 3030 "ompparser.yy"
                                                      { ; }
#line 10652 "ompparser.cc"
    break;

  case 2263: /* $@167: %empty  */
#line 3033 "ompparser.yy"
                                     { }
#line 10658 "ompparser.cc"
    break;

  case 2264: /* if_taskloop_parameter: TASKLOOP ':' $@167 expression  */
#line 3033 "ompparser.yy"
                                                     { ; }
#line 10664 "ompparser.cc"
    break;

  case 2265: /* if_taskloop_parameter: EXPR_STRING  */
#line 3034 "ompparser.yy"
                                    { }
#line 10670 "ompparser.cc"
    break;

  case 2266: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 3036 "ompparser.yy"
                                                            { ; }
#line 10676 "ompparser.cc"
    break;

  case 2267: /* $@168: %empty  */
#line 3039 "ompparser.yy"
                                           { }
#line 10682 "ompparser.cc"
    break;

  case 2268: /* if_target_data_parameter: TARGET DATA ':' $@168 expression  */
#line 3039 "ompparser.yy"
                                                           { ; }
#line 10688 "ompparser.cc"
    break;

  case 2269: /* if_target_data_parameter: EXPR_STRING  */
#line 3040 "ompparser.yy"
                                       { }
#line 10694 "ompparser.cc"
    break;

  case 2270: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 3042 "ompparser.yy"
                                                                    { ; }
#line 10700 "ompparser.cc"
    break;

  case 2271: /* $@169: %empty  */
#line 3045 "ompparser.yy"
                                          { }
#line 10706 "ompparser.cc"
    break;

  case 2272: /* if_target_parallel_parameter: TARGET ':' $@169 expression  */
#line 3045 "ompparser.yy"
                                                          { ; }
#line 10712 "ompparser.cc"
    break;

  case 2273: /* $@170: %empty  */
#line 3046 "ompparser.yy"
                                            { }
#line 10718 "ompparser.cc"
    break;

  case 2274: /* if_target_parallel_parameter: PARALLEL ':' $@170 expression  */
#line 3046 "ompparser.yy"
                                                            { ; }
#line 10724 "ompparser.cc"
    break;

  case 2275: /* if_target_parallel_parameter: EXPR_STRING  */
#line 3047 "ompparser.yy"
                                           { }
#line 10730 "ompparser.cc"
    break;

  case 2276: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 3049 "ompparser.yy"
                                                            { ; }
#line 10736 "ompparser.cc"
    break;

  case 2277: /* $@171: %empty  */
#line 3052 "ompparser.yy"
                                      { }
#line 10742 "ompparser.cc"
    break;

  case 2278: /* if_target_simd_parameter: TARGET ':' $@171 expression  */
#line 3052 "ompparser.yy"
                                                      { ; }
#line 10748 "ompparser.cc"
    break;

  case 2279: /* $@172: %empty  */
#line 3053 "ompparser.yy"
                                    { }
#line 10754 "ompparser.cc"
    break;

  case 2280: /* if_target_simd_parameter: SIMD ':' $@172 expression  */
#line 3053 "ompparser.yy"
                                                    { ; }
#line 10760 "ompparser.cc"
    break;

  case 2281: /* if_target_simd_parameter: EXPR_STRING  */
#line 3054 "ompparser.yy"
                                       { }
#line 10766 "ompparser.cc"
    break;

  case 2282: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 3056 "ompparser.yy"
                                                                        { ; }
#line 10772 "ompparser.cc"
    break;

  case 2283: /* $@173: %empty  */
#line 3059 "ompparser.yy"
                                                       { }
#line 10778 "ompparser.cc"
    break;

  case 2284: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@173 expression  */
#line 3059 "ompparser.yy"
                                                                       { ; }
#line 10784 "ompparser.cc"
    break;

  case 2285: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 3060 "ompparser.yy"
                                             { }
#line 10790 "ompparser.cc"
    break;

  case 2286: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 3062 "ompparser.yy"
                                                                      { ; }
#line 10796 "ompparser.cc"
    break;

  case 2287: /* $@174: %empty  */
#line 3065 "ompparser.yy"
                                                     { }
#line 10802 "ompparser.cc"
    break;

  case 2288: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@174 expression  */
#line 3065 "ompparser.yy"
                                                                     { ; }
#line 10808 "ompparser.cc"
    break;

  case 2289: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 3066 "ompparser.yy"
                                            { }
#line 10814 "ompparser.cc"
    break;

  case 2290: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 3068 "ompparser.yy"
                                                  { ; }
#line 10820 "ompparser.cc"
    break;

  case 2291: /* $@175: %empty  */
#line 3071 "ompparser.yy"
                                 { }
#line 10826 "ompparser.cc"
    break;

  case 2292: /* if_target_parameter: TARGET ':' $@175 expression  */
#line 3071 "ompparser.yy"
                                                 { ; }
#line 10832 "ompparser.cc"
    break;

  case 2293: /* if_target_parameter: EXPR_STRING  */
#line 3072 "ompparser.yy"
                                  { }
#line 10838 "ompparser.cc"
    break;

  case 2294: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 3074 "ompparser.yy"
                                                                { ; }
#line 10844 "ompparser.cc"
    break;

  case 2295: /* $@176: %empty  */
#line 3077 "ompparser.yy"
                                               { }
#line 10850 "ompparser.cc"
    break;

  case 2296: /* if_target_update_parameter: TARGET UPDATE ':' $@176 expression  */
#line 3077 "ompparser.yy"
                                                               { ; }
#line 10856 "ompparser.cc"
    break;

  case 2297: /* if_target_update_parameter: EXPR_STRING  */
#line 3078 "ompparser.yy"
                                         { }
#line 10862 "ompparser.cc"
    break;

  case 2298: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3080 "ompparser.yy"
                                                                { ; }
#line 10868 "ompparser.cc"
    break;

  case 2299: /* $@177: %empty  */
#line 3083 "ompparser.yy"
                                          { }
#line 10874 "ompparser.cc"
    break;

  case 2300: /* if_taskloop_simd_parameter: TASKLOOP ':' $@177 expression  */
#line 3083 "ompparser.yy"
                                                          { ; }
#line 10880 "ompparser.cc"
    break;

  case 2301: /* $@178: %empty  */
#line 3084 "ompparser.yy"
                                      { }
#line 10886 "ompparser.cc"
    break;

  case 2302: /* if_taskloop_simd_parameter: SIMD ':' $@178 expression  */
#line 3084 "ompparser.yy"
                                                      { ; }
#line 10892 "ompparser.cc"
    break;

  case 2303: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3085 "ompparser.yy"
                                         {
                             }
#line 10899 "ompparser.cc"
    break;

  case 2304: /* $@179: %empty  */
#line 3087 "ompparser.yy"
                    {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " if("; meterEnClause = 1;}}
#line 10905 "ompparser.cc"
    break;

  case 2305: /* if_simd_clause: IF $@179 '(' if_simd_parameter ')'  */
#line 3087 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 10911 "ompparser.cc"
    break;

  case 2306: /* $@180: %empty  */
#line 3089 "ompparser.yy"
                             {if (meterEnClause) {guardarLineasDist += "simd:";}}
#line 10917 "ompparser.cc"
    break;

  case 2307: /* if_simd_parameter: SIMD ':' $@180 expression  */
#line 3089 "ompparser.yy"
                                                                                              {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 10923 "ompparser.cc"
    break;

  case 2308: /* if_simd_parameter: EXPR_STRING  */
#line 3090 "ompparser.yy"
                                {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 10929 "ompparser.cc"
    break;

  case 2309: /* $@181: %empty  */
#line 3092 "ompparser.yy"
                                 {if(enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += "if("; meterEnClause = 1;}}
#line 10935 "ompparser.cc"
    break;

  case 2310: /* if_parallel_simd_clause: IF '(' $@181 if_parallel_simd_parameter ')'  */
#line 3092 "ompparser.yy"
                                                                                                                                                                               {if(enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 10941 "ompparser.cc"
    break;

  case 2311: /* if_parallel_simd_parameter: SIMD ':' expression  */
#line 3094 "ompparser.yy"
                                                 {if(meterEnClause){guardarLineasDist += "simd:"; guardarLineasDist += (yyvsp[0].stype);}}
#line 10947 "ompparser.cc"
    break;

  case 2312: /* if_parallel_simd_parameter: PARALLEL ':' expression  */
#line 3095 "ompparser.yy"
                                                     {if(meterEnClause){guardarLineasDist += "parallel:"; guardarLineasDist += (yyvsp[0].stype);}}
#line 10953 "ompparser.cc"
    break;

  case 2313: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3096 "ompparser.yy"
                                         {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 10959 "ompparser.cc"
    break;

  case 2314: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3098 "ompparser.yy"
                                                                              { ; }
#line 10965 "ompparser.cc"
    break;

  case 2315: /* $@182: %empty  */
#line 3100 "ompparser.yy"
                                             { }
#line 10971 "ompparser.cc"
    break;

  case 2316: /* if_target_parallel_simd_parameter: SIMD ':' $@182 expression  */
#line 3100 "ompparser.yy"
                                                             { ; }
#line 10977 "ompparser.cc"
    break;

  case 2317: /* $@183: %empty  */
#line 3101 "ompparser.yy"
                                                 { }
#line 10983 "ompparser.cc"
    break;

  case 2318: /* if_target_parallel_simd_parameter: PARALLEL ':' $@183 expression  */
#line 3101 "ompparser.yy"
                                                                 { ; }
#line 10989 "ompparser.cc"
    break;

  case 2319: /* $@184: %empty  */
#line 3102 "ompparser.yy"
                                               { }
#line 10995 "ompparser.cc"
    break;

  case 2320: /* if_target_parallel_simd_parameter: TARGET ':' $@184 expression  */
#line 3102 "ompparser.yy"
                                                               { ; }
#line 11001 "ompparser.cc"
    break;

  case 2321: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3103 "ompparser.yy"
                                                { }
#line 11007 "ompparser.cc"
    break;

  case 2322: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3105 "ompparser.yy"
                                                  { ; }
#line 11013 "ompparser.cc"
    break;

  case 2323: /* $@185: %empty  */
#line 3107 "ompparser.yy"
                                 { }
#line 11019 "ompparser.cc"
    break;

  case 2324: /* if_cancel_parameter: CANCEL ':' $@185 expression  */
#line 3107 "ompparser.yy"
                                                 { ; }
#line 11025 "ompparser.cc"
    break;

  case 2325: /* if_cancel_parameter: EXPR_STRING  */
#line 3108 "ompparser.yy"
                                  { }
#line 11031 "ompparser.cc"
    break;

  case 2326: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3110 "ompparser.yy"
                                                                        { ; }
#line 11037 "ompparser.cc"
    break;

  case 2327: /* $@186: %empty  */
#line 3112 "ompparser.yy"
                                              { }
#line 11043 "ompparser.cc"
    break;

  case 2328: /* if_parallel_taskloop_parameter: PARALLEL ':' $@186 expression  */
#line 3112 "ompparser.yy"
                                                              { ; }
#line 11049 "ompparser.cc"
    break;

  case 2329: /* $@187: %empty  */
#line 3113 "ompparser.yy"
                                              { }
#line 11055 "ompparser.cc"
    break;

  case 2330: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@187 expression  */
#line 3113 "ompparser.yy"
                                                              { ; }
#line 11061 "ompparser.cc"
    break;

  case 2331: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3114 "ompparser.yy"
                                             {
                                }
#line 11068 "ompparser.cc"
    break;

  case 2332: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3116 "ompparser.yy"
                                                                                  { ; }
#line 11074 "ompparser.cc"
    break;

  case 2333: /* $@188: %empty  */
#line 3118 "ompparser.yy"
                                                   { }
#line 11080 "ompparser.cc"
    break;

  case 2334: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@188 expression  */
#line 3118 "ompparser.yy"
                                                                   { ; }
#line 11086 "ompparser.cc"
    break;

  case 2335: /* $@189: %empty  */
#line 3119 "ompparser.yy"
                                                   { }
#line 11092 "ompparser.cc"
    break;

  case 2336: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@189 expression  */
#line 3119 "ompparser.yy"
                                                                   { ; }
#line 11098 "ompparser.cc"
    break;

  case 2337: /* $@190: %empty  */
#line 3120 "ompparser.yy"
                                               { }
#line 11104 "ompparser.cc"
    break;

  case 2338: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@190 expression  */
#line 3120 "ompparser.yy"
                                                               { ; }
#line 11110 "ompparser.cc"
    break;

  case 2339: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3121 "ompparser.yy"
                                                  { }
#line 11116 "ompparser.cc"
    break;

  case 2340: /* $@191: %empty  */
#line 3132 "ompparser.yy"
                                {if (enDistributeExtendido > 1){guardarLineasDist += " num_threads("; meterEnClause = 1;}}
#line 11122 "ompparser.cc"
    break;

  case 2341: /* num_threads_clause: NUM_THREADS $@191 '(' expression ')'  */
#line 3132 "ompparser.yy"
                                                                                                                                              {if (enDistributeExtendido > 1){guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11128 "ompparser.cc"
    break;

  case 2342: /* $@192: %empty  */
#line 3134 "ompparser.yy"
                            {
                         }
#line 11135 "ompparser.cc"
    break;

  case 2344: /* $@193: %empty  */
#line 3137 "ompparser.yy"
                    {
                  }
#line 11142 "ompparser.cc"
    break;

  case 2346: /* $@194: %empty  */
#line 3141 "ompparser.yy"
                                  { }
#line 11148 "ompparser.cc"
    break;

  case 2348: /* $@195: %empty  */
#line 3143 "ompparser.yy"
                      {if (enDistributeExtendido > 1){guardarLineasDist += " copyin("; meterEnClause = 1;}}
#line 11154 "ompparser.cc"
    break;

  case 2349: /* copyin_clause: COPYIN $@195 '(' var_list ')'  */
#line 3143 "ompparser.yy"
                                                                                                                             {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11160 "ompparser.cc"
    break;

  case 2350: /* $@196: %empty  */
#line 3146 "ompparser.yy"
                         {if (enDistributeExtendido > 1){guardarLineasDist += " default("; meterEnClause = 1;}}
#line 11166 "ompparser.cc"
    break;

  case 2351: /* default_clause: DEFAULT $@196 '(' default_parameter ')'  */
#line 3146 "ompparser.yy"
                                                                                                                                          {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11172 "ompparser.cc"
    break;

  case 2352: /* default_parameter: SHARED  */
#line 3149 "ompparser.yy"
                           {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11178 "ompparser.cc"
    break;

  case 2353: /* default_parameter: NONE  */
#line 3150 "ompparser.yy"
                         {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11184 "ompparser.cc"
    break;

  case 2354: /* default_parameter: FIRSTPRIVATE  */
#line 3151 "ompparser.yy"
                                 {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11190 "ompparser.cc"
    break;

  case 2355: /* default_parameter: PRIVATE  */
#line 3152 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11196 "ompparser.cc"
    break;

  case 2356: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3155 "ompparser.yy"
                                                                   { }
#line 11202 "ompparser.cc"
    break;

  case 2357: /* default_variant_directive: %empty  */
#line 3158 "ompparser.yy"
                            { }
#line 11208 "ompparser.cc"
    break;

  case 2358: /* $@197: %empty  */
#line 3161 "ompparser.yy"
                             {if(enDistributeExtendido > 1){guardarLineasDist += " proc_bind("; meterEnClause = 1;}}
#line 11214 "ompparser.cc"
    break;

  case 2359: /* proc_bind_clause: PROC_BIND $@197 '(' proc_bind_parameter ')'  */
#line 3161 "ompparser.yy"
                                                                                                                                                 {if(enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11220 "ompparser.cc"
    break;

  case 2360: /* proc_bind_parameter: MASTER  */
#line 3164 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11226 "ompparser.cc"
    break;

  case 2361: /* proc_bind_parameter: CLOSE  */
#line 3165 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11232 "ompparser.cc"
    break;

  case 2362: /* proc_bind_parameter: SPREAD  */
#line 3166 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11238 "ompparser.cc"
    break;

  case 2363: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3168 "ompparser.yy"
                                          { }
#line 11244 "ompparser.cc"
    break;

  case 2364: /* bind_parameter: TEAMS  */
#line 3170 "ompparser.yy"
                       { }
#line 11250 "ompparser.cc"
    break;

  case 2365: /* bind_parameter: PARALLEL  */
#line 3171 "ompparser.yy"
                          { }
#line 11256 "ompparser.cc"
    break;

  case 2366: /* bind_parameter: THREAD  */
#line 3172 "ompparser.yy"
                        { }
#line 11262 "ompparser.cc"
    break;

  case 2367: /* $@198: %empty  */
#line 3175 "ompparser.yy"
                           {if (enDistributeExtendido > 1) {guardarLineasDist += " allocate("; meterEnClause = 1;}}
#line 11268 "ompparser.cc"
    break;

  case 2368: /* allocate_clause: ALLOCATE $@198 '(' allocate_parameter ')'  */
#line 3175 "ompparser.yy"
                                                                                                                                               {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11274 "ompparser.cc"
    break;

  case 2369: /* allocate_parameter: EXPR_STRING  */
#line 3178 "ompparser.yy"
                                  {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11280 "ompparser.cc"
    break;

  case 2370: /* $@199: %empty  */
#line 3179 "ompparser.yy"
                                     {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11286 "ompparser.cc"
    break;

  case 2372: /* $@200: %empty  */
#line 3180 "ompparser.yy"
                                             {if (meterEnClause) {guardarLineasDist += ":";}}
#line 11292 "ompparser.cc"
    break;

  case 2374: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3182 "ompparser.yy"
                                        { }
#line 11298 "ompparser.cc"
    break;

  case 2375: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3183 "ompparser.yy"
                                          { }
#line 11304 "ompparser.cc"
    break;

  case 2376: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3184 "ompparser.yy"
                                      { }
#line 11310 "ompparser.cc"
    break;

  case 2377: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3185 "ompparser.yy"
                                        { }
#line 11316 "ompparser.cc"
    break;

  case 2378: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3186 "ompparser.yy"
                                        { }
#line 11322 "ompparser.cc"
    break;

  case 2379: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3187 "ompparser.yy"
                                       { }
#line 11328 "ompparser.cc"
    break;

  case 2380: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3188 "ompparser.yy"
                                      { }
#line 11334 "ompparser.cc"
    break;

  case 2381: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3189 "ompparser.yy"
                                       { }
#line 11340 "ompparser.cc"
    break;

  case 2382: /* allocator_parameter: EXPR_STRING  */
#line 3190 "ompparser.yy"
                                  { }
#line 11346 "ompparser.cc"
    break;

  case 2383: /* $@201: %empty  */
#line 3193 "ompparser.yy"
                         {if (enDistributeExtendido) {guardarLineasDist += " private("; meterEnClause = 1;}}
#line 11352 "ompparser.cc"
    break;

  case 2384: /* private_clause: PRIVATE $@201 '(' var_list ')'  */
#line 3193 "ompparser.yy"
                                                                                                                              {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11358 "ompparser.cc"
    break;

  case 2385: /* alloc_clause: ALLOC '(' var_list_cluster ')'  */
#line 3196 "ompparser.yy"
                                              { MPIAlloc(); }
#line 11364 "ompparser.cc"
    break;

  case 2386: /* $@202: %empty  */
#line 3198 "ompparser.yy"
                     { }
#line 11370 "ompparser.cc"
    break;

  case 2387: /* broad_clause: BROAD $@202 '(' var_list_cluster ')'  */
#line 3198 "ompparser.yy"
                                                  { MPIBroad(); }
#line 11376 "ompparser.cc"
    break;

  case 2388: /* $@203: %empty  */
#line 3200 "ompparser.yy"
                         { }
#line 11382 "ompparser.cc"
    break;

  case 2389: /* scatter_clause: SCATTER $@203 '(' var_chunk_list_cluster ')'  */
#line 3200 "ompparser.yy"
                                                             {}
#line 11388 "ompparser.cc"
    break;

  case 2390: /* $@204: %empty  */
#line 3202 "ompparser.yy"
                   { }
#line 11394 "ompparser.cc"
    break;

  case 2391: /* halo_clause: HALO $@204 '(' var_chunk ')'  */
#line 3203 "ompparser.yy"
        { 
		if(update==1){
			MPIUpdateHalo(); 
			update = 0;
		}else{
			MPIScatterHalo(); 
		}
	}
#line 11407 "ompparser.cc"
    break;

  case 2392: /* $@205: %empty  */
#line 3212 "ompparser.yy"
                       { }
#line 11413 "ompparser.cc"
    break;

  case 2394: /* $@206: %empty  */
#line 3214 "ompparser.yy"
                             { }
#line 11419 "ompparser.cc"
    break;

  case 2396: /* $@207: %empty  */
#line 3216 "ompparser.yy"
                                   { }
#line 11425 "ompparser.cc"
    break;

  case 2398: /* $@208: %empty  */
#line 3218 "ompparser.yy"
                                   {if (enDistributeExtendido > 1) {guardarLineasDist += " firstprivate("; meterEnClause = 1;}}
#line 11431 "ompparser.cc"
    break;

  case 2399: /* firstprivate_clause: FIRSTPRIVATE $@208 '(' var_list ')'  */
#line 3218 "ompparser.yy"
                                                                                                                                                 {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11437 "ompparser.cc"
    break;

  case 2400: /* $@209: %empty  */
#line 3221 "ompparser.yy"
                                 { }
#line 11443 "ompparser.cc"
    break;

  case 2401: /* copyprivate_clause: COPYPRIVATE $@209 '(' var_list ')'  */
#line 3221 "ompparser.yy"
                                                      { }
#line 11449 "ompparser.cc"
    break;

  case 2402: /* $@210: %empty  */
#line 3223 "ompparser.yy"
                                         { }
#line 11455 "ompparser.cc"
    break;

  case 2403: /* fortran_copyprivate_clause: COPYPRIVATE $@210 '(' var_list ')'  */
#line 3223 "ompparser.yy"
                                                              { }
#line 11461 "ompparser.cc"
    break;

  case 2404: /* $@211: %empty  */
#line 3225 "ompparser.yy"
                                 {if (enDistributeExtendido) {guardarLineasDist += " lastprivate("; meterEnClause = 1;}}
#line 11467 "ompparser.cc"
    break;

  case 2405: /* lastprivate_clause: LASTPRIVATE $@211 '(' lastprivate_parameter ')'  */
#line 3225 "ompparser.yy"
                                                                                                                                                       {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11473 "ompparser.cc"
    break;

  case 2406: /* lastprivate_parameter: EXPR_STRING  */
#line 3228 "ompparser.yy"
                                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11479 "ompparser.cc"
    break;

  case 2407: /* $@212: %empty  */
#line 3229 "ompparser.yy"
                                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype); guardarLineasDist += ",";}}
#line 11485 "ompparser.cc"
    break;

  case 2409: /* $@213: %empty  */
#line 3230 "ompparser.yy"
                                                 {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype);guardarLineasDist += ":";}}
#line 11491 "ompparser.cc"
    break;

  case 2411: /* $@214: %empty  */
#line 3233 "ompparser.yy"
                                            { }
#line 11497 "ompparser.cc"
    break;

  case 2412: /* lastprivate_distribute_clause: LASTPRIVATE $@214 '(' var_list ')'  */
#line 3233 "ompparser.yy"
                                                                 { }
#line 11503 "ompparser.cc"
    break;

  case 2413: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3235 "ompparser.yy"
                                            {(yyval.stype) = (yyvsp[0].stype);}
#line 11509 "ompparser.cc"
    break;

  case 2414: /* linear_clause: LINEAR '(' linear_parameter ')'  */
#line 3238 "ompparser.yy"
                                                {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11515 "ompparser.cc"
    break;

  case 2415: /* $@215: %empty  */
#line 3239 "ompparser.yy"
                                                            {}
#line 11521 "ompparser.cc"
    break;

  case 2416: /* linear_clause: LINEAR '(' linear_parameter ':' EXPR_STRING $@215 ')'  */
#line 3239 "ompparser.yy"
                                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ":"; guardarLineasDist += (yyvsp[-2].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11527 "ompparser.cc"
    break;

  case 2417: /* linear_parameter: EXPR_STRING  */
#line 3242 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11533 "ompparser.cc"
    break;

  case 2418: /* $@216: %empty  */
#line 3243 "ompparser.yy"
                                   {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11539 "ompparser.cc"
    break;

  case 2420: /* $@217: %empty  */
#line 3244 "ompparser.yy"
                                   {if (meterEnClause) {guardarLineasDist += "(";}}
#line 11545 "ompparser.cc"
    break;

  case 2421: /* linear_parameter: linear_modifier $@217 '(' var_list ')'  */
#line 3244 "ompparser.yy"
                                                                                                     {if (meterEnClause) {guardarLineasDist += ")";}}
#line 11551 "ompparser.cc"
    break;

  case 2422: /* linear_modifier: MODOFIER_VAL  */
#line 3246 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11557 "ompparser.cc"
    break;

  case 2423: /* linear_modifier: MODOFIER_REF  */
#line 3247 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11563 "ompparser.cc"
    break;

  case 2424: /* linear_modifier: MODOFIER_UVAL  */
#line 3248 "ompparser.yy"
                                {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11569 "ompparser.cc"
    break;

  case 2425: /* aligned_clause: ALIGNED '(' aligned_parameter ')'  */
#line 3251 "ompparser.yy"
                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11575 "ompparser.cc"
    break;

  case 2426: /* aligned_clause: ALIGNED '(' aligned_parameter ':' EXPR_STRING ')'  */
#line 3252 "ompparser.yy"
                                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ":"; guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11581 "ompparser.cc"
    break;

  case 2427: /* aligned_parameter: EXPR_STRING  */
#line 3256 "ompparser.yy"
                                {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11587 "ompparser.cc"
    break;

  case 2428: /* $@218: %empty  */
#line 3257 "ompparser.yy"
                                    {if(meterEnClause){guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11593 "ompparser.cc"
    break;

  case 2432: /* expr: EXPR_STRING  */
#line 3264 "ompparser.yy"
                  { }
#line 11599 "ompparser.cc"
    break;

  case 2433: /* $@219: %empty  */
#line 3266 "ompparser.yy"
                        {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " safelen("; meterEnClause = 1;}}
#line 11605 "ompparser.cc"
    break;

  case 2434: /* safelen_clause: SAFELEN $@219 '(' var_list ')'  */
#line 3266 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11611 "ompparser.cc"
    break;

  case 2435: /* $@220: %empty  */
#line 3269 "ompparser.yy"
                        {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " simdlen("; meterEnClause = 1;}}
#line 11617 "ompparser.cc"
    break;

  case 2436: /* simdlen_clause: SIMDLEN $@220 '(' var_list ')'  */
#line 3269 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11623 "ompparser.cc"
    break;

  case 2437: /* $@221: %empty  */
#line 3272 "ompparser.yy"
                                {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += " nontemporal("; meterEnClause = 1;}}
#line 11629 "ompparser.cc"
    break;

  case 2438: /* nontemporal_clause: NONTEMPORAL $@221 '(' var_list ')'  */
#line 3272 "ompparser.yy"
                                                                                                                                                                                                         {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11635 "ompparser.cc"
    break;

  case 2439: /* $@222: %empty  */
#line 3275 "ompparser.yy"
                          {if (enDistributeExtendido) {guardarLineasDist += " collapse("; meterEnClause = 1;}}
#line 11641 "ompparser.cc"
    break;

  case 2440: /* collapse_clause: COLLAPSE $@222 '(' expression ')'  */
#line 3275 "ompparser.yy"
                                                                                                                                  {if (enDistributeExtendido) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11647 "ompparser.cc"
    break;

  case 2441: /* $@223: %empty  */
#line 3278 "ompparser.yy"
                            {if (enDistributeExtendido > 1) {guardarLineasDist += "(";}}
#line 11653 "ompparser.cc"
    break;

  case 2442: /* ordered_clause: ORDERED '(' $@223 expression ')'  */
#line 3278 "ompparser.yy"
                                                                                                        {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; guardarLineasDist += (yyvsp[-1].stype); meterEnClause = 0;}}
#line 11659 "ompparser.cc"
    break;

  case 2443: /* ordered_clause: ORDERED  */
#line 3279 "ompparser.yy"
                        {if (enDistributeExtendido > 1) {meterEnClause = 0;}}
#line 11665 "ompparser.cc"
    break;

  case 2444: /* fortran_nowait_clause: NOWAIT  */
#line 3281 "ompparser.yy"
                              { }
#line 11671 "ompparser.cc"
    break;

  case 2445: /* nowait_clause: NOWAIT  */
#line 3283 "ompparser.yy"
                      {if (enDistributeExtendido == 2 || enDistributeExtendido == 4){guardarLineasDist += " nowait";}}
#line 11677 "ompparser.cc"
    break;

  case 2446: /* $@224: %empty  */
#line 3285 "ompparser.yy"
                    {if(enDistributeExtendido){guardarLineasDist += " order("; meterEnClause = 1;}}
#line 11683 "ompparser.cc"
    break;

  case 2447: /* order_clause: ORDER $@224 '(' order_parameter ')'  */
#line 3285 "ompparser.yy"
                                                                                                                            {if(enDistributeExtendido){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11689 "ompparser.cc"
    break;

  case 2448: /* order_parameter: CONCURRENT  */
#line 3288 "ompparser.yy"
                             {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11695 "ompparser.cc"
    break;

  case 2449: /* $@225: %empty  */
#line 3291 "ompparser.yy"
                        { }
#line 11701 "ompparser.cc"
    break;

  case 2451: /* inbranch_clause: INBRANCH  */
#line 3294 "ompparser.yy"
                          { }
#line 11707 "ompparser.cc"
    break;

  case 2452: /* notinbranch_clause: NOTINBRANCH  */
#line 3297 "ompparser.yy"
                                { }
#line 11713 "ompparser.cc"
    break;

  case 2453: /* $@226: %empty  */
#line 3299 "ompparser.yy"
                            { }
#line 11719 "ompparser.cc"
    break;

  case 2455: /* $@227: %empty  */
#line 3301 "ompparser.yy"
                            { }
#line 11725 "ompparser.cc"
    break;

  case 2458: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3304 "ompparser.yy"
                                         { }
#line 11731 "ompparser.cc"
    break;

  case 2459: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3305 "ompparser.yy"
                                           { }
#line 11737 "ompparser.cc"
    break;

  case 2460: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3306 "ompparser.yy"
                                       { }
#line 11743 "ompparser.cc"
    break;

  case 2461: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3307 "ompparser.yy"
                                         { }
#line 11749 "ompparser.cc"
    break;

  case 2462: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3308 "ompparser.yy"
                                         { }
#line 11755 "ompparser.cc"
    break;

  case 2463: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3309 "ompparser.yy"
                                        { }
#line 11761 "ompparser.cc"
    break;

  case 2464: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3310 "ompparser.yy"
                                       { }
#line 11767 "ompparser.cc"
    break;

  case 2465: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3311 "ompparser.yy"
                                        { }
#line 11773 "ompparser.cc"
    break;

  case 2466: /* allocator1_parameter: EXPR_STRING  */
#line 3312 "ompparser.yy"
                                   { }
#line 11779 "ompparser.cc"
    break;

  case 2467: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3315 "ompparser.yy"
                                                                     {}
#line 11785 "ompparser.cc"
    break;

  case 2468: /* dist_schedule_parameter: STATIC  */
#line 3317 "ompparser.yy"
                                 { }
#line 11791 "ompparser.cc"
    break;

  case 2469: /* $@228: %empty  */
#line 3318 "ompparser.yy"
                                 { }
#line 11797 "ompparser.cc"
    break;

  case 2470: /* dist_schedule_parameter: STATIC $@228 ',' EXPR_STRING  */
#line 3318 "ompparser.yy"
                                                     { }
#line 11803 "ompparser.cc"
    break;

  case 2471: /* $@229: %empty  */
#line 3320 "ompparser.yy"
                           {if(enDistributeExtendido > 1){guardarLineasDist += " schedule("; meterEnClause = 1;}}
#line 11809 "ompparser.cc"
    break;

  case 2472: /* schedule_clause: SCHEDULE $@229 '(' schedule_parameter ')'  */
#line 3320 "ompparser.yy"
                                                                                                                                             {if(enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11815 "ompparser.cc"
    break;

  case 2474: /* $@230: %empty  */
#line 3324 "ompparser.yy"
                                       {if (meterEnClause){guardarLineasDist += ":";}}
#line 11821 "ompparser.cc"
    break;

  case 2477: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3329 "ompparser.yy"
                                                    {if (meterEnClause){guardarLineasDist += ","; guardarLineasDist += (yyvsp[0].stype);}}
#line 11827 "ompparser.cc"
    break;

  case 2478: /* $@231: %empty  */
#line 3332 "ompparser.yy"
                                           {if (meterEnClause){guardarLineasDist += ",";}}
#line 11833 "ompparser.cc"
    break;

  case 2481: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3336 "ompparser.yy"
                                        {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11839 "ompparser.cc"
    break;

  case 2482: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3337 "ompparser.yy"
                                           {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11845 "ompparser.cc"
    break;

  case 2483: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3338 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11851 "ompparser.cc"
    break;

  case 2484: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3340 "ompparser.yy"
                                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11857 "ompparser.cc"
    break;

  case 2485: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3341 "ompparser.yy"
                                               {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11863 "ompparser.cc"
    break;

  case 2486: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3342 "ompparser.yy"
                                       {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11869 "ompparser.cc"
    break;

  case 2487: /* schedule_enum_kind: STATIC  */
#line 3345 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += "static";}}
#line 11875 "ompparser.cc"
    break;

  case 2488: /* schedule_enum_kind: DYNAMIC  */
#line 3346 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += "dynamic";}}
#line 11881 "ompparser.cc"
    break;

  case 2489: /* schedule_enum_kind: GUIDED  */
#line 3347 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += "guided";}}
#line 11887 "ompparser.cc"
    break;

  case 2490: /* schedule_enum_kind: AUTO  */
#line 3348 "ompparser.yy"
                          {if (meterEnClause){guardarLineasDist += "auto";}}
#line 11893 "ompparser.cc"
    break;

  case 2491: /* schedule_enum_kind: RUNTIME  */
#line 3349 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += "runtime";}}
#line 11899 "ompparser.cc"
    break;

  case 2492: /* $@232: %empty  */
#line 3351 "ompparser.yy"
                       {if (enDistributeExtendido > 1){guardarLineasDist += " shared("; meterEnClause = 1;}}
#line 11905 "ompparser.cc"
    break;

  case 2493: /* shared_clause: SHARED $@232 '(' var_list ')'  */
#line 3351 "ompparser.yy"
                                                                                                                              {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11911 "ompparser.cc"
    break;

  case 2495: /* $@233: %empty  */
#line 3357 "ompparser.yy"
                                     { aumentarReduction(); if(enDistributeExtendido){guardarLineasDist += " reduction("; meterEnClause = 1;} }
#line 11917 "ompparser.cc"
    break;

  case 2496: /* $@234: %empty  */
#line 3357 "ompparser.yy"
                                                                                                                                                                                {if(enDistributeExtendido){guardarLineasDist += ":";}}
#line 11923 "ompparser.cc"
    break;

  case 2497: /* reduction_clause_cluster: REDUCTION $@233 '(' reduction_parameter_cluster $@234 ':' var_list_reduction ')'  */
#line 3357 "ompparser.yy"
                                                                                                                                                                                                                                                                  {if(enDistributeExtendido){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11929 "ompparser.cc"
    break;

  case 2498: /* $@235: %empty  */
#line 3360 "ompparser.yy"
                                           { aumentarAllReduction(); }
#line 11935 "ompparser.cc"
    break;

  case 2503: /* $@236: %empty  */
#line 3367 "ompparser.yy"
                                                 {if (meterEnClause){guardarLineasDist += ",";}}
#line 11941 "ompparser.cc"
    break;

  case 2505: /* allreduction_identifier_cluster: reduction_enum_identifier  */
#line 3370 "ompparser.yy"
                                                            { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(false, (yyvsp[0].stype));}}
#line 11947 "ompparser.cc"
    break;

  case 2506: /* allreduction_identifier_cluster: EXPR_STRING  */
#line 3371 "ompparser.yy"
                                              { }
#line 11953 "ompparser.cc"
    break;

  case 2507: /* reduction_identifier_cluster: reduction_enum_identifier  */
#line 3374 "ompparser.yy"
                                                         {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(false, (yyvsp[0].stype));}}
#line 11959 "ompparser.cc"
    break;

  case 2508: /* reduction_identifier_cluster: EXPR_STRING  */
#line 3375 "ompparser.yy"
                                            {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11965 "ompparser.cc"
    break;

  case 2509: /* reduction_parameter: reduction_identifier  */
#line 3378 "ompparser.yy"
                                           {}
#line 11971 "ompparser.cc"
    break;

  case 2511: /* reduction_identifier: reduction_enum_identifier  */
#line 3382 "ompparser.yy"
                                                 {}
#line 11977 "ompparser.cc"
    break;

  case 2512: /* reduction_identifier: EXPR_STRING  */
#line 3383 "ompparser.yy"
                                   { }
#line 11983 "ompparser.cc"
    break;

  case 2513: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3386 "ompparser.yy"
                                     {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11989 "ompparser.cc"
    break;

  case 2514: /* reduction_modifier: MODIFIER_TASK  */
#line 3387 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11995 "ompparser.cc"
    break;

  case 2515: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3388 "ompparser.yy"
                                      {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12001 "ompparser.cc"
    break;

  case 2516: /* reduction_enum_identifier: '+'  */
#line 3391 "ompparser.yy"
                               { (yyval.stype) = "+"; }
#line 12007 "ompparser.cc"
    break;

  case 2517: /* reduction_enum_identifier: '-'  */
#line 3392 "ompparser.yy"
                               { (yyval.stype) = "-"; }
#line 12013 "ompparser.cc"
    break;

  case 2518: /* reduction_enum_identifier: '*'  */
#line 3393 "ompparser.yy"
                               { (yyval.stype) = "*"; }
#line 12019 "ompparser.cc"
    break;

  case 2519: /* reduction_enum_identifier: '&'  */
#line 3394 "ompparser.yy"
                               { (yyval.stype) = "&"; }
#line 12025 "ompparser.cc"
    break;

  case 2520: /* reduction_enum_identifier: '|'  */
#line 3395 "ompparser.yy"
                               { (yyval.stype) = "|"; }
#line 12031 "ompparser.cc"
    break;

  case 2521: /* reduction_enum_identifier: '^'  */
#line 3396 "ompparser.yy"
                               { (yyval.stype) = "^"; }
#line 12037 "ompparser.cc"
    break;

  case 2522: /* reduction_enum_identifier: LOGAND  */
#line 3397 "ompparser.yy"
                                  { (yyval.stype) = "LOGAND"; }
#line 12043 "ompparser.cc"
    break;

  case 2523: /* reduction_enum_identifier: LOGOR  */
#line 3398 "ompparser.yy"
                                 { (yyval.stype) = "LOGOR"; }
#line 12049 "ompparser.cc"
    break;

  case 2524: /* reduction_enum_identifier: MAX  */
#line 3399 "ompparser.yy"
                               { (yyval.stype) = "MAX"; }
#line 12055 "ompparser.cc"
    break;

  case 2525: /* reduction_enum_identifier: MIN  */
#line 3400 "ompparser.yy"
                               { (yyval.stype) = "MIN"; }
#line 12061 "ompparser.cc"
    break;

  case 2526: /* $@237: %empty  */
#line 3403 "ompparser.yy"
                                          { }
#line 12067 "ompparser.cc"
    break;

  case 2527: /* reduction_default_only_clause: REDUCTION $@237 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3403 "ompparser.yy"
                                                                                                    {
                              }
#line 12074 "ompparser.cc"
    break;

  case 2528: /* reduction_default_only_parameter: reduction_identifier  */
#line 3407 "ompparser.yy"
                                                        {}
#line 12080 "ompparser.cc"
    break;

  case 2530: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3411 "ompparser.yy"
                                                   { }
#line 12086 "ompparser.cc"
    break;


#line 12090 "ompparser.cc"

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

#line 3414 "ompparser.yy"


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
