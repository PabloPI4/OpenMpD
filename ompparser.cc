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
#include <fstream>

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
extern int enMain;
extern int MPIInitMainDone;
extern int enFuncion;
extern void MPIInit();
void MPIInitParte2();

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
extern ofstream output;
extern int enSecuencial;

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
extern void MPIEmpezarSecuencial();


#line 169 "ompparser.cc"

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
  YYSYMBOL_878_147 = 878,                  /* $@147  */
  YYSYMBOL_879_148 = 879,                  /* $@148  */
  YYSYMBOL_880_149 = 880,                  /* $@149  */
  YYSYMBOL_881_150 = 881,                  /* $@150  */
  YYSYMBOL_882_151 = 882,                  /* $@151  */
  YYSYMBOL_cluster_update_clause = 883,    /* cluster_update_clause  */
  YYSYMBOL_884_152 = 884,                  /* $@152  */
  YYSYMBOL_885_153 = 885,                  /* $@153  */
  YYSYMBOL_886_154 = 886,                  /* $@154  */
  YYSYMBOL_887_155 = 887,                  /* $@155  */
  YYSYMBOL_888_156 = 888,                  /* $@156  */
  YYSYMBOL_cluster_teams_clause = 889,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 890, /* cluster_distribute_clause  */
  YYSYMBOL_891_157 = 891,                  /* $@157  */
  YYSYMBOL_892_158 = 892,                  /* $@158  */
  YYSYMBOL_cluster_teams_distribute_clause = 893, /* cluster_teams_distribute_clause  */
  YYSYMBOL_894_159 = 894,                  /* $@159  */
  YYSYMBOL_895_160 = 895,                  /* $@160  */
  YYSYMBOL_task_async_clause = 896,        /* task_async_clause  */
  YYSYMBOL_897_161 = 897,                  /* $@161  */
  YYSYMBOL_dependance_type = 898,          /* dependance_type  */
  YYSYMBOL_teams_clause = 899,             /* teams_clause  */
  YYSYMBOL_for_clause = 900,               /* for_clause  */
  YYSYMBOL_do_clause = 901,                /* do_clause  */
  YYSYMBOL_simd_clause = 902,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 903,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 904,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 905, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 906,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 907,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 908,   /* distribute_simd_clause  */
  YYSYMBOL_909_162 = 909,                  /* $@162  */
  YYSYMBOL_910_163 = 910,                  /* $@163  */
  YYSYMBOL_distribute_parallel_for_clause = 911, /* distribute_parallel_for_clause  */
  YYSYMBOL_912_164 = 912,                  /* $@164  */
  YYSYMBOL_913_165 = 913,                  /* $@165  */
  YYSYMBOL_distribute_parallel_do_clause = 914, /* distribute_parallel_do_clause  */
  YYSYMBOL_915_166 = 915,                  /* $@166  */
  YYSYMBOL_916_167 = 916,                  /* $@167  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 917, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_918_168 = 918,                  /* $@168  */
  YYSYMBOL_919_169 = 919,                  /* $@169  */
  YYSYMBOL_920_170 = 920,                  /* $@170  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 921, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_922_171 = 922,                  /* $@171  */
  YYSYMBOL_923_172 = 923,                  /* $@172  */
  YYSYMBOL_924_173 = 924,                  /* $@173  */
  YYSYMBOL_parallel_for_clause = 925,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 926,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 927,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 928, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 929, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 930,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 931,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 932, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 933, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 934, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 935,              /* loop_clause  */
  YYSYMBOL_scan_clause = 936,              /* scan_clause  */
  YYSYMBOL_sections_clause = 937,          /* sections_clause  */
  YYSYMBOL_single_clause = 938,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 939,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 940,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 941,       /* if_parallel_clause  */
  YYSYMBOL_942_174 = 942,                  /* $@174  */
  YYSYMBOL_if_parallel_parameter = 943,    /* if_parallel_parameter  */
  YYSYMBOL_944_175 = 944,                  /* $@175  */
  YYSYMBOL_if_task_clause = 945,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 946,        /* if_task_parameter  */
  YYSYMBOL_947_176 = 947,                  /* $@176  */
  YYSYMBOL_if_taskloop_clause = 948,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 949,    /* if_taskloop_parameter  */
  YYSYMBOL_950_177 = 950,                  /* $@177  */
  YYSYMBOL_if_target_data_clause = 951,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 952, /* if_target_data_parameter  */
  YYSYMBOL_953_178 = 953,                  /* $@178  */
  YYSYMBOL_if_target_parallel_clause = 954, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 955, /* if_target_parallel_parameter  */
  YYSYMBOL_956_179 = 956,                  /* $@179  */
  YYSYMBOL_957_180 = 957,                  /* $@180  */
  YYSYMBOL_if_target_simd_clause = 958,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 959, /* if_target_simd_parameter  */
  YYSYMBOL_960_181 = 960,                  /* $@181  */
  YYSYMBOL_961_182 = 961,                  /* $@182  */
  YYSYMBOL_if_target_enter_data_clause = 962, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 963, /* if_target_enter_data_parameter  */
  YYSYMBOL_964_183 = 964,                  /* $@183  */
  YYSYMBOL_if_target_exit_data_clause = 965, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 966, /* if_target_exit_data_parameter  */
  YYSYMBOL_967_184 = 967,                  /* $@184  */
  YYSYMBOL_if_target_clause = 968,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 969,      /* if_target_parameter  */
  YYSYMBOL_970_185 = 970,                  /* $@185  */
  YYSYMBOL_if_target_update_clause = 971,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 972, /* if_target_update_parameter  */
  YYSYMBOL_973_186 = 973,                  /* $@186  */
  YYSYMBOL_if_taskloop_simd_clause = 974,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 975, /* if_taskloop_simd_parameter  */
  YYSYMBOL_976_187 = 976,                  /* $@187  */
  YYSYMBOL_977_188 = 977,                  /* $@188  */
  YYSYMBOL_if_simd_clause = 978,           /* if_simd_clause  */
  YYSYMBOL_979_189 = 979,                  /* $@189  */
  YYSYMBOL_if_simd_parameter = 980,        /* if_simd_parameter  */
  YYSYMBOL_981_190 = 981,                  /* $@190  */
  YYSYMBOL_if_parallel_simd_clause = 982,  /* if_parallel_simd_clause  */
  YYSYMBOL_983_191 = 983,                  /* $@191  */
  YYSYMBOL_if_parallel_simd_parameter = 984, /* if_parallel_simd_parameter  */
  YYSYMBOL_if_target_parallel_simd_clause = 985, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 986, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_987_192 = 987,                  /* $@192  */
  YYSYMBOL_988_193 = 988,                  /* $@193  */
  YYSYMBOL_989_194 = 989,                  /* $@194  */
  YYSYMBOL_if_cancel_clause = 990,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 991,      /* if_cancel_parameter  */
  YYSYMBOL_992_195 = 992,                  /* $@195  */
  YYSYMBOL_if_parallel_taskloop_clause = 993, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 994, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_995_196 = 995,                  /* $@196  */
  YYSYMBOL_996_197 = 996,                  /* $@197  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 997, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 998, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_999_198 = 999,                  /* $@198  */
  YYSYMBOL_1000_199 = 1000,                /* $@199  */
  YYSYMBOL_1001_200 = 1001,                /* $@200  */
  YYSYMBOL_num_threads_clause = 1002,      /* num_threads_clause  */
  YYSYMBOL_1003_201 = 1003,                /* $@201  */
  YYSYMBOL_num_teams_clause = 1004,        /* num_teams_clause  */
  YYSYMBOL_1005_202 = 1005,                /* $@202  */
  YYSYMBOL_align_clause = 1006,            /* align_clause  */
  YYSYMBOL_1007_203 = 1007,                /* $@203  */
  YYSYMBOL_thread_limit_clause = 1008,     /* thread_limit_clause  */
  YYSYMBOL_1009_204 = 1009,                /* $@204  */
  YYSYMBOL_copyin_clause = 1010,           /* copyin_clause  */
  YYSYMBOL_1011_205 = 1011,                /* $@205  */
  YYSYMBOL_default_clause = 1012,          /* default_clause  */
  YYSYMBOL_1013_206 = 1013,                /* $@206  */
  YYSYMBOL_default_parameter = 1014,       /* default_parameter  */
  YYSYMBOL_default_variant_clause = 1015,  /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 1016, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 1017,        /* proc_bind_clause  */
  YYSYMBOL_1018_207 = 1018,                /* $@207  */
  YYSYMBOL_proc_bind_parameter = 1019,     /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 1020,             /* bind_clause  */
  YYSYMBOL_bind_parameter = 1021,          /* bind_parameter  */
  YYSYMBOL_allocate_clause = 1022,         /* allocate_clause  */
  YYSYMBOL_1023_208 = 1023,                /* $@208  */
  YYSYMBOL_allocate_parameter = 1024,      /* allocate_parameter  */
  YYSYMBOL_1025_209 = 1025,                /* $@209  */
  YYSYMBOL_1026_210 = 1026,                /* $@210  */
  YYSYMBOL_allocator_parameter = 1027,     /* allocator_parameter  */
  YYSYMBOL_private_clause = 1028,          /* private_clause  */
  YYSYMBOL_1029_211 = 1029,                /* $@211  */
  YYSYMBOL_alloc_clause = 1030,            /* alloc_clause  */
  YYSYMBOL_broad_clause = 1031,            /* broad_clause  */
  YYSYMBOL_1032_212 = 1032,                /* $@212  */
  YYSYMBOL_scatter_clause = 1033,          /* scatter_clause  */
  YYSYMBOL_1034_213 = 1034,                /* $@213  */
  YYSYMBOL_halo_clause = 1035,             /* halo_clause  */
  YYSYMBOL_1036_214 = 1036,                /* $@214  */
  YYSYMBOL_gather_clause = 1037,           /* gather_clause  */
  YYSYMBOL_1038_215 = 1038,                /* $@215  */
  YYSYMBOL_allgather_clause = 1039,        /* allgather_clause  */
  YYSYMBOL_1040_216 = 1040,                /* $@216  */
  YYSYMBOL_firstprivate_clause = 1041,     /* firstprivate_clause  */
  YYSYMBOL_1042_217 = 1042,                /* $@217  */
  YYSYMBOL_copyprivate_clause = 1043,      /* copyprivate_clause  */
  YYSYMBOL_1044_218 = 1044,                /* $@218  */
  YYSYMBOL_fortran_copyprivate_clause = 1045, /* fortran_copyprivate_clause  */
  YYSYMBOL_1046_219 = 1046,                /* $@219  */
  YYSYMBOL_lastprivate_clause = 1047,      /* lastprivate_clause  */
  YYSYMBOL_1048_220 = 1048,                /* $@220  */
  YYSYMBOL_lastprivate_parameter = 1049,   /* lastprivate_parameter  */
  YYSYMBOL_1050_221 = 1050,                /* $@221  */
  YYSYMBOL_1051_222 = 1051,                /* $@222  */
  YYSYMBOL_lastprivate_distribute_clause = 1052, /* lastprivate_distribute_clause  */
  YYSYMBOL_1053_223 = 1053,                /* $@223  */
  YYSYMBOL_lastprivate_modifier = 1054,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1055,           /* linear_clause  */
  YYSYMBOL_1056_224 = 1056,                /* $@224  */
  YYSYMBOL_linear_parameter = 1057,        /* linear_parameter  */
  YYSYMBOL_1058_225 = 1058,                /* $@225  */
  YYSYMBOL_1059_226 = 1059,                /* $@226  */
  YYSYMBOL_linear_modifier = 1060,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1061,          /* aligned_clause  */
  YYSYMBOL_aligned_parameter = 1062,       /* aligned_parameter  */
  YYSYMBOL_1063_227 = 1063,                /* $@227  */
  YYSYMBOL_initializer_clause = 1064,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1065,        /* initializer_expr  */
  YYSYMBOL_expr = 1066,                    /* expr  */
  YYSYMBOL_safelen_clause = 1067,          /* safelen_clause  */
  YYSYMBOL_1068_228 = 1068,                /* $@228  */
  YYSYMBOL_simdlen_clause = 1069,          /* simdlen_clause  */
  YYSYMBOL_1070_229 = 1070,                /* $@229  */
  YYSYMBOL_nontemporal_clause = 1071,      /* nontemporal_clause  */
  YYSYMBOL_1072_230 = 1072,                /* $@230  */
  YYSYMBOL_collapse_clause = 1073,         /* collapse_clause  */
  YYSYMBOL_1074_231 = 1074,                /* $@231  */
  YYSYMBOL_ordered_clause = 1075,          /* ordered_clause  */
  YYSYMBOL_1076_232 = 1076,                /* $@232  */
  YYSYMBOL_fortran_nowait_clause = 1077,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1078,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1079,            /* order_clause  */
  YYSYMBOL_1080_233 = 1080,                /* $@233  */
  YYSYMBOL_order_parameter = 1081,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1082,          /* uniform_clause  */
  YYSYMBOL_1083_234 = 1083,                /* $@234  */
  YYSYMBOL_inbranch_clause = 1084,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1085,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1086,        /* inclusive_clause  */
  YYSYMBOL_1087_235 = 1087,                /* $@235  */
  YYSYMBOL_exclusive_clause = 1088,        /* exclusive_clause  */
  YYSYMBOL_1089_236 = 1089,                /* $@236  */
  YYSYMBOL_allocator_clause = 1090,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1091,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1092,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1093, /* dist_schedule_parameter  */
  YYSYMBOL_1094_237 = 1094,                /* $@237  */
  YYSYMBOL_schedule_clause = 1095,         /* schedule_clause  */
  YYSYMBOL_1096_238 = 1096,                /* $@238  */
  YYSYMBOL_schedule_parameter = 1097,      /* schedule_parameter  */
  YYSYMBOL_1098_239 = 1098,                /* $@239  */
  YYSYMBOL_schedule_kind = 1099,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1100,       /* schedule_modifier  */
  YYSYMBOL_1101_240 = 1101,                /* $@240  */
  YYSYMBOL_schedule_modifier2 = 1102,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1103,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1104,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1105,           /* shared_clause  */
  YYSYMBOL_1106_241 = 1106,                /* $@241  */
  YYSYMBOL_reduction_clause = 1107,        /* reduction_clause  */
  YYSYMBOL_reduction_clause_cluster = 1108, /* reduction_clause_cluster  */
  YYSYMBOL_1109_242 = 1109,                /* $@242  */
  YYSYMBOL_1110_243 = 1110,                /* $@243  */
  YYSYMBOL_allreduction_clause_cluster = 1111, /* allreduction_clause_cluster  */
  YYSYMBOL_1112_244 = 1112,                /* $@244  */
  YYSYMBOL_allreduction_parameter_cluster = 1113, /* allreduction_parameter_cluster  */
  YYSYMBOL_reduction_parameter_cluster = 1114, /* reduction_parameter_cluster  */
  YYSYMBOL_1115_245 = 1115,                /* $@245  */
  YYSYMBOL_allreduction_identifier_cluster = 1116, /* allreduction_identifier_cluster  */
  YYSYMBOL_reduction_identifier_cluster = 1117, /* reduction_identifier_cluster  */
  YYSYMBOL_reduction_parameter = 1118,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1119,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1120,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1121, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1122, /* reduction_default_only_clause  */
  YYSYMBOL_1123_246 = 1123,                /* $@246  */
  YYSYMBOL_reduction_default_only_parameter = 1124, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1125 /* reduction_default_only_modifier  */
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
#define YYLAST   16265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  869
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2538
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3189

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
       0,   154,   154,   155,   162,   163,   166,   169,   175,   176,
     176,   179,   180,   183,   186,   188,   187,   202,   204,   203,
     219,   218,   232,   235,   236,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   286,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   338,   364,   365,   366,   367,   368,   369,
     370,   371,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   448,   448,   451,   454,   454,   458,   459,   462,
     463,   464,   467,   468,   471,   471,   471,   471,   474,   475,
     478,   479,   480,   483,   483,   483,   486,   487,   488,   489,
     492,   493,   494,   497,   498,   499,   500,   503,   503,   506,
     507,   508,   511,   514,   515,   516,   517,   518,   519,   522,
     525,   528,   529,   530,   531,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   548,   551,   552,
     552,   555,   558,   559,   559,   562,   562,   566,   566,   569,
     570,   573,   574,   575,   578,   581,   581,   586,   586,   589,
     589,   592,   597,   600,   600,   603,   603,   606,   606,   609,
     609,   612,   612,   615,   618,   618,   623,   623,   625,   625,
     627,   627,   629,   631,   631,   633,   633,   635,   635,   637,
     637,   639,   639,   641,   641,   643,   643,   645,   645,   648,
     650,   652,   654,   654,   656,   656,   658,   658,   660,   660,
     662,   662,   664,   665,   666,   667,   669,   671,   674,   675,
     676,   678,   681,   683,   684,   685,   686,   687,   688,   689,
     692,   694,   695,   697,   698,   700,   701,   703,   705,   707,
     708,   710,   711,   713,   714,   716,   718,   719,   720,   723,
     725,   726,   728,   729,   730,   732,   733,   735,   737,   738,
     740,   741,   742,   745,   745,   747,   748,   749,   750,   751,
     752,   753,   754,   757,   758,   761,   762,   763,   764,   765,
     767,   768,   769,   770,   771,   772,   773,   775,   776,   777,
     778,   781,   782,   783,   784,   785,   788,   788,   791,   793,
     795,   797,   800,   802,   804,   806,   808,   811,   812,   814,
     815,   818,   819,   820,   822,   823,   824,   826,   827,   828,
     830,   831,   832,   835,   836,   837,   839,   840,   841,   843,
     844,   845,   847,   848,   849,   851,   852,   853,   855,   856,
     857,   859,   860,   861,   863,   864,   865,   868,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   901,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   925,   926,   927,   928,   929,   930,   932,   933,   934,
     935,   936,   938,   939,   940,   941,   942,   944,   945,   946,
     947,   948,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   965,   966,   968,   969,
     971,   972,   973,   974,   976,   977,   978,   980,   982,   983,
     985,   985,   987,   989,   991,   993,   994,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1009,  1009,  1012,
    1013,  1015,  1017,  1017,  1019,  1020,  1022,  1022,  1023,  1023,
    1025,  1025,  1025,  1027,  1028,  1030,  1031,  1032,  1033,  1034,
    1037,  1037,  1040,  1042,  1043,  1044,  1045,  1047,  1047,  1050,
    1052,  1053,  1053,  1056,  1056,  1059,  1061,  1062,  1062,  1063,
    1066,  1066,  1068,  1069,  1071,  1071,  1072,  1072,  1074,  1074,
    1074,  1077,  1078,  1081,  1081,  1083,  1083,  1085,  1085,  1087,
    1089,  1091,  1093,  1095,  1097,  1098,  1099,  1101,  1103,  1105,
    1107,  1108,  1108,  1109,  1112,  1113,  1116,  1118,  1119,  1119,
    1122,  1122,  1125,  1125,  1127,  1127,  1131,  1131,  1134,  1134,
    1136,  1137,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1148,
    1149,  1150,  1151,  1153,  1153,  1154,  1155,  1158,  1159,  1160,
    1161,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1173,
    1175,  1176,  1177,  1177,  1178,  1180,  1180,  1183,  1184,  1185,
    1185,  1186,  1188,  1188,  1190,  1190,  1193,  1195,  1196,  1197,
    1200,  1200,  1202,  1203,  1203,  1204,  1206,  1207,  1208,  1209,
    1210,  1212,  1213,  1214,  1215,  1217,  1218,  1221,  1222,  1223,
    1225,  1226,  1227,  1229,  1230,  1231,  1233,  1234,  1235,  1236,
    1237,  1238,  1240,  1243,  1245,  1246,  1249,  1250,  1251,  1252,
    1253,  1254,  1255,  1256,  1257,  1258,  1260,  1261,  1262,  1264,
    1265,  1266,  1268,  1269,  1270,  1272,  1274,  1275,  1277,  1279,
    1281,  1281,  1283,  1284,  1286,  1287,  1288,  1290,  1291,  1292,
    1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,  1302,  1302,
    1304,  1305,  1307,  1308,  1309,  1311,  1312,  1313,  1314,  1315,
    1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,  1324,  1325,
    1326,  1327,  1328,  1330,  1330,  1332,  1333,  1335,  1336,  1337,
    1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,
    1360,  1360,  1362,  1363,  1365,  1366,  1367,  1369,  1370,  1371,
    1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1383,  1384,  1385,  1386,  1387,  1388,  1390,  1390,  1392,
    1393,  1395,  1396,  1397,  1399,  1400,  1401,  1402,  1403,  1404,
    1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,
    1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1424,  1424,
    1426,  1427,  1429,  1430,  1431,  1433,  1434,  1435,  1436,  1437,
    1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,  1446,  1447,
    1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1458,
    1458,  1460,  1461,  1463,  1464,  1465,  1467,  1468,  1469,  1470,
    1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1480,  1480,
    1482,  1483,  1485,  1486,  1487,  1489,  1490,  1491,  1492,  1493,
    1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,
    1504,  1505,  1506,  1509,  1509,  1511,  1512,  1514,  1515,  1516,
    1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,
    1528,  1529,  1530,  1531,  1532,  1533,  1534,  1535,  1536,  1537,
    1538,  1539,  1540,  1541,  1542,  1544,  1544,  1546,  1547,  1549,
    1550,  1551,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,
    1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,
    1571,  1572,  1573,  1574,  1575,  1576,  1577,  1579,  1579,  1581,
    1582,  1584,  1585,  1586,  1588,  1589,  1590,  1591,  1592,  1593,
    1594,  1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,
    1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,
    1614,  1615,  1617,  1617,  1619,  1620,  1622,  1623,  1624,  1626,
    1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,
    1637,  1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,
    1647,  1648,  1649,  1650,  1651,  1652,  1653,  1655,  1655,  1657,
    1658,  1660,  1661,  1662,  1664,  1665,  1666,  1667,  1668,  1669,
    1670,  1671,  1672,  1673,  1674,  1675,  1676,  1677,  1678,  1679,
    1680,  1681,  1682,  1683,  1684,  1685,  1687,  1687,  1689,  1690,
    1692,  1693,  1694,  1696,  1697,  1698,  1699,  1700,  1701,  1702,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,
    1713,  1714,  1715,  1716,  1718,  1718,  1720,  1721,  1723,  1724,
    1725,  1727,  1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,
    1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,  1745,  1745,
    1747,  1748,  1750,  1751,  1752,  1754,  1755,  1756,  1757,  1758,
    1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,
    1769,  1770,  1771,  1772,  1773,  1775,  1775,  1777,  1778,  1780,
    1781,  1782,  1784,  1785,  1786,  1787,  1788,  1789,  1790,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,  1801,
    1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1811,  1811,
    1813,  1814,  1816,  1817,  1818,  1820,  1821,  1822,  1823,  1824,
    1825,  1826,  1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,
    1835,  1836,  1837,  1838,  1839,  1840,  1842,  1842,  1844,  1845,
    1847,  1848,  1849,  1851,  1852,  1853,  1854,  1855,  1856,  1857,
    1858,  1859,  1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,
    1868,  1869,  1870,  1871,  1872,  1873,  1874,  1875,  1876,  1877,
    1879,  1879,  1881,  1882,  1884,  1885,  1886,  1888,  1889,  1890,
    1891,  1892,  1893,  1894,  1895,  1896,  1897,  1898,  1899,  1900,
    1901,  1902,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,
    1911,  1912,  1913,  1914,  1916,  1916,  1918,  1919,  1921,  1922,
    1923,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,  1933,
    1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,
    1954,  1955,  1957,  1957,  1959,  1960,  1962,  1963,  1964,  1966,
    1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,  1975,  1976,
    1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,
    2000,  2000,  2002,  2002,  2004,  2004,  2006,  2006,  2008,  2008,
    2010,  2010,  2012,  2012,  2014,  2016,  2016,  2018,  2018,  2020,
    2020,  2022,  2023,  2025,  2025,  2027,  2027,  2029,  2029,  2031,
    2031,  2033,  2033,  2035,  2035,  2037,  2037,  2039,  2039,  2041,
    2041,  2043,  2043,  2045,  2045,  2047,  2047,  2049,  2049,  2053,
    2053,  2057,  2057,  2061,  2061,  2065,  2065,  2067,  2067,  2069,
    2069,  2071,  2071,  2073,  2075,  2075,  2077,  2077,  2079,  2081,
    2081,  2083,  2083,  2090,  2090,  2097,  2097,  2100,  2100,  2102,
    2105,  2107,  2108,  2111,  2111,  2113,  2115,  2116,  2119,  2119,
    2122,  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,  2135,
    2137,  2138,  2140,  2143,  2143,  2146,  2149,  2150,  2153,  2154,
    2157,  2160,  2161,  2164,  2165,  2168,  2172,  2175,  2176,  2179,
    2180,  2183,  2184,  2187,  2188,  2191,  2192,  2195,  2196,  2198,
    2199,  2201,  2202,  2204,  2205,  2207,  2208,  2210,  2211,  2213,
    2214,  2216,  2217,  2219,  2220,  2222,  2223,  2225,  2226,  2228,
    2229,  2231,  2232,  2234,  2235,  2237,  2238,  2240,  2241,  2243,
    2244,  2246,  2247,  2249,  2250,  2252,  2253,  2255,  2256,  2258,
    2259,  2261,  2262,  2264,  2265,  2267,  2268,  2270,  2271,  2273,
    2275,  2276,  2278,  2279,  2281,  2282,  2284,  2285,  2287,  2288,
    2290,  2291,  2296,  2297,  2302,  2303,  2305,  2306,  2307,  2312,
    2313,  2315,  2316,  2318,  2319,  2320,  2322,  2323,  2324,  2327,
    2328,  2329,  2332,  2333,  2334,  2337,  2338,  2339,  2342,  2343,
    2344,  2347,  2348,  2349,  2352,  2353,  2354,  2357,  2358,  2359,
    2362,  2363,  2364,  2367,  2368,  2369,  2372,  2373,  2374,  2377,
    2378,  2379,  2382,  2383,  2384,  2386,  2387,  2388,  2390,  2391,
    2392,  2394,  2395,  2396,  2398,  2399,  2400,  2402,  2403,  2404,
    2406,  2407,  2408,  2410,  2411,  2412,  2414,  2415,  2416,  2418,
    2419,  2420,  2422,  2423,  2424,  2426,  2427,  2428,  2430,  2431,
    2432,  2434,  2435,  2436,  2438,  2439,  2440,  2442,  2443,  2444,
    2446,  2447,  2448,  2450,  2451,  2452,  2454,  2455,  2456,  2458,
    2459,  2460,  2462,  2463,  2464,  2466,  2468,  2469,  2470,  2476,
    2477,  2478,  2480,  2481,  2482,  2484,  2485,  2486,  2492,  2496,
    2497,  2499,  2501,  2503,  2504,  2505,  2506,  2507,  2508,  2509,
    2510,  2511,  2512,  2515,  2516,  2517,  2517,  2518,  2518,  2519,
    2519,  2520,  2521,  2521,  2522,  2522,  2525,  2526,  2527,  2527,
    2528,  2528,  2529,  2529,  2530,  2531,  2531,  2532,  2532,  2535,
    2536,  2537,  2537,  2538,  2538,  2539,  2539,  2540,  2541,  2541,
    2542,  2542,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2564,
    2565,  2566,  2567,  2568,  2569,  2570,  2570,  2571,  2571,  2574,
    2575,  2576,  2577,  2578,  2579,  2580,  2581,  2582,  2583,  2584,
    2585,  2586,  2587,  2588,  2589,  2590,  2591,  2592,  2593,  2593,
    2594,  2594,  2597,  2597,  2600,  2602,  2607,  2608,  2609,  2610,
    2611,  2612,  2613,  2614,  2617,  2618,  2619,  2620,  2621,  2622,
    2623,  2624,  2625,  2626,  2627,  2630,  2631,  2632,  2633,  2634,
    2635,  2636,  2637,  2638,  2639,  2642,  2643,  2644,  2645,  2646,
    2647,  2648,  2649,  2650,  2651,  2652,  2655,  2656,  2657,  2658,
    2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,  2668,
    2669,  2670,  2672,  2673,  2674,  2675,  2676,  2677,  2678,  2679,
    2680,  2681,  2682,  2683,  2684,  2685,  2686,  2688,  2689,  2690,
    2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,  2699,  2700,
    2701,  2702,  2703,  2704,  2705,  2706,  2707,  2710,  2711,  2712,
    2713,  2714,  2715,  2718,  2719,  2720,  2721,  2722,  2723,  2726,
    2727,  2728,  2729,  2730,  2731,  2732,  2733,  2734,  2735,  2735,
    2736,  2736,  2737,  2738,  2739,  2742,  2743,  2744,  2745,  2746,
    2747,  2748,  2749,  2750,  2751,  2752,  2753,  2753,  2754,  2755,
    2756,  2756,  2757,  2758,  2759,  2761,  2762,  2763,  2764,  2765,
    2766,  2767,  2768,  2769,  2770,  2771,  2772,  2772,  2773,  2774,
    2775,  2775,  2776,  2777,  2779,  2780,  2781,  2782,  2783,  2784,
    2785,  2786,  2787,  2788,  2789,  2790,  2790,  2791,  2792,  2793,
    2793,  2794,  2795,  2796,  2797,  2798,  2799,  2799,  2800,  2802,
    2803,  2804,  2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,
    2813,  2813,  2814,  2815,  2816,  2816,  2817,  2818,  2819,  2820,
    2821,  2821,  2822,  2824,  2825,  2826,  2827,  2828,  2829,  2830,
    2831,  2832,  2833,  2834,  2835,  2836,  2837,  2838,  2839,  2840,
    2842,  2843,  2844,  2845,  2846,  2847,  2848,  2849,  2850,  2851,
    2852,  2853,  2854,  2855,  2856,  2857,  2859,  2860,  2861,  2862,
    2863,  2864,  2865,  2866,  2867,  2868,  2869,  2870,  2871,  2872,
    2874,  2875,  2876,  2877,  2878,  2879,  2880,  2881,  2882,  2883,
    2884,  2886,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,
    2895,  2897,  2898,  2899,  2900,  2901,  2902,  2903,  2904,  2905,
    2906,  2908,  2909,  2910,  2911,  2912,  2913,  2914,  2915,  2916,
    2917,  2918,  2919,  2920,  2921,  2922,  2923,  2924,  2926,  2927,
    2928,  2929,  2930,  2931,  2932,  2933,  2934,  2935,  2936,  2937,
    2938,  2939,  2940,  2941,  2942,  2943,  2944,  2945,  2946,  2947,
    2948,  2950,  2951,  2952,  2953,  2954,  2955,  2956,  2957,  2958,
    2959,  2960,  2961,  2962,  2963,  2964,  2965,  2966,  2967,  2968,
    2969,  2971,  2972,  2973,  2974,  2975,  2976,  2977,  2978,  2979,
    2980,  2981,  2982,  2983,  2984,  2985,  2986,  2987,  2988,  2989,
    2990,  2991,  2992,  2993,  2994,  2995,  2996,  2998,  2999,  3000,
    3001,  3002,  3003,  3005,  3006,  3008,  3009,  3010,  3011,  3012,
    3013,  3015,  3016,  3017,  3018,  3019,  3021,  3022,  3024,  3025,
    3026,  3027,  3028,  3035,  3035,  3038,  3038,  3040,  3042,  3045,
    3045,  3046,  3048,  3051,  3051,  3052,  3054,  3057,  3057,  3058,
    3060,  3063,  3063,  3064,  3064,  3065,  3067,  3070,  3070,  3071,
    3071,  3072,  3074,  3077,  3077,  3078,  3080,  3083,  3083,  3084,
    3086,  3089,  3089,  3090,  3092,  3095,  3095,  3096,  3098,  3101,
    3101,  3102,  3102,  3103,  3105,  3105,  3107,  3107,  3108,  3110,
    3110,  3112,  3113,  3114,  3116,  3118,  3118,  3119,  3119,  3120,
    3120,  3121,  3123,  3125,  3125,  3126,  3128,  3130,  3130,  3131,
    3131,  3132,  3134,  3136,  3136,  3137,  3137,  3138,  3138,  3139,
    3150,  3150,  3152,  3152,  3155,  3155,  3159,  3159,  3161,  3161,
    3164,  3164,  3167,  3168,  3169,  3170,  3173,  3176,  3179,  3179,
    3182,  3183,  3184,  3186,  3188,  3189,  3190,  3193,  3193,  3196,
    3197,  3197,  3198,  3198,  3200,  3201,  3202,  3203,  3204,  3205,
    3206,  3207,  3208,  3211,  3211,  3214,  3216,  3216,  3218,  3218,
    3220,  3220,  3230,  3230,  3232,  3232,  3234,  3234,  3237,  3237,
    3239,  3239,  3241,  3241,  3244,  3245,  3245,  3246,  3246,  3249,
    3249,  3251,  3254,  3255,  3255,  3258,  3259,  3259,  3260,  3260,
    3262,  3263,  3264,  3267,  3268,  3272,  3273,  3273,  3276,  3278,
    3280,  3282,  3282,  3285,  3285,  3288,  3288,  3291,  3291,  3294,
    3294,  3295,  3297,  3299,  3301,  3301,  3304,  3307,  3307,  3310,
    3313,  3315,  3315,  3317,  3317,  3319,  3320,  3321,  3322,  3323,
    3324,  3325,  3326,  3327,  3328,  3331,  3333,  3334,  3334,  3336,
    3336,  3339,  3340,  3340,  3344,  3345,  3348,  3348,  3349,  3352,
    3353,  3354,  3356,  3357,  3358,  3361,  3362,  3363,  3364,  3365,
    3367,  3367,  3370,  3373,  3373,  3373,  3376,  3376,  3379,  3380,
    3382,  3383,  3383,  3386,  3387,  3390,  3391,  3394,  3395,  3398,
    3399,  3402,  3403,  3404,  3407,  3408,  3409,  3410,  3411,  3412,
    3413,  3414,  3415,  3416,  3419,  3419,  3423,  3424,  3427
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
  "$@146", "cluster_data_clause", "$@147", "$@148", "$@149", "$@150",
  "$@151", "cluster_update_clause", "$@152", "$@153", "$@154", "$@155",
  "$@156", "cluster_teams_clause", "cluster_distribute_clause", "$@157",
  "$@158", "cluster_teams_distribute_clause", "$@159", "$@160",
  "task_async_clause", "$@161", "dependance_type", "teams_clause",
  "for_clause", "do_clause", "simd_clause", "for_simd_clause",
  "do_simd_clause", "parallel_for_simd_clause", "declare_simd_clause",
  "distribute_clause", "distribute_simd_clause", "$@162", "$@163",
  "distribute_parallel_for_clause", "$@164", "$@165",
  "distribute_parallel_do_clause", "$@166", "$@167",
  "distribute_parallel_for_simd_clause", "$@168", "$@169", "$@170",
  "distribute_parallel_do_simd_clause", "$@171", "$@172", "$@173",
  "parallel_for_clause", "parallel_do_clause", "parallel_loop_clause",
  "parallel_sections_clause", "parallel_workshare_clause",
  "parallel_master_clause", "master_taskloop_clause",
  "master_taskloop_simd_clause", "parallel_master_taskloop_clause",
  "parallel_master_taskloop_simd_clause", "loop_clause", "scan_clause",
  "sections_clause", "single_clause", "single_paired_clause",
  "construct_type_clause", "if_parallel_clause", "$@174",
  "if_parallel_parameter", "$@175", "if_task_clause", "if_task_parameter",
  "$@176", "if_taskloop_clause", "if_taskloop_parameter", "$@177",
  "if_target_data_clause", "if_target_data_parameter", "$@178",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@179",
  "$@180", "if_target_simd_clause", "if_target_simd_parameter", "$@181",
  "$@182", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@183", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@184", "if_target_clause", "if_target_parameter", "$@185",
  "if_target_update_clause", "if_target_update_parameter", "$@186",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@187",
  "$@188", "if_simd_clause", "$@189", "if_simd_parameter", "$@190",
  "if_parallel_simd_clause", "$@191", "if_parallel_simd_parameter",
  "if_target_parallel_simd_clause", "if_target_parallel_simd_parameter",
  "$@192", "$@193", "$@194", "if_cancel_clause", "if_cancel_parameter",
  "$@195", "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter",
  "$@196", "$@197", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@198", "$@199", "$@200",
  "num_threads_clause", "$@201", "num_teams_clause", "$@202",
  "align_clause", "$@203", "thread_limit_clause", "$@204", "copyin_clause",
  "$@205", "default_clause", "$@206", "default_parameter",
  "default_variant_clause", "default_variant_directive",
  "proc_bind_clause", "$@207", "proc_bind_parameter", "bind_clause",
  "bind_parameter", "allocate_clause", "$@208", "allocate_parameter",
  "$@209", "$@210", "allocator_parameter", "private_clause", "$@211",
  "alloc_clause", "broad_clause", "$@212", "scatter_clause", "$@213",
  "halo_clause", "$@214", "gather_clause", "$@215", "allgather_clause",
  "$@216", "firstprivate_clause", "$@217", "copyprivate_clause", "$@218",
  "fortran_copyprivate_clause", "$@219", "lastprivate_clause", "$@220",
  "lastprivate_parameter", "$@221", "$@222",
  "lastprivate_distribute_clause", "$@223", "lastprivate_modifier",
  "linear_clause", "$@224", "linear_parameter", "$@225", "$@226",
  "linear_modifier", "aligned_clause", "aligned_parameter", "$@227",
  "initializer_clause", "initializer_expr", "expr", "safelen_clause",
  "$@228", "simdlen_clause", "$@229", "nontemporal_clause", "$@230",
  "collapse_clause", "$@231", "ordered_clause", "$@232",
  "fortran_nowait_clause", "nowait_clause", "order_clause", "$@233",
  "order_parameter", "uniform_clause", "$@234", "inbranch_clause",
  "notinbranch_clause", "inclusive_clause", "$@235", "exclusive_clause",
  "$@236", "allocator_clause", "allocator1_parameter",
  "dist_schedule_clause", "dist_schedule_parameter", "$@237",
  "schedule_clause", "$@238", "schedule_parameter", "$@239",
  "schedule_kind", "schedule_modifier", "$@240", "schedule_modifier2",
  "schedule_enum_modifier", "schedule_enum_kind", "shared_clause", "$@241",
  "reduction_clause", "reduction_clause_cluster", "$@242", "$@243",
  "allreduction_clause_cluster", "$@244", "allreduction_parameter_cluster",
  "reduction_parameter_cluster", "$@245",
  "allreduction_identifier_cluster", "reduction_identifier_cluster",
  "reduction_parameter", "reduction_identifier", "reduction_modifier",
  "reduction_enum_identifier", "reduction_default_only_clause", "$@246",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2821)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2489)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4102,   242,   337,  1075,   133, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,   241, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
     562,   215, -2821,   362, -2821, -2821,   732, -2821, -2821, -2821,
   -2821, -2821,   301,   114,   441,   522, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  2986, -2821,  3006, -2821, -2821, -2821,
     198, -2821, -2821, -2821,   725,  1098,   171,   770,   590,   325,
     303,   135, -2821,   233,   578,   243,  2195,  3755,   359,   205,
   -2821,  1826,   324,  3734,   280, -2821,  3296,  2442, -2821,   947,
   -2821,   350,   397, -2821,   892,  7321,   435,   271,  2190,   346,
     571,   594, -2821, -2821, -2821,   504,  3205,   610, -2821,   335,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    2503,   470, -2821, -2821,   499, -2821, -2821, -2821, -2821,   503,
   -2821, -2821, -2821,   192, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  4179, -2821,  1175, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
     513,   534,   536,  1813,   550,   721,  4955,   780,   784, -2821,
     582, -2821, -2821,   228, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,   588, -2821,   128, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
     267, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
     245, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,   123,   616, -2821,   121, -2821, -2821,
   -2821,   303,   639,   618, -2821, -2821,   168, -2821, -2821, -2821,
     695,   411, -2821, -2821, -2821,   674, -2821, -2821,  1040, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,   682, -2821, -2821, -2821, -2821,   684, -2821, -2821,   697,
   -2821, -2821, -2821,  1680, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,   122,    76, -2821, -2821, -2821, -2821,
   -2821,  1150,  1922,  1700, -2821, -2821, -2821,  1134, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,   921,
     261, -2821, -2821, -2821,  1393,   307,   170, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,   758,
   -2821,  6192,   738, -2821, -2821, -2821, -2821,  2221, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,   745,
   -2821,   797, -2821,  2256, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  7027,   285, -2821,  6578,   689, -2821, -2821,  1258,   993,
     995, -2821,  4218,   771,   783, -2821, -2821, -2821, -2821, -2821,
   -2821,  3230, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,    91, -2821,
   -2821, -2821, -2821, -2821,   820, -2821, -2821,   809, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,   612,   368,   847, -2821, -2821,
   -2821, -2821, -2821,   824, -2821,  7348,  3143, -2821,  3678,  2080,
    2562,  3205,  1053,  3205, -2821, -2821, -2821, -2821, -2821,  1450,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  5923, -2821,   146, -2821, -2821,  1055,   949, -2821,
    1733, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  4572,   811,
     839,   977,   843,   849,   861, -2821,   863,   884,  2986, -2821,
   -2821,  1995, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  3006, -2821,
     870,  1095,   118,  2012, -2821, -2821, -2821, -2821,   278, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,   924,   914, -2821,   916,
     953, -2821,   941, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    2258, -2821,  1159,  1153, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  3255, -2821,  3111,   967,
    1187,  1098, -2821,   983,   274,   171, -2821,   985,  1000,   590,
   -2821,  1006,   325, -2821,  1017,  1218, -2821,  2725,   135, -2821,
   -2821, -2821, -2821, -2821, -2821,   487, -2821,  1023,   578, -2821,
   -2821, -2821,   530, -2821,  1025, -2821,   231, -2821, -2821, -2821,
    1030,  1050,  1085,  1028,  1100,  2195, -2821,   194,  1103,  1110,
    3768,  1112,  1116,    82,  1136,  1158,  3755, -2821,  1167,   249,
   -2821,  1133, -2821,  7622,  1275,  1341, -2821, -2821,  1548, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  1615, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1179,  1181,  1826, -2821, -2821,
    1342,  1438,  1342,   284,  1342,   290,  1411,   789, -2821,  1233,
    1247, -2821,  2781, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,    54,  1251,  1254,
    3296, -2821,   733, -2821,  2442, -2821,  1257, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  3041, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  1449,  7426,  6796, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  5667, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1266, -2821, -2821, -2821,   265,
   -2821, -2821, -2821, -2821, -2821, -2821,   416,  1115,  1270,  1272,
    1279, -2821,  1349, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  6747, -2821,  6747,  6489,  1281, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  5153, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,    89,
     275,  1283,  1289,  1290,  1292,  1293,  7321, -2821,   435, -2821,
   -2821,   574, -2821,   820,  1296, -2821, -2821, -2821, -2821, -2821,
    1391, -2821, -2821, -2821, -2821,  1162, -2821,  3632, -2821, -2821,
    1242,  1298, -2821,   558, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  1386, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  7348, -2821,  1146, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,   145, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,   321, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1117, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    2390, -2821,  1366, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  1300,  1301,  1302,  1306,  3205, -2821,
    6192, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    1866, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,   767, -2821, -2821,  6578,  1603,  1761,  1310, -2821, -2821,
   -2821,  1243, -2821,  1321,  1339,  1358,  1541,  1362, -2821, -2821,
   -2821, -2821, -2821,   177, -2821,  2503, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  1322, -2821,  1324, -2821,  2196,   619,  1326, -2821, -2821,
   -2821,    44, -2821,  1106,  1368,  1359,  1368,  1373,  1373, -2821,
    4179, -2821, -2821, -2821, -2821, -2821,   117, -2821, -2821, -2821,
    1340,  1347, -2821,  1351, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  1354,  1357,  1361,  1813, -2821, -2821,  1363,
      63,  1367,  1196, -2821, -2821,   604,   643, -2821,  1371,   997,
   -2821, -2821, -2821,  7933, -2821, -2821,   719, -2821,  1159,  1549,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  7073, -2821, -2821,   835, -2821,
    1159,  1549, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  1373,  1360,  1376, -2821,
    3326, -2821, -2821, -2821,  1380, -2821,  1373,  1373, -2821,  1373,
   -2821,   147, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  1369, -2821, -2821,   639, -2821,  1381,
     832, -2821,   695, -2821,  1372,  3526,   411, -2821,   175,  1373,
    1373,  1378,    68,  1373, -2821,  1388, -2821,  1384,   825,  1368,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  1396, -2821,  1312,  1368, -2821,  1405,  1404,  1408,  1368,
    1373, -2821,  1273, -2821, -2821, -2821, -2821,  5612, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  2650, -2821,  2650,
    1922, -2821,  1700, -2821,  1368,  1368, -2821,  1342, -2821, -2821,
   -2821, -2821, -2821, -2821,   153, -2821, -2821, -2821, -2821, -2821,
    1618,   302,   308,   286,  6192, -2821,  1409, -2821,  1414,  1368,
    1368, -2821, -2821, -2821, -2821,  1417, -2821,   208,  7027, -2821,
    6457,  1630,  1639,  1421, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  5402, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  4373, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  6578, -2821,   299,  1422,  1425,   689, -2821,  1437, -2821,
     313, -2821, -2821, -2821, -2821, -2821, -2821,  1447, -2821,   759,
   -2821, -2821, -2821, -2821, -2821, -2821,   374,  1487,   546,  1258,
   -2821,  6231, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    5276, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    6231, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  5566,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  3438, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,   266,  4218, -2821,  1455, -2821,  1456,
   -2821, -2821,  1458,  1457,  1461,  1373,  1373,  3217,  3814,  3909,
   -2821, -2821,   820, -2821,   661,  1368,  2190, -2821,   523,  1419,
   -2821,   810, -2821,  1121,   541, -2821,  7348, -2821,  3143, -2821,
   -2821,  3678, -2821,  2080, -2821,  2562, -2821,  3205, -2821,  6059,
    1462, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,   819,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  3205, -2821,    21,  1368,  1373,  1079,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
     167, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  5923, -2821, -2821,
   -2821,   737, -2821,  1541,  1362, -2821, -2821, -2821, -2821, -2821,
    7206, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  5845,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  1478, -2821,  1321,  1339,  1358,  1541,  1362, -2821,
   -2821, -2821, -2821,  1669, -2821,  1321,  1339,  1358,  1541,  1362,
   -2821, -2821, -2821,  1373,  1464,  1466,  1994, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1468,   949, -2821,
   -2821,  1373,  4473, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  1238,  1469,  1472,  1475, -2821,  1473,  1484, -2821,  1523,
   -2821,  1485, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    1495, -2821, -2821,  1498,  1503, -2821,  1501, -2821,  1506,  1508,
   -2821, -2821,   680,   691, -2821,  1513,  1504,  1095, -2821,  1590,
    1559,  1722,  1572,  1373, -2821,  1813, -2821,  1544,  1542,  1546,
    1373, -2821, -2821, -2821,  1554,   953, -2821, -2821,  4670, -2821,
   -2821, -2821,   879, -2821,  1159,  1549,  1153, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  2898, -2821, -2821, -2821, -2821,
   -2821,   216, -2821,  1159,  1549,  1153, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  4277, -2821, -2821, -2821,   692,  1601, -2821,
   -2821, -2821,  1568,  1571, -2821,   731,   735,   751,  1574, -2821,
    1569,  1373, -2821, -2821, -2821, -2821, -2821, -2821,   872, -2821,
   -2821, -2821,  1368, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  1570, -2821,  1577, -2821,  1578,   760,   766, -2821,
    1613, -2821,   823, -2821, -2821, -2821, -2821, -2821, -2821,  1580,
    1583,  1373, -2821, -2821, -2821, -2821, -2821, -2821,  1587, -2821,
    1591, -2821,  1596,  1588, -2821, -2821,  1373,  1599,   830, -2821,
   -2821,  1606, -2821,  7622, -2821,  7900, -2821, -2821,  2611, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  7900,
   -2821, -2821,  2702, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1611,  1617, -2821, -2821,  1604,
     284, -2821,  1835, -2821,  1619, -2821, -2821, -2821, -2821, -2821,
    1622,  1635, -2821,  1634, -2821, -2821, -2821,  1645,  1649, -2821,
    1641,  1652, -2821,  1651, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  5042, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  5317, -2821,  5317,  1863,  7426,
   -2821,  6796, -2821, -2821,  1757, -2821,  1668,  1373,  1373, -2821,
     414,   416, -2821,   419,  1115, -2821,  1754, -2821,  1675,  1685,
    1687, -2821,  1693,  1694,  1701, -2821,  1702, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  4031, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  6747, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  4922, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  6747, -2821,  6489, -2821,  1704, -2821,  1708,  1709, -2821,
   -2821, -2821, -2821, -2821,  1373,   850,   875, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  1710,  1721, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1723,  1731,  1730,  1737, -2821,
   -2821,  1739, -2821, -2821, -2821, -2821, -2821, -2821,  1743,  1741,
    1732,  3732, -2821, -2821, -2821, -2821,  1742, -2821,  1799, -2821,
     696, -2821,   612, -2821,   612, -2821,  1799, -2821,   229, -2821,
   -2821, -2821, -2821, -2821, -2821,  1746, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  2825, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,   373,  2390, -2821, -2821, -2821,
    1749,  1751,  1753,   880, -2821, -2821, -2821,  1755,  6192, -2821,
   -2821,  1851, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  4503, -2821,  1541,  1362, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  6578,
   -2821,  1603, -2821, -2821, -2821, -2821, -2821, -2821,  1761, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,   909,  1373,  1373, -2821,
    1759,  1762,  1766,  1767,   841, -2821,   928, -2821, -2821, -2821,
   -2821,  1763, -2821, -2821,  1373, -2821,  1373, -2821,  1770,  1772,
    1808, -2821, -2821, -2821,  1373, -2821, -2821, -2821,   832, -2821,
   -2821, -2821,    13, -2821, -2821, -2821,  1775, -2821, -2821, -2821,
   -2821, -2821,  1261,   929, -2821,  1776, -2821, -2821,  1373,   940,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  8201, -2821, -2821,
   -2821, -2821, -2821,  8434, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  1373,  4473, -2821, -2821, -2821, -2821, -2821,   974,   832,
   -2821, -2821,  1789,  1778, -2821, -2821, -2821, -2821, -2821,  1373,
    1782, -2821,  1368, -2821, -2821,   981,  1787,  1373,  1338, -2821,
    1829,  1373,  1800, -2821, -2821,  1801, -2821, -2821, -2821, -2821,
    2726, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  2650, -2821, -2821, -2821,  3767,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  2650, -2821, -2821, -2821,  1373, -2821,
    1804,  2446, -2821, -2821, -2821,  1368, -2821, -2821, -2821, -2821,
   -2821,  6457, -2821,  7594, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  3069, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  7594, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821,  4669, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1803,  1798, -2821, -2821,  1811,
   -2821,   991,  1004,  1908, -2821,  1810, -2821,  1912, -2821,  1814,
   -2821,  1819, -2821, -2821, -2821,  1820, -2821, -2821,  1373,   238,
    6231, -2821, -2821,  6231, -2821, -2821, -2821, -2821, -2821, -2821,
    1368,  1373,  1800, -2821, -2821, -2821,  1295, -2821,  3814,  1857,
    1859,  1861, -2821, -2821,  1373, -2821, -2821,  3499, -2821,  3858,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1830, -2821,
    1838,  1839,   354,  6059, -2821,  1840, -2821,  1842,  1841, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  7966, -2821, -2821,
   -2821, -2821, -2821, -2821,  1373, -2821,  1031,  1845,  1846,  1373,
    1373,  1373,  5492, -2821, -2821,  1849, -2821,  1373,  1373,  1373,
    1373,  1800,  1850,  1069,  1699,  1246, -2821, -2821,   637,  1590,
   -2821,  2039,  1572,  1887, -2821,  1895,  1373,  1800, -2821,  1864,
    1868, -2821, -2821,  1070, -2821,  1368, -2821, -2821,  2353,  1872,
   -2821,  1368,  1800, -2821, -2821, -2821,  1903,  1081, -2821,  1910,
    1083, -2821,  1800,  1373,  7900, -2821, -2821,  7900, -2821, -2821,
    1119,  1520, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1875,
    1368,  1368, -2821,  1368,  1368, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  3463, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    5317, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    4329, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821,  5317, -2821,  1879, -2821,
   -2821, -2821, -2821,  1981, -2821,  1982, -2821, -2821,  1373,  1917,
    1373,  1800,  1884,  1888, -2821,  1889,  1890, -2821, -2821,  1368,
    1368, -2821,  1800, -2821, -2821, -2821, -2821, -2821, -2821,  1891,
    1893,  1894,  1373,  1800, -2821, -2821, -2821, -2821,  4085, -2821,
    1510, -2821, -2821,  1368,  1368, -2821,  1897,  1911, -2821,  1915,
    1914, -2821, -2821, -2821, -2821,  1368, -2821, -2821, -2821,  1952,
   -2821, -2821,  1916,  1918,  1921, -2821,  1924, -2821,  1928, -2821,
    1373,  1800,  1800,  1800,  1800, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,  1927,  1926, -2821, -2821, -2821,  1929,
    1800,  1373,  4592, -2821, -2821,   458,   310, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  3210, -2821,  1964,  1130, -2821, -2821, -2821,  1942,  1829,
   -2821,  1800, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1931,
    1935, -2821, -2821, -2821, -2821, -2821,  7594, -2821, -2821,  7594,
   -2821, -2821,  1973,  1368,  1944,  1945,  1368,  1800,  1940,  1800,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1800,
   -2821, -2821,  2819, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    1368,  1368, -2821,  1953,  1276, -2821, -2821, -2821,  1373,  4592,
    1137,  1980, -2821, -2821, -2821,  1954, -2821, -2821,  2202,  1958,
    1960,  1961,  1962,  1965,  1966,  1969,  1976,  1978,  1821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1990,
    1903, -2821,  1992,  2020, -2821, -2821,  1368, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  1368,  1368,  1368, -2821,  1368,
    1368,  1368, -2821, -2821,  1373, -2821,  2027, -2821, -2821, -2821,
    1148, -2821, -2821, -2821, -2821, -2821,  1989, -2821,  2145,  2145,
    2145,  2145,  2145,  2145,  2145, -2821,  3210,  1998, -2821,  2008,
    2044, -2821,  2020, -2821, -2821, -2821,  1368,  1368, -2821, -2821,
   -2821, -2821, -2821, -2821,  2003,  1373,  2010,  1373, -2821,  1373,
    2011,  2048,  4362,  3464,  2050,  2056,  2065,  2032,  2145, -2821,
   -2821,  2044, -2821, -2821, -2821,  2035, -2821, -2821, -2821, -2821,
    1373, -2821, -2821,  2071, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821,  2037, -2821, -2821,
   -2821, -2821, -2821, -2821,  2043, -2821, -2821, -2821, -2821,  2045,
    3205, -2821,  2049,  2084,  2060, -2821,  2062, -2821, -2821, -2821,
   -2821,  2085, -2821, -2821,  2063, -2821, -2821,  2052,  2067,  2069,
    2072,  2101, -2821, -2821, -2821,  2105, -2821, -2821, -2821
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
    1575,     0,  2377,  2412,     0,  2479,  2447,  2453,  2454,  2451,
    2393,  2406,  1441,  1568,  1673,  1883,  1874,  1875,  1876,  1877,
    1880,  1881,  1882,  1884,  1879,  1878,  1577,  1443,  1570,  1676,
    1893,  1885,  1886,  1887,  1888,  1891,  1892,  1894,  1890,  1889,
       0,     0,     0,  1583,     0,   366,  1587,  1467,  1469,  2419,
       0,  1967,  1464,  1586,  1694,  1968,  1963,  1964,  1965,  1966,
    2534,     0,  1496,  1618,  1742,  2237,  2240,  2241,  2238,  2239,
    2242,  2461,  2463,  1498,  1619,  1745,  2243,  2244,  2452,  1500,
    1621,  1746,  2249,  2245,  2246,  2247,  2250,  2248,  2410,  1505,
    1625,  1749,  2254,  2251,  2252,  2253,  2255,  2260,  2261,  2259,
    2262,  2258,  1512,  1631,  1755,     0,   325,   430,   464,   568,
     569,  1632,     0,     0,   204,   196,   198,   199,   202,   203,
       0,  1634,  2314,  2441,  2443,     0,  2445,  1447,  1574,  1679,
    1895,  1901,  1902,  1898,  1899,  1896,  1897,  1900,  1904,  1905,
    1903,     0,  2360,   570,   572,   573,     0,   587,   623,     0,
     643,  2500,   297,   352,   431,   468,   469,   471,   475,   476,
     477,   479,   480,   467,   470,   478,   472,   473,   474,   789,
     617,   788,   785,   331,   777,   778,   782,   779,   786,   787,
     808,     0,   792,   951,  2352,  2356,  1516,  1566,  1670,  1866,
    1867,  1868,  1873,  1869,  1870,  1871,  1872,   319,   282,  1444,
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
    1603,  1605,  1491,  1607,  2263,  2350,  2358,  2368,   278,  1552,
    1646,  1763,  1764,  1769,  1765,  1771,  1772,  1766,  1767,  1768,
    1770,  1489,  1609,   289,   287,   283,   285,  1553,  1563,  1449,
    1576,  1682,  1906,  1919,  1911,  1912,  1913,  1909,  1910,  1907,
    1908,  1921,  1916,  1917,  1918,  1920,  1915,  1914,     0,     0,
       0,     0,     0,     0,     0,  2449,     0,     0,     0,  1674,
    1451,  1578,  1685,  1922,  1934,  1927,  1928,  1929,  1925,  1926,
    1923,  1924,  1936,  1932,  1933,  1935,  1931,  1930,     0,  1677,
       0,   269,     0,     0,  2457,  2459,  2460,  1458,  1584,  1691,
    1958,  1959,  1957,  1960,  1961,  1962,  1461,     0,   724,     0,
       0,   316,   368,   458,   564,   565,   566,  2503,  1973,  1466,
    1588,  1697,     0,     0,  1975,  1974,  1969,  1970,  1971,  1976,
    1977,  1982,  1972,  1984,  1983,  1471,  1589,  1473,  1591,     0,
       0,     0,  1695,     0,     0,     0,  1743,     0,     0,     0,
    1747,     0,     0,  1750,     0,     0,  1756,     0,     0,   465,
    1514,  1633,  1758,  1525,  1526,     0,  2367,     0,     0,   200,
    1520,  1521,     0,  2354,     0,  1518,  1635,  1636,  1760,  1759,
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
       0,     0,  1454,  1582,  1688,  1937,  1938,  1943,  1939,  1945,
    1946,  1940,  1941,  1947,  1948,  1955,  1953,  1954,  1956,  1950,
    1951,  1952,  1949,  1942,  1944,  1476,  1598,  1712,  2073,  2074,
    2079,  2075,  2081,  2082,  2076,  2077,  2083,  2084,  2086,  2087,
    2088,  2089,  2085,  2078,  2080,  1581,  1478,  1600,  1715,  2090,
    2091,  2096,  2092,  2098,  2099,  2093,  2094,  2100,  2101,  2103,
    2104,  2105,  2102,  2095,  2097,  1480,  1602,  1718,  2106,  2107,
    2112,  2108,  2114,  2118,  2115,  2109,  2110,  2116,  2117,  2119,
    2111,  2113,  1482,  1604,  1721,  2120,  2121,  2126,  2122,  2128,
    2129,  2123,  2124,  2130,  2125,  2127,  1484,  1606,  1724,  2131,
    2132,  2137,  2133,  2139,  2140,  2134,  2135,  2136,  2138,  1493,
    1613,  1486,  1608,  1727,  2141,  2142,  2147,  2143,  2149,  2150,
    2144,  2145,  2146,  2148,     0,     0,     0,     0,     0,  1647,
    1611,  2162,  2164,  2165,  2157,  2163,  2159,  2160,  2166,  1488,
    1610,  1730,  2151,  2158,  2167,  2153,  2154,  2155,  2161,  2152,
    2156,  1559,   291,   293,  1557,  1788,  1801,     0,  2396,  2400,
     280,  1554,  1649,     0,     0,     0,     0,     0,  1773,  1774,
    1781,  1862,   295,  1564,  1667,     0,  1683,  2530,  2531,  2532,
    2533,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,
    2529,     0,  2517,     0,  2519,     0,     0,  2425,  2430,  2431,
    2432,     0,  2428,     0,     0,     0,     0,     0,     0,  1675,
       0,  1686,  1678,   267,   275,   266,   270,   271,   274,  1548,
    1549,     0,  1545,     0,  1546,  1537,  1538,  1531,  1532,  1533,
    1534,  1535,  1536,     0,     0,     0,     0,  1692,  1462,     0,
       0,     0,     0,   369,   370,     0,     0,   459,     0,  1978,
    1698,  1979,  1981,  1593,  2004,  1468,  1590,  1700,     0,     0,
    1985,  1986,  1991,  1987,  1993,  1994,  1988,  1989,  1995,  1999,
    2002,  2003,  1998,  1990,  1992,  1595,  2023,  1470,  1592,  1703,
       0,     0,  2005,  2006,  2011,  2007,  2013,  2014,  2008,  2009,
    2015,  2019,  2022,  2018,  2010,  2012,     0,    23,     0,  1696,
       0,  2376,  2374,  2375,     0,  1744,     0,     0,  1748,     0,
    1751,     0,  1757,   772,   773,   774,   775,   765,   766,   767,
     768,   769,   770,   771,     0,   764,   466,     0,  1524,     0,
       0,   201,     0,  1519,     0,     0,     0,  1637,     0,     0,
       0,  2435,     0,     0,  1681,     0,  2271,     0,     0,     0,
     583,   584,   585,   586,   576,   577,   578,   579,   580,   581,
     582,     0,   575,     0,     0,   630,   626,     0,     0,     0,
       0,   433,     0,   781,   784,   825,   809,   811,   812,   826,
     815,   816,   817,   822,   818,   819,   823,   829,   830,   827,
     828,   831,   824,   832,   820,   821,   887,   835,   918,   862,
       0,   795,     0,   954,     0,     0,  1672,  1579,  1445,  1572,
    1502,  1623,  2408,  1507,  1627,  1752,  2256,  2257,  1510,  1629,
       0,  1208,     0,     0,     0,   438,     0,  2275,     0,     0,
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
    1142,  1155,  1148,  1150,     0,     0,   973,     0,  2303,     0,
     664,   665,   660,     0,     0,     0,     0,     0,     0,     0,
     454,   463,     0,   373,     0,     0,   400,   393,   405,   406,
     389,     0,   392,     0,   333,  2319,     0,  1689,     0,  1713,
    1456,     0,  1716,     0,  1719,     0,  1722,     0,  1725,  1615,
       0,  2206,  2208,  2209,  2207,  2203,  2204,  2210,  1492,  1614,
    1736,  2191,  2192,  2197,  2193,  2199,  2200,  2194,  2195,  2201,
    2205,  2202,  2196,  2198,     0,  1728,     0,     0,     0,     0,
    1648,  2179,  2181,  2182,  2174,  2180,  2176,  2177,  2183,  1490,
    1612,  1733,  2168,  2175,  2184,  2170,  2171,  2172,  2187,  2188,
    2185,  2186,  2189,  2178,  2190,  2169,  2173,     0,  1731,  1833,
     290,  1560,  1661,     0,     0,  1834,  1829,  1830,  1831,  1832,
    1561,  1816,  1822,  1813,  1818,  1819,  1823,  1817,   288,  1558,
    1658,  1812,  1824,  1825,  1826,  1821,  1814,  1815,  1820,  1827,
    1828,   284,  1555,  1652,     0,     0,     0,     0,     0,  1786,
    1787,  1794,   286,  1556,  1655,     0,     0,     0,     0,     0,
    1799,  1800,  1807,     0,     0,     0,  1775,  1650,  2398,  1776,
    2402,  1778,  2404,  1780,  1783,  2506,  1785,     0,     0,  1668,
    1684,     0,     0,  2384,  2385,  2386,  2387,  2388,  2389,  2390,
    2391,  2379,     0,     0,  2414,  2421,     0,     0,  2426,     0,
    2422,     0,  2495,  2496,  2497,  2498,  2499,  2492,  2493,  2494,
       0,  2481,  2482,  2486,  2484,     2,     0,  2456,     0,     0,
       3,     4,     0,     0,  1687,     0,     0,     0,   272,  1641,
       0,  1639,     0,     0,  1693,  1583,   715,   711,     0,     0,
       0,   727,   728,   729,     0,     0,   367,   460,     0,  1699,
    2043,  1472,  1594,  1706,     0,     0,     0,  2024,  2025,  2030,
    2026,  2032,  2033,  2027,  2028,  2034,  2044,  2045,  2048,  2038,
    2041,  2042,  2037,  2029,  2031,  1996,  1701,  1997,  2001,  2067,
    1474,  1596,  1709,     0,     0,     0,  2049,  2050,  2055,  2051,
    2057,  2058,  2052,  2053,  2059,  2068,  2069,  2072,  2063,  2066,
    2062,  2054,  2056,  2016,  1704,  2017,  2021,     0,     0,    22,
    2538,  2536,     0,     0,  2373,     0,     0,     0,     0,  2335,
       0,     0,  1527,  2366,   216,   217,   218,   219,     0,   210,
     213,  1522,     0,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,     0,  1638,     0,  2318,     0,     0,     0,  2436,
       0,  2433,     0,  2269,  2268,  2362,  2363,  2365,  2364,     0,
       0,     0,   592,   609,   605,   607,   608,   606,     0,   589,
       0,   591,     0,     0,   627,   625,     0,     0,     0,   620,
     621,     0,   619,     0,   813,   889,   859,   834,   836,   837,
     848,   849,   840,   841,   850,   842,   851,   847,   843,   844,
     852,   853,   855,   856,   857,   858,   854,   845,   846,   920,
     886,   861,   863,   864,   875,   876,   867,   868,   877,   869,
     878,   874,   870,   871,   879,   880,   882,   883,   884,   885,
     881,   872,   873,   796,   955,     0,     0,  1453,  1580,     0,
       0,  1753,     0,   610,     0,   341,   336,   339,   340,   338,
       0,     0,  2313,     0,   439,  2273,  2272,     0,     0,   653,
       0,     0,  2291,     0,  1162,  1246,  1252,  1243,  1248,  1249,
    1253,  1247,  1236,  1238,  1239,  1242,  1254,  1255,  1256,  1251,
    1244,  1245,  1259,  1264,  1265,  1262,  1263,  1266,  1260,  1250,
    1267,  1261,  1257,  1258,  1364,  1298,  1402,  1332,     0,     0,
    1213,     0,  1273,  1190,     0,  2279,     0,     0,     0,   445,
       0,     0,   447,     0,     0,   450,     0,  2307,     0,   667,
       0,   722,   718,     0,     0,   457,     0,  1068,  1074,  1065,
    1070,  1071,  1075,  1069,  1058,  1060,  1061,  1064,  1076,  1079,
    1077,  1081,  1073,  1066,  1067,  1082,  1083,  1090,  1088,  1089,
    1091,  1085,  1086,  1072,  1087,  1084,  1078,  1080,     0,   998,
    1103,  1109,  1100,  1105,  1106,  1110,  1104,  1093,  1095,  1096,
    1099,  1111,  1114,  1112,  1116,  1108,  1101,  1102,  1117,  1118,
    1125,  1123,  1124,  1126,  1120,  1121,  1107,  1122,  1119,  1113,
    1115,     0,  1030,     0,  1132,     0,  2285,     0,     0,   974,
    2301,  2300,   661,   659,     0,     0,     0,   682,   683,   684,
     685,   686,   687,   688,     0,   680,   701,   702,   703,   704,
     705,   706,   707,   708,   709,     0,   695,   697,   699,   747,
     748,     0,   756,   757,   758,   759,   760,   761,   732,     0,
       0,     0,   736,   749,   376,   379,     0,   394,     0,   401,
       0,   402,     0,   391,     0,   390,     0,   334,     0,  1690,
    1714,  1717,  1720,  1723,  1726,     0,  2226,  2228,  2229,  2227,
    2223,  2224,  2230,  1494,  1616,  1739,  2211,  2212,  2217,  2213,
    2219,  2220,  2214,  2215,  2221,  2233,  2234,  2231,  2232,  2235,
    2225,  2222,  2236,  2216,  2218,     0,     0,  1737,  1729,  2267,
       0,     0,     0,     0,  2370,  2371,  2372,     0,     0,  1734,
    1732,  1835,  1662,  1836,  1838,  1857,  1843,  1849,  1840,  1845,
    1846,  1850,  1844,   292,  1562,  1664,     0,     0,  1839,  1851,
    1852,  1853,  1848,  1841,  1842,  1855,  1856,  1847,  1854,     0,
    1659,  1788,  1653,  1789,  1791,  1793,  1796,  1798,  1801,  1656,
    1802,  1804,  1806,  1809,  1811,     6,     0,     0,     0,  1651,
       0,     0,     0,     0,     0,  1669,     0,  2518,  2380,  2378,
    2382,     0,  2413,  2417,     0,  2423,     0,  2480,     0,     0,
       0,  2448,  2455,  2450,     0,  2394,  2407,   268,     0,   273,
    1762,  1544,  1642,  1643,  1550,  1547,     0,  1529,  1640,  1761,
    1539,  1540,     0,     0,  1460,     0,   712,   710,     0,     0,
     726,   371,  2516,  2504,  2510,  2511,  2515,  2035,  1707,  2036,
    2040,  2047,  1702,  2060,  1710,  2061,  2065,  2071,  1705,  2420,
      24,     0,     0,  2462,  2464,  2411,  2333,  2332,     0,     0,
     205,   211,     0,     0,  2465,  2316,  2315,  2442,  2444,     0,
       0,  2446,     0,  2361,   571,     0,     0,     0,     0,   624,
       0,     0,   629,   644,  2501,     0,   618,   814,   913,   888,
     890,   891,   902,   903,   894,   895,   904,   896,   905,   901,
     897,   898,   906,   907,   916,   914,   915,   917,   909,   910,
     911,   912,   908,   899,   900,     0,   838,   944,   919,   921,
     922,   933,   934,   925,   926,   935,   927,   936,   932,   928,
     929,   937,   938,   947,   945,   946,   948,   940,   941,   942,
     943,   939,   930,   931,     0,   865,  2353,  2357,     0,  1754,
       0,     0,  2311,  2309,  2308,     0,   646,   648,  2289,  2287,
    2286,     0,  1240,  1366,  1307,  1313,  1304,  1309,  1310,  1314,
    1308,  1297,  1299,  1300,  1303,  1320,  1315,  1316,  1321,  1317,
    1322,  1312,  1305,  1306,  1323,  1324,  1326,  1327,  1311,  1328,
    1329,  1325,  1318,  1319,  1404,  1341,  1347,  1338,  1343,  1344,
    1348,  1342,  1331,  1333,  1334,  1337,  1354,  1349,  1350,  1355,
    1351,  1356,  1346,  1339,  1340,  1357,  1358,  1360,  1361,  1345,
    1362,  1363,  1359,  1352,  1353,  2476,     0,  1214,  1274,     0,
    2276,     0,     0,     0,  2295,     0,   448,     0,  2299,     0,
     451,     0,  2304,   668,   666,     0,   719,   717,     0,     0,
       0,  1062,   999,     0,  1097,  1031,  1133,  2281,  2283,  2280,
       0,     0,   663,   675,   677,   679,     0,   694,     0,     0,
       0,     0,   733,   731,     0,   750,   751,     0,   740,     0,
     737,   752,   417,   403,   404,   388,   387,   335,     0,  2323,
       0,     0,     0,     0,  1740,     0,  2341,     0,     0,  1738,
    2265,  2264,  2351,  2359,  2369,  1735,  1663,  1858,  1665,  1859,
    1861,  1660,  1654,  1657,     0,  2395,     0,     0,     0,     0,
       0,     0,     0,  1864,  1865,     0,  2502,     0,     0,     0,
       0,  2427,     0,     0,     0,     0,  2485,     5,     0,     0,
    1644,     0,     0,     0,  2458,     0,     0,   714,   725,     0,
       0,  1708,  1711,     0,  2537,     0,   763,   212,   209,     0,
    2355,     0,  2437,  2434,  2270,   574,     0,     0,   590,   636,
       0,   632,   628,     0,     0,   892,   839,     0,   923,   866,
       0,     0,   348,   344,   346,   347,   345,   343,   349,     0,
       0,     0,  2274,     0,     0,  1241,  1375,  1381,  1372,  1377,
    1378,  1382,  1376,  1365,  1367,  1368,  1371,  1388,  1383,  1384,
    1389,  1385,  1390,  1380,  1373,  1374,  1391,  1392,  1400,  1398,
    1399,  1401,  1394,  1395,  1379,  1396,  1397,  1393,  1386,  1387,
       0,  1301,  1413,  1419,  1410,  1415,  1416,  1420,  1414,  1403,
    1405,  1406,  1409,  1426,  1421,  1422,  1427,  1423,  1428,  1418,
    1411,  1412,  1429,  1430,  1438,  1436,  1437,  1439,  1432,  1433,
    1417,  1434,  1435,  1431,  1424,  1425,     0,  1335,     0,  2475,
    2277,   671,   673,     0,  2292,     0,  2296,  2305,     0,     0,
       0,   721,     0,     0,  2331,     0,     0,  1063,  1098,     0,
       0,  2302,   662,   689,   690,   691,   692,   681,   696,     0,
       0,     0,     0,   735,   739,   738,   753,   754,     0,   743,
       0,   741,   755,     0,     0,  2320,     0,     0,  2349,     0,
       0,  1741,  2339,  2337,  2336,     0,  1666,     7,  2397,     0,
    2401,    20,     0,     0,     0,  2514,     0,  2508,     0,  2513,
       0,  2381,  2383,  2416,  2418,  2424,  2429,  2483,  2489,  2490,
    2491,  2487,   276,  1645,     0,     0,  1541,  1542,  1530,     0,
     713,     0,     0,  2535,  2334,     0,  1463,  1515,   277,   208,
     123,   206,   124,   122,   125,   126,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   127,
     141,     0,  2317,   598,     0,   594,   588,   634,     0,     0,
     631,   622,   893,   924,  2409,   613,   615,   616,   614,     0,
       0,   342,  2312,  2310,  2290,  2288,     0,  1369,  1302,     0,
    1407,  1336,     0,     0,     0,     0,     0,   669,     0,   720,
    2325,  2329,  2327,  2324,  2282,  2284,   698,   700,   762,   734,
     744,   742,     0,   745,  2321,  2322,  2347,  2345,  2343,  2342,
       0,     0,  2266,     0,    14,  2399,  2403,  2405,     0,     0,
       0,     0,  2438,   716,     8,     9,  2512,  1457,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   258,   214,   220,
     223,   225,   229,   230,   231,   226,   224,   257,   596,     0,
       0,   593,     0,     0,   633,   611,     0,  1370,  1408,  2478,
    2278,  2293,  2297,  2306,   723,     0,     0,     0,   746,     0,
       0,     0,  2340,  2338,     0,    15,     0,    17,    21,    11,
       0,  2509,  1863,  2440,  2439,  2505,     0,   207,   262,   262,
     262,   262,   262,   262,   262,   259,     0,     0,   221,     0,
       0,   595,     0,   638,   637,   612,     0,     0,  2326,  2330,
    2328,  2348,  2346,  2344,     0,     0,     0,     0,  2507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   262,   222,
     215,     0,   600,   599,   635,     0,  2294,  2298,    13,    16,
       0,    12,    10,     0,   227,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,     0,   233,   234,
     235,   236,   237,   238,     0,   239,   240,   242,   244,     0,
    1551,   597,     0,     0,     0,   263,     0,   241,   232,   260,
     261,     0,   639,    18,     0,   228,   601,   641,    14,     0,
     603,     0,   640,    19,   264,     0,   602,   642,   604
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2821,  1809, -1553,  6932,    -4, -2821, -2821, -2821, -2821,  -854,
   -2821, -2821, -2821, -2553, -2821,   -62, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  -152, -2821, -2821, -2821,  -174,
   -2821, -2821, -2821, -2821, -2821,   -32, -1858, -2821, -2821, -2821,
   -2821, -2820, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,    37, -2821,  -381, -2821, -2821,
   -2821, -2821, -2821, -1097, -2821, -2821,  -150, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  2176, -2821,  2177, -2821,  2182,
   -2821, -2821, -2821, -2821,  2183, -2821, -2821, -2821, -2821, -2821,
    2191, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  2193,
   -2821, -2821, -2821,  2194, -2821,  2198, -2821, -2821, -2821,  2199,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,   528,
   -2821, -2821,  1403,   757, -2821, -2821,  2205, -2821, -2821,  -900,
   -2821,   778, -2821,  -155,  -142, -2821, -2821, -2821, -2821, -2821,
   -2821,  2200,  2208,  2209, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  -213,
    -324,  -734,  -341,  -814, -1379, -1419,  -389,  -774, -2821, -2821,
    -579,  -407,  -171,  -131, -2821,  -117,   -92,  9190, -2821, -2821,
   10498, -2821, -2821,   -51, -2821, -2821, -2821,  -657, -2821, -2821,
    -737, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821,   -71, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,  -563, -2821, -2821,  -704, -2821, -2821, -2821, -2821,
   -2821,  -430, -2821,  -427, -2821,  -421, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, 10600, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, 10769, -2821, -2821, -2821, 10814, -2821,
   -2821, -2821, -2821, 11505, -2821,  -227, -2821, -2821, -2821,  -490,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, 10338, -2821, -2821, -2821, -2821,  -226,  -458,
   -2821, -2821, -2821, -2165, -1561, -2821, -2821, -2821, -2821, -2821,
   -2821,  -234,  -230, -2821, -2821,  2249, -2821, -2821, -2821,  -703,
    2251, -2821, -2821, -2821, -1276, -2821, -2821, -2821, -2821, -1856,
    2252, -2821, -2821, -2821, -1882, -2821, -2821, -2821, -2821, -2299,
    2253, -2821, -2821, -2821, -2322,  2255, -2821, -2821, -2821,  -710,
    2266, -2821, -2821, -2821,  -888, -2821, -2821, -2821, -2821, -1442,
    2269, -2821, -2821, -2821, -1480, -2821, -2821, -2821, -2821, -2001,
    2271, -2821, -2821, -2821, -2031,  2277, -2821, -2821, -2821, -1456,
    2278, -2821, -2821, -2821,  -763,  2280, -2821, -2821, -2821,  -803,
    2281, -2821, -2821, -2821, -1377,  2284, -2821, -2821, -2821, -1938,
    2285, -2821, -2821, -2821, -1389, -2821, -2821, -2821, -2821, -2374,
    2286, -2821, -2821, -2821, -2409, -2821, -2821, -2821, -2821, -2589,
    2287, -2821, -2821, -2821, -2575,  -299, -2821, -2821, -2821, -2821,
   -2821,  -149, -2821,  -265, -2821, -2821, -2821, -2821, -2821, -2821,
    2291, -2821,  -263, -2821, -2821, -2821, -2821,  -148, -2821,  -147,
   -2821,  -262, -2821,  2295, -2821,  -256, -2821,  2301, -2821, -2821,
   -2821,  2303, -2821,  2305, -2821, -2821, -2821,  2306, -2821,  2307,
   -2821,  2310, -2821,  2311, -2821,  2314, -2821,  2317, -2821,  -146,
   -2821,  -236, -2821,  -235, -2821, -2821, -2821,  -144,  -231, -2821,
   -2821, -2821, -2821, -2821, -2821,  -228, -2821,  -220, -2821,  -143,
   -2821,  -219, -2821, -2821,  1180, -2821, -2821, -2821,  1184, -2821,
   -2821, -2821, -2821, -2821,  -202, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821,   693,  -669, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,  1479,
     690, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
    -652, -2821, -2219,  -479, -1032, -2821, -2821, -2821, -2821, -2821,
   -1599, -2821, -2821, -2821, -2821, -2821, -1654, -2821, -2821, -2821,
   -2821, -2821, -1604, -1572, -2821, -2821, -2154, -2821, -2821, -1040,
   -2821, -2821,  -239,   -79,   -95,  -193,  -502,  -464,  -931,  -555,
    -133,  -583, -2821, -2821, -1173, -2821, -2821, -1176, -2821, -2821,
   -1745, -2821, -2821, -2821, -1736, -2821, -2821, -2821,  -939,  -897,
    -958,  -969,  -961,  -996, -1037, -1580, -1582, -2117,  -139, -2821,
    -159,  -164, -1322,  2197,  1102, -2821, -2821, -2821, -2821, -2821,
   -2821,  -545, -2821, -2821, -2821, -2821, -2821,  -729, -2821, -2821,
   -2821, -1375, -2821, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821,  -396, -2821, -2821, -2821, -2821, -2821, -1084, -2821, -2821,
   -2821,  -140, -2821, -2821, -2821, -1087, -2821, -2821, -1472, -2821,
   -2821, -2821, -2821,  1792, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821, 12214, -2821,  -355, -2821, -2821,
   -2821,  7776, -2821, 12480, -2821,  8522, -2821, -2821, -2821, -2821,
   13296, -2821, -2821,  -342, -2821,  1375, -2821, -2821, -2821, -2821,
   -2821,  -124, -2821, -1106, -1082, -2821, -1124, -2821, -1074, -2821,
   -1101, -2821, -1096, -2821,  2327, -2821, -2821, -2821, -2821, -2821,
    4361, -2821, -2821, -2821, -2821,  -339, -2821, -2821,  6492, -2821,
   -2821, -2821, -2821, -2821,  3280, -2821, -2821, -2821, -2821, -2821,
    6144, -2821,   662, -2821,  6615, -2821,  3409, -2821,  6235, -2821,
     -58, 10213,  5812, -2821, -2821, -2821, -2821, -2821, -2821, -2821,
   -2821, -2821, -2821, -2821, -2821,  -778, -2821, -2821,  6221, -2821,
   -2821, -2821,  -184, -2821, -2821, -2821, -2821, -2821,  9322, -2821,
    5062,  -416, -2821, -2821, -1621, -2821, -2821, -2821, -2821, -2821,
   -2735, -2821, -1236, -1782, -1789,   -97, -2821, -2821, -2821
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1786,  1791,  1792,  2326,  3015,  3076,  3070,  2668,  3067,
    3105,  3068,  3178,  2882,  3004,   241,  1268,    34,    35,   181,
    2919,   397,    36,   153,   398,    37,   144,   305,   306,   307,
     308,   717,  2708,  3019,  2921,  1898,  1899,  2412,  3087,  1900,
    3028,  3029,  3030,  3166,  3031,  3032,  3154,  3033,  3034,  3035,
    3147,  3036,  3037,  3118,  3159,  3111,  3174,    38,   230,   641,
    1795,  1185,  1186,  1187,  1188,  1796,    39,   176,   182,   587,
      40,    41,   183,  1125,   184,  1126,   185,  1124,   186,  1121,
     187,  1690,   188,   189,   588,    42,   147,    43,   156,    44,
     451,    45,    46,   157,    47,   495,    48,   896,    49,   897,
      50,   165,    51,   498,    52,   235,    53,   167,    54,    55,
      56,    57,   166,    58,   141,    59,   169,    60,   154,    61,
     148,   554,   450,   799,  2016,  2017,  2018,  2739,   970,   342,
     456,   801,   482,   888,  1469,  1478,   510,   901,   661,  1214,
    1215,   535,   951,   952,   536,   537,    62,   168,   544,   959,
     545,  1597,   960,  1598,  1599,   954,   961,   962,   963,   964,
     548,   549,   550,   551,   552,   527,   296,   343,   457,   802,
     483,   889,  1470,  1479,   511,   902,   662,   528,   297,   344,
     458,   803,   484,   890,  1471,  1480,   512,   903,   904,   905,
     663,   529,   298,   345,   739,   346,   347,   348,  1331,  1332,
     349,   741,  1938,  1939,  1940,  2426,  2944,  2945,  3089,  3039,
    3123,  3162,  3180,  3186,  1941,  2019,  2500,  2959,  2960,   362,
     748,  1951,  1952,  2435,   350,   742,   351,  1337,  2431,  1338,
    1943,  2720,  2721,  3042,  2948,  3094,  3125,  3177,  3182,   352,
     744,   464,   828,   465,   829,   466,   485,   486,   487,   488,
    1405,   489,   490,   515,  1583,  2611,  1584,   907,  2090,  2828,
     892,  1464,   893,  1465,   516,   941,   517,   942,   518,   943,
    2184,  2185,  2847,   519,   944,  2195,  2196,  2197,  2198,   664,
    1808,  2696,  1809,  2375,   909,  2093,  2830,  2094,  2595,   665,
    1211,   666,  1814,   520,   945,  2209,  2852,  2210,  2628,  2859,
    2211,  2629,  2860,  2212,  2631,   299,  1294,  1295,   363,   364,
     365,   366,   367,   368,   369,    63,   372,   757,   758,   759,
      64,   753,  1346,  1347,  1348,    65,  1367,  1957,  1958,  1959,
      66,  1369,  1981,  1982,  1983,    67,  1955,  2439,  2440,  2441,
      68,  1979,  2468,  2469,  2470,    69,   373,   770,   771,   772,
      70,   502,   925,   926,   927,    71,   913,  1499,  1500,  1501,
      72,   915,  1528,  1529,  1530,    73,  1491,  2104,  2105,  2106,
      74,  1520,  2137,  2138,  2139,    75,   916,  1556,  1557,  1558,
      76,   491,   844,   845,   846,    77,   494,   872,   873,   874,
      78,   863,  1421,  1422,  1423,    79,  1410,  2042,  2043,  2044,
      80,   864,  1444,  1445,  1446,    81,  2065,  2521,  2522,  2523,
      82,  2067,  2552,  2553,  2554,    83,  2513,  2753,  2754,  2755,
      84,  2544,  2789,  2790,  2791,    85,   124,    86,   126,   427,
     790,    87,   146,    88,   190,    89,   216,   429,  1377,    90,
      91,  1015,    92,   233,    93,   234,  1209,    94,   135,    95,
     236,    96,   686,    97,   688,    98,  1223,    99,  1245,   100,
     556,   101,   558,   102,   559,   103,   560,   104,   561,   105,
     563,   106,   582,   107,  1100,   108,  1080,   109,  1619,   110,
     136,   111,   137,   112,   138,   444,   792,   113,   114,   139,
     446,   793,   115,   447,   794,   116,   140,   117,   301,   118,
     151,   119,   145,   311,   721,   722,   120,   143,   714,   715,
     121,   232,  1203,  1204,  2371,  2372,  2908,   122,   231,  1191,
    1192,  1193,  1194,   568,  1130,  1711,  1722,  1698,  1680,  2293,
    1142,   376,   202,   217,  1378,   317,   589,   620,  2007,   972,
     647,   242,   669,  1225,  1247,  1821,  1850,   995,  1016,  1035,
    1052,  1066,  1081,  1109,  1659,  1628,  2243,   252,   263,   269,
    1380,   279,  1383,  1388,   292,   710,   725,   726,  2367,  2361,
    2362,   569,  1131,  1712,  1723,  1699,  1681,  2294,  1143,   377,
     203,   218,   318,   590,   621,   973,   648,   243,   670,  1226,
    1248,  1822,  1851,   996,  1017,  1036,  1053,  1067,  1082,  1110,
    1660,  1629,  2244,   253,   264,   270,   280,  1384,   293,   711,
     727,  2368,  2363,   570,  1132,  1133,  1134,  1135,  1136,  1137,
    1713,  1714,  1715,  1716,  1717,  1718,  1724,  1725,  1726,  1727,
    1728,  1729,  1700,  1682,  1683,  1684,  2295,  2296,  2297,  1144,
    1747,  2675,   378,   204,   219,   319,   591,   622,   974,   649,
     244,   671,   672,   673,  1227,  1228,  1229,  1249,  1250,  1251,
    1823,  1824,  1825,  1826,  1852,  1853,  1854,  1855,   997,  1018,
    1037,  1054,  1068,  1083,  1111,  1661,  1630,  2245,   254,   265,
     271,   281,  1385,   294,   571,  1094,  2271,  2875,   353,  1317,
    2422,   467,  1398,  2505,   895,  2076,  2973,   928,  2168,  2839,
    2840,   847,  2033,  2744,  2743,  1475,  2585,  3096,  1484,  2589,
    3097,   521,  1579,  2610,   910,  2088,  2976,   812,  2023,  2741,
    2740,   320,   730,  1916,  2711,   975,  2228,  2641,  2107,  2836,
    3055,  3057,  3056,   706,  1890,  2705,  1631,  2648,  3001,  3000,
    2246,  2870,  3061,  3060,  3059,   572,  1095,   379,   785,   728,
    1304,   380,   786,   573,  1096,   574,   738,  1929,   309,  1299,
     575,  1097,  2277,   255,  1274,   576,   609,  1762,  2677,  2678,
    1763,   577,   616,  1138,  1139,  1734,  1739,  2330,  1140,  1735,
    1741,  2331,  1743,  2332,   578,   617,  1386,  2009,   285,   701,
     983,   610,  1766,  2341,  2680,   248,   689,  1767,   650,  2682,
    1171,  2344,  1771,  1172,   651,  1312,  2419,  2369,  2905,  3074,
     986,   731,   652,   732,   988,   734,   989,   613,   990,  1176,
     276,   212,   991,   614,  1788,   653,  1205,   654,   655,   266,
     697,   267,   698,   729,  1912,  1434,  2576,  2818,   992,   612,
    1780,  2348,  1781,  1782,  2349,  2901,  1783,  1784,   579,   745,
     580,   684,  1218,  2699,  1746,  2333,  2886,  2383,  2700,  2887,
    2384,  1161,  1162,  1163,  1164,   260,   693,  1882,  1883
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     206,   399,   221,   400,   428,   431,   432,   443,   908,   445,
     448,   246,   256,   546,   273,   283,  1662,   760,   773,  1719,
    1730,   809,   321,   356,   810,   459,   547,   383,  2213,  2386,
     811,   776,   470,   766,  1881,  2045,  2385,  1112,  1576,   460,
    2411,   524,  1607,  1720,  1731,  2070,  2630,  2267,  2140,  2162,
     592,  1721,  1732,  1846,   386,  1371,  2072,  1609,  2129,   475,
    2085,  1373,  2011,  2284,   461,  1600,   594,  1602,  1395,  2319,
    1462,  1954,  1874,  1678,  1307,  1467,   623,  2388,  1614,   206,
    2279,   286,  1409,  1217,  1616,   463,  1645,  1220,  1146,  1798,
    1099,  2082,   625,  1207,   221,  2310,   674,  2317,   875,  1737,
    2495,  2164,  2466,  1749,  2601,  2512,  1618,  2604,  2324,  2282,
     692,   700,   676,  2312,   696,  2394,   703,  2883,  2884,   246,
    1612,   949,   947,   639,   619,   736,   709,  2644,  1490,   256,
     747,   752,   719,   831,   750,  1516,  1827,  1545,   788,   876,
    2658,  2725,   835,  2690,  2817,   704,   273,  2728,  2781,   192,
    1184,   359,  1106,  1122,   250,  1107,   283,  1181,  1856,   193,
    1888,  1108,   133,   192,   196,  2967,   198,   564,   565,   332,
     566,   191,   567,   192,   668,   171,   193,  3016,   172,  1189,
    2325,   196,   251,   198,  1502,  1396,  1531,  1559,   509,   800,
     197,   332,   303,   191,   321,   192,   360,   250,   193,   251,
     304,   194,   193,   196,  1914,   198,  1335,   196,  3088,   198,
    1382,   337,   313,   314,   315,  2970,   316,  1043,   191,   356,
     192,   152,   286,   193,  1315,   251,   194,   195,   196,   197,
     198,   199,   174,  1806,   370,  2269,  1577,  2030,   971,   565,
     332,   566,   667,   567,   192,   177,  2270,   193,   764,   778,
   -2060,   195,   196,   383,   198, -2064,   192,   142,  2638,   239,
    2689,   313,   314, -2070,   196,   316,  3119,  2832,  1397,   240,
    1244,   123,  1265,   192,  3071,   769,   784,  1807,   359,   723,
     386,   240,   268,   333,   334,   335,   336,   885,   338,   724,
     133,  1271,  1769,   191,  1770,   192,  1336,  1141,   193,   453,
     454,   455,   278,  1578,   268,   170,   171,   287,   288,   172,
     756,   173,   194,   289,   861,  2020,  1920,   290,  1921,   370,
     804,   197,   361,   751,   314,   315,   459,   815,   644,   645,
     646,   861,  1190,   470,   805,  1468,   158,   295,   948,   133,
     460,  1382,   583,   564,   565,   332,   566,   191,   567,   192,
     197,   295,   193,   192,   504,  2031,   200,  1272,   134,   806,
     475,  1889,   268,   174,  1797,   461,   125,   849,   708,   749,
     880,   341,   809,   200,   201,   810,  1123,  3047,   934,   705,
     808,   811,   278,  2866,   695,  2833,   463,   524,   359,  1915,
     796,   155,   968,   341,  3048,   200,   201,   884,  1350,   200,
     175,  1613,   504,   760,   966,  2953,  2968,  2971,  1316,  2010,
     886,   887,   908,  2165,   531,   718,   773,  2021,   584,   766,
     200,   201,  2032,  2278,  1748,  2952,  1580,  1581,  2013,   776,
     371,   981,  1004,   337,  1025,  1045,  1061,  1075,  1468,  1090,
     509,   178,   341,  2639,   200,   201,  2074, -1459,   618,   361,
     592,  1101,  2834,   197,  2640,   160,   200,   201,  1115,   723,
     532,   533,  2855,  2835,  2861,  1102,   594,  1424,  1447,   724,
    2903,   387,  2393,   200,   201,  2014,   127,   875,  1306,   360,
    2166,   623,   302,   585,   691,  2867,   791,  3017,   509,  1582,
    1103,  2167,   310,  1406,   206,   200,   201,   625,   496,  1273,
    2022,   702,   586,  2876,  2645,   504,  1401,  2015,  1425,  1448,
     862,  1105,  1466,  2075,   221,  1390,  2337,  1344,   876,  1343,
     534,  2086,  1451,   699,  1431,   388,  2871,  2012,   291,   449,
     674,   175,   797,  1341,  1206,  3018,   337,  1296,  1280,  1179,
    1278,  1591,  1314,  1182,  1301,   497,   676,   341,  1376,   200,
     201,  2707,  3129,   200,   201,   337,  1275,  1590,  1269,   361,
    2081,  2583,  1236,   543,  1258,  1112,  2587,   246,  2868,   149,
     150,   256,  2838,  2745,  1564,   273,  1662,  1615,   283,  2869,
     971,   565,   332,   566,   191,   567,   192,  2646,  2087,   193,
    2313,   509,   194,   195,   196,   553,   198,   199,  2647,  2837,
     555,  2320,   303,   313,   314,   315,  1719,   316,   668,  2726,
     304,   321,  2729,  1349,  2314,   965,   191,  1730,   192,  1650,
    2315,   193,   356,   557,  1224,  2321,  1246,   268,  2584,  1354,
    1720,  2322,  2061,  2588,   764,   562,  1819,  1817,  1721,   581,
    2280,  1731,  2701,  1750,   286,  2034,  2233,   778,  2268,  1732,
    1625,  1804,  2079,  1626,  1913,  2232,  2234,  2702,  2073,  1627,
    2024,   769,  2004,   383,  2663,  2590,  2140,  2003,  2045,  2230,
    1656,   804,  2392,  1657,   784,  2229,  2660,  2437,   815,  1658,
    1106,  2605,  2578,  1107,  2649,   805,  2602,  2169,  2499,  1108,
     386,  1345,  2577,  2991,  1043,  2993,   756,  2398,  2655,   459,
    2359,  2223,  2586,  2225,  2329,  2661,   470,  2606,  2335,  2656,
     806,   885,  2662,   460,  2231,  2095,  1794,  2091,   543,   608,
    1744,   849,  1516,   179,  1894,  1895,  1896,  1897,  1701,   237,
     238,   808,   180,   475,  1297,  1827,   543,  1298,   461,  1429,
    1453,   564,   565,   332,   566,   667,   567,   192,   611,   880,
     193,  1545,   615, -1996,   195,   196,   197,   198, -2000,   463,
    2092,   158,   640, -1835,  1856,   192,  1436,  1460,   239,  1702,
    2218,  1502,   240,   196,  2325,  2667,   884,  1302,   504,   955,
    1303,  1477,  1688,   642,   341,   643,   200,   201,  2226,  1508,
     240,  1537,  1566, -1835,   500,   192,   197,   501,   239,   656,
    1531,  2687,   934,   196,   956,   957,   958,  1844,   326,   685,
    1244,   657,  1603,   687,  1606,   159,   658,   659,   200,   201,
     240,  1592,   524,  1601,  1593,   261,   262,  3058,  1559,  1872,
    2411,   690,  1265,  1764,   886,   887,  1765,   694,   541,   531,
     542,  1620,   565,   332,   566,   191,   567,   192,   504,   981,
     193,  1815,   600,   713,  1816,   196,   197,   564,   565,   332,
     566,   667,   567,   192,   509,   707,   193,   716,  2442, -2016,
     195,   196,  1004,   198, -2020,  1402,  1403,  1404,   631,   337,
     160,   161,   162,  2889,  2409,   532,   533,  2902,   240,   657,
    2888,   981,  2471,  1025,   658,   659,   499,   500,   680,   163,
     501,   971,   565,   332,   566,   667,   567,   192,  1592,   720,
     193,  2215,  1045, -2035,   195,   196,   197,   198, -2039,  1894,
    1895,  1896,  1897,   733,   313,   314, -2046,  2354,   316,  1061,
    2355,   737,   240,   740,   509,   333,   334,   335,  2354,  2354,
     338,  2356,  2399,  1075, -1837,   341,   743,   200,   201,  1621,
     789,   453,   454,   455,   492,   493,  1637,   164,  1090,  1894,
    1895,  1896,  1897,  1622,   809,   200,   201,   810,  2673,  1651,
     660,  2674,   798,   811, -1837,  1845,  1665,   955,  2354,  1101,
     326,  2403,  2354,  1652,  2281,  2404,  1115,   827,  1623,   541,
     531,   542,  1350,  1102,   832,   200,   201,  1686,  2354,   908,
    1706,  2405,   956,   957,   958,   592,  2084,  2354,  1653,  1624,
    2417,   833,  1962,  2354,  1986,   760,  2418,   773,  1103,   312,
     939,   594,   912,   667,   914,   192,  1424,  1710,   193,  1655,
     776,   766,   940,   196,   950,   198,   532,   533,   969,  1105,
     623,  2756,   313,   314, -1980,   341,   316,   200,   201,  1447,
     240,  1925,  1926,  1927,  1928,  2046,   625,  2222,   953,  1679,
    1165,   341,   312,   200,   201,   875,   191,  1425,  2862,  1141,
    2354,   193,  2792,  2421,   194,  2266,   196,  2354,   198,   674,
    2434, -1782,  1079,  1431,  1183,   313,   314,   315,  1166,   316,
    1448,  1873,  1173,   127,   967,   676,   128,  2354,  1174,  1833,
    2613,   129,  1236,  1451,   130,   341,   876,   200,   201,   657,
    1175,  2877,  1177,   821,   658,   659,  2881,  2881,  2881,  2409,
    2410,  1862,  2354,  2386,  1258,  2614,   192,  2354,  1184,   239,
    2653,  2140,  1112,  1178,   196,  2387,  2045,  1477,  1208,   564,
     565,   332,   566,   191,   567,   192,  1772,  1773,  1774,  1775,
    1776,   240,   197,   855,   754,   755,  2664,   668,   332,  2665,
     250,  1820,   192,  1210,  1224,  1212,  2704,  1213,   564,   565,
     332,   566,   191,   567,   192,  2354,  2354,   193,  2676,  2694,
     194,   195,   196,  1849,   198,   199,  1246,  2354,  1216,  2240,
    2698,  1167,  2241,   194,  1662,  1168,  1169,  1170,  2242,  1625,
     315,   191,  1626,   192,   504,  1719,   193,  1349,  1627,   194,
     195,   196,  1730,   198,   199,  1564,  1266,   987,   374,   375,
    2386,  2354,   131,  1354,  2706,   200,   201,  1267,  2354,  1720,
    1656,  2715,  1270,  1657,  1276,   337,  1731,  1721,  2354,  1658,
     704,  2821,  1311,  1968,  1732,  1992,   764,  1106,   778,  1277,
    1107,  2354,   600,   360,  2822,  1279,  1108,  1127,  1128, -1775,
   -1777, -1779, -1784,   804,  1129,  2061,  1281,  2283,   200, -1782,
     815,  1043,  1300,   769,  1305,   784,   132,   805,  2664,  1308,
     898,  2878,  2756,   631,   849,  1345,  2050,  2540,   955,  2571,
     509,  1811,  1812,  1813,  2298,   197,   735,  2862,  1429,  1309,
    1827,  2316,   806,  1701,  1366,  1956,  1856,  1980,   756,  2274,
    2275,  2276,  2323,   956,   957,   958,  2354,  2354,  2792,  2896,
    2913,  1453,  2635,   808,  2636,  1436,   200,   201,  2354,   955,
    2949,  2946,   680,  2950,  1310,  2299,  2524,   880,  2555,  1777,
    1778,  1779,  1688,   341,  1702,   200,   201,   899,  1460,  1313,
    1516,  2305,  1318,  2442,   956,   957,   958,   543,  3014,  1319,
     341,  1333,   200,   201,   884,  1334,  2354,  2113,  2224,  2954,
    1368,   898,   341,  1617,   200,   201,  1508,  3040,   337,   197,
    3041,   787,  2471,  1545,  2354,  1339,   197,  3072,   564,   565,
     332,   566,   191,   567,   192,  3107,  2146,   326,  3108,  1502,
     795,   150,  1611,   200,   201,  1537,  1844,  1340,   564,   565,
     332,   566,   191,   567,   192,  1360,  1342,   193,  1391,   493,
     194,   195,   196,   197,   198,   199,   657,   900,  1374,  1244,
    1375,   638,  1531,  1566,  1559,  1872,  1932,  1933,   899,  1934,
    1935,  1936,  1937,   238,  2221,  1127,  1128, -1775, -1777, -1779,
   -1784,   934,  1129,  1411,  1412,  3069,  2219,  1265,  2843,  2844,
    2845,  2846,  2227,  1933,   821,  1934,  1935,  1936,  1937,   337,
    1949,  1950,   564,   565,   332,   566,   191,   567,   192,  2898,
    2899,  2900,   981,  1392,  1004,  2338, -2392,  1025,  2236,  1045,
    1736,  1061,  1604,  1075,  2756,  2252,  1393,  2792,  1621,   205,
    1399,   220,  2237,  1400, -1795,  1637,  1407,   855,  2692,  2693,
     245,  3104,  1622,   272,   282,  1463,   300,   657,   900,  1486,
    1090,  1487,   355,  3065,  3066,  1738,   382,  2238,  1488,  1651,
    1574,   469,  1585,   541,   531,   542,  1665,  1623,  1586,  1587,
     523,  1588,  1589,  1652,  1740,  1595,  1101,  1605,  2239,  1646,
    1647,  1648,  2881,  1115,  3131,  1649,  3132,  1686,  1624,  1733,
    1102,   541,   531,   542,  1742,   593,  2303,   667,  1653,  1745,
    1751,  1752,   332,  1768,   250,  1706,   192,  3164,   205,   239,
     532,   533,  1785,  1787,   196,  1103,   543,  1790,   199,  1655,
   -1550,   624,   341,   220,   200,   201,  1489,  1799,  1350,  1800,
    2444,   240,  1710,  1962,  1801,  1802,  1105,  1878,   532,   533,
    1803,   675,   341,  1805,   200,   201,  1810,  1891,   245,  1679,
    1818,  1902,  1644,   755,  2473,  1919,  1879,  1986,  2285, -1795,
    1884,  1893,   374,   375,  1924,   987,  1923,  2442,  1596,   332,
    2471,   250,  1608,   192,  1931,   272,   193,  2955,  2956,  2957,
    2958,   196,  1944,   198,  1945,   282,  1946,  2025,   998,  2064,
    1019,  1038,  1055,  1069,  2026,  1084,  2220,  2029,  2066,   251,
    2068,  2077,   300,  1424,  2078,  1447,   341,   987,   200,   201,
    1127,  1128, -1788, -1790, -1792, -1797,  2080,  1129,  2046,  2202,
    2203,  2204,  2205,  2206,  2207, -1808,  2083,  1098,  1833,   374,
     375,  2089,   331,  2170,   332,  2172,  2171,  2173,   192,  2174,
    2526,  2265,  2557,  2327,  1425,  2328,  1448,  2334,   355,  2339,
    2340,  1236, -2415,  2342,   332,  2311,   250,  1862,   192,  1451,
    1431,   193,  2343,  2061,  2346,  2776,   196,  2345,   198,  1772,
    1773,  1774,  1775,  1776,  2540,  2347, -2488,   763,   777,  1258,
    2350,  2351,   382,  2358,   251,   312,  2352,  2992,  2353,   191,
    1820,   192,  1671,  2357,   193,   509,  2812,   194,   195,   196,
     197,   198,   199,  2364,   341,  2571,   200,   201,   313,   314,
     315,  2366,   316,  1224,   374,   375,  2370, -1808,  1230,  1849,
    1252,  2376,  2377,  2524,  2378,  1370,   333,   334,   335,   336,
     337,   338,   339,   340,  2380,  1127,  1128,   600, -1790, -1792,
   -1797,  1246,  1129,  1349,  2240,  2400,  2401,  2241,  2402,  2407,
    2414,  1564,  2406,  2242,  2555,  2415,   814,  2420,  2416,  1354,
    2423,  2450,   469,  2424,  1968,  2427,  1625,  2430,  2428,  1626,
    1412,   341,   631,   200,   201,  1627,  2429,   194,  1656,  2433,
     332,  1657,   250,  2498,   192,  2479,  2436,  1658,  1992,   314,
     315,  2496,  1372,   644,   645,   646,   848,  2497,  2501,   879,
    2502,  1127,  1128, -1801, -1803, -1805, -1810,   933,  1129,   192,
    2659,   680,   239,  2503,  2504,  1837,   523,   196,   452,  2508,
     332,  1345,   191,  2438,   192,  2506,  1956,   193,  2298,  2507,
    2509,  2510,   196,  2575,   240,  2579,   341,  1866,   200,   201,
     374,   375,  3020,  1701,  3021,  3022,  2318,  2467,  2580,  2050,
    1980,  2591,  3023,  3024,  3025,  2592,   341,   746,   200,   201,
     980,  1003,  2593,  1024,  1044,  1060,  1074,  2594,  1089,  2299,
    2596,  2532,  1688,  2563,  2597,  1429,   332,  1453,   250,  2598,
     192,  2599,  2607,   239,  1702,  2305,  2608,  1114,   196,  2609,
    2615,   200,   201,  1127,  1128,   593, -1803, -1805, -1810,  2616,
    1129,  1844,  1436,  2617,  1460,   240,  2776,  1872,  2618,  2619,
    2624,  2113,   333,   334,   335,   336,  2620,   338,  2621,  1145,
    2622,  2623,  2632,   205,   543,  2642,   624,  2650,   453,   454,
     455,  2651,  2540,  2652,  1508,  2654,   374,   375,  2669,  1360,
    2679,  2670,  2812,   220,  2146,  2671,  2672,   312,  2684,  2685,
   -1782,   191,  2686,   192,  2691,  2695,   193,  2709,  2710,   194,
     195,   196,  2713,   198,   199,  3026,  2716,  1537,  2571,  1566,
     313,   314,   315,  2719,   316,   675,  3027,  2354,  2819,  2723,
   -2477,  2524,   341,  2731,   200,   201,   821,  2823, -1837,  2820,
    2824,  1235,  2825,  1257,  2826,  2634,   245,  2827,  3086,  2829,
     855,  2849,  2056,  2850,   272,  2851,  2633,   282,  2863,   200,
     201,  1195,  1196,   300,  2637,  2444,  2864,  2555,  2872,  2865,
    2873,  2874,   341,  2879,   200,   201,  2880,  2890,   998,  2904,
    2895,  2907,   564,   565,   332,   566,   191,   567,   192,  2909,
    1962,   193,  2911,  2236,  2473,  2912,   196,  2943,   198,  1019,
    2252,   355,  1677,  2941,  2947,  2961,  2972,  2237,  1353,  2974,
    2975,  2978,  2980,   763,   251,  1621,  2981,  2982,  1038,  1986,
    2983,  2986,  1637,  2987,  2988,  2996,   777,  1651,   341,  1622,
     200,   201,  2238,  2119,  1665,  1055,  2046,  1686,  2758,  2997,
    3003,  1652,   382,  2998,  2999,  3011,  3005,  2526,  3006,  1069,
    2303,  3007,  3008,  2239,  1623,  3009,  3012,   814,  3038,  3013,
    3043,  3045,  2152,  3046,  1084,  1706,  1653,  3049,  2776,  2794,
    3054,  2812,  3051,  3052,  3073,  1624,  1127,  1128,  2557, -1777,
   -1779, -1784,  3064,  1129,  3075,   469,   237,  1655,  3077,  3078,
    3079,  3080,  1710,  2240,  3081,  3082,  2241,   312,  3083,  1679,
     848,   191,  2242,   200,   201,  3084,   193,  3085,  3090,   194,
    3092,   196,  2285,   198,  3093,  3106,  3109,  3110,  1428,  1452,
     313,   314,   315,   452,   316,   332,  3121,   250,   879,   192,
    3120,  1180,   193,  3128,  1197,  1198,  1199,   196,  3122,  3130,
    3133,  2298,  3134,  1833,  3155,  1200,  1201,  1202,   987,  1862,
    3156,  1753,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  3157,
     312,  2258,  3158,  3163,   667,  3165,   192,  3167,  1507,   193,
    1536,  1565, -1978,  3168,   196,  3169,   198,  3171,  3172,  3176,
    3181,   933,  2299,   313,   314, -1980,   341,   316,   200,   201,
    3173,   240,  3175,  3179,  3065,  3187,  2450,  3184,  2305,  3188,
    3185,   523,  1671,  2666,  3183,  1820,  2688,  2922,  1230,   401,
     402,  1849,   541,   531,   542,   403,   404,   333,   334,   335,
     336,  1968,   338,  2381,   405,  2479,   406,   407,   980,  2214,
    1252,   408,   409,   453,   454,   455,  1594,     1,   410,  2915,
    2916,     5,     6,     7,     8,     9,    10,   538,    12,  2444,
    1992,  1003,  2473,    14,  2217,   539,   540,  2718,  2438,   532,
     533,    15,    16,  3091,  3161,   543,  3044,  2050,  3124,  2764,
     980,  2848,  1024,   476,   477,   478,   479,   480,  2532,  2758,
    2990,  2854,   411,  1956,   412,   413,   414,  2467,   415,  2924,
    1761,  1044,  1620,   565,   332,   566,   191,   567,   192,   416,
    2800,   193,   417,   200,   418,  2526,   196,   197,  1060,  2563,
     419,   420,  1980,   421,   422,  2794,  2917,   423,   424,   425,
     426,   481,  1074,  2926,   430,  2927,  2930,   341,   433,   200,
     201,   207,  2931,   222,   434,  1636,   435,  1089,   436,   437,
     438,  2557,   247,   439,   440,   274,   284,   441,   830,  1960,
     442,  1984,  2933,  2934,   357,  1664,  2113,  2936,   384,  2146,
    2937,  1892,  1901,   471,  1837,  1114,   200,   201,  2938,  2940,
    2906,  3170,   525,  2365,  1610,  2374,  1685,  1282,   712,  1705,
    2897,     0,     0,   834,     0,     0,   333,   334,   335,     0,
       0,   338,  2236,  1866,  1219,     0,     0,   595,     0,  2252,
     593,     0,   453,   454,   455,   312,  2237,     0,     0,   191,
     207,   192,     0,  2303,   193,     0,     0,   194,   195,   196,
     197,   198,   199,   626,     0,   222,     0,     0,   313,   314,
     315,  2238,   316,     0,     0,   624,  2920,     0,  2923,  2925,
    2928,  2929,  2932,   677,  2935,  2939,     0,     0,     0,     0,
     247,  2732,  2239,  2733,  2734,  2735,  2736,     0,  2918,   476,
     477,   478,   479,   480,   564,   565,   332,   566,   191,   567,
     192,     0,     0,   193,   675,  2285,     0,   274,  1832,     0,
    2450,  1235,     0,  2479,     0,     0,     0,   284,     0,     0,
       0,  2758,     0,     0,  2794,  1360,   341,  2456,   200,   201,
    1861,     0,     0,  1257,     0,     0,     0,   481,     0,     0,
    2764,     0,     0,   564,   565,   332,   566,   191,   567,   192,
       0,  2485,   193,  2737,  2738,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,     0,  2532,     0,     0,     0,
       0,     0,  2438,     0,   240,  2467,  2800,     0,     0,     0,
     357,     0,   564,   565,   332,   566,   191,   567,   192,     0,
       0,   193,     0,     0,   194,   195,   196,   197,   198,   199,
       0,     0,  2563,     0,     0,   374,   375,     0,     0,   765,
     779,     0,     0,   240,   384,  2056,     0,     0,     0,     0,
     998,     0,     0,  1019,     0,  1038,     0,  1055,     0,  1069,
       0,     0,  1353,     0,   564,   565,   332,   566,   191,   567,
     192,   200,   201,   193,   374,   375,   194,   195,   196,   197,
     198,   199,  1967,     0,  1991,   763,  1084,   777,   971,   565,
     332,   566,   191,   567,   192,   240,     0,   193,     0,     0,
     194,   195,   196,   197,   198,   199,     0,  2119,     0,   814,
       0,   313,   314,   315,     0,   316,     0,     0,   816,   240,
       0,     0,     0,   848,   471,  2049,   374,   375,   341,     0,
     200,   201,     0,     0,  1283,  1284,     0,  1428,  1285,  1286,
    2152,     0,     0,   800,     0,   332,     0,   191,     0,   192,
     374,   375,   193,     0,     0,   194,     0,   196,   850,   198,
    1452,   881,     0,     0,     0,     0,   313,   314,   315,   935,
     316,     0,     0,     0,     0,     0,   879,   341,   525,   200,
     201,     0,  2764,     0,     0,  2800,     0,  2235,   565,   332,
     566,   191,   567,   192,     0,     0,   193,     0,  2465,   194,
       0,   196,   197,   198,     0,     0,  2112,     0,     0,     0,
     313,   314,   315,     0,   316,  1507,   341,     0,   200,   201,
       0,     0,   982,  1005,     0,  1026,  1046,  1062,  1076,     0,
    1091,     0,     0,     0,     0,  2145,     0,   333,   334,   335,
     336,     0,   338,     0,  1536,     0,  2258,     0,     0,  1116,
       0,     0,     0,   453,   454,   455,     0,   595,     0,     0,
     564,   565,   332,   566,   667,   567,   192,     0,   341,   193,
     200,   201,  1565,   195,   196,   197,   198, -2000,     0,  1287,
    1671,   333,   334,   335,     0,   207,   338,  1230,   626,  2494,
     933,   240,   341,     0,   200,   201,     0,   453,   454,   455,
       0,     0,     0,     0,     0,   222,     0,  1288,  1289,  1290,
       0,     0,     0,  2724,     0,  1252,     0,     0,  1291,  1292,
    1293,   980,     0,  1003,     0,  1789,  1024,     0,  1044,     0,
    1060,     0,  1074,     0,  2251,     0,     0,   677,  2202,  2203,
    2204,  2205,  2206,  2207,  1636,     0,     0,   341,     0,   200,
     201,     0,   191,  1237,   192,  1259,     0,   193,   247,  1089,
     194,   195,   196,   197,   198,   199,   274,     0,  1394,   284,
       0,     0,   191,     0,   192,  1664,     0,   193,     0,     0,
     194,   195,   196,     0,   198,   199,     0,     0,     0,  1837,
       0,   341,  1114,   200,   201,  1866,  1685,     0,     0,     0,
    1960,     0,     0,   836,     0,  2302,     0,   191,     0,   192,
       0,     0,   193,   357,  1705,   194,     0,   196,   197,   198,
    1355,  2643,     0,     0,  1984,   765,   313,   314,   315,     0,
     316,   917,   565,   332,   566,   191,   567,   192,   779,     0,
     193,     0,  2456,   194,   195,   196,   197,   198,   199,     0,
       0,     0,     0,     0,   384,     0,  3112,  3113,  3114,  3115,
    3116,  3117,  1413,     0,   341,     0,   200,   201,  1930,   816,
     504,  2485,     0,   564,   565,   332,   566,   667,   567,   192,
       0,     0,   193,  1942,     0, -2016,   195,   196,  1947,   198,
   -2020,     0,     0,   374,   375,  3160,     0,   471,   504,     0,
     336,   337,     0,     0,   240,   564,   565,   332,   566,   191,
     567,   192,   850,  2056,   193,  2770,     0,   194,   195,   196,
     197,   198,   199,  2005,  2006,     0,     0,     0,   336,   337,
    1430,  1454,     0,     0,   505,     0,   507,  1832,     0,     0,
     881,     0,     0,     0,     0,     0,  2806,     0,  2027,  2028,
       0,     0,     0,   508,   200,   201,   509,     0,     0,     0,
    1235,     0,   505,     0,   507,     0,  1861,   564,   565,   332,
     566,   191,   567,   192,   200,   201,     0,     0,     0,     0,
    1509,   508,  1538,  1567,   509,     0,     0,     0,  1257,     0,
       0,     0,   503,   935,     0,     0,     0,     0,   192,     0,
       0,     0,  2119,     0,     0,  2152,     0,   197,     0,   200,
     201,     0,     0,   525,     0,     0,     0,   564,   565,   332,
     566,   667,   567,   192,     0,     0,   193,     0,  1408, -1996,
     195,   196,   197,   198, -2000,   341,     0,   200,   201,     0,
     982,  3020,     0,  3021,  3022,  2258,     0,     0,   240,     0,
       0,  3023,  3024,  3025,     0,   375,  2780,     0,   452,   504,
     332,     0,   250,  1005,   192,     0,     0,   193,  1353,     0,
    2449,     0,   196,  1967,     0,     0,     0,   341,     0,   200,
     201,     0,   982,     0,  1026,     0,     0,     0,     0,   336,
     337,     0,     0,     0,  2478,     0,     0,  1991,     0,     0,
       0,     0,     0,  1046,     0,     0,     0,     0,     0,   341,
       0,   200,   201,  2177,  2178,  2179,  2180,  2181,  2182,  2183,
    1062,     0,     0,   505,   506,   507,  2456,     0,     0,  2485,
       0,     0,     0,     0,  1076,  1147,  1148,     0,     0,  1149,
    1150,     0,   508,     0,  2216,   509,     0,  1638,     0,  1091,
       0,     0,   333,   334,   335,   336,  2770,   338,  2049,     0,
       0,     0,     0,     0,  3026,     0,   324,  1666,   453,   454,
     455,   341,     0,   200,   201,  3027,     0,  1116,     0,     0,
    2531,     0,  2562,     0,  1428,     0,  1452,     0,  1687,     0,
       0,  1707,  2806,     0,     0,     0,  2272,     0,   200,   201,
     917,   565,   332,   566,   191,   567,   192,     0,     0,   193,
     598,     0,   595,     0,   196,   197,   198,   946,     0,     0,
    2112,   341,     0,   200,   201,  2096,   565,   332,   566,   191,
     567,   192,   251,     0,   193,     0,   629,   194,   195,   196,
     197,   198,   199,  1507,     0,     0,     0,   626,   313,   314,
     315,     0,   316,  2145,     0,     0,  1413,     0,     0,     0,
       0,     0,   341,     0,   200,   201,     0,   504,     0,     0,
       0,     0,     0,   210,     0,   225,  1536,     0,  1565,     0,
    1151,     0,     0,     0,   249,   258,   677,   374,   375,  1880,
    1834,     0,   504,  1237,     0,   328,     0,   336,   337,  3148,
    3149,  3150,  3151,  3152,  3153,   473,     0,  1960,  1155,  1156,
    1157,     0,  1863,     0,     0,  1259,     0,     0,     0,  1158,
    1159,  1160,   336,   337,     0,     0,     0,     0,     0,     0,
       0,   505,     0,   507,     0,     0,  1984,     0,   324,   602,
       0,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,     0,
     508,     0,   210,   509,     0,     0,   505,     0,   507,  2251,
       0,     0,     0,     0,     0,   633,     0,   225,  2770,     0,
       0,  2806,     0,     0,     0,   508,     0,     0,   509,     0,
       0,  1636,     0,     0,     0,   682,     0,     0,     0,     0,
       0,     0,   249,  1664,     0,     0,  1685,     0,     0,     0,
       0,     0,   258,     0,   341,     0,   200,   201,     0,  2302,
       0,     0,     0,     0,  1355,  2625,  2626,  2201,  2202,  2203,
    2204,  2205,  2206,  2207,  1705,  2163,     0,     0,     0,   341,
       0,   200,   201,     0,  1969,     0,  1993,   765,     0,   779,
     564,   565,   332,   566,   191,   567,   192,     0,     0,   193,
    2966,  2413,   194,   195,   196,     0,   198,   199,     0,     0,
       0,   816,     0,     0,     0,     0,     0,   328,     0,     0,
       0,   819,     0,     0,     0,   850,     0,  2051,     0,   389,
    1911,   390,     5,     0,   391,     8,   392,     0,    11,  1430,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,  1832,    16,    17,     0,     0,     0,  1861,     0,
       0,   853,  1454,    18,   541,   531,   542,   331,     0,   332,
       0,   767,   781,   192,     0,     0,     0,     0,   881,   971,
     565,   332,   566,   191,   567,   192,   393,     0,   193,   955,
       0,   194,   195,   196,   197,   198,   199,     0,     0,     0,
       0,     0,   313,   314,   315,  2449,   316,   394,  2114,     0,
     240,   532,   533,     0,   956,   957,   958,  1509,     0,     0,
       0,     0,     0,     0,     0,   985,     0,  1320,  1321,     0,
    1967,  1322,  1323,     0,  2478,     0,     0,  2147,     0,     0,
       0,   374,   375,     0,     0,     0,  1538,     0,     0,     0,
     823,     0,     0,     0,     0,    23,   473,     0,     0,  1991,
     598,   333,   334,   335,   336,   337,   338,   339,   340,     0,
       0,   395,     0,     0,  1567,     0,  2049,     0,  2763,  2186,
    2187,  2188,  2189,  2190,  2191,  2192,  2193,  2531,     0,     0,
     857,   629,   935,     0,   341,     0,   200,   201,  2625,  2626,
    2201,  2202,  2203,  2204,  2205,  2206,  2207,     0,     0,  2799,
       0,     0,     0,     0,     0,    30,     0,     0,  2562,     0,
      31,     0,     0,   982,     0,  1005,     0,     0,  1026,     0,
    1046,     0,  1062,     0,  1076,     0,  2253,     0,     0,     0,
       0,     0,     0,  1222,     0,     0,  1638,     0,     0,   396,
       0,     0,     0,     0,    33,  1008,     0,  1029,  1048,     0,
       0,  1091,     0,     0,     0,  2112,     0,     0,  2145,  2627,
       0,   341,  1324,   200,   201,     0,     0,  1666,     0,     0,
       0,  1118,     0,   341,     0,   200,   201,     0,     0,   602,
       0,     0,     0,     0,  1116,     0,     0,     0,  1687,     0,
    1325,  1326,  1327,     0,  2727,   324,     0,  2304,  2251,     0,
       0,  1328,  1329,  1330,     0,     0,  1707,   210,  2194,     0,
     633,     0,  2302,  1358,  2856,  2857,  2201,  2202,  2203,  2204,
    2205,  2206,  2207,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,  2096,   565,   332,   566,   191,   567,   192,
       0,     0,   193,     0,     0,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,     0,   313,   314,   315,   682,
     316,     0,   819,     0,     0,  2199,  2200,  2201,  2202,  2203,
    2204,  2205,  2206,  2207,     0,  1239,     0,  1261,     0,  2449,
     249,     0,  2478,     0,   258,  2858,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
     504,    13,    14,  2208,     0,   853,     0,     0,     0,  2763,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,   328,     0,     0,     0,     0,  1834,
     336,   337,     0,     0,     0,  2531,     0,     0,     0,     0,
       0,     0,  1362,     0,    19,  2799,     0,   767,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,  1863,     0,
     781,     0,     0,     0,   505,    20,   507,     0,    21,     0,
       0,  2562,     0,     0,     0,     0,     0,     0,     0,     0,
    1259,   312,     0,   508,     0,   191,   509,   192,     0,     0,
     193,   823,     0,   194,   195,   196,     0,   198,   199,     0,
       0,     0,     0,     0,   313,   314,   315,    22,   316,     0,
       0,  2714,     0,    23,     0,     0,     0,    24,    25,   473,
     917,   565,   332,   566,   191,   567,   192,     0,     0,    26,
       0,     0,     0,   985,   857,   197,     0,   341,     0,   200,
     201,  2856,  2857,  2201,  2202,  2203,  2204,  2205,  2206,  2207,
       0,     0,  1432,  1456,     0,     0,     0,     0,  2600,     0,
    1355,     0,  2451,     0,     0,  1969,     0,     0,    27,    28,
      29,     0,     0,    30,     0,   985,     0,     0,    31,   564,
     565,   332,   566,   667,   567,   192,  2480,   504,   193,  1993,
       0,     0,   195,   196,  2742,   198, -2020,     0,     0,     0,
       0,     0,  1512,     0,  1541,  1569,     0,    32,     0,     0,
     240,     0,    33,     0,     0,     0,     0,   336,   337,     0,
       0,  2763,     0,     0,  2799,     0,     0,     0,     0,     0,
       0,  2096,   565,   332,   566,   191,   567,   192,     0,     0,
     193,     0,     0,   194,   195,   196,   197,   198,   199,     0,
    2051,   505,     0,   507,   313,   314,   315,     0,   316,     0,
    1669,     0,  1413,     0,     0,     0,     0,     0,     0,     0,
     508,     0,  2533,   509,  2564,   503,  1430,   332,  1454,   250,
       0,   192,     0,     0,   193,  1008,     0,   200,   201,   196,
     197,   198,     0,   374,   375,     0,     0,     0,   504,  2841,
       0,     0,     0,     0,     0,   598,  1029,   251,     0,     0,
       0,     0,  2114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,  1048,   200,   201,   336,   337,
       0,     0,     0,     0,     0,  1509,     0,   374,   375,     0,
     629,     0,   504,     0,     0,  2147,  3135,  3136,  3137,  3138,
    3139,  3140,  3141,  3142,  3143,  3144,  3145,  3146,     0,     0,
       0,     0,   505,     0,   507,   208,     0,   223,  1538,  1640,
    1567,     0,   336,   337,     0,     0,     0,   257,     0,   275,
       0,   508,     0,   341,   509,   200,   201,   322,     0,  1673,
       0,     0,     0,     0,  2914,     0,     0,   472,     0,  1118,
    2942,     0,     0,     0,     0,   503,   505,   332,   507, -1858,
    1689,   192,     0,     0,   239,     0,     0,     0,     0,   196,
     197,     0,  1147,  1148,     0,   508,  1149,  1150,   509,  2962,
    2963,   596,  2964,  2965,   602,   341,   240,   200,   201,     0,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
       0,  2253,     0,     0,     0,     0,  2969,   627,     0,   223,
       0,     0,     0,     0,     0,     0,     0,   374,   375,   633,
       0,     0,   504,  1638,     0,     0,     0,   678,     0,   341,
       0,   200,   201,     0,     0,  1666,     0,     0,  1687,     0,
       0,     0,     0,     0,   257,     0,     0,     0,     0,     0,
    2071,  2304,   336,   337,     0,     0,     0,  1358,   682,     0,
       0,   275,  1839,     0,     0,  1239,  1707,     0,     0,     0,
       0,  1147,  1148,     0,     0,  1149,  1150,     0,  2984,  2985,
       0,     0,     0,     0,  1868,     0,   505,  1261,   507,     0,
       0,  1147,  1148,     0,     0,  1149,  1150,     0,     0,     0,
       0,     0,  2994,  2995,   819,   508,     0,     0,   509,   322,
       0,     0,     0,     0,  3002,     0,     0,  1151,   853,     0,
    2054,   917,   565,   332,   566,   191,   567,   192,     0,     0,
     193,     0,     0,   194,   195,   196,   197,   198,   199,     0,
   -1860,     0,     0,     0,  1834,  1155,  1156,  1157,     0,     0,
    1863,     0,  1413,     0,     0,     0,  1158,  1159,  1160,   341,
       0,   200,   201,     0,   780,     0,     0,     0,     0,  1147,
    1148,     0,     0,  1149,  1150,     0,     0,     0,     0,     0,
    2657,     0,     0,   374,   375,     0,  1362,     0,   504,     0,
       0,     0,     0,     0,     0,     0,     0,  2451,     0,     0,
       0,  2117,     0,     0,     0,     0,  1972,     0,  1996,   767,
       0,   781,  3050,     0,     0,  3053,  1151,     0,   336,   337,
       0,     0,  1969,  1152,  1153,  1154,  2480,     0,     0,     0,
    2150,     0,     0,   823,     0,     0,  2382,     0,     0,  3062,
    3063,     0,   817,     0,  1155,  1156,  1157,   857,   472,  2058,
       0,  1993,   505,     0,   507,  1158,  1159,  1160,     0,     0,
       0,  1432,     0,     0,  1155,  1156,  1157,     0,  2051,     0,
    2765,   508,     0,     0,   509,  1158,  1159,  1160,     0,  2533,
       0,     0,   851,     0,  1456,  3095,     0,     0,     0,     0,
       0,     0,     0,     0,  3098,  3099,  3100,     0,  3101,  3102,
    3103,  2801,     0,     0,     0,     0,     0,     0,     0,     0,
    2564,     0,     0,     0,  2382,     0,   985,     0,     0,     0,
       0,  1152,  1153,  1154,     0,   341,     0,   200,   201,  2256,
    2121,     0,     0,     0,     0,  3126,  3127,     0,     0,  1512,
       0,     0,  1155,  1156,  1157,     0,  2816,  1006,     0,  1027,
    1047,  1063,     0,  1158,  1159,  1160,     0,  2114,     0,  2154,
    2147,     0,     0,     0,     0,     0,     0,     0,  1541,     0,
    1669,     0,     0,  1117,  2096,   565,   332,   566,   191,   567,
     192,   596,     0,   193,     0,     0,   194,   195,   196,   197,
     198,   199,     0,     0,     0,     0,  1569,   313,   314,   315,
    2253,   316,     0,     0,     0,     0,     0,   312,     0,   208,
       0,   667,   627,   192,  2304,     0,   193,     0,     0, -1978,
       0,   196,     0,   198,     0,     0,     0,     0,     0,   223,
     313,   314, -1980,     0,   316,     0,     0,     0,   240,     0,
       0,   504,     0,     0,     0,     0,     0,  1008,     0,     0,
    1029,     0,  1048,     0,     0,     0,     0,     0,  2260,     0,
       0,   678,     0,     0,     0,     0,     0,     0,  1640,     0,
       0,   336,   337,     0,     0,     0,     0,  1238,     0,  1260,
       0,  2451,     0,     0,  2480,     0,   257,     0,     0,     0,
     275,     0,     0,     0,   836,     0,   332,     0,   191,  1673,
     192,     0,     0,   193,     0,   505,   194,   507,   196,   197,
     198,  2765,     0,     0,     0,     0,  1118,   313,   314,   315,
    1689,   316,     0,     0,   508,  1413,   322,   509,     0,  2306,
       0,     0,     0,     0,     0,     0,  2391,  2533,     0,     0,
       0,     0,     0,     0,  1356,     0,     0,  2801,     0,     0,
       0,     0,     0,     0,     0,     0,   374,   375,     0,     0,
       0,   504,   780,     0,     0,  2397,     0,     0,     0,     0,
       0,     0,     0,  2564,     0,     0,     0,     0,   341,     0,
     200,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   336,   337,   817,     0,     0,     0,     0,     0,  2603,
       0,     0,     0,     0,     0,   917,   565,   332,   566,   191,
     567,   192,     0,   200,   201,     0,   215,     0,   229,     0,
     197,   472,     0,     0,     0,   505,     0,   507,     0,     0,
     277,     0,     0,     0,     0,     0,   851,     0,   330,     0,
       0,     0,     0,     0,   508,     0,     0,   509,     0,     0,
       0,     0,     0,     0,     0,  1455,     0,     0,     0,     0,
       0,  1839,     0,  1358,     0,  2454,     0,     0,     0,     0,
       0,     0,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   607,     0,  1239,     0,     0,     0,     0,  2483,
    1868,     0,     0,     0,     0,   215,     0,     0,   341,     0,
     200,   201,   336,   337,  1510,     0,  1539,  1568,   637,     0,
     229,     0,  1261,     0,     0,     0,     0,     0,     0,  2511,
       0,     0,     0,  2765,     0,     0,  2801,     0,   917,   565,
     332,   566,   191,   567,   192,     0,   505,   193,   507,     0,
     194,   195,   196,   197,   198,   199,     0,     0,     0,     0,
       0,     0,     0,  2054,     0,   508,     0,     0,   509,  1413,
       0,     0,   277,     0,     0,     0,     0,     0,     0,   917,
     565,   332,   566,   191,   567,   192,     0,     0,   193,     0,
       0,   194,   195,   196,   197,   198,   199,  1006,     0,     0,
       0,     0,  1362,     0,  2458,   504,     0,  1972,     0,     0,
    1413,     0,     0,     0,     0,     0,     0,     0,  1027,   341,
     330,   200,   201,     0,     0,  2117,     0,     0,  2487,     0,
       0,  1996,     0,     0,     0,   336,   337,  1047,     0,     0,
    1575,   374,   375,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     0,     0,  1063,     0,     0,     0,  2150,     0,
       0,     0,     0,     0,   503,     0,   332,     0,   250,   505,
     192,   507,     0,   239,     0,     0,   336,   337,   196,   197,
       0,  1639,     0,     0,     0,     0,     0,     0,   508,     0,
       0,   509,  2058,     0,     0,  1413,     0,     0,     0,     0,
       0,  1667,     0,     0,     0,     0,     0,     0,     0,     0,
     505,  1117,   507,     0,  2536,     0,  2567,     0,  1432,     0,
    1456,     0,     0,     0,     0,     0,   374,   375,     0,   508,
       0,   504,   509,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,   200,   201,   596,     0,     0,     0,
       0,     0,     0,   826,  2121,     0,     0,     0,     0,     0,
       0,   336,   337,  2128,  2256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1512,     0,     0,
       0,   627,     0,   341,     0,   200,   201,  2154,     0,     0,
       0,     0,     0,   860,     0,   505,     0,   507,  1669,     0,
       0,  1147,  1148,     0,   938,  1149,  1150,     0,     0,     0,
    1541,     0,  1569,     0,   508,     0,     0,   509,     0,     0,
     678,     0,     0,     0,  1835,     0,     0,  1238,   917,   565,
     332,   566,   191,   567,   192,     0,     0,   193,     0,     0,
     194,   195,   196,   197,   198,   199,  1864,     0,     0,  1260,
       0,     0,     0,     0,     0,     0,     0,   994,  1014,  1413,
    1034,  1051,  1065,  1078,     0,  1093,     0,     0,   341,     0,
     200,   201,     0,     0,   312,     0,   332,     0,   191,     0,
     192,     0,     0,   193,  1120,     0,   194,     0,   196,  2069,
     198,     0,   607,  2260,     0,   504,     0,   313,   314,   315,
       0,   316,     0,     0,     0,   240,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1640,     0,     0,     0,     0,
     215,     0,     0,   637,     0,   336,   337,  1673,     0,   503,
    1689,   332,     0,   250,     0,   192,   374,   375,     0,     0,
     229,     0,     0,  2306,   197,     0,  2885,     0,  1356,     0,
       0,     0,     0,  1152,  1153,  1154,     0,     0,     0,   505,
    2454,   507,     0,     0,     0,     0,     0,     0,  1970,     0,
    1994,     0,     0,   780,  1155,  1156,  1157,     0,   508,     0,
       0,   509,     0,     0,     0,  1158,  1159,  1160,     0,  2483,
       0,   374,   375,     0,     0,   817,   504,     0,     0,     0,
       0,   277,     0,     0,     0,     0,     0,     0,     0,   851,
       0,  2052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,   337,     0,     0,
       0,  2054,   341,  2768,   200,   201,  1839,   330,     0,     0,
       0,     0,  1868,     0,     0,     0,  1455,     0,     0,     0,
       0,     0,     0,  2161,     0,  1365,     0,     0,     0,     0,
     505,     0,   507,     0,  2804,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,   508,
     200,   201,   509,     0,     0,     0,     0,     0,     0,  2458,
       0,     0,  2115,     0,     0,     0,     0,     0,     0,  1953,
       0,  1510,     0,     0,   826,     0,     0,   503,     0,   332,
       0,   250,     0,   192,  1972,     0,     0,     0,  2487,     0,
    2117,  2148,   197,  2150,     0,     0,     0,     0,     0,     0,
    1539,     0,     0,   341,     0,   200,   201,     0,     0,     0,
       0,     0,     0,  1996,     0,     0,     0,   860,     0,     0,
       0,     0,     0,     0,  1461,     0,     0,     0,  1568,     0,
    2058,     0,  2772,  2256,     0,     0,     0,     0,     0,   374,
     375,  2536,     0,     0,   504,     0,   213,     0,   227,     0,
       0,     0,     0,     0,     0,   452,     0,   332,   259,   191,
       0,   192,     0,  2808,   193,     0,     0,     0,   329,   196,
       0,     0,  2567,     0,   336,   337,     0,     0,     0,  1006,
       0,     0,  1027,     0,  1047,  1519,  1063,  1548,  1573,     0,
    2254,     0,     0,     0,     0,     0,     0,     0,   938,     0,
    1639,     0,     0,     0,     0,     0,     0,     0,   505,     0,
     507,     0,   605,     0,  2454,     0,     0,  2483,     0,  2121,
       0,     0,  2154,     0,     0,   213,     0,   508,     0,     0,
     509,  1667,     0,     0,     0,     0,     0,     0,   635,     0,
     227,     0,     0,     0,  2768,   994,     0,     0,  1117,   333,
     334,   335,   336,     0,   338,     0,     0,     0,   683,     0,
       0,     0,  2260,     0,     0,   453,   454,   455,  1014,     0,
       0,     0,     0,     0,     0,   259,  2306,     0,     0,     0,
    2804,   341,     0,   200,   201,     0,     0,   994,     0,  1034,
       0,  2235,   565,   332,   566,   191,   567,   192,     0,     0,
     193,     0,  2309,   194,     0,   196,   197,   198,  1051,     0,
       0,     0,     0,     0,   313,   314,   315,     0,   316,     0,
       0,     0,     0,     0,     0,  1065,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1078,
     329,     0,     0,  2458,     0,     0,  2487,     0,     0,     0,
       0,     0,  1643,     0,  1093,     0,     0,     0,     0,   341,
       0,   200,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1676,  2772,     0,     0,     0,     0,     0,     0,
       0,     0,  1120,     0,     0,   333,   334,   335,     0,     0,
     338,     0,     0,  1835,     0,   782,     0,     0,     0,  2536,
       0,   453,   454,   455,     0,     0,     0,     0,     0,  2808,
       0,     0,     0,     0,     0,     0,  1238,   607,     0,     0,
       0,     0,  1864,     0,   800,     0,   332,     0,   191,     0,
     192,     0,     0,   193,     0,  2567,   194,     0,   196,     0,
     198,     0,     0,     0,  1260,     0,     0,   313,   314,   315,
       0,   316,   637,     0,     0,     0,  2768,     0,     0,  2804,
       0,     0,     0,  2096,   565,   332,   566,   191,   567,   192,
       0,     0,   193,   824,     0,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,     0,   313,   314,   315,     0,
     316,     0,     0,     0,     0,   341,     0,   200,   201,     0,
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   859,     0,     0,     0,     0,   333,   334,
     335,   336,     0,   338,  1356,     0,  2452,     0,     0,  1970,
     504,     0,     0,     0,   453,   454,   455,     0,     0,     0,
       0,     0,     0,     0,   599,     0,     0,     0,     0,     0,
    2481,     0,     0,  1994,     0,   214,     0,   228,     0,     0,
     336,   337,     0,     0,     0,     0,     0,     0,     0,   211,
     630,   226,     0,     0,     0,     0,     0,     0,  1011,     0,
    1031,  1049,     0,     0,     0,  2772,     0,     0,  2808,     0,
     679,     0,     0,     0,   505,     0,   507,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   605,   508,  2052,     0,   509,     0,     0,  1365,
       0,   606,     0,     0,     0,     0,     0,     0,   341,     0,
     200,   201,     0,     0,   214,   603,  2534,     0,  2565,  1978,
     213,  2002,  1455,   635,     0,     0,     0,   636,   211,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   634,     0,   226,     0,     0,   826,   341,     0,   200,
     201,     0,   325,     0,     0,     0,  2115,     0,     0,     0,
     860,     0,  2063,     0,     0,     0,     0,     0,     0,   836,
       0,   332,   683,   191,     0,   192,     0,     0,   193,  1510,
       0,   194,     0,   196,   197,   198,     0,     0,  1241,  2148,
    1262,     0,   313,   314,   315,     0,   316,   259,     0,     0,
    1413,   917,   565,   332,   566,   191,   567,   192,     0,     0,
     193,     0,  1539,     0,  1568,   196,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   374,   375,   251,     0,     0,   504,   329,     0,     0,
       0,     0,     0,  2127,     0,     0,     0,     0,     0,     0,
       0,     0,  1519,     0,     0,  1363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,   337,   504,     0,
       0,     0,  2160,   782,     0,     0,     0,     0,     0,     0,
       0,  1548,     0,     0,     0,   820,     0,     0,     0,     0,
     503,     0,   332,     0,   250,  2254,   192,     0,   336,   337,
     505,     0,   507,     0,   824,   197,   209,     0,   224,  1573,
       0,     0,     0,     0,     0,     0,     0,  1639,     0,   508,
       0,     0,   509,     0,     0,   854,     0,   938,   323,  1667,
       0,     0,   505,     0,   507,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   859,     0,     0,
       0,   508,   374,   375,   509,     0,     0,   504,   994,     0,
    1014,     0,     0,  1034,     0,  1051,  1458,  1065,     0,  1078,
       0,  2264,   597,   341,     0,   200,   201,     0,     0,     0,
       0,  1643,     0,     0,     0,   209,     0,   336,   337,     0,
       0,     0,     0,     0,     0,     0,  1093,     0,   628,     0,
     224,     0,     0,     0,     0,   341,     0,   200,   201,     0,
       0,     0,  1676,     0,     0,  1515,     0,  1544,  1571,     0,
       0,   505,     0,   507,   599,     0,     0,     0,     0,  1120,
       0,     0,     0,     0,     0,     0,     0,     0,  1835,     0,
     508,     0,     0,   509,  1864,     0,     0,     0,     0,     0,
       0,   327,     0,     0,     0,   630,     0,     0,     0,   917,
     565,   332,   566,   191,   567,   192,     0,  1012,   193,  1032,
       0,   194,   195,   196,   197,   198,   199,     0,     0,     0,
       0,  1009,     0,  1030,     0,     0,     0,     0,     0,     0,
    1413,  2452,     0,     0,   341,   601,   200,   201,  1011,     0,
     323,   606,     0,     0,   679,     0,     0,     0,   503,     0,
     332,     0,   250,     0,   192,   603,  1970,   193,     0,  1031,
    2481,   632,   196,   197,   198,     0,   504,     0,     0,   214,
       0,     0,   636,     0,     0,     0,     0,     0,  1049,     0,
     251,   681,     0,   211,     0,  1994,   634,     0,     0,   228,
       0,     0,     0,     0,     0,     0,   336,   337,     0,     0,
       0,     0,  2052,   226,  2766,     0,     0,     0,     0,   325,
     374,   375,     0,  2534,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1359,     0,     0,
     505,     0,   507,     0,     0,  2802,     0,  1242,     0,  1263,
       0,     0,  1674,     0,  2565,   336,   337,     0,     0,   508,
       0,     0,   509,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   818,     0,     0,   820,     0,     0,   505,
       0,   507,     0,     0,     0,     0,     0,   605,     0,     0,
       0,  2115,     0,     0,  2148,     0,     0,     0,   508,     0,
       0,   509,     0,   341,     0,   200,   201,     0,     0,     0,
       0,     0,     0,   852,     0,     0,     0,     0,     0,   854,
       0,     0,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1365,     0,  2464,     0,     0,
    1978,     0,   341,     0,   200,   201,     0,     0,     0,     0,
       0,   683,     0,     0,     0,  1841,     0,     0,  1241,     0,
       0,  2493,     0,     0,  2002,     0,     0,   984,  1007,   836,
    1028,     0,     0,   191,     0,   192,     0,  1869,   193,     0,
    1262,   194,     0,   196,   197,   198,   822,     0,     0,     0,
       0,     0,   313,   314,   315,     0,   316,     0,     0,     0,
       0,     0,   597,     0,     0,  2452,     0,     0,  2481,     0,
       0,     0,     0,     0,     0,   971,   565,   332,   566,   667,
     567,   192,     0,     0,   193,  2063,   856, -2060,   195,   196,
     209,   198, -2064,   628,     0,  2766,   504,     0,   313,   314,
   -2070,     0,   316,     0,     0,     0,   240,  2543,     0,  2574,
     224,     0,     0,     0,  1517,     0,  1546,     0,     0,     0,
       0,  2534,     0,     0,     0,     0,   336,   337,  1513,     0,
    1542,  2802,     0,     0,     0,     0,     0,     0,     0,  1363,
       0,     0,     0,     0,  1221,     0,     0,  2127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2565,     0,  1975,
     505,  1999,   507,     0,   782,     0,     0,     0,     0,     0,
    1519,     0,     0,     0,     0,     0,     0,     0,     0,   508,
    2160,     0,   509,     0,     0,   601,   824,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1012,     0,     0,
     859,     0,  2060,  1548,     0,  1573,     0,   323,   503,     0,
     332,  1009, -1858,     0,   192,     0,   632,   239,  1032,     0,
       0,     0,   196,   197,  1670,  1357,     0,     0,     0,     0,
       0,     0,  1030,     0,     0,   200,   201,  1458,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   681,     0,     0,     0,   599,
     374,   375,     0,     0,   818,   504,     0,     0,     0,   341,
       0,   200,   201,  2124,     0,     0,  2264,     0,     0,     0,
       0,     0,  1515,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   630,   336,   337,  2766,  1643,     0,
    2802,     0,  2157,     0,     0,     0,     0,   852,     0,     0,
    1676,  1544,     0,   503,     0,     0,     0,     0,     0,   192,
     327,     0,     0,     0,     0,     0,     0,     0,   197,   505,
       0,   507,     0,   679,     0,     0,   606,  1836,  1361,  1571,
     971,   565,   332,   566,   191,   567,   192,     0,   508,   193,
     603,   509,   194,   195,   196,     0,   198,   199,     0,  1865,
       0,     0,     0,   313,   314,   315,     0,   316,     0,     0,
       0,   636,     0,     0,     0,  1511,   375,  1540,     0,     0,
     504,     0,     0, -1860,     0,   634,     0,   822,     0,     0,
    1011,     0,     0,  1031,     0,  1049,     0,     0,     0,     0,
       0,  2262,   341,     0,   200,   201,     0,     0,     0,     0,
     336,   337,     0,     0,  1842,     0,     0,  1242,   503,     0,
     332,     0,   250,     0,   192,     0,     0,   239,     0,     0,
     856,     0,   196,   197,  1848,   984,  1870,     0,     0,  1263,
       0,     0,  1674,     0,   505,   506,   507,     0,     0,  1413,
       0,     0,     0,     0,     0,     0,  1876,     0,  1007,     0,
       0,  1359,     0,   508,     0,     0,   509,     0,     0,     0,
       0,     0,  2464,     0,     0,     0,     0,   984,     0,  1028,
     374,   375,     0,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1978,     0,     0,
       0,  2493,     0,     0,     0,     0,     0,     0,   820,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,   200,
     201,     0,   854,     0,  2055,     0,  2002,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2063,   341,  2779,   200,   201,     0,   505,
       0,   507,     0,     0,  2543,     0,     0,     0,  1976,     0,
    2000,     0,  1668,     0,     0,     0,     0,     0,   508,     0,
       0,   509,  1973,     0,  1997,     0,  2815,     0,     0,     0,
       0,     0,     0,     0,     0,  2574,  2096,   565,   332,   566,
     191,   567,   192,     0,     0,   193,     0,     0,   194,   195,
     196,   197,   198,   199,  1841,  2118,     0,   597,     0,   313,
     314,   315,     0,   316,   312,     0,   332,  1413,   191,     0,
     192,     0,   341,   193,   200,   201,   194,  1241,   196,     0,
     198,     0,  2127,  1869,  2151,  2160,     0,   313,   314,   315,
       0,   316,   628,     0,     0,   240,     0,     0,   374,   375,
       0,     0,     0,   504,     0,  1262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2264,   374,   375,     0,     0,
       0,     0,  2125,   336,   337,  1672,     0,     0,     0,     0,
    1847,  1517,     0,     0,     0,     0,  2122,     0,     0,     0,
       0,     0,     0,     0,     0,  1513,     0,     0,     0,     0,
       0,  2158,  1875,     0,     0,     0,     0,   505,     0,   507,
    1546,     0,     0,     0,     0,  2155,     0,     0,     0,     0,
     601,     0,     0,  2257,  1542,  1363,   508,  2461,     0,   509,
    1975,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2464,     0,     0,  2493,
       0,  2490,     0,     0,  1999,   632,     0,     0,     0,     0,
       0,     0,     0,     0,  1670,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2779,     0,     0,     0,
     341,     0,   200,   201,     0,     0,     0,     0,     0,  1012,
       0,     0,  1032,     0,   681,     0,     0,     0,  1838,  1357,
       0,     0,  2543,  1009,     0,     0,  1030,     0,   341,     0,
     200,   201,  2815,     0,     0,  2060,     0,     0,     0,  1971,
    1867,  1995,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2539,  2574,  2570,
       0,     0,     0,  1458,     0,     0,   818,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     852,     0,  2053,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2124,     0,     0,
       0,     0,   971,   565,   332,   566,   191,   567,   192,     0,
       0,   193,     0,     0,   194,   195,   196,   197,   198,   199,
    1515,   522,     0,     0,     0,   313,   314,   315,     0,   316,
    2157,     0,     0,   240,     0,   971,   565,   332,   566,   667,
     567,   192,  1361,     0,   193,     0,  1836, -2035,   195,   196,
     197,   198, -2039,  1544,     0,  1571,     0,     0,   313,   314,
   -2046,     0,   316,  2116,   374,   375,   240,     0,   503,     0,
     332,     0,  1511,     0,   192,  1865,     0,   239,     0,     0,
       0,     0,   196,   197,     0,     0,     0,     0,     0,   822,
       0,     0,  2149,     0,     0,     0,     0,     0,     0,   240,
       0,  1540,     0,   856,     0,  2057,     0,     0,  2779,     0,
       0,  2815,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1842,     0,     0,     0,     0,     0,     0,
     374,   375,     0,     0,     0,   504,  2262,     0,     0,     0,
    2390,     0,     0,     0,     0,     0,  1242,     0,     0,     0,
       0,     0,  1870,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,  2396,
    1674,     0,     0,     0,  1263,     0,     0,  1359,   984,  2455,
    1007,     0,     0,  1028,     0,     0,  2120,     0,     0,     0,
    1793,  2255,     0,     0,     0,     0,     0,     0,     0,   505,
       0,   507,     0,  2484,     0,     0,   341,     0,   200,   201,
       0,     0,     0,     0,     0,  2153,     0,     0,   508,     0,
       0,   509,     0,     0,     0,     0,     0,     0,   761,   774,
       0,     0,  1668,     0,     0,     0,     0,     0,     0,   341,
       0,   200,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1860,     0,     0,  2462,     0,     0,  1976,
       0,     0,     0,     0,     0,     0,     0,  2055,     0,     0,
    2459,     0,   341,  1973,   200,   201,     0,     0,  1877,  1841,
    2491,     0,     0,  2000,     0,  1869,     0,     0,  1885,  1886,
       0,  1887,     0,     0,  2488,     0,     0,  1997,     0,     0,
       0,     0,     0,   971,   565,   332,   566,   667,   567,   192,
       0,     0,   193,     0,  2259,     0,   195,   196,   197,   198,
   -2039,  1917,  1918,     0,     0,  1922,   313,   314, -2046,  2118,
     316,     0,  2461,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     877,     0,  1948,     0,     0,  1672,     0,  1975,     0,     0,
       0,  2490,  2151,     0,     0,     0,  2541,   522,  2572,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2537,     0,  2568,     0,     0,     0,  1999,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2389,     0,     0,     0,
       0,     0,     0,  2060,     0,  2775,  2125,     0,     0,     0,
       0,     0,     0,     0,  2539,     0,     0,     0,     0,     0,
    2122,     0,     0,     0,     0,  2395,     0,     0,     0,  1517,
       0,     0,     0,     0,     0,     0,  2811,     0,     0,  2158,
       0,     0,     0,  1513,     0,  2570,     0,     0,     0,     0,
       0,     0,     0,  2155,     0,     0,     0,     0,     0,     0,
       0,     0,  1546,     0,     0,     0,     0,     0,  2257,     0,
       0,     0,     0,     0,     0,     0,  1542,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2124,     0,     0,  2157,     0,     0,     0,     0,
       0,     0,  1670,     0,     0,     0,     0,   341,     0,   200,
     201,     0,     0,     0,     0,     0,     0,  1838,     0,     0,
       0,     0,     0,     0,     0,  1357,     0,  2453,     0,     0,
    1971,     0,     0,     0,     0,  2262,   971,   565,   332,   566,
     667,   567,   192,     0,     0,   193,  1867,     0,     0,   195,
     196,  2482,   198, -2064,  1995,     0,     0,     0,     0,   313,
     314, -2070,     0,   316,     0,     0,     0,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2175,  2176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1351,
       0,  1836,     0,     0,   761,  2053,  2461,  1865,     0,  2490,
       0,     0,     0,     0,     0,     0,     0,   774,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2535,     0,  2566,
       0,     0,     0,     0,     0,     0,  2775,     0,  1361,     0,
    2457,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2273,     0,     0,     0,  2455,     0,     0,     0,     0,     0,
       0,     0,  2539,     0,  2486,     0,     0,  2116,     0,     0,
       0,     0,  2811,     0,     0,     0,     0,     0,  1842,     0,
       0,     0,     0,  2484,  1870,     0,     0,     0,     0,     0,
    1511,     0,     0,     0,     0,     0,     0,     0,  2570,     0,
    2149,     0,     0,     0,     0,     0,     0,     0,     0,  1426,
    1449,     0,     0,     0,     0,     0,     0,     0,     0,   877,
       0,     0,     0,  1540,     0,  2055,     0,  2769,  2057,     0,
     341,  2462,   200,   201,     0,     0,     0,     0,     0,   354,
       0,     0,     0,   381,     0,  2459,     0,     0,   468,     0,
       0,     0,     0,  2336,     0,     0,  1976,     0,  2805,     0,
    2491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1973,     0,     0,     0,  2488,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2000,     0,     0,     0,     0,
    2120,     0,   522,     0,     0,     0,     0,     0,     0,  1997,
       0,     0,     0,     0,  2777,  2373,  2255,     0,     0,     0,
       0,     0,  2379,  2541,  2118,     0,     0,  2151,  2773,     0,
       0,     0,     0,  2153,     0,     0,     0,  2537,     0,     0,
       0,     0,     0,     0,     0,  2813,     0,     0,     0,     0,
    1668,     0,     0,     0,  2572,     0,     0,     0,  2775,  2809,
       0,  2811,     0,     0,     0,     0,     0,  2257,  2568,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2125,     0,  2408,  2158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2122,     0,     0,  2155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2259,
       0,     0,     0,  2425,     0,   354,     0,     0,  2455,     0,
       0,  2484,     0,     0,     0,     0,     0,     0,  2432,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1672,   762,   775,     0,     0,  2769,   381,
    1703,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2453,     0,  2805,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2462,     0,     0,  2491,     0,
       0,     0,     0,     0,     0,     0,     0,  1971,     0,  2459,
       0,  2482,  2488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   813,     0,  2777,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,  1995,     0,     0,  2773,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2541,  1838,  2053,     0,  2767,     0,     0,  1867,  2581,
    2582,  2813,     0,     0,  2535,  2537,   878,     0,     0,     0,
       0,     0,     0,     0,   931,  2809,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2803,  2572,     0,     0,
       0,     0,     0,     0,     0,  2566,     0,     0,     0,     0,
       0,  2568,     0,     0,     0,  2457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   978,  1001,     0,
    1022,  1041,  1058,  1072,  2486,  1087,     0,     0,     0,     0,
       0,     0,  2116,     0,     0,  2149,     0,     0,     0,     0,
       0,     0,     0,     0,  1113,     0,  2612,     0,     0,     0,
    2769,     0,     0,  2805,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1351,     0,     0,  2057,     0,  2771,     0,
       0,     0,     0,     0,     0,  2255,     0,     0,     0,     0,
       0,     0,     0,  1963,     0,  1987,   761,     0,   774,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2807,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2047,  2777,     0,     0,
    2813,     0,     0,     0,     0,     0,     0,     0,  1426,     0,
       0,  2773,     0,     0,  2809,     0,     0,     0,  1233,     0,
    1255,     0,     0,     0,     0,  2120,  2453,     0,  2153,  2482,
       0,  1449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   877,     0,     0,
       0,     0,     0,     0,     0,     0,  2767,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,     0,
       0,     0,  2535,     0,     0,  1352,  2681,     0,  2683,     0,
     762,     0,  2803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   775,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2566,   381,
    2697,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   813,     0,     0,     0,     0,     0,
       0,     0,     0,  2703,     0,     0,     0,     0,     0,  2457,
       0,     0,  2486,     0,     0,     0,   462,     0,     0,     0,
       0,  2712,   468,     0,     0,   513,     0,     0,     0,  2717,
       0,     0,     0,  2722,     0,     0,     0,     0,     0,  2771,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1427,  1450,     0,     0,     0,
       0,     0,     0,     0,     0,   878,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2807,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2730,     0,     0,     0,     0,  1505,     0,  1534,  1562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   931,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2767,     0,
       0,  2803,     0,     0,     0,     0,  2300,     0,     0,   358,
       0,     0,     0,   385,     0,  1703,     0,     0,   474,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   978,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1001,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2831,     0,     0,     0,     0,     0,     0,   978,     0,  1022,
       0,     0,     0,  2842,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2853,     0,  1041,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1058,     0,     0,     0,     0,
       0,  2771,     0,     0,  2807,     0,     0,     0,     0,  1072,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1634,     0,  1087,     0,     0,     0,     0,  2891,
    2892,  2893,  2894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1663,     0,     0,     0,     0,     0,  2910,     0,
       0,     0,  1113,     0,     0,     0,     0,     0,     0,     0,
       0,   807,     0,     0,     0,     0,  1704,   462,     0,     0,
       0,     0,     0,     0,     0,  2951,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   837,     0,     0,   865,     0,     0,     0,     0,     0,
       0,     0,   918,     0,   768,   783,     0,     0,     0,   385,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1351,
       0,  2445,     0,     0,  1963,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1830,     0,     0,  1233,     0,
       0,     0,     0,     0,     0,  2474,     0,     0,  1987,     0,
    2977,     0,  2979,     0,     0,     0,     0,  1859,     0,     0,
    1255,     0,  1104,   825,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,  2989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   883,     0,     0,  2047,
       0,     0,  3010,     0,   937,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2527,     0,  2558,     0,  1426,     0,  1449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1352,
       0,     0,     0,     0,     0,     0,     0,   993,  1013,     0,
    1033,  1050,  1064,  1077,     0,  1092,     0,     0,     0,  1965,
       0,  1989,   762,     0,   775,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   813,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2048,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1427,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1450,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   878,     0,     0,     0,     0,     0,     0,
       0,     0,   807,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1243,     0,
    1264,     0,     0,  2110,     0,     0,     0,     0,     0,     0,
     462,     0,  1505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   837,     0,     0,     0,     0,
       0,     0,  2143,     0,     0,     0,     0,     0,     0,     0,
       0,  1534,     0,  1414,  1437,     0,     0,     0,     0,     0,
       0,     0,     0,   865,     0,     0,     0,     0,   358,     0,
    2300,     0,     0,     0,     0,  1364,     0,     0,     0,  1562,
     768,     0,     0,     0,     0,  1703,     0,     0,     0,     0,
       0,     0,     0,   783,     0,     0,     0,   931,     0,     0,
       0,     0,     0,  1492,     0,  1521,  1549,     0,     0,   385,
       0,     0,     0,     0,     0,     0,   918,     0,     0,     0,
       0,     0,     0,     0,   825,     0,     0,     0,   978,     0,
    1001,     0,     0,  1022,     0,  1041,   513,  1058,     0,  1072,
       0,  2249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1634,   474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1663,     0,     0,  1435,  1459,     0,     0,     0,
       0,     0,     0,     0,     0,   883,     0,     0,     0,  1113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2301,     0,     0,     0,  2445,     0,     0,     0,
       0,  1704,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1518,     0,  1547,  1572,     0,
       0,  1963,     0,     0,     0,  2474,     0,     0,   937,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2047,     0,  2759,
    1654,     0,     0,     0,     0,   993,     0,     0,  2527,     0,
    1104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1691,     0,     0,     0,  1013,     0,
    2795,     0,     0,     0,     0,     0,     0,     0,     0,  2558,
       0,     0,     0,     0,     0,     0,     0,   993,     0,  1033,
       0,     0,     0,     0,  1830,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1050,     0,
       0,     0,     0,     0,     0,     0,     0,  1233,     0,     0,
       0,     0,     0,  1859,     0,  1064,     0,     0,   526,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1077,
       0,     0,     0,     0,     0,  1255,     0,     0,     0,     0,
       0,     0,  1642,   604,  1092,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1675,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1119,  2300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1709,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1352,     0,  2447,     0,     0,
    1965,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2445,  2476,     0,  2474,  1989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2759,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1843,     0,     0,  1243,     0,
       0,     0,     0,     0,     0,     0,  2527,     0,     0,     0,
       0,     0,     0,     0,     0,  2048,  2795,  1871,     0,     0,
    1264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   807,     0,     0,  2529,     0,  2560,
       0,  1427,  2558,  1450,     0,     0,     0,     0,   837,     0,
    2035,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1414,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2110,     0,     0,
       0,     0,     0,     0,     0,  1437,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1505,   865,     0,     0,     0,     0,     0,     0,     0,     0,
    2143,     0,     0,   514,   530,     0,     0,     0,     0,  1364,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2097,     0,  1534,     0,  1562,     0,     0,     0,  1977,
    1492,  2001,   768,     0,   783,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   858,     0,     0,   882,     0,     0,
    2130,   911,     0,     0,     0,   936,   825,     0,     0,  1521,
       0,     0,     0,     0,   526,     0,     0,     0,     0,     0,
       0,     0,  2062,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2759,     0,  1435,  2795,     0,  1549,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   918,  2249,  1459,     0,  1010,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   883,     0,     0,     0,     0,  1634,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1663,     0,     0,   604,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2126,     0,     0,  2301,     0,     0,     0,
       0,     0,  1518,     0,     0,     0,     0,     0,     0,   843,
       0,  1704,   871,   894,     0,     0,     0,     0,     0,     0,
     924,     0,  2159,     0,     0,     0,     0,     0,     0,     0,
    1654,  1547,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1572,
    2286,     0,     0,     0,     0,     0,     0,     0,     0,  1691,
       0,     0,     0,     0,     0,     0,     0,   937,     0,  1240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1830,
       0,     0,     0,     0,     0,  1859,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,     0,
    1013,     0,     0,  1033,     0,  1050,     0,  1064,     0,  1077,
       0,  2263,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1642,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2447,     0,     0,     0,  1092,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1675,     0,     0,     0,     0,  1965,     0,   838,
       0,  2476,   866,     0,     0,     0,   906,     0,     0,  1119,
     919,     0,     0,  1379,     0,  1381,  1387,  1389,     0,   514,
       0,     0,  2308,     0,     0,     0,  1989,     0,     0,     0,
       0,  1709,     0,     0,     0,     0,   530,     0,     0,     0,
       0,     0,     0,  2048,     0,  2761,     0,     0,     0,     0,
       0,     0,     0,     0,  2529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   858,     0,
       0,     0,     0,     0,     0,     0,  2797,     0,     0,     0,
       0,     0,     0,     0,     0,  2560,  1433,  1457,     0,     0,
       0,     0,     0,     0,     0,     0,   882,     0,     0,     0,
       0,   839,     0,     0,   867,   891,     0,     0,     0,     0,
       0,     0,   920,     0,     0,     0,     0,     0,     0,  1476,
    1485,     0,     0,     0,     0,   911,     0,     0,     0,     0,
       0,     0,  2110,     0,     0,  2143,  1514,     0,  1543,  1570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   936,
       0,     0,     0,     0,  1843,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   526,
       0,     0,     0,     0,     0,  2249,     0,  1243,     0,     0,
       0,     0,     0,  1871,     0,     0,     0,     0,     0,  2301,
       0,     0,     0,   843,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1264,     0,     0,     0,     0,
       0,  1420,  1443,     0,     0,     0,     0,     0,     0,  1010,
       0,   871,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   894,     0,     0,
       0,     0,     0,  2035,  1474,  1483,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2447,     0,     0,  2476,
       0,  1498,     0,  1527,  1555,  2514,     0,  2545,     0,  1414,
     840,  1437,     0,   868,   924,     0,     0,     0,     0,     0,
       0,   921,     0,     0,     0,  1364,  2761,  2463,     0,     0,
    1977,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1641,     0,  2097,     0,     0,     0,     0,
       0,  2492,  2529,     0,  2001,   841,     0,     0,   869,     0,
       0,     0,  2797,     0,     0,     0,   922,     0,  1492,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2130,     0,
       0,     0,     0,     0,     0,     0,     0,  1708,  2560,     0,
       0,     0,     0,   838,     0,     0,     0,     0,     0,     0,
       0,  1521,     0,  1549,     0,     0,     0,     0,   604,     0,
       0,  1415,  1438,     0,     0,  2062,     0,     0,     0,     0,
       0,   866,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2542,     0,  2573,
       0,  1435,     0,  1459,  1472,  1481,     0,     0,     0,     0,
     906,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1493,     0,  1522,  1550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   919,     0,     0,  2126,     0,     0,
       0,     0,     0,     0,     0,     0,  1840,     0,     0,  1240,
       0,     0,     0,     0,   514,   839,   530,     0,     0,     0,
    1518,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2159,     0,  1697,  1416,  1439,     0,     0,     0,  1654,     0,
       0,     0,     0,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1547,  2286,  1572,     0,     0,  2761,   891,
       0,  2797,     0,     0,     0,     0,  1473,  1482,     0,  1691,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1494,     0,  1523,  1551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   920,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1974,     0,  1998,     0,     0,     0,     0,     0,  1642,     0,
    2008,     0,     0,     0,     0,     0,     0,  1387,     0,     0,
    1675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   840,     0,  2308,     0,     0,     0,
       0,   858,  1692,  2059,     0,     0,     0,     0,     0,     0,
       0,  1709,  1417,  1440,     0,  1433,     0,     0,     0,     0,
       0,     0,   868,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1457,   841,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   882,     0,     0,  1418,  1441,     0,
       0,     0,  1495,  1476,  1524,  1552,     0,   869,     0,     0,
       0,     0,  1485,     0,     0,   921,     0,     0,     0,     0,
       0,  2035,   911,  2746,  2123,     0,     0,     0,     0,  1843,
       0,     0,  2514,  1514,     0,  1871,     0,     0,     0,     0,
       0,     0,     0,     0,  1693,     0,     0,  1496,     0,  1525,
    1553,     0,     0,  2156,  2782,     0,     0,     0,     0,     0,
     922,     0,  1543,  2545,     0,     0,   843,     0,  2041,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1420,     0,  2463,     0,     0,     0,     0,     0,     0,     0,
    1570,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1443,     0,     0,     0,  1977,   936,     0,
    2097,  2492,     0,  2130,     0,     0,     0,     0,     0,   871,
       0,     0,     0,     0,   894,     0,     0,     0,  1474,     0,
       0,     0,     0,     0,     0,     0,  2001,  1483,     0,     0,
       0,  1010,     0,     0,     0,     0,     0,     0,     0,  2103,
       0,     0,  2261,  2062,     0,  2778,     0,     0,  1498,     0,
       0,     0,  1641,     0,  2542,     0,     0,  2286,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2136,     0,
       0,     0,     0,     0,     0,     0,  2814,  1527,     0,     0,
       0,     0,     0,     0,     0,  2573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1694,     0,  1555,     0,     0,     0,     0,
       0,     0,     0,  2307,     0,     0,   838,     0,  2036,     0,
       0,     0,  1708,   924,     0,     0,     0,     0,     0,     0,
    1415,     0,  2126,     0,     0,  2159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1695,     0,
       0,     0,     0,  1438,  2746,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   866,
       0,     0,     0,     0,     0,  2263,     0,     0,  1472,     0,
    2514,     0,     0,     0,     0,     0,     0,  1481,     0,  2308,
    2782,     0,     0,     0,     0,     0,     0,   906,     0,  2098,
       0,     0,     0,     0,     0,     0,   842,     0,  1493,   870,
       0,     0,     0,     0,     0,     0,  2545,   923,   839,     0,
    2037,     0,     0,     0,     0,     0,     0,     0,  2131,     0,
       0,     0,  1416,     0,     0,     0,     0,  1522,  2292,     0,
       0,     0,     0,     0,     0,  1840,     0,  1697,     0,     0,
       0,     0,     0,     0,     0,  1439,  2463,     0,     0,  2492,
       0,     0,     0,     0,     0,  1550,     0,     0,  1240,     0,
       0,   867,     0,     0,     0,     0,   891,     0,     0,     0,
    1473,     0,     0,   919,     0,     0,  2778,     0,     0,  1482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2099,     0,     0,     0,     0,     0,     0,     0,     0,
    1494,     0,  2542,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2814,     0,     0,     0,     0,     0,     0,     0,
    2132,     0,     0,     0,     0,     0,     0,     0,     0,  1523,
       0,     0,     0,     0,     0,     0,     0,  2360,  2573,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2746,  1551,     0,  2782,
       0,     0,     0,     0,     0,     0,     0,     0,  2460,     0,
       0,  1974,     0,     0,     0,   920,     0,   840,     0,  2038,
       0,     0,     0,     0,     0,     0,     0,     0,  2287,     0,
       0,  1417,  2489,     0,     0,  1998,     0,  1692,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1440,     0,     0,     0,     0,     0,
       0,     0,   841,  1387,  2039,     0,     0,     0,     0,     0,
     868,     0,     0,     0,     0,     0,  1418,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2059,     0,     0,  1441,
    2100,     0,     0,     0,     0,     0,     0,     0,     0,  1495,
       0,     0,     0,     0,     0,   869,     0,     0,  2538,     0,
    2569,     0,  1433,     0,  1457,     0,     0,     0,  2778,  2133,
    2288,  2814,     0,     0,  1476,     0,     0,  1485,  1524,  1693,
       0,     0,     0,     0,     0,  2101,     0,     0,     0,     0,
       0,     0,     0,     0,  1496,     0,     0,     0,  2123,     0,
       0,     0,     0,     0,     0,     0,  1552,     0,     0,     0,
       0,     0,     0,     0,  2134,     0,     0,     0,     0,     0,
       0,  1514,     0,  1525,   921,     0,     0,     0,     0,     0,
     842,  2156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1419,  1442,
       0,  1553,     0,     0,  1543,     0,  1570,     0,   870,     0,
       0,  2041,     0,     0,     0,     0,     0,     0,     0,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2520,     0,  2551,     0,  1420,     0,  1443,
       0,     0,     0,     0,     0,     0,     0,     0,  1497,  1474,
    1526,  1554,  1483,     0,     0,     0,     0,     0,     0,     0,
       0,   923,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2261,     0,  2289,
       0,     0,     0,     0,     0,     0,  1498,     0,  1694,     0,
       0,     0,     0,     0,     0,     0,  2136,     0,     0,  1641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1527,
       0,  1555,     0,     0,  2290,     0,     0,  2307,     0,     0,
       0,     0,     0,  1695,     0,     0,     0,     0,     0,     0,
       0,     0,  1708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2036,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2515,     0,  2546,     0,  1415,     0,  1438,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1472,
       0,     0,  1481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1840,     0,     0,  2098,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1493,     0,     0,  1696,
       0,     0,  2292,     0,     0,     0,  2131,     0,     0,     0,
       0,     0,     0,  2037,     0,     0,     0,  1697,     0,     0,
       0,     0,     0,  2460,     0,     0,     0,     0,     0,  1522,
       0,  1550,     0,     0,     0,  2516,     0,  2547,     0,  1416,
       0,  1439,     0,     0,     0,     0,     0,     0,  1974,     0,
       0,  1473,  2489,     0,  1482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2360,     0,     0,     0,     0,  2099,     0,  1998,     0,     0,
       0,     0,     0,     0,     0,     0,   929,     0,     0,     0,
       0,     0,     0,     0,  2059,     0,  2774,     0,  1494,     0,
       0,     0,     0,     0,     0,  2538,     0,     0,  2132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2810,     0,     0,
       0,  1523,     0,  1551,     0,     0,  2569,     0,     0,   976,
     999,     0,  1020,  1039,  1056,  1070,     0,  1085,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1692,     0,     0,
       0,     0,  2038,  2123,     0,     0,  2156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2517,     0,  2548,     0,  1417,     0,
    1440,     0,     0,     0,     0,     0,     0,     0,     0,  2041,
       0,  2752,     0,     0,     0,     0,  2261,  2039,     0,     0,
    2520,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2307,     0,     0,     0,  2100,     0,     0,     0,     0,  2518,
       0,  2549,  2788,  1418,     0,  1441,     0,     0,     0,     0,
       0,  2551,     0,     0,  2288,     0,     0,  1495,     0,     0,
    1231,     0,  1253,     0,     0,     0,     0,  2133,     0,  1693,
       0,     0,     0,   842,     0,  2040,     0,     0,     0,  2101,
       0,     0,     0,     0,     0,     0,     0,  1419,     0,     0,
    1524,     0,  1552,     0,     0,     0,     0,  2460,  2103,     0,
    2489,  2136,  1496,     0,     0,     0,     0,     0,     0,     0,
    1442,     0,  2134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   870,  2774,     0,     0,
       0,     0,     0,     0,     0,  1525,     0,  1553,     0,     0,
       0,     0,   930,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2538,     0,  2292,  2102,     0,     0,     0,
       0,     0,     0,  2810,     0,  1497,     0,     0,     0,  2036,
       0,  2747,     0,     0,     0,     0,     0,     0,     0,     0,
    2515,     0,     0,     0,     0,  2135,     0,  2360,     0,  2569,
       0,     0,     0,     0,  1526,   977,  1000,     0,  1021,  1040,
    1057,  1071,  2783,  1086,     0,     0,     0,     0,     0,     0,
       0,  2546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1554,  2289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1694,     0,
     923,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2752,     0,     0,     0,     0,     0,  2098,     0,
       0,  2131,     0,     0,     0,     0,     0,     0,  2290,     0,
       0,  2037,     0,  2748,     0,     0,     0,     0,  2520,     0,
       0,     0,  2516,  1695,     0,     0,     0,  1503,  2788,  1532,
    1560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     929,     0,     0,     0,  2784,     0,     0,     0,     0,     0,
       0,     0,     0,  2547,  2551,  2287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1232,     0,  1254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2774,
       0,     0,  2810,     0,     0,     0,     0,   976,     0,     0,
       0,     0,     0,     0,     0,  2291,     0,     0,     0,     0,
    2099,     0,     0,  2132,  1696,     0,     0,     0,     0,     0,
     999,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   976,
       0,  1020,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1039,     0,  2747,     0,     0,     0,     0,  2288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1056,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2515,     0,
    2038,  1070,  2749,     0,     0,     0,     0,     0,  2783,     0,
       0,  2517,     0,     0,  1632,     0,  1085,     0,     0,     0,
       0,     0,     0,     0,  2752,     0,     0,  2788,     0,     0,
       0,     0,     0,  2785,  2546,     0,     0,     0,     0,     0,
       0,     0,  2548,     0,     0,  2039,     0,  2750,     0,     0,
       0,     0,     0,     0,     0,     0,  2518,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2748,     0,     0,     0,  2786,     0,
       0,     0,     0,     0,     0,     0,     0,  2549,     0,  2100,
       0,     0,  2133,     0,     0,     0,     0,     0,     0,     0,
    2516,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2784,     0,     0,  1504,     0,  1533,  1561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   930,     0,     0,     0,
       0,     0,     0,     0,  2101,     0,  2547,  2134,     0,     0,
       0,     0,     0,     0,     0,     0,  2289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1828,     0,     0,
    1231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   977,     0,     0,     0,     0,     0,  1857,
       0,     0,  1253,     0,  2747,     0,     0,  2783,     0,     0,
       0,  2290,     0,     0,     0,     0,  1000,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   977,     0,  1021,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1040,     0,     0,     0,
       0,     0,     0,  2749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1057,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1071,  2040,  2517,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2785,
    1633,     0,  1086,     0,     0,     0,  2748,     0,  2750,  2784,
    2519,     0,  2550,     0,  1419,     0,  1442,     0,     0,     0,
       0,  1961,     0,  1985,     0,  2548,     0,     0,     0,     0,
       0,     0,     0,     0,  2518,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2786,     0,     0,     0,     0,     0,
    2102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2549,     0,     0,  1497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1526,     0,  1554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1829,     0,  2108,  1232,     0,     0,     0,
       0,     0,     0,     0,  1503,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1858,     0,     0,  1254,     0,
       0,     0,     0,     0,  2141,  2749,     0,     0,  2785,     0,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1560,     0,     0,     0,     0,     0,     0,     0,     0,
    2750,     0,     0,  2786,     0,     0,     0,     0,     0,   929,
       0,     0,     0,     0,     0,     0,     0,     0,   932,  2291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1696,     0,     0,     0,     0,     0,
     976,     0,   999,     0,     0,  1020,     0,  1039,     0,  1056,
       0,  1070,     0,  2247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1632,     0,     0,     0,  1964,     0,  1988,
       0,   979,  1002,     0,  1023,  1042,  1059,  1073,  1085,  1088,
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
       0,  2109,     0,     0,     0,     0,     0,     0,     0,     0,
    1504,     0,  1234,     0,  1256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2142,     0,     0,     0,     0,     0,     0,     0,     0,  1533,
       0,     0,     0,     0,     0,     0,  2040,     0,  2751,     0,
       0,     0,     0,     0,     0,     0,     0,  2519,     0,     0,
       0,     0,     0,     0,     0,     0,  1828,  1561,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2787,
       0,     0,     0,     0,     0,   930,     0,     0,  2550,  1231,
       0,     0,     0,     0,     0,  1857,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   977,  1253,  1000,     0,
       0,  1021,     0,  1040,     0,  1057,     0,  1071,     0,  2248,
       0,     0,     0,     0,     0,  2102,     0,     0,  2135,  1633,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1086,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2291,     0,     0,     0,     0,     0,     0,  2443,
       0,     0,  1961,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2472,     0,     0,  1985,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1506,
       0,  1535,  1563,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   932,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2525,
       0,  2556,     0,     0,     0,  2519,     0,     0,     0,     0,
       0,     0,  1002,     0,     0,  2787,     0,     0,     0,     0,
       0,     0,  1829,     0,     0,     0,     0,     0,     0,     0,
       0,   979,     0,  1023,     0,     0,     0,     0,     0,  2108,
       0,  2550,     0,     0,     0,  1232,     0,     0,     0,     0,
       0,  1858,  1042,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1503,     0,     0,     0,     0,     0,     0,  1059,
       0,     0,  2141,  1254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1073,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1532,  1635,  1560,  1088,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2446,     0,     0,  1964,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2247,  2475,
       0,     0,  1988,     0,     0,     0,     0,     0,     0,     0,
       0,  2751,     0,     0,  2787,     0,     0,     0,     0,     0,
    1632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1831,
       0,     0,  1234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1860,     0,     0,  1256,  2528,     0,  2559,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1828,     0,     0,     0,     0,     0,  1857,  1504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1533,     0,  1561,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2443,     0,     0,     0,     0,     0,
       0,     0,     0,  1966,     0,  1990,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1961,
       0,     0,     0,  2472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1985,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2248,     0,     0,  2757,     0,     0,
       0,     0,     0,     0,     0,     0,  2525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1633,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2793,     0,
       0,     0,     0,     0,     0,     0,     0,  2556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2111,     0,     0,
       0,     0,     0,     0,     0,     0,  1506,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2108,     0,  2144,  2141,     0,     0,
       0,     0,     0,     0,     0,  1535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1563,     0,     0,     0,  2247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1829,     0,     0,
       0,   932,     0,  1858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   979,     0,  1002,     0,     0,  1023,     0,  1042,
       0,  1059,     0,  1073,     0,  2250,     0,     0,     0,     0,
    2446,     0,     0,     0,     0,  1635,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2443,     0,
    1088,  2472,     0,     0,     0,  1964,     0,     0,     0,  2475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2757,     0,
       0,     0,     0,     0,  1988,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2760,  2525,     0,     0,     0,     0,     0,
       0,     0,  2528,     0,  2793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2796,     0,     0,     0,     0,     0,
    2556,     0,     0,  2559,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2109,     0,     0,  2142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1831,     0,
       0,     0,     0,  2248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,     0,     0,     0,     0,  1860,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2757,     0,     0,  2793,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2446,     0,     0,  2475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2760,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2448,     0,     0,  1966,     0,     0,     0,     0,     0,
    2528,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2796,     0,     0,     0,     0,  2477,     0,     0,  1990,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2559,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2530,     0,  2561,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2760,     0,     0,  2796,
       0,     0,     0,     0,     0,     0,     0,  1535,     0,  1563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2250,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1635,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,  1831,     0,     0,     0,     0,     0,  1860,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1966,     0,     0,     0,  2477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1990,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2762,
       0,     0,     0,     0,     0,     0,     0,     0,  2530,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2798,     0,     0,     0,     0,     0,     0,     0,     0,  2561,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2111,     0,     0,  2144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2448,     0,     0,  2477,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2530,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2798,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2561,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,  2762,     0,     0,  2798
};

static const yytype_int16 yycheck[] =
{
     124,   153,   126,   153,   153,   153,   153,   153,   498,   153,
     153,   135,   136,   168,   138,   139,  1100,   372,   373,  1125,
    1126,   451,   146,   147,   451,   156,   168,   151,  1589,  1818,
     451,   373,   156,   372,  1270,  1410,  1818,   582,   926,   156,
    1898,   165,   973,  1125,  1126,  1422,  2211,  1629,  1520,  1529,
     190,  1125,  1126,  1226,   151,   758,  1445,   996,  1500,   156,
    1479,   771,  1384,  1684,   156,   965,   190,   967,   802,  1723,
     873,  1347,  1248,  1110,   726,   889,   216,  1822,  1036,   203,
    1660,   139,   845,   662,  1053,   156,  1082,   670,   590,  1186,
     569,  1470,   216,   648,   218,  1699,   236,  1718,   494,  1131,
    1982,  1557,  1958,  1143,  2105,  2043,  1067,  2138,  1729,  1681,
     243,   270,   236,  1712,   253,  1851,   280,  2670,  2671,   243,
    1017,   528,   511,   218,   203,   318,   297,  2244,   902,   253,
     343,   365,   306,   457,   364,   913,  1223,   915,   377,   494,
    2294,  2440,   483,  2362,  2553,    22,   270,  2469,  2522,    28,
      33,    29,   582,     7,    26,   582,   280,   621,  1245,    31,
      13,   582,    29,    28,    36,  2754,    38,    22,    23,    24,
      25,    26,    27,    28,   236,     5,    31,  2912,     8,    61,
    1733,    36,    54,    38,   913,   131,   915,   916,   175,    22,
      37,    24,    24,    26,   318,    28,   120,    26,    31,    54,
      32,    34,    31,    36,    29,    38,   124,    36,  3028,    38,
      57,   120,    45,    46,    47,  2790,    49,   559,    26,   343,
      28,     6,   280,    31,    30,    54,    34,    35,    36,    37,
      38,    39,    62,   170,    29,   214,   147,    29,    22,    23,
      24,    25,    26,    27,    28,   131,   225,    31,   372,   373,
      34,    35,    36,   377,    38,    39,    28,    16,    29,    31,
     247,    45,    46,    47,    36,    49,  3086,    29,   214,    53,
     686,    29,   688,    28,  3009,   372,   373,   214,    29,    48,
     377,    53,    37,   116,   117,   118,   119,    22,   121,    58,
      29,    17,   248,    26,   250,    28,   214,   120,    31,   132,
     133,   134,    57,   214,    37,     4,     5,     4,     5,     8,
     372,    10,    34,    10,    29,    29,   248,    14,   250,    29,
     451,    37,   200,   247,    46,    47,   457,   451,    50,    51,
      52,    29,   214,   457,   451,    22,    29,   216,   247,    29,
     457,    57,     7,    22,    23,    24,    25,    26,    27,    28,
      37,   216,    31,    28,    89,   147,   228,    83,   225,   451,
     457,   214,    37,    62,   247,   457,    29,   491,   247,   247,
     494,   226,   802,   228,   229,   802,   230,  2966,   502,   256,
     451,   802,    57,    29,   256,   147,   457,   511,    29,   214,
      83,    29,   547,   226,  2969,   228,   229,   494,   753,   228,
     230,   256,    89,   758,   546,  2727,  2780,  2816,   214,   256,
     145,   146,   902,   147,   143,   247,   771,   131,    83,   758,
     228,   229,   214,   256,   247,  2724,   151,   152,   120,   771,
     225,   555,   556,   120,   558,   559,   560,   561,    22,   563,
     175,     0,   226,   214,   228,   229,   147,   249,   256,   200,
     590,   582,   214,    37,   225,   148,   228,   229,   582,    48,
     189,   190,  2627,   225,  2629,   582,   590,   863,   864,    58,
    2689,   147,   256,   228,   229,   167,    18,   873,   247,   120,
     214,   621,   249,   148,   256,   131,   225,    29,   175,   214,
     582,   225,   249,   834,   618,   228,   229,   621,   148,   225,
     214,   256,   167,  2657,   131,    89,   830,   199,   863,   864,
     225,   582,   247,   214,   638,   225,  1752,   751,   873,   749,
     249,   147,   864,   256,   863,   201,  2643,   225,   225,   249,
     670,   230,   225,   746,   256,   225,   120,   708,   702,   618,
     699,   948,   735,   638,   718,   148,   670,   226,   787,   228,
     229,  2409,  3105,   228,   229,   120,   695,   946,   691,   200,
     247,   147,   686,   195,   688,  1110,   147,   691,   214,     7,
       8,   695,  2603,  2511,   916,   699,  1660,   256,   702,   225,
      22,    23,    24,    25,    26,    27,    28,   214,   214,    31,
    1714,   175,    34,    35,    36,   249,    38,    39,   225,  2600,
      29,  1725,    24,    45,    46,    47,  1712,    49,   670,  2465,
      32,   735,  2494,   753,  1715,   247,    26,  1723,    28,  1098,
    1716,    31,   746,    29,   686,  1726,   688,    37,   214,   753,
    1712,  1727,  1410,   214,   758,   131,  1219,  1216,  1712,    29,
    1677,  1723,  2387,  1145,   702,  1408,  1615,   771,  1644,  1723,
    1080,  1206,  1466,  1080,  1306,  1613,  1617,  2393,  1461,  1080,
    1394,   758,  1372,   787,  2318,  2084,  2138,  1370,  2043,  1608,
    1100,   802,  1845,  1100,   771,  1606,  2297,  1953,   802,  1100,
    1110,  2161,  2071,  1110,  2266,   802,  2128,  1575,  2010,  1110,
     787,   753,  2069,  2858,  1036,  2860,   758,  1873,  2278,   830,
    1797,  1601,  2081,  1603,  1736,  2309,   830,  2163,  1748,  2281,
     802,    22,  2311,   830,  1611,  1489,  1180,   171,   195,   249,
    1136,   845,  1500,   201,    87,    88,    89,    90,  1124,     4,
       5,   802,   210,   830,   247,  1822,   195,   250,   830,   863,
     864,    22,    23,    24,    25,    26,    27,    28,   249,   873,
      31,  1529,   249,    34,    35,    36,    37,    38,    39,   830,
     214,    29,   249,    26,  1851,    28,   863,   864,    31,  1124,
     247,  1500,    53,    36,  2327,  2328,   873,   247,    89,   167,
     250,    22,  1121,   249,   226,   249,   228,   229,   247,   913,
      53,   915,   916,    26,     5,    28,    37,     8,    31,   249,
    1529,  2354,   926,    36,   192,   193,   194,  1223,   146,    29,
    1226,   168,   967,    29,   256,    83,   173,   174,   228,   229,
      53,   247,   946,   965,   250,    55,    56,  2992,  1557,  1245,
    2688,   249,  1248,   214,   145,   146,   217,   249,   142,   143,
     144,    22,    23,    24,    25,    26,    27,    28,    89,   973,
      31,   247,   190,   214,   250,    36,    37,    22,    23,    24,
      25,    26,    27,    28,   175,   249,    31,   249,  1955,    34,
      35,    36,   996,    38,    39,   142,   143,   144,   216,   120,
     148,   149,   150,  2672,   247,   189,   190,   250,    53,   168,
    2672,  1015,  1979,  1017,   173,   174,     4,     5,   236,   167,
       8,    22,    23,    24,    25,    26,    27,    28,   247,   214,
      31,   250,  1036,    34,    35,    36,    37,    38,    39,    87,
      88,    89,    90,   249,    45,    46,    47,   247,    49,  1053,
     250,   249,    53,   249,   175,   116,   117,   118,   247,   247,
     121,   250,   250,  1067,   207,   226,   249,   228,   229,  1080,
      29,   132,   133,   134,     7,     8,  1080,   225,  1082,    87,
      88,    89,    90,  1080,  1394,   228,   229,  1394,   127,  1100,
     249,   130,   214,  1394,   207,   256,  1100,   167,   247,  1110,
     318,   250,   247,  1100,   247,   250,  1110,   249,  1080,   142,
     143,   144,  1347,  1110,   249,   228,   229,  1121,   247,  1489,
    1124,   250,   192,   193,   194,  1145,   247,   247,  1100,  1080,
     250,   214,  1367,   247,  1369,  1370,   250,  1372,  1110,    22,
     249,  1145,    29,    26,    29,    28,  1422,  1124,    31,  1100,
    1372,  1370,   249,    36,   214,    38,   189,   190,   214,  1110,
    1180,  2513,    45,    46,    47,   226,    49,   228,   229,  1445,
      53,   226,   227,   228,   229,  1410,  1180,   247,   249,  1121,
     249,   226,    22,   228,   229,  1461,    26,  1422,  2629,   120,
     247,    31,  2544,   250,    34,   256,    36,   247,    38,  1219,
     250,    26,    29,  1422,   214,    45,    46,    47,   249,    49,
    1445,   256,   249,    18,   247,  1219,    21,   247,   249,  1223,
     250,    26,  1226,  1445,    29,   226,  1461,   228,   229,   168,
     249,  2664,   249,   451,   173,   174,  2669,  2670,  2671,   247,
     248,  1245,   247,  2912,  1248,   250,    28,   247,    33,    31,
     250,  2603,  1677,   249,    36,   256,  2511,    22,   214,    22,
      23,    24,    25,    26,    27,    28,    40,    41,    42,    43,
      44,    53,    37,   491,     4,     5,   247,  1219,    24,   250,
      26,  1223,    28,   249,  1226,   249,  2402,   214,    22,    23,
      24,    25,    26,    27,    28,   247,   247,    31,   250,   250,
      34,    35,    36,  1245,    38,    39,  1248,   247,   247,  1619,
     250,   214,  1619,    34,  2278,   218,   219,   220,  1619,  1629,
      47,    26,  1629,    28,    89,  2311,    31,  1347,  1629,    34,
      35,    36,  2318,    38,    39,  1557,   249,   555,    84,    85,
    3009,   247,   147,  1347,   250,   228,   229,    40,   247,  2311,
    1660,   250,   249,  1660,   249,   120,  2318,  2311,   247,  1660,
      22,   250,   214,  1367,  2318,  1369,  1370,  1677,  1372,   249,
    1677,   247,   590,   120,   250,   249,  1677,   202,   203,   204,
     205,   206,   207,  1394,   209,  2043,   249,  1683,   228,    26,
    1394,  1613,   249,  1370,   249,  1372,   201,  1394,   247,   249,
      22,   250,  2754,   621,  1408,  1347,  1410,  2065,   167,  2067,
     175,    95,    96,    97,  1690,    37,   256,  2858,  1422,   249,
    2387,  1717,  1394,  1699,    29,  1367,  2393,  1369,  1370,   230,
     231,   232,  1728,   192,   193,   194,   247,   247,  2790,   250,
     250,  1445,  2222,  1394,  2224,  1422,   228,   229,   247,   167,
     247,   250,   670,   250,   249,  1690,  2065,  1461,  2067,   233,
     234,   235,  1681,   226,  1699,   228,   229,    89,  1445,   249,
    2128,  1690,   249,  2440,   192,   193,   194,   195,  2911,   249,
     226,   249,   228,   229,  1461,   249,   247,  1491,   247,   250,
      29,    22,   226,   256,   228,   229,  1500,   247,   120,    37,
     250,   247,  2469,  2161,   247,   249,    37,   250,    22,    23,
      24,    25,    26,    27,    28,   247,  1520,   735,   250,  2128,
       7,     8,   256,   228,   229,  1529,  1822,   249,    22,    23,
      24,    25,    26,    27,    28,   753,   249,    31,     7,     8,
      34,    35,    36,    37,    38,    39,   168,   169,   249,  1845,
     249,   256,  2161,  1557,  2163,  1851,   124,   125,    89,   127,
     128,   129,   130,     5,  1599,   202,   203,   204,   205,   206,
     207,  1575,   209,     4,     5,  3008,  1598,  1873,   163,   164,
     165,   166,  1604,   125,   802,   127,   128,   129,   130,   120,
     197,   198,    22,    23,    24,    25,    26,    27,    28,   233,
     234,   235,  1606,   250,  1608,   247,   248,  1611,  1619,  1613,
     247,  1615,   250,  1617,  2966,  1619,   249,  2969,  1629,   124,
     249,   126,  1619,   249,    26,  1629,   249,   845,   247,   248,
     135,  3064,  1629,   138,   139,   249,   141,   168,   169,   249,
    1644,   249,   147,   247,   248,   204,   151,  1619,   249,  1660,
     249,   156,   249,   142,   143,   144,  1660,  1629,   249,   249,
     165,   249,   249,  1660,   205,   249,  1677,   249,  1619,   249,
     249,   249,  3105,  1677,  3107,   249,  3109,  1681,  1629,   249,
    1677,   142,   143,   144,   206,   190,  1690,    26,  1660,   207,
     248,   247,    24,   247,    26,  1699,    28,  3130,   203,    31,
     189,   190,   214,   224,    36,  1677,   195,   214,    39,  1660,
     250,   216,   226,   218,   228,   229,   247,   250,  1953,   248,
    1955,    53,  1699,  1958,   250,   248,  1677,   247,   189,   190,
     249,   236,   226,   250,   228,   229,   249,   248,   243,  1681,
     249,   249,   256,     5,  1979,   247,   250,  1982,  1690,    26,
     250,   250,    84,    85,   250,   973,   248,  2724,   247,    24,
    2727,    26,   256,    28,   248,   270,    31,   127,   128,   129,
     130,    36,   247,    38,   250,   280,   248,   248,   556,    29,
     558,   559,   560,   561,   250,   563,   247,   250,    29,    54,
     249,   249,   297,  2069,   249,  2071,   226,  1015,   228,   229,
     202,   203,   204,   205,   206,   207,   249,   209,  2043,   179,
     180,   181,   182,   183,   184,    26,   249,   247,  1822,    84,
      85,   214,    22,   248,    24,   247,   250,   250,    28,   248,
    2065,   249,  2067,   249,  2069,   249,  2071,   249,   343,   250,
     248,  1845,   247,   250,    24,   247,    26,  1851,    28,  2071,
    2069,    31,   248,  2511,   249,  2513,    36,   214,    38,    40,
      41,    42,    43,    44,  2522,   250,   248,   372,   373,  1873,
     247,   250,   377,   249,    54,    22,   250,   247,   250,    26,
    1822,    28,  1100,   250,    31,   175,  2544,    34,    35,    36,
      37,    38,    39,   214,   226,  2553,   228,   229,    45,    46,
      47,    59,    49,  1845,    84,    85,   214,    26,   686,  1851,
     688,   247,   250,  2522,   248,   247,   116,   117,   118,   119,
     120,   121,   122,   123,   250,   202,   203,  1145,   205,   206,
     207,  1873,   209,  1953,  2244,   214,   248,  2244,   247,   250,
     250,  2163,   248,  2244,  2553,   248,   451,   214,   250,  1953,
     250,  1955,   457,   250,  1958,   248,  2266,   249,   247,  2266,
       5,   226,  1180,   228,   229,  2266,   250,    34,  2278,   250,
      24,  2278,    26,   249,    28,  1979,   250,  2278,  1982,    46,
      47,   250,   247,    50,    51,    52,   491,   250,   249,   494,
     248,   202,   203,   204,   205,   206,   207,   502,   209,    28,
    2296,  1219,    31,   248,   250,  1223,   511,    36,    22,   248,
      24,  1953,    26,  1955,    28,   250,  1958,    31,  2294,   250,
     248,   250,    36,    40,    53,   148,   226,  1245,   228,   229,
      84,    85,    91,  2309,    93,    94,   247,  1979,   250,  2043,
    1982,   167,   101,   102,   103,   250,   226,   247,   228,   229,
     555,   556,   247,   558,   559,   560,   561,   250,   563,  2294,
     247,  2065,  2281,  2067,   250,  2069,    24,  2071,    26,   248,
      28,   249,   248,    31,  2309,  2294,   248,   582,    36,   250,
     250,   228,   229,   202,   203,   590,   205,   206,   207,   248,
     209,  2387,  2069,   250,  2071,    53,  2754,  2393,   247,   249,
     248,  2105,   116,   117,   118,   119,   249,   121,   249,   256,
     247,   250,   250,   618,   195,   249,   621,   248,   132,   133,
     134,   250,  2780,   250,  2128,   250,    84,    85,   249,  1347,
     247,   249,  2790,   638,  2138,   249,   249,    22,   248,   247,
      26,    26,   214,    28,   249,   249,    31,   238,   250,    34,
      35,    36,   250,    38,    39,   214,   249,  2161,  2816,  2163,
      45,    46,    47,   214,    49,   670,   225,   247,   250,   248,
     247,  2780,   226,   249,   228,   229,  1394,   149,   207,   248,
     250,   686,   150,   688,   250,  2220,   691,   248,   247,   249,
    1408,   214,  1410,   214,   699,   214,  2218,   702,   248,   228,
     229,    69,    70,   708,  2226,  2440,   248,  2816,   248,   250,
     248,   250,   226,   248,   228,   229,   250,   248,   996,    60,
     250,   214,    22,    23,    24,    25,    26,    27,    28,   214,
    2465,    31,   248,  2244,  2469,   247,    36,   214,    38,  1017,
    2244,   746,   256,   251,   214,   250,   247,  2244,   753,   148,
     148,   214,   248,   758,    54,  2266,   248,   248,  1036,  2494,
     250,   250,  2266,   250,   250,   248,   771,  2278,   226,  2266,
     228,   229,  2244,  1491,  2278,  1053,  2511,  2281,  2513,   248,
     208,  2278,   787,   248,   250,   238,   250,  2522,   250,  1067,
    2294,   250,   248,  2244,  2266,   247,   250,   802,   214,   250,
     238,   250,  1520,   248,  1082,  2309,  2278,   214,  2966,  2544,
     250,  2969,   248,   248,   214,  2266,   202,   203,  2553,   205,
     206,   207,   249,   209,   250,   830,     4,  2278,   250,   249,
     249,   249,  2309,  2643,   249,   249,  2643,    22,   249,  2281,
     845,    26,  2643,   228,   229,   249,    31,   249,   238,    34,
     238,    36,  2294,    38,   214,   208,   247,    92,   863,   864,
      45,    46,    47,    22,    49,    24,   238,    26,   873,    28,
     252,   256,    31,   250,   242,   243,   244,    36,   214,   249,
     249,  2657,   214,  2387,   214,   253,   254,   255,  1606,  2393,
     214,    75,    76,    77,    78,    79,    80,    81,    82,   214,
      22,  1619,   250,   248,    26,   214,    28,   250,   913,    31,
     915,   916,    34,   250,    36,   250,    38,   248,   214,   214,
     248,   926,  2657,    45,    46,    47,   226,    49,   228,   229,
     250,    53,   250,   250,   247,   214,  2440,   248,  2657,   214,
     248,   946,  1660,  2327,  3178,  2387,  2358,  2708,  1226,   153,
     153,  2393,   142,   143,   144,   153,   153,   116,   117,   118,
     119,  2465,   121,  1815,   153,  2469,   153,   153,   973,  1592,
    1248,   153,   153,   132,   133,   134,   953,     4,   153,     6,
       7,     8,     9,    10,    11,    12,    13,   167,    15,  2724,
    2494,   996,  2727,    20,  1596,   167,   167,  2428,  2440,   189,
     190,    28,    29,  3040,  3121,   195,  2949,  2511,  3092,  2513,
    1015,  2618,  1017,   137,   138,   139,   140,   141,  2522,  2754,
    2858,  2627,   153,  2465,   153,   153,   153,  2469,   153,  2708,
     214,  1036,    22,    23,    24,    25,    26,    27,    28,   153,
    2544,    31,   153,   228,   153,  2780,    36,    37,  1053,  2553,
     153,   153,  2494,   153,   153,  2790,    83,   153,   153,   153,
     153,   185,  1067,  2708,   153,  2708,  2708,   226,   153,   228,
     229,   124,  2708,   126,   153,  1080,   153,  1082,   153,   153,
     153,  2816,   135,   153,   153,   138,   139,   153,   247,  1367,
     153,  1369,  2708,  2708,   147,  1100,  2600,  2708,   151,  2603,
    2708,  1297,  1302,   156,  1822,  1110,   228,   229,  2708,  2708,
    2692,  3160,   165,  1800,  1015,  1805,  1121,   705,   301,  1124,
    2684,    -1,    -1,   247,    -1,    -1,   116,   117,   118,    -1,
      -1,   121,  2643,  1851,   256,    -1,    -1,   190,    -1,  2643,
    1145,    -1,   132,   133,   134,    22,  2643,    -1,    -1,    26,
     203,    28,    -1,  2657,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,   216,    -1,   218,    -1,    -1,    45,    46,
      47,  2643,    49,    -1,    -1,  1180,  2708,    -1,  2708,  2708,
    2708,  2708,  2708,   236,  2708,  2708,    -1,    -1,    -1,    -1,
     243,   125,  2643,   127,   128,   129,   130,    -1,   225,   137,
     138,   139,   140,   141,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,  1219,  2657,    -1,   270,  1223,    -1,
    2724,  1226,    -1,  2727,    -1,    -1,    -1,   280,    -1,    -1,
      -1,  2966,    -1,    -1,  2969,  1953,   226,  1955,   228,   229,
    1245,    -1,    -1,  1248,    -1,    -1,    -1,   185,    -1,    -1,
    2754,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,  1979,    31,   197,   198,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,  2780,    -1,    -1,    -1,
      -1,    -1,  2724,    -1,    53,  2727,  2790,    -1,    -1,    -1,
     343,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,  2816,    -1,    -1,    84,    85,    -1,    -1,   372,
     373,    -1,    -1,    53,   377,  2043,    -1,    -1,    -1,    -1,
    1608,    -1,    -1,  1611,    -1,  1613,    -1,  1615,    -1,  1617,
      -1,    -1,  1347,    -1,    22,    23,    24,    25,    26,    27,
      28,   228,   229,    31,    84,    85,    34,    35,    36,    37,
      38,    39,  1367,    -1,  1369,  1370,  1644,  1372,    22,    23,
      24,    25,    26,    27,    28,    53,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,  2105,    -1,  1394,
      -1,    45,    46,    47,    -1,    49,    -1,    -1,   451,    53,
      -1,    -1,    -1,  1408,   457,  1410,    84,    85,   226,    -1,
     228,   229,    -1,    -1,    69,    70,    -1,  1422,    73,    74,
    2138,    -1,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      84,    85,    31,    -1,    -1,    34,    -1,    36,   491,    38,
    1445,   494,    -1,    -1,    -1,    -1,    45,    46,    47,   502,
      49,    -1,    -1,    -1,    -1,    -1,  1461,   226,   511,   228,
     229,    -1,  2966,    -1,    -1,  2969,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    -1,   247,    34,
      -1,    36,    37,    38,    -1,    -1,  1491,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,  1500,   226,    -1,   228,   229,
      -1,    -1,   555,   556,    -1,   558,   559,   560,   561,    -1,
     563,    -1,    -1,    -1,    -1,  1520,    -1,   116,   117,   118,
     119,    -1,   121,    -1,  1529,    -1,  2244,    -1,    -1,   582,
      -1,    -1,    -1,   132,   133,   134,    -1,   590,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,   226,    31,
     228,   229,  1557,    35,    36,    37,    38,    39,    -1,   214,
    2278,   116,   117,   118,    -1,   618,   121,  1845,   621,   247,
    1575,    53,   226,    -1,   228,   229,    -1,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   638,    -1,   242,   243,   244,
      -1,    -1,    -1,   247,    -1,  1873,    -1,    -1,   253,   254,
     255,  1606,    -1,  1608,    -1,  1176,  1611,    -1,  1613,    -1,
    1615,    -1,  1617,    -1,  1619,    -1,    -1,   670,   179,   180,
     181,   182,   183,   184,  1629,    -1,    -1,   226,    -1,   228,
     229,    -1,    26,   686,    28,   688,    -1,    31,   691,  1644,
      34,    35,    36,    37,    38,    39,   699,    -1,   247,   702,
      -1,    -1,    26,    -1,    28,  1660,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    -1,  2387,
      -1,   226,  1677,   228,   229,  2393,  1681,    -1,    -1,    -1,
    1958,    -1,    -1,    22,    -1,  1690,    -1,    26,    -1,    28,
      -1,    -1,    31,   746,  1699,    34,    -1,    36,    37,    38,
     753,   256,    -1,    -1,  1982,   758,    45,    46,    47,    -1,
      49,    22,    23,    24,    25,    26,    27,    28,   771,    -1,
      31,    -1,  2440,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,   787,    -1,  3079,  3080,  3081,  3082,
    3083,  3084,    53,    -1,   226,    -1,   228,   229,  1319,   802,
      89,  2469,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,  1334,    -1,    34,    35,    36,  1339,    38,
      39,    -1,    -1,    84,    85,  3118,    -1,   830,    89,    -1,
     119,   120,    -1,    -1,    53,    22,    23,    24,    25,    26,
      27,    28,   845,  2511,    31,  2513,    -1,    34,    35,    36,
      37,    38,    39,  1374,  1375,    -1,    -1,    -1,   119,   120,
     863,   864,    -1,    -1,   153,    -1,   155,  1822,    -1,    -1,
     873,    -1,    -1,    -1,    -1,    -1,  2544,    -1,  1399,  1400,
      -1,    -1,    -1,   172,   228,   229,   175,    -1,    -1,    -1,
    1845,    -1,   153,    -1,   155,    -1,  1851,    22,    23,    24,
      25,    26,    27,    28,   228,   229,    -1,    -1,    -1,    -1,
     913,   172,   915,   916,   175,    -1,    -1,    -1,  1873,    -1,
      -1,    -1,    22,   926,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,  2600,    -1,    -1,  2603,    -1,    37,    -1,   228,
     229,    -1,    -1,   946,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    -1,   247,    34,
      35,    36,    37,    38,    39,   226,    -1,   228,   229,    -1,
     973,    91,    -1,    93,    94,  2643,    -1,    -1,    53,    -1,
      -1,   101,   102,   103,    -1,    85,   247,    -1,    22,    89,
      24,    -1,    26,   996,    28,    -1,    -1,    31,  1953,    -1,
    1955,    -1,    36,  1958,    -1,    -1,    -1,   226,    -1,   228,
     229,    -1,  1015,    -1,  1017,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,  1979,    -1,    -1,  1982,    -1,    -1,
      -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,    -1,   226,
      -1,   228,   229,   156,   157,   158,   159,   160,   161,   162,
    1053,    -1,    -1,   153,   154,   155,  2724,    -1,    -1,  2727,
      -1,    -1,    -1,    -1,  1067,    69,    70,    -1,    -1,    73,
      74,    -1,   172,    -1,  1595,   175,    -1,  1080,    -1,  1082,
      -1,    -1,   116,   117,   118,   119,  2754,   121,  2043,    -1,
      -1,    -1,    -1,    -1,   214,    -1,   146,  1100,   132,   133,
     134,   226,    -1,   228,   229,   225,    -1,  1110,    -1,    -1,
    2065,    -1,  2067,    -1,  2069,    -1,  2071,    -1,  1121,    -1,
      -1,  1124,  2790,    -1,    -1,    -1,  1647,    -1,   228,   229,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
     190,    -1,  1145,    -1,    36,    37,    38,   247,    -1,    -1,
    2105,   226,    -1,   228,   229,    22,    23,    24,    25,    26,
      27,    28,    54,    -1,    31,    -1,   216,    34,    35,    36,
      37,    38,    39,  2128,    -1,    -1,    -1,  1180,    45,    46,
      47,    -1,    49,  2138,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,   229,    -1,    89,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   126,  2161,    -1,  2163,    -1,
     214,    -1,    -1,    -1,   135,   136,  1219,    84,    85,   223,
    1223,    -1,    89,  1226,    -1,   146,    -1,   119,   120,    95,
      96,    97,    98,    99,   100,   156,    -1,  2465,   242,   243,
     244,    -1,  1245,    -1,    -1,  1248,    -1,    -1,    -1,   253,
     254,   255,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,   155,    -1,    -1,  2494,    -1,   318,   190,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
     172,    -1,   203,   175,    -1,    -1,   153,    -1,   155,  2244,
      -1,    -1,    -1,    -1,    -1,   216,    -1,   218,  2966,    -1,
      -1,  2969,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,  2266,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,    -1,   243,  2278,    -1,    -1,  2281,    -1,    -1,    -1,
      -1,    -1,   253,    -1,   226,    -1,   228,   229,    -1,  2294,
      -1,    -1,    -1,    -1,  1347,   176,   177,   178,   179,   180,
     181,   182,   183,   184,  2309,   247,    -1,    -1,    -1,   226,
      -1,   228,   229,    -1,  1367,    -1,  1369,  1370,    -1,  1372,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
     247,  1902,    34,    35,    36,    -1,    38,    39,    -1,    -1,
      -1,  1394,    -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,
      -1,   451,    -1,    -1,    -1,  1408,    -1,  1410,    -1,     5,
     214,     7,     8,    -1,    10,    11,    12,    -1,    14,  1422,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2387,    29,    30,    -1,    -1,    -1,  2393,    -1,
      -1,   491,  1445,    39,   142,   143,   144,    22,    -1,    24,
      -1,   372,   373,    28,    -1,    -1,    -1,    -1,  1461,    22,
      23,    24,    25,    26,    27,    28,    62,    -1,    31,   167,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,  2440,    49,    83,  1491,    -1,
      53,   189,   190,    -1,   192,   193,   194,  1500,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   555,    -1,    69,    70,    -1,
    2465,    73,    74,    -1,  2469,    -1,    -1,  1520,    -1,    -1,
      -1,    84,    85,    -1,    -1,    -1,  1529,    -1,    -1,    -1,
     451,    -1,    -1,    -1,    -1,   131,   457,    -1,    -1,  2494,
     590,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,   147,    -1,    -1,  1557,    -1,  2511,    -1,  2513,    75,
      76,    77,    78,    79,    80,    81,    82,  2522,    -1,    -1,
     491,   621,  1575,    -1,   226,    -1,   228,   229,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,  2544,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,  2553,    -1,
     196,    -1,    -1,  1606,    -1,  1608,    -1,    -1,  1611,    -1,
    1613,    -1,  1615,    -1,  1617,    -1,  1619,    -1,    -1,    -1,
      -1,    -1,    -1,   673,    -1,    -1,  1629,    -1,    -1,   225,
      -1,    -1,    -1,    -1,   230,   556,    -1,   558,   559,    -1,
      -1,  1644,    -1,    -1,    -1,  2600,    -1,    -1,  2603,   247,
      -1,   226,   214,   228,   229,    -1,    -1,  1660,    -1,    -1,
      -1,   582,    -1,   226,    -1,   228,   229,    -1,    -1,   590,
      -1,    -1,    -1,    -1,  1677,    -1,    -1,    -1,  1681,    -1,
     242,   243,   244,    -1,   247,   735,    -1,  1690,  2643,    -1,
      -1,   253,   254,   255,    -1,    -1,  1699,   618,   214,    -1,
     621,    -1,  2657,   753,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,   638,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,   670,
      49,    -1,   802,    -1,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   686,    -1,   688,    -1,  2724,
     691,    -1,  2727,    -1,   695,   247,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      89,    19,    20,   214,    -1,   845,    -1,    -1,    -1,  2754,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,   735,    -1,    -1,    -1,    -1,  1822,
     119,   120,    -1,    -1,    -1,  2780,    -1,    -1,    -1,    -1,
      -1,    -1,   753,    -1,    62,  2790,    -1,   758,    -1,    -1,
      -1,    -1,  1845,    -1,    -1,    -1,    -1,    -1,  1851,    -1,
     771,    -1,    -1,    -1,   153,    83,   155,    -1,    86,    -1,
      -1,  2816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1873,    22,    -1,   172,    -1,    26,   175,    28,    -1,    -1,
      31,   802,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,   125,    49,    -1,
      -1,  2422,    -1,   131,    -1,    -1,    -1,   135,   136,   830,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,   147,
      -1,    -1,    -1,   973,   845,    37,    -1,   226,    -1,   228,
     229,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,    -1,   863,   864,    -1,    -1,    -1,    -1,   247,    -1,
    1953,    -1,  1955,    -1,    -1,  1958,    -1,    -1,   186,   187,
     188,    -1,    -1,   191,    -1,  1015,    -1,    -1,   196,    22,
      23,    24,    25,    26,    27,    28,  1979,    89,    31,  1982,
      -1,    -1,    35,    36,  2505,    38,    39,    -1,    -1,    -1,
      -1,    -1,   913,    -1,   915,   916,    -1,   225,    -1,    -1,
      53,    -1,   230,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,  2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
    2043,   153,    -1,   155,    45,    46,    47,    -1,    49,    -1,
    1100,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,  2065,   175,  2067,    22,  2069,    24,  2071,    26,
      -1,    28,    -1,    -1,    31,   996,    -1,   228,   229,    36,
      37,    38,    -1,    84,    85,    -1,    -1,    -1,    89,  2610,
      -1,    -1,    -1,    -1,    -1,  1145,  1017,    54,    -1,    -1,
      -1,    -1,  2105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,  1036,   228,   229,   119,   120,
      -1,    -1,    -1,    -1,    -1,  2128,    -1,    84,    85,    -1,
    1180,    -1,    89,    -1,    -1,  2138,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,   153,    -1,   155,   124,    -1,   126,  2161,  1080,
    2163,    -1,   119,   120,    -1,    -1,    -1,   136,    -1,   138,
      -1,   172,    -1,   226,   175,   228,   229,   146,    -1,  1100,
      -1,    -1,    -1,    -1,  2705,    -1,    -1,   156,    -1,  1110,
    2711,    -1,    -1,    -1,    -1,    22,   153,    24,   155,    26,
    1121,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    69,    70,    -1,   172,    73,    74,   175,  2740,
    2741,   190,  2743,  2744,  1145,   226,    53,   228,   229,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,  2244,    -1,    -1,    -1,    -1,   247,   216,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,  1180,
      -1,    -1,    89,  2266,    -1,    -1,    -1,   236,    -1,   226,
      -1,   228,   229,    -1,    -1,  2278,    -1,    -1,  2281,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,
     247,  2294,   119,   120,    -1,    -1,    -1,  1347,  1219,    -1,
      -1,   270,  1223,    -1,    -1,  1226,  2309,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    73,    74,    -1,  2839,  2840,
      -1,    -1,    -1,    -1,  1245,    -1,   153,  1248,   155,    -1,
      -1,    69,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,  2863,  2864,  1394,   172,    -1,    -1,   175,   318,
      -1,    -1,    -1,    -1,  2875,    -1,    -1,   214,  1408,    -1,
    1410,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
     207,    -1,    -1,    -1,  2387,   242,   243,   244,    -1,    -1,
    2393,    -1,    53,    -1,    -1,    -1,   253,   254,   255,   226,
      -1,   228,   229,    -1,   373,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    84,    85,    -1,  1347,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2440,    -1,    -1,
      -1,  1491,    -1,    -1,    -1,    -1,  1367,    -1,  1369,  1370,
      -1,  1372,  2973,    -1,    -1,  2976,   214,    -1,   119,   120,
      -1,    -1,  2465,   221,   222,   223,  2469,    -1,    -1,    -1,
    1520,    -1,    -1,  1394,    -1,    -1,   214,    -1,    -1,  3000,
    3001,    -1,   451,    -1,   242,   243,   244,  1408,   457,  1410,
      -1,  2494,   153,    -1,   155,   253,   254,   255,    -1,    -1,
      -1,  1422,    -1,    -1,   242,   243,   244,    -1,  2511,    -1,
    2513,   172,    -1,    -1,   175,   253,   254,   255,    -1,  2522,
      -1,    -1,   491,    -1,  1445,  3046,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3055,  3056,  3057,    -1,  3059,  3060,
    3061,  2544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2553,    -1,    -1,    -1,   214,    -1,  1606,    -1,    -1,    -1,
      -1,   221,   222,   223,    -1,   226,    -1,   228,   229,  1619,
    1491,    -1,    -1,    -1,    -1,  3096,  3097,    -1,    -1,  1500,
      -1,    -1,   242,   243,   244,    -1,   247,   556,    -1,   558,
     559,   560,    -1,   253,   254,   255,    -1,  2600,    -1,  1520,
    2603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1529,    -1,
    1660,    -1,    -1,   582,    22,    23,    24,    25,    26,    27,
      28,   590,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,  1557,    45,    46,    47,
    2643,    49,    -1,    -1,    -1,    -1,    -1,    22,    -1,   618,
      -1,    26,   621,    28,  2657,    -1,    31,    -1,    -1,    34,
      -1,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,   638,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,  1608,    -1,    -1,
    1611,    -1,  1613,    -1,    -1,    -1,    -1,    -1,  1619,    -1,
      -1,   670,    -1,    -1,    -1,    -1,    -1,    -1,  1629,    -1,
      -1,   119,   120,    -1,    -1,    -1,    -1,   686,    -1,   688,
      -1,  2724,    -1,    -1,  2727,    -1,   695,    -1,    -1,    -1,
     699,    -1,    -1,    -1,    22,    -1,    24,    -1,    26,  1660,
      28,    -1,    -1,    31,    -1,   153,    34,   155,    36,    37,
      38,  2754,    -1,    -1,    -1,    -1,  1677,    45,    46,    47,
    1681,    49,    -1,    -1,   172,    53,   735,   175,    -1,  1690,
      -1,    -1,    -1,    -1,    -1,    -1,  1826,  2780,    -1,    -1,
      -1,    -1,    -1,    -1,   753,    -1,    -1,  2790,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      -1,    89,   771,    -1,    -1,  1855,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2816,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   802,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,   228,   229,    -1,   124,    -1,   126,    -1,
      37,   830,    -1,    -1,    -1,   153,    -1,   155,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,   845,    -1,   146,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   864,    -1,    -1,    -1,    -1,
      -1,  1822,    -1,  1953,    -1,  1955,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,  1845,    -1,    -1,    -1,    -1,  1979,
    1851,    -1,    -1,    -1,    -1,   203,    -1,    -1,   226,    -1,
     228,   229,   119,   120,   913,    -1,   915,   916,   216,    -1,
     218,    -1,  1873,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,  2966,    -1,    -1,  2969,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,   153,    31,   155,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2043,    -1,   172,    -1,    -1,   175,    53,
      -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,   996,    -1,    -1,
      -1,    -1,  1953,    -1,  1955,    89,    -1,  1958,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1017,   226,
     318,   228,   229,    -1,    -1,  2105,    -1,    -1,  1979,    -1,
      -1,  1982,    -1,    -1,    -1,   119,   120,  1036,    -1,    -1,
     247,    84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1053,    -1,    -1,    -1,  2138,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    26,   153,
      28,   155,    -1,    31,    -1,    -1,   119,   120,    36,    37,
      -1,  1080,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,  2043,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,  1100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,  1110,   155,    -1,  2065,    -1,  2067,    -1,  2069,    -1,
    2071,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,   172,
      -1,    89,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,   229,  1145,    -1,    -1,    -1,
      -1,    -1,    -1,   451,  2105,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   247,  2244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2128,    -1,    -1,
      -1,  1180,    -1,   226,    -1,   228,   229,  2138,    -1,    -1,
      -1,    -1,    -1,   491,    -1,   153,    -1,   155,  2278,    -1,
      -1,    69,    70,    -1,   502,    73,    74,    -1,    -1,    -1,
    2161,    -1,  2163,    -1,   172,    -1,    -1,   175,    -1,    -1,
    1219,    -1,    -1,    -1,  1223,    -1,    -1,  1226,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,  1245,    -1,    -1,  1248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,   556,    53,
     558,   559,   560,   561,    -1,   563,    -1,    -1,   226,    -1,
     228,   229,    -1,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    -1,    -1,    31,   582,    -1,    34,    -1,    36,   247,
      38,    -1,   590,  2244,    -1,    89,    -1,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2266,    -1,    -1,    -1,    -1,
     618,    -1,    -1,   621,    -1,   119,   120,  2278,    -1,    22,
    2281,    24,    -1,    26,    -1,    28,    84,    85,    -1,    -1,
     638,    -1,    -1,  2294,    37,    -1,   214,    -1,  1347,    -1,
      -1,    -1,    -1,   221,   222,   223,    -1,    -1,    -1,   153,
    2440,   155,    -1,    -1,    -1,    -1,    -1,    -1,  1367,    -1,
    1369,    -1,    -1,  1372,   242,   243,   244,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,   253,   254,   255,    -1,  2469,
      -1,    84,    85,    -1,    -1,  1394,    89,    -1,    -1,    -1,
      -1,   699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1408,
      -1,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
      -1,  2511,   226,  2513,   228,   229,  2387,   735,    -1,    -1,
      -1,    -1,  2393,    -1,    -1,    -1,  1445,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   753,    -1,    -1,    -1,    -1,
     153,    -1,   155,    -1,  2544,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   172,
     228,   229,   175,    -1,    -1,    -1,    -1,    -1,    -1,  2440,
      -1,    -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,  1500,    -1,    -1,   802,    -1,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,  2465,    -1,    -1,    -1,  2469,    -1,
    2600,  1520,    37,  2603,    -1,    -1,    -1,    -1,    -1,    -1,
    1529,    -1,    -1,   226,    -1,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,  2494,    -1,    -1,    -1,   845,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,  1557,    -1,
    2511,    -1,  2513,  2643,    -1,    -1,    -1,    -1,    -1,    84,
      85,  2522,    -1,    -1,    89,    -1,   124,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    24,   136,    26,
      -1,    28,    -1,  2544,    31,    -1,    -1,    -1,   146,    36,
      -1,    -1,  2553,    -1,   119,   120,    -1,    -1,    -1,  1608,
      -1,    -1,  1611,    -1,  1613,   913,  1615,   915,   916,    -1,
    1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,
    1629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     155,    -1,   190,    -1,  2724,    -1,    -1,  2727,    -1,  2600,
      -1,    -1,  2603,    -1,    -1,   203,    -1,   172,    -1,    -1,
     175,  1660,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
     218,    -1,    -1,    -1,  2754,   973,    -1,    -1,  1677,   116,
     117,   118,   119,    -1,   121,    -1,    -1,    -1,   236,    -1,
      -1,    -1,  2643,    -1,    -1,   132,   133,   134,   996,    -1,
      -1,    -1,    -1,    -1,    -1,   253,  2657,    -1,    -1,    -1,
    2790,   226,    -1,   228,   229,    -1,    -1,  1015,    -1,  1017,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,   247,    34,    -1,    36,    37,    38,  1036,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1067,
     318,    -1,    -1,  2724,    -1,    -1,  2727,    -1,    -1,    -1,
      -1,    -1,  1080,    -1,  1082,    -1,    -1,    -1,    -1,   226,
      -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1100,  2754,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1110,    -1,    -1,   116,   117,   118,    -1,    -1,
     121,    -1,    -1,  1822,    -1,   373,    -1,    -1,    -1,  2780,
      -1,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,  2790,
      -1,    -1,    -1,    -1,    -1,    -1,  1845,  1145,    -1,    -1,
      -1,    -1,  1851,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    -1,    -1,    31,    -1,  2816,    34,    -1,    36,    -1,
      38,    -1,    -1,    -1,  1873,    -1,    -1,    45,    46,    47,
      -1,    49,  1180,    -1,    -1,    -1,  2966,    -1,    -1,  2969,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,   451,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,   226,    -1,   228,   229,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,   121,  1953,    -1,  1955,    -1,    -1,  1958,
      89,    -1,    -1,    -1,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
    1979,    -1,    -1,  1982,    -1,   124,    -1,   126,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     216,   126,    -1,    -1,    -1,    -1,    -1,    -1,   556,    -1,
     558,   559,    -1,    -1,    -1,  2966,    -1,    -1,  2969,    -1,
     236,    -1,    -1,    -1,   153,    -1,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   590,   172,  2043,    -1,   175,    -1,    -1,  1347,
      -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
     228,   229,    -1,    -1,   203,   190,  2065,    -1,  2067,  1367,
     618,  1369,  2071,   621,    -1,    -1,    -1,   216,   203,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     638,   216,    -1,   218,    -1,    -1,  1394,   226,    -1,   228,
     229,    -1,   318,    -1,    -1,    -1,  2105,    -1,    -1,    -1,
    1408,    -1,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,   670,    26,    -1,    28,    -1,    -1,    31,  2128,
      -1,    34,    -1,    36,    37,    38,    -1,    -1,   686,  2138,
     688,    -1,    45,    46,    47,    -1,    49,   695,    -1,    -1,
      53,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,  2161,    -1,  2163,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    54,    -1,    -1,    89,   735,    -1,    -1,
      -1,    -1,    -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1500,    -1,    -1,   753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    89,    -1,
      -1,    -1,  1520,   771,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1529,    -1,    -1,    -1,   451,    -1,    -1,    -1,    -1,
      22,    -1,    24,    -1,    26,  2244,    28,    -1,   119,   120,
     153,    -1,   155,    -1,   802,    37,   124,    -1,   126,  1557,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2266,    -1,   172,
      -1,    -1,   175,    -1,    -1,   491,    -1,  1575,   146,  2278,
      -1,    -1,   153,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,
      -1,   172,    84,    85,   175,    -1,    -1,    89,  1606,    -1,
    1608,    -1,    -1,  1611,    -1,  1613,   864,  1615,    -1,  1617,
      -1,  1619,   190,   226,    -1,   228,   229,    -1,    -1,    -1,
      -1,  1629,    -1,    -1,    -1,   203,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1644,    -1,   216,    -1,
     218,    -1,    -1,    -1,    -1,   226,    -1,   228,   229,    -1,
      -1,    -1,  1660,    -1,    -1,   913,    -1,   915,   916,    -1,
      -1,   153,    -1,   155,   590,    -1,    -1,    -1,    -1,  1677,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2387,    -1,
     172,    -1,    -1,   175,  2393,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,   621,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,   556,    31,   558,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,   556,    -1,   558,    -1,    -1,    -1,    -1,    -1,    -1,
      53,  2440,    -1,    -1,   226,   190,   228,   229,   996,    -1,
     318,   590,    -1,    -1,   670,    -1,    -1,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,   590,  2465,    31,    -1,  1017,
    2469,   216,    36,    37,    38,    -1,    89,    -1,    -1,   618,
      -1,    -1,   621,    -1,    -1,    -1,    -1,    -1,  1036,    -1,
      54,   236,    -1,   618,    -1,  2494,   621,    -1,    -1,   638,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,  2511,   638,  2513,    -1,    -1,    -1,    -1,   735,
      84,    85,    -1,  2522,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,
     153,    -1,   155,    -1,    -1,  2544,    -1,   686,    -1,   688,
      -1,    -1,  1100,    -1,  2553,   119,   120,    -1,    -1,   172,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   451,    -1,    -1,   802,    -1,    -1,   153,
      -1,   155,    -1,    -1,    -1,    -1,    -1,  1145,    -1,    -1,
      -1,  2600,    -1,    -1,  2603,    -1,    -1,    -1,   172,    -1,
      -1,   175,    -1,   226,    -1,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,   845,
      -1,    -1,  1180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2643,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1953,    -1,  1955,    -1,    -1,
    1958,    -1,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,
      -1,  1219,    -1,    -1,    -1,  1223,    -1,    -1,  1226,    -1,
      -1,  1979,    -1,    -1,  1982,    -1,    -1,   555,   556,    22,
     558,    -1,    -1,    26,    -1,    28,    -1,  1245,    31,    -1,
    1248,    34,    -1,    36,    37,    38,   451,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,   590,    -1,    -1,  2724,    -1,    -1,  2727,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,  2043,   491,    34,    35,    36,
     618,    38,    39,   621,    -1,  2754,    89,    -1,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    53,  2065,    -1,  2067,
     638,    -1,    -1,    -1,   913,    -1,   915,    -1,    -1,    -1,
      -1,  2780,    -1,    -1,    -1,    -1,   119,   120,   913,    -1,
     915,  2790,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1347,
      -1,    -1,    -1,    -1,   672,    -1,    -1,  2105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2816,    -1,  1367,
     153,  1369,   155,    -1,  1372,    -1,    -1,    -1,    -1,    -1,
    2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
    2138,    -1,   175,    -1,    -1,   590,  1394,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,
    1408,    -1,  1410,  2161,    -1,  2163,    -1,   735,    22,    -1,
      24,   996,    26,    -1,    28,    -1,   621,    31,  1017,    -1,
      -1,    -1,    36,    37,  1100,   753,    -1,    -1,    -1,    -1,
      -1,    -1,  1017,    -1,    -1,   228,   229,  1445,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,  1145,
      84,    85,    -1,    -1,   802,    89,    -1,    -1,    -1,   226,
      -1,   228,   229,  1491,    -1,    -1,  2244,    -1,    -1,    -1,
      -1,    -1,  1500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1180,   119,   120,  2966,  2266,    -1,
    2969,    -1,  1520,    -1,    -1,    -1,    -1,   845,    -1,    -1,
    2278,  1529,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,
     735,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,   153,
      -1,   155,    -1,  1219,    -1,    -1,  1145,  1223,   753,  1557,
      22,    23,    24,    25,    26,    27,    28,    -1,   172,    31,
    1145,   175,    34,    35,    36,    -1,    38,    39,    -1,  1245,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,  1180,    -1,    -1,    -1,   913,    85,   915,    -1,    -1,
      89,    -1,    -1,   207,    -1,  1180,    -1,   802,    -1,    -1,
    1608,    -1,    -1,  1611,    -1,  1613,    -1,    -1,    -1,    -1,
      -1,  1619,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,
     119,   120,    -1,    -1,  1223,    -1,    -1,  1226,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
     845,    -1,    36,    37,  1229,   973,  1245,    -1,    -1,  1248,
      -1,    -1,  1660,    -1,   153,   154,   155,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,  1251,    -1,   996,    -1,
      -1,  1347,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,  2440,    -1,    -1,    -1,    -1,  1015,    -1,  1017,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2465,    -1,    -1,
      -1,  2469,    -1,    -1,    -1,    -1,    -1,    -1,  1394,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   228,
     229,    -1,  1408,    -1,  1410,    -1,  2494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2511,   226,  2513,   228,   229,    -1,   153,
      -1,   155,    -1,    -1,  2522,    -1,    -1,    -1,  1367,    -1,
    1369,    -1,  1100,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,  1367,    -1,  1369,    -1,  2544,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2553,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,  1822,  1491,    -1,  1145,    -1,    45,
      46,    47,    -1,    49,    22,    -1,    24,    53,    26,    -1,
      28,    -1,   226,    31,   228,   229,    34,  1845,    36,    -1,
      38,    -1,  2600,  1851,  1520,  2603,    -1,    45,    46,    47,
      -1,    49,  1180,    -1,    -1,    53,    -1,    -1,    84,    85,
      -1,    -1,    -1,    89,    -1,  1873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2643,    84,    85,    -1,    -1,
      -1,    -1,  1491,   119,   120,  1100,    -1,    -1,    -1,    -1,
    1228,  1500,    -1,    -1,    -1,    -1,  1491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,    -1,
      -1,  1520,  1250,    -1,    -1,    -1,    -1,   153,    -1,   155,
    1529,    -1,    -1,    -1,    -1,  1520,    -1,    -1,    -1,    -1,
    1145,    -1,    -1,  1619,  1529,  1953,   172,  1955,    -1,   175,
    1958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2724,    -1,    -1,  2727,
      -1,  1979,    -1,    -1,  1982,  1180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1660,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2754,    -1,    -1,    -1,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,  1608,
      -1,    -1,  1611,    -1,  1219,    -1,    -1,    -1,  1223,  1347,
      -1,    -1,  2780,  1608,    -1,    -1,  1611,    -1,   226,    -1,
     228,   229,  2790,    -1,    -1,  2043,    -1,    -1,    -1,  1367,
    1245,  1369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2065,  2816,  2067,
      -1,    -1,    -1,  2071,    -1,    -1,  1394,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1408,    -1,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2105,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
    2128,   165,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
    2138,    -1,    -1,    53,    -1,    22,    23,    24,    25,    26,
      27,    28,  1347,    -1,    31,    -1,  1822,    34,    35,    36,
      37,    38,    39,  2161,    -1,  2163,    -1,    -1,    45,    46,
      47,    -1,    49,  1491,    84,    85,    53,    -1,    22,    -1,
      24,    -1,  1500,    -1,    28,  1851,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,  1394,
      -1,    -1,  1520,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,  1529,    -1,  1408,    -1,  1410,    -1,    -1,  2966,    -1,
      -1,  2969,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,  2244,    -1,    -1,    -1,
    1825,    -1,    -1,    -1,    -1,    -1,  1845,    -1,    -1,    -1,
      -1,    -1,  1851,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,  1854,
    2278,    -1,    -1,    -1,  1873,    -1,    -1,  1953,  1606,  1955,
    1608,    -1,    -1,  1611,    -1,    -1,  1491,    -1,    -1,    -1,
    1178,  1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,    -1,  1979,    -1,    -1,   226,    -1,   228,   229,
      -1,    -1,    -1,    -1,    -1,  1520,    -1,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,   372,   373,
      -1,    -1,  1660,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,    -1,    -1,  1955,    -1,    -1,  1958,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2043,    -1,    -1,
    1955,    -1,   226,  1958,   228,   229,    -1,    -1,  1266,  2387,
    1979,    -1,    -1,  1982,    -1,  2393,    -1,    -1,  1276,  1277,
      -1,  1279,    -1,    -1,  1979,    -1,    -1,  1982,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,  1619,    -1,    35,    36,    37,    38,
      39,  1309,  1310,    -1,    -1,  1313,    45,    46,    47,  2105,
      49,    -1,  2440,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     494,    -1,  1340,    -1,    -1,  1660,    -1,  2465,    -1,    -1,
      -1,  2469,  2138,    -1,    -1,    -1,  2065,   511,  2067,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2065,    -1,  2067,    -1,    -1,    -1,  2494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1824,    -1,    -1,    -1,
      -1,    -1,    -1,  2511,    -1,  2513,  2105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2522,    -1,    -1,    -1,    -1,    -1,
    2105,    -1,    -1,    -1,    -1,  1853,    -1,    -1,    -1,  2128,
      -1,    -1,    -1,    -1,    -1,    -1,  2544,    -1,    -1,  2138,
      -1,    -1,    -1,  2128,    -1,  2553,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2161,    -1,    -1,    -1,    -1,    -1,  2244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2600,    -1,    -1,  2603,    -1,    -1,    -1,    -1,
      -1,    -1,  2278,    -1,    -1,    -1,    -1,   226,    -1,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,  1822,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1953,    -1,  1955,    -1,    -1,
    1958,    -1,    -1,    -1,    -1,  2643,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,  1851,    -1,    -1,    35,
      36,  1979,    38,    39,  1982,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1585,  1586,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,
      -1,  2387,    -1,    -1,   758,  2043,  2724,  2393,    -1,  2727,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   771,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2065,    -1,  2067,
      -1,    -1,    -1,    -1,    -1,    -1,  2754,    -1,  1953,    -1,
    1955,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1648,    -1,    -1,    -1,  2440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2780,    -1,  1979,    -1,    -1,  2105,    -1,    -1,
      -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,  2387,    -1,
      -1,    -1,    -1,  2469,  2393,    -1,    -1,    -1,    -1,    -1,
    2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2816,    -1,
    2138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,
     864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   873,
      -1,    -1,    -1,  2161,    -1,  2511,    -1,  2513,  2043,    -1,
     226,  2440,   228,   229,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,   151,    -1,  2440,    -1,    -1,   156,    -1,
      -1,    -1,    -1,  1751,    -1,    -1,  2465,    -1,  2544,    -1,
    2469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2465,    -1,    -1,    -1,  2469,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2494,    -1,    -1,    -1,    -1,
    2105,    -1,   946,    -1,    -1,    -1,    -1,    -1,    -1,  2494,
      -1,    -1,    -1,    -1,  2513,  1803,  2244,    -1,    -1,    -1,
      -1,    -1,  1810,  2522,  2600,    -1,    -1,  2603,  2513,    -1,
      -1,    -1,    -1,  2138,    -1,    -1,    -1,  2522,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2544,    -1,    -1,    -1,    -1,
    2278,    -1,    -1,    -1,  2553,    -1,    -1,    -1,  2966,  2544,
      -1,  2969,    -1,    -1,    -1,    -1,    -1,  2643,  2553,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2600,    -1,  1891,  2603,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2600,    -1,    -1,  2603,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2244,
      -1,    -1,    -1,  1931,    -1,   343,    -1,    -1,  2724,    -1,
      -1,  2727,    -1,    -1,    -1,    -1,    -1,    -1,  1946,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2278,   372,   373,    -1,    -1,  2754,   377,
    1124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2440,    -1,  2790,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2724,    -1,    -1,  2727,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2465,    -1,  2724,
      -1,  2469,  2727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   451,    -1,  2754,    -1,    -1,    -1,   457,
      -1,    -1,    -1,    -1,    -1,    -1,  2494,    -1,    -1,  2754,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2780,  2387,  2511,    -1,  2513,    -1,    -1,  2393,  2077,
    2078,  2790,    -1,    -1,  2522,  2780,   494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   502,  2790,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2544,  2816,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2553,    -1,    -1,    -1,    -1,
      -1,  2816,    -1,    -1,    -1,  2440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,   556,    -1,
     558,   559,   560,   561,  2469,   563,    -1,    -1,    -1,    -1,
      -1,    -1,  2600,    -1,    -1,  2603,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   582,    -1,  2174,    -1,    -1,    -1,
    2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1347,    -1,    -1,  2511,    -1,  2513,    -1,
      -1,    -1,    -1,    -1,    -1,  2643,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1367,    -1,  1369,  1370,    -1,  1372,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2544,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1410,  2966,    -1,    -1,
    2969,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1422,    -1,
      -1,  2966,    -1,    -1,  2969,    -1,    -1,    -1,   686,    -1,
     688,    -1,    -1,    -1,    -1,  2600,  2724,    -1,  2603,  2727,
      -1,  1445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1461,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2754,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2643,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   746,    -1,
      -1,    -1,  2780,    -1,    -1,   753,  2344,    -1,  2346,    -1,
     758,    -1,  2790,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   771,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2816,   787,
    2378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   802,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,  2724,
      -1,    -1,  2727,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,  2419,   830,    -1,    -1,   165,    -1,    -1,    -1,  2427,
      -1,    -1,    -1,  2431,    -1,    -1,    -1,    -1,    -1,  2754,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   863,   864,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2790,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2498,    -1,    -1,    -1,    -1,   913,    -1,   915,   916,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2966,    -1,
      -1,  2969,    -1,    -1,    -1,    -1,  1690,    -1,    -1,   147,
      -1,    -1,    -1,   151,    -1,  1699,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   973,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2598,    -1,    -1,    -1,    -1,    -1,    -1,  1015,    -1,  1017,
      -1,    -1,    -1,  2611,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2624,    -1,  1036,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,
      -1,  2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,  1067,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1080,    -1,  1082,    -1,    -1,    -1,    -1,  2677,
    2678,  2679,  2680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1100,    -1,    -1,    -1,    -1,    -1,  2696,    -1,
      -1,    -1,  1110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,    -1,  1124,   457,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2723,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,   494,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   502,    -1,   372,   373,    -1,    -1,    -1,   377,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1953,
      -1,  1955,    -1,    -1,  1958,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1223,    -1,    -1,  1226,    -1,
      -1,    -1,    -1,    -1,    -1,  1979,    -1,    -1,  1982,    -1,
    2828,    -1,  2830,    -1,    -1,    -1,    -1,  1245,    -1,    -1,
    1248,    -1,   582,   451,    -1,    -1,    -1,    -1,    -1,   457,
      -1,    -1,    -1,    -1,  2852,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,  2043,
      -1,    -1,  2890,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2065,    -1,  2067,    -1,  2069,    -1,  2071,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,   556,    -1,
     558,   559,   560,   561,    -1,   563,    -1,    -1,    -1,  1367,
      -1,  1369,  1370,    -1,  1372,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   582,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1394,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1422,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   802,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,
     688,    -1,    -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,
     830,    -1,  1500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,
      -1,    -1,  1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1529,    -1,   863,   864,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,   746,    -1,
    2294,    -1,    -1,    -1,    -1,   753,    -1,    -1,    -1,  1557,
     758,    -1,    -1,    -1,    -1,  2309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   771,    -1,    -1,    -1,  1575,    -1,    -1,
      -1,    -1,    -1,   913,    -1,   915,   916,    -1,    -1,   787,
      -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   802,    -1,    -1,    -1,  1606,    -1,
    1608,    -1,    -1,  1611,    -1,  1613,   946,  1615,    -1,  1617,
      -1,  1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1629,   830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1644,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1660,    -1,    -1,   863,   864,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,  1677,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1690,    -1,    -1,    -1,  2440,    -1,    -1,    -1,
      -1,  1699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   913,    -1,   915,   916,    -1,
      -1,  2465,    -1,    -1,    -1,  2469,    -1,    -1,   926,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2511,    -1,  2513,
    1100,    -1,    -1,    -1,    -1,   973,    -1,    -1,  2522,    -1,
    1110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1124,    -1,    -1,    -1,   996,    -1,
    2544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2553,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1015,    -1,  1017,
      -1,    -1,    -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1036,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1845,    -1,    -1,
      -1,    -1,    -1,  1851,    -1,  1053,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1067,
      -1,    -1,    -1,    -1,    -1,  1873,    -1,    -1,    -1,    -1,
      -1,    -1,  1080,   190,  1082,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1110,  2657,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1953,    -1,  1955,    -1,    -1,
    1958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2724,  1979,    -1,  2727,  1982,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1223,    -1,    -1,  1226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2780,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2043,  2790,  1245,    -1,    -1,
    1248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1394,    -1,    -1,  2065,    -1,  2067,
      -1,  2069,  2816,  2071,    -1,    -1,    -1,    -1,  1408,    -1,
    1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1445,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2128,  1461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2138,    -1,    -1,   165,   166,    -1,    -1,    -1,    -1,  1347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1491,    -1,  2161,    -1,  2163,    -1,    -1,    -1,  1367,
    1500,  1369,  1370,    -1,  1372,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,   494,    -1,    -1,
    1520,   498,    -1,    -1,    -1,   502,  1394,    -1,    -1,  1529,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2966,    -1,  1422,  2969,    -1,  1557,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1575,  2244,  1445,    -1,   556,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,  2266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2278,    -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1491,    -1,    -1,  2294,    -1,    -1,    -1,
      -1,    -1,  1500,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      -1,  2309,   494,   495,    -1,    -1,    -1,    -1,    -1,    -1,
     502,    -1,  1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1660,  1529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1677,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1557,
    1690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1699,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,    -1,   686,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2387,
      -1,    -1,    -1,    -1,    -1,  2393,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1606,    -1,
    1608,    -1,    -1,  1611,    -1,  1613,    -1,  1615,    -1,  1617,
      -1,  1619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2440,    -1,    -1,    -1,  1644,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1660,    -1,    -1,    -1,    -1,  2465,    -1,   491,
      -1,  2469,   494,    -1,    -1,    -1,   498,    -1,    -1,  1677,
     502,    -1,    -1,   790,    -1,   792,   793,   794,    -1,   511,
      -1,    -1,  1690,    -1,    -1,    -1,  2494,    -1,    -1,    -1,
      -1,  1699,    -1,    -1,    -1,    -1,   528,    -1,    -1,    -1,
      -1,    -1,    -1,  2511,    -1,  2513,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2522,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2544,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2553,   863,   864,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,
      -1,   491,    -1,    -1,   494,   495,    -1,    -1,    -1,    -1,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   896,
     897,    -1,    -1,    -1,    -1,   902,    -1,    -1,    -1,    -1,
      -1,    -1,  2600,    -1,    -1,  2603,   913,    -1,   915,   916,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,
      -1,    -1,    -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   946,
      -1,    -1,    -1,    -1,    -1,  2643,    -1,  1845,    -1,    -1,
      -1,    -1,    -1,  1851,    -1,    -1,    -1,    -1,    -1,  2657,
      -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1873,    -1,    -1,    -1,    -1,
      -1,   863,   864,    -1,    -1,    -1,    -1,    -1,    -1,   996,
      -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   889,    -1,    -1,
      -1,    -1,    -1,  2043,   896,   897,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2724,    -1,    -1,  2727,
      -1,   913,    -1,   915,   916,  2065,    -1,  2067,    -1,  2069,
     491,  2071,    -1,   494,   926,    -1,    -1,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,  1953,  2754,  1955,    -1,    -1,
    1958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1080,    -1,  2105,    -1,    -1,    -1,    -1,
      -1,  1979,  2780,    -1,  1982,   491,    -1,    -1,   494,    -1,
      -1,    -1,  2790,    -1,    -1,    -1,   502,    -1,  2128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1124,  2816,    -1,
      -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2161,    -1,  2163,    -1,    -1,    -1,    -1,  1145,    -1,
      -1,   863,   864,    -1,    -1,  2043,    -1,    -1,    -1,    -1,
      -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2065,    -1,  2067,
      -1,  2069,    -1,  2071,   896,   897,    -1,    -1,    -1,    -1,
     902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   913,    -1,   915,   916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   926,    -1,    -1,  2105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1223,    -1,    -1,  1226,
      -1,    -1,    -1,    -1,   946,   845,   948,    -1,    -1,    -1,
    2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2138,    -1,  1124,   863,   864,    -1,    -1,    -1,  2278,    -1,
      -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2161,  2294,  2163,    -1,    -1,  2966,   889,
      -1,  2969,    -1,    -1,    -1,    -1,   896,   897,    -1,  2309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   913,    -1,   915,   916,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2244,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1367,    -1,  1369,    -1,    -1,    -1,    -1,    -1,  2266,    -1,
    1377,    -1,    -1,    -1,    -1,    -1,    -1,  1384,    -1,    -1,
    2278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   845,    -1,  2294,    -1,    -1,    -1,
      -1,  1408,  1124,  1410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2309,   863,   864,    -1,  1422,    -1,    -1,    -1,    -1,
      -1,    -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1445,   845,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1461,    -1,    -1,   863,   864,    -1,
      -1,    -1,   913,  1470,   915,   916,    -1,   873,    -1,    -1,
      -1,    -1,  1479,    -1,    -1,   926,    -1,    -1,    -1,    -1,
      -1,  2511,  1489,  2513,  1491,    -1,    -1,    -1,    -1,  2387,
      -1,    -1,  2522,  1500,    -1,  2393,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1124,    -1,    -1,   913,    -1,   915,
     916,    -1,    -1,  1520,  2544,    -1,    -1,    -1,    -1,    -1,
     926,    -1,  1529,  2553,    -1,    -1,  1408,    -1,  1410,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1422,    -1,  2440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1557,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1445,    -1,    -1,    -1,  2465,  1575,    -1,
    2600,  2469,    -1,  2603,    -1,    -1,    -1,    -1,    -1,  1461,
      -1,    -1,    -1,    -1,  1466,    -1,    -1,    -1,  1470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2494,  1479,    -1,    -1,
      -1,  1608,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1491,
      -1,    -1,  1619,  2511,    -1,  2513,    -1,    -1,  1500,    -1,
      -1,    -1,  1629,    -1,  2522,    -1,    -1,  2657,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1520,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2544,  1529,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2553,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1124,    -1,  1557,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1690,    -1,    -1,  1408,    -1,  1410,    -1,
      -1,    -1,  1699,  1575,    -1,    -1,    -1,    -1,    -1,    -1,
    1422,    -1,  2600,    -1,    -1,  2603,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1124,    -1,
      -1,    -1,    -1,  1445,  2754,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1461,
      -1,    -1,    -1,    -1,    -1,  2643,    -1,    -1,  1470,    -1,
    2780,    -1,    -1,    -1,    -1,    -1,    -1,  1479,    -1,  2657,
    2790,    -1,    -1,    -1,    -1,    -1,    -1,  1489,    -1,  1491,
      -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,  1500,   494,
      -1,    -1,    -1,    -1,    -1,    -1,  2816,   502,  1408,    -1,
    1410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1520,    -1,
      -1,    -1,  1422,    -1,    -1,    -1,    -1,  1529,  1690,    -1,
      -1,    -1,    -1,    -1,    -1,  1822,    -1,  1699,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1445,  2724,    -1,    -1,  2727,
      -1,    -1,    -1,    -1,    -1,  1557,    -1,    -1,  1845,    -1,
      -1,  1461,    -1,    -1,    -1,    -1,  1466,    -1,    -1,    -1,
    1470,    -1,    -1,  1575,    -1,    -1,  2754,    -1,    -1,  1479,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1500,    -1,  2780,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1799,  2816,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2966,  1557,    -1,  2969,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1955,    -1,
      -1,  1958,    -1,    -1,    -1,  1575,    -1,  1408,    -1,  1410,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,    -1,
      -1,  1422,  1979,    -1,    -1,  1982,    -1,  1699,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1445,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1408,  2010,  1410,    -1,    -1,    -1,    -1,    -1,
    1461,    -1,    -1,    -1,    -1,    -1,  1422,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2043,    -1,    -1,  1445,
    1491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1500,
      -1,    -1,    -1,    -1,    -1,  1461,    -1,    -1,  2065,    -1,
    2067,    -1,  2069,    -1,  2071,    -1,    -1,    -1,  2966,  1520,
    1690,  2969,    -1,    -1,  2081,    -1,    -1,  2084,  1529,  1699,
      -1,    -1,    -1,    -1,    -1,  1491,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,  2105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1557,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1520,    -1,    -1,    -1,    -1,    -1,
      -1,  2128,    -1,  1529,  1575,    -1,    -1,    -1,    -1,    -1,
     845,  2138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   863,   864,
      -1,  1557,    -1,    -1,  2161,    -1,  2163,    -1,   873,    -1,
      -1,  2043,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1575,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2065,    -1,  2067,    -1,  2069,    -1,  2071,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,  2081,
     915,   916,  2084,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2244,    -1,  1690,
      -1,    -1,    -1,    -1,    -1,    -1,  2128,    -1,  1699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2138,    -1,    -1,  2266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2161,
      -1,  2163,    -1,    -1,  1690,    -1,    -1,  2294,    -1,    -1,
      -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2043,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2065,    -1,  2067,    -1,  2069,    -1,  2071,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2081,
      -1,    -1,  2084,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2387,    -1,    -1,  2105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2128,    -1,    -1,  1124,
      -1,    -1,  2294,    -1,    -1,    -1,  2138,    -1,    -1,    -1,
      -1,    -1,    -1,  2043,    -1,    -1,    -1,  2309,    -1,    -1,
      -1,    -1,    -1,  2440,    -1,    -1,    -1,    -1,    -1,  2161,
      -1,  2163,    -1,    -1,    -1,  2065,    -1,  2067,    -1,  2069,
      -1,  2071,    -1,    -1,    -1,    -1,    -1,    -1,  2465,    -1,
      -1,  2081,  2469,    -1,  2084,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2362,    -1,    -1,    -1,    -1,  2105,    -1,  2494,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2511,    -1,  2513,    -1,  2128,    -1,
      -1,    -1,    -1,    -1,    -1,  2522,    -1,    -1,  2138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2544,    -1,    -1,
      -1,  2161,    -1,  2163,    -1,    -1,  2553,    -1,    -1,   555,
     556,    -1,   558,   559,   560,   561,    -1,   563,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2309,    -1,    -1,
      -1,    -1,  2043,  2600,    -1,    -1,  2603,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2065,    -1,  2067,    -1,  2069,    -1,
    2071,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2511,
      -1,  2513,    -1,    -1,    -1,    -1,  2643,  2043,    -1,    -1,
    2522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2657,    -1,    -1,    -1,  2105,    -1,    -1,    -1,    -1,  2065,
      -1,  2067,  2544,  2069,    -1,  2071,    -1,    -1,    -1,    -1,
      -1,  2553,    -1,    -1,  2294,    -1,    -1,  2128,    -1,    -1,
     686,    -1,   688,    -1,    -1,    -1,    -1,  2138,    -1,  2309,
      -1,    -1,    -1,  1408,    -1,  1410,    -1,    -1,    -1,  2105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1422,    -1,    -1,
    2161,    -1,  2163,    -1,    -1,    -1,    -1,  2724,  2600,    -1,
    2727,  2603,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1445,    -1,  2138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1461,  2754,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2161,    -1,  2163,    -1,    -1,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2780,    -1,  2657,  1491,    -1,    -1,    -1,
      -1,    -1,    -1,  2790,    -1,  1500,    -1,    -1,    -1,  2511,
      -1,  2513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2522,    -1,    -1,    -1,    -1,  1520,    -1,  2689,    -1,  2816,
      -1,    -1,    -1,    -1,  1529,   555,   556,    -1,   558,   559,
     560,   561,  2544,   563,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1557,  2294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2309,    -1,
    1575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2754,    -1,    -1,    -1,    -1,    -1,  2600,    -1,
      -1,  2603,    -1,    -1,    -1,    -1,    -1,    -1,  2294,    -1,
      -1,  2511,    -1,  2513,    -1,    -1,    -1,    -1,  2780,    -1,
      -1,    -1,  2522,  2309,    -1,    -1,    -1,   913,  2790,   915,
     916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     926,    -1,    -1,    -1,  2544,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2553,  2816,  2657,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,   688,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2966,
      -1,    -1,  2969,    -1,    -1,    -1,    -1,   973,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1690,    -1,    -1,    -1,    -1,
    2600,    -1,    -1,  2603,  1699,    -1,    -1,    -1,    -1,    -1,
     996,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1015,
      -1,  1017,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1036,    -1,  2754,    -1,    -1,    -1,    -1,  2657,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1053,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2780,    -1,
    2511,  1067,  2513,    -1,    -1,    -1,    -1,    -1,  2790,    -1,
      -1,  2522,    -1,    -1,  1080,    -1,  1082,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2966,    -1,    -1,  2969,    -1,    -1,
      -1,    -1,    -1,  2544,  2816,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2553,    -1,    -1,  2511,    -1,  2513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2754,    -1,    -1,    -1,  2544,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2553,    -1,  2600,
      -1,    -1,  2603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2780,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2790,    -1,    -1,   913,    -1,   915,   916,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2600,    -1,  2816,  2603,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2657,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1223,    -1,    -1,
    1226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   973,    -1,    -1,    -1,    -1,    -1,  1245,
      -1,    -1,  1248,    -1,  2966,    -1,    -1,  2969,    -1,    -1,
      -1,  2657,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1015,    -1,  1017,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1036,    -1,    -1,    -1,
      -1,    -1,    -1,  2754,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1067,  2043,  2780,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2790,
    1080,    -1,  1082,    -1,    -1,    -1,  2966,    -1,  2754,  2969,
    2065,    -1,  2067,    -1,  2069,    -1,  2071,    -1,    -1,    -1,
      -1,  1367,    -1,  1369,    -1,  2816,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2780,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,
    2105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2816,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2161,    -1,  2163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1223,    -1,  1491,  1226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1245,    -1,    -1,  1248,    -1,
      -1,    -1,    -1,    -1,  1520,  2966,    -1,    -1,  2969,    -1,
      -1,    -1,    -1,  1529,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1557,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,    -1,  1575,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,  2294,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2309,    -1,    -1,    -1,    -1,    -1,
    1606,    -1,  1608,    -1,    -1,  1611,    -1,  1613,    -1,  1615,
      -1,  1617,    -1,  1619,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1629,    -1,    -1,    -1,  1367,    -1,  1369,
      -1,   555,   556,    -1,   558,   559,   560,   561,  1644,   563,
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
      -1,  1491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1500,    -1,   686,    -1,   688,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1529,
      -1,    -1,    -1,    -1,    -1,    -1,  2511,    -1,  2513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2522,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1822,  1557,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2544,
      -1,    -1,    -1,    -1,    -1,  1575,    -1,    -1,  2553,  1845,
      -1,    -1,    -1,    -1,    -1,  1851,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1606,  1873,  1608,    -1,
      -1,  1611,    -1,  1613,    -1,  1615,    -1,  1617,    -1,  1619,
      -1,    -1,    -1,    -1,    -1,  2600,    -1,    -1,  2603,  1629,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1644,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2657,    -1,    -1,    -1,    -1,    -1,    -1,  1955,
      -1,    -1,  1958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1979,    -1,    -1,  1982,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,
      -1,   915,   916,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2754,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   973,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2065,
      -1,  2067,    -1,    -1,    -1,  2780,    -1,    -1,    -1,    -1,
      -1,    -1,   996,    -1,    -1,  2790,    -1,    -1,    -1,    -1,
      -1,    -1,  1822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1015,    -1,  1017,    -1,    -1,    -1,    -1,    -1,  2105,
      -1,  2816,    -1,    -1,    -1,  1845,    -1,    -1,    -1,    -1,
      -1,  1851,  1036,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,    -1,  1053,
      -1,    -1,  2138,  1873,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1067,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2161,  1080,  2163,  1082,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1955,    -1,    -1,  1958,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2244,  1979,
      -1,    -1,  1982,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,    -1,
    2266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1223,
      -1,    -1,  1226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1245,    -1,    -1,  1248,  2065,    -1,  2067,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2387,    -1,    -1,    -1,    -1,    -1,  2393,  2128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2161,    -1,  2163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1367,    -1,  1369,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2465,
      -1,    -1,    -1,  2469,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2494,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2244,    -1,    -1,  2513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2544,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2553,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1491,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2600,    -1,  1520,  2603,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1529,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1557,    -1,    -1,    -1,  2643,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2387,    -1,    -1,
      -1,  1575,    -1,  2393,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1606,    -1,  1608,    -1,    -1,  1611,    -1,  1613,
      -1,  1615,    -1,  1617,    -1,  1619,    -1,    -1,    -1,    -1,
    2440,    -1,    -1,    -1,    -1,  1629,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2724,    -1,
    1644,  2727,    -1,    -1,    -1,  2465,    -1,    -1,    -1,  2469,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2754,    -1,
      -1,    -1,    -1,    -1,  2494,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2513,  2780,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2522,    -1,  2790,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2544,    -1,    -1,    -1,    -1,    -1,
    2816,    -1,    -1,  2553,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2600,    -1,    -1,  2603,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1822,    -1,
      -1,    -1,    -1,  2643,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1845,    -1,    -1,    -1,    -1,    -1,  1851,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2966,    -1,    -1,  2969,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2724,    -1,    -1,  2727,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2754,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1955,    -1,    -1,  1958,    -1,    -1,    -1,    -1,    -1,
    2780,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2790,    -1,    -1,    -1,    -1,  1979,    -1,    -1,  1982,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2816,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2065,    -1,  2067,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2966,    -1,    -1,  2969,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2161,    -1,  2163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,  2387,    -1,    -1,    -1,    -1,    -1,  2393,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2440,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2465,    -1,    -1,    -1,  2469,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2522,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2553,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2600,    -1,    -1,  2603,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2643,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2724,    -1,    -1,  2727,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2780,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2790,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,  2966,    -1,    -1,  2969
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
     228,   229,   789,   837,   900,  1022,  1028,  1041,  1047,  1055,
    1073,  1075,  1078,  1079,  1095,  1107,   693,   790,   838,   901,
    1022,  1028,  1041,  1047,  1055,  1073,  1075,  1079,  1095,  1107,
     315,   775,   768,   700,   702,   362,   707,     4,     5,    31,
      53,   272,   798,   844,   907,  1022,  1028,  1041,  1052,  1073,
      26,    54,   814,   860,   935,  1020,  1028,  1047,  1073,  1079,
    1122,    55,    56,   815,   861,   936,  1086,  1088,    37,   816,
     862,   937,  1022,  1028,  1041,  1047,  1077,  1107,    57,   818,
     863,   938,  1022,  1028,  1041,  1045,  1077,     4,     5,    10,
      14,   225,   821,   865,   940,   216,   423,   435,   449,   562,
    1022,   755,   249,    24,    32,   284,   285,   286,   287,  1015,
     249,   760,    22,    45,    46,    47,    49,   792,   839,   902,
     978,  1028,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1079,
    1107,    22,    24,   116,   117,   118,   119,   120,   121,   122,
     123,   226,   386,   424,   436,   450,   452,   453,   454,   457,
     481,   483,   496,   945,  1012,  1022,  1028,  1041,  1105,    29,
     120,   200,   476,   565,   566,   567,   568,   569,   570,   571,
      29,   225,   573,   603,    84,    85,   788,   836,   899,  1004,
    1008,  1012,  1022,  1028,  1041,  1105,  1122,   147,   201,     5,
       7,    10,    12,    62,    83,   147,   225,   278,   281,   282,
     323,   342,   344,   346,   351,   357,   366,   370,   372,   376,
     403,   572,   577,   587,   597,   602,   607,   617,   627,   632,
     637,   642,   647,   652,   657,   667,   677,   686,   688,   694,
     697,   704,   706,   710,   714,   718,   720,   724,   726,   728,
     730,   732,   734,   736,   742,   744,   747,   750,   756,   249,
     379,   347,    22,   132,   133,   134,   387,   425,   437,   450,
     452,   453,   454,   481,   498,   500,   502,   948,  1012,  1022,
    1028,  1041,  1047,  1073,  1105,  1122,   137,   138,   139,   140,
     141,   185,   389,   427,   439,   503,   504,   505,   506,   508,
     509,   638,     7,     8,   643,   352,   148,   148,   360,     4,
       5,     8,   608,    22,    89,   153,   154,   155,   172,   175,
     393,   431,   443,   454,   457,   510,   521,   523,   525,   530,
     550,   968,  1008,  1022,  1028,  1041,  1078,   422,   434,   448,
     457,   143,   189,   190,   249,   398,   401,   402,   418,   419,
     420,   142,   144,   195,   405,   407,   410,   411,   417,   418,
     419,   420,   421,   249,   378,    29,   717,    29,   719,   721,
     723,   725,   131,   727,    22,    23,    25,    27,   780,   828,
     870,   941,  1002,  1010,  1012,  1017,  1022,  1028,  1041,  1105,
    1107,    29,   729,     7,    83,   148,   167,   326,   341,   793,
     840,   903,   978,  1022,  1028,  1041,  1047,  1055,  1061,  1067,
    1069,  1071,  1073,  1075,  1078,  1079,  1095,  1107,   249,  1023,
    1048,   249,  1096,  1074,  1080,   249,  1029,  1042,   256,   900,
     794,   841,   904,   978,  1022,  1028,  1041,  1047,  1055,  1061,
    1067,  1069,  1071,  1073,  1075,  1079,  1095,  1107,   256,   901,
     249,   316,   249,   249,    50,    51,    52,   797,   843,   906,
    1055,  1061,  1069,  1082,  1084,  1085,   249,   168,   173,   174,
     249,   395,   433,   447,   536,   546,   548,    26,   272,   799,
     845,   908,   909,   910,   978,  1022,  1028,  1041,  1047,  1067,
    1069,  1071,  1073,  1079,  1108,    29,   709,    29,   711,  1053,
     249,   256,   907,  1123,   249,   256,   935,  1087,  1089,   256,
     937,  1046,   256,   938,    22,   256,   990,   249,   247,   449,
     822,   866,   940,   214,   765,   766,   249,   288,   247,   286,
     214,   761,   762,    48,    58,   823,   824,   867,  1006,  1090,
     979,  1068,  1070,   249,  1072,   256,   902,   249,  1013,   451,
     249,   458,   482,   249,   497,  1106,   247,   436,   477,   247,
     569,   247,   568,   578,     4,     5,   272,   574,   575,   576,
    1004,  1008,  1012,  1022,  1028,  1041,  1052,  1073,  1105,  1122,
     604,   605,   606,  1004,  1008,  1012,  1020,  1022,  1028,  1041,
    1047,  1073,  1079,  1105,  1122,  1005,  1009,   247,   899,    29,
     687,   225,   743,   748,   751,     7,    83,   225,   214,   380,
      22,   388,   426,   438,   450,   452,   453,   454,   481,   498,
     500,   502,   974,  1012,  1022,  1028,  1041,  1047,  1055,  1061,
    1067,  1069,  1071,  1073,  1079,  1105,  1107,   249,   499,   501,
     247,   437,   249,   214,   247,   439,    22,   454,   457,   510,
     521,   525,   530,   550,   639,   640,   641,   958,  1022,  1028,
    1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1078,  1079,
    1107,    29,   225,   648,   658,   454,   457,   510,   521,   525,
     530,   550,   644,   645,   646,   968,  1004,  1008,  1012,  1022,
    1028,  1041,  1078,  1105,  1122,    22,   145,   146,   390,   428,
     440,   510,   517,   519,   550,   951,   354,   356,    22,    89,
     169,   394,   432,   444,   445,   446,   457,   514,   536,   541,
     971,  1078,    29,   613,    29,   618,   633,    22,   454,   457,
     510,   521,   525,   530,   550,   609,   610,   611,   954,  1002,
    1010,  1012,  1017,  1022,  1028,  1041,  1078,  1105,  1107,   249,
     249,   522,   524,   526,   531,   551,   247,   443,   247,   448,
     214,   399,   400,   249,   412,   167,   192,   193,   194,   406,
     409,   413,   414,   415,   416,   247,   411,   247,   410,   214,
     385,    22,   796,   842,   905,   982,  1002,  1010,  1012,  1017,
    1022,  1028,  1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,
    1075,  1079,  1095,  1105,  1107,   804,   850,   925,   941,  1002,
    1010,  1012,  1017,  1022,  1028,  1041,  1047,  1055,  1073,  1075,
    1078,  1079,  1095,  1105,  1107,   698,   805,   851,   926,   941,
    1002,  1010,  1012,  1017,  1022,  1028,  1041,  1047,  1055,  1073,
    1075,  1079,  1095,  1105,  1107,   806,   852,   927,   941,  1002,
    1010,  1012,  1017,  1020,  1022,  1028,  1041,  1047,  1073,  1079,
    1105,  1107,   807,   853,   928,   941,  1002,  1010,  1012,  1017,
    1022,  1028,  1041,  1047,  1105,  1107,   808,   854,   929,   941,
    1002,  1010,  1012,  1017,  1022,  1028,  1041,  1105,  1107,    29,
     733,   809,   855,   930,   941,  1002,  1010,  1012,  1017,  1022,
    1028,  1041,  1105,  1107,   942,  1003,  1011,  1018,   247,   870,
     731,   450,   452,   453,   454,   481,   498,   500,   502,   810,
     856,   931,   948,  1012,  1022,  1028,  1041,  1047,  1073,  1105,
    1107,   336,     7,   230,   334,   330,   332,   202,   203,   209,
     781,   829,   871,   872,   873,   874,   875,   876,  1030,  1031,
    1035,   120,   787,   835,   896,   256,   903,    69,    70,    73,
      74,   214,   221,   222,   223,   242,   243,   244,   253,   254,
     255,  1118,  1119,  1120,  1121,   249,   249,   214,   218,   219,
     220,  1057,  1060,   249,   249,   249,  1076,   249,   249,   900,
     256,   904,   901,   214,    33,   318,   319,   320,   321,    61,
     214,   776,   777,   778,   779,    69,    70,   242,   243,   244,
     253,   254,   255,   769,   770,  1083,   256,   906,   214,   703,
     249,   547,   249,   214,   396,   397,   247,   447,  1109,   256,
     908,  1055,  1061,   713,   272,   800,   846,   911,   912,   913,
     941,  1002,  1010,  1012,  1017,  1022,  1028,  1041,  1047,  1073,
    1078,  1079,  1095,  1105,  1108,   715,   272,   801,   847,   914,
     915,   916,   941,  1002,  1010,  1012,  1017,  1022,  1028,  1041,
    1047,  1073,  1079,  1095,  1105,  1108,   249,    40,   273,   907,
     249,    17,    83,   225,  1021,   935,   249,   249,   937,   249,
     938,   249,   990,    69,    70,    73,    74,   214,   242,   243,
     244,   253,   254,   255,   563,   564,   449,   247,   250,  1016,
     249,   286,   247,   250,  1007,   249,   247,   867,   249,   249,
     249,   214,  1062,   249,   902,    30,   214,   946,   249,   249,
      69,    70,    73,    74,   214,   242,   243,   244,   253,   254,
     255,   455,   456,   249,   249,   124,   214,   484,   486,   249,
     249,   436,   249,   569,   568,   272,   579,   580,   581,   978,
    1004,  1008,  1012,  1022,  1028,  1041,  1047,  1055,  1061,  1067,
    1069,  1071,  1073,  1079,  1105,  1107,    29,   583,    29,   588,
     247,   576,   247,   606,   249,   249,   899,   695,   791,  1078,
     817,  1078,    57,   819,   864,   939,  1043,  1078,   820,  1078,
     225,     7,   250,   249,   247,   438,   131,   214,   949,   249,
     249,   437,   142,   143,   144,   507,   439,   249,   247,   641,
     653,     4,     5,    53,   454,   457,   510,   521,   525,   530,
     550,   649,   650,   651,   968,  1004,  1008,  1012,  1022,  1028,
    1041,  1052,  1073,  1078,  1092,  1105,  1122,   454,   457,   510,
     521,   525,   530,   550,   659,   660,   661,   968,  1004,  1008,
    1012,  1020,  1022,  1028,  1041,  1047,  1073,  1078,  1079,  1105,
    1122,   247,   646,   249,   518,   520,   247,   440,    22,   391,
     429,   441,   457,   510,   550,   962,  1078,    22,   392,   430,
     442,   457,   510,   550,   965,  1078,   249,   249,   249,   247,
     444,   623,   454,   457,   510,   521,   525,   530,   550,   614,
     615,   616,   954,  1002,  1010,  1012,  1017,  1022,  1028,  1041,
    1047,  1055,  1073,  1075,  1078,  1079,  1092,  1095,  1105,  1107,
     628,   454,   457,   510,   521,   525,   530,   550,   619,   620,
     621,   954,  1002,  1010,  1012,  1017,  1022,  1028,  1041,  1047,
    1055,  1073,  1075,  1078,  1079,  1092,  1095,  1105,  1107,   454,
     457,   510,   521,   525,   530,   550,   634,   635,   636,   954,
    1002,  1010,  1012,  1017,  1020,  1022,  1028,  1041,  1047,  1073,
    1078,  1079,  1105,  1107,   249,   247,   611,   147,   214,   969,
     151,   152,   214,   511,   513,   249,   249,   249,   249,   249,
     443,   448,   247,   250,   399,   249,   247,   408,   410,   411,
     406,   411,   406,   410,   250,   249,   256,   905,   256,   925,
     796,   256,   926,   256,   927,   256,   928,   256,   929,   735,
      22,   450,   452,   453,   481,   498,   500,   502,   812,   858,
     933,   993,  1002,  1010,  1012,  1017,  1022,  1028,  1041,  1047,
    1073,  1078,  1105,  1107,   256,   930,   249,   249,   249,   249,
     870,   450,   452,   453,   454,   481,   498,   500,   502,   811,
     857,   932,   974,  1012,  1022,  1028,  1041,  1047,  1055,  1061,
    1067,  1069,  1071,  1073,  1079,  1105,  1107,   256,   931,   272,
     785,   833,   890,   891,   892,  1022,  1028,  1041,  1052,  1073,
     338,   454,   457,   510,   521,   525,   530,   550,   784,   832,
     889,   968,  1004,  1008,  1012,  1022,  1028,  1041,  1078,  1105,
    1122,   782,   830,   877,   878,   879,   880,   881,   882,  1030,
    1031,  1035,   783,   831,   883,   884,   885,   886,   887,   888,
    1030,  1031,  1035,   249,  1032,  1036,   247,   871,   204,  1033,
     205,  1037,   206,  1039,  1108,   207,  1111,   897,   247,   896,
     903,   248,   247,    75,    76,    77,    78,    79,    80,    81,
      82,   214,  1024,  1027,   214,   217,  1049,  1054,   247,   248,
     250,  1059,    40,    41,    42,    43,    44,   233,   234,   235,
    1097,  1099,  1100,  1103,  1104,   214,   258,   224,  1081,   258,
     214,   259,   260,   260,   904,   317,   322,   247,   320,   250,
     248,   250,   248,   249,   906,   250,   170,   214,   537,   539,
     249,    95,    96,    97,   549,   247,   250,   447,   249,   908,
     272,   802,   848,   917,   918,   919,   920,   982,  1002,  1010,
    1012,  1017,  1022,  1028,  1041,  1047,  1067,  1069,  1071,  1073,
    1078,  1079,  1095,  1105,  1108,   256,   911,  1055,  1075,   272,
     803,   849,   921,   922,   923,   924,   982,  1002,  1010,  1012,
    1017,  1022,  1028,  1041,  1047,  1067,  1069,  1071,  1073,  1079,
    1095,  1105,  1108,   256,   914,  1055,  1075,   260,   247,   250,
     223,  1119,  1124,  1125,   250,   260,   260,   260,    13,   214,
     991,   248,   765,   250,    87,    88,    89,    90,   292,   293,
     296,   761,   249,    75,    76,    77,    78,    79,    80,    81,
      82,   214,  1091,   867,    29,   214,   980,   260,   260,   247,
     248,   250,   260,   248,   250,   226,   227,   228,   229,  1014,
     258,   248,   124,   125,   127,   128,   129,   130,   459,   460,
     461,   471,   258,   487,   247,   250,   248,   258,   260,   197,
     198,   478,   479,   247,   581,   593,   272,   584,   585,   586,
     941,  1002,  1004,  1008,  1010,  1012,  1017,  1022,  1028,  1041,
    1047,  1055,  1073,  1075,  1078,  1079,  1095,  1105,  1107,   598,
     272,   589,   590,   591,   941,  1002,  1004,  1008,  1010,  1012,
    1017,  1022,  1028,  1041,  1047,  1055,  1073,  1075,  1078,  1079,
    1095,  1105,  1107,   576,   606,   258,   258,   795,  1078,  1044,
     256,   939,   225,   120,   167,   199,   381,   382,   383,   472,
      29,   131,   214,   975,   438,   248,   250,   258,   258,   250,
      29,   147,   214,   959,   641,   454,   457,   510,   521,   525,
     530,   550,   654,   655,   656,   958,  1004,  1008,  1012,  1022,
    1028,  1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1078,
    1079,  1092,  1105,  1107,    29,   663,    29,   668,   249,   247,
     651,   247,   661,   646,   147,   214,   952,   249,   249,   440,
     249,   247,   441,   249,   247,   442,   147,   214,   972,   214,
     515,   171,   214,   542,   544,   444,    22,   454,   457,   510,
     521,   525,   530,   550,   624,   625,   626,   985,  1002,  1010,
    1012,  1017,  1022,  1028,  1041,  1047,  1055,  1061,  1067,  1069,
    1071,  1073,  1075,  1078,  1079,  1095,  1105,  1107,   247,   616,
     454,   457,   510,   521,   525,   530,   550,   629,   630,   631,
     985,  1002,  1010,  1012,  1017,  1022,  1028,  1041,  1047,  1055,
    1061,  1067,  1069,  1071,  1073,  1075,  1078,  1079,  1095,  1105,
    1107,   247,   621,   247,   636,   147,   214,   225,   955,   611,
     248,   250,   247,   250,   248,   260,   260,   156,   157,   158,
     159,   160,   161,   162,   527,   528,    75,    76,    77,    78,
      79,    80,    81,    82,   214,   532,   533,   534,   535,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   214,   552,
     554,   557,   560,   561,   400,   250,   258,   408,   247,   411,
     247,   410,   247,   406,   247,   406,   247,   411,   983,   905,
     925,   926,   927,   928,   929,    22,   450,   452,   453,   481,
     498,   500,   502,   813,   859,   934,   997,  1002,  1010,  1012,
    1017,  1022,  1028,  1041,  1047,  1055,  1061,  1067,  1069,  1071,
    1073,  1078,  1079,  1105,  1107,   249,   256,   933,   930,   214,
     225,   943,   258,   260,   230,   231,   232,  1019,   256,   932,
     931,   247,   890,  1108,  1111,   272,   454,   457,   510,   521,
     525,   530,   550,   786,   834,   893,   894,   895,   968,  1004,
    1008,  1012,  1022,  1028,  1041,  1052,  1073,  1078,  1105,   247,
     889,   247,   877,  1033,  1037,  1039,  1108,  1111,   247,   883,
    1033,  1037,  1039,  1108,  1111,   259,   261,   249,   249,   871,
    1034,  1038,  1040,  1112,   249,   896,   260,  1119,   247,   250,
     248,  1050,   250,   248,  1058,   214,   249,   250,  1098,  1101,
     247,   250,   250,   250,   247,   250,   250,   250,   249,   320,
     550,   826,   827,   869,   214,   779,    59,   825,   868,  1064,
     214,   771,   772,   260,   797,   540,   247,   250,   248,   260,
     250,   396,   214,  1114,  1117,  1120,  1121,   256,   917,  1055,
    1075,  1061,   911,   256,   921,  1055,  1075,  1061,   914,   250,
     214,   248,   247,   250,   250,   250,   248,   250,   260,   247,
     248,   293,   294,   258,   250,   248,   250,   250,   250,  1063,
     214,   250,   947,   250,   250,   260,   462,   248,   247,   250,
     249,   485,   260,   250,   250,   480,   250,   581,   272,   594,
     595,   596,   982,  1002,  1004,  1008,  1010,  1012,  1017,  1022,
    1028,  1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1075,
    1078,  1079,  1095,  1105,  1107,   247,   586,   272,   599,   600,
     601,   982,  1002,  1004,  1008,  1010,  1012,  1017,  1022,  1028,
    1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1075,  1078,
    1079,  1095,  1105,  1107,   247,   591,   250,   250,   249,   939,
     473,   249,   248,   248,   250,   950,   250,   250,   248,   248,
     250,   247,   656,   673,   454,   457,   510,   521,   525,   530,
     550,   664,   665,   666,   954,  1002,  1004,  1008,  1010,  1012,
    1017,  1022,  1028,  1041,  1047,  1055,  1073,  1075,  1078,  1079,
    1092,  1095,  1105,  1107,   678,   454,   457,   510,   521,   525,
     530,   550,   669,   670,   671,   954,  1002,  1004,  1008,  1010,
    1012,  1017,  1022,  1028,  1041,  1047,  1055,  1073,  1075,  1078,
    1079,  1092,  1095,  1105,  1107,    40,  1093,   651,   661,   148,
     250,   260,   260,   147,   214,   963,   441,   147,   214,   966,
     442,   167,   250,   247,   250,   545,   247,   250,   248,   249,
     247,   626,   616,   247,   631,   621,   636,   248,   248,   250,
     970,   512,   260,   250,   250,   250,   248,   250,   247,   249,
     249,   249,   247,   250,   248,   176,   177,   247,   555,   558,
     560,   561,   250,   411,   410,   406,   406,   411,    29,   214,
     225,   984,   249,   256,   934,   131,   214,   225,   994,   933,
     248,   250,   250,   250,   250,   932,   890,   247,   893,  1108,
    1111,   889,   877,   883,   247,   250,   261,   259,   265,   249,
     249,   249,   249,   127,   130,   898,   250,  1025,  1026,   247,
    1051,   260,  1056,   260,   248,   247,   214,   259,   292,   247,
     869,   249,   247,   248,   250,   249,   538,   260,   250,  1110,
    1115,   917,   921,   260,  1119,   992,   250,   293,   289,   238,
     250,   981,   260,   250,   258,   250,   249,   260,   460,   214,
     488,   489,   260,   248,   247,   596,   586,   247,   601,   591,
     260,   249,   125,   127,   128,   129,   130,   197,   198,   384,
     977,   976,   258,   961,   960,   656,   454,   457,   510,   521,
     525,   530,   550,   674,   675,   676,   985,  1002,  1004,  1008,
    1010,  1012,  1017,  1022,  1028,  1041,  1047,  1055,  1061,  1067,
    1069,  1071,  1073,  1075,  1078,  1079,  1092,  1095,  1105,  1107,
     247,   666,   454,   457,   510,   521,   525,   530,   550,   679,
     680,   681,   985,  1002,  1004,  1008,  1010,  1012,  1017,  1022,
    1028,  1041,  1047,  1055,  1061,  1067,  1069,  1071,  1073,  1075,
    1078,  1079,  1092,  1095,  1105,  1107,   247,   671,  1094,   250,
     248,   250,   250,   149,   250,   150,   250,   248,   516,   249,
     543,   260,    29,   147,   214,   225,   986,   626,   631,   956,
     957,   258,   260,   163,   164,   165,   166,   529,   532,   214,
     214,   214,   553,   260,   555,   560,   176,   177,   247,   556,
     559,   560,   561,   248,   248,   250,    29,   131,   214,   225,
     998,   934,   248,   248,   250,   944,   893,   259,   250,   248,
     250,   259,   270,   270,   270,   214,  1113,  1116,  1120,  1121,
     248,   260,   260,   260,   260,   250,   250,  1099,   233,   234,
     235,  1102,   250,   869,    60,  1065,   771,   214,   773,   214,
     260,   248,   247,   250,   258,     6,     7,    83,   225,   277,
     282,   291,   314,   323,   682,   688,   690,   699,   704,   706,
     708,   712,   736,   738,   740,   744,   745,   752,   754,   756,
     758,   251,   258,   214,   463,   464,   250,   214,   491,   247,
     250,   260,   596,   601,   250,   127,   128,   129,   130,   474,
     475,   250,   258,   258,   258,   258,   247,   676,   666,   247,
     681,   671,   247,   953,   148,   148,   973,   260,   214,   260,
     248,   248,   248,   250,   258,   258,   250,   250,   250,   260,
     556,   560,   247,   560,   258,   258,   248,   248,   248,   250,
     996,   995,   258,   208,   271,   250,   250,   250,   248,   247,
     260,   238,   250,   250,   259,   262,  1117,    29,   225,   290,
      91,    93,    94,   101,   102,   103,   214,   225,   297,   298,
     299,   301,   302,   304,   305,   306,   308,   309,   214,   466,
     247,   250,   490,   238,   489,   250,   248,   676,   681,   214,
     258,   248,   248,   258,   250,   987,   989,   988,   560,  1001,
    1000,   999,   258,   258,   249,   247,   248,   266,   268,   259,
     264,  1117,   250,   214,  1066,   250,   263,   250,   249,   249,
     249,   249,   249,   249,   249,   249,   247,   295,   298,   465,
     238,   464,   238,   214,   492,   258,   964,   967,   258,   258,
     258,   258,   258,   258,   259,   267,   208,   247,   250,   247,
      92,   312,   312,   312,   312,   312,   312,   312,   310,   298,
     252,   238,   214,   467,   492,   493,   258,   258,   250,   270,
     249,   259,   259,   249,   214,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   307,    95,    96,
      97,    98,    99,   100,   303,   214,   214,   214,   250,   311,
     312,   467,   468,   248,   259,   214,   300,   250,   250,   250,
     780,   248,   214,   250,   313,   250,   214,   494,   269,   250,
     469,   248,   495,   266,   248,   248,   470,   214,   214
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
     871,   871,   875,   871,   876,   871,   877,   877,   878,   877,
     879,   877,   880,   877,   877,   881,   877,   882,   877,   883,
     883,   884,   883,   885,   883,   886,   883,   883,   887,   883,
     888,   883,   889,   889,   889,   889,   889,   889,   889,   889,
     889,   889,   889,   889,   889,   889,   889,   889,   889,   890,
     890,   890,   890,   890,   890,   891,   890,   892,   890,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   894,   893,
     895,   893,   897,   896,   898,   898,   899,   899,   899,   899,
     899,   899,   899,   899,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   900,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   902,   902,   902,   902,   902,
     902,   902,   902,   902,   902,   902,   903,   903,   903,   903,
     903,   903,   903,   903,   903,   903,   903,   903,   903,   903,
     903,   903,   904,   904,   904,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   904,   905,   905,   905,
     905,   905,   905,   905,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   905,   905,   906,   906,   906,
     906,   906,   906,   907,   907,   907,   907,   907,   907,   908,
     908,   908,   908,   908,   908,   908,   908,   908,   909,   908,
     910,   908,   908,   908,   908,   911,   911,   911,   911,   911,
     911,   911,   911,   911,   911,   911,   912,   911,   911,   911,
     913,   911,   911,   911,   911,   914,   914,   914,   914,   914,
     914,   914,   914,   914,   914,   914,   915,   914,   914,   914,
     916,   914,   914,   914,   917,   917,   917,   917,   917,   917,
     917,   917,   917,   917,   917,   918,   917,   917,   917,   919,
     917,   917,   917,   917,   917,   917,   920,   917,   917,   921,
     921,   921,   921,   921,   921,   921,   921,   921,   921,   921,
     922,   921,   921,   921,   923,   921,   921,   921,   921,   921,
     924,   921,   921,   925,   925,   925,   925,   925,   925,   925,
     925,   925,   925,   925,   925,   925,   925,   925,   925,   925,
     926,   926,   926,   926,   926,   926,   926,   926,   926,   926,
     926,   926,   926,   926,   926,   926,   927,   927,   927,   927,
     927,   927,   927,   927,   927,   927,   927,   927,   927,   927,
     928,   928,   928,   928,   928,   928,   928,   928,   928,   928,
     928,   929,   929,   929,   929,   929,   929,   929,   929,   929,
     929,   930,   930,   930,   930,   930,   930,   930,   930,   930,
     930,   931,   931,   931,   931,   931,   931,   931,   931,   931,
     931,   931,   931,   931,   931,   931,   931,   931,   932,   932,
     932,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   932,   932,   932,   932,   932,   932,   932,   932,   932,
     932,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   934,   934,   934,   934,   934,   934,   934,   934,   934,
     934,   934,   934,   934,   934,   934,   934,   934,   934,   934,
     934,   934,   934,   934,   934,   934,   934,   935,   935,   935,
     935,   935,   935,   936,   936,   937,   937,   937,   937,   937,
     937,   938,   938,   938,   938,   938,   939,   939,   940,   940,
     940,   940,   940,   942,   941,   944,   943,   943,   945,   947,
     946,   946,   948,   950,   949,   949,   951,   953,   952,   952,
     954,   956,   955,   957,   955,   955,   958,   960,   959,   961,
     959,   959,   962,   964,   963,   963,   965,   967,   966,   966,
     968,   970,   969,   969,   971,   973,   972,   972,   974,   976,
     975,   977,   975,   975,   979,   978,   981,   980,   980,   983,
     982,   984,   984,   984,   985,   987,   986,   988,   986,   989,
     986,   986,   990,   992,   991,   991,   993,   995,   994,   996,
     994,   994,   997,   999,   998,  1000,   998,  1001,   998,   998,
    1003,  1002,  1005,  1004,  1007,  1006,  1009,  1008,  1011,  1010,
    1013,  1012,  1014,  1014,  1014,  1014,  1015,  1016,  1018,  1017,
    1019,  1019,  1019,  1020,  1021,  1021,  1021,  1023,  1022,  1024,
    1025,  1024,  1026,  1024,  1027,  1027,  1027,  1027,  1027,  1027,
    1027,  1027,  1027,  1029,  1028,  1030,  1032,  1031,  1034,  1033,
    1036,  1035,  1038,  1037,  1040,  1039,  1042,  1041,  1044,  1043,
    1046,  1045,  1048,  1047,  1049,  1050,  1049,  1051,  1049,  1053,
    1052,  1054,  1055,  1056,  1055,  1057,  1058,  1057,  1059,  1057,
    1060,  1060,  1060,  1061,  1061,  1062,  1063,  1062,  1064,  1065,
    1066,  1068,  1067,  1070,  1069,  1072,  1071,  1074,  1073,  1076,
    1075,  1075,  1077,  1078,  1080,  1079,  1081,  1083,  1082,  1084,
    1085,  1087,  1086,  1089,  1088,  1090,  1091,  1091,  1091,  1091,
    1091,  1091,  1091,  1091,  1091,  1092,  1093,  1094,  1093,  1096,
    1095,  1097,  1098,  1097,  1099,  1099,  1101,  1100,  1100,  1102,
    1102,  1102,  1103,  1103,  1103,  1104,  1104,  1104,  1104,  1104,
    1106,  1105,  1107,  1109,  1110,  1108,  1112,  1111,  1113,  1113,
    1114,  1115,  1114,  1116,  1116,  1117,  1117,  1118,  1118,  1119,
    1119,  1120,  1120,  1120,  1121,  1121,  1121,  1121,  1121,  1121,
    1121,  1121,  1121,  1121,  1123,  1122,  1124,  1124,  1125
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
       2,     1,     0,     2,     0,     2,     1,     1,     0,     2,
       0,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       1,     0,     2,     0,     2,     0,     2,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     5,     1,     0,     4,     0,     4,     0,
       5,     1,     4,     0,     7,     1,     0,     4,     0,     5,
       1,     1,     1,     4,     6,     1,     0,     4,     4,     3,
       1,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     1,     1,     1,     0,     5,     1,     0,     5,     1,
       1,     0,     5,     0,     5,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       5,     1,     0,     4,     1,     3,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     6,     0,     0,     8,     0,     7,     1,     3,
       1,     0,     4,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     1,     3,     1
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
#line 154 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8167 "ompparser.cc"
    break;

  case 3: /* variable: EXPR_STRING  */
#line 155 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 8173 "ompparser.cc"
    break;

  case 4: /* var_list: variable  */
#line 162 "ompparser.yy"
                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 8179 "ompparser.cc"
    break;

  case 5: /* var_list: var_list ',' variable  */
#line 163 "ompparser.yy"
                                  {if (meterEnClause) {guardarLineasDist += ","; guardarLineasDist += (yyvsp[0].stype);}}
#line 8185 "ompparser.cc"
    break;

  case 6: /* var_list_cluster: variable  */
#line 166 "ompparser.yy"
                            {
                      addArg((yyvsp[0].stype));
                    }
#line 8193 "ompparser.cc"
    break;

  case 7: /* var_list_cluster: var_list_cluster ',' variable  */
#line 170 "ompparser.yy"
                    {
                      addArg((yyvsp[0].stype));
                    }
#line 8201 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 175 "ompparser.yy"
                              {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8207 "ompparser.cc"
    break;

  case 9: /* $@1: %empty  */
#line 176 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += ",";}}
#line 8213 "ompparser.cc"
    break;

  case 10: /* var_list_reduction: var_list_reduction $@1 ',' variable  */
#line 176 "ompparser.yy"
                                                                                          {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(true, (yyvsp[0].stype));}}
#line 8219 "ompparser.cc"
    break;

  case 11: /* var_list_allreduction: variable  */
#line 179 "ompparser.yy"
                                 { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8225 "ompparser.cc"
    break;

  case 12: /* var_list_allreduction: var_list_allreduction ',' variable  */
#line 180 "ompparser.yy"
                                             { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(true, (yyvsp[0].stype));}}
#line 8231 "ompparser.cc"
    break;

  case 15: /* $@2: %empty  */
#line 188 "ompparser.yy"
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
#line 8248 "ompparser.cc"
    break;

  case 18: /* $@3: %empty  */
#line 204 "ompparser.yy"
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
#line 8264 "ompparser.cc"
    break;

  case 20: /* $@4: %empty  */
#line 219 "ompparser.yy"
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
#line 8280 "ompparser.cc"
    break;

  case 24: /* dist_schedule_parameter_cluster: STATIC ',' EXPR_STRING  */
#line 237 "ompparser.yy"
                                  {
                                    if (enCluster) {
                                      if (scheduleDist.size() != 0) {
                                        fprintf(stderr, "Doble shcedule en cluster distribute\n");
                                        exit(245);
                                      }

                                      scheduleDist = (yyvsp[0].stype);
                                    }
                                  }
#line 8295 "ompparser.cc"
    break;

  case 38: /* openmp_directive: distribute_directive  */
#line 262 "ompparser.yy"
                                        {dist_n_llaves = 0;}
#line 8301 "ompparser.cc"
    break;

  case 39: /* openmp_directive: distribute_simd_directive  */
#line 263 "ompparser.yy"
                                             {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8307 "ompparser.cc"
    break;

  case 40: /* openmp_directive: distribute_parallel_for_directive  */
#line 264 "ompparser.yy"
                                                     {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8313 "ompparser.cc"
    break;

  case 41: /* openmp_directive: distribute_parallel_do_directive  */
#line 265 "ompparser.yy"
                                                    {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8319 "ompparser.cc"
    break;

  case 42: /* openmp_directive: distribute_parallel_for_simd_directive  */
#line 266 "ompparser.yy"
                                                          {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8325 "ompparser.cc"
    break;

  case 43: /* openmp_directive: distribute_parallel_do_simd_directive  */
#line 267 "ompparser.yy"
                                                         {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8331 "ompparser.cc"
    break;

  case 88: /* openmp_directive: teams_distribute_directive  */
#line 314 "ompparser.yy"
                                              {dist_n_llaves = 0;}
#line 8337 "ompparser.cc"
    break;

  case 89: /* openmp_directive: teams_distribute_simd_directive  */
#line 315 "ompparser.yy"
                                                   {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8343 "ompparser.cc"
    break;

  case 90: /* openmp_directive: teams_distribute_parallel_for_directive  */
#line 316 "ompparser.yy"
                                                           {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8349 "ompparser.cc"
    break;

  case 91: /* openmp_directive: teams_distribute_parallel_for_simd_directive  */
#line 317 "ompparser.yy"
                                                                {dist_n_llaves = 0; guardarLineasDist += "\n";}
#line 8355 "ompparser.cc"
    break;

  case 112: /* $@5: %empty  */
#line 338 "ompparser.yy"
                   {
                      if(MPIInitDone == 0){
                      	MPIInit();
                        if (!enMain) {
                          MPIInitMainDone = 1;
                        }
                        else {
                          long posActual = output.tellp();
                          MPIInitParte2();
                          output.seekp(posActual);
                        }
                      	main_init = 0;
                      	MPIInitDone = 1;
                      	main_end = 1;
                      }

                      if (enSecuencial && !enCluster && (enFuncion >= 2 || enMain >= 1)) {
                        MPIWriteCluster();
                      }

                      enCluster = 1;
                    }
#line 8382 "ompparser.cc"
    break;

  case 114: /* directiveAuxCluster: cluster_directive  */
#line 364 "ompparser.yy"
                                      {n_llaves = 0;}
#line 8388 "ompparser.cc"
    break;

  case 115: /* directiveAuxCluster: cluster_data_directive  */
#line 365 "ompparser.yy"
                                                                   {enCluster = 0; MPIEmpezarSecuencial();}
#line 8394 "ompparser.cc"
    break;

  case 118: /* directiveAuxCluster: cluster_distribute_directive  */
#line 368 "ompparser.yy"
                                                                         {dist_n_llaves = 0;}
#line 8400 "ompparser.cc"
    break;

  case 119: /* directiveAuxCluster: cluster_teams_distribute_directive  */
#line 369 "ompparser.yy"
                                                                               {dist_n_llaves = 0;}
#line 8406 "ompparser.cc"
    break;

  case 192: /* $@6: %empty  */
#line 448 "ompparser.yy"
                    { }
#line 8412 "ompparser.cc"
    break;

  case 193: /* end_directive: END $@6 end_clause_seq  */
#line 448 "ompparser.yy"
                                       { }
#line 8418 "ompparser.cc"
    break;

  case 195: /* $@7: %empty  */
#line 454 "ompparser.yy"
                                        { }
#line 8424 "ompparser.cc"
    break;

  case 204: /* $@8: %empty  */
#line 471 "ompparser.yy"
                   { }
#line 8430 "ompparser.cc"
    break;

  case 205: /* $@9: %empty  */
#line 471 "ompparser.yy"
                                                              { }
#line 8436 "ompparser.cc"
    break;

  case 206: /* $@10: %empty  */
#line 471 "ompparser.yy"
                                                                                         { }
#line 8442 "ompparser.cc"
    break;

  case 208: /* when_variant_directive: variant_directive  */
#line 474 "ompparser.yy"
                                           { }
#line 8448 "ompparser.cc"
    break;

  case 209: /* when_variant_directive: %empty  */
#line 475 "ompparser.yy"
                  { ; }
#line 8454 "ompparser.cc"
    break;

  case 213: /* $@11: %empty  */
#line 483 "ompparser.yy"
                                             { }
#line 8460 "ompparser.cc"
    break;

  case 214: /* $@12: %empty  */
#line 483 "ompparser.yy"
                                                                             { }
#line 8466 "ompparser.cc"
    break;

  case 216: /* trait_set_selector_name: USER  */
#line 486 "ompparser.yy"
                               { }
#line 8472 "ompparser.cc"
    break;

  case 217: /* trait_set_selector_name: CONSTRUCT  */
#line 487 "ompparser.yy"
                            { }
#line 8478 "ompparser.cc"
    break;

  case 218: /* trait_set_selector_name: DEVICE  */
#line 488 "ompparser.yy"
                         { }
#line 8484 "ompparser.cc"
    break;

  case 219: /* trait_set_selector_name: IMPLEMENTATION  */
#line 489 "ompparser.yy"
                                 { }
#line 8490 "ompparser.cc"
    break;

  case 220: /* trait_selector_list: trait_selector  */
#line 492 "ompparser.yy"
                                     { }
#line 8496 "ompparser.cc"
    break;

  case 221: /* trait_selector_list: trait_selector_list trait_selector  */
#line 493 "ompparser.yy"
                                                     { }
#line 8502 "ompparser.cc"
    break;

  case 222: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 494 "ompparser.yy"
                                                         { }
#line 8508 "ompparser.cc"
    break;

  case 224: /* trait_selector: construct_selector  */
#line 498 "ompparser.yy"
                                     { }
#line 8514 "ompparser.cc"
    break;

  case 227: /* $@13: %empty  */
#line 503 "ompparser.yy"
                                                           { }
#line 8520 "ompparser.cc"
    break;

  case 233: /* context_kind_name: HOST  */
#line 514 "ompparser.yy"
                         { }
#line 8526 "ompparser.cc"
    break;

  case 234: /* context_kind_name: NOHOST  */
#line 515 "ompparser.yy"
                           { }
#line 8532 "ompparser.cc"
    break;

  case 235: /* context_kind_name: ANY  */
#line 516 "ompparser.yy"
                        { }
#line 8538 "ompparser.cc"
    break;

  case 236: /* context_kind_name: CPU  */
#line 517 "ompparser.yy"
                        { }
#line 8544 "ompparser.cc"
    break;

  case 237: /* context_kind_name: GPU  */
#line 518 "ompparser.yy"
                        { }
#line 8550 "ompparser.cc"
    break;

  case 238: /* context_kind_name: FPGA  */
#line 519 "ompparser.yy"
                         { }
#line 8556 "ompparser.cc"
    break;

  case 239: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 522 "ompparser.yy"
                                              { }
#line 8562 "ompparser.cc"
    break;

  case 240: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 525 "ompparser.yy"
                                                { }
#line 8568 "ompparser.cc"
    break;

  case 242: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 529 "ompparser.yy"
                                                                { }
#line 8574 "ompparser.cc"
    break;

  case 243: /* implementation_selector: EXPR_STRING  */
#line 530 "ompparser.yy"
                                      { }
#line 8580 "ompparser.cc"
    break;

  case 244: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 531 "ompparser.yy"
                                                          { }
#line 8586 "ompparser.cc"
    break;

  case 245: /* context_vendor_name: AMD  */
#line 534 "ompparser.yy"
                          { }
#line 8592 "ompparser.cc"
    break;

  case 246: /* context_vendor_name: ARM  */
#line 535 "ompparser.yy"
                          { }
#line 8598 "ompparser.cc"
    break;

  case 247: /* context_vendor_name: BSC  */
#line 536 "ompparser.yy"
                          { }
#line 8604 "ompparser.cc"
    break;

  case 248: /* context_vendor_name: CRAY  */
#line 537 "ompparser.yy"
                           { }
#line 8610 "ompparser.cc"
    break;

  case 249: /* context_vendor_name: FUJITSU  */
#line 538 "ompparser.yy"
                              { }
#line 8616 "ompparser.cc"
    break;

  case 250: /* context_vendor_name: GNU  */
#line 539 "ompparser.yy"
                          { }
#line 8622 "ompparser.cc"
    break;

  case 251: /* context_vendor_name: IBM  */
#line 540 "ompparser.yy"
                          { }
#line 8628 "ompparser.cc"
    break;

  case 252: /* context_vendor_name: INTEL  */
#line 541 "ompparser.yy"
                            { }
#line 8634 "ompparser.cc"
    break;

  case 253: /* context_vendor_name: LLVM  */
#line 542 "ompparser.yy"
                           { }
#line 8640 "ompparser.cc"
    break;

  case 254: /* context_vendor_name: PGI  */
#line 543 "ompparser.yy"
                          { }
#line 8646 "ompparser.cc"
    break;

  case 255: /* context_vendor_name: TI  */
#line 544 "ompparser.yy"
                         { }
#line 8652 "ompparser.cc"
    break;

  case 256: /* context_vendor_name: UNKNOWN  */
#line 545 "ompparser.yy"
                              { }
#line 8658 "ompparser.cc"
    break;

  case 258: /* parallel_selector: PARALLEL  */
#line 551 "ompparser.yy"
                             { }
#line 8664 "ompparser.cc"
    break;

  case 259: /* $@14: %empty  */
#line 552 "ompparser.yy"
                               { }
#line 8670 "ompparser.cc"
    break;

  case 263: /* $@15: %empty  */
#line 559 "ompparser.yy"
                                    { }
#line 8676 "ompparser.cc"
    break;

  case 265: /* $@16: %empty  */
#line 562 "ompparser.yy"
                                            { }
#line 8682 "ompparser.cc"
    break;

  case 267: /* $@17: %empty  */
#line 566 "ompparser.yy"
                                  { }
#line 8688 "ompparser.cc"
    break;

  case 275: /* $@18: %empty  */
#line 581 "ompparser.yy"
                     { }
#line 8694 "ompparser.cc"
    break;

  case 276: /* match_clause: MATCH $@18 '(' context_selector_specification ')'  */
#line 582 "ompparser.yy"
                                                       { }
#line 8700 "ompparser.cc"
    break;

  case 277: /* $@19: %empty  */
#line 586 "ompparser.yy"
                              { }
#line 8706 "ompparser.cc"
    break;

  case 279: /* $@20: %empty  */
#line 589 "ompparser.yy"
                            { }
#line 8712 "ompparser.cc"
    break;

  case 281: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 592 "ompparser.yy"
                                            {
                                enDeclare = 1;
                            }
#line 8720 "ompparser.cc"
    break;

  case 282: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 597 "ompparser.yy"
                                                    { enDeclare = 0; MPIDeclareCluster(); }
#line 8726 "ompparser.cc"
    break;

  case 283: /* $@21: %empty  */
#line 600 "ompparser.yy"
                                      { }
#line 8732 "ompparser.cc"
    break;

  case 285: /* $@22: %empty  */
#line 603 "ompparser.yy"
                                          { update =1; }
#line 8738 "ompparser.cc"
    break;

  case 286: /* cluster_update_directive: CLUSTER UPDATE $@22 cluster_update_clause_optseq  */
#line 603 "ompparser.yy"
                                                                                      { }
#line 8744 "ompparser.cc"
    break;

  case 287: /* $@23: %empty  */
#line 606 "ompparser.yy"
                                        { }
#line 8750 "ompparser.cc"
    break;

  case 289: /* $@24: %empty  */
#line 609 "ompparser.yy"
                                                  {enDistribute = 1;}
#line 8756 "ompparser.cc"
    break;

  case 291: /* $@25: %empty  */
#line 612 "ompparser.yy"
                                                              {enDistribute = 1;}
#line 8762 "ompparser.cc"
    break;

  case 293: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 615 "ompparser.yy"
                                                      { }
#line 8768 "ompparser.cc"
    break;

  case 294: /* $@26: %empty  */
#line 618 "ompparser.yy"
                                  { }
#line 8774 "ompparser.cc"
    break;

  case 295: /* task_async_directive: TASK_ASYNC $@26 task_async_clause_optseq  */
#line 618 "ompparser.yy"
                                                               { MPITask(); }
#line 8780 "ompparser.cc"
    break;

  case 296: /* $@27: %empty  */
#line 623 "ompparser.yy"
                      { }
#line 8786 "ompparser.cc"
    break;

  case 298: /* $@28: %empty  */
#line 625 "ompparser.yy"
                              { }
#line 8792 "ompparser.cc"
    break;

  case 300: /* $@29: %empty  */
#line 627 "ompparser.yy"
                                        { }
#line 8798 "ompparser.cc"
    break;

  case 302: /* taskyield_directive: TASKYIELD  */
#line 629 "ompparser.yy"
                                { }
#line 8804 "ompparser.cc"
    break;

  case 303: /* $@30: %empty  */
#line 631 "ompparser.yy"
                              { }
#line 8810 "ompparser.cc"
    break;

  case 305: /* $@31: %empty  */
#line 633 "ompparser.yy"
                                     { }
#line 8816 "ompparser.cc"
    break;

  case 307: /* $@32: %empty  */
#line 635 "ompparser.yy"
                                                 { }
#line 8822 "ompparser.cc"
    break;

  case 309: /* $@33: %empty  */
#line 637 "ompparser.yy"
                                               { }
#line 8828 "ompparser.cc"
    break;

  case 311: /* $@34: %empty  */
#line 639 "ompparser.yy"
                           { }
#line 8834 "ompparser.cc"
    break;

  case 313: /* $@35: %empty  */
#line 641 "ompparser.yy"
                                        { }
#line 8840 "ompparser.cc"
    break;

  case 315: /* $@36: %empty  */
#line 643 "ompparser.yy"
                                          { }
#line 8846 "ompparser.cc"
    break;

  case 317: /* $@37: %empty  */
#line 645 "ompparser.yy"
                        { }
#line 8852 "ompparser.cc"
    break;

  case 319: /* end_declare_target_directive: END DECLARE TARGET  */
#line 648 "ompparser.yy"
                                                  { }
#line 8858 "ompparser.cc"
    break;

  case 320: /* master_directive: MASTER  */
#line 650 "ompparser.yy"
                          { }
#line 8864 "ompparser.cc"
    break;

  case 321: /* barrier_directive: BARRIER  */
#line 652 "ompparser.yy"
                            { }
#line 8870 "ompparser.cc"
    break;

  case 322: /* $@38: %empty  */
#line 654 "ompparser.yy"
                              { }
#line 8876 "ompparser.cc"
    break;

  case 324: /* $@39: %empty  */
#line 656 "ompparser.yy"
                                { }
#line 8882 "ompparser.cc"
    break;

  case 326: /* $@40: %empty  */
#line 658 "ompparser.yy"
                              { }
#line 8888 "ompparser.cc"
    break;

  case 328: /* $@41: %empty  */
#line 660 "ompparser.yy"
                          { }
#line 8894 "ompparser.cc"
    break;

  case 330: /* $@42: %empty  */
#line 662 "ompparser.yy"
                            { }
#line 8900 "ompparser.cc"
    break;

  case 337: /* depobj: EXPR_STRING  */
#line 671 "ompparser.yy"
                     { }
#line 8906 "ompparser.cc"
    break;

  case 341: /* destroy_clause: DESTROY  */
#line 678 "ompparser.yy"
                        {}
#line 8912 "ompparser.cc"
    break;

  case 343: /* update_dependence_type: SOURCE  */
#line 683 "ompparser.yy"
                                { }
#line 8918 "ompparser.cc"
    break;

  case 344: /* update_dependence_type: IN  */
#line 684 "ompparser.yy"
                            { }
#line 8924 "ompparser.cc"
    break;

  case 345: /* update_dependence_type: OUT  */
#line 685 "ompparser.yy"
                             { }
#line 8930 "ompparser.cc"
    break;

  case 346: /* update_dependence_type: INOUT  */
#line 686 "ompparser.yy"
                               { }
#line 8936 "ompparser.cc"
    break;

  case 347: /* update_dependence_type: MUTEXINOUTSET  */
#line 687 "ompparser.yy"
                                       { }
#line 8942 "ompparser.cc"
    break;

  case 348: /* update_dependence_type: DEPOBJ  */
#line 688 "ompparser.yy"
                                { }
#line 8948 "ompparser.cc"
    break;

  case 349: /* update_dependence_type: SINK  */
#line 689 "ompparser.yy"
                              { }
#line 8954 "ompparser.cc"
    break;

  case 350: /* critical_name: EXPR_STRING  */
#line 692 "ompparser.yy"
                            { }
#line 8960 "ompparser.cc"
    break;

  case 369: /* extended_variable: EXPR_STRING  */
#line 723 "ompparser.yy"
                                { }
#line 8966 "ompparser.cc"
    break;

  case 377: /* flush_variable: EXPR_STRING  */
#line 735 "ompparser.yy"
                             { }
#line 8972 "ompparser.cc"
    break;

  case 383: /* $@43: %empty  */
#line 745 "ompparser.yy"
                          { }
#line 8978 "ompparser.cc"
    break;

  case 416: /* $@44: %empty  */
#line 788 "ompparser.yy"
                  { 
                     }
#line 8985 "ompparser.cc"
    break;

  case 418: /* read_clause: READ  */
#line 791 "ompparser.yy"
                   { }
#line 8991 "ompparser.cc"
    break;

  case 419: /* write_clause: WRITE  */
#line 793 "ompparser.yy"
                     { }
#line 8997 "ompparser.cc"
    break;

  case 420: /* update_clause: UPDATE  */
#line 795 "ompparser.yy"
                       { }
#line 9003 "ompparser.cc"
    break;

  case 421: /* capture_clause: CAPTURE  */
#line 797 "ompparser.yy"
                         { }
#line 9009 "ompparser.cc"
    break;

  case 422: /* seq_cst_clause: SEQ_CST  */
#line 800 "ompparser.yy"
                         { }
#line 9015 "ompparser.cc"
    break;

  case 423: /* acq_rel_clause: ACQ_REL  */
#line 802 "ompparser.yy"
                         { }
#line 9021 "ompparser.cc"
    break;

  case 424: /* release_clause: RELEASE  */
#line 804 "ompparser.yy"
                         { }
#line 9027 "ompparser.cc"
    break;

  case 425: /* acquire_clause: ACQUIRE  */
#line 806 "ompparser.yy"
                         { }
#line 9033 "ompparser.cc"
    break;

  case 426: /* relaxed_clause: RELAXED  */
#line 808 "ompparser.yy"
                         { }
#line 9039 "ompparser.cc"
    break;

  case 570: /* $@45: %empty  */
#line 985 "ompparser.yy"
                    { }
#line 9045 "ompparser.cc"
    break;

  case 572: /* untied_clause: UNTIED  */
#line 987 "ompparser.yy"
                      { }
#line 9051 "ompparser.cc"
    break;

  case 573: /* mergeable_clause: MERGEABLE  */
#line 989 "ompparser.yy"
                            { }
#line 9057 "ompparser.cc"
    break;

  case 574: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 991 "ompparser.yy"
                                                                                { }
#line 9063 "ompparser.cc"
    break;

  case 576: /* in_reduction_identifier: EXPR_STRING  */
#line 994 "ompparser.yy"
                                      { }
#line 9069 "ompparser.cc"
    break;

  case 577: /* in_reduction_enum_identifier: '+'  */
#line 997 "ompparser.yy"
                                   { }
#line 9075 "ompparser.cc"
    break;

  case 578: /* in_reduction_enum_identifier: '-'  */
#line 998 "ompparser.yy"
                                  { }
#line 9081 "ompparser.cc"
    break;

  case 579: /* in_reduction_enum_identifier: '*'  */
#line 999 "ompparser.yy"
                                  { }
#line 9087 "ompparser.cc"
    break;

  case 580: /* in_reduction_enum_identifier: '&'  */
#line 1000 "ompparser.yy"
                                  { }
#line 9093 "ompparser.cc"
    break;

  case 581: /* in_reduction_enum_identifier: '|'  */
#line 1001 "ompparser.yy"
                                  { }
#line 9099 "ompparser.cc"
    break;

  case 582: /* in_reduction_enum_identifier: '^'  */
#line 1002 "ompparser.yy"
                                  { }
#line 9105 "ompparser.cc"
    break;

  case 583: /* in_reduction_enum_identifier: LOGAND  */
#line 1003 "ompparser.yy"
                                     { }
#line 9111 "ompparser.cc"
    break;

  case 584: /* in_reduction_enum_identifier: LOGOR  */
#line 1004 "ompparser.yy"
                                    { }
#line 9117 "ompparser.cc"
    break;

  case 585: /* in_reduction_enum_identifier: MAX  */
#line 1005 "ompparser.yy"
                                  { }
#line 9123 "ompparser.cc"
    break;

  case 586: /* in_reduction_enum_identifier: MIN  */
#line 1006 "ompparser.yy"
                                  { }
#line 9129 "ompparser.cc"
    break;

  case 587: /* $@46: %empty  */
#line 1009 "ompparser.yy"
                                     { }
#line 9135 "ompparser.cc"
    break;

  case 588: /* depend_with_modifier_clause: DEPEND $@46 '(' depend_parameter ':' var_list ')'  */
#line 1009 "ompparser.yy"
                                                                               { }
#line 9141 "ompparser.cc"
    break;

  case 590: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 1013 "ompparser.yy"
                                                       { }
#line 9147 "ompparser.cc"
    break;

  case 592: /* $@47: %empty  */
#line 1017 "ompparser.yy"
                                    { }
#line 9153 "ompparser.cc"
    break;

  case 596: /* $@48: %empty  */
#line 1022 "ompparser.yy"
                                                    { }
#line 9159 "ompparser.cc"
    break;

  case 598: /* $@49: %empty  */
#line 1023 "ompparser.yy"
                                        { }
#line 9165 "ompparser.cc"
    break;

  case 600: /* $@50: %empty  */
#line 1025 "ompparser.yy"
                                         { }
#line 9171 "ompparser.cc"
    break;

  case 601: /* $@51: %empty  */
#line 1025 "ompparser.yy"
                                                             { }
#line 9177 "ompparser.cc"
    break;

  case 602: /* depend_range_specification: EXPR_STRING $@50 ':' EXPR_STRING $@51 depend_range_step  */
#line 1025 "ompparser.yy"
                                                                                   { }
#line 9183 "ompparser.cc"
    break;

  case 603: /* depend_range_step: %empty  */
#line 1027 "ompparser.yy"
                              { }
#line 9189 "ompparser.cc"
    break;

  case 604: /* depend_range_step: ':' EXPR_STRING  */
#line 1028 "ompparser.yy"
                                    { }
#line 9195 "ompparser.cc"
    break;

  case 605: /* depend_enum_type: IN  */
#line 1030 "ompparser.yy"
                      { }
#line 9201 "ompparser.cc"
    break;

  case 606: /* depend_enum_type: OUT  */
#line 1031 "ompparser.yy"
                       { }
#line 9207 "ompparser.cc"
    break;

  case 607: /* depend_enum_type: INOUT  */
#line 1032 "ompparser.yy"
                         { }
#line 9213 "ompparser.cc"
    break;

  case 608: /* depend_enum_type: MUTEXINOUTSET  */
#line 1033 "ompparser.yy"
                                 { }
#line 9219 "ompparser.cc"
    break;

  case 609: /* depend_enum_type: DEPOBJ  */
#line 1034 "ompparser.yy"
                          { }
#line 9225 "ompparser.cc"
    break;

  case 610: /* $@52: %empty  */
#line 1037 "ompparser.yy"
                              { }
#line 9231 "ompparser.cc"
    break;

  case 611: /* depend_depobj_clause: DEPEND $@52 '(' dependence_depobj_parameter ')'  */
#line 1037 "ompparser.yy"
                                                                     {
}
#line 9238 "ompparser.cc"
    break;

  case 613: /* dependence_depobj_type: IN  */
#line 1042 "ompparser.yy"
                                        { }
#line 9244 "ompparser.cc"
    break;

  case 614: /* dependence_depobj_type: OUT  */
#line 1043 "ompparser.yy"
                                        { }
#line 9250 "ompparser.cc"
    break;

  case 615: /* dependence_depobj_type: INOUT  */
#line 1044 "ompparser.yy"
                                        { }
#line 9256 "ompparser.cc"
    break;

  case 616: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 1045 "ompparser.yy"
                                        { }
#line 9262 "ompparser.cc"
    break;

  case 617: /* $@53: %empty  */
#line 1047 "ompparser.yy"
                               { }
#line 9268 "ompparser.cc"
    break;

  case 618: /* depend_ordered_clause: DEPEND $@53 '(' dependence_ordered_parameter ')'  */
#line 1047 "ompparser.yy"
                                                                       {
}
#line 9275 "ompparser.cc"
    break;

  case 620: /* dependence_ordered_type: SOURCE  */
#line 1052 "ompparser.yy"
                                  { }
#line 9281 "ompparser.cc"
    break;

  case 621: /* $@54: %empty  */
#line 1053 "ompparser.yy"
                               { }
#line 9287 "ompparser.cc"
    break;

  case 623: /* $@55: %empty  */
#line 1056 "ompparser.yy"
                          { }
#line 9293 "ompparser.cc"
    break;

  case 626: /* affinity_parameter: EXPR_STRING  */
#line 1061 "ompparser.yy"
                                 { }
#line 9299 "ompparser.cc"
    break;

  case 627: /* $@56: %empty  */
#line 1062 "ompparser.yy"
                                     { }
#line 9305 "ompparser.cc"
    break;

  case 630: /* $@57: %empty  */
#line 1066 "ompparser.yy"
                                      { }
#line 9311 "ompparser.cc"
    break;

  case 631: /* affinity_modifier: MODIFIER_ITERATOR $@57 '(' iterators_definition ')'  */
#line 1066 "ompparser.yy"
                                                                   {}
#line 9317 "ompparser.cc"
    break;

  case 634: /* $@58: %empty  */
#line 1071 "ompparser.yy"
                                             { }
#line 9323 "ompparser.cc"
    break;

  case 636: /* $@59: %empty  */
#line 1072 "ompparser.yy"
                                { }
#line 9329 "ompparser.cc"
    break;

  case 638: /* $@60: %empty  */
#line 1074 "ompparser.yy"
                                  { }
#line 9335 "ompparser.cc"
    break;

  case 639: /* $@61: %empty  */
#line 1074 "ompparser.yy"
                                                      { }
#line 9341 "ompparser.cc"
    break;

  case 640: /* range_specification: EXPR_STRING $@60 ':' EXPR_STRING $@61 range_step  */
#line 1074 "ompparser.yy"
                                                                     { }
#line 9347 "ompparser.cc"
    break;

  case 641: /* range_step: %empty  */
#line 1077 "ompparser.yy"
                       { }
#line 9353 "ompparser.cc"
    break;

  case 642: /* range_step: ':' EXPR_STRING  */
#line 1078 "ompparser.yy"
                             { }
#line 9359 "ompparser.cc"
    break;

  case 643: /* $@62: %empty  */
#line 1081 "ompparser.yy"
                      { }
#line 9365 "ompparser.cc"
    break;

  case 645: /* $@63: %empty  */
#line 1083 "ompparser.yy"
                            { }
#line 9371 "ompparser.cc"
    break;

  case 647: /* $@64: %empty  */
#line 1085 "ompparser.yy"
                            { }
#line 9377 "ompparser.cc"
    break;

  case 649: /* nogroup_clause: NOGROUP  */
#line 1087 "ompparser.yy"
                        { }
#line 9383 "ompparser.cc"
    break;

  case 650: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 1089 "ompparser.yy"
                                        { }
#line 9389 "ompparser.cc"
    break;

  case 651: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 1091 "ompparser.yy"
                                        { }
#line 9395 "ompparser.cc"
    break;

  case 652: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 1093 "ompparser.yy"
                                                    { }
#line 9401 "ompparser.cc"
    break;

  case 653: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 1095 "ompparser.yy"
                                                                                                      { }
#line 9407 "ompparser.cc"
    break;

  case 654: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 1097 "ompparser.yy"
                                             { }
#line 9413 "ompparser.cc"
    break;

  case 655: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 1098 "ompparser.yy"
                                             { }
#line 9419 "ompparser.cc"
    break;

  case 656: /* atomic_default_mem_order_parameter: RELAXED  */
#line 1099 "ompparser.yy"
                                             { }
#line 9425 "ompparser.cc"
    break;

  case 657: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 1101 "ompparser.yy"
                                              { }
#line 9431 "ompparser.cc"
    break;

  case 658: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 1103 "ompparser.yy"
                                                                { }
#line 9437 "ompparser.cc"
    break;

  case 660: /* device_parameter: EXPR_STRING  */
#line 1107 "ompparser.yy"
                                { }
#line 9443 "ompparser.cc"
    break;

  case 661: /* $@65: %empty  */
#line 1108 "ompparser.yy"
                                   { }
#line 9449 "ompparser.cc"
    break;

  case 664: /* device_modifier_parameter: ANCESTOR  */
#line 1112 "ompparser.yy"
                                     { }
#line 9455 "ompparser.cc"
    break;

  case 665: /* device_modifier_parameter: DEVICE_NUM  */
#line 1113 "ompparser.yy"
                                       { }
#line 9461 "ompparser.cc"
    break;

  case 667: /* device_without_modifier_parameter: EXPR_STRING  */
#line 1118 "ompparser.yy"
                                                 { }
#line 9467 "ompparser.cc"
    break;

  case 668: /* $@66: %empty  */
#line 1119 "ompparser.yy"
                                                    { }
#line 9473 "ompparser.cc"
    break;

  case 670: /* $@67: %empty  */
#line 1122 "ompparser.yy"
                                       { }
#line 9479 "ompparser.cc"
    break;

  case 672: /* $@68: %empty  */
#line 1125 "ompparser.yy"
                                         { }
#line 9485 "ompparser.cc"
    break;

  case 674: /* $@69: %empty  */
#line 1127 "ompparser.yy"
                                     { }
#line 9491 "ompparser.cc"
    break;

  case 675: /* is_device_ptr_clause: IS_DEVICE_PTR $@69 '(' var_list ')'  */
#line 1127 "ompparser.yy"
                                                          {
}
#line 9498 "ompparser.cc"
    break;

  case 676: /* $@70: %empty  */
#line 1131 "ompparser.yy"
                                         { }
#line 9504 "ompparser.cc"
    break;

  case 677: /* has_device_addr_clause: HAS_DEVICE_ADDR $@70 '(' var_list ')'  */
#line 1131 "ompparser.yy"
                                                              {
}
#line 9511 "ompparser.cc"
    break;

  case 678: /* $@71: %empty  */
#line 1134 "ompparser.yy"
                              { }
#line 9517 "ompparser.cc"
    break;

  case 680: /* defaultmap_parameter: defaultmap_behavior  */
#line 1136 "ompparser.yy"
                                           { }
#line 9523 "ompparser.cc"
    break;

  case 682: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1140 "ompparser.yy"
                                     { }
#line 9529 "ompparser.cc"
    break;

  case 683: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1141 "ompparser.yy"
                                  { }
#line 9535 "ompparser.cc"
    break;

  case 684: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1142 "ompparser.yy"
                                    { }
#line 9541 "ompparser.cc"
    break;

  case 685: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1143 "ompparser.yy"
                                      {}
#line 9547 "ompparser.cc"
    break;

  case 686: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1144 "ompparser.yy"
                                            { }
#line 9553 "ompparser.cc"
    break;

  case 687: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1145 "ompparser.yy"
                                    { }
#line 9559 "ompparser.cc"
    break;

  case 688: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1146 "ompparser.yy"
                                       { }
#line 9565 "ompparser.cc"
    break;

  case 689: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1148 "ompparser.yy"
                                      { }
#line 9571 "ompparser.cc"
    break;

  case 690: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1149 "ompparser.yy"
                                         { }
#line 9577 "ompparser.cc"
    break;

  case 691: /* defaultmap_category: CATEGORY_POINTER  */
#line 1150 "ompparser.yy"
                                       { }
#line 9583 "ompparser.cc"
    break;

  case 692: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1151 "ompparser.yy"
                                           { }
#line 9589 "ompparser.cc"
    break;

  case 693: /* $@72: %empty  */
#line 1153 "ompparser.yy"
                                          { }
#line 9595 "ompparser.cc"
    break;

  case 697: /* allocators_list: allocators_list_parameter_enum  */
#line 1158 "ompparser.yy"
                                                 { }
#line 9601 "ompparser.cc"
    break;

  case 698: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1159 "ompparser.yy"
                                                                     { }
#line 9607 "ompparser.cc"
    break;

  case 699: /* allocators_list: allocators_list_parameter_user  */
#line 1160 "ompparser.yy"
                                                 { }
#line 9613 "ompparser.cc"
    break;

  case 700: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1161 "ompparser.yy"
                                                                     { }
#line 9619 "ompparser.cc"
    break;

  case 701: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1164 "ompparser.yy"
                                                   { }
#line 9625 "ompparser.cc"
    break;

  case 702: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1165 "ompparser.yy"
                                                     { }
#line 9631 "ompparser.cc"
    break;

  case 703: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1166 "ompparser.yy"
                                                 { }
#line 9637 "ompparser.cc"
    break;

  case 704: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1167 "ompparser.yy"
                                                   { }
#line 9643 "ompparser.cc"
    break;

  case 705: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1168 "ompparser.yy"
                                                   { }
#line 9649 "ompparser.cc"
    break;

  case 706: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1169 "ompparser.yy"
                                                  { }
#line 9655 "ompparser.cc"
    break;

  case 707: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1170 "ompparser.yy"
                                                 { }
#line 9661 "ompparser.cc"
    break;

  case 708: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1171 "ompparser.yy"
                                                  { }
#line 9667 "ompparser.cc"
    break;

  case 709: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1173 "ompparser.yy"
                                             { }
#line 9673 "ompparser.cc"
    break;

  case 711: /* to_parameter: EXPR_STRING  */
#line 1176 "ompparser.yy"
                            { }
#line 9679 "ompparser.cc"
    break;

  case 712: /* $@73: %empty  */
#line 1177 "ompparser.yy"
                               { }
#line 9685 "ompparser.cc"
    break;

  case 715: /* $@74: %empty  */
#line 1180 "ompparser.yy"
                      { }
#line 9691 "ompparser.cc"
    break;

  case 716: /* to_mapper: TO_MAPPER $@74 '(' EXPR_STRING ')'  */
#line 1180 "ompparser.yy"
                                           { }
#line 9697 "ompparser.cc"
    break;

  case 718: /* from_parameter: EXPR_STRING  */
#line 1184 "ompparser.yy"
                             { }
#line 9703 "ompparser.cc"
    break;

  case 719: /* $@75: %empty  */
#line 1185 "ompparser.yy"
                                 { }
#line 9709 "ompparser.cc"
    break;

  case 722: /* $@76: %empty  */
#line 1188 "ompparser.yy"
                          { }
#line 9715 "ompparser.cc"
    break;

  case 723: /* from_mapper: FROM_MAPPER $@76 '(' EXPR_STRING ')'  */
#line 1188 "ompparser.yy"
                                               { }
#line 9721 "ompparser.cc"
    break;

  case 724: /* $@77: %empty  */
#line 1190 "ompparser.yy"
                   {
}
#line 9728 "ompparser.cc"
    break;

  case 725: /* link_clause: LINK $@77 '(' var_list ')'  */
#line 1191 "ompparser.yy"
                   { }
#line 9734 "ompparser.cc"
    break;

  case 726: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1193 "ompparser.yy"
                                                               { }
#line 9740 "ompparser.cc"
    break;

  case 727: /* device_type_parameter: HOST  */
#line 1195 "ompparser.yy"
                             { }
#line 9746 "ompparser.cc"
    break;

  case 728: /* device_type_parameter: NOHOST  */
#line 1196 "ompparser.yy"
                             { }
#line 9752 "ompparser.cc"
    break;

  case 729: /* device_type_parameter: ANY  */
#line 1197 "ompparser.yy"
                          { }
#line 9758 "ompparser.cc"
    break;

  case 730: /* $@78: %empty  */
#line 1200 "ompparser.yy"
                 { }
#line 9764 "ompparser.cc"
    break;

  case 732: /* map_parameter: EXPR_STRING  */
#line 1202 "ompparser.yy"
                            { }
#line 9770 "ompparser.cc"
    break;

  case 733: /* $@79: %empty  */
#line 1203 "ompparser.yy"
                                { }
#line 9776 "ompparser.cc"
    break;

  case 747: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1221 "ompparser.yy"
                                    { }
#line 9782 "ompparser.cc"
    break;

  case 748: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1222 "ompparser.yy"
                                    { }
#line 9788 "ompparser.cc"
    break;

  case 749: /* map_modifier1: map_modifier_mapper  */
#line 1223 "ompparser.yy"
                                    { }
#line 9794 "ompparser.cc"
    break;

  case 750: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1225 "ompparser.yy"
                                    { }
#line 9800 "ompparser.cc"
    break;

  case 751: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1226 "ompparser.yy"
                                    { }
#line 9806 "ompparser.cc"
    break;

  case 752: /* map_modifier2: map_modifier_mapper  */
#line 1227 "ompparser.yy"
                                    { }
#line 9812 "ompparser.cc"
    break;

  case 753: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1229 "ompparser.yy"
                                    { }
#line 9818 "ompparser.cc"
    break;

  case 754: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1230 "ompparser.yy"
                                    { }
#line 9824 "ompparser.cc"
    break;

  case 755: /* map_modifier3: map_modifier_mapper  */
#line 1231 "ompparser.yy"
                                    { }
#line 9830 "ompparser.cc"
    break;

  case 756: /* map_type: MAP_TYPE_TO  */
#line 1233 "ompparser.yy"
                       { }
#line 9836 "ompparser.cc"
    break;

  case 757: /* map_type: MAP_TYPE_FROM  */
#line 1234 "ompparser.yy"
                         { }
#line 9842 "ompparser.cc"
    break;

  case 758: /* map_type: MAP_TYPE_TOFROM  */
#line 1235 "ompparser.yy"
                           { }
#line 9848 "ompparser.cc"
    break;

  case 759: /* map_type: MAP_TYPE_ALLOC  */
#line 1236 "ompparser.yy"
                          { }
#line 9854 "ompparser.cc"
    break;

  case 760: /* map_type: MAP_TYPE_RELEASE  */
#line 1237 "ompparser.yy"
                            { }
#line 9860 "ompparser.cc"
    break;

  case 761: /* map_type: MAP_TYPE_DELETE  */
#line 1238 "ompparser.yy"
                           { }
#line 9866 "ompparser.cc"
    break;

  case 762: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1240 "ompparser.yy"
                                                            { }
#line 9872 "ompparser.cc"
    break;

  case 763: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1243 "ompparser.yy"
                                                                                      { }
#line 9878 "ompparser.cc"
    break;

  case 765: /* task_reduction_identifier: EXPR_STRING  */
#line 1246 "ompparser.yy"
                                        { }
#line 9884 "ompparser.cc"
    break;

  case 766: /* task_reduction_enum_identifier: '+'  */
#line 1249 "ompparser.yy"
                                     { }
#line 9890 "ompparser.cc"
    break;

  case 767: /* task_reduction_enum_identifier: '-'  */
#line 1250 "ompparser.yy"
                                     { }
#line 9896 "ompparser.cc"
    break;

  case 768: /* task_reduction_enum_identifier: '*'  */
#line 1251 "ompparser.yy"
                                     { }
#line 9902 "ompparser.cc"
    break;

  case 769: /* task_reduction_enum_identifier: '&'  */
#line 1252 "ompparser.yy"
                                     { }
#line 9908 "ompparser.cc"
    break;

  case 770: /* task_reduction_enum_identifier: '|'  */
#line 1253 "ompparser.yy"
                                     { }
#line 9914 "ompparser.cc"
    break;

  case 771: /* task_reduction_enum_identifier: '^'  */
#line 1254 "ompparser.yy"
                                     { }
#line 9920 "ompparser.cc"
    break;

  case 772: /* task_reduction_enum_identifier: LOGAND  */
#line 1255 "ompparser.yy"
                                        { }
#line 9926 "ompparser.cc"
    break;

  case 773: /* task_reduction_enum_identifier: LOGOR  */
#line 1256 "ompparser.yy"
                                       { }
#line 9932 "ompparser.cc"
    break;

  case 774: /* task_reduction_enum_identifier: MAX  */
#line 1257 "ompparser.yy"
                                     { }
#line 9938 "ompparser.cc"
    break;

  case 775: /* task_reduction_enum_identifier: MIN  */
#line 1258 "ompparser.yy"
                                     { }
#line 9944 "ompparser.cc"
    break;

  case 788: /* threads_clause: THREADS  */
#line 1277 "ompparser.yy"
                         { }
#line 9950 "ompparser.cc"
    break;

  case 789: /* simd_ordered_clause: SIMD  */
#line 1279 "ompparser.yy"
                           { }
#line 9956 "ompparser.cc"
    break;

  case 790: /* $@80: %empty  */
#line 1281 "ompparser.yy"
                                              {if (enCluster) {enDistribute = 1;}}
#line 9962 "ompparser.cc"
    break;

  case 808: /* $@81: %empty  */
#line 1302 "ompparser.yy"
                                                         {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp simd";}}
#line 9968 "ompparser.cc"
    break;

  case 809: /* teams_distribute_simd_directive: TEAMS DISTRIBUTE SIMD $@81 teams_distribute_simd_clause_optseq  */
#line 1302 "ompparser.yy"
                                                                                                                                                                                                      {if (enCluster) {enDistributeExtendido = 0;}}
#line 9974 "ompparser.cc"
    break;

  case 833: /* $@82: %empty  */
#line 1330 "ompparser.yy"
                                                                         {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel for";}}
#line 9980 "ompparser.cc"
    break;

  case 834: /* teams_distribute_parallel_for_directive: TEAMS DISTRIBUTE PARALLEL FOR $@82 teams_distribute_parallel_for_clause_optseq  */
#line 1330 "ompparser.yy"
                                                                                                                                                                                                                                      {if (enCluster) {enDistributeExtendido = 0;}}
#line 9986 "ompparser.cc"
    break;

  case 860: /* $@83: %empty  */
#line 1360 "ompparser.yy"
                                                                       {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel do";}}
#line 9992 "ompparser.cc"
    break;

  case 861: /* teams_distribute_parallel_do_directive: TEAMS DISTRIBUTE PARALLEL DO $@83 teams_distribute_parallel_do_clause_optseq  */
#line 1360 "ompparser.yy"
                                                                                                                                                                                                                                  {if (enCluster) {enDistributeExtendido = 0;}}
#line 9998 "ompparser.cc"
    break;

  case 887: /* $@84: %empty  */
#line 1390 "ompparser.yy"
                                                                                  {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel for simd";}}
#line 10004 "ompparser.cc"
    break;

  case 888: /* teams_distribute_parallel_for_simd_directive: TEAMS DISTRIBUTE PARALLEL FOR SIMD $@84 teams_distribute_parallel_for_simd_clause_optseq  */
#line 1390 "ompparser.yy"
                                                                                                                                                                                                                                                         {if (enCluster) {enDistributeExtendido = 0;}}
#line 10010 "ompparser.cc"
    break;

  case 918: /* $@85: %empty  */
#line 1424 "ompparser.yy"
                                                                                {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp parallel do simd";}}
#line 10016 "ompparser.cc"
    break;

  case 919: /* teams_distribute_parallel_do_simd_directive: TEAMS DISTRIBUTE PARALLEL DO SIMD $@85 teams_distribute_parallel_do_simd_clause_optseq  */
#line 1424 "ompparser.yy"
                                                                                                                                                                                                                                                     {if (enCluster) {enDistributeExtendido = 0;}}
#line 10022 "ompparser.cc"
    break;

  case 949: /* $@86: %empty  */
#line 1458 "ompparser.yy"
                                 { }
#line 10028 "ompparser.cc"
    break;

  case 968: /* $@87: %empty  */
#line 1480 "ompparser.yy"
                                           { }
#line 10034 "ompparser.cc"
    break;

  case 993: /* $@88: %empty  */
#line 1509 "ompparser.yy"
                                                   { }
#line 10040 "ompparser.cc"
    break;

  case 1025: /* $@89: %empty  */
#line 1544 "ompparser.yy"
                                                 { }
#line 10046 "ompparser.cc"
    break;

  case 1057: /* $@90: %empty  */
#line 1579 "ompparser.yy"
                                                             { }
#line 10052 "ompparser.cc"
    break;

  case 1092: /* $@91: %empty  */
#line 1617 "ompparser.yy"
                                                           { }
#line 10058 "ompparser.cc"
    break;

  case 1127: /* $@92: %empty  */
#line 1655 "ompparser.yy"
                                                     { }
#line 10064 "ompparser.cc"
    break;

  case 1156: /* $@93: %empty  */
#line 1687 "ompparser.yy"
                                   { }
#line 10070 "ompparser.cc"
    break;

  case 1184: /* $@94: %empty  */
#line 1718 "ompparser.yy"
                                     { }
#line 10076 "ompparser.cc"
    break;

  case 1208: /* $@95: %empty  */
#line 1745 "ompparser.yy"
                                                           { }
#line 10082 "ompparser.cc"
    break;

  case 1235: /* $@96: %empty  */
#line 1775 "ompparser.yy"
                                                                     { }
#line 10088 "ompparser.cc"
    break;

  case 1268: /* $@97: %empty  */
#line 1811 "ompparser.yy"
                                               { }
#line 10094 "ompparser.cc"
    break;

  case 1296: /* $@98: %empty  */
#line 1842 "ompparser.yy"
                                                                                     { }
#line 10100 "ompparser.cc"
    break;

  case 1330: /* $@99: %empty  */
#line 1879 "ompparser.yy"
                                                                                   { }
#line 10106 "ompparser.cc"
    break;

  case 1364: /* $@100: %empty  */
#line 1916 "ompparser.yy"
                                                                                               { }
#line 10112 "ompparser.cc"
    break;

  case 1402: /* $@101: %empty  */
#line 1957 "ompparser.yy"
                                                                                             { }
#line 10118 "ompparser.cc"
    break;

  case 1440: /* $@102: %empty  */
#line 2000 "ompparser.yy"
                    { }
#line 10124 "ompparser.cc"
    break;

  case 1442: /* $@103: %empty  */
#line 2002 "ompparser.yy"
                  { }
#line 10130 "ompparser.cc"
    break;

  case 1444: /* $@104: %empty  */
#line 2004 "ompparser.yy"
                         { }
#line 10136 "ompparser.cc"
    break;

  case 1446: /* $@105: %empty  */
#line 2006 "ompparser.yy"
                      { }
#line 10142 "ompparser.cc"
    break;

  case 1448: /* $@106: %empty  */
#line 2008 "ompparser.yy"
                              { }
#line 10148 "ompparser.cc"
    break;

  case 1450: /* $@107: %empty  */
#line 2010 "ompparser.yy"
                            { }
#line 10154 "ompparser.cc"
    break;

  case 1452: /* $@108: %empty  */
#line 2012 "ompparser.yy"
                                   { }
#line 10160 "ompparser.cc"
    break;

  case 1455: /* $@109: %empty  */
#line 2016 "ompparser.yy"
                                              { }
#line 10166 "ompparser.cc"
    break;

  case 1457: /* $@110: %empty  */
#line 2018 "ompparser.yy"
                                      { }
#line 10172 "ompparser.cc"
    break;

  case 1459: /* $@111: %empty  */
#line 2020 "ompparser.yy"
                                              { }
#line 10178 "ompparser.cc"
    break;

  case 1462: /* proc_name: EXPR_STRING  */
#line 2023 "ompparser.yy"
                        { }
#line 10184 "ompparser.cc"
    break;

  case 1463: /* $@112: %empty  */
#line 2025 "ompparser.yy"
                                  {if (enCluster) {enDistribute = 1;}}
#line 10190 "ompparser.cc"
    break;

  case 1465: /* $@113: %empty  */
#line 2027 "ompparser.yy"
                                            {if (enCluster) {enDistribute = 1; enDistributeExtendido = 1; guardarLineasDist += "#pragma omp simd";}}
#line 10196 "ompparser.cc"
    break;

  case 1466: /* distribute_simd_directive: DISTRIBUTE SIMD $@113 distribute_simd_clause_optseq  */
#line 2027 "ompparser.yy"
                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10202 "ompparser.cc"
    break;

  case 1467: /* $@114: %empty  */
#line 2029 "ompparser.yy"
                                                            {if (enCluster) {enDistribute = 1; enDistributeExtendido = 2; guardarLineasDist += "#pragma omp parallel for";}}
#line 10208 "ompparser.cc"
    break;

  case 1468: /* distribute_parallel_for_directive: DISTRIBUTE PARALLEL FOR $@114 distribute_parallel_for_clause_optseq  */
#line 2029 "ompparser.yy"
                                                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10214 "ompparser.cc"
    break;

  case 1469: /* $@115: %empty  */
#line 2031 "ompparser.yy"
                                                          {if (enCluster) {enDistribute = 1; enDistributeExtendido = 3; guardarLineasDist += "#pragma omp parallel do";}}
#line 10220 "ompparser.cc"
    break;

  case 1470: /* distribute_parallel_do_directive: DISTRIBUTE PARALLEL DO $@115 distribute_parallel_do_clause_optseq  */
#line 2031 "ompparser.yy"
                                                                                                                                                                                                               {if (enCluster) {enDistributeExtendido = 0;}}
#line 10226 "ompparser.cc"
    break;

  case 1471: /* $@116: %empty  */
#line 2033 "ompparser.yy"
                                                                      {if (enCluster) {enDistribute = 1; enDistributeExtendido = 4; guardarLineasDist += "#pragma omp parallel for simd";}}
#line 10232 "ompparser.cc"
    break;

  case 1472: /* distribute_parallel_for_simd_directive: DISTRIBUTE PARALLEL FOR SIMD $@116 distribute_parallel_for_simd_clause_optseq  */
#line 2033 "ompparser.yy"
                                                                                                                                                                                                                                       {if (enCluster) {enDistributeExtendido = 0;}}
#line 10238 "ompparser.cc"
    break;

  case 1473: /* $@117: %empty  */
#line 2035 "ompparser.yy"
                                                                    {if (enCluster) {enDistribute = 1; enDistributeExtendido = 5; guardarLineasDist += "#pragma omp parallel do simd";}}
#line 10244 "ompparser.cc"
    break;

  case 1474: /* distribute_parallel_do_simd_directive: DISTRIBUTE PARALLEL DO SIMD $@117 distribute_parallel_do_simd_clause_optseq  */
#line 2035 "ompparser.yy"
                                                                                                                                                                                                                                   {if (enCluster) {enDistributeExtendido = 0;}}
#line 10250 "ompparser.cc"
    break;

  case 1475: /* $@118: %empty  */
#line 2037 "ompparser.yy"
                                      { }
#line 10256 "ompparser.cc"
    break;

  case 1477: /* $@119: %empty  */
#line 2039 "ompparser.yy"
                                    { }
#line 10262 "ompparser.cc"
    break;

  case 1479: /* $@120: %empty  */
#line 2041 "ompparser.yy"
                                        { }
#line 10268 "ompparser.cc"
    break;

  case 1481: /* $@121: %empty  */
#line 2043 "ompparser.yy"
                                                { }
#line 10274 "ompparser.cc"
    break;

  case 1483: /* $@122: %empty  */
#line 2045 "ompparser.yy"
                                                  { }
#line 10280 "ompparser.cc"
    break;

  case 1485: /* $@123: %empty  */
#line 2047 "ompparser.yy"
                                            { }
#line 10286 "ompparser.cc"
    break;

  case 1487: /* $@124: %empty  */
#line 2049 "ompparser.yy"
                                            {
                          }
#line 10293 "ompparser.cc"
    break;

  case 1489: /* $@125: %empty  */
#line 2053 "ompparser.yy"
                                                      {
                               }
#line 10300 "ompparser.cc"
    break;

  case 1491: /* $@126: %empty  */
#line 2057 "ompparser.yy"
                                                              {
                                   }
#line 10307 "ompparser.cc"
    break;

  case 1493: /* $@127: %empty  */
#line 2061 "ompparser.yy"
                                                                        {
                                        }
#line 10314 "ompparser.cc"
    break;

  case 1495: /* $@128: %empty  */
#line 2065 "ompparser.yy"
                      { }
#line 10320 "ompparser.cc"
    break;

  case 1497: /* $@129: %empty  */
#line 2067 "ompparser.yy"
                      { }
#line 10326 "ompparser.cc"
    break;

  case 1499: /* $@130: %empty  */
#line 2069 "ompparser.yy"
                              { }
#line 10332 "ompparser.cc"
    break;

  case 1501: /* $@131: %empty  */
#line 2071 "ompparser.yy"
                                     { }
#line 10338 "ompparser.cc"
    break;

  case 1503: /* section_directive: SECTION  */
#line 2073 "ompparser.yy"
                            { }
#line 10344 "ompparser.cc"
    break;

  case 1504: /* $@132: %empty  */
#line 2075 "ompparser.yy"
                          { }
#line 10350 "ompparser.cc"
    break;

  case 1506: /* $@133: %empty  */
#line 2077 "ompparser.yy"
                                 { }
#line 10356 "ompparser.cc"
    break;

  case 1508: /* workshare_directive: WORKSHARE  */
#line 2079 "ompparser.yy"
                                { }
#line 10362 "ompparser.cc"
    break;

  case 1509: /* $@134: %empty  */
#line 2081 "ompparser.yy"
                                       { }
#line 10368 "ompparser.cc"
    break;

  case 1511: /* $@135: %empty  */
#line 2083 "ompparser.yy"
                          { }
#line 10374 "ompparser.cc"
    break;

  case 1513: /* $@136: %empty  */
#line 2090 "ompparser.yy"
                                                  { }
#line 10380 "ompparser.cc"
    break;

  case 1515: /* $@137: %empty  */
#line 2097 "ompparser.yy"
                        { }
#line 10386 "ompparser.cc"
    break;

  case 1517: /* $@138: %empty  */
#line 2100 "ompparser.yy"
                              { }
#line 10392 "ompparser.cc"
    break;

  case 1520: /* directive_variable: EXPR_STRING  */
#line 2105 "ompparser.yy"
                                 { }
#line 10398 "ompparser.cc"
    break;

  case 1523: /* $@139: %empty  */
#line 2111 "ompparser.yy"
                                        {  }
#line 10404 "ompparser.cc"
    break;

  case 1525: /* threadprivate_variable: EXPR_STRING  */
#line 2113 "ompparser.yy"
                                     { }
#line 10410 "ompparser.cc"
    break;

  case 1528: /* $@140: %empty  */
#line 2119 "ompparser.yy"
                                                { }
#line 10416 "ompparser.cc"
    break;

  case 1531: /* reduction_identifiers: '+'  */
#line 2125 "ompparser.yy"
                           { }
#line 10422 "ompparser.cc"
    break;

  case 1532: /* reduction_identifiers: '-'  */
#line 2126 "ompparser.yy"
                           { }
#line 10428 "ompparser.cc"
    break;

  case 1533: /* reduction_identifiers: '*'  */
#line 2127 "ompparser.yy"
                           { }
#line 10434 "ompparser.cc"
    break;

  case 1534: /* reduction_identifiers: '&'  */
#line 2128 "ompparser.yy"
                           { }
#line 10440 "ompparser.cc"
    break;

  case 1535: /* reduction_identifiers: '|'  */
#line 2129 "ompparser.yy"
                           { }
#line 10446 "ompparser.cc"
    break;

  case 1536: /* reduction_identifiers: '^'  */
#line 2130 "ompparser.yy"
                           { }
#line 10452 "ompparser.cc"
    break;

  case 1537: /* reduction_identifiers: LOGAND  */
#line 2131 "ompparser.yy"
                              { }
#line 10458 "ompparser.cc"
    break;

  case 1538: /* reduction_identifiers: LOGOR  */
#line 2132 "ompparser.yy"
                             { }
#line 10464 "ompparser.cc"
    break;

  case 1539: /* typername_variable: EXPR_STRING  */
#line 2135 "ompparser.yy"
                                 { }
#line 10470 "ompparser.cc"
    break;

  case 1542: /* combiner: EXPR_STRING  */
#line 2140 "ompparser.yy"
                       { }
#line 10476 "ompparser.cc"
    break;

  case 1543: /* $@141: %empty  */
#line 2143 "ompparser.yy"
                                          { }
#line 10482 "ompparser.cc"
    break;

  case 1548: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2153 "ompparser.yy"
                                       { }
#line 10488 "ompparser.cc"
    break;

  case 1549: /* mapper_identifier: EXPR_STRING  */
#line 2154 "ompparser.yy"
                                { }
#line 10494 "ompparser.cc"
    break;

  case 1550: /* type_var: EXPR_STRING  */
#line 2157 "ompparser.yy"
                       { }
#line 10500 "ompparser.cc"
    break;

  case 1775: /* $@142: %empty  */
#line 2517 "ompparser.yy"
                             {enScatter = 1; chunk_pos = 0; aumentarScatter();}
#line 10506 "ompparser.cc"
    break;

  case 1776: /* cluster_clause: $@142 scatter_clause  */
#line 2517 "ompparser.yy"
                                                                                               {enScatter = 0; MPIScatter(); if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10512 "ompparser.cc"
    break;

  case 1777: /* $@143: %empty  */
#line 2518 "ompparser.yy"
                             {enGather = 1; chunk_pos = 0; aumentarGather(); enGatherInst = 1;}
#line 10518 "ompparser.cc"
    break;

  case 1778: /* cluster_clause: $@143 gather_clause  */
#line 2518 "ompparser.yy"
                                                                                                              {enGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10524 "ompparser.cc"
    break;

  case 1779: /* $@144: %empty  */
#line 2519 "ompparser.yy"
                             {enAllGather = 1; chunk_pos = 0; aumentarAllGather(); enAllGatherInst = 1;}
#line 10530 "ompparser.cc"
    break;

  case 1780: /* cluster_clause: $@144 allgather_clause  */
#line 2519 "ompparser.yy"
                                                                                                                          {enAllGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10536 "ompparser.cc"
    break;

  case 1782: /* $@145: %empty  */
#line 2521 "ompparser.yy"
                             {enReductionCluster = 1;}
#line 10542 "ompparser.cc"
    break;

  case 1784: /* $@146: %empty  */
#line 2522 "ompparser.yy"
                             {enAllReductionCluster = 1;}
#line 10548 "ompparser.cc"
    break;

  case 1788: /* $@147: %empty  */
#line 2527 "ompparser.yy"
                                        {enScatter = 1; chunk_pos = 0; aumentarScatter();}
#line 10554 "ompparser.cc"
    break;

  case 1789: /* cluster_data_clause: $@147 scatter_clause  */
#line 2527 "ompparser.yy"
                                                                                                          {enScatter = 0; MPIScatter(); if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10560 "ompparser.cc"
    break;

  case 1790: /* $@148: %empty  */
#line 2528 "ompparser.yy"
                                        {enGather = 1; chunk_pos = 0; aumentarGather(); enGatherInst = 1;}
#line 10566 "ompparser.cc"
    break;

  case 1791: /* cluster_data_clause: $@148 gather_clause  */
#line 2528 "ompparser.yy"
                                                                                                                         {enGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10572 "ompparser.cc"
    break;

  case 1792: /* $@149: %empty  */
#line 2529 "ompparser.yy"
                                        {enAllGather = 1; chunk_pos = 0; aumentarAllGather(); enAllGatherInst = 1;}
#line 10578 "ompparser.cc"
    break;

  case 1793: /* cluster_data_clause: $@149 allgather_clause  */
#line 2529 "ompparser.yy"
                                                                                                                                     {enAllGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10584 "ompparser.cc"
    break;

  case 1795: /* $@150: %empty  */
#line 2531 "ompparser.yy"
                                        {enReductionCluster = 1;}
#line 10590 "ompparser.cc"
    break;

  case 1797: /* $@151: %empty  */
#line 2532 "ompparser.yy"
                                        {enAllReductionCluster = 1;}
#line 10596 "ompparser.cc"
    break;

  case 1801: /* $@152: %empty  */
#line 2537 "ompparser.yy"
                                        {enScatter = 1; chunk_pos = 0; aumentarScatter();}
#line 10602 "ompparser.cc"
    break;

  case 1802: /* cluster_update_clause: $@152 scatter_clause  */
#line 2537 "ompparser.yy"
                                                                                                          {enScatter = 0; MPIScatter(); if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10608 "ompparser.cc"
    break;

  case 1803: /* $@153: %empty  */
#line 2538 "ompparser.yy"
                                        {enGather = 1; chunk_pos = 0; aumentarGather(); enGatherInst = 1;}
#line 10614 "ompparser.cc"
    break;

  case 1804: /* cluster_update_clause: $@153 gather_clause  */
#line 2538 "ompparser.yy"
                                                                                                                         {enGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10620 "ompparser.cc"
    break;

  case 1805: /* $@154: %empty  */
#line 2539 "ompparser.yy"
                                        {enAllGather = 1; chunk_pos = 0; aumentarAllGather(); enAllGatherInst = 1;}
#line 10626 "ompparser.cc"
    break;

  case 1806: /* cluster_update_clause: $@154 allgather_clause  */
#line 2539 "ompparser.yy"
                                                                                                                                     {enAllGatherInst = 0; if (!includeStringDone){includeStringDone = 1; IncludeString();}}
#line 10632 "ompparser.cc"
    break;

  case 1808: /* $@155: %empty  */
#line 2541 "ompparser.yy"
                                        {enReductionCluster = 1;}
#line 10638 "ompparser.cc"
    break;

  case 1810: /* $@156: %empty  */
#line 2542 "ompparser.yy"
                                        {enAllReductionCluster = 1;}
#line 10644 "ompparser.cc"
    break;

  case 1835: /* $@157: %empty  */
#line 2570 "ompparser.yy"
                      {enReductionDistribute = 1;}
#line 10650 "ompparser.cc"
    break;

  case 1837: /* $@158: %empty  */
#line 2571 "ompparser.yy"
                      {enAllReductionDistribute = 1;}
#line 10656 "ompparser.cc"
    break;

  case 1858: /* $@159: %empty  */
#line 2593 "ompparser.yy"
                                  {enReductionDistribute = 1;}
#line 10662 "ompparser.cc"
    break;

  case 1860: /* $@160: %empty  */
#line 2594 "ompparser.yy"
                                  {enAllReductionDistribute = 1;}
#line 10668 "ompparser.cc"
    break;

  case 1862: /* $@161: %empty  */
#line 2597 "ompparser.yy"
                           { }
#line 10674 "ompparser.cc"
    break;

  case 1864: /* dependance_type: IN  */
#line 2600 "ompparser.yy"
                     {
                      addArg("IN"); }
#line 10681 "ompparser.cc"
    break;

  case 1865: /* dependance_type: OUT  */
#line 2602 "ompparser.yy"
                                      {
                      addArg("OUT"); }
#line 10688 "ompparser.cc"
    break;

  case 1978: /* $@162: %empty  */
#line 2735 "ompparser.yy"
                         {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10694 "ompparser.cc"
    break;

  case 1980: /* $@163: %empty  */
#line 2736 "ompparser.yy"
                         {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10700 "ompparser.cc"
    break;

  case 1996: /* $@164: %empty  */
#line 2753 "ompparser.yy"
                                 {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10706 "ompparser.cc"
    break;

  case 2000: /* $@165: %empty  */
#line 2756 "ompparser.yy"
                                 {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10712 "ompparser.cc"
    break;

  case 2016: /* $@166: %empty  */
#line 2772 "ompparser.yy"
                                {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10718 "ompparser.cc"
    break;

  case 2020: /* $@167: %empty  */
#line 2775 "ompparser.yy"
                                {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10724 "ompparser.cc"
    break;

  case 2035: /* $@168: %empty  */
#line 2790 "ompparser.yy"
                                      {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10730 "ompparser.cc"
    break;

  case 2039: /* $@169: %empty  */
#line 2793 "ompparser.yy"
                                      {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10736 "ompparser.cc"
    break;

  case 2046: /* $@170: %empty  */
#line 2799 "ompparser.yy"
                                      {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10742 "ompparser.cc"
    break;

  case 2060: /* $@171: %empty  */
#line 2813 "ompparser.yy"
                                     {if (enDistributeExtendido) {guardarLineasDist += " linear("; meterEnClause = 1;}}
#line 10748 "ompparser.cc"
    break;

  case 2064: /* $@172: %empty  */
#line 2816 "ompparser.yy"
                                     {if (enDistributeExtendido > 1) {guardarLineasDist += " ordered"; meterEnClause = 1;}}
#line 10754 "ompparser.cc"
    break;

  case 2070: /* $@173: %empty  */
#line 2821 "ompparser.yy"
                                     {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " aligned("; meterEnClause = 1;}}
#line 10760 "ompparser.cc"
    break;

  case 2258: /* construct_type_clause: PARALLEL  */
#line 3024 "ompparser.yy"
                                 { }
#line 10766 "ompparser.cc"
    break;

  case 2259: /* construct_type_clause: SECTIONS  */
#line 3025 "ompparser.yy"
                                 { }
#line 10772 "ompparser.cc"
    break;

  case 2260: /* construct_type_clause: FOR  */
#line 3026 "ompparser.yy"
                            { }
#line 10778 "ompparser.cc"
    break;

  case 2261: /* construct_type_clause: DO  */
#line 3027 "ompparser.yy"
                           { }
#line 10784 "ompparser.cc"
    break;

  case 2262: /* construct_type_clause: TASKGROUP  */
#line 3028 "ompparser.yy"
                                  { }
#line 10790 "ompparser.cc"
    break;

  case 2263: /* $@174: %empty  */
#line 3035 "ompparser.yy"
                        {if (enDistributeExtendido == 2 || enDistributeExtendido == 3){guardarLineasDist += " if("; meterEnClause = 1;}}
#line 10796 "ompparser.cc"
    break;

  case 2264: /* if_parallel_clause: IF $@174 '(' if_parallel_parameter ')'  */
#line 3035 "ompparser.yy"
                                                                                                                                                                       {if (enDistributeExtendido == 2 || enDistributeExtendido == 3){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 10802 "ompparser.cc"
    break;

  case 2265: /* $@175: %empty  */
#line 3038 "ompparser.yy"
                                     {if (meterEnClause){guardarLineasDist += (yyvsp[-1].stype);}}
#line 10808 "ompparser.cc"
    break;

  case 2266: /* if_parallel_parameter: PARALLEL ':' $@175 expression  */
#line 3039 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[-3].stype);}}
#line 10814 "ompparser.cc"
    break;

  case 2267: /* if_parallel_parameter: EXPR_STRING  */
#line 3040 "ompparser.yy"
                                    {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 10820 "ompparser.cc"
    break;

  case 2268: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 3042 "ompparser.yy"
                                              { ; }
#line 10826 "ompparser.cc"
    break;

  case 2269: /* $@176: %empty  */
#line 3045 "ompparser.yy"
                             { }
#line 10832 "ompparser.cc"
    break;

  case 2270: /* if_task_parameter: TASK ':' $@176 expression  */
#line 3045 "ompparser.yy"
                                             { ; }
#line 10838 "ompparser.cc"
    break;

  case 2271: /* if_task_parameter: EXPR_STRING  */
#line 3046 "ompparser.yy"
                                { }
#line 10844 "ompparser.cc"
    break;

  case 2272: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 3048 "ompparser.yy"
                                                      { ; }
#line 10850 "ompparser.cc"
    break;

  case 2273: /* $@177: %empty  */
#line 3051 "ompparser.yy"
                                     { }
#line 10856 "ompparser.cc"
    break;

  case 2274: /* if_taskloop_parameter: TASKLOOP ':' $@177 expression  */
#line 3051 "ompparser.yy"
                                                     { ; }
#line 10862 "ompparser.cc"
    break;

  case 2275: /* if_taskloop_parameter: EXPR_STRING  */
#line 3052 "ompparser.yy"
                                    { }
#line 10868 "ompparser.cc"
    break;

  case 2276: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 3054 "ompparser.yy"
                                                            { ; }
#line 10874 "ompparser.cc"
    break;

  case 2277: /* $@178: %empty  */
#line 3057 "ompparser.yy"
                                           { }
#line 10880 "ompparser.cc"
    break;

  case 2278: /* if_target_data_parameter: TARGET DATA ':' $@178 expression  */
#line 3057 "ompparser.yy"
                                                           { ; }
#line 10886 "ompparser.cc"
    break;

  case 2279: /* if_target_data_parameter: EXPR_STRING  */
#line 3058 "ompparser.yy"
                                       { }
#line 10892 "ompparser.cc"
    break;

  case 2280: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 3060 "ompparser.yy"
                                                                    { ; }
#line 10898 "ompparser.cc"
    break;

  case 2281: /* $@179: %empty  */
#line 3063 "ompparser.yy"
                                          { }
#line 10904 "ompparser.cc"
    break;

  case 2282: /* if_target_parallel_parameter: TARGET ':' $@179 expression  */
#line 3063 "ompparser.yy"
                                                          { ; }
#line 10910 "ompparser.cc"
    break;

  case 2283: /* $@180: %empty  */
#line 3064 "ompparser.yy"
                                            { }
#line 10916 "ompparser.cc"
    break;

  case 2284: /* if_target_parallel_parameter: PARALLEL ':' $@180 expression  */
#line 3064 "ompparser.yy"
                                                            { ; }
#line 10922 "ompparser.cc"
    break;

  case 2285: /* if_target_parallel_parameter: EXPR_STRING  */
#line 3065 "ompparser.yy"
                                           { }
#line 10928 "ompparser.cc"
    break;

  case 2286: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 3067 "ompparser.yy"
                                                            { ; }
#line 10934 "ompparser.cc"
    break;

  case 2287: /* $@181: %empty  */
#line 3070 "ompparser.yy"
                                      { }
#line 10940 "ompparser.cc"
    break;

  case 2288: /* if_target_simd_parameter: TARGET ':' $@181 expression  */
#line 3070 "ompparser.yy"
                                                      { ; }
#line 10946 "ompparser.cc"
    break;

  case 2289: /* $@182: %empty  */
#line 3071 "ompparser.yy"
                                    { }
#line 10952 "ompparser.cc"
    break;

  case 2290: /* if_target_simd_parameter: SIMD ':' $@182 expression  */
#line 3071 "ompparser.yy"
                                                    { ; }
#line 10958 "ompparser.cc"
    break;

  case 2291: /* if_target_simd_parameter: EXPR_STRING  */
#line 3072 "ompparser.yy"
                                       { }
#line 10964 "ompparser.cc"
    break;

  case 2292: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 3074 "ompparser.yy"
                                                                        { ; }
#line 10970 "ompparser.cc"
    break;

  case 2293: /* $@183: %empty  */
#line 3077 "ompparser.yy"
                                                       { }
#line 10976 "ompparser.cc"
    break;

  case 2294: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@183 expression  */
#line 3077 "ompparser.yy"
                                                                       { ; }
#line 10982 "ompparser.cc"
    break;

  case 2295: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 3078 "ompparser.yy"
                                             { }
#line 10988 "ompparser.cc"
    break;

  case 2296: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 3080 "ompparser.yy"
                                                                      { ; }
#line 10994 "ompparser.cc"
    break;

  case 2297: /* $@184: %empty  */
#line 3083 "ompparser.yy"
                                                     { }
#line 11000 "ompparser.cc"
    break;

  case 2298: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@184 expression  */
#line 3083 "ompparser.yy"
                                                                     { ; }
#line 11006 "ompparser.cc"
    break;

  case 2299: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 3084 "ompparser.yy"
                                            { }
#line 11012 "ompparser.cc"
    break;

  case 2300: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 3086 "ompparser.yy"
                                                  { ; }
#line 11018 "ompparser.cc"
    break;

  case 2301: /* $@185: %empty  */
#line 3089 "ompparser.yy"
                                 { }
#line 11024 "ompparser.cc"
    break;

  case 2302: /* if_target_parameter: TARGET ':' $@185 expression  */
#line 3089 "ompparser.yy"
                                                 { ; }
#line 11030 "ompparser.cc"
    break;

  case 2303: /* if_target_parameter: EXPR_STRING  */
#line 3090 "ompparser.yy"
                                  { }
#line 11036 "ompparser.cc"
    break;

  case 2304: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 3092 "ompparser.yy"
                                                                { ; }
#line 11042 "ompparser.cc"
    break;

  case 2305: /* $@186: %empty  */
#line 3095 "ompparser.yy"
                                               { }
#line 11048 "ompparser.cc"
    break;

  case 2306: /* if_target_update_parameter: TARGET UPDATE ':' $@186 expression  */
#line 3095 "ompparser.yy"
                                                               { ; }
#line 11054 "ompparser.cc"
    break;

  case 2307: /* if_target_update_parameter: EXPR_STRING  */
#line 3096 "ompparser.yy"
                                         { }
#line 11060 "ompparser.cc"
    break;

  case 2308: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3098 "ompparser.yy"
                                                                { ; }
#line 11066 "ompparser.cc"
    break;

  case 2309: /* $@187: %empty  */
#line 3101 "ompparser.yy"
                                          { }
#line 11072 "ompparser.cc"
    break;

  case 2310: /* if_taskloop_simd_parameter: TASKLOOP ':' $@187 expression  */
#line 3101 "ompparser.yy"
                                                          { ; }
#line 11078 "ompparser.cc"
    break;

  case 2311: /* $@188: %empty  */
#line 3102 "ompparser.yy"
                                      { }
#line 11084 "ompparser.cc"
    break;

  case 2312: /* if_taskloop_simd_parameter: SIMD ':' $@188 expression  */
#line 3102 "ompparser.yy"
                                                      { ; }
#line 11090 "ompparser.cc"
    break;

  case 2313: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3103 "ompparser.yy"
                                         {
                             }
#line 11097 "ompparser.cc"
    break;

  case 2314: /* $@189: %empty  */
#line 3105 "ompparser.yy"
                    {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " if("; meterEnClause = 1;}}
#line 11103 "ompparser.cc"
    break;

  case 2315: /* if_simd_clause: IF $@189 '(' if_simd_parameter ')'  */
#line 3105 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11109 "ompparser.cc"
    break;

  case 2316: /* $@190: %empty  */
#line 3107 "ompparser.yy"
                             {if (meterEnClause) {guardarLineasDist += "simd:";}}
#line 11115 "ompparser.cc"
    break;

  case 2317: /* if_simd_parameter: SIMD ':' $@190 expression  */
#line 3107 "ompparser.yy"
                                                                                              {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11121 "ompparser.cc"
    break;

  case 2318: /* if_simd_parameter: EXPR_STRING  */
#line 3108 "ompparser.yy"
                                {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11127 "ompparser.cc"
    break;

  case 2319: /* $@191: %empty  */
#line 3110 "ompparser.yy"
                                 {if(enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += "if("; meterEnClause = 1;}}
#line 11133 "ompparser.cc"
    break;

  case 2320: /* if_parallel_simd_clause: IF '(' $@191 if_parallel_simd_parameter ')'  */
#line 3110 "ompparser.yy"
                                                                                                                                                                               {if(enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11139 "ompparser.cc"
    break;

  case 2321: /* if_parallel_simd_parameter: SIMD ':' expression  */
#line 3112 "ompparser.yy"
                                                 {if(meterEnClause){guardarLineasDist += "simd:"; guardarLineasDist += (yyvsp[0].stype);}}
#line 11145 "ompparser.cc"
    break;

  case 2322: /* if_parallel_simd_parameter: PARALLEL ':' expression  */
#line 3113 "ompparser.yy"
                                                     {if(meterEnClause){guardarLineasDist += "parallel:"; guardarLineasDist += (yyvsp[0].stype);}}
#line 11151 "ompparser.cc"
    break;

  case 2323: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3114 "ompparser.yy"
                                         {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11157 "ompparser.cc"
    break;

  case 2324: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3116 "ompparser.yy"
                                                                              { ; }
#line 11163 "ompparser.cc"
    break;

  case 2325: /* $@192: %empty  */
#line 3118 "ompparser.yy"
                                             { }
#line 11169 "ompparser.cc"
    break;

  case 2326: /* if_target_parallel_simd_parameter: SIMD ':' $@192 expression  */
#line 3118 "ompparser.yy"
                                                             { ; }
#line 11175 "ompparser.cc"
    break;

  case 2327: /* $@193: %empty  */
#line 3119 "ompparser.yy"
                                                 { }
#line 11181 "ompparser.cc"
    break;

  case 2328: /* if_target_parallel_simd_parameter: PARALLEL ':' $@193 expression  */
#line 3119 "ompparser.yy"
                                                                 { ; }
#line 11187 "ompparser.cc"
    break;

  case 2329: /* $@194: %empty  */
#line 3120 "ompparser.yy"
                                               { }
#line 11193 "ompparser.cc"
    break;

  case 2330: /* if_target_parallel_simd_parameter: TARGET ':' $@194 expression  */
#line 3120 "ompparser.yy"
                                                               { ; }
#line 11199 "ompparser.cc"
    break;

  case 2331: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3121 "ompparser.yy"
                                                { }
#line 11205 "ompparser.cc"
    break;

  case 2332: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3123 "ompparser.yy"
                                                  { ; }
#line 11211 "ompparser.cc"
    break;

  case 2333: /* $@195: %empty  */
#line 3125 "ompparser.yy"
                                 { }
#line 11217 "ompparser.cc"
    break;

  case 2334: /* if_cancel_parameter: CANCEL ':' $@195 expression  */
#line 3125 "ompparser.yy"
                                                 { ; }
#line 11223 "ompparser.cc"
    break;

  case 2335: /* if_cancel_parameter: EXPR_STRING  */
#line 3126 "ompparser.yy"
                                  { }
#line 11229 "ompparser.cc"
    break;

  case 2336: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3128 "ompparser.yy"
                                                                        { ; }
#line 11235 "ompparser.cc"
    break;

  case 2337: /* $@196: %empty  */
#line 3130 "ompparser.yy"
                                              { }
#line 11241 "ompparser.cc"
    break;

  case 2338: /* if_parallel_taskloop_parameter: PARALLEL ':' $@196 expression  */
#line 3130 "ompparser.yy"
                                                              { ; }
#line 11247 "ompparser.cc"
    break;

  case 2339: /* $@197: %empty  */
#line 3131 "ompparser.yy"
                                              { }
#line 11253 "ompparser.cc"
    break;

  case 2340: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@197 expression  */
#line 3131 "ompparser.yy"
                                                              { ; }
#line 11259 "ompparser.cc"
    break;

  case 2341: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3132 "ompparser.yy"
                                             {
                                }
#line 11266 "ompparser.cc"
    break;

  case 2342: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3134 "ompparser.yy"
                                                                                  { ; }
#line 11272 "ompparser.cc"
    break;

  case 2343: /* $@198: %empty  */
#line 3136 "ompparser.yy"
                                                   { }
#line 11278 "ompparser.cc"
    break;

  case 2344: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@198 expression  */
#line 3136 "ompparser.yy"
                                                                   { ; }
#line 11284 "ompparser.cc"
    break;

  case 2345: /* $@199: %empty  */
#line 3137 "ompparser.yy"
                                                   { }
#line 11290 "ompparser.cc"
    break;

  case 2346: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@199 expression  */
#line 3137 "ompparser.yy"
                                                                   { ; }
#line 11296 "ompparser.cc"
    break;

  case 2347: /* $@200: %empty  */
#line 3138 "ompparser.yy"
                                               { }
#line 11302 "ompparser.cc"
    break;

  case 2348: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@200 expression  */
#line 3138 "ompparser.yy"
                                                               { ; }
#line 11308 "ompparser.cc"
    break;

  case 2349: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3139 "ompparser.yy"
                                                  { }
#line 11314 "ompparser.cc"
    break;

  case 2350: /* $@201: %empty  */
#line 3150 "ompparser.yy"
                                {if (enDistributeExtendido > 1){guardarLineasDist += " num_threads("; meterEnClause = 1;}}
#line 11320 "ompparser.cc"
    break;

  case 2351: /* num_threads_clause: NUM_THREADS $@201 '(' expression ')'  */
#line 3150 "ompparser.yy"
                                                                                                                                              {if (enDistributeExtendido > 1){guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11326 "ompparser.cc"
    break;

  case 2352: /* $@202: %empty  */
#line 3152 "ompparser.yy"
                            {
                         }
#line 11333 "ompparser.cc"
    break;

  case 2354: /* $@203: %empty  */
#line 3155 "ompparser.yy"
                    {
                  }
#line 11340 "ompparser.cc"
    break;

  case 2356: /* $@204: %empty  */
#line 3159 "ompparser.yy"
                                  { }
#line 11346 "ompparser.cc"
    break;

  case 2358: /* $@205: %empty  */
#line 3161 "ompparser.yy"
                      {if (enDistributeExtendido > 1){guardarLineasDist += " copyin("; meterEnClause = 1;}}
#line 11352 "ompparser.cc"
    break;

  case 2359: /* copyin_clause: COPYIN $@205 '(' var_list ')'  */
#line 3161 "ompparser.yy"
                                                                                                                             {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11358 "ompparser.cc"
    break;

  case 2360: /* $@206: %empty  */
#line 3164 "ompparser.yy"
                         {if (enDistributeExtendido > 1){guardarLineasDist += " default("; meterEnClause = 1;}}
#line 11364 "ompparser.cc"
    break;

  case 2361: /* default_clause: DEFAULT $@206 '(' default_parameter ')'  */
#line 3164 "ompparser.yy"
                                                                                                                                          {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11370 "ompparser.cc"
    break;

  case 2362: /* default_parameter: SHARED  */
#line 3167 "ompparser.yy"
                           {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11376 "ompparser.cc"
    break;

  case 2363: /* default_parameter: NONE  */
#line 3168 "ompparser.yy"
                         {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11382 "ompparser.cc"
    break;

  case 2364: /* default_parameter: FIRSTPRIVATE  */
#line 3169 "ompparser.yy"
                                 {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11388 "ompparser.cc"
    break;

  case 2365: /* default_parameter: PRIVATE  */
#line 3170 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11394 "ompparser.cc"
    break;

  case 2366: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3173 "ompparser.yy"
                                                                   { }
#line 11400 "ompparser.cc"
    break;

  case 2367: /* default_variant_directive: %empty  */
#line 3176 "ompparser.yy"
                            { }
#line 11406 "ompparser.cc"
    break;

  case 2368: /* $@207: %empty  */
#line 3179 "ompparser.yy"
                             {if(enDistributeExtendido > 1){guardarLineasDist += " proc_bind("; meterEnClause = 1;}}
#line 11412 "ompparser.cc"
    break;

  case 2369: /* proc_bind_clause: PROC_BIND $@207 '(' proc_bind_parameter ')'  */
#line 3179 "ompparser.yy"
                                                                                                                                                 {if(enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11418 "ompparser.cc"
    break;

  case 2370: /* proc_bind_parameter: MASTER  */
#line 3182 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11424 "ompparser.cc"
    break;

  case 2371: /* proc_bind_parameter: CLOSE  */
#line 3183 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11430 "ompparser.cc"
    break;

  case 2372: /* proc_bind_parameter: SPREAD  */
#line 3184 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11436 "ompparser.cc"
    break;

  case 2373: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3186 "ompparser.yy"
                                          { }
#line 11442 "ompparser.cc"
    break;

  case 2374: /* bind_parameter: TEAMS  */
#line 3188 "ompparser.yy"
                       { }
#line 11448 "ompparser.cc"
    break;

  case 2375: /* bind_parameter: PARALLEL  */
#line 3189 "ompparser.yy"
                          { }
#line 11454 "ompparser.cc"
    break;

  case 2376: /* bind_parameter: THREAD  */
#line 3190 "ompparser.yy"
                        { }
#line 11460 "ompparser.cc"
    break;

  case 2377: /* $@208: %empty  */
#line 3193 "ompparser.yy"
                           {if (enDistributeExtendido > 1) {guardarLineasDist += " allocate("; meterEnClause = 1;}}
#line 11466 "ompparser.cc"
    break;

  case 2378: /* allocate_clause: ALLOCATE $@208 '(' allocate_parameter ')'  */
#line 3193 "ompparser.yy"
                                                                                                                                               {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11472 "ompparser.cc"
    break;

  case 2379: /* allocate_parameter: EXPR_STRING  */
#line 3196 "ompparser.yy"
                                  {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11478 "ompparser.cc"
    break;

  case 2380: /* $@209: %empty  */
#line 3197 "ompparser.yy"
                                     {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11484 "ompparser.cc"
    break;

  case 2382: /* $@210: %empty  */
#line 3198 "ompparser.yy"
                                             {if (meterEnClause) {guardarLineasDist += ":";}}
#line 11490 "ompparser.cc"
    break;

  case 2384: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3200 "ompparser.yy"
                                        { }
#line 11496 "ompparser.cc"
    break;

  case 2385: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3201 "ompparser.yy"
                                          { }
#line 11502 "ompparser.cc"
    break;

  case 2386: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3202 "ompparser.yy"
                                      { }
#line 11508 "ompparser.cc"
    break;

  case 2387: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3203 "ompparser.yy"
                                        { }
#line 11514 "ompparser.cc"
    break;

  case 2388: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3204 "ompparser.yy"
                                        { }
#line 11520 "ompparser.cc"
    break;

  case 2389: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3205 "ompparser.yy"
                                       { }
#line 11526 "ompparser.cc"
    break;

  case 2390: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3206 "ompparser.yy"
                                      { }
#line 11532 "ompparser.cc"
    break;

  case 2391: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3207 "ompparser.yy"
                                       { }
#line 11538 "ompparser.cc"
    break;

  case 2392: /* allocator_parameter: EXPR_STRING  */
#line 3208 "ompparser.yy"
                                  { }
#line 11544 "ompparser.cc"
    break;

  case 2393: /* $@211: %empty  */
#line 3211 "ompparser.yy"
                         {if (enDistributeExtendido) {guardarLineasDist += " private("; meterEnClause = 1;}}
#line 11550 "ompparser.cc"
    break;

  case 2394: /* private_clause: PRIVATE $@211 '(' var_list ')'  */
#line 3211 "ompparser.yy"
                                                                                                                              {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11556 "ompparser.cc"
    break;

  case 2395: /* alloc_clause: ALLOC '(' var_list_cluster ')'  */
#line 3214 "ompparser.yy"
                                              { MPIAlloc(); }
#line 11562 "ompparser.cc"
    break;

  case 2396: /* $@212: %empty  */
#line 3216 "ompparser.yy"
                     { }
#line 11568 "ompparser.cc"
    break;

  case 2397: /* broad_clause: BROAD $@212 '(' var_list_cluster ')'  */
#line 3216 "ompparser.yy"
                                                  { MPIBroad(); }
#line 11574 "ompparser.cc"
    break;

  case 2398: /* $@213: %empty  */
#line 3218 "ompparser.yy"
                         { }
#line 11580 "ompparser.cc"
    break;

  case 2399: /* scatter_clause: SCATTER $@213 '(' var_chunk_list_cluster ')'  */
#line 3218 "ompparser.yy"
                                                             {}
#line 11586 "ompparser.cc"
    break;

  case 2400: /* $@214: %empty  */
#line 3220 "ompparser.yy"
                   { }
#line 11592 "ompparser.cc"
    break;

  case 2401: /* halo_clause: HALO $@214 '(' var_chunk ')'  */
#line 3221 "ompparser.yy"
        { 
		if(update==1){
			MPIUpdateHalo(); 
			update = 0;
		}else{
			MPIScatterHalo(); 
		}
	}
#line 11605 "ompparser.cc"
    break;

  case 2402: /* $@215: %empty  */
#line 3230 "ompparser.yy"
                       { }
#line 11611 "ompparser.cc"
    break;

  case 2404: /* $@216: %empty  */
#line 3232 "ompparser.yy"
                             { }
#line 11617 "ompparser.cc"
    break;

  case 2406: /* $@217: %empty  */
#line 3234 "ompparser.yy"
                                   {if (enDistributeExtendido > 1) {guardarLineasDist += " firstprivate("; meterEnClause = 1;}}
#line 11623 "ompparser.cc"
    break;

  case 2407: /* firstprivate_clause: FIRSTPRIVATE $@217 '(' var_list ')'  */
#line 3234 "ompparser.yy"
                                                                                                                                                 {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11629 "ompparser.cc"
    break;

  case 2408: /* $@218: %empty  */
#line 3237 "ompparser.yy"
                                 { }
#line 11635 "ompparser.cc"
    break;

  case 2409: /* copyprivate_clause: COPYPRIVATE $@218 '(' var_list ')'  */
#line 3237 "ompparser.yy"
                                                      { }
#line 11641 "ompparser.cc"
    break;

  case 2410: /* $@219: %empty  */
#line 3239 "ompparser.yy"
                                         { }
#line 11647 "ompparser.cc"
    break;

  case 2411: /* fortran_copyprivate_clause: COPYPRIVATE $@219 '(' var_list ')'  */
#line 3239 "ompparser.yy"
                                                              { }
#line 11653 "ompparser.cc"
    break;

  case 2412: /* $@220: %empty  */
#line 3241 "ompparser.yy"
                                 {if (enDistributeExtendido) {guardarLineasDist += " lastprivate("; meterEnClause = 1;}}
#line 11659 "ompparser.cc"
    break;

  case 2413: /* lastprivate_clause: LASTPRIVATE $@220 '(' lastprivate_parameter ')'  */
#line 3241 "ompparser.yy"
                                                                                                                                                       {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11665 "ompparser.cc"
    break;

  case 2414: /* lastprivate_parameter: EXPR_STRING  */
#line 3244 "ompparser.yy"
                                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11671 "ompparser.cc"
    break;

  case 2415: /* $@221: %empty  */
#line 3245 "ompparser.yy"
                                    {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype); guardarLineasDist += ",";}}
#line 11677 "ompparser.cc"
    break;

  case 2417: /* $@222: %empty  */
#line 3246 "ompparser.yy"
                                                 {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype);guardarLineasDist += ":";}}
#line 11683 "ompparser.cc"
    break;

  case 2419: /* $@223: %empty  */
#line 3249 "ompparser.yy"
                                            { }
#line 11689 "ompparser.cc"
    break;

  case 2420: /* lastprivate_distribute_clause: LASTPRIVATE $@223 '(' var_list ')'  */
#line 3249 "ompparser.yy"
                                                                 { }
#line 11695 "ompparser.cc"
    break;

  case 2421: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3251 "ompparser.yy"
                                            {(yyval.stype) = (yyvsp[0].stype);}
#line 11701 "ompparser.cc"
    break;

  case 2422: /* linear_clause: LINEAR '(' linear_parameter ')'  */
#line 3254 "ompparser.yy"
                                                {if (enDistributeExtendido) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11707 "ompparser.cc"
    break;

  case 2423: /* $@224: %empty  */
#line 3255 "ompparser.yy"
                                                            {}
#line 11713 "ompparser.cc"
    break;

  case 2424: /* linear_clause: LINEAR '(' linear_parameter ':' EXPR_STRING $@224 ')'  */
#line 3255 "ompparser.yy"
                                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ":"; guardarLineasDist += (yyvsp[-2].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11719 "ompparser.cc"
    break;

  case 2425: /* linear_parameter: EXPR_STRING  */
#line 3258 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11725 "ompparser.cc"
    break;

  case 2426: /* $@225: %empty  */
#line 3259 "ompparser.yy"
                                   {if (meterEnClause) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11731 "ompparser.cc"
    break;

  case 2428: /* $@226: %empty  */
#line 3260 "ompparser.yy"
                                   {if (meterEnClause) {guardarLineasDist += "(";}}
#line 11737 "ompparser.cc"
    break;

  case 2429: /* linear_parameter: linear_modifier $@226 '(' var_list ')'  */
#line 3260 "ompparser.yy"
                                                                                                     {if (meterEnClause) {guardarLineasDist += ")";}}
#line 11743 "ompparser.cc"
    break;

  case 2430: /* linear_modifier: MODOFIER_VAL  */
#line 3262 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11749 "ompparser.cc"
    break;

  case 2431: /* linear_modifier: MODOFIER_REF  */
#line 3263 "ompparser.yy"
                               {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11755 "ompparser.cc"
    break;

  case 2432: /* linear_modifier: MODOFIER_UVAL  */
#line 3264 "ompparser.yy"
                                {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 11761 "ompparser.cc"
    break;

  case 2433: /* aligned_clause: ALIGNED '(' aligned_parameter ')'  */
#line 3267 "ompparser.yy"
                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11767 "ompparser.cc"
    break;

  case 2434: /* aligned_clause: ALIGNED '(' aligned_parameter ':' EXPR_STRING ')'  */
#line 3268 "ompparser.yy"
                                                                   {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ":"; guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11773 "ompparser.cc"
    break;

  case 2435: /* aligned_parameter: EXPR_STRING  */
#line 3272 "ompparser.yy"
                                {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11779 "ompparser.cc"
    break;

  case 2436: /* $@227: %empty  */
#line 3273 "ompparser.yy"
                                    {if(meterEnClause){guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ",";}}
#line 11785 "ompparser.cc"
    break;

  case 2440: /* expr: EXPR_STRING  */
#line 3280 "ompparser.yy"
                  { }
#line 11791 "ompparser.cc"
    break;

  case 2441: /* $@228: %empty  */
#line 3282 "ompparser.yy"
                        {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " safelen("; meterEnClause = 1;}}
#line 11797 "ompparser.cc"
    break;

  case 2442: /* safelen_clause: SAFELEN $@228 '(' var_list ')'  */
#line 3282 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11803 "ompparser.cc"
    break;

  case 2443: /* $@229: %empty  */
#line 3285 "ompparser.yy"
                        {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += " simdlen("; meterEnClause = 1;}}
#line 11809 "ompparser.cc"
    break;

  case 2444: /* simdlen_clause: SIMDLEN $@229 '(' var_list ')'  */
#line 3285 "ompparser.yy"
                                                                                                                                                                                              {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5) {guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11815 "ompparser.cc"
    break;

  case 2445: /* $@230: %empty  */
#line 3288 "ompparser.yy"
                                {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += " nontemporal("; meterEnClause = 1;}}
#line 11821 "ompparser.cc"
    break;

  case 2446: /* nontemporal_clause: NONTEMPORAL $@230 '(' var_list ')'  */
#line 3288 "ompparser.yy"
                                                                                                                                                                                                         {if (enDistributeExtendido == 1 || enDistributeExtendido == 4 || enDistributeExtendido == 5){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11827 "ompparser.cc"
    break;

  case 2447: /* $@231: %empty  */
#line 3291 "ompparser.yy"
                          {if (enDistributeExtendido) {guardarLineasDist += " collapse("; meterEnClause = 1;}}
#line 11833 "ompparser.cc"
    break;

  case 2448: /* collapse_clause: COLLAPSE $@231 '(' expression ')'  */
#line 3291 "ompparser.yy"
                                                                                                                                  {if (enDistributeExtendido) {guardarLineasDist += (yyvsp[-1].stype); guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11839 "ompparser.cc"
    break;

  case 2449: /* $@232: %empty  */
#line 3294 "ompparser.yy"
                            {if (enDistributeExtendido > 1) {guardarLineasDist += "(";}}
#line 11845 "ompparser.cc"
    break;

  case 2450: /* ordered_clause: ORDERED '(' $@232 expression ')'  */
#line 3294 "ompparser.yy"
                                                                                                        {if (enDistributeExtendido > 1) {guardarLineasDist += ")"; guardarLineasDist += (yyvsp[-1].stype); meterEnClause = 0;}}
#line 11851 "ompparser.cc"
    break;

  case 2451: /* ordered_clause: ORDERED  */
#line 3295 "ompparser.yy"
                        {if (enDistributeExtendido > 1) {meterEnClause = 0;}}
#line 11857 "ompparser.cc"
    break;

  case 2452: /* fortran_nowait_clause: NOWAIT  */
#line 3297 "ompparser.yy"
                              { }
#line 11863 "ompparser.cc"
    break;

  case 2453: /* nowait_clause: NOWAIT  */
#line 3299 "ompparser.yy"
                      {if (enDistributeExtendido == 2 || enDistributeExtendido == 4){guardarLineasDist += " nowait";}}
#line 11869 "ompparser.cc"
    break;

  case 2454: /* $@233: %empty  */
#line 3301 "ompparser.yy"
                    {if(enDistributeExtendido){guardarLineasDist += " order("; meterEnClause = 1;}}
#line 11875 "ompparser.cc"
    break;

  case 2455: /* order_clause: ORDER $@233 '(' order_parameter ')'  */
#line 3301 "ompparser.yy"
                                                                                                                            {if(enDistributeExtendido){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 11881 "ompparser.cc"
    break;

  case 2456: /* order_parameter: CONCURRENT  */
#line 3304 "ompparser.yy"
                             {if(meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 11887 "ompparser.cc"
    break;

  case 2457: /* $@234: %empty  */
#line 3307 "ompparser.yy"
                        { }
#line 11893 "ompparser.cc"
    break;

  case 2459: /* inbranch_clause: INBRANCH  */
#line 3310 "ompparser.yy"
                          { }
#line 11899 "ompparser.cc"
    break;

  case 2460: /* notinbranch_clause: NOTINBRANCH  */
#line 3313 "ompparser.yy"
                                { }
#line 11905 "ompparser.cc"
    break;

  case 2461: /* $@235: %empty  */
#line 3315 "ompparser.yy"
                            { }
#line 11911 "ompparser.cc"
    break;

  case 2463: /* $@236: %empty  */
#line 3317 "ompparser.yy"
                            { }
#line 11917 "ompparser.cc"
    break;

  case 2466: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3320 "ompparser.yy"
                                         { }
#line 11923 "ompparser.cc"
    break;

  case 2467: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3321 "ompparser.yy"
                                           { }
#line 11929 "ompparser.cc"
    break;

  case 2468: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3322 "ompparser.yy"
                                       { }
#line 11935 "ompparser.cc"
    break;

  case 2469: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3323 "ompparser.yy"
                                         { }
#line 11941 "ompparser.cc"
    break;

  case 2470: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3324 "ompparser.yy"
                                         { }
#line 11947 "ompparser.cc"
    break;

  case 2471: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3325 "ompparser.yy"
                                        { }
#line 11953 "ompparser.cc"
    break;

  case 2472: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3326 "ompparser.yy"
                                       { }
#line 11959 "ompparser.cc"
    break;

  case 2473: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3327 "ompparser.yy"
                                        { }
#line 11965 "ompparser.cc"
    break;

  case 2474: /* allocator1_parameter: EXPR_STRING  */
#line 3328 "ompparser.yy"
                                   { }
#line 11971 "ompparser.cc"
    break;

  case 2475: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3331 "ompparser.yy"
                                                                     {}
#line 11977 "ompparser.cc"
    break;

  case 2476: /* dist_schedule_parameter: STATIC  */
#line 3333 "ompparser.yy"
                                 { }
#line 11983 "ompparser.cc"
    break;

  case 2477: /* $@237: %empty  */
#line 3334 "ompparser.yy"
                                 { }
#line 11989 "ompparser.cc"
    break;

  case 2478: /* dist_schedule_parameter: STATIC $@237 ',' EXPR_STRING  */
#line 3334 "ompparser.yy"
                                                     { }
#line 11995 "ompparser.cc"
    break;

  case 2479: /* $@238: %empty  */
#line 3336 "ompparser.yy"
                           {if(enDistributeExtendido > 1){guardarLineasDist += " schedule("; meterEnClause = 1;}}
#line 12001 "ompparser.cc"
    break;

  case 2480: /* schedule_clause: SCHEDULE $@238 '(' schedule_parameter ')'  */
#line 3336 "ompparser.yy"
                                                                                                                                             {if(enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 12007 "ompparser.cc"
    break;

  case 2482: /* $@239: %empty  */
#line 3340 "ompparser.yy"
                                       {if (meterEnClause){guardarLineasDist += ":";}}
#line 12013 "ompparser.cc"
    break;

  case 2485: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3345 "ompparser.yy"
                                                    {if (meterEnClause){guardarLineasDist += ","; guardarLineasDist += (yyvsp[0].stype);}}
#line 12019 "ompparser.cc"
    break;

  case 2486: /* $@240: %empty  */
#line 3348 "ompparser.yy"
                                           {if (meterEnClause){guardarLineasDist += ",";}}
#line 12025 "ompparser.cc"
    break;

  case 2489: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3352 "ompparser.yy"
                                        {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12031 "ompparser.cc"
    break;

  case 2490: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3353 "ompparser.yy"
                                           {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12037 "ompparser.cc"
    break;

  case 2491: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3354 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12043 "ompparser.cc"
    break;

  case 2492: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3356 "ompparser.yy"
                                            {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12049 "ompparser.cc"
    break;

  case 2493: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3357 "ompparser.yy"
                                               {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12055 "ompparser.cc"
    break;

  case 2494: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3358 "ompparser.yy"
                                       {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12061 "ompparser.cc"
    break;

  case 2495: /* schedule_enum_kind: STATIC  */
#line 3361 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += "static";}}
#line 12067 "ompparser.cc"
    break;

  case 2496: /* schedule_enum_kind: DYNAMIC  */
#line 3362 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += "dynamic";}}
#line 12073 "ompparser.cc"
    break;

  case 2497: /* schedule_enum_kind: GUIDED  */
#line 3363 "ompparser.yy"
                            {if (meterEnClause){guardarLineasDist += "guided";}}
#line 12079 "ompparser.cc"
    break;

  case 2498: /* schedule_enum_kind: AUTO  */
#line 3364 "ompparser.yy"
                          {if (meterEnClause){guardarLineasDist += "auto";}}
#line 12085 "ompparser.cc"
    break;

  case 2499: /* schedule_enum_kind: RUNTIME  */
#line 3365 "ompparser.yy"
                             {if (meterEnClause){guardarLineasDist += "runtime";}}
#line 12091 "ompparser.cc"
    break;

  case 2500: /* $@241: %empty  */
#line 3367 "ompparser.yy"
                       {if (enDistributeExtendido > 1){guardarLineasDist += " shared("; meterEnClause = 1;}}
#line 12097 "ompparser.cc"
    break;

  case 2501: /* shared_clause: SHARED $@241 '(' var_list ')'  */
#line 3367 "ompparser.yy"
                                                                                                                              {if (enDistributeExtendido > 1){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 12103 "ompparser.cc"
    break;

  case 2503: /* $@242: %empty  */
#line 3373 "ompparser.yy"
                                     { aumentarReduction(); if(enDistributeExtendido){guardarLineasDist += " reduction("; meterEnClause = 1;} }
#line 12109 "ompparser.cc"
    break;

  case 2504: /* $@243: %empty  */
#line 3373 "ompparser.yy"
                                                                                                                                                                                {if(enDistributeExtendido){guardarLineasDist += ":";}}
#line 12115 "ompparser.cc"
    break;

  case 2505: /* reduction_clause_cluster: REDUCTION $@242 '(' reduction_parameter_cluster $@243 ':' var_list_reduction ')'  */
#line 3373 "ompparser.yy"
                                                                                                                                                                                                                                                                  {if(enDistributeExtendido){guardarLineasDist += ")"; meterEnClause = 0;}}
#line 12121 "ompparser.cc"
    break;

  case 2506: /* $@244: %empty  */
#line 3376 "ompparser.yy"
                                           { aumentarAllReduction(); }
#line 12127 "ompparser.cc"
    break;

  case 2511: /* $@245: %empty  */
#line 3383 "ompparser.yy"
                                                 {if (meterEnClause){guardarLineasDist += ",";}}
#line 12133 "ompparser.cc"
    break;

  case 2513: /* allreduction_identifier_cluster: reduction_enum_identifier  */
#line 3386 "ompparser.yy"
                                                            { if(enAllReductionCluster || enAllReductionDistribute){addAllReduce(false, (yyvsp[0].stype));}}
#line 12139 "ompparser.cc"
    break;

  case 2514: /* allreduction_identifier_cluster: EXPR_STRING  */
#line 3387 "ompparser.yy"
                                              { }
#line 12145 "ompparser.cc"
    break;

  case 2515: /* reduction_identifier_cluster: reduction_enum_identifier  */
#line 3390 "ompparser.yy"
                                                         {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);} if(enReductionCluster || enReductionDistribute){addReduce(false, (yyvsp[0].stype));}}
#line 12151 "ompparser.cc"
    break;

  case 2516: /* reduction_identifier_cluster: EXPR_STRING  */
#line 3391 "ompparser.yy"
                                            {if (meterEnClause) {guardarLineasDist += (yyvsp[0].stype);}}
#line 12157 "ompparser.cc"
    break;

  case 2517: /* reduction_parameter: reduction_identifier  */
#line 3394 "ompparser.yy"
                                           {}
#line 12163 "ompparser.cc"
    break;

  case 2519: /* reduction_identifier: reduction_enum_identifier  */
#line 3398 "ompparser.yy"
                                                 {}
#line 12169 "ompparser.cc"
    break;

  case 2520: /* reduction_identifier: EXPR_STRING  */
#line 3399 "ompparser.yy"
                                   { }
#line 12175 "ompparser.cc"
    break;

  case 2521: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3402 "ompparser.yy"
                                     {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12181 "ompparser.cc"
    break;

  case 2522: /* reduction_modifier: MODIFIER_TASK  */
#line 3403 "ompparser.yy"
                                   {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12187 "ompparser.cc"
    break;

  case 2523: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3404 "ompparser.yy"
                                      {if (meterEnClause){guardarLineasDist += (yyvsp[0].stype);}}
#line 12193 "ompparser.cc"
    break;

  case 2524: /* reduction_enum_identifier: '+'  */
#line 3407 "ompparser.yy"
                               { (yyval.stype) = "+"; }
#line 12199 "ompparser.cc"
    break;

  case 2525: /* reduction_enum_identifier: '-'  */
#line 3408 "ompparser.yy"
                               { (yyval.stype) = "-"; }
#line 12205 "ompparser.cc"
    break;

  case 2526: /* reduction_enum_identifier: '*'  */
#line 3409 "ompparser.yy"
                               { (yyval.stype) = "*"; }
#line 12211 "ompparser.cc"
    break;

  case 2527: /* reduction_enum_identifier: '&'  */
#line 3410 "ompparser.yy"
                               { (yyval.stype) = "&"; }
#line 12217 "ompparser.cc"
    break;

  case 2528: /* reduction_enum_identifier: '|'  */
#line 3411 "ompparser.yy"
                               { (yyval.stype) = "|"; }
#line 12223 "ompparser.cc"
    break;

  case 2529: /* reduction_enum_identifier: '^'  */
#line 3412 "ompparser.yy"
                               { (yyval.stype) = "^"; }
#line 12229 "ompparser.cc"
    break;

  case 2530: /* reduction_enum_identifier: LOGAND  */
#line 3413 "ompparser.yy"
                                  { (yyval.stype) = "LOGAND"; }
#line 12235 "ompparser.cc"
    break;

  case 2531: /* reduction_enum_identifier: LOGOR  */
#line 3414 "ompparser.yy"
                                 { (yyval.stype) = "LOGOR"; }
#line 12241 "ompparser.cc"
    break;

  case 2532: /* reduction_enum_identifier: MAX  */
#line 3415 "ompparser.yy"
                               { (yyval.stype) = "MAX"; }
#line 12247 "ompparser.cc"
    break;

  case 2533: /* reduction_enum_identifier: MIN  */
#line 3416 "ompparser.yy"
                               { (yyval.stype) = "MIN"; }
#line 12253 "ompparser.cc"
    break;

  case 2534: /* $@246: %empty  */
#line 3419 "ompparser.yy"
                                          { }
#line 12259 "ompparser.cc"
    break;

  case 2535: /* reduction_default_only_clause: REDUCTION $@246 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3419 "ompparser.yy"
                                                                                                    {
                              }
#line 12266 "ompparser.cc"
    break;

  case 2536: /* reduction_default_only_parameter: reduction_identifier  */
#line 3423 "ompparser.yy"
                                                        {}
#line 12272 "ompparser.cc"
    break;

  case 2538: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3427 "ompparser.yy"
                                                   { }
#line 12278 "ompparser.cc"
    break;


#line 12282 "ompparser.cc"

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

#line 3430 "ompparser.yy"


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
