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
int enGatherCluster = 0;
int enGatherDistribute = 0;
int enAllGatherCluster = 0;
int enAllGatherDistribute = 0;
int n_llaves = -100;
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
extern void MPI_Reduce(bool vars, const char *arg);
extern void MPI_AllReduce(bool vars, const char *arg);


#line 143 "ompparser.cc"

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
  YYSYMBOL_var_chunk_cluster = 265,        /* var_chunk_cluster  */
  YYSYMBOL_var_chunk_list = 266,           /* var_chunk_list  */
  YYSYMBOL_var_chunk_list_cluster = 267,   /* var_chunk_list_cluster  */
  YYSYMBOL_openmp_directive = 268,         /* openmp_directive  */
  YYSYMBOL_269_1 = 269,                    /* $@1  */
  YYSYMBOL_directiveAuxCluster = 270,      /* directiveAuxCluster  */
  YYSYMBOL_variant_directive = 271,        /* variant_directive  */
  YYSYMBOL_fortran_paired_directive = 272, /* fortran_paired_directive  */
  YYSYMBOL_end_directive = 273,            /* end_directive  */
  YYSYMBOL_274_2 = 274,                    /* $@2  */
  YYSYMBOL_end_clause_seq = 275,           /* end_clause_seq  */
  YYSYMBOL_metadirective_directive = 276,  /* metadirective_directive  */
  YYSYMBOL_277_3 = 277,                    /* $@3  */
  YYSYMBOL_metadirective_clause_optseq = 278, /* metadirective_clause_optseq  */
  YYSYMBOL_metadirective_clause_seq = 279, /* metadirective_clause_seq  */
  YYSYMBOL_metadirective_clause = 280,     /* metadirective_clause  */
  YYSYMBOL_when_clause = 281,              /* when_clause  */
  YYSYMBOL_282_4 = 282,                    /* $@4  */
  YYSYMBOL_283_5 = 283,                    /* $@5  */
  YYSYMBOL_284_6 = 284,                    /* $@6  */
  YYSYMBOL_when_variant_directive = 285,   /* when_variant_directive  */
  YYSYMBOL_context_selector_specification = 286, /* context_selector_specification  */
  YYSYMBOL_trait_set_selector = 287,       /* trait_set_selector  */
  YYSYMBOL_288_7 = 288,                    /* $@7  */
  YYSYMBOL_289_8 = 289,                    /* $@8  */
  YYSYMBOL_trait_set_selector_name = 290,  /* trait_set_selector_name  */
  YYSYMBOL_trait_selector_list = 291,      /* trait_selector_list  */
  YYSYMBOL_trait_selector = 292,           /* trait_selector  */
  YYSYMBOL_condition_selector = 293,       /* condition_selector  */
  YYSYMBOL_294_9 = 294,                    /* $@9  */
  YYSYMBOL_device_selector = 295,          /* device_selector  */
  YYSYMBOL_context_kind = 296,             /* context_kind  */
  YYSYMBOL_context_kind_name = 297,        /* context_kind_name  */
  YYSYMBOL_context_isa = 298,              /* context_isa  */
  YYSYMBOL_context_arch = 299,             /* context_arch  */
  YYSYMBOL_implementation_selector = 300,  /* implementation_selector  */
  YYSYMBOL_context_vendor_name = 301,      /* context_vendor_name  */
  YYSYMBOL_construct_selector = 302,       /* construct_selector  */
  YYSYMBOL_parallel_selector = 303,        /* parallel_selector  */
  YYSYMBOL_304_10 = 304,                   /* $@10  */
  YYSYMBOL_parallel_selector_parameter = 305, /* parallel_selector_parameter  */
  YYSYMBOL_trait_score = 306,              /* trait_score  */
  YYSYMBOL_307_11 = 307,                   /* $@11  */
  YYSYMBOL_declare_variant_directive = 308, /* declare_variant_directive  */
  YYSYMBOL_309_12 = 309,                   /* $@12  */
  YYSYMBOL_variant_func_id = 310,          /* variant_func_id  */
  YYSYMBOL_311_13 = 311,                   /* $@13  */
  YYSYMBOL_declare_variant_clause_optseq = 312, /* declare_variant_clause_optseq  */
  YYSYMBOL_declare_variant_clause_seq = 313, /* declare_variant_clause_seq  */
  YYSYMBOL_declare_variant_clause = 314,   /* declare_variant_clause  */
  YYSYMBOL_match_clause = 315,             /* match_clause  */
  YYSYMBOL_316_14 = 316,                   /* $@14  */
  YYSYMBOL_parallel_directive = 317,       /* parallel_directive  */
  YYSYMBOL_318_15 = 318,                   /* $@15  */
  YYSYMBOL_cluster_directive = 319,        /* cluster_directive  */
  YYSYMBOL_320_16 = 320,                   /* $@16  */
  YYSYMBOL_declare_cluster_directive = 321, /* declare_cluster_directive  */
  YYSYMBOL_end_declare_cluster_directive = 322, /* end_declare_cluster_directive  */
  YYSYMBOL_cluster_data_directive = 323,   /* cluster_data_directive  */
  YYSYMBOL_324_17 = 324,                   /* $@17  */
  YYSYMBOL_cluster_update_directive = 325, /* cluster_update_directive  */
  YYSYMBOL_326_18 = 326,                   /* $@18  */
  YYSYMBOL_cluster_teams_directive = 327,  /* cluster_teams_directive  */
  YYSYMBOL_328_19 = 328,                   /* $@19  */
  YYSYMBOL_cluster_distribute_directive = 329, /* cluster_distribute_directive  */
  YYSYMBOL_cluster_teams_distribute_directive = 330, /* cluster_teams_distribute_directive  */
  YYSYMBOL_cluster_teams_master_directive = 331, /* cluster_teams_master_directive  */
  YYSYMBOL_task_async_directive = 332,     /* task_async_directive  */
  YYSYMBOL_333_20 = 333,                   /* $@20  */
  YYSYMBOL_task_directive = 334,           /* task_directive  */
  YYSYMBOL_335_21 = 335,                   /* $@21  */
  YYSYMBOL_taskloop_directive = 336,       /* taskloop_directive  */
  YYSYMBOL_337_22 = 337,                   /* $@22  */
  YYSYMBOL_taskloop_simd_directive = 338,  /* taskloop_simd_directive  */
  YYSYMBOL_339_23 = 339,                   /* $@23  */
  YYSYMBOL_taskyield_directive = 340,      /* taskyield_directive  */
  YYSYMBOL_requires_directive = 341,       /* requires_directive  */
  YYSYMBOL_342_24 = 342,                   /* $@24  */
  YYSYMBOL_target_data_directive = 343,    /* target_data_directive  */
  YYSYMBOL_344_25 = 344,                   /* $@25  */
  YYSYMBOL_target_enter_data_directive = 345, /* target_enter_data_directive  */
  YYSYMBOL_346_26 = 346,                   /* $@26  */
  YYSYMBOL_target_exit_data_directive = 347, /* target_exit_data_directive  */
  YYSYMBOL_348_27 = 348,                   /* $@27  */
  YYSYMBOL_target_directive = 349,         /* target_directive  */
  YYSYMBOL_350_28 = 350,                   /* $@28  */
  YYSYMBOL_target_update_directive = 351,  /* target_update_directive  */
  YYSYMBOL_352_29 = 352,                   /* $@29  */
  YYSYMBOL_declare_target_directive = 353, /* declare_target_directive  */
  YYSYMBOL_354_30 = 354,                   /* $@30  */
  YYSYMBOL_flush_directive = 355,          /* flush_directive  */
  YYSYMBOL_356_31 = 356,                   /* $@31  */
  YYSYMBOL_end_declare_target_directive = 357, /* end_declare_target_directive  */
  YYSYMBOL_master_directive = 358,         /* master_directive  */
  YYSYMBOL_barrier_directive = 359,        /* barrier_directive  */
  YYSYMBOL_taskwait_directive = 360,       /* taskwait_directive  */
  YYSYMBOL_361_32 = 361,                   /* $@32  */
  YYSYMBOL_taskgroup_directive = 362,      /* taskgroup_directive  */
  YYSYMBOL_363_33 = 363,                   /* $@33  */
  YYSYMBOL_critical_directive = 364,       /* critical_directive  */
  YYSYMBOL_365_34 = 365,                   /* $@34  */
  YYSYMBOL_depobj_directive = 366,         /* depobj_directive  */
  YYSYMBOL_367_35 = 367,                   /* $@35  */
  YYSYMBOL_ordered_directive = 368,        /* ordered_directive  */
  YYSYMBOL_369_36 = 369,                   /* $@36  */
  YYSYMBOL_critical_clause_optseq = 370,   /* critical_clause_optseq  */
  YYSYMBOL_depobj_clause_optseq = 371,     /* depobj_clause_optseq  */
  YYSYMBOL_depobj = 372,                   /* depobj  */
  YYSYMBOL_depobj_clause = 373,            /* depobj_clause  */
  YYSYMBOL_destroy_clause = 374,           /* destroy_clause  */
  YYSYMBOL_depobj_update_clause = 375,     /* depobj_update_clause  */
  YYSYMBOL_update_dependence_type = 376,   /* update_dependence_type  */
  YYSYMBOL_critical_name = 377,            /* critical_name  */
  YYSYMBOL_task_clause_optseq = 378,       /* task_clause_optseq  */
  YYSYMBOL_taskloop_clause_optseq = 379,   /* taskloop_clause_optseq  */
  YYSYMBOL_taskloop_simd_clause_optseq = 380, /* taskloop_simd_clause_optseq  */
  YYSYMBOL_requires_clause_optseq = 381,   /* requires_clause_optseq  */
  YYSYMBOL_target_data_clause_optseq = 382, /* target_data_clause_optseq  */
  YYSYMBOL_target_enter_data_clause_optseq = 383, /* target_enter_data_clause_optseq  */
  YYSYMBOL_target_exit_data_clause_optseq = 384, /* target_exit_data_clause_optseq  */
  YYSYMBOL_target_clause_optseq = 385,     /* target_clause_optseq  */
  YYSYMBOL_target_update_clause_optseq = 386, /* target_update_clause_optseq  */
  YYSYMBOL_declare_target_clause_optseq = 387, /* declare_target_clause_optseq  */
  YYSYMBOL_extended_variable = 388,        /* extended_variable  */
  YYSYMBOL_declare_target_extended_list = 389, /* declare_target_extended_list  */
  YYSYMBOL_flush_clause_optseq = 390,      /* flush_clause_optseq  */
  YYSYMBOL_flush_list = 391,               /* flush_list  */
  YYSYMBOL_flush_variable = 392,           /* flush_variable  */
  YYSYMBOL_flush_clause_seq = 393,         /* flush_clause_seq  */
  YYSYMBOL_flush_memory_order_clause = 394, /* flush_memory_order_clause  */
  YYSYMBOL_atomic_directive = 395,         /* atomic_directive  */
  YYSYMBOL_396_37 = 396,                   /* $@37  */
  YYSYMBOL_atomic_clause_optseq = 397,     /* atomic_clause_optseq  */
  YYSYMBOL_atomic_clause_seq = 398,        /* atomic_clause_seq  */
  YYSYMBOL_memory_order_clause_seq = 399,  /* memory_order_clause_seq  */
  YYSYMBOL_memory_order_clause_seq_after = 400, /* memory_order_clause_seq_after  */
  YYSYMBOL_atomic_clause = 401,            /* atomic_clause  */
  YYSYMBOL_memory_order_clause = 402,      /* memory_order_clause  */
  YYSYMBOL_hint_clause = 403,              /* hint_clause  */
  YYSYMBOL_404_38 = 404,                   /* $@38  */
  YYSYMBOL_read_clause = 405,              /* read_clause  */
  YYSYMBOL_write_clause = 406,             /* write_clause  */
  YYSYMBOL_update_clause = 407,            /* update_clause  */
  YYSYMBOL_capture_clause = 408,           /* capture_clause  */
  YYSYMBOL_seq_cst_clause = 409,           /* seq_cst_clause  */
  YYSYMBOL_acq_rel_clause = 410,           /* acq_rel_clause  */
  YYSYMBOL_release_clause = 411,           /* release_clause  */
  YYSYMBOL_acquire_clause = 412,           /* acquire_clause  */
  YYSYMBOL_relaxed_clause = 413,           /* relaxed_clause  */
  YYSYMBOL_taskwait_clause_optseq = 414,   /* taskwait_clause_optseq  */
  YYSYMBOL_taskgroup_clause_optseq = 415,  /* taskgroup_clause_optseq  */
  YYSYMBOL_task_clause_seq = 416,          /* task_clause_seq  */
  YYSYMBOL_taskloop_clause_seq = 417,      /* taskloop_clause_seq  */
  YYSYMBOL_taskloop_simd_clause_seq = 418, /* taskloop_simd_clause_seq  */
  YYSYMBOL_requires_clause_seq = 419,      /* requires_clause_seq  */
  YYSYMBOL_target_data_clause_seq = 420,   /* target_data_clause_seq  */
  YYSYMBOL_target_enter_data_clause_seq = 421, /* target_enter_data_clause_seq  */
  YYSYMBOL_target_exit_data_clause_seq = 422, /* target_exit_data_clause_seq  */
  YYSYMBOL_target_clause_seq = 423,        /* target_clause_seq  */
  YYSYMBOL_target_update_clause_seq = 424, /* target_update_clause_seq  */
  YYSYMBOL_declare_target_seq = 425,       /* declare_target_seq  */
  YYSYMBOL_taskwait_clause_seq = 426,      /* taskwait_clause_seq  */
  YYSYMBOL_taskgroup_clause_seq = 427,     /* taskgroup_clause_seq  */
  YYSYMBOL_task_clause = 428,              /* task_clause  */
  YYSYMBOL_taskloop_clause = 429,          /* taskloop_clause  */
  YYSYMBOL_taskloop_simd_clause = 430,     /* taskloop_simd_clause  */
  YYSYMBOL_requires_clause = 431,          /* requires_clause  */
  YYSYMBOL_target_data_clause = 432,       /* target_data_clause  */
  YYSYMBOL_target_enter_data_clause = 433, /* target_enter_data_clause  */
  YYSYMBOL_target_exit_data_clause = 434,  /* target_exit_data_clause  */
  YYSYMBOL_target_clause = 435,            /* target_clause  */
  YYSYMBOL_target_update_clause = 436,     /* target_update_clause  */
  YYSYMBOL_motion_clause = 437,            /* motion_clause  */
  YYSYMBOL_target_update_other_clause = 438, /* target_update_other_clause  */
  YYSYMBOL_declare_target_clause = 439,    /* declare_target_clause  */
  YYSYMBOL_taskwait_clause = 440,          /* taskwait_clause  */
  YYSYMBOL_taskgroup_clause = 441,         /* taskgroup_clause  */
  YYSYMBOL_final_clause = 442,             /* final_clause  */
  YYSYMBOL_443_39 = 443,                   /* $@39  */
  YYSYMBOL_untied_clause = 444,            /* untied_clause  */
  YYSYMBOL_mergeable_clause = 445,         /* mergeable_clause  */
  YYSYMBOL_in_reduction_clause = 446,      /* in_reduction_clause  */
  YYSYMBOL_in_reduction_identifier = 447,  /* in_reduction_identifier  */
  YYSYMBOL_in_reduction_enum_identifier = 448, /* in_reduction_enum_identifier  */
  YYSYMBOL_depend_with_modifier_clause = 449, /* depend_with_modifier_clause  */
  YYSYMBOL_450_40 = 450,                   /* $@40  */
  YYSYMBOL_depend_parameter = 451,         /* depend_parameter  */
  YYSYMBOL_dependence_type = 452,          /* dependence_type  */
  YYSYMBOL_depend_modifier = 453,          /* depend_modifier  */
  YYSYMBOL_454_41 = 454,                   /* $@41  */
  YYSYMBOL_depend_iterators_definition = 455, /* depend_iterators_definition  */
  YYSYMBOL_depend_iterator_specifier = 456, /* depend_iterator_specifier  */
  YYSYMBOL_457_42 = 457,                   /* $@42  */
  YYSYMBOL_458_43 = 458,                   /* $@43  */
  YYSYMBOL_depend_range_specification = 459, /* depend_range_specification  */
  YYSYMBOL_460_44 = 460,                   /* $@44  */
  YYSYMBOL_461_45 = 461,                   /* $@45  */
  YYSYMBOL_depend_range_step = 462,        /* depend_range_step  */
  YYSYMBOL_depend_enum_type = 463,         /* depend_enum_type  */
  YYSYMBOL_depend_depobj_clause = 464,     /* depend_depobj_clause  */
  YYSYMBOL_465_46 = 465,                   /* $@46  */
  YYSYMBOL_dependence_depobj_parameter = 466, /* dependence_depobj_parameter  */
  YYSYMBOL_dependence_depobj_type = 467,   /* dependence_depobj_type  */
  YYSYMBOL_depend_ordered_clause = 468,    /* depend_ordered_clause  */
  YYSYMBOL_469_47 = 469,                   /* $@47  */
  YYSYMBOL_dependence_ordered_parameter = 470, /* dependence_ordered_parameter  */
  YYSYMBOL_dependence_ordered_type = 471,  /* dependence_ordered_type  */
  YYSYMBOL_472_48 = 472,                   /* $@48  */
  YYSYMBOL_priority_clause = 473,          /* priority_clause  */
  YYSYMBOL_474_49 = 474,                   /* $@49  */
  YYSYMBOL_affinity_clause = 475,          /* affinity_clause  */
  YYSYMBOL_affinity_parameter = 476,       /* affinity_parameter  */
  YYSYMBOL_477_50 = 477,                   /* $@50  */
  YYSYMBOL_affinity_modifier = 478,        /* affinity_modifier  */
  YYSYMBOL_479_51 = 479,                   /* $@51  */
  YYSYMBOL_iterators_definition = 480,     /* iterators_definition  */
  YYSYMBOL_iterator_specifier = 481,       /* iterator_specifier  */
  YYSYMBOL_482_52 = 482,                   /* $@52  */
  YYSYMBOL_483_53 = 483,                   /* $@53  */
  YYSYMBOL_range_specification = 484,      /* range_specification  */
  YYSYMBOL_485_54 = 485,                   /* $@54  */
  YYSYMBOL_486_55 = 486,                   /* $@55  */
  YYSYMBOL_range_step = 487,               /* range_step  */
  YYSYMBOL_detach_clause = 488,            /* detach_clause  */
  YYSYMBOL_489_56 = 489,                   /* $@56  */
  YYSYMBOL_grainsize_clause = 490,         /* grainsize_clause  */
  YYSYMBOL_491_57 = 491,                   /* $@57  */
  YYSYMBOL_num_tasks_clause = 492,         /* num_tasks_clause  */
  YYSYMBOL_493_58 = 493,                   /* $@58  */
  YYSYMBOL_nogroup_clause = 494,           /* nogroup_clause  */
  YYSYMBOL_reverse_offload_clause = 495,   /* reverse_offload_clause  */
  YYSYMBOL_unified_address_clause = 496,   /* unified_address_clause  */
  YYSYMBOL_unified_shared_memory_clause = 497, /* unified_shared_memory_clause  */
  YYSYMBOL_atomic_default_mem_order_clause = 498, /* atomic_default_mem_order_clause  */
  YYSYMBOL_atomic_default_mem_order_parameter = 499, /* atomic_default_mem_order_parameter  */
  YYSYMBOL_dynamic_allocators_clause = 500, /* dynamic_allocators_clause  */
  YYSYMBOL_ext_implementation_defined_requirement_clause = 501, /* ext_implementation_defined_requirement_clause  */
  YYSYMBOL_device_clause = 502,            /* device_clause  */
  YYSYMBOL_device_parameter = 503,         /* device_parameter  */
  YYSYMBOL_504_59 = 504,                   /* $@59  */
  YYSYMBOL_device_modifier_parameter = 505, /* device_modifier_parameter  */
  YYSYMBOL_device_without_modifier_clause = 506, /* device_without_modifier_clause  */
  YYSYMBOL_device_without_modifier_parameter = 507, /* device_without_modifier_parameter  */
  YYSYMBOL_508_60 = 508,                   /* $@60  */
  YYSYMBOL_use_device_ptr_clause = 509,    /* use_device_ptr_clause  */
  YYSYMBOL_510_61 = 510,                   /* $@61  */
  YYSYMBOL_use_device_addr_clause = 511,   /* use_device_addr_clause  */
  YYSYMBOL_512_62 = 512,                   /* $@62  */
  YYSYMBOL_is_device_ptr_clause = 513,     /* is_device_ptr_clause  */
  YYSYMBOL_514_63 = 514,                   /* $@63  */
  YYSYMBOL_has_device_addr_clause = 515,   /* has_device_addr_clause  */
  YYSYMBOL_516_64 = 516,                   /* $@64  */
  YYSYMBOL_defaultmap_clause = 517,        /* defaultmap_clause  */
  YYSYMBOL_518_65 = 518,                   /* $@65  */
  YYSYMBOL_defaultmap_parameter = 519,     /* defaultmap_parameter  */
  YYSYMBOL_defaultmap_behavior = 520,      /* defaultmap_behavior  */
  YYSYMBOL_defaultmap_category = 521,      /* defaultmap_category  */
  YYSYMBOL_uses_allocators_clause = 522,   /* uses_allocators_clause  */
  YYSYMBOL_523_66 = 523,                   /* $@66  */
  YYSYMBOL_uses_allocators_parameter = 524, /* uses_allocators_parameter  */
  YYSYMBOL_allocators_list = 525,          /* allocators_list  */
  YYSYMBOL_allocators_list_parameter_enum = 526, /* allocators_list_parameter_enum  */
  YYSYMBOL_allocators_list_parameter_user = 527, /* allocators_list_parameter_user  */
  YYSYMBOL_to_clause = 528,                /* to_clause  */
  YYSYMBOL_to_parameter = 529,             /* to_parameter  */
  YYSYMBOL_530_67 = 530,                   /* $@67  */
  YYSYMBOL_to_mapper = 531,                /* to_mapper  */
  YYSYMBOL_532_68 = 532,                   /* $@68  */
  YYSYMBOL_from_clause = 533,              /* from_clause  */
  YYSYMBOL_from_parameter = 534,           /* from_parameter  */
  YYSYMBOL_535_69 = 535,                   /* $@69  */
  YYSYMBOL_from_mapper = 536,              /* from_mapper  */
  YYSYMBOL_537_70 = 537,                   /* $@70  */
  YYSYMBOL_link_clause = 538,              /* link_clause  */
  YYSYMBOL_539_71 = 539,                   /* $@71  */
  YYSYMBOL_device_type_clause = 540,       /* device_type_clause  */
  YYSYMBOL_device_type_parameter = 541,    /* device_type_parameter  */
  YYSYMBOL_map_clause = 542,               /* map_clause  */
  YYSYMBOL_543_72 = 543,                   /* $@72  */
  YYSYMBOL_map_parameter = 544,            /* map_parameter  */
  YYSYMBOL_545_73 = 545,                   /* $@73  */
  YYSYMBOL_map_modifier_type = 546,        /* map_modifier_type  */
  YYSYMBOL_map_modifier_parameter1 = 547,  /* map_modifier_parameter1  */
  YYSYMBOL_map_modifier_parameter2 = 548,  /* map_modifier_parameter2  */
  YYSYMBOL_map_modifier1 = 549,            /* map_modifier1  */
  YYSYMBOL_map_modifier2 = 550,            /* map_modifier2  */
  YYSYMBOL_map_modifier3 = 551,            /* map_modifier3  */
  YYSYMBOL_map_type = 552,                 /* map_type  */
  YYSYMBOL_map_modifier_mapper = 553,      /* map_modifier_mapper  */
  YYSYMBOL_task_reduction_clause = 554,    /* task_reduction_clause  */
  YYSYMBOL_task_reduction_identifier = 555, /* task_reduction_identifier  */
  YYSYMBOL_task_reduction_enum_identifier = 556, /* task_reduction_enum_identifier  */
  YYSYMBOL_ordered_clause_optseq = 557,    /* ordered_clause_optseq  */
  YYSYMBOL_ordered_clause_threads_simd_seq = 558, /* ordered_clause_threads_simd_seq  */
  YYSYMBOL_ordered_clause_depend_seq = 559, /* ordered_clause_depend_seq  */
  YYSYMBOL_ordered_clause_depend = 560,    /* ordered_clause_depend  */
  YYSYMBOL_ordered_clause_threads_simd = 561, /* ordered_clause_threads_simd  */
  YYSYMBOL_threads_clause = 562,           /* threads_clause  */
  YYSYMBOL_simd_ordered_clause = 563,      /* simd_ordered_clause  */
  YYSYMBOL_teams_distribute_directive = 564, /* teams_distribute_directive  */
  YYSYMBOL_565_74 = 565,                   /* $@74  */
  YYSYMBOL_teams_distribute_clause_optseq = 566, /* teams_distribute_clause_optseq  */
  YYSYMBOL_teams_distribute_clause_seq = 567, /* teams_distribute_clause_seq  */
  YYSYMBOL_teams_distribute_clause = 568,  /* teams_distribute_clause  */
  YYSYMBOL_teams_distribute_simd_directive = 569, /* teams_distribute_simd_directive  */
  YYSYMBOL_570_75 = 570,                   /* $@75  */
  YYSYMBOL_teams_distribute_simd_clause_optseq = 571, /* teams_distribute_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_simd_clause_seq = 572, /* teams_distribute_simd_clause_seq  */
  YYSYMBOL_teams_distribute_simd_clause = 573, /* teams_distribute_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_for_directive = 574, /* teams_distribute_parallel_for_directive  */
  YYSYMBOL_575_76 = 575,                   /* $@76  */
  YYSYMBOL_teams_distribute_parallel_for_clause_optseq = 576, /* teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_clause_seq = 577, /* teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_clause = 578, /* teams_distribute_parallel_for_clause  */
  YYSYMBOL_teams_distribute_parallel_do_directive = 579, /* teams_distribute_parallel_do_directive  */
  YYSYMBOL_580_77 = 580,                   /* $@77  */
  YYSYMBOL_teams_distribute_parallel_do_clause_optseq = 581, /* teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_clause_seq = 582, /* teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_clause = 583, /* teams_distribute_parallel_do_clause  */
  YYSYMBOL_teams_distribute_parallel_for_simd_directive = 584, /* teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_585_78 = 585,                   /* $@78  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_optseq = 586, /* teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause_seq = 587, /* teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_for_simd_clause = 588, /* teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_teams_distribute_parallel_do_simd_directive = 589, /* teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_590_79 = 590,                   /* $@79  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_optseq = 591, /* teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause_seq = 592, /* teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_teams_distribute_parallel_do_simd_clause = 593, /* teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_teams_loop_directive = 594,     /* teams_loop_directive  */
  YYSYMBOL_595_80 = 595,                   /* $@80  */
  YYSYMBOL_teams_loop_clause_optseq = 596, /* teams_loop_clause_optseq  */
  YYSYMBOL_teams_loop_clause_seq = 597,    /* teams_loop_clause_seq  */
  YYSYMBOL_teams_loop_clause = 598,        /* teams_loop_clause  */
  YYSYMBOL_target_parallel_directive = 599, /* target_parallel_directive  */
  YYSYMBOL_600_81 = 600,                   /* $@81  */
  YYSYMBOL_target_parallel_clause_optseq = 601, /* target_parallel_clause_optseq  */
  YYSYMBOL_target_parallel_clause_seq = 602, /* target_parallel_clause_seq  */
  YYSYMBOL_target_parallel_clause = 603,   /* target_parallel_clause  */
  YYSYMBOL_target_parallel_for_directive = 604, /* target_parallel_for_directive  */
  YYSYMBOL_605_82 = 605,                   /* $@82  */
  YYSYMBOL_target_parallel_for_clause_optseq = 606, /* target_parallel_for_clause_optseq  */
  YYSYMBOL_target_parallel_for_clause_seq = 607, /* target_parallel_for_clause_seq  */
  YYSYMBOL_target_parallel_for_clause = 608, /* target_parallel_for_clause  */
  YYSYMBOL_target_parallel_do_directive = 609, /* target_parallel_do_directive  */
  YYSYMBOL_610_83 = 610,                   /* $@83  */
  YYSYMBOL_target_parallel_do_clause_optseq = 611, /* target_parallel_do_clause_optseq  */
  YYSYMBOL_target_parallel_do_clause_seq = 612, /* target_parallel_do_clause_seq  */
  YYSYMBOL_target_parallel_do_clause = 613, /* target_parallel_do_clause  */
  YYSYMBOL_target_parallel_for_simd_directive = 614, /* target_parallel_for_simd_directive  */
  YYSYMBOL_615_84 = 615,                   /* $@84  */
  YYSYMBOL_target_parallel_for_simd_clause_optseq = 616, /* target_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_parallel_for_simd_clause_seq = 617, /* target_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_parallel_for_simd_clause = 618, /* target_parallel_for_simd_clause  */
  YYSYMBOL_target_parallel_do_simd_directive = 619, /* target_parallel_do_simd_directive  */
  YYSYMBOL_620_85 = 620,                   /* $@85  */
  YYSYMBOL_target_parallel_do_simd_clause_optseq = 621, /* target_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_parallel_do_simd_clause_seq = 622, /* target_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_parallel_do_simd_clause = 623, /* target_parallel_do_simd_clause  */
  YYSYMBOL_target_parallel_loop_directive = 624, /* target_parallel_loop_directive  */
  YYSYMBOL_625_86 = 625,                   /* $@86  */
  YYSYMBOL_target_parallel_loop_clause_optseq = 626, /* target_parallel_loop_clause_optseq  */
  YYSYMBOL_target_parallel_loop_clause_seq = 627, /* target_parallel_loop_clause_seq  */
  YYSYMBOL_target_parallel_loop_clause = 628, /* target_parallel_loop_clause  */
  YYSYMBOL_target_simd_directive = 629,    /* target_simd_directive  */
  YYSYMBOL_630_87 = 630,                   /* $@87  */
  YYSYMBOL_target_simd_clause_optseq = 631, /* target_simd_clause_optseq  */
  YYSYMBOL_target_simd_clause_seq = 632,   /* target_simd_clause_seq  */
  YYSYMBOL_target_simd_clause = 633,       /* target_simd_clause  */
  YYSYMBOL_target_teams_directive = 634,   /* target_teams_directive  */
  YYSYMBOL_635_88 = 635,                   /* $@88  */
  YYSYMBOL_target_teams_clause_optseq = 636, /* target_teams_clause_optseq  */
  YYSYMBOL_target_teams_clause_seq = 637,  /* target_teams_clause_seq  */
  YYSYMBOL_target_teams_clause = 638,      /* target_teams_clause  */
  YYSYMBOL_target_teams_distribute_directive = 639, /* target_teams_distribute_directive  */
  YYSYMBOL_640_89 = 640,                   /* $@89  */
  YYSYMBOL_target_teams_distribute_clause_optseq = 641, /* target_teams_distribute_clause_optseq  */
  YYSYMBOL_target_teams_distribute_clause_seq = 642, /* target_teams_distribute_clause_seq  */
  YYSYMBOL_target_teams_distribute_clause = 643, /* target_teams_distribute_clause  */
  YYSYMBOL_target_teams_distribute_simd_directive = 644, /* target_teams_distribute_simd_directive  */
  YYSYMBOL_645_90 = 645,                   /* $@90  */
  YYSYMBOL_target_teams_distribute_simd_clause_optseq = 646, /* target_teams_distribute_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_simd_clause_seq = 647, /* target_teams_distribute_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_simd_clause = 648, /* target_teams_distribute_simd_clause  */
  YYSYMBOL_target_teams_loop_directive = 649, /* target_teams_loop_directive  */
  YYSYMBOL_650_91 = 650,                   /* $@91  */
  YYSYMBOL_target_teams_loop_clause_optseq = 651, /* target_teams_loop_clause_optseq  */
  YYSYMBOL_target_teams_loop_clause_seq = 652, /* target_teams_loop_clause_seq  */
  YYSYMBOL_target_teams_loop_clause = 653, /* target_teams_loop_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_directive = 654, /* target_teams_distribute_parallel_for_directive  */
  YYSYMBOL_655_92 = 655,                   /* $@92  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_optseq = 656, /* target_teams_distribute_parallel_for_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause_seq = 657, /* target_teams_distribute_parallel_for_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_clause = 658, /* target_teams_distribute_parallel_for_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_directive = 659, /* target_teams_distribute_parallel_do_directive  */
  YYSYMBOL_660_93 = 660,                   /* $@93  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_optseq = 661, /* target_teams_distribute_parallel_do_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause_seq = 662, /* target_teams_distribute_parallel_do_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_clause = 663, /* target_teams_distribute_parallel_do_clause  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_directive = 664, /* target_teams_distribute_parallel_for_simd_directive  */
  YYSYMBOL_665_94 = 665,                   /* $@94  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_optseq = 666, /* target_teams_distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause_seq = 667, /* target_teams_distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_for_simd_clause = 668, /* target_teams_distribute_parallel_for_simd_clause  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_directive = 669, /* target_teams_distribute_parallel_do_simd_directive  */
  YYSYMBOL_670_95 = 670,                   /* $@95  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_optseq = 671, /* target_teams_distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause_seq = 672, /* target_teams_distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_target_teams_distribute_parallel_do_simd_clause = 673, /* target_teams_distribute_parallel_do_simd_clause  */
  YYSYMBOL_for_directive = 674,            /* for_directive  */
  YYSYMBOL_675_96 = 675,                   /* $@96  */
  YYSYMBOL_do_directive = 676,             /* do_directive  */
  YYSYMBOL_677_97 = 677,                   /* $@97  */
  YYSYMBOL_do_paired_directive = 678,      /* do_paired_directive  */
  YYSYMBOL_679_98 = 679,                   /* $@98  */
  YYSYMBOL_simd_directive = 680,           /* simd_directive  */
  YYSYMBOL_681_99 = 681,                   /* $@99  */
  YYSYMBOL_for_simd_directive = 682,       /* for_simd_directive  */
  YYSYMBOL_683_100 = 683,                  /* $@100  */
  YYSYMBOL_do_simd_directive = 684,        /* do_simd_directive  */
  YYSYMBOL_685_101 = 685,                  /* $@101  */
  YYSYMBOL_do_simd_paired_directive = 686, /* do_simd_paired_directive  */
  YYSYMBOL_687_102 = 687,                  /* $@102  */
  YYSYMBOL_parallel_for_simd_directive = 688, /* parallel_for_simd_directive  */
  YYSYMBOL_parallel_do_simd_directive = 689, /* parallel_do_simd_directive  */
  YYSYMBOL_690_103 = 690,                  /* $@103  */
  YYSYMBOL_declare_simd_directive = 691,   /* declare_simd_directive  */
  YYSYMBOL_692_104 = 692,                  /* $@104  */
  YYSYMBOL_declare_simd_fortran_directive = 693, /* declare_simd_fortran_directive  */
  YYSYMBOL_694_105 = 694,                  /* $@105  */
  YYSYMBOL_proc_name = 695,                /* proc_name  */
  YYSYMBOL_distribute_directive = 696,     /* distribute_directive  */
  YYSYMBOL_697_106 = 697,                  /* $@106  */
  YYSYMBOL_distribute_simd_directive = 698, /* distribute_simd_directive  */
  YYSYMBOL_699_107 = 699,                  /* $@107  */
  YYSYMBOL_distribute_parallel_for_directive = 700, /* distribute_parallel_for_directive  */
  YYSYMBOL_701_108 = 701,                  /* $@108  */
  YYSYMBOL_distribute_parallel_do_directive = 702, /* distribute_parallel_do_directive  */
  YYSYMBOL_703_109 = 703,                  /* $@109  */
  YYSYMBOL_distribute_parallel_for_simd_directive = 704, /* distribute_parallel_for_simd_directive  */
  YYSYMBOL_705_110 = 705,                  /* $@110  */
  YYSYMBOL_distribute_parallel_do_simd_directive = 706, /* distribute_parallel_do_simd_directive  */
  YYSYMBOL_707_111 = 707,                  /* $@111  */
  YYSYMBOL_parallel_for_directive = 708,   /* parallel_for_directive  */
  YYSYMBOL_709_112 = 709,                  /* $@112  */
  YYSYMBOL_parallel_do_directive = 710,    /* parallel_do_directive  */
  YYSYMBOL_711_113 = 711,                  /* $@113  */
  YYSYMBOL_parallel_loop_directive = 712,  /* parallel_loop_directive  */
  YYSYMBOL_713_114 = 713,                  /* $@114  */
  YYSYMBOL_parallel_sections_directive = 714, /* parallel_sections_directive  */
  YYSYMBOL_715_115 = 715,                  /* $@115  */
  YYSYMBOL_parallel_workshare_directive = 716, /* parallel_workshare_directive  */
  YYSYMBOL_717_116 = 717,                  /* $@116  */
  YYSYMBOL_parallel_master_directive = 718, /* parallel_master_directive  */
  YYSYMBOL_719_117 = 719,                  /* $@117  */
  YYSYMBOL_master_taskloop_directive = 720, /* master_taskloop_directive  */
  YYSYMBOL_721_118 = 721,                  /* $@118  */
  YYSYMBOL_master_taskloop_simd_directive = 722, /* master_taskloop_simd_directive  */
  YYSYMBOL_723_119 = 723,                  /* $@119  */
  YYSYMBOL_parallel_master_taskloop_directive = 724, /* parallel_master_taskloop_directive  */
  YYSYMBOL_725_120 = 725,                  /* $@120  */
  YYSYMBOL_parallel_master_taskloop_simd_directive = 726, /* parallel_master_taskloop_simd_directive  */
  YYSYMBOL_727_121 = 727,                  /* $@121  */
  YYSYMBOL_loop_directive = 728,           /* loop_directive  */
  YYSYMBOL_729_122 = 729,                  /* $@122  */
  YYSYMBOL_scan_directive = 730,           /* scan_directive  */
  YYSYMBOL_731_123 = 731,                  /* $@123  */
  YYSYMBOL_sections_directive = 732,       /* sections_directive  */
  YYSYMBOL_733_124 = 733,                  /* $@124  */
  YYSYMBOL_sections_paired_directive = 734, /* sections_paired_directive  */
  YYSYMBOL_735_125 = 735,                  /* $@125  */
  YYSYMBOL_section_directive = 736,        /* section_directive  */
  YYSYMBOL_single_directive = 737,         /* single_directive  */
  YYSYMBOL_738_126 = 738,                  /* $@126  */
  YYSYMBOL_single_paired_directive = 739,  /* single_paired_directive  */
  YYSYMBOL_740_127 = 740,                  /* $@127  */
  YYSYMBOL_workshare_directive = 741,      /* workshare_directive  */
  YYSYMBOL_workshare_paired_directive = 742, /* workshare_paired_directive  */
  YYSYMBOL_743_128 = 743,                  /* $@128  */
  YYSYMBOL_cancel_directive = 744,         /* cancel_directive  */
  YYSYMBOL_745_129 = 745,                  /* $@129  */
  YYSYMBOL_cancellation_point_directive = 746, /* cancellation_point_directive  */
  YYSYMBOL_747_130 = 747,                  /* $@130  */
  YYSYMBOL_teams_directive = 748,          /* teams_directive  */
  YYSYMBOL_749_131 = 749,                  /* $@131  */
  YYSYMBOL_allocate_directive = 750,       /* allocate_directive  */
  YYSYMBOL_751_132 = 751,                  /* $@132  */
  YYSYMBOL_allocate_list = 752,            /* allocate_list  */
  YYSYMBOL_directive_variable = 753,       /* directive_variable  */
  YYSYMBOL_directive_varlist = 754,        /* directive_varlist  */
  YYSYMBOL_threadprivate_directive = 755,  /* threadprivate_directive  */
  YYSYMBOL_756_133 = 756,                  /* $@133  */
  YYSYMBOL_threadprivate_variable = 757,   /* threadprivate_variable  */
  YYSYMBOL_threadprivate_list = 758,       /* threadprivate_list  */
  YYSYMBOL_declare_reduction_directive = 759, /* declare_reduction_directive  */
  YYSYMBOL_760_134 = 760,                  /* $@134  */
  YYSYMBOL_reduction_list = 761,           /* reduction_list  */
  YYSYMBOL_reduction_identifiers = 762,    /* reduction_identifiers  */
  YYSYMBOL_typername_variable = 763,       /* typername_variable  */
  YYSYMBOL_typername_list = 764,           /* typername_list  */
  YYSYMBOL_combiner = 765,                 /* combiner  */
  YYSYMBOL_declare_mapper_directive = 766, /* declare_mapper_directive  */
  YYSYMBOL_767_135 = 767,                  /* $@135  */
  YYSYMBOL_mapper_list = 768,              /* mapper_list  */
  YYSYMBOL_mapper_identifier_optseq = 769, /* mapper_identifier_optseq  */
  YYSYMBOL_mapper_identifier = 770,        /* mapper_identifier  */
  YYSYMBOL_type_var = 771,                 /* type_var  */
  YYSYMBOL_parallel_clause_optseq = 772,   /* parallel_clause_optseq  */
  YYSYMBOL_cluster_clause_optseq = 773,    /* cluster_clause_optseq  */
  YYSYMBOL_cluster_data_clause_optseq = 774, /* cluster_data_clause_optseq  */
  YYSYMBOL_cluster_update_clause_optseq = 775, /* cluster_update_clause_optseq  */
  YYSYMBOL_cluster_teams_clause_optseq = 776, /* cluster_teams_clause_optseq  */
  YYSYMBOL_cluster_distribute_clause_optseq = 777, /* cluster_distribute_clause_optseq  */
  YYSYMBOL_cluster_teams_distribute_clause_optseq = 778, /* cluster_teams_distribute_clause_optseq  */
  YYSYMBOL_task_async_clause_optseq = 779, /* task_async_clause_optseq  */
  YYSYMBOL_teams_clause_optseq = 780,      /* teams_clause_optseq  */
  YYSYMBOL_for_clause_optseq = 781,        /* for_clause_optseq  */
  YYSYMBOL_do_clause_optseq = 782,         /* do_clause_optseq  */
  YYSYMBOL_do_paried_clause_optseq = 783,  /* do_paried_clause_optseq  */
  YYSYMBOL_simd_clause_optseq = 784,       /* simd_clause_optseq  */
  YYSYMBOL_for_simd_clause_optseq = 785,   /* for_simd_clause_optseq  */
  YYSYMBOL_do_simd_clause_optseq = 786,    /* do_simd_clause_optseq  */
  YYSYMBOL_do_simd_paried_clause_optseq = 787, /* do_simd_paried_clause_optseq  */
  YYSYMBOL_parallel_for_simd_clause_optseq = 788, /* parallel_for_simd_clause_optseq  */
  YYSYMBOL_declare_simd_clause_optseq = 789, /* declare_simd_clause_optseq  */
  YYSYMBOL_distribute_clause_optseq = 790, /* distribute_clause_optseq  */
  YYSYMBOL_distribute_simd_clause_optseq = 791, /* distribute_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_clause_optseq = 792, /* distribute_parallel_for_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_clause_optseq = 793, /* distribute_parallel_do_clause_optseq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_optseq = 794, /* distribute_parallel_for_simd_clause_optseq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_optseq = 795, /* distribute_parallel_do_simd_clause_optseq  */
  YYSYMBOL_parallel_for_clause_optseq = 796, /* parallel_for_clause_optseq  */
  YYSYMBOL_parallel_do_clause_optseq = 797, /* parallel_do_clause_optseq  */
  YYSYMBOL_parallel_loop_clause_optseq = 798, /* parallel_loop_clause_optseq  */
  YYSYMBOL_parallel_sections_clause_optseq = 799, /* parallel_sections_clause_optseq  */
  YYSYMBOL_parallel_workshare_clause_optseq = 800, /* parallel_workshare_clause_optseq  */
  YYSYMBOL_parallel_master_clause_optseq = 801, /* parallel_master_clause_optseq  */
  YYSYMBOL_master_taskloop_clause_optseq = 802, /* master_taskloop_clause_optseq  */
  YYSYMBOL_master_taskloop_simd_clause_optseq = 803, /* master_taskloop_simd_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_clause_optseq = 804, /* parallel_master_taskloop_clause_optseq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_optseq = 805, /* parallel_master_taskloop_simd_clause_optseq  */
  YYSYMBOL_loop_clause_optseq = 806,       /* loop_clause_optseq  */
  YYSYMBOL_scan_clause_optseq = 807,       /* scan_clause_optseq  */
  YYSYMBOL_sections_clause_optseq = 808,   /* sections_clause_optseq  */
  YYSYMBOL_sections_paired_clause_optseq = 809, /* sections_paired_clause_optseq  */
  YYSYMBOL_single_clause_optseq = 810,     /* single_clause_optseq  */
  YYSYMBOL_single_paired_clause_optseq = 811, /* single_paired_clause_optseq  */
  YYSYMBOL_workshare_paired_clause_optseq = 812, /* workshare_paired_clause_optseq  */
  YYSYMBOL_cancel_clause_optseq = 813,     /* cancel_clause_optseq  */
  YYSYMBOL_cancellation_point_clause_optseq = 814, /* cancellation_point_clause_optseq  */
  YYSYMBOL_allocate_clause_optseq = 815,   /* allocate_clause_optseq  */
  YYSYMBOL_allocate_clause_seq = 816,      /* allocate_clause_seq  */
  YYSYMBOL_declare_reduction_clause_optseq = 817, /* declare_reduction_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_optseq = 818, /* declare_mapper_clause_optseq  */
  YYSYMBOL_declare_mapper_clause_seq = 819, /* declare_mapper_clause_seq  */
  YYSYMBOL_parallel_clause_seq = 820,      /* parallel_clause_seq  */
  YYSYMBOL_cluster_clause_seq = 821,       /* cluster_clause_seq  */
  YYSYMBOL_cluster_data_clause_seq = 822,  /* cluster_data_clause_seq  */
  YYSYMBOL_cluster_update_clause_seq = 823, /* cluster_update_clause_seq  */
  YYSYMBOL_cluster_teams_clause_seq = 824, /* cluster_teams_clause_seq  */
  YYSYMBOL_cluster_distribute_clause_seq = 825, /* cluster_distribute_clause_seq  */
  YYSYMBOL_cluster_teams_distribute_clause_seq = 826, /* cluster_teams_distribute_clause_seq  */
  YYSYMBOL_task_async_clause_seq = 827,    /* task_async_clause_seq  */
  YYSYMBOL_teams_clause_seq = 828,         /* teams_clause_seq  */
  YYSYMBOL_for_clause_seq = 829,           /* for_clause_seq  */
  YYSYMBOL_do_clause_seq = 830,            /* do_clause_seq  */
  YYSYMBOL_simd_clause_seq = 831,          /* simd_clause_seq  */
  YYSYMBOL_for_simd_clause_seq = 832,      /* for_simd_clause_seq  */
  YYSYMBOL_do_simd_clause_seq = 833,       /* do_simd_clause_seq  */
  YYSYMBOL_parallel_for_simd_clause_seq = 834, /* parallel_for_simd_clause_seq  */
  YYSYMBOL_declare_simd_clause_seq = 835,  /* declare_simd_clause_seq  */
  YYSYMBOL_distribute_clause_seq = 836,    /* distribute_clause_seq  */
  YYSYMBOL_distribute_simd_clause_seq = 837, /* distribute_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_for_clause_seq = 838, /* distribute_parallel_for_clause_seq  */
  YYSYMBOL_distribute_parallel_do_clause_seq = 839, /* distribute_parallel_do_clause_seq  */
  YYSYMBOL_distribute_parallel_for_simd_clause_seq = 840, /* distribute_parallel_for_simd_clause_seq  */
  YYSYMBOL_distribute_parallel_do_simd_clause_seq = 841, /* distribute_parallel_do_simd_clause_seq  */
  YYSYMBOL_parallel_for_clause_seq = 842,  /* parallel_for_clause_seq  */
  YYSYMBOL_parallel_do_clause_seq = 843,   /* parallel_do_clause_seq  */
  YYSYMBOL_parallel_loop_clause_seq = 844, /* parallel_loop_clause_seq  */
  YYSYMBOL_parallel_sections_clause_seq = 845, /* parallel_sections_clause_seq  */
  YYSYMBOL_parallel_workshare_clause_seq = 846, /* parallel_workshare_clause_seq  */
  YYSYMBOL_parallel_master_clause_seq = 847, /* parallel_master_clause_seq  */
  YYSYMBOL_master_taskloop_clause_seq = 848, /* master_taskloop_clause_seq  */
  YYSYMBOL_master_taskloop_simd_clause_seq = 849, /* master_taskloop_simd_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_clause_seq = 850, /* parallel_master_taskloop_clause_seq  */
  YYSYMBOL_parallel_master_taskloop_simd_clause_seq = 851, /* parallel_master_taskloop_simd_clause_seq  */
  YYSYMBOL_loop_clause_seq = 852,          /* loop_clause_seq  */
  YYSYMBOL_scan_clause_seq = 853,          /* scan_clause_seq  */
  YYSYMBOL_sections_clause_seq = 854,      /* sections_clause_seq  */
  YYSYMBOL_single_clause_seq = 855,        /* single_clause_seq  */
  YYSYMBOL_single_paired_clause_seq = 856, /* single_paired_clause_seq  */
  YYSYMBOL_cancel_clause_seq = 857,        /* cancel_clause_seq  */
  YYSYMBOL_cancellation_point_clause_seq = 858, /* cancellation_point_clause_seq  */
  YYSYMBOL_allocate_directive_clause = 859, /* allocate_directive_clause  */
  YYSYMBOL_declare_reduction_clause_seq = 860, /* declare_reduction_clause_seq  */
  YYSYMBOL_declare_mapper_clause = 861,    /* declare_mapper_clause  */
  YYSYMBOL_parallel_clause = 862,          /* parallel_clause  */
  YYSYMBOL_cluster_clause = 863,           /* cluster_clause  */
  YYSYMBOL_864_136 = 864,                  /* $@136  */
  YYSYMBOL_865_137 = 865,                  /* $@137  */
  YYSYMBOL_cluster_data_clause = 866,      /* cluster_data_clause  */
  YYSYMBOL_cluster_update_clause = 867,    /* cluster_update_clause  */
  YYSYMBOL_cluster_teams_clause = 868,     /* cluster_teams_clause  */
  YYSYMBOL_cluster_distribute_clause = 869, /* cluster_distribute_clause  */
  YYSYMBOL_870_138 = 870,                  /* $@138  */
  YYSYMBOL_871_139 = 871,                  /* $@139  */
  YYSYMBOL_cluster_teams_distribute_clause = 872, /* cluster_teams_distribute_clause  */
  YYSYMBOL_873_140 = 873,                  /* $@140  */
  YYSYMBOL_874_141 = 874,                  /* $@141  */
  YYSYMBOL_task_async_clause = 875,        /* task_async_clause  */
  YYSYMBOL_876_142 = 876,                  /* $@142  */
  YYSYMBOL_dependance_type = 877,          /* dependance_type  */
  YYSYMBOL_teams_clause = 878,             /* teams_clause  */
  YYSYMBOL_for_clause = 879,               /* for_clause  */
  YYSYMBOL_do_clause = 880,                /* do_clause  */
  YYSYMBOL_simd_clause = 881,              /* simd_clause  */
  YYSYMBOL_for_simd_clause = 882,          /* for_simd_clause  */
  YYSYMBOL_do_simd_clause = 883,           /* do_simd_clause  */
  YYSYMBOL_parallel_for_simd_clause = 884, /* parallel_for_simd_clause  */
  YYSYMBOL_declare_simd_clause = 885,      /* declare_simd_clause  */
  YYSYMBOL_distribute_clause = 886,        /* distribute_clause  */
  YYSYMBOL_distribute_simd_clause = 887,   /* distribute_simd_clause  */
  YYSYMBOL_distribute_parallel_for_clause = 888, /* distribute_parallel_for_clause  */
  YYSYMBOL_distribute_parallel_do_clause = 889, /* distribute_parallel_do_clause  */
  YYSYMBOL_distribute_parallel_for_simd_clause = 890, /* distribute_parallel_for_simd_clause  */
  YYSYMBOL_distribute_parallel_do_simd_clause = 891, /* distribute_parallel_do_simd_clause  */
  YYSYMBOL_parallel_for_clause = 892,      /* parallel_for_clause  */
  YYSYMBOL_parallel_do_clause = 893,       /* parallel_do_clause  */
  YYSYMBOL_parallel_loop_clause = 894,     /* parallel_loop_clause  */
  YYSYMBOL_parallel_sections_clause = 895, /* parallel_sections_clause  */
  YYSYMBOL_parallel_workshare_clause = 896, /* parallel_workshare_clause  */
  YYSYMBOL_parallel_master_clause = 897,   /* parallel_master_clause  */
  YYSYMBOL_master_taskloop_clause = 898,   /* master_taskloop_clause  */
  YYSYMBOL_master_taskloop_simd_clause = 899, /* master_taskloop_simd_clause  */
  YYSYMBOL_parallel_master_taskloop_clause = 900, /* parallel_master_taskloop_clause  */
  YYSYMBOL_parallel_master_taskloop_simd_clause = 901, /* parallel_master_taskloop_simd_clause  */
  YYSYMBOL_loop_clause = 902,              /* loop_clause  */
  YYSYMBOL_scan_clause = 903,              /* scan_clause  */
  YYSYMBOL_sections_clause = 904,          /* sections_clause  */
  YYSYMBOL_single_clause = 905,            /* single_clause  */
  YYSYMBOL_single_paired_clause = 906,     /* single_paired_clause  */
  YYSYMBOL_construct_type_clause = 907,    /* construct_type_clause  */
  YYSYMBOL_if_parallel_clause = 908,       /* if_parallel_clause  */
  YYSYMBOL_if_parallel_parameter = 909,    /* if_parallel_parameter  */
  YYSYMBOL_910_143 = 910,                  /* $@143  */
  YYSYMBOL_if_task_clause = 911,           /* if_task_clause  */
  YYSYMBOL_if_task_parameter = 912,        /* if_task_parameter  */
  YYSYMBOL_913_144 = 913,                  /* $@144  */
  YYSYMBOL_if_taskloop_clause = 914,       /* if_taskloop_clause  */
  YYSYMBOL_if_taskloop_parameter = 915,    /* if_taskloop_parameter  */
  YYSYMBOL_916_145 = 916,                  /* $@145  */
  YYSYMBOL_if_target_data_clause = 917,    /* if_target_data_clause  */
  YYSYMBOL_if_target_data_parameter = 918, /* if_target_data_parameter  */
  YYSYMBOL_919_146 = 919,                  /* $@146  */
  YYSYMBOL_if_target_parallel_clause = 920, /* if_target_parallel_clause  */
  YYSYMBOL_if_target_parallel_parameter = 921, /* if_target_parallel_parameter  */
  YYSYMBOL_922_147 = 922,                  /* $@147  */
  YYSYMBOL_923_148 = 923,                  /* $@148  */
  YYSYMBOL_if_target_simd_clause = 924,    /* if_target_simd_clause  */
  YYSYMBOL_if_target_simd_parameter = 925, /* if_target_simd_parameter  */
  YYSYMBOL_926_149 = 926,                  /* $@149  */
  YYSYMBOL_927_150 = 927,                  /* $@150  */
  YYSYMBOL_if_target_enter_data_clause = 928, /* if_target_enter_data_clause  */
  YYSYMBOL_if_target_enter_data_parameter = 929, /* if_target_enter_data_parameter  */
  YYSYMBOL_930_151 = 930,                  /* $@151  */
  YYSYMBOL_if_target_exit_data_clause = 931, /* if_target_exit_data_clause  */
  YYSYMBOL_if_target_exit_data_parameter = 932, /* if_target_exit_data_parameter  */
  YYSYMBOL_933_152 = 933,                  /* $@152  */
  YYSYMBOL_if_target_clause = 934,         /* if_target_clause  */
  YYSYMBOL_if_target_parameter = 935,      /* if_target_parameter  */
  YYSYMBOL_936_153 = 936,                  /* $@153  */
  YYSYMBOL_if_target_update_clause = 937,  /* if_target_update_clause  */
  YYSYMBOL_if_target_update_parameter = 938, /* if_target_update_parameter  */
  YYSYMBOL_939_154 = 939,                  /* $@154  */
  YYSYMBOL_if_taskloop_simd_clause = 940,  /* if_taskloop_simd_clause  */
  YYSYMBOL_if_taskloop_simd_parameter = 941, /* if_taskloop_simd_parameter  */
  YYSYMBOL_942_155 = 942,                  /* $@155  */
  YYSYMBOL_943_156 = 943,                  /* $@156  */
  YYSYMBOL_if_simd_clause = 944,           /* if_simd_clause  */
  YYSYMBOL_if_simd_parameter = 945,        /* if_simd_parameter  */
  YYSYMBOL_946_157 = 946,                  /* $@157  */
  YYSYMBOL_if_parallel_simd_clause = 947,  /* if_parallel_simd_clause  */
  YYSYMBOL_if_parallel_simd_parameter = 948, /* if_parallel_simd_parameter  */
  YYSYMBOL_949_158 = 949,                  /* $@158  */
  YYSYMBOL_950_159 = 950,                  /* $@159  */
  YYSYMBOL_if_target_parallel_simd_clause = 951, /* if_target_parallel_simd_clause  */
  YYSYMBOL_if_target_parallel_simd_parameter = 952, /* if_target_parallel_simd_parameter  */
  YYSYMBOL_953_160 = 953,                  /* $@160  */
  YYSYMBOL_954_161 = 954,                  /* $@161  */
  YYSYMBOL_955_162 = 955,                  /* $@162  */
  YYSYMBOL_if_cancel_clause = 956,         /* if_cancel_clause  */
  YYSYMBOL_if_cancel_parameter = 957,      /* if_cancel_parameter  */
  YYSYMBOL_958_163 = 958,                  /* $@163  */
  YYSYMBOL_if_parallel_taskloop_clause = 959, /* if_parallel_taskloop_clause  */
  YYSYMBOL_if_parallel_taskloop_parameter = 960, /* if_parallel_taskloop_parameter  */
  YYSYMBOL_961_164 = 961,                  /* $@164  */
  YYSYMBOL_962_165 = 962,                  /* $@165  */
  YYSYMBOL_if_parallel_taskloop_simd_clause = 963, /* if_parallel_taskloop_simd_clause  */
  YYSYMBOL_if_parallel_taskloop_simd_parameter = 964, /* if_parallel_taskloop_simd_parameter  */
  YYSYMBOL_965_166 = 965,                  /* $@166  */
  YYSYMBOL_966_167 = 966,                  /* $@167  */
  YYSYMBOL_967_168 = 967,                  /* $@168  */
  YYSYMBOL_num_threads_clause = 968,       /* num_threads_clause  */
  YYSYMBOL_969_169 = 969,                  /* $@169  */
  YYSYMBOL_num_teams_clause = 970,         /* num_teams_clause  */
  YYSYMBOL_971_170 = 971,                  /* $@170  */
  YYSYMBOL_align_clause = 972,             /* align_clause  */
  YYSYMBOL_973_171 = 973,                  /* $@171  */
  YYSYMBOL_thread_limit_clause = 974,      /* thread_limit_clause  */
  YYSYMBOL_975_172 = 975,                  /* $@172  */
  YYSYMBOL_copyin_clause = 976,            /* copyin_clause  */
  YYSYMBOL_977_173 = 977,                  /* $@173  */
  YYSYMBOL_default_clause = 978,           /* default_clause  */
  YYSYMBOL_default_parameter = 979,        /* default_parameter  */
  YYSYMBOL_default_variant_clause = 980,   /* default_variant_clause  */
  YYSYMBOL_default_variant_directive = 981, /* default_variant_directive  */
  YYSYMBOL_proc_bind_clause = 982,         /* proc_bind_clause  */
  YYSYMBOL_proc_bind_parameter = 983,      /* proc_bind_parameter  */
  YYSYMBOL_bind_clause = 984,              /* bind_clause  */
  YYSYMBOL_bind_parameter = 985,           /* bind_parameter  */
  YYSYMBOL_allocate_clause = 986,          /* allocate_clause  */
  YYSYMBOL_allocate_parameter = 987,       /* allocate_parameter  */
  YYSYMBOL_988_174 = 988,                  /* $@174  */
  YYSYMBOL_989_175 = 989,                  /* $@175  */
  YYSYMBOL_allocator_parameter = 990,      /* allocator_parameter  */
  YYSYMBOL_private_clause = 991,           /* private_clause  */
  YYSYMBOL_992_176 = 992,                  /* $@176  */
  YYSYMBOL_alloc_clause = 993,             /* alloc_clause  */
  YYSYMBOL_broad_clause = 994,             /* broad_clause  */
  YYSYMBOL_995_177 = 995,                  /* $@177  */
  YYSYMBOL_scatter_clause = 996,           /* scatter_clause  */
  YYSYMBOL_997_178 = 997,                  /* $@178  */
  YYSYMBOL_halo_clause = 998,              /* halo_clause  */
  YYSYMBOL_999_179 = 999,                  /* $@179  */
  YYSYMBOL_gather_clause = 1000,           /* gather_clause  */
  YYSYMBOL_1001_180 = 1001,                /* $@180  */
  YYSYMBOL_allgather_clause = 1002,        /* allgather_clause  */
  YYSYMBOL_1003_181 = 1003,                /* $@181  */
  YYSYMBOL_allreduction_clause = 1004,     /* allreduction_clause  */
  YYSYMBOL_1005_182 = 1005,                /* $@182  */
  YYSYMBOL_firstprivate_clause = 1006,     /* firstprivate_clause  */
  YYSYMBOL_1007_183 = 1007,                /* $@183  */
  YYSYMBOL_copyprivate_clause = 1008,      /* copyprivate_clause  */
  YYSYMBOL_1009_184 = 1009,                /* $@184  */
  YYSYMBOL_fortran_copyprivate_clause = 1010, /* fortran_copyprivate_clause  */
  YYSYMBOL_1011_185 = 1011,                /* $@185  */
  YYSYMBOL_lastprivate_clause = 1012,      /* lastprivate_clause  */
  YYSYMBOL_lastprivate_parameter = 1013,   /* lastprivate_parameter  */
  YYSYMBOL_1014_186 = 1014,                /* $@186  */
  YYSYMBOL_1015_187 = 1015,                /* $@187  */
  YYSYMBOL_lastprivate_distribute_clause = 1016, /* lastprivate_distribute_clause  */
  YYSYMBOL_1017_188 = 1017,                /* $@188  */
  YYSYMBOL_lastprivate_modifier = 1018,    /* lastprivate_modifier  */
  YYSYMBOL_linear_clause = 1019,           /* linear_clause  */
  YYSYMBOL_1020_189 = 1020,                /* $@189  */
  YYSYMBOL_linear_parameter = 1021,        /* linear_parameter  */
  YYSYMBOL_1022_190 = 1022,                /* $@190  */
  YYSYMBOL_linear_modifier = 1023,         /* linear_modifier  */
  YYSYMBOL_aligned_clause = 1024,          /* aligned_clause  */
  YYSYMBOL_1025_191 = 1025,                /* $@191  */
  YYSYMBOL_aligned_parameter = 1026,       /* aligned_parameter  */
  YYSYMBOL_1027_192 = 1027,                /* $@192  */
  YYSYMBOL_initializer_clause = 1028,      /* initializer_clause  */
  YYSYMBOL_initializer_expr = 1029,        /* initializer_expr  */
  YYSYMBOL_expr = 1030,                    /* expr  */
  YYSYMBOL_safelen_clause = 1031,          /* safelen_clause  */
  YYSYMBOL_1032_193 = 1032,                /* $@193  */
  YYSYMBOL_simdlen_clause = 1033,          /* simdlen_clause  */
  YYSYMBOL_1034_194 = 1034,                /* $@194  */
  YYSYMBOL_nontemporal_clause = 1035,      /* nontemporal_clause  */
  YYSYMBOL_1036_195 = 1036,                /* $@195  */
  YYSYMBOL_collapse_clause = 1037,         /* collapse_clause  */
  YYSYMBOL_1038_196 = 1038,                /* $@196  */
  YYSYMBOL_ordered_clause = 1039,          /* ordered_clause  */
  YYSYMBOL_1040_197 = 1040,                /* $@197  */
  YYSYMBOL_fortran_nowait_clause = 1041,   /* fortran_nowait_clause  */
  YYSYMBOL_nowait_clause = 1042,           /* nowait_clause  */
  YYSYMBOL_order_clause = 1043,            /* order_clause  */
  YYSYMBOL_order_parameter = 1044,         /* order_parameter  */
  YYSYMBOL_uniform_clause = 1045,          /* uniform_clause  */
  YYSYMBOL_1046_198 = 1046,                /* $@198  */
  YYSYMBOL_inbranch_clause = 1047,         /* inbranch_clause  */
  YYSYMBOL_notinbranch_clause = 1048,      /* notinbranch_clause  */
  YYSYMBOL_inclusive_clause = 1049,        /* inclusive_clause  */
  YYSYMBOL_1050_199 = 1050,                /* $@199  */
  YYSYMBOL_exclusive_clause = 1051,        /* exclusive_clause  */
  YYSYMBOL_1052_200 = 1052,                /* $@200  */
  YYSYMBOL_allocator_clause = 1053,        /* allocator_clause  */
  YYSYMBOL_allocator1_parameter = 1054,    /* allocator1_parameter  */
  YYSYMBOL_dist_schedule_clause = 1055,    /* dist_schedule_clause  */
  YYSYMBOL_dist_schedule_parameter = 1056, /* dist_schedule_parameter  */
  YYSYMBOL_1057_201 = 1057,                /* $@201  */
  YYSYMBOL_schedule_clause = 1058,         /* schedule_clause  */
  YYSYMBOL_1059_202 = 1059,                /* $@202  */
  YYSYMBOL_schedule_parameter = 1060,      /* schedule_parameter  */
  YYSYMBOL_schedule_kind = 1061,           /* schedule_kind  */
  YYSYMBOL_schedule_modifier = 1062,       /* schedule_modifier  */
  YYSYMBOL_schedule_modifier2 = 1063,      /* schedule_modifier2  */
  YYSYMBOL_schedule_enum_modifier = 1064,  /* schedule_enum_modifier  */
  YYSYMBOL_schedule_enum_kind = 1065,      /* schedule_enum_kind  */
  YYSYMBOL_shared_clause = 1066,           /* shared_clause  */
  YYSYMBOL_1067_203 = 1067,                /* $@203  */
  YYSYMBOL_reduction_clause = 1068,        /* reduction_clause  */
  YYSYMBOL_1069_204 = 1069,                /* $@204  */
  YYSYMBOL_reduction_clause_cluster = 1070, /* reduction_clause_cluster  */
  YYSYMBOL_1071_205 = 1071,                /* $@205  */
  YYSYMBOL_allreduction_clause_cluster = 1072, /* allreduction_clause_cluster  */
  YYSYMBOL_1073_206 = 1073,                /* $@206  */
  YYSYMBOL_allreduction_parameter_cluster = 1074, /* allreduction_parameter_cluster  */
  YYSYMBOL_reduction_parameter_cluster = 1075, /* reduction_parameter_cluster  */
  YYSYMBOL_allreduction_identifier_cluster = 1076, /* allreduction_identifier_cluster  */
  YYSYMBOL_reduction_identifier_cluster = 1077, /* reduction_identifier_cluster  */
  YYSYMBOL_reduction_parameter = 1078,     /* reduction_parameter  */
  YYSYMBOL_reduction_identifier = 1079,    /* reduction_identifier  */
  YYSYMBOL_reduction_modifier = 1080,      /* reduction_modifier  */
  YYSYMBOL_reduction_enum_identifier = 1081, /* reduction_enum_identifier  */
  YYSYMBOL_reduction_default_only_clause = 1082, /* reduction_default_only_clause  */
  YYSYMBOL_1083_207 = 1083,                /* $@207  */
  YYSYMBOL_reduction_default_only_parameter = 1084, /* reduction_default_only_parameter  */
  YYSYMBOL_reduction_default_only_modifier = 1085 /* reduction_default_only_modifier  */
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
#define YYLAST   15683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  829
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2499
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  3156

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
       0,   127,   127,   128,   135,   136,   139,   143,   150,   151,
     154,   155,   158,   161,   171,   172,   173,   176,   177,   178,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   218,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   268,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   371,   371,   374,
     377,   377,   381,   382,   385,   386,   387,   390,   391,   394,
     394,   394,   394,   397,   398,   401,   402,   403,   406,   406,
     406,   409,   410,   411,   412,   415,   416,   417,   420,   421,
     422,   423,   426,   426,   429,   430,   431,   434,   437,   438,
     439,   440,   441,   442,   445,   448,   451,   452,   453,   454,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   471,   474,   475,   475,   478,   481,   482,   482,
     485,   485,   489,   489,   492,   493,   496,   497,   498,   501,
     504,   504,   509,   509,   512,   512,   515,   518,   521,   521,
     524,   524,   527,   527,   530,   533,   536,   539,   539,   544,
     544,   546,   546,   548,   548,   550,   552,   552,   554,   554,
     556,   556,   558,   558,   560,   560,   562,   562,   564,   564,
     566,   566,   569,   571,   573,   575,   575,   577,   577,   579,
     579,   581,   581,   583,   583,   585,   586,   587,   588,   590,
     592,   595,   596,   597,   599,   602,   604,   605,   606,   607,
     608,   609,   610,   613,   615,   616,   618,   619,   621,   622,
     624,   626,   628,   629,   631,   632,   634,   635,   637,   639,
     640,   641,   644,   646,   647,   649,   650,   651,   653,   654,
     656,   658,   659,   661,   662,   663,   666,   666,   668,   669,
     670,   671,   672,   673,   674,   675,   678,   679,   682,   683,
     684,   685,   686,   688,   689,   690,   691,   692,   693,   694,
     696,   697,   698,   699,   702,   703,   704,   705,   706,   709,
     709,   712,   714,   716,   718,   721,   723,   725,   727,   729,
     732,   733,   735,   736,   739,   740,   741,   743,   744,   745,
     747,   748,   749,   751,   752,   753,   756,   757,   758,   760,
     761,   762,   764,   765,   766,   768,   769,   770,   772,   773,
     774,   776,   777,   778,   780,   781,   782,   784,   785,   786,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   846,   847,   848,   849,   850,   851,
     853,   854,   855,   856,   857,   859,   860,   861,   862,   863,
     865,   866,   867,   868,   869,   871,   872,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   886,
     887,   889,   890,   892,   893,   894,   895,   897,   898,   899,
     901,   903,   904,   906,   906,   908,   910,   912,   914,   915,
     918,   919,   920,   921,   922,   923,   924,   925,   926,   927,
     930,   930,   933,   934,   936,   938,   938,   940,   941,   943,
     943,   944,   944,   946,   946,   946,   948,   949,   951,   952,
     953,   954,   955,   958,   958,   961,   963,   964,   965,   966,
     968,   968,   971,   973,   974,   974,   977,   977,   980,   982,
     983,   983,   984,   987,   987,   989,   990,   992,   992,   993,
     993,   995,   995,   995,   998,   999,  1002,  1002,  1004,  1004,
    1006,  1006,  1008,  1010,  1012,  1014,  1016,  1018,  1019,  1020,
    1022,  1024,  1026,  1028,  1029,  1029,  1030,  1033,  1034,  1037,
    1039,  1040,  1040,  1043,  1043,  1046,  1046,  1048,  1048,  1052,
    1052,  1055,  1055,  1057,  1058,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1069,  1070,  1071,  1072,  1074,  1074,  1075,  1076,
    1079,  1080,  1081,  1082,  1085,  1086,  1087,  1088,  1089,  1090,
    1091,  1092,  1094,  1096,  1097,  1098,  1098,  1099,  1101,  1101,
    1104,  1105,  1106,  1106,  1107,  1109,  1109,  1111,  1111,  1114,
    1116,  1117,  1118,  1121,  1121,  1123,  1124,  1124,  1125,  1127,
    1128,  1129,  1130,  1131,  1133,  1134,  1135,  1136,  1138,  1139,
    1142,  1143,  1144,  1146,  1147,  1148,  1150,  1151,  1152,  1154,
    1155,  1156,  1157,  1158,  1159,  1161,  1164,  1166,  1167,  1170,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1181,
    1182,  1183,  1185,  1186,  1187,  1189,  1190,  1191,  1193,  1195,
    1196,  1198,  1200,  1202,  1202,  1204,  1205,  1207,  1208,  1209,
    1211,  1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,  1220,
    1221,  1223,  1223,  1225,  1226,  1228,  1229,  1230,  1232,  1233,
    1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,
    1244,  1245,  1246,  1247,  1248,  1249,  1251,  1251,  1253,  1254,
    1256,  1257,  1258,  1260,  1261,  1262,  1263,  1264,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1279,  1281,  1281,  1283,  1284,  1286,  1287,  1288,
    1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,
    1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1311,  1311,  1313,  1314,  1316,  1317,  1318,  1320,  1321,  1322,
    1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1345,  1345,  1347,  1348,  1350,  1351,  1352,  1354,  1355,
    1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,
    1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
    1376,  1377,  1379,  1379,  1381,  1382,  1384,  1385,  1386,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1401,  1401,  1403,  1404,  1406,  1407,  1408,  1410,  1411,
    1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,
    1422,  1423,  1424,  1425,  1426,  1427,  1430,  1430,  1432,  1433,
    1435,  1436,  1437,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,
    1456,  1457,  1458,  1459,  1460,  1461,  1462,  1463,  1465,  1465,
    1467,  1468,  1470,  1471,  1472,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,  1498,
    1500,  1500,  1502,  1503,  1505,  1506,  1507,  1509,  1510,  1511,
    1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,
    1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,
    1532,  1533,  1534,  1535,  1536,  1538,  1538,  1540,  1541,  1543,
    1544,  1545,  1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,
    1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,  1564,
    1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,  1574,
    1576,  1576,  1578,  1579,  1581,  1582,  1583,  1585,  1586,  1587,
    1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,
    1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1608,
    1608,  1610,  1611,  1613,  1614,  1615,  1617,  1618,  1619,  1620,
    1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,  1629,  1630,
    1631,  1632,  1633,  1634,  1635,  1636,  1637,  1639,  1639,  1641,
    1642,  1644,  1645,  1646,  1648,  1649,  1650,  1651,  1652,  1653,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,
    1664,  1666,  1666,  1668,  1669,  1671,  1672,  1673,  1675,  1676,
    1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,  1686,
    1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1696,  1696,
    1698,  1699,  1701,  1702,  1703,  1705,  1706,  1707,  1708,  1709,
    1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,
    1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,
    1730,  1732,  1732,  1734,  1735,  1737,  1738,  1739,  1741,  1742,
    1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,
    1753,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1763,
    1763,  1765,  1766,  1768,  1769,  1770,  1772,  1773,  1774,  1775,
    1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,
    1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,
    1796,  1797,  1798,  1800,  1800,  1802,  1803,  1805,  1806,  1807,
    1809,  1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,
    1819,  1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1828,
    1829,  1830,  1831,  1832,  1833,  1834,  1835,  1837,  1837,  1839,
    1840,  1842,  1843,  1844,  1846,  1847,  1848,  1849,  1850,  1851,
    1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,  1861,
    1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,  1870,  1871,
    1872,  1873,  1874,  1875,  1876,  1878,  1878,  1880,  1881,  1883,
    1884,  1885,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,
    1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1903,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,
    1915,  1916,  1917,  1921,  1921,  1923,  1923,  1925,  1925,  1927,
    1927,  1929,  1929,  1931,  1931,  1933,  1933,  1935,  1937,  1937,
    1939,  1939,  1941,  1941,  1943,  1944,  1946,  1946,  1948,  1948,
    1950,  1950,  1952,  1952,  1954,  1954,  1956,  1956,  1958,  1958,
    1960,  1960,  1962,  1962,  1964,  1964,  1966,  1966,  1968,  1968,
    1970,  1970,  1974,  1974,  1978,  1978,  1982,  1982,  1986,  1986,
    1988,  1988,  1990,  1990,  1992,  1992,  1994,  1996,  1996,  1998,
    1998,  2000,  2002,  2002,  2004,  2004,  2011,  2011,  2018,  2018,
    2021,  2021,  2023,  2026,  2028,  2029,  2032,  2032,  2034,  2036,
    2037,  2040,  2040,  2043,  2046,  2047,  2048,  2049,  2050,  2051,
    2052,  2053,  2056,  2058,  2059,  2061,  2064,  2064,  2067,  2070,
    2071,  2074,  2075,  2078,  2081,  2082,  2085,  2086,  2089,  2093,
    2096,  2097,  2100,  2101,  2104,  2105,  2108,  2109,  2112,  2113,
    2116,  2117,  2119,  2120,  2122,  2123,  2125,  2126,  2128,  2129,
    2131,  2132,  2134,  2135,  2137,  2138,  2140,  2141,  2143,  2144,
    2146,  2147,  2149,  2150,  2152,  2153,  2155,  2156,  2158,  2159,
    2161,  2162,  2164,  2165,  2167,  2168,  2170,  2171,  2173,  2174,
    2176,  2177,  2179,  2180,  2182,  2183,  2185,  2186,  2188,  2189,
    2191,  2192,  2194,  2196,  2197,  2199,  2200,  2202,  2203,  2205,
    2206,  2208,  2209,  2211,  2212,  2217,  2218,  2223,  2224,  2226,
    2227,  2228,  2233,  2234,  2236,  2237,  2239,  2240,  2241,  2243,
    2244,  2245,  2248,  2249,  2250,  2253,  2254,  2255,  2258,  2259,
    2260,  2263,  2264,  2265,  2268,  2269,  2270,  2273,  2274,  2275,
    2278,  2279,  2280,  2283,  2284,  2285,  2288,  2289,  2290,  2293,
    2294,  2295,  2298,  2299,  2300,  2303,  2304,  2305,  2307,  2308,
    2309,  2311,  2312,  2313,  2315,  2316,  2317,  2319,  2320,  2321,
    2323,  2324,  2325,  2327,  2328,  2329,  2331,  2332,  2333,  2335,
    2336,  2337,  2339,  2340,  2341,  2343,  2344,  2345,  2347,  2348,
    2349,  2351,  2352,  2353,  2355,  2356,  2357,  2359,  2360,  2361,
    2363,  2364,  2365,  2367,  2368,  2369,  2371,  2372,  2373,  2375,
    2376,  2377,  2379,  2380,  2381,  2383,  2384,  2385,  2387,  2389,
    2390,  2391,  2397,  2398,  2399,  2401,  2402,  2403,  2405,  2406,
    2407,  2413,  2417,  2418,  2420,  2422,  2424,  2425,  2426,  2427,
    2428,  2429,  2430,  2431,  2432,  2433,  2436,  2437,  2438,  2439,
    2440,  2441,  2442,  2442,  2443,  2443,  2446,  2447,  2448,  2449,
    2450,  2451,  2452,  2453,  2455,  2456,  2457,  2458,  2459,  2460,
    2461,  2462,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,  2476,  2477,  2478,  2479,  2480,  2481,  2484,
    2485,  2486,  2487,  2488,  2489,  2490,  2490,  2491,  2491,  2494,
    2495,  2496,  2497,  2498,  2499,  2500,  2501,  2502,  2503,  2504,
    2505,  2506,  2507,  2508,  2509,  2510,  2511,  2512,  2513,  2513,
    2514,  2514,  2517,  2517,  2520,  2522,  2527,  2528,  2529,  2530,
    2531,  2532,  2533,  2534,  2537,  2538,  2539,  2540,  2541,  2542,
    2543,  2544,  2545,  2546,  2547,  2550,  2551,  2552,  2553,  2554,
    2555,  2556,  2557,  2558,  2559,  2562,  2563,  2564,  2565,  2566,
    2567,  2568,  2569,  2570,  2571,  2572,  2575,  2576,  2577,  2578,
    2579,  2580,  2581,  2582,  2583,  2584,  2585,  2586,  2587,  2588,
    2589,  2590,  2592,  2593,  2594,  2595,  2596,  2597,  2598,  2599,
    2600,  2601,  2602,  2603,  2604,  2605,  2606,  2608,  2609,  2610,
    2611,  2612,  2613,  2614,  2615,  2616,  2617,  2618,  2619,  2620,
    2621,  2622,  2623,  2624,  2625,  2626,  2627,  2630,  2631,  2632,
    2633,  2634,  2635,  2638,  2639,  2640,  2641,  2642,  2643,  2645,
    2646,  2647,  2648,  2649,  2650,  2651,  2652,  2653,  2654,  2655,
    2656,  2657,  2658,  2660,  2661,  2662,  2663,  2664,  2665,  2666,
    2667,  2668,  2669,  2670,  2671,  2672,  2673,  2674,  2675,  2676,
    2677,  2679,  2680,  2681,  2682,  2683,  2684,  2685,  2686,  2687,
    2688,  2689,  2690,  2691,  2692,  2693,  2694,  2695,  2697,  2698,
    2699,  2700,  2701,  2702,  2703,  2704,  2705,  2706,  2707,  2708,
    2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,  2718,
    2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,  2729,
    2730,  2731,  2732,  2733,  2734,  2735,  2736,  2737,  2738,  2739,
    2740,  2742,  2743,  2744,  2745,  2746,  2747,  2748,  2749,  2750,
    2751,  2752,  2753,  2754,  2755,  2756,  2757,  2758,  2760,  2761,
    2762,  2763,  2764,  2765,  2766,  2767,  2768,  2769,  2770,  2771,
    2772,  2773,  2774,  2775,  2777,  2778,  2779,  2780,  2781,  2782,
    2783,  2784,  2785,  2786,  2787,  2788,  2789,  2790,  2792,  2793,
    2794,  2795,  2796,  2797,  2798,  2799,  2800,  2801,  2802,  2804,
    2805,  2806,  2807,  2808,  2809,  2810,  2811,  2812,  2813,  2815,
    2816,  2817,  2818,  2819,  2820,  2821,  2822,  2823,  2824,  2826,
    2827,  2828,  2829,  2830,  2831,  2832,  2833,  2834,  2835,  2836,
    2837,  2838,  2839,  2840,  2841,  2842,  2844,  2845,  2846,  2847,
    2848,  2849,  2850,  2851,  2852,  2853,  2854,  2855,  2856,  2857,
    2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,  2866,  2868,
    2869,  2870,  2871,  2872,  2873,  2874,  2875,  2876,  2877,  2878,
    2879,  2880,  2881,  2882,  2883,  2884,  2885,  2886,  2887,  2889,
    2890,  2891,  2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,
    2900,  2901,  2902,  2903,  2904,  2905,  2906,  2907,  2908,  2909,
    2910,  2911,  2912,  2913,  2914,  2916,  2917,  2918,  2919,  2920,
    2921,  2923,  2924,  2926,  2927,  2928,  2929,  2930,  2931,  2933,
    2934,  2935,  2936,  2937,  2939,  2940,  2942,  2943,  2944,  2945,
    2946,  2953,  2956,  2956,  2958,  2960,  2963,  2963,  2964,  2966,
    2969,  2969,  2970,  2972,  2975,  2975,  2976,  2978,  2981,  2981,
    2982,  2982,  2983,  2985,  2988,  2988,  2989,  2989,  2990,  2992,
    2995,  2995,  2996,  2998,  3001,  3001,  3002,  3004,  3007,  3007,
    3008,  3010,  3013,  3013,  3014,  3016,  3019,  3019,  3020,  3020,
    3021,  3023,  3025,  3025,  3026,  3028,  3030,  3030,  3031,  3031,
    3032,  3034,  3036,  3036,  3037,  3037,  3038,  3038,  3039,  3041,
    3043,  3043,  3044,  3046,  3048,  3048,  3049,  3049,  3050,  3052,
    3054,  3054,  3055,  3055,  3056,  3056,  3057,  3068,  3068,  3071,
    3071,  3074,  3074,  3078,  3078,  3080,  3080,  3084,  3087,  3088,
    3089,  3090,  3093,  3096,  3099,  3101,  3102,  3103,  3105,  3107,
    3108,  3109,  3111,  3113,  3114,  3114,  3115,  3115,  3117,  3118,
    3119,  3120,  3121,  3122,  3123,  3124,  3125,  3128,  3128,  3131,
    3133,  3133,  3135,  3135,  3137,  3137,  3147,  3147,  3149,  3149,
    3151,  3151,  3153,  3153,  3156,  3156,  3158,  3158,  3160,  3162,
    3163,  3163,  3164,  3164,  3167,  3167,  3169,  3172,  3173,  3173,
    3176,  3177,  3177,  3178,  3180,  3181,  3182,  3185,  3186,  3186,
    3190,  3191,  3191,  3194,  3196,  3198,  3200,  3200,  3203,  3203,
    3206,  3206,  3209,  3209,  3212,  3212,  3213,  3215,  3217,  3219,
    3222,  3225,  3225,  3228,  3231,  3233,  3233,  3235,  3235,  3237,
    3238,  3239,  3240,  3241,  3242,  3243,  3244,  3245,  3246,  3249,
    3251,  3252,  3252,  3254,  3254,  3258,  3259,  3263,  3264,  3267,
    3268,  3271,  3272,  3273,  3275,  3276,  3277,  3280,  3281,  3282,
    3283,  3284,  3286,  3286,  3289,  3289,  3293,  3293,  3296,  3296,
    3299,  3300,  3302,  3303,  3306,  3307,  3310,  3311,  3314,  3315,
    3318,  3319,  3322,  3323,  3324,  3327,  3328,  3329,  3330,  3331,
    3332,  3333,  3334,  3335,  3336,  3339,  3339,  3343,  3344,  3347
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
  "var_chunk_cluster", "var_chunk_list", "var_chunk_list_cluster",
  "openmp_directive", "$@1", "directiveAuxCluster", "variant_directive",
  "fortran_paired_directive", "end_directive", "$@2", "end_clause_seq",
  "metadirective_directive", "$@3", "metadirective_clause_optseq",
  "metadirective_clause_seq", "metadirective_clause", "when_clause", "$@4",
  "$@5", "$@6", "when_variant_directive", "context_selector_specification",
  "trait_set_selector", "$@7", "$@8", "trait_set_selector_name",
  "trait_selector_list", "trait_selector", "condition_selector", "$@9",
  "device_selector", "context_kind", "context_kind_name", "context_isa",
  "context_arch", "implementation_selector", "context_vendor_name",
  "construct_selector", "parallel_selector", "$@10",
  "parallel_selector_parameter", "trait_score", "$@11",
  "declare_variant_directive", "$@12", "variant_func_id", "$@13",
  "declare_variant_clause_optseq", "declare_variant_clause_seq",
  "declare_variant_clause", "match_clause", "$@14", "parallel_directive",
  "$@15", "cluster_directive", "$@16", "declare_cluster_directive",
  "end_declare_cluster_directive", "cluster_data_directive", "$@17",
  "cluster_update_directive", "$@18", "cluster_teams_directive", "$@19",
  "cluster_distribute_directive", "cluster_teams_distribute_directive",
  "cluster_teams_master_directive", "task_async_directive", "$@20",
  "task_directive", "$@21", "taskloop_directive", "$@22",
  "taskloop_simd_directive", "$@23", "taskyield_directive",
  "requires_directive", "$@24", "target_data_directive", "$@25",
  "target_enter_data_directive", "$@26", "target_exit_data_directive",
  "$@27", "target_directive", "$@28", "target_update_directive", "$@29",
  "declare_target_directive", "$@30", "flush_directive", "$@31",
  "end_declare_target_directive", "master_directive", "barrier_directive",
  "taskwait_directive", "$@32", "taskgroup_directive", "$@33",
  "critical_directive", "$@34", "depobj_directive", "$@35",
  "ordered_directive", "$@36", "critical_clause_optseq",
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
  "$@37", "atomic_clause_optseq", "atomic_clause_seq",
  "memory_order_clause_seq", "memory_order_clause_seq_after",
  "atomic_clause", "memory_order_clause", "hint_clause", "$@38",
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
  "taskwait_clause", "taskgroup_clause", "final_clause", "$@39",
  "untied_clause", "mergeable_clause", "in_reduction_clause",
  "in_reduction_identifier", "in_reduction_enum_identifier",
  "depend_with_modifier_clause", "$@40", "depend_parameter",
  "dependence_type", "depend_modifier", "$@41",
  "depend_iterators_definition", "depend_iterator_specifier", "$@42",
  "$@43", "depend_range_specification", "$@44", "$@45",
  "depend_range_step", "depend_enum_type", "depend_depobj_clause", "$@46",
  "dependence_depobj_parameter", "dependence_depobj_type",
  "depend_ordered_clause", "$@47", "dependence_ordered_parameter",
  "dependence_ordered_type", "$@48", "priority_clause", "$@49",
  "affinity_clause", "affinity_parameter", "$@50", "affinity_modifier",
  "$@51", "iterators_definition", "iterator_specifier", "$@52", "$@53",
  "range_specification", "$@54", "$@55", "range_step", "detach_clause",
  "$@56", "grainsize_clause", "$@57", "num_tasks_clause", "$@58",
  "nogroup_clause", "reverse_offload_clause", "unified_address_clause",
  "unified_shared_memory_clause", "atomic_default_mem_order_clause",
  "atomic_default_mem_order_parameter", "dynamic_allocators_clause",
  "ext_implementation_defined_requirement_clause", "device_clause",
  "device_parameter", "$@59", "device_modifier_parameter",
  "device_without_modifier_clause", "device_without_modifier_parameter",
  "$@60", "use_device_ptr_clause", "$@61", "use_device_addr_clause",
  "$@62", "is_device_ptr_clause", "$@63", "has_device_addr_clause", "$@64",
  "defaultmap_clause", "$@65", "defaultmap_parameter",
  "defaultmap_behavior", "defaultmap_category", "uses_allocators_clause",
  "$@66", "uses_allocators_parameter", "allocators_list",
  "allocators_list_parameter_enum", "allocators_list_parameter_user",
  "to_clause", "to_parameter", "$@67", "to_mapper", "$@68", "from_clause",
  "from_parameter", "$@69", "from_mapper", "$@70", "link_clause", "$@71",
  "device_type_clause", "device_type_parameter", "map_clause", "$@72",
  "map_parameter", "$@73", "map_modifier_type", "map_modifier_parameter1",
  "map_modifier_parameter2", "map_modifier1", "map_modifier2",
  "map_modifier3", "map_type", "map_modifier_mapper",
  "task_reduction_clause", "task_reduction_identifier",
  "task_reduction_enum_identifier", "ordered_clause_optseq",
  "ordered_clause_threads_simd_seq", "ordered_clause_depend_seq",
  "ordered_clause_depend", "ordered_clause_threads_simd", "threads_clause",
  "simd_ordered_clause", "teams_distribute_directive", "$@74",
  "teams_distribute_clause_optseq", "teams_distribute_clause_seq",
  "teams_distribute_clause", "teams_distribute_simd_directive", "$@75",
  "teams_distribute_simd_clause_optseq",
  "teams_distribute_simd_clause_seq", "teams_distribute_simd_clause",
  "teams_distribute_parallel_for_directive", "$@76",
  "teams_distribute_parallel_for_clause_optseq",
  "teams_distribute_parallel_for_clause_seq",
  "teams_distribute_parallel_for_clause",
  "teams_distribute_parallel_do_directive", "$@77",
  "teams_distribute_parallel_do_clause_optseq",
  "teams_distribute_parallel_do_clause_seq",
  "teams_distribute_parallel_do_clause",
  "teams_distribute_parallel_for_simd_directive", "$@78",
  "teams_distribute_parallel_for_simd_clause_optseq",
  "teams_distribute_parallel_for_simd_clause_seq",
  "teams_distribute_parallel_for_simd_clause",
  "teams_distribute_parallel_do_simd_directive", "$@79",
  "teams_distribute_parallel_do_simd_clause_optseq",
  "teams_distribute_parallel_do_simd_clause_seq",
  "teams_distribute_parallel_do_simd_clause", "teams_loop_directive",
  "$@80", "teams_loop_clause_optseq", "teams_loop_clause_seq",
  "teams_loop_clause", "target_parallel_directive", "$@81",
  "target_parallel_clause_optseq", "target_parallel_clause_seq",
  "target_parallel_clause", "target_parallel_for_directive", "$@82",
  "target_parallel_for_clause_optseq", "target_parallel_for_clause_seq",
  "target_parallel_for_clause", "target_parallel_do_directive", "$@83",
  "target_parallel_do_clause_optseq", "target_parallel_do_clause_seq",
  "target_parallel_do_clause", "target_parallel_for_simd_directive",
  "$@84", "target_parallel_for_simd_clause_optseq",
  "target_parallel_for_simd_clause_seq", "target_parallel_for_simd_clause",
  "target_parallel_do_simd_directive", "$@85",
  "target_parallel_do_simd_clause_optseq",
  "target_parallel_do_simd_clause_seq", "target_parallel_do_simd_clause",
  "target_parallel_loop_directive", "$@86",
  "target_parallel_loop_clause_optseq", "target_parallel_loop_clause_seq",
  "target_parallel_loop_clause", "target_simd_directive", "$@87",
  "target_simd_clause_optseq", "target_simd_clause_seq",
  "target_simd_clause", "target_teams_directive", "$@88",
  "target_teams_clause_optseq", "target_teams_clause_seq",
  "target_teams_clause", "target_teams_distribute_directive", "$@89",
  "target_teams_distribute_clause_optseq",
  "target_teams_distribute_clause_seq", "target_teams_distribute_clause",
  "target_teams_distribute_simd_directive", "$@90",
  "target_teams_distribute_simd_clause_optseq",
  "target_teams_distribute_simd_clause_seq",
  "target_teams_distribute_simd_clause", "target_teams_loop_directive",
  "$@91", "target_teams_loop_clause_optseq",
  "target_teams_loop_clause_seq", "target_teams_loop_clause",
  "target_teams_distribute_parallel_for_directive", "$@92",
  "target_teams_distribute_parallel_for_clause_optseq",
  "target_teams_distribute_parallel_for_clause_seq",
  "target_teams_distribute_parallel_for_clause",
  "target_teams_distribute_parallel_do_directive", "$@93",
  "target_teams_distribute_parallel_do_clause_optseq",
  "target_teams_distribute_parallel_do_clause_seq",
  "target_teams_distribute_parallel_do_clause",
  "target_teams_distribute_parallel_for_simd_directive", "$@94",
  "target_teams_distribute_parallel_for_simd_clause_optseq",
  "target_teams_distribute_parallel_for_simd_clause_seq",
  "target_teams_distribute_parallel_for_simd_clause",
  "target_teams_distribute_parallel_do_simd_directive", "$@95",
  "target_teams_distribute_parallel_do_simd_clause_optseq",
  "target_teams_distribute_parallel_do_simd_clause_seq",
  "target_teams_distribute_parallel_do_simd_clause", "for_directive",
  "$@96", "do_directive", "$@97", "do_paired_directive", "$@98",
  "simd_directive", "$@99", "for_simd_directive", "$@100",
  "do_simd_directive", "$@101", "do_simd_paired_directive", "$@102",
  "parallel_for_simd_directive", "parallel_do_simd_directive", "$@103",
  "declare_simd_directive", "$@104", "declare_simd_fortran_directive",
  "$@105", "proc_name", "distribute_directive", "$@106",
  "distribute_simd_directive", "$@107",
  "distribute_parallel_for_directive", "$@108",
  "distribute_parallel_do_directive", "$@109",
  "distribute_parallel_for_simd_directive", "$@110",
  "distribute_parallel_do_simd_directive", "$@111",
  "parallel_for_directive", "$@112", "parallel_do_directive", "$@113",
  "parallel_loop_directive", "$@114", "parallel_sections_directive",
  "$@115", "parallel_workshare_directive", "$@116",
  "parallel_master_directive", "$@117", "master_taskloop_directive",
  "$@118", "master_taskloop_simd_directive", "$@119",
  "parallel_master_taskloop_directive", "$@120",
  "parallel_master_taskloop_simd_directive", "$@121", "loop_directive",
  "$@122", "scan_directive", "$@123", "sections_directive", "$@124",
  "sections_paired_directive", "$@125", "section_directive",
  "single_directive", "$@126", "single_paired_directive", "$@127",
  "workshare_directive", "workshare_paired_directive", "$@128",
  "cancel_directive", "$@129", "cancellation_point_directive", "$@130",
  "teams_directive", "$@131", "allocate_directive", "$@132",
  "allocate_list", "directive_variable", "directive_varlist",
  "threadprivate_directive", "$@133", "threadprivate_variable",
  "threadprivate_list", "declare_reduction_directive", "$@134",
  "reduction_list", "reduction_identifiers", "typername_variable",
  "typername_list", "combiner", "declare_mapper_directive", "$@135",
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
  "parallel_clause", "cluster_clause", "$@136", "$@137",
  "cluster_data_clause", "cluster_update_clause", "cluster_teams_clause",
  "cluster_distribute_clause", "$@138", "$@139",
  "cluster_teams_distribute_clause", "$@140", "$@141", "task_async_clause",
  "$@142", "dependance_type", "teams_clause", "for_clause", "do_clause",
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
  "$@143", "if_task_clause", "if_task_parameter", "$@144",
  "if_taskloop_clause", "if_taskloop_parameter", "$@145",
  "if_target_data_clause", "if_target_data_parameter", "$@146",
  "if_target_parallel_clause", "if_target_parallel_parameter", "$@147",
  "$@148", "if_target_simd_clause", "if_target_simd_parameter", "$@149",
  "$@150", "if_target_enter_data_clause", "if_target_enter_data_parameter",
  "$@151", "if_target_exit_data_clause", "if_target_exit_data_parameter",
  "$@152", "if_target_clause", "if_target_parameter", "$@153",
  "if_target_update_clause", "if_target_update_parameter", "$@154",
  "if_taskloop_simd_clause", "if_taskloop_simd_parameter", "$@155",
  "$@156", "if_simd_clause", "if_simd_parameter", "$@157",
  "if_parallel_simd_clause", "if_parallel_simd_parameter", "$@158",
  "$@159", "if_target_parallel_simd_clause",
  "if_target_parallel_simd_parameter", "$@160", "$@161", "$@162",
  "if_cancel_clause", "if_cancel_parameter", "$@163",
  "if_parallel_taskloop_clause", "if_parallel_taskloop_parameter", "$@164",
  "$@165", "if_parallel_taskloop_simd_clause",
  "if_parallel_taskloop_simd_parameter", "$@166", "$@167", "$@168",
  "num_threads_clause", "$@169", "num_teams_clause", "$@170",
  "align_clause", "$@171", "thread_limit_clause", "$@172", "copyin_clause",
  "$@173", "default_clause", "default_parameter", "default_variant_clause",
  "default_variant_directive", "proc_bind_clause", "proc_bind_parameter",
  "bind_clause", "bind_parameter", "allocate_clause", "allocate_parameter",
  "$@174", "$@175", "allocator_parameter", "private_clause", "$@176",
  "alloc_clause", "broad_clause", "$@177", "scatter_clause", "$@178",
  "halo_clause", "$@179", "gather_clause", "$@180", "allgather_clause",
  "$@181", "allreduction_clause", "$@182", "firstprivate_clause", "$@183",
  "copyprivate_clause", "$@184", "fortran_copyprivate_clause", "$@185",
  "lastprivate_clause", "lastprivate_parameter", "$@186", "$@187",
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
  "$@204", "reduction_clause_cluster", "$@205",
  "allreduction_clause_cluster", "$@206", "allreduction_parameter_cluster",
  "reduction_parameter_cluster", "allreduction_identifier_cluster",
  "reduction_identifier_cluster", "reduction_parameter",
  "reduction_identifier", "reduction_modifier",
  "reduction_enum_identifier", "reduction_default_only_clause", "$@207",
  "reduction_default_only_parameter", "reduction_default_only_modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2636)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-2442)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    6856,  1518,   182,   222,   827,   421, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,   254, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,   118,   323,   345, -2636,   394, -2636, -2636,   863, -2636,
   -2636, -2636, -2636, -2636,   447,   714, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,   422,   429, -2636, -2636, -2636,   318,  4146, -2636,  2538,
   -2636,  3309, -2636, -2636, -2636,   256, -2636,   785, -2636,  1579,
     947,  1195,  1834,  1338,   875,   150, -2636,   287,   554,   303,
    2203,  2938,   301,   545,   432, -2636,  1996,   334,  4743,   361,
   -2636,  4884,  1385,   582, -2636,  1001, -2636,   558,   562, -2636,
    4667,   595,    91,  1543,   500, -2636,   533,   756,   740, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  8660,  5175, -2636,  6814,  3724,  3858,  4146,   732,  4146,
     531, -2636,   535, -2636, -2636, -2636, -2636, -2636,   553,   555,
   -2636,  1663, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  5810,   565,   567, -2636, -2636, -2636,   577,
     594, -2636,  1533, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,  5554, -2636,  1415, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   599,
     601,   615,  1677,   622,   614,   745,   840,  3814, -2636,   626,
   -2636,   187, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
     636, -2636,   146, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   762,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   207,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,   127,   648, -2636,   191, -2636, -2636, -2636,
     875,   683,   671, -2636, -2636,   158, -2636, -2636, -2636,   698,
     181,   705, -2636, -2636,   716, -2636, -2636,   133, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
     726, -2636, -2636, -2636,   729, -2636, -2636,   742, -2636, -2636,
    2385, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,   188,    27, -2636, -2636, -2636, -2636, -2636,  6542,  1226,
   -2636,  3294,  2893, -2636, -2636, -2636,   342, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,   735,   951,   505,
   -2636, -2636, -2636,  1417,   442, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,   782, -2636,  7510,
     772, -2636, -2636, -2636, -2636,  3067, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,   793, -2636,   811,
   -2636,   934, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1025,
    1029, -2636,  3961,  5947,   559, -2636,  6139,   728, -2636, -2636,
    1207,   818,   850, -2636, -2636, -2636, -2636, -2636, -2636,  3491,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,    36, -2636, -2636, -2636,
   -2636, -2636,   873, -2636, -2636,   866, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  1013,    13,  1167, -2636, -2636, -2636, -2636,
   -2636,   884, -2636, -2636,   914,  1100,   250, -2636, -2636,   828,
     981,   892, -2636,  2250, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  2766, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,  8660, -2636,  3152, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   921, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,   262, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,   466, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    8007, -2636,   744, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   157,   901,   433,   912,   935,   940,
     945,   962,   865,  1787,  4146, -2636, -2636,   490, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,   185,   529,   966,   968,   977,
     995,  2538, -2636, -2636,   319, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  3309, -2636,   937,  1214,   190,  1863, -2636, -2636, -2636,
   -2636,   499, -2636, -2636, -2636, -2636, -2636, -2636, -2636,   969,
    1022, -2636,  1032,  1068, -2636,   642, -2636, -2636, -2636, -2636,
   -2636,  4081, -2636,  6581, -2636,  1242, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1048,  1256,  1579, -2636,  1056,   448,   947, -2636,  1067,
    1071,  1834, -2636,  1076,  1338, -2636,  1087,  1295, -2636,  1880,
     150, -2636, -2636, -2636, -2636, -2636, -2636,   235, -2636,  1089,
     554, -2636, -2636, -2636,   304, -2636,  1098, -2636,   194, -2636,
   -2636, -2636,   163,  1109,  1114,  1138,  1128,  2203, -2636,   178,
    1141,  1888,  1162,  1164,    35,  1171,  2938, -2636,  1179,   204,
   -2636,  1298, -2636,  7510, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  2979, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  1413,  1427,  4258, -2636,  2319, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  1752, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  1199,  1216,  1996, -2636,
   -2636,  1430,  1467,  1430,   168,  1430,   563,   720,  1431, -2636,
    1225,  1271, -2636,  3672, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,    51,  1279,
    1283,  4884, -2636,  1223, -2636,  1385, -2636, -2636,  8637, -2636,
    8637,  5727,  1286, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1629, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  1289, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  1899, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1462,
   -2636,  6407,  5778, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  4543, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  1300, -2636, -2636, -2636,   257, -2636, -2636,
   -2636, -2636, -2636, -2636,  1102,  1281,  1302,  1304,  1305, -2636,
     292, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
     -17,   332,  1306,  1308,  1309,  1312,  1313,  4667, -2636,   595,
   -2636, -2636,   495, -2636,   873,  1317, -2636, -2636, -2636, -2636,
   -2636,   574, -2636, -2636, -2636, -2636,  1276, -2636,  1871, -2636,
   -2636,  1275, -2636, -2636,   953, -2636,  1491,  1321, -2636, -2636,
   -2636, -2636, -2636, -2636,  4902, -2636,  6139,  1064,  1064,  1318,
   -2636, -2636, -2636, -2636, -2636, -2636,   858, -2636,  1491,  1321,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,    66, -2636,
     162,  8660, -2636,  5175, -2636, -2636,  6814, -2636,  3724, -2636,
    3858, -2636,  4146, -2636,  9304,  1329, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  2744, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  4146,
   -2636,  1282, -2636,  1320,  1347, -2636, -2636, -2636, -2636,  1332,
    1351,  1351,  1351,  1351,  1917, -2636, -2636, -2636,  1335, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1249,  1340,  1344,
   -2636,  5810, -2636, -2636,  1348,  1352,  1360, -2636, -2636, -2636,
    1363,   336,  1366,  3555,  1347, -2636,  1362,  1347, -2636,  5554,
   -2636, -2636, -2636, -2636, -2636,   170, -2636, -2636, -2636,  1367,
    1370, -2636,  1373, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  1374,  1378,  1380,  1677, -2636, -2636,  1377,    37,
    1387,  1368, -2636, -2636,   548,   717, -2636,  7869, -2636,  1810,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  8828,
   -2636,  3124, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    3814, -2636,  1351,  1369,  1388, -2636,  1154, -2636, -2636, -2636,
    1390, -2636,  1351,  1351, -2636,  1351, -2636,   140, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    1393, -2636, -2636,   683, -2636,  1394,   731, -2636,   698, -2636,
    1397,  2102,   181, -2636,  1402, -2636,  1401,  1351,  1351,  1419,
     352,  1351, -2636,  1414, -2636,  1418,  1347, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1421, -2636,
    1357,  1347, -2636,  1425,  1426,  1429,  1347, -2636,  1292, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    1607, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  6542, -2636, -2636,
    8283, -2636,  8283, -2636,  2591, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  3294, -2636,  2893, -2636,  1347,  1347,
   -2636,  1430, -2636, -2636, -2636, -2636, -2636, -2636,   156, -2636,
   -2636, -2636, -2636, -2636,  1669,   564,   295,   199,  7510, -2636,
    1435, -2636,  1434,  1347,  1347, -2636, -2636, -2636, -2636,  1447,
   -2636,  8166, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    5215, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    8166, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  5471,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  2875, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   147,  3961, -2636,   293,  5947, -2636,
    1646,  1665,  7207, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  5429, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  4483, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    6139, -2636,    63,  1450,  1452,   728, -2636,  1453, -2636,   330,
   -2636, -2636, -2636, -2636, -2636, -2636,  1458, -2636,   788, -2636,
   -2636, -2636, -2636, -2636, -2636,   111,  1476,    49,  1207, -2636,
    1464, -2636,  1460, -2636, -2636,  1471,  1470,  1466,  1351,  1351,
    2694,  2588,  3598, -2636, -2636,   873, -2636,   580,  1347,  1543,
   -2636,    48,  1269, -2636,   813, -2636,   900,   229,  1127, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  3269, -2636,  1491,  1321, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  5287, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    1375, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1501, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1351,  1481,  1482,  1496,  1498,  1500,  2149, -2636, -2636,
   -2636,  1512,   981, -2636,  1514,  1516, -2636,  1515, -2636, -2636,
   -2636, -2636, -2636, -2636,  1519, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  2690, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   174,  8007, -2636, -2636, -2636, -2636,
   -2636,  1521, -2636, -2636, -2636,   654,   667,   677,   682, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  1524, -2636,  1522, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  1540, -2636,  1351, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1525, -2636,  1528,
    1539,  1541,  1551, -2636,  1553, -2636,  1554,  1542,  1214, -2636,
    1597,  1573,  1737,  1583,  1351, -2636,  1677, -2636,  1571,  1570,
    1576,  1351, -2636, -2636, -2636,  1577,  1068, -2636, -2636, -2636,
     279, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  4081, -2636, -2636,  2192, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    6581, -2636, -2636,   686,  1574, -2636, -2636, -2636,  1578,  1581,
   -2636,   688,   708,   722,  1584, -2636,  1596,  1351, -2636, -2636,
   -2636, -2636, -2636, -2636,   652, -2636, -2636, -2636,  1347, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1620, -2636,
   -2636, -2636,   747,   848, -2636,  1614, -2636,   881, -2636, -2636,
    1622,  1351, -2636, -2636, -2636, -2636, -2636, -2636,  1609, -2636,
    1582, -2636,  1623,  1613, -2636, -2636,  1351,  1627, -2636, -2636,
    1638, -2636,  7510, -2636, -2636,  9067, -2636,  3917, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  9067,
   -2636,  4203, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  4258, -2636, -2636, -2636,  1647,  1648, -2636,
   -2636,  1652,   168, -2636,  1893, -2636,  1653, -2636, -2636, -2636,
   -2636, -2636,  1656,  1657, -2636,  1661, -2636, -2636, -2636,  1666,
    1667, -2636,  1658, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  4445, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  8637, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  4572, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  8637, -2636,  5727,
   -2636,  1672,  1676, -2636,  1683, -2636,  1679,  1694, -2636,  1693,
   -2636, -2636,  8481, -2636,  8481, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  3389, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  6407, -2636,  5778, -2636, -2636,  1747,
   -2636,  1695,  1351,  1351, -2636,   288,  1102, -2636,   312,  1281,
   -2636,  1730, -2636,  1696,  1700,  1698, -2636,  1702,  1703,  1704,
   -2636, -2636, -2636, -2636, -2636,  1351,   889,   895, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,  1708,  1715, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  1714,  1718,  1721,  1724,
   -2636, -2636,  1728, -2636, -2636, -2636, -2636, -2636, -2636,  1735,
    1733,  1738,  3027, -2636, -2636, -2636, -2636,  1740, -2636,  1772,
   -2636,  1272, -2636,  1013, -2636,  1013, -2636,  1772, -2636, -2636,
    1739,  1742,  5684, -2636, -2636, -2636,  6139, -2636,  1745,  1064,
   -2636,  1064, -2636, -2636,   899,  1351,  1351,  1351,  1351,  1351,
   -2636,   822, -2636, -2636, -2636, -2636,   151,  9304, -2636,  1750,
    1754, -2636,  1762, -2636,  1347, -2636,  1351, -2636, -2636, -2636,
   -2636,  1351,  2612,  1351,  1351,  1351,  1351,  1351, -2636,   905,
   -2636,  1844,   685,  1767, -2636, -2636, -2636,   731, -2636, -2636,
   -2636,    12, -2636, -2636, -2636,  1765, -2636, -2636, -2636, -2636,
   -2636,  1262,   938, -2636,  1770, -2636, -2636,  1351,   943, -2636,
   -2636,  7869, -2636, -2636,  8828, -2636, -2636, -2636,  1783,  1351,
    2612, -2636, -2636, -2636, -2636, -2636,   960,   731, -2636, -2636,
    1749,  1784, -2636,  1347, -2636, -2636,  1351, -2636, -2636,  1347,
   -2636,  1003,  1786,  1351,  1650, -2636,  1806,  1351,  1794, -2636,
    1796, -2636, -2636, -2636,  6009, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    8283, -2636, -2636,  7108, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  8283,
   -2636, -2636, -2636, -2636,  1351, -2636,  1793,   326, -2636, -2636,
   -2636,  1347, -2636, -2636,   165,  8166, -2636, -2636,  8166, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  7745, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  3871, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  7745,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  4946, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    7207, -2636, -2636, -2636,  1798, -2636,  1009,  1016,  1885, -2636,
    1803, -2636,  1889, -2636,  1808, -2636,  1811, -2636, -2636, -2636,
    1813, -2636, -2636,  1351,  1347,  1351,  1794, -2636, -2636, -2636,
     820, -2636,  2588,  1827,  1831,  1840, -2636, -2636,  1351, -2636,
   -2636,  2564, -2636,  3084, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  2424,  3120, -2636, -2636,  1917, -2636, -2636,  1351,
   -2636,  1026,  1819,  1828,  1830,  1835,  1836,  1794,  1839,  1841,
    1843,  1836,  1846, -2636, -2636,  1842,  1347,  1347,  1852,  1854,
    1856, -2636,  1859, -2636, -2636, -2636, -2636, -2636, -2636,  1046,
   -2636,  1794,  1794,  1794,  1794,  1794,  1860, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   958,  1597, -2636,  2023,  1583,  1879,
   -2636,  1881,  1351,  1794, -2636, -2636, -2636, -2636,  1060, -2636,
    1347, -2636, -2636,  3244,  1869, -2636, -2636,  1794,  1877, -2636,
   -2636,  1896,  1062, -2636,  1903,  1101, -2636,  1794,  1351,  9067,
   -2636, -2636,  9067, -2636, -2636,  1105,  1186, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  1890,  1347,  1347, -2636,  1891,  1900,
    1901, -2636,  1894, -2636, -2636,  1347,  1347,  1347,  1347, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  3516, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  8481, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  4157, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  8481,
   -2636, -2636, -2636, -2636, -2636,  1972, -2636,  1981, -2636, -2636,
    1351,  1918,  1351,  1794, -2636,  1794, -2636, -2636, -2636, -2636,
   -2636, -2636,  1905,  1906,  1907,  1351,  1794, -2636, -2636, -2636,
   -2636,  4054, -2636,  1612, -2636, -2636, -2636,  1910, -2636,  1916,
   -2636, -2636,  1919, -2636,  1921, -2636,  1925, -2636, -2636,  1926,
    1351, -2636,  1938,  1351, -2636, -2636, -2636,  1351, -2636, -2636,
   -2636, -2636, -2636, -2636,  1347,  1347, -2636, -2636, -2636, -2636,
    1931,  1924, -2636, -2636, -2636,  1934,  1794, -2636, -2636, -2636,
     467,   572, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636,   757, -2636,  1942,  1110, -2636,
   -2636, -2636,  1947,  1806, -2636,  1794, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  1940,  1943, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,  7745, -2636, -2636,  7745,
   -2636, -2636,  1347,  1944,  1946,  1347,  1794,  1953,  1794, -2636,
   -2636, -2636,  1794, -2636, -2636,  2343, -2636,  1351,  3378,  1351,
    3378,  1351,  1955, -2636,  1957, -2636,  1126,  1347,  1347,  1347,
   -2636, -2636,  1977, -2636, -2636, -2636,  2207,  1963,  1976,  1979,
    1987,  1988,  1990,  1993,  1995,  1997,   145, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  2013,  1896, -2636,
    2015,  2021, -2636, -2636,  1347,  1347,  1347,  1347, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  1142, -2636, -2636,
    1165, -2636,  1174,  1351,  1351, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636,  2145,  2145,  2145,  2145,  2145,  2145,  2145,
     757,  2005, -2636,  2020,  2031, -2636,  2021, -2636, -2636, -2636,
   -2636, -2636, -2636,  1347,  1347,  1351, -2636,  1351, -2636, -2636,
    2018,  2019,  2145,  2034,  2037,  4284,  2638,  2039,  2051,  2054,
    2041, -2636, -2636,  2031, -2636, -2636, -2636,  2046, -2636, -2636,
   -2636, -2636, -2636, -2636,  2045,  4146,  2065, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
    2049, -2636, -2636, -2636, -2636, -2636, -2636,  2050, -2636, -2636,
   -2636, -2636, -2636,  2055,  2069, -2636, -2636, -2636,  2059, -2636,
   -2636,  2071, -2636,  2062, -2636, -2636,  2067,  2070,  2072,  2089,
   -2636, -2636,  2090, -2636, -2636, -2636
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     105,   272,  1433,  1435,     0,  1456,  1488,  1490,  1492,  1496,
    1497,  1504,   317,     0,  1516,   190,  1510,  1439,   289,   323,
    1501,   313,  1508,   187,   321,   291,   295,   296,   304,   314,
     315,   310,   376,   319,     0,     0,    74,    21,    22,    20,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    78,    69,    70,    75,    76,    77,    80,    81,    82,
      79,    83,    84,    85,    99,    86,   100,    87,    88,    89,
     101,    90,   102,    91,    92,    93,    94,    95,    96,    97,
     103,    98,   104,    23,    24,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    26,    57,    71,    72,
      73,  1468,  1470,  1472,  1474,  1476,  1478,  1544,  1441,  1560,
    1443,  1562,   260,  1536,  1521,  1450,   308,     0,  1458,  1578,
    1610,     0,  1613,  1617,  1623,   422,  1506,     0,   192,     0,
    1566,   344,   769,  1480,   783,   942,  1558,     0,     0,     0,
     293,   346,     0,   961,  1149,  1177,   298,     0,     0,   306,
     356,   420,   365,   388,   325,     1,     0,     0,   274,   287,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,  1574,  1590,  1448,  1592,  1594,  1596,  1598,  1484,  1600,
       0,  2317,     0,  2357,  2372,  2462,  2325,  2464,     0,     0,
     273,  1545,  1639,  1756,  1757,  1762,  1758,  1764,  1765,  1759,
    1760,  1761,  1763,  1568,     0,     0,  2443,  2412,  2418,     0,
    2416,  1434,  1561,  1666,  1863,  1854,  1855,  1856,  1857,  1860,
    1861,  1862,  1864,  1859,  1858,  1570,  1436,  1563,  1669,  1873,
    1865,  1866,  1867,  1868,  1871,  1872,  1874,  1870,  1869,     0,
       0,     0,  1576,     0,   359,  1460,  1462,  1580,  2384,     0,
    1457,  1579,  1687,  1948,  1943,  1944,  1945,  1946,  1947,  2495,
       0,  1489,  1611,  1735,  2205,  2208,  2209,  2206,  2207,  2210,
    2425,  2427,  1491,  1612,  1738,  2211,  2212,  2417,  1493,  1614,
    1739,  2217,  2213,  2214,  2215,  2218,  2216,  2376,  1498,  1618,
    1742,  2222,  2219,  2220,  2221,  2223,  2226,  2228,  2229,  2227,
    2230,  1505,  1624,  1748,     0,   318,   423,   457,   561,   562,
    1625,     0,     0,   199,   191,   193,   194,   197,   198,     0,
    1627,     0,  2406,  2408,     0,  2410,  1440,  1567,  1672,  1875,
    1881,  1882,  1878,  1879,  1876,  1877,  1880,  1884,  1885,  1883,
       0,   563,   565,   566,     0,   580,   616,     0,   636,   290,
     345,   424,   461,   462,   464,   468,   469,   470,   472,   473,
     460,   463,   471,   465,   466,   467,   782,   610,   781,   778,
     324,   770,   771,   775,   772,   779,   780,  1482,  1602,     0,
     801,   785,   944,  2319,  2323,  1509,  1559,  1663,  1846,  1847,
    1848,  1853,  1849,  1850,  1851,  1852,   312,   272,  1437,  1456,
    1494,  1499,  1502,  1508,   304,   189,   188,   139,   137,   162,
     163,   164,   166,   165,   140,   168,   167,   170,   169,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   138,   144,   145,   153,   146,
     147,   148,   149,   150,   151,   152,   154,   155,   156,   157,
     158,   159,   143,   142,   160,   161,   141,     0,   322,   348,
       0,   638,   640,   642,   292,   347,   427,   485,   487,   488,
     480,   486,   482,   483,   489,   474,   481,   490,   476,   477,
     478,   484,   475,   479,   643,   644,   645,     0,   650,     0,
     297,   350,   433,   514,   515,   516,   517,   518,   519,   986,
    1018,  1120,   963,  1151,  1201,  1261,  1179,     0,   300,   302,
       0,     0,     0,   667,   669,   671,   686,   723,   305,   357,
     445,   540,   547,   536,   542,   543,   544,   548,   541,   535,
     537,   546,   538,   539,   545,   316,   421,   454,   560,   416,
     417,   418,     0,   311,   367,   371,   373,   374,   375,   415,
     419,   409,   377,   378,   391,   392,   404,   405,   406,   407,
     408,     0,   320,   276,     0,  1552,   282,   278,   280,  1546,
    1556,     0,  1447,  1575,  1681,  1917,  1918,  1923,  1919,  1925,
    1926,  1920,  1921,  1927,  1928,  1935,  1933,  1934,  1936,  1930,
    1931,  1932,  1929,  1922,  1924,  1469,  1591,  1705,  2041,  2042,
    2047,  2043,  2049,  2050,  2044,  2045,  2051,  2052,  2054,  2055,
    2056,  2057,  2053,  2046,  2048,  1574,  1471,  1593,  1708,  2058,
    2059,  2064,  2060,  2066,  2067,  2061,  2062,  2068,  2069,  2071,
    2072,  2073,  2070,  2063,  2065,  1473,  1595,  1711,  2074,  2075,
    2080,  2076,  2082,  2086,  2083,  2077,  2078,  2084,  2085,  2087,
    2079,  2081,  1475,  1597,  1714,  2088,  2089,  2094,  2090,  2096,
    2097,  2091,  2092,  2098,  2093,  2095,  1477,  1599,  1717,  2099,
    2100,  2105,  2101,  2107,  2108,  2102,  2103,  2104,  2106,  1486,
    1606,  1479,  1601,  1720,  2109,  2110,  2115,  2111,  2117,  2118,
    2112,  2113,  2114,  2116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1640,  1442,  1569,  1675,  1886,
    1899,  1891,  1892,  1893,  1889,  1890,  1887,  1888,  1901,  1896,
    1897,  1898,  1900,  1895,  1894,     0,     0,     0,     0,     0,
       0,     0,  1667,  1444,  1571,  1678,  1902,  1914,  1907,  1908,
    1909,  1905,  1906,  1903,  1904,  1916,  1912,  1913,  1915,  1911,
    1910,     0,  1670,     0,   264,     0,     0,  2421,  2423,  2424,
    1451,  1577,  1684,  1938,  1939,  1937,  1940,  1941,  1942,  1454,
       0,   717,     0,     0,   309,   361,   451,   557,   558,   559,
    1464,  1582,  1466,  1584,  1459,  1581,  1690,  1955,  1954,  1949,
    1950,  1951,  1958,  1959,  1956,  1957,  1960,  1952,  1962,  1953,
    1961,     0,     0,     0,  1688,     0,     0,     0,  1736,     0,
       0,     0,  1740,     0,     0,  1743,     0,     0,  1749,     0,
       0,   458,  1507,  1626,  1751,  1518,  1519,     0,  2333,     0,
       0,   195,  1513,  1514,     0,  2321,     0,  1511,  1628,  1629,
    1753,  1752,     0,     0,     0,     0,     0,     0,  1673,     0,
       0,     0,     0,     0,     0,     0,     0,   425,     0,     0,
     773,     0,   776,  1604,  2130,  2132,  2133,  2125,  2131,  2127,
    2128,  2134,  1481,  1603,  1723,  2119,  2126,  2135,  2121,  2122,
    2123,  2129,  2120,  2124,   826,   853,   803,   784,   786,   787,
     790,   791,   792,   797,   793,   794,   798,   799,   800,   795,
     796,   943,   945,   946,   949,   950,   951,   957,   956,   952,
     953,   960,   958,   959,   954,   955,     0,     0,     0,  1664,
    1445,  1564,     0,  1615,  1619,  1621,   783,   961,  1177,   330,
       0,     0,   294,   349,   430,   502,   504,   505,   497,   503,
     499,   500,   506,   491,   498,   507,   493,   494,   495,   510,
     511,   508,   509,   512,   501,   513,   492,   496,     0,     0,
       0,     0,   428,     0,   651,     0,   434,  1050,   988,  1085,
    1020,  1122,     0,   972,   978,   969,   974,   975,   979,   973,
     962,   964,   965,   968,   980,   983,   981,   985,   977,   970,
     971,   976,   982,   984,     0,  1160,  1166,  1157,  1162,  1163,
    1167,  1161,  1150,  1152,  1153,  1156,  1165,  1158,  1159,  1173,
    1170,  1171,  1168,  1169,  1172,  1175,  1164,  1176,  1174,     0,
    1228,  1203,  1263,  1188,  1194,  1185,  1190,  1191,  1195,  1189,
    1178,  1180,  1181,  1184,  1196,  1197,  1198,  1193,  1186,  1187,
    1192,  1199,  1200,     0,   663,   665,   299,   351,   436,   521,
     523,   524,   522,   520,   352,   354,     0,     0,     0,   307,
     358,   448,   549,   550,   555,   554,   551,   552,   553,   556,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
     455,   370,     0,   368,     0,     0,   413,   411,   412,   414,
     379,   393,   400,   401,   402,   403,     0,   389,     0,   390,
     343,     0,   277,   284,  1553,  1654,     0,     0,  1814,  1809,
    1810,  1811,  1812,  1813,  1554,   286,  1550,     0,     0,     0,
    2360,  2362,  2366,  2368,  2364,   275,  1547,  1642,     0,     0,
    1766,  1767,  1768,  1771,  1769,  1770,  1842,   288,  1557,  1660,
       0,     0,  1682,     0,  1706,  1449,     0,  1709,     0,  1712,
       0,  1715,     0,  1718,  1608,     0,  2174,  2176,  2177,  2175,
    2171,  2172,  2178,  1485,  1607,  1729,  2159,  2160,  2165,  2161,
    2167,  2168,  2162,  2163,  2169,  2173,  2170,  2164,  2166,     0,
    1721,     0,  2234,     0,     0,  2331,  2330,  2328,  2329,     0,
       0,     0,     0,     0,     0,  2335,  2336,  2337,     0,  2348,
    2349,  2350,  2351,  2352,  2353,  2354,  2355,  2343,     0,     0,
    1641,     0,  1676,  2386,  2379,     0,     0,  2394,  2395,  2396,
    2390,     0,     0,     0,     0,  2420,     0,     0,  1668,     0,
    1679,  1671,   262,   270,   261,   265,   266,   269,  1541,  1542,
       0,  1538,     0,  1539,  1530,  1531,  1524,  1525,  1526,  1527,
    1528,  1529,     0,     0,     0,     0,  1685,  1455,     0,     0,
       0,     0,   362,   363,     0,     0,   452,  1586,  1461,  1583,
    1693,  1963,  1964,  1969,  1965,  1971,  1972,  1966,  1967,  1973,
    1974,  1976,  1977,  1978,  1979,  1980,  1975,  1968,  1970,  1588,
    1463,  1585,  1696,  1981,  1982,  1987,  1983,  1989,  1990,  1984,
    1985,  1991,  1992,  1994,  1995,  1996,  1997,  1993,  1986,  1988,
       0,  1691,     0,  2440,     0,  1689,     0,  2340,  2341,  2339,
       0,  1737,     0,     0,  1741,     0,  1744,     0,  1750,   765,
     766,   767,   768,   758,   759,   760,   761,   762,   763,   764,
       0,   757,   459,     0,  1517,     0,     0,   196,     0,  1512,
       0,     0,     0,  1630,     0,  2284,     0,     0,     0,  2400,
       0,     0,  1674,     0,  2238,     0,     0,   576,   577,   578,
     579,   569,   570,   571,   572,   573,   574,   575,     0,   568,
       0,     0,   623,   619,     0,     0,     0,   426,     0,   774,
     777,  2147,  2149,  2150,  2142,  2148,  2144,  2145,  2151,  1483,
    1605,  1726,  2136,  2143,  2152,  2138,  2139,  2140,  2155,  2156,
    2153,  2154,  2157,  2146,  2158,  2137,  2141,     0,  1724,   880,
     828,   911,   855,   802,   804,   805,   819,   808,   809,   810,
     815,   811,   812,   816,   822,   823,   820,   821,   824,   817,
     825,   818,   813,   814,     0,   788,     0,   947,     0,     0,
    1665,  1572,  1438,  1565,  1495,  1616,  2374,  1500,  1620,  1745,
    2224,  2225,  1503,  1622,     0,  1201,     0,     0,     0,   431,
       0,  2242,     0,     0,     0,   429,   647,   648,   649,     0,
     435,  1052,   997,  1003,   994,   999,  1000,  1004,   998,   987,
     989,   990,   993,  1005,  1008,  1006,  1010,  1002,   995,   996,
    1011,  1012,  1014,  1015,  1001,  1016,  1017,  1013,  1007,  1009,
    1087,  1029,  1035,  1026,  1031,  1032,  1036,  1030,  1019,  1021,
    1022,  1025,  1037,  1040,  1038,  1042,  1034,  1027,  1028,  1043,
    1044,  1046,  1047,  1033,  1048,  1049,  1045,  1039,  1041,  1131,
    1137,  1128,  1133,  1134,  1138,  1132,  1121,  1123,  1124,  1127,
    1139,  1142,  1140,  1144,  1147,  1136,  1129,  1130,  1145,  1146,
    1135,  1148,  1141,  1143,     0,     0,   966,     0,     0,  1154,
    1289,  1323,  1230,  1212,  1218,  1209,  1214,  1215,  1219,  1213,
    1202,  1204,  1205,  1208,  1220,  1221,  1222,  1217,  1210,  1211,
    1225,  1226,  1216,  1227,  1223,  1224,  1272,  1278,  1269,  1274,
    1275,  1279,  1273,  1262,  1264,  1265,  1268,  1280,  1281,  1282,
    1285,  1277,  1270,  1271,  1288,  1286,  1276,  1287,  1283,  1284,
       0,  1182,     0,     0,     0,     0,   437,     0,   301,   353,
     439,   528,   526,   527,   525,   529,     0,   303,   355,   442,
     533,   531,   532,   530,   534,     0,     0,     0,     0,   449,
       0,  2270,     0,   657,   658,   653,     0,     0,     0,     0,
       0,     0,     0,   447,   456,     0,   366,     0,     0,   393,
     386,   398,   399,   382,     0,   385,     0,   326,  1815,  1655,
    2466,  1816,  2468,  1818,  1823,  1829,  1820,  1825,  1826,  1830,
    1824,   285,  1555,  1657,     0,     0,  1819,  1831,  1832,  1833,
    1828,  1821,  1822,  1835,  1836,  1827,  1837,  1834,  1796,  1802,
    1793,  1798,  1799,  1803,  1797,   283,  1551,  1651,  1792,  1804,
    1805,  1806,  1801,  1794,  1795,  1800,  1807,  1808,  2370,   279,
    1548,  1645,  1776,  1777,  1778,  1781,  1779,  1780,  1783,  1782,
     281,  1549,  1648,  1784,  1785,  1786,  1789,  1787,  1788,  1791,
    1790,     0,     0,     0,     0,     0,     0,  1772,  1643,  1773,
    1775,     0,     0,  1661,     0,     0,  2290,     0,  1683,  1707,
    1710,  1713,  1716,  1719,     0,  2194,  2196,  2197,  2195,  2191,
    2192,  2198,  1487,  1609,  1732,  2179,  2180,  2185,  2181,  2187,
    2188,  2182,  2183,  2189,  2201,  2202,  2199,  2200,  2203,  2193,
    2190,  2204,  2184,  2186,     0,     0,  1730,  1722,  2232,  2231,
       2,     0,  2327,     3,     4,     0,     0,     0,     0,  2482,
    2483,  2484,  2491,  2492,  2493,  2494,  2481,  2485,  2486,  2487,
    2488,  2489,  2490,     0,  2478,     0,  2480,  2334,  2344,  2342,
    2346,  1677,  2380,  2378,  2382,  2391,     0,  2387,     0,  2454,
    2455,  2457,  2458,  2459,  2460,  2461,  2456,     0,  2445,     0,
    2450,  2447,     0,  2419,     0,  1680,     0,     0,     0,   267,
    1634,     0,  1632,     0,     0,  1686,  1576,   708,   704,     0,
       0,     0,   720,   721,   722,     0,     0,   360,   453,  1465,
    1587,  1699,  1998,  1999,  2004,  2000,  2006,  2007,  2001,  2002,
    2008,  2009,  2018,  2016,  2017,  2019,  2011,  2012,  2013,  2014,
    2015,  2010,  2003,  2005,     0,  1694,  1467,  1589,  1702,  2020,
    2021,  2026,  2022,  2028,  2029,  2023,  2024,  2030,  2031,  2039,
    2037,  2038,  2040,  2033,  2034,  2035,  2036,  2032,  2025,  2027,
       0,  1697,  1692,     0,     0,  2439,  2499,  2497,     0,     0,
    2338,     0,     0,     0,     0,  2302,     0,     0,  1520,  2332,
     211,   212,   213,   214,     0,   205,   208,  1515,     0,  2430,
    2431,  2432,  2433,  2434,  2435,  2436,  2437,  2438,     0,  1631,
    2282,  2281,     0,     0,  2401,     0,  2397,     0,  2236,  2235,
       0,     0,   585,   602,   598,   600,   601,   599,     0,   582,
       0,   584,     0,     0,   620,   618,     0,     0,   613,   614,
       0,   612,     0,  1727,  1725,   882,   827,   829,   830,   841,
     842,   833,   834,   843,   835,   844,   840,   836,   837,   845,
     846,   848,   849,   850,   851,   852,   847,   838,   839,   913,
     854,   856,   857,   868,   869,   860,   861,   870,   862,   871,
     867,   863,   864,   872,   873,   875,   876,   877,   878,   879,
     874,   865,   866,     0,   806,   789,   948,     0,     0,  1446,
    1573,     0,     0,  1746,     0,   603,     0,   334,   329,   332,
     333,   331,     0,     0,  2280,     0,   432,  2240,  2239,     0,
       0,   646,     0,  1061,  1067,  1058,  1063,  1064,  1068,  1062,
    1051,  1053,  1054,  1057,  1069,  1072,  1070,  1074,  1066,  1059,
    1060,  1075,  1076,  1083,  1081,  1082,  1084,  1078,  1079,  1065,
    1080,  1077,  1071,  1073,     0,   991,  1096,  1102,  1093,  1098,
    1099,  1103,  1097,  1086,  1088,  1089,  1092,  1104,  1107,  1105,
    1109,  1101,  1094,  1095,  1110,  1111,  1118,  1116,  1117,  1119,
    1113,  1114,  1100,  1115,  1112,  1106,  1108,     0,  1023,     0,
    1125,     0,     0,  2252,     0,   967,     0,     0,  2258,     0,
    1155,  1357,  1291,  1395,  1325,  1239,  1245,  1236,  1241,  1242,
    1246,  1240,  1229,  1231,  1232,  1235,  1247,  1248,  1249,  1244,
    1237,  1238,  1252,  1257,  1258,  1255,  1256,  1259,  1253,  1243,
    1260,  1254,  1250,  1251,     0,  1206,     0,  1266,  1183,     0,
    2246,     0,     0,     0,   438,     0,     0,   440,     0,     0,
     443,     0,  2274,     0,   660,     0,   715,   711,     0,     0,
     450,  2268,  2267,   654,   652,     0,     0,     0,   675,   676,
     677,   678,   679,   680,   681,     0,   673,   694,   695,   696,
     697,   698,   699,   700,   701,   702,     0,   688,   690,   692,
     740,   741,     0,   749,   750,   751,   752,   753,   754,   725,
       0,     0,     0,   729,   742,   369,   372,     0,   387,     0,
     394,     0,   395,     0,   384,     0,   383,     0,   327,  1656,
       0,     0,  1838,  1658,  1839,  1841,     0,  1652,     0,     0,
    1646,     0,  1649,     6,     0,     0,     0,     0,     0,     0,
    1644,     0,  1662,  2288,  2286,  2285,     0,     0,  1733,     0,
       0,  2308,     0,  1731,     0,  2318,     0,  2358,  2373,  2463,
    2326,     0,     0,     0,     0,     0,     0,     0,  2388,     0,
    2444,     0,     0,     0,  2413,  2415,   263,     0,   268,  1755,
    1537,  1635,  1636,  1543,  1540,     0,  1522,  1633,  1754,  1532,
    1533,     0,     0,  1453,     0,   705,   703,     0,     0,   719,
     364,     0,  1700,  1695,     0,  1703,  1698,  2385,     0,     0,
       0,  2426,  2428,  2377,  2300,  2299,     0,     0,   200,   206,
       0,     0,  2429,     0,  2407,  2409,     0,  2398,  2411,     0,
     564,     0,     0,     0,     0,   617,     0,     0,   622,   637,
       0,   611,  1728,   881,   883,   884,   895,   896,   887,   888,
     897,   889,   898,   894,   890,   891,   899,   900,   909,   907,
     908,   910,   902,   903,   904,   905,   906,   901,   892,   893,
       0,   831,   912,   914,   915,   926,   927,   918,   919,   928,
     920,   929,   925,   921,   922,   930,   931,   940,   938,   939,
     941,   933,   934,   935,   936,   937,   932,   923,   924,     0,
     858,   807,  2320,  2324,     0,  1747,     0,     0,  2278,  2276,
    2275,     0,   639,   641,     0,     0,  1055,   992,     0,  1090,
    1024,  1126,  2250,  2248,  2247,  2256,  2254,  2253,  1359,  1300,
    1306,  1297,  1302,  1303,  1307,  1301,  1290,  1292,  1293,  1296,
    1313,  1308,  1309,  1314,  1310,  1315,  1305,  1298,  1299,  1316,
    1317,  1319,  1320,  1304,  1321,  1322,  1318,  1311,  1312,  1397,
    1334,  1340,  1331,  1336,  1337,  1341,  1335,  1324,  1326,  1327,
    1330,  1347,  1342,  1343,  1348,  1344,  1349,  1339,  1332,  1333,
    1350,  1351,  1353,  1354,  1338,  1355,  1356,  1352,  1345,  1346,
       0,  1233,  1207,  1267,     0,  2243,     0,     0,     0,  2262,
       0,   441,     0,  2266,     0,   444,     0,  2271,   661,   659,
       0,   712,   710,     0,     0,     0,   656,   668,   670,   672,
       0,   687,     0,     0,     0,     0,   726,   724,     0,   743,
     744,     0,   733,     0,   730,   745,   410,   396,   397,   381,
     380,   328,     0,     0,  1659,  1653,     0,  1647,  1650,     0,
    2359,     0,     6,    19,    17,     0,     4,    16,    14,     0,
       0,     0,     0,  1844,  1845,     0,     0,     0,     0,     0,
       0,  2316,     0,  1734,  2304,  2306,  2303,  2233,     5,     0,
    2479,  2345,  2347,  2381,  2383,  2392,     0,  2393,  2446,  2451,
    2452,  2453,  2449,  2448,     0,     0,  1637,     0,     0,     0,
    2422,     0,     0,   707,   718,  1701,  1704,  2442,     0,  2498,
       0,   756,   207,   204,     0,  2322,  2283,  2402,     0,  2237,
     567,     0,     0,   583,   629,     0,   625,   621,     0,     0,
     885,   832,     0,   916,   859,     0,     0,   341,   337,   339,
     340,   338,   336,   342,     0,     0,     0,  2241,     0,     0,
       0,  2298,     0,  1056,  1091,     0,     0,     0,     0,  1368,
    1374,  1365,  1370,  1371,  1375,  1369,  1358,  1360,  1361,  1364,
    1381,  1376,  1377,  1382,  1378,  1383,  1373,  1366,  1367,  1384,
    1385,  1393,  1391,  1392,  1394,  1387,  1388,  1372,  1389,  1390,
    1386,  1379,  1380,     0,  1294,  1406,  1412,  1403,  1408,  1409,
    1413,  1407,  1396,  1398,  1399,  1402,  1419,  1414,  1415,  1420,
    1416,  1421,  1411,  1404,  1405,  1422,  1423,  1431,  1429,  1430,
    1432,  1425,  1426,  1410,  1427,  1428,  1424,  1417,  1418,     0,
    1328,  1234,  2244,   664,   666,     0,  2259,     0,  2263,  2272,
       0,     0,     0,   714,  2269,   655,   682,   683,   684,   685,
     674,   689,     0,     0,     0,     0,   728,   732,   731,   746,
     747,     0,   736,     0,   734,   748,  2477,     0,  2472,     0,
    2476,  2475,     0,  2470,     0,  2474,     0,     7,  2361,     0,
       0,  2363,     0,     0,  2367,  2369,  2365,     0,  2289,  2287,
    2310,  2314,  2312,  2309,     0,     0,  2465,  2389,   271,  1638,
       0,     0,  1534,  1535,  1523,     0,   706,  2496,  2301,   272,
       0,  1456,  1508,   203,   118,   201,   119,   117,   120,   121,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   122,   136,     0,  2399,   591,     0,   587,
     581,   627,     0,     0,   624,   615,   886,   917,  2375,   606,
     608,   609,   607,     0,     0,   335,  2279,  2277,  2294,  2292,
    2296,  2291,  2251,  2249,  2257,  2255,     0,  1362,  1295,     0,
    1400,  1329,     0,     0,     0,     0,   662,     0,   713,   691,
     693,   755,   727,   737,   735,     0,   738,     0,     0,     0,
       0,     0,     0,    18,     0,    15,     0,     0,     0,     0,
    2305,  2307,     0,  2403,   709,  1450,     0,     0,   253,     0,
       0,     0,     0,     0,     0,   238,   209,   215,   218,   220,
     224,   225,   226,   221,   219,   252,   589,     0,     0,   586,
       0,     0,   626,   604,     0,     0,     0,     0,  1363,  1401,
    2245,  2260,  2264,  2273,   716,   739,     8,     0,  2473,    10,
       0,  2471,     0,     0,     0,  1843,  2311,  2315,  2313,  2405,
    2404,   202,   254,   257,   257,   257,   257,   257,   257,   257,
       0,     0,   216,     0,     0,   588,     0,   631,   630,   605,
    2295,  2293,  2297,     0,     0,     0,  2467,     0,  2469,  2371,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
       0,   217,   210,     0,   593,   592,   628,     0,  2261,  2265,
       9,    11,    13,    12,     0,  1544,     0,   222,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,   228,   229,   230,   231,   232,   233,     0,   234,   235,
     237,   239,   590,     0,     0,   255,   256,   258,     0,   236,
     227,     0,   632,     0,   223,   594,   634,     0,   596,     0,
     633,   259,     0,   595,   635,   597
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2636,  1069, -1154,  2758, -1624, -2636, -2636,    -5, -2636, -2227,
    -544, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  -157,
   -2636, -2636, -2636,  -224, -2636, -2636, -2636, -2636, -2636,   -38,
   -1959, -2636, -2636, -2636, -2636, -2557, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,  -877,
   -2636,  -376, -2636, -2636, -2636, -2636, -2636, -1197, -2636, -2636,
    -155, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  2172, -2636,  2174,
   -2636,  2175, -2636, -2636, -2636, -2636,  2178, -2636, -2636, -2636,
   -2636, -2636,  2180, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  2181, -2636, -2636, -2636,  2184, -2636,  2190, -2636, -2636,
   -2636,  2194, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,   444, -2636, -2636,  1251,   668, -2636, -2636,  2198, -2636,
   -2636, -1076, -2636,   669, -2636,  -156,  -145, -2636, -2636, -2636,
   -2636, -2636, -2636,  2185,  2189,  2191, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  -162,  -362,  -848,  -384,  -985, -1571, -1570,  -444, -1005,
   -2636, -2636,  -673,  -458,  -217,   -97, -2636,   -71,   -70,  3681,
   -2636, -2636,  9550, -2636, -2636,   -62, -2636, -2636, -2636,  -654,
   -2636, -2636,  -726, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636,   -51, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,  -564, -2636, -2636,  -686, -2636, -2636,
   -2636, -2636, -2636,  -359, -2636,  -319, -2636,  -269, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, 11826, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, 11466, -2636, -2636, -2636,
   12143, -2636, -2636, -2636, -2636, 12724, -2636,  -231, -2636, -2636,
   -2636,  -511, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, 11688, -2636, -2636, -2636, -2636,
    -239,  -467, -2636, -2636, -2636, -2258, -1664, -2636, -2636, -2636,
   -2636, -2636, -2636,  -268,  -160, -2636, -2636,  2227, -2636, -2636,
   -2636,  -808,  2228, -2636, -2636, -2636, -1398, -2636, -2636, -2636,
   -2636, -1905,  2230, -2636, -2636, -2636, -1930, -2636, -2636, -2636,
   -2636, -2295,  2232, -2636, -2636, -2636, -2318,  2233, -2636, -2636,
   -2636,  -818,  2234, -2636, -2636, -2636,  -921, -2636, -2636, -2636,
   -2636, -1454,  2235, -2636, -2636, -2636, -1502, -2636, -2636, -2636,
   -2636, -1991,  2236, -2636, -2636, -2636, -2020,  2238, -2636, -2636,
   -2636, -1498,  2241, -2636, -2636, -2636,  -937,  2242, -2636, -2636,
   -2636,  -990,  2243, -2636, -2636, -2636, -1529,  2244, -2636, -2636,
   -2636, -2070,  2245, -2636, -2636, -2636, -1564, -2636, -2636, -2636,
   -2636, -2383,  2247, -2636, -2636, -2636, -2418, -2636, -2636, -2636,
   -2636, -2590,  2248, -2636, -2636, -2636, -2635,  -294, -2636, -2636,
   -2636, -2636, -2636,  -154, -2636,  -289, -2636, -2636, -2636, -2636,
   -2636, -2636,  2257, -2636,  -285, -2636, -2636, -2636, -2636,  -153,
   -2636,  -152, -2636,  -284, -2636,  2265, -2636,  -279, -2636,  2267,
   -2636, -2636, -2636,  2269, -2636,  2270, -2636, -2636, -2636,  2273,
   -2636,  2274, -2636,  2275, -2636,  2276, -2636,  2278, -2636,  2279,
   -2636,  -151, -2636,  -265, -2636,  -263, -2636, -2636, -2636,  -150,
    -262, -2636, -2636, -2636, -2636, -2636, -2636,  -260, -2636,  -258,
   -2636,  -149, -2636,  -257, -2636, -2636,  1079, -2636, -2636, -2636,
    1086, -2636, -2636, -2636, -2636, -2636,  -238, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636,   568,  -652, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  1821,   571, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636, -2636,  -659, -2636, -2234,    -8, -1094, -2636, -2636, -1667,
   -1618, -1623, -1039, -2636, -2636, -1616, -2636, -2636, -1105, -2636,
   -2636,  -300,   -40,  -139,  -222,  -610,  -534,  -491,  -660,  -119,
    -620, -1254, -1268, -1784, -1809,  -519,  -530,  -450,  -561,  -452,
    -588,  -729, -1333, -1146, -1704,  -120, -2636,  -184,  -122, -1421,
    2124,    50, -2636, -2636, -2636, -2636, -2636,  -378, -2636, -2636,
   -2636, -2636, -2636,  -940, -2636, -2636, -2636, -1566, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636,  -197, -2636, -2636,
   -2636, -2636, -2636,  -854, -2636, -2636, -2636,  -174, -2636, -2636,
   -1228, -2636, -2636, -2636, -1411, -2636, -2636, -2636, -2636,  1621,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636,
   -2636,  9682, -2636,  6531, -2636, -2636, -2636,  -123, -2636, 10949,
   -2636,  8245, -2636, -2636, -2636, 11619, -2636,  -172, -2636,   877,
   -2636, -2636, -2636, -2636,  -129, -2636, -1122, -1107, -2636, -1093,
   -2636, -1083, -2636, -1064, -2636, -1061, -2636, -1126, -2636,  2337,
   -2636, -2636, -2636, -2636, -2636,  5292, -2636, -2636, -2636,  -368,
   -2636, -2636,  6435, -2636, -2636, -2636, -2636,    93, -2636, -2636,
   -2636, -2636, -2636, -2636,   -66, -2636,  6024, -2636,  6029, -2636,
    2838, -2636,  4914, -2636,  -107,  9469,  5497, -2636, -2636, -2636,
   -2636, -2636, -2636, -2636, -2636, -2636, -2636, -2636, 11175, -2636,
   -2636,  6877, -2636, -2636,    99, -2636, -2636, -2636, -2636,  8841,
   -2636,  4196, -2636, -1059, -2636, -1057, -2636, -2636, -2636, -2636,
   -2374,  -175, -1312, -1114, -2497,   -15, -2636, -2636, -2636
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,  1831,  1834,  2647,  2643,  3037,  3040,  2648,  2644,  2649,
    2645,    34,    35,   180,  2903,   425,    36,   158,   426,    37,
     148,   334,   335,   336,   337,   849,  2703,  2997,  2905,  1984,
    1985,  2410,  3061,  1986,  3006,  3007,  3008,  3138,  3009,  3010,
    3127,  3011,  3012,  3013,  3120,  3014,  3015,  3082,  3104,  3084,
    3143,    38,   259,   774,  1886,  1254,  1255,  1256,  1257,  1887,
      39,   127,   181,   589,   182,   183,   184,  1137,   185,  1138,
     186,  1136,   187,   188,   189,   190,   590,    40,   151,    41,
     161,    42,   479,    43,    44,   162,    45,   527,    46,  1074,
      47,  1075,    48,   170,    49,   530,    50,   264,    51,   172,
      52,    53,    54,    55,   171,    56,   145,    57,   174,    58,
     159,    59,   152,   582,   478,   950,  2098,  2099,  2100,  2734,
    1121,   369,   484,   952,   510,  1066,  1648,  1657,   538,  1079,
     794,  1283,  1284,   563,  1102,  1103,   564,   565,    60,   173,
     572,  1110,   573,  1690,  1111,  1691,  1692,  1105,  1112,  1113,
    1114,  1115,   576,   577,   578,   579,   580,   555,   325,   370,
     485,   953,   511,  1067,  1649,  1658,   539,  1080,   795,   556,
     326,   371,   486,   954,   512,  1068,  1650,  1659,   540,  1081,
    1082,  1083,   796,   557,   327,   372,   870,   373,   374,   375,
    1398,  1399,   376,   872,  2018,  2019,  2020,  2422,  2928,  2929,
    3063,  3017,  3095,  3133,  3148,  3153,  2021,  2101,  2496,  2943,
    2944,   389,   878,  2030,  2031,  2430,   377,   873,   378,  1404,
    2427,  1405,  2023,  2715,  2716,  3020,  2932,  3068,  3097,  3146,
    3150,   379,   875,   492,   979,   493,   980,   494,   513,   514,
     515,   516,  1499,   517,   518,   543,  1676,  2605,  1677,  1085,
    2245,  2830,  1070,  1643,  1071,  1644,   544,  1092,   545,  1093,
     546,  1094,  2265,  2266,  2840,   547,  1095,  2276,  2277,  2278,
    2279,   797,  1899,  2692,  1900,  2384,  1087,  2248,  2832,  2249,
    2600,   798,  1280,   799,  1905,   548,  1096,  2290,  2845,  2291,
    2622,  2852,  2292,  2623,  2853,  2293,  2625,   328,  1360,  1361,
     390,   391,   392,   393,   394,   395,   396,    61,   401,   907,
     908,   909,    62,   906,  1443,  1444,  1445,    63,  1440,  2036,
    2037,  2038,    64,  1442,  2060,  2061,  2062,    65,  2035,  2433,
    2434,  2435,    66,  2059,  2462,  2463,  2464,    67,   402,   921,
     922,   923,    68,   522,  1000,  1001,  1002,    69,   988,  1509,
    1510,  1511,    70,   990,  1538,  1539,  1540,    71,  1501,  2120,
    2121,  2122,    72,  1530,  2153,  2154,  2155,    73,   991,  1566,
    1567,  1568,    74,   523,  1022,  1023,  1024,    75,   526,  1050,
    1051,  1052,    76,  1041,  1600,  1601,  1602,    77,  1592,  2202,
    2203,  2204,    78,  1042,  1623,  1624,  1625,    79,  2192,  2526,
    2527,  2528,    80,  2194,  2557,  2558,  2559,    81,  2518,  2756,
    2757,  2758,    82,  2549,  2792,  2793,  2794,    83,   129,    84,
     131,   455,   941,    85,   150,    86,   223,    87,   245,   457,
    1471,    88,    89,   635,    90,   262,    91,   263,  1278,    92,
     139,    93,   267,    94,   801,    95,   803,    96,  1287,    97,
    1309,    98,   192,    99,   194,   100,   195,   101,   196,   102,
     197,   103,   199,   104,   398,   105,   883,   106,   700,   107,
    1174,   108,   140,   109,   141,   110,   142,   472,   943,   111,
     112,   143,   474,   944,   113,   475,   945,   114,   144,   115,
     330,   116,   156,   117,   149,   340,   853,   854,   118,   147,
     846,   847,   119,   261,  1272,  1273,  2380,  2381,  2894,   120,
     260,  1260,  1261,  1262,  1263,   210,  1145,  1749,  1760,  1735,
    1123,  1711,  1157,   405,   231,   246,  1472,   346,   726,   753,
    2089,   592,   780,   270,   804,  1288,  1310,  1909,  1936,   615,
     636,   655,   672,   686,   701,   892,  1419,  1183,  1802,   281,
     292,   298,  1474,   308,  1477,  1482,   321,   842,   857,   858,
    2376,  2370,  2371,   211,  1146,  1750,  1761,  1736,  1124,  1712,
    1158,   406,   232,   247,   347,   727,   754,   593,   781,   271,
     805,  1289,  1311,  1910,  1937,   616,   637,   656,   673,   687,
     702,   893,  1420,  1184,  1803,   282,   293,   299,   309,  1478,
     322,   843,   859,  2377,  2372,   212,  1147,  1148,  1149,  1751,
    1762,  1737,  1125,  1126,  1127,  1713,  1714,  1715,  1159,  1781,
    2655,   407,   233,   248,   348,   728,   755,   594,   782,   272,
     806,  1290,  1312,  1911,  1938,   617,   638,   657,   674,   688,
     703,   894,  1421,  1185,  1804,   283,   294,   300,   310,  1479,
     323,   213,  1203,  2344,   380,  1385,  2419,   495,  1492,  2501,
    1073,  2231,  2962,  1003,  2184,  2746,  2745,  1025,  2189,  2748,
    2747,  1654,  2590,  3073,  1663,  2594,  3074,   549,  1672,  2604,
    1088,  2243,  2965,   963,  2105,  2736,  2735,   349,  1376,  2413,
     595,  1787,  2657,  2656,  2123,  2742,  3026,  3025,  3027,   838,
    1976,  2700,  1186,  2342,  2884,  2885,  1805,  2662,  2987,  2989,
    2988,   214,   715,   408,   936,   860,  1370,   409,   937,   215,
     720,   216,  1209,   338,  1365,   217,  1218,   284,  1340,   218,
    1228,  2353,  2354,  1229,   219,   717,  1150,  1151,  1772,  1152,
    1773,  1153,  1776,  1154,  1774,  1155,  1775,  1758,  2318,   220,
     718,  1480,  2091,   314,   833,   603,  1235,  2355,  2356,   276,
     821,  1236,   604,  2676,  1241,  2357,  1242,   605,  2708,  1380,
    2416,  2378,  2891,  3050,   606,   863,   607,   864,   608,   866,
     609,   748,   610,   750,   305,   241,   611,  1246,   786,  1274,
     787,   788,   295,   829,   296,   830,   861,  1998,   278,  1334,
    1964,   612,   747,  1877,  1878,  1879,  2682,  1880,  1881,   221,
     719,   222,   721,  1701,  2310,  1703,  2311,  2862,  2857,  2863,
    2858,  1853,  1854,  1855,  1856,   289,   825,  1968,  1969
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     235,   427,   250,   428,   456,   459,   460,   471,   473,   476,
     274,   285,  1769,   302,   312,  1752,  1763,   574,  2294,  1086,
     895,   350,   383,   663,  1967,  2409,  2205,   412,   575,  1422,
    1753,  1764,   498,   916,  2624,  1935,   315,  2178,  1826,   889,
    1693,   552,  1695,  1961,  1754,  1765,  2084,   550,  1512,   729,
    1541,  1569,  1778,  1783,  1755,  1766,  2145,  2093,  1889,  1912,
    2227,  1641,   601,   624,   487,   645,   665,   681,   695,  2180,
     710,   756,  2225,  1756,  1767,  1669,  1757,  1768,  2237,   890,
    1586,  1939,  1646,  2320,   354,  1699,  1589,  2033,  2240,  1779,
     488,   489,  1780,   807,   731,  1098,  2313,  1164,  1100,  2338,
    1465,  2650,  1162,   235,  1467,  1489,   939,  1167,   772,   841,
     491,   851,  1171,  2317,  1200,   832,   758,  1232,   250,  2156,
     960,  1276,  1286,   982,   882,   868,  2392,   986,  2395,   891,
    2506,  2490,  2461,  2581,  2509,  2860,  2865,  2686,   809,  2720,
    2820,   415,   274,  2322,  2784,  2723,   503,  2324,  1670,  2998,
     836,  2181,   824,   285,  1974,  2658,   341,   736,  2960,   203,
     961,  1201,   828,   207,  1438,   387,  1784,  2957,   224,  2738,
     302,   225,   203,   227,   365,   229,   279,  1402,  2339,   763,
     312,   224,   209,   332,  2659,  1331,   227,   835,   229,   342,
     343,   344,   752,   345,   333,  1785,  1374,   228,  2739,  1373,
    1490,   814,   315,   725,  1156,   537,  1169,  1253,   877,   228,
     962,   280,  1383,   203,   204,   128,  1671,  1131,   350,   209,
    1250,   386,   268,   209,  1476,  1897,   571,   227,  2229,  1233,
     927,   880,  2102,   203,   204,  1173,  1476,   386,  2246,   209,
     855,   383,   618,   353,   639,   658,   675,   689,   297,   704,
     856,   269,   559,   855,  2999,   130,  3000,  3001,  1134,  2685,
    1116,   571,  1258,   856,  3002,  3003,  3004,   153,  1403,   898,
    1898,   146,   914,   929,   881,   307,  2241,   412,   911,   925,
    1063,   354,  2247,  1099,  1491,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,  2299,  2230,   224,   560,   561,
    2660,   884,   591,   201,   202,   203,   204,   205,   206,   207,
     208,   209,  2182,  1782,   224,  1076,   735,   225,   226,   227,
     228,   229,   230,  2340,  3029,  1135,  2186,   885,   886,  1053,
    2740,   154,   155,   228,   386,   342,   343,   344,   762,   345,
     562,  1180,   341,   269,  2242,   203,   204,   888,  2103,   207,
     966,   209,   157,  1647,   224,   784,   498,   225,   226,   227,
     813,   229,   230,  2848,   532,  2854,  3028,   202,   203,   204,
     205,   228,   279,  1975,   209,   342,   343,   344,  3005,   345,
    2183,  1181,   955,   837,  2661,   324,   920,   935,   487,   867,
    1202,   415,  3060,  1009,  1027,  1786,  1375,  1058,  2741,  1077,
    2958,  2961,   827,  1055,  2937,   850,   388,  2341,   956,   957,
     552,  1384,  2092,   971,   488,   489,   550,  1888,  1234,  1119,
    1064,  1065,   388,  1259,  2936,   137,   324,   160,   959,  1117,
     365,  1182,  2104,  2095,   491,   879,   399,   532,   840,   387,
     353,  1372,   571,   823,   403,   404,   947,   175,  2702,  3062,
     537,  2889,  1337,  2588,   138,   191,  1129,  1032,  2187,  1205,
    1206,  1207,   193,   834,   601,   400,  1338,   198,   365,  2727,
     503,  2728,  2729,  2730,  2731,   164,  2307,  2592,   790,  1078,
    2096,  2860,  1363,  2860,   663,  1364,   132,   624,  2744,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   416,
    2995,  1673,  1674,  3091,  1645, -1452,   601,  1208,   645,   942,
    2821,  1062,  2097,   341,  2743,   895,   203,   204,  1170,   388,
     207,  2589,   209,   537,  1416,   224,  2188,   665,   225,   226,
     227,   228,   229,   230,   889,  2391,   331,   225,   138,  1668,
     916,  2732,  2733,   948,   681,  2593,   342,   343,   344,  1339,
     345,  1368,   339,   729,  1369,  2721,   343,   344,   695,  2724,
     777,   778,   779,  1039,  1417,  1675,  1422,  1484,  2094,  1086,
    1512,  1192,   970,   710,   890,  1249,  2996,  2236,   397,   332,
     756,  1237,  1238,  1239,  1866,  2696,  1867,   519,   520,   938,
     333,   521,  1040,  2974,   960,  2976,   400,  1040,   731,  1541,
    2005,  1500,  2006,  1176,  3038,   138,  3041,  2695,   166,  1792,
     477,  1827,  1908,  1410,  1418,  1895,  1031,  2323,  2304,  1495,
    2306,  1861,   235,  1362,   891,   758,  1367,  1569,  1752,  1177,
    1178,   807,  1251,  2663,   961,  1769,  1790,  2205,  1470,  1763,
    2106,  1684,   250,  1753,  1789,  1382,  2985,  1344,  2086,  1179,
    2228,  2190,  2637,  1683,  1764,  2314,  2085,  1754,  2315,  2309,
    2234,   736,  2583,  2250,  2185,  2591,   618,  1755,  1765,  2595,
    1788,  2495,  1297,  1610,  1319,  2510,   809,  2332,  1766,  2343,
    2393,  2511,  1912,  2330,   962,  2491,  1756,   639,   763,  1757,
    2507,  2368,  2396,  2635,   274,  2582,  2634,  1767,   285,  2432,
    1768,  2641,   302,  2638,  1335,   312,   658,  1341,  2034,  1939,
    1962,  1248,  1346,  1999,  1407,  1885,  1230,  3035,  1791,  1409,
    1793,   176,  1172,   675,   528,  2409,   520,   315,   529,   521,
    2679,  2680,  1446,   365,   569,   559,   570,   689,   350,   814,
    2681,   122,  1685,  2156,   123,  1686,  1231,   383,   585,   581,
     927,  1063,   704,   583,  1425,  1275,  1131,  1980,  1981,  1982,
    1983,  2998,  1240,   584,   898,   699,  1723,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,  1451,   800,   914,
     714,   560,   561,  1448,   716,   911,  1411,   571,   203,   204,
     265,   266,   207,   929,   209,  1906,   884,   224,  1907,   925,
     790,   354,   722,   297,   723,   791,   792,  2436,   125,   412,
     126,  1656,  1412,  1413,   745,  1799,   746,  1430,   177,  1574,
     735,  1689,   885,   886,   966,  1180,   749,  1685,   790,   228,
    2296,  2465,  1415,   791,   792,   532,  1980,  1981,  1982,  1983,
    1456,   586,   888, -2414,  1603,  1626,   132,   762,   773,   133,
     775,  1291,   498,  1313,  1053,  1800,   955,   134, -1772,  1518,
     135,  1547,  1576,   793,   776,  1181,  2999,   163,  3000,  3001,
    1630,   789,  1009,   802,   784,   822,  3002,  3003,  3004,   316,
     317,   318,   956,   957,   487,   826,   319,   971, -1772,  1285,
     320,  1064,  1065,   920,  1027,   532,   164,   839,   813,  2407,
    2408,  2346,   959,   790,  2347,  1801,   587,   935,   791,   792,
     488,   489,  1608,  1632,  2346,  1182,   845,  2348,  1605,  1628,
     848,   537,  1058,   415,  2346,   588,   365,  2349,  1055,  2346,
     491,   852,  2350,  2346,   178,  2346,  2397,  1716,  2401,  1738,
    1215,  1216,  1217,   179,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   862,  2346,   224,  1032,  2402,  2855,
     353,   227,  1696,   229,   165,   865,   503,  2653,   552,  2346,
    2654,  1694,  2403,   203,   550,   869,  1429,   279,   871,   203,
     204,   537,   224, -1815,   940,   209,   280,   227,   268,   229,
    3005,   874,   136,   227,  2346,  1129,   663,  2414,  1106,  1455,
    1199,  2836,  2837,  2838,  2839,  1721,   234,  1743,   249,   524,
     525,  1718,   280,  1740,  2205,   949,   273,   269,   831,   301,
     311,   978,   329,  1107,  1108,  1109,  1615,  1639,   382,   166,
     167,   168,   601,   411,   624,  2239,  1062,   645,   497,   665,
    2670,   681,   983,   695,   984,  1811,   970,   551,   169,  1139,
    1140,  1141,  1142,  1143, -1774,  1192,  1144,   729,   987,   895,
    2303,  1416,   989,  1980,  1981,  1982,  1983,  1090,   600,   623,
     710,   644,   664,   680,   694,   756,   709,  1795,   889,  1139,
    1140,  1141,  1142,  1143, -1774,  1106,  1144,  1176,  2699,   504,
     505,   506,   507,   508,   207,  2346,   916,  2156,  2415,  1091,
     730,  1417,   731,  1796,  1797,  1777,  1101,  2759,  1816,   234,
    1107,  1108,  1109,  1177,  1178,  1104,  1031,  1120,   890,  1156,
     758,  1747,   757,  1798,   249,  1647,   203,   204,  2346,   960,
   -1815,  2418,   209,  1179,  1122,   268,  2346,   509,  2795,  2607,
     227,  1160,  2346,   228,   808,  2608,  2639,  2305,   273,  2640,
    1204,  1418,  2346,   203,   204,  2677,   807,  1086,  1918,   209,
    1297,  1210,   268,  1912,   269,   736,  1939,   227,   891,   961,
    1252,  2323,  2642,  2646,  2646,  2651,   301,  1168,  1422, -1817,
    1945,   985,  1319,   763,  1211,  2346,   311,  2855,  2690,  1212,
    2346,   269,  2668,  2694,  1213,  1769,  1245,  1752,  1106,  1763,
    1698,   809,  1277,   329,  1512,  2407,  2436,  2346,  2888,   532,
    2701,  1214,  1753,   618,  1764,  1243,   639,  1244,   658,   962,
     675,  1923,   689,  1107,  1108,  1109,  1754,  2629,  1765,  2630,
    1076,   904,   905,  1610,  1966,  2465,  1755,  1541,  1766,  1569,
     365,  1842,  1843,  1950,  1247,  1844,  1845,   382,   228,   704,
    2346,  1253,  2529,  2710,  2560,  1756,  2346,  1767,  1757,  2823,
    1768,   290,   291,  2346,   814,   341,  2824,  1815,   203,   204,
    1446,  1279,   207,  2639,   209,   897,  2868,   224,   913,   928,
     225,  1281,   227,   411,   229,  1139,  1140,  1141,  1142,  1143,
    1748,  1425,  1144,  2346,   927,   537,  2886,  1332,   342,   343,
     344,  1282,   345,  1333,  1656,  1336,   269,  2346,   898,  2346,
    2897,  2047,  2930,  2071,  1077,  1451,  1342,  2042,   836,  2066,
    1343,  1448,   228,  1411,   735,  1345, -1817,   569,   559,   570,
    1131,  2939,  2940,  2941,  2942,   914,  1347,   929,  1366,  1291,
     884,   911,   762,   925,  1723,   365,  2759,  1371,  2933,  1412,
    1413,  2934,  2346, -1817,  1430,  2938,   965,  3018,  1377,   966,
    3019,  1313,   497,  1378,   203,   204,   885,   886,   784,  1415,
     209,  1379,  2129,  2346,   560,   561,  3045,  1381,  1456,   297,
    1922,  1518,  2795,  1496,  1497,  1498,   888,  1846,   532,  3075,
    1386,   955,  3076,   790,  1078,  1574,  1847,  1848,  1849,  1008,
    1026,  2162,  1949,  1057,  1603,   207,   307,  1850,  1851,  1852,
    1547,  1400,  3077,  1401,  1118,  3078,   551,   956,   957,   365,
    1406,  2346,   971,   813,  3079,   946,   155,  1626,  1408,   569,
     559,   570,   569,   559,   570,  2134,   387,   959,  1576,  1485,
     525,   203,   204,  1053,  1799,   207,  1439,   209,  1468,   920,
     224,   935,  1630,   225,   226,   227,  1009,   229,   230,  1027,
    1441,  1106,  1128,  2210,  2167,  1469,  1180,  1590,  1591,  2207,
     600,   228,  1608,   266,   537,  1486,   560,   561,  1605,   560,
     561,  1902,  1903,  1904,  1800,  2867,  1107,  1108,  1109,   571,
    2039,  2436,  2063,   623,  2465,  1632,  1858, -2356,  1330,  2012,
    2013,  1628,  2014,  2015,  2016,  2017,  1181,  2028,  2029,  2688,
    2689,  1058,   600,  1429,   644,  1716,  2301,  1055,  2859,  2864,
    1487,  1700,  1032,   121,   122,  1697,  2215,   123,  1493,   124,
    1828,   207,  1494,   664,  1801,  1584,  2302,  1455,  1587,  1738,
     504,   505,   506,   507,   508,  2759,  2300,  1702,  2795,  1642,
     680,  1665,  2308,  1666,  1667,  1678,  1182,  1679,  1680,   203,
     204,  1681,  1682,   207,   694,   209,  1688,  1771,   224,  1129,
    1829,   225,   226,   227,   228,   229,   230,  1191,  1824,   709,
    1830,   970,  1832,  1721,  1833,  1857,  1615,  2529,   509,  1718,
    1859,   125,  1860,   126,  2133,  1862,  1139,  1140,  1141,  1142,
    1143,  1748,  1863,  1144,   730,   203,   204,  1743,  1864,  1639,
    1865,   209,  1883,  1740,   268,  1868, -2441, -1543,  2560,   227,
    1890,  1891,  2319,  2166,  1892,  1062,  1893,  1896,   234,  1894,
     951,   757,   202,   203,   204,   205,  1901,   207,  1965,   209,
    1970,  1977,   224,   269,  1979,   225,  1988,   227,   249,   229,
    2000,  2001,   992,   201,   202,   203,   204,   205,   206,   207,
     208,   209,  2008,   342,   343,   344,  2004,   345,  2009,  2011,
     228,   771,  2024,  1416,  1811,   905,  2025,  2026,  1296,  2191,
    1318,  1031,   808,  2107,  2108,  2214,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,  1192,  2111,  2193,  2232,
     273,  2233,  2235,   569,   559,   570,  1795,  2238,   301,  2244,
    2252,   311,  2251,  1417,  2255,   225,  2642,   329,  2253,  2646,
    2254,  1747,  1139,  1140,  1141,  1142,  1143,  1748,  1176,  1144,
    2325,  2326,  1796,  1797,   343,   344,   532,  1816,   777,   778,
     779,   361,   362,   363,   364,  2327,   366,  2328,  2321,  2329,
     560,   561,  1798,   382,  1177,  1178,   571,   481,   482,   483,
    1424,  2331,  2333,  1418,  2334,  2335,   364,   365,  2336,  2352,
     897,  2345,  2351,  2358,  1179,  2360,  2361,   202,   203,   204,
     205,  1918,   279,  1450,   209,   913,  2362,   224,  2363,   751,
     537,  2367,   227,  2013,   229,  2014,  2015,  2016,  2017,   928,
     533,  2364,   535,  2365,  2366,  1297,  2373,  2375,  1945,  2283,
    2284,  2285,  2286,  2287,  2288,   411,  2379,   280,  2385,   536,
    2386,  2398,   537,  3036,  2387,  3039,  2399,  2389,  2400,  2424,
     965,  1319,  2404,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,  2529,  1923,   224,  2405,  2417,   225,   226,
     227,   228,   229,   230,   403,   404,  1610,  2423,   497,  2975,
     203,   204,  2426,  2032,   207,  1517,   209,  1546,  1575,   224,
    2412,  1950,  2420,  2425,   269,   297,  1585,  2429,  1008,  2560,
    1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  2431,  3080,
    3081,  1871,  1872,  1873,  1874,  1875,  1815,  2492,  2493,  1591,
    1026,  2494,  2497,  1425,  2498,  2499,  2444,  2504,  2047,  1446,
     724,  2500,  2439,  2584,  2042,  2596,  2502,  2503,  1607,  1631,
    2512,  3100,  1014,  3101,  2513,   203,   204,  2515,  1057,   207,
    2473,   209,  2071,  2514,   224,  1411,  2468,   225,  2066,   227,
     228,   229,  2516,  2517,  1723,  2585,  2597,  2598,  2599,  2601,
    1264,  1265,  2603,  2602,  1451,   342,   343,   344,  2609,   345,
    1448,  1412,  1413,  2610,  2611,  2612,  1430,  1349,  1350,  2449,
    2613,  1351,  1352,  2614,   551,  1387,  1388,  2615,  1799,  1389,
    1390,  1415,  2616,  2617,  1291,   571,  2618,  2704,  2632,   784,
    2626,  2633,  2129,  2478,  2636,  1839,  1840,  1841,  2664,  1466,
    2683,  1128,  2665,  1922,  1842,  1843,   532,  1574,  1844,  1845,
    1313,  1720,  2666,  1742,  2687,  1518,  2697,  1456,  1800,  2691,
    1227,   202,   203,   204,   205,  2162,   279,  1603,   209,  1626,
    1949,   569,   559,   570,  2705,  2711,   364,   365,   600,  2714,
     623,  2346,  2726,   644,  2718,   664,  2822,   680,  1547,   694,
    1576,  1810,  2825,  2826,  1630,  2134,  1106,  2827,  2828,  2829,
    2842,  1191,  2831,  2537,  2843,  2568,  1934,  2869,  1801,  2532,
     533,  2563,   535,  2844,  2210,  2639,   709,  2870,   560,   561,
    2207,  1107,  1108,  1109,  2872,  2871,  2873,  2039,  2167,   536,
    2877,  2874,   537,  2875,  2890,  1608,  2876,  1632,   403,   404,
    2880,  1605,  2881,  1628,  2882,  1266,  1267,  1268,   730,  2883,
    2887,  2063,  2893,  1353,  2895,  1716,  1269,  1270,  1271,  1738,
    2925,  1391,  1354,  1355,  1356,  1429,   757,  2926,  2448,  2927,
    1392,  1393,  1394,  1357,  1358,  1359,  2931,  2215,  2963,  2948,
    2945,  1395,  1396,  1397,  2951,  2628,  1588,  2964,  2949,  2950,
    1846,  2967,  2477,  2982,  2627,  2969,  2970,  2971,  2977,  1847,
    1848,  1849,  2631,  2978,  1917,  2984,  1296,  2979,  2980,  2992,
    1850,  1851,  1852,  2981,  2993,  3016,  1455,  3085,  3086,  3087,
    3088,  3089,  3090,  1721,  2994,  3021,  1944,  1743,  1318,  1718,
    3023,  3024,  3031,  1740,  3032,  1989,  1990,  1991,  1992,  1993,
    1994,  1995,  1996,  3034,  3043,  3105,  3044,   808,  1811,  1615,
    3049,  1639,   265,  3051,  2133,   591,   201,   202,   203,   204,
     205,   206,   207,   208,   209,  3052,   341,   224,  3053,   203,
     225,   226,   227,   207,   229,   230,  3054,  3055,   224,  3056,
    1795,   225,  3057,   227,  3058,   229,  3059,  2166,   342,   343,
     344,  3064,   345,  3066,  3067,  3083,   269,  3092,  3093,   342,
     343,   344,  1918,   345,  3094,  1945,  1796,  1797,  3102,  3103,
    3107,  1816,  3128,   591,   201,   202,   203,   204,   205,   206,
     207,   208,   209,  3106,  3129,   224,  1798,  3130,   225,   226,
     227,  3131,   229,   230,  3134,  3135,  2214,  1424,  3137,  3139,
    3140,  1747,  3142,  3141,  3145,  2444,   342,   343,   344,  3144,
     345,  2439,  3147,  1882,   897,  3149,  1884,  2046,  3151,  2070,
    3152,  1450,  3154,  3155,  2652,  1923,  2983,  2906,  1950,  2684,
     429,  2047,   430,   431,  2473,  1997,   432,  2042,   433,   434,
    2468,   913,   435,   928,   202,   203,   204,   205,   436,   279,
    2390,   209,   437,  2295,   268,  1687,   438,   566,  2298,   227,
    2071,   567,  2713,   568,  3065,   965,  2066,  3132,  2449,  3022,
    1139,  1140,  1141,  1142,  1143, -1774,  2129,  1144,  2128,  2162,
    3096,  2841,  2847,   269,  2973,   439,   440,  1517,   441,  2767,
     442,   443,   444,   445,   446,  2762,   447,  2478,  2537,   448,
     449,   450,   451,   452,  2532,   453,   454,  2161,   360,  2908,
     202,   203,   204,   205,  2910,   458,  1546,   209,  2911,  2914,
    2803,   403,   404,   461,  2915,   462,  2798,   463,   464,  2568,
    1815,   465,   466,   467,   468,  2563,   469,   470,  2917,  2134,
    2918,  2920,  2167,  2921,  1575,  2922,  2924,  1987,  2394,  1978,
    2892,  2210,  2772,  3136,   844,  2010,  1165,  2207,  1348,  2374,
    2678,  2866,  1008,     0,     0,  1026,   236,  2383,   251,  2209,
    2022,     0,     0,     0,     0,  2027,   275,     0,  1607,   303,
     313,     0,     0,  2808,  1922,     0,     0,  1949,   384,     0,
       0,     0,     0,   413,     0,     0,     0,     0,   499,     0,
       0,  1631,  1839,  1840,  1841,     0,  1161,   553,     0,     0,
    2039,  1842,  1843,     0,  2215,  1844,  1845,  1057,     0,   361,
     362,   363,   364,   365,   366,   367,   368,  2448,   602,   625,
       0,   646,   666,   682,   696,     0,   711,  2087,  2088,  2063,
    2283,  2284,  2285,  2286,  2287,  2288,  2904,     0,  2907,  2909,
    2912,  2913,  2916,  2919,  2923,     0,  2477,     0,     0,     0,
     732,     0,  2109,  2110,   203,   204,  1464,     0,   207,   236,
     209,     0,     0,   224,     0,  1128,   225,   226,   227,   228,
     229,   230,   759,     0,   251,     0,     0,     0,     0,  1720,
    2444,     0,     0,  2473,     0,     0,  2439,     0,  2133,  2468,
       0,  2166,     0,     0,   810,     0,     0,     0,   275,     0,
       0,  2771,     0,  1742,   341,     0,   202,   203,   204,   205,
       0,   207,     0,   209,     0,     0,   224,     0,  2767,   225,
       0,   227,   876,   229,  2762,     0,   303,     0,     0,     0,
       0,     0,  2807,     0,     0,     0,   313,   342,   343,   344,
       0,   345,     0,  2449,  2537,   269,  2478,  2856,     0,     0,
    2532,     0,     0,     0,  2803,     0,  1847,  1848,  1849,     0,
    2798,     0,     0,  2214,     0,     0,     0,  1850,  1851,  1852,
    1810,  2267,  2268,  2269,  2270,  2271,  2272,  2273,  2274,     0,
    2568,  2772,     0,   403,   404,     0,  2563,     0,     0,  1842,
    1843,     0,  1191,  1844,  1845,     0,     0,   384,     0,     0,
       0,     0,     0,  1794,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   224,     0,  2808,   225,     0,
     227,   228,   229,     0,     0,   899,     0,     0,   915,   930,
       0,     0,     0,   413,     0,     0,   342,   343,   344,     0,
     345,  3121,  3122,  3123,  3124,  3125,  3126,  2297,  2619,  2620,
    2282,  2283,  2284,  2285,  2286,  2287,  2288,  1175,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,   224,
       0,     0,     0,     0,   227,   228,     0,  1917,     0,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,   224,     0,     0,   225,   226,   227,   228,   229,   230,
       0,  1296,  2448,     0,  1944,  2477,   967,     0,     0,     0,
       0,  2275,   499,     0,   361,   362,   363,  2767,     0,   366,
    2803,     0,     0,  2762,     0,     0,  2798,  1318,  2083,     0,
     481,   482,   483,     0,     0,  1846,     0,     0,     0,     0,
    2771,     0,     0,     0,  1847,  1848,  1849,     0,     0,  1010,
    1028,     0,     0,  1059,     0,  1850,  1851,  1852,  2258,  2259,
    2260,  2261,  2262,  2263,  2264,     0,   553,     0,   361,   362,
     363,     0,     0,   366,     0,     0,  2807,     0,     0,     0,
    2772,     0,     0,  2808,   481,   482,   483,     0,   992,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,  1424,
     224,     0,  2443,     0,  2046,   227,   228,   229,   202,   203,
     204,   205,  1130,   279,     0,   209,     0,     0,   224,     0,
     602,     0,     0,   227,     0,   229,  2472,     0,  2070,     0,
     280,     0,     0,     0,     0,     0,  2337,     0,     0,     0,
       0,     0,     0,   625,     0,     0,     0,     0,   280,     0,
    1450,   360,     0,   202,   203,   204,   205,   239,     0,   254,
     209,     0,   602,     0,   646,     0,     0,   277,   287,     0,
       0,     0,   532,     0,     0,     0,     0,     0,   357,     0,
       0,     0,     0,   666,     0,   403,   404,     0,  2128,   501,
    1825,     0,   480,     0,   202,   203,   204,   205,     0,   207,
     682,   209,   364,   365,   224,     0,     0,     0,     0,   227,
       0,  1517,  1163,     0,   696,     0,     0,     0,     0,     0,
     628,  2161,   649,   668,     0,     0,     0,  1193,     0,   711,
       0,     0,     0,     0,     0,     0,   533,     0,   535,  2771,
       0,     0,  2807,     0,  1546,     0,  1575,  2411,     0,     0,
       0,   739,     0,     0,   732,   536,     0,     0,   537,  2536,
     239,  2567,   361,   362,   363,   364,   365,   366,   367,   368,
    2209,     0,     0,   766,     0,   254,     0,     0,   236,     0,
     480,   759,   202,   203,   204,   205,     0,   279,     0,   209,
       0,  1607,   224,  1631,     0,   817,     0,   227,   251,   277,
       0,     0,     0,   361,   362,   363,   364,     0,   366,     0,
     287,     0,  2179,     0,     0,     0,     0,     0,     0,   481,
     482,   483,     0,     0,     0,     0,     0,     0,  1298,     0,
    1320,     0,   810,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,   224,
     275,     0,   225,   226,   227,     0,   229,   230,   303,     0,
       0,   313,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   357,     0,   224,   269,  1720,
     225,   226,   227,  1742,   229,   230,     0,     0,  1839,  1840,
    1841,   361,   362,   363,   364,     0,   366,  1842,  1843,     0,
       0,  1844,  1845,   384,  1810,     0,     0,   481,   482,   483,
    1426,  2619,  2620,  2282,  2283,  2284,  2285,  2286,  2287,  2288,
     899,     0,     0,     0,     0,  1437,   901,     0,     0,   917,
     932,     0,     0,  1452,     0,   915,     0,     0,  2899,     2,
       0,  2900,  2901,     6,     7,     8,     9,    10,    11,   930,
      13,     0,     0,     0,     0,    15,     0,     0,  1917,     0,
       0,  1944,     0,     0,  2621,   413,    16,    17,  2849,  2850,
    2282,  2283,  2284,  2285,  2286,  2287,  2288,     0,     0,     0,
     967,     0,   531,     0,   202,   203,   204,   205,     0, -1838,
       0,   209,     0,     0,   268,     0,     0,     0,     0,   227,
     228,  2443,     0,     0,   981,     0,     0,   974,   499,   202,
     203,   204,   205,   501,   279,  1519,   209,  1548,  1577,   268,
       0,  2851,     0,   269,   227,   203,   204,  2046,  1010,   207,
    2472,   209,     0,     0,   224,  2902,     0,   225,   226,   227,
       0,   229,   230,  2861,     0,     0,     0,     0,   269,     0,
    1028,  1035,  1847,  1848,  1849,     0,  2070,     0,     0,     0,
       0,   403,   404,  1850,  1851,  1852,   532,     0,  1609,  1633,
    1960,     0,  2128,     0,     0,  2161,     0,     0,  1059,     0,
       0,     0,     0,     0,     0,  2766,   403,   404,     0,     0,
       0,     0,     0,     0,  2536,     0,   364,   365,  1166,     0,
       0,     0,  1014,  2667,   202,   203,   204,   205,     0,   207,
       0,   209,     0,  1132,   224,     0,  2802,   225,     0,   227,
     228,   229,     0,     0,   553,  2567,     0,     0,     0,     0,
     533,     0,   535,     0,     0,   342,   343,   344,     0,   345,
       0,     0,     0,   269,   628,     0,     0,  2209,     0,   536,
       0,  1130,   537,     0,     0,  1842,  1843,     0,     0,  1844,
    1845,  1722,     0,  1744,     0,   649,     0,     0,     0,     0,
       0,     0,  2706,     0,     0,     0,     0,     0,  2709,     0,
       0,   403,   404,     0,   668, -1840,   532,     0,   602,     0,
     625,     0,     0,   646,     0,   666,     0,   682,     0,   696,
       0,  1812,     0,     0,   531,     0,  2312,   203,   204,     0,
       0,  1193,     0,   209,     0,     0,   364,   365,     0,     0,
       0,     0,   228,     0,     0,     0,   711,     0,  1195,  2112,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,   224,     0,     0,   225,   226,   227,   228,   229,   230,
     533,     0,   535,     0,     0,   739,     0,     0,   732,     0,
    2737,     0,   342,   343,   344,     0,   345,     0,     0,   536,
     269,     0,   537,     0,     0,     0,   759,     0,     0,   239,
       0,     0,   766,     0,   404,     0,  2443,     0,   532,  2472,
    1869,  1870,  1871,  1872,  1873,  1874,  1875,     0,     0,   254,
    1876,  2856,     0,     0,     0,     0,     0,     0,   403,   404,
    1847,  1848,  1849,   532,  1919,     0,  1298,     0,   364,   365,
       0,  1850,  1851,  1852,  2766,     0,  2580,     0,     0,  1301,
       0,  1323,     0,   817,     0,     0,  1946,     0,  1320,     0,
       0,     0,     0,   364,   365,     0,     0,     0,     0,     0,
    2536,   277,   533,   534,   535,   287,     0,   810,     0,     0,
    2802,     0,     0,  2834,     0,     0,     0,     0,     0,     0,
       0,   536,     0,     0,   537,     0,     0,   533,     0,   535,
       0,     0,     0,     0,     0,   951,  2567,   202,   203,   204,
     205,     0,   207,     0,   209,   357,   536,   224,     0,   537,
     225,     0,   227,     0,   229,     0,     0,     0,     0,     0,
       0,  1433,     0,     0,     0,  2878,  2879,     0,   342,   343,
     344,   901,   345,     0,     0,     0,     0,     0,  1097,     0,
       0,     0,     0,     0,  1459,     0,   917,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,  1426,     0,   224,
     932,     0,     0,  2956,   227,     0,   229,     0,     0,  2898,
       0,     0,     0,     0,   899,     0,     0,  2048,     0,  2072,
       0,  1452,     0,     0,     0,     0,     0,     0,     0,   280,
       0,   974,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,
    2288,   915,     0,   930,  2946,  2947,   361,   362,   363,   364,
       0,   366,     0,     0,  2952,  2953,  2954,  2955,     0,   501,
       0,     0,   481,   482,   483,   967,  1522,     0,  1551,  1579,
       0,  2289,     0,  2766,     0,     0,  2802,   341,  2130,     0,
     203,   204,   490,     0,   207,     0,   209,  1519,     0,   224,
       0,   541,   225,     0,   227,     0,   229,     0,     0,     0,
       0,  1035,     0,     0,     0,     0,     0,  2163,     0,     0,
     342,   343,   344,     0,   345,     0,  1548,     0,   269,  1611,
    1635,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,     0,   224,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,  1577,     0,   224,     0,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,  1488,
       0,     0,  1010,     0,     0,  1028,     0,     0,     0,  2211,
       0,     0,     0,     0,     0,   269,     0,     0,  1609,     0,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,  2990,  2991,   225,   226,   227,   228,   229,
     230,  1633,  1132,     0,     0,     0,     0,     0,  1835,  1836,
    1837,  1838,  1724,   403,   404,     0,     0,  1059,   532,     0,
       0,   269,     0,     0,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,   628,   228,     0,   649,     0,   668,     0,   364,   365,
       0,     0,  1819,     0,     0,     0,     0,     0,     0,   403,
     404,     0,  1195,     0,     0,     0,     0,     0,     0,     0,
       0,  3030,     0,     0,  3033,  1130,     0,     0,     0,     0,
       0,     0,   533,     0,   535,     0,     0,     0,     0,  1722,
       0,     0,     0,     0,     0,     0,  3046,  3047,  3048,     0,
       0,   536,     0,     0,   537,     0,     0,     0,   532,   739,
       0,     0,     0,  1744,     0,     0,     0,     0,     0,   887,
       0,     0,     0,     0,     0,     0,     0,   766,     0,     0,
    1963,     0,     0,  3069,  3070,  3071,  3072,     0,   364,   365,
    1971,  1972,     0,  1973,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,   224,     0,  2783,   225,
     226,   227,   228,   229,   230,  1926,     0,  1301,     0,     0,
       0,     0,   533,     0,   535,  2002,  2003,     0,     0,  2007,
    1812,     0,  3098,  3099,     0,   269,     0,  1953,     0,  1323,
       0,   536,     0,     0,   537,     0,     0,     0,     0,     0,
     958,     0,  1193,     0,  2460,     0,   490,     0,   817,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
    2112,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,     0,     0,   225,   226,   227,   228,   229,
     230,     0,     0,   993,  1015,     0,     0,  1043,     0,     0,
       0,     0,     0,   342,   343,   344,     0,   345,     0,     0,
     541,   269,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     0,     0,   224,     0,
       0,   225,   226,   227,   228,   229,   230,  1919,  2849,  2850,
    2282,  2283,  2284,  2285,  2286,  2287,  2288,     0,  1433,   403,
     404,     0,     0,     0,   532,     0,     0,   269,     0,     0,
       0,  1298,     0,     0,  1946,   901,     0,     0,  2051,     0,
    2075,   341,  1459,   202,   203,   204,   205,     0,   207,     0,
     209,     0,     0,   224,   364,   365,   225,  1320,   227,     0,
     229,     0,   917,     0,   932,   403,   404,     0,     0,     0,
       0,     0,     0,     0,   342,   343,   344,     0,   345,     0,
       0,     0,   269,     0,     0,   244,   974,   258,   533,     0,
     535,     0,     0,     0,     0,     0,     0,     0,   306,  2137,
       0,     0,     0,     0,     0,     0,   359,   536,  1522,     0,
     537,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     403,   404,     0,     0,     0,     0,     0,     0,  2170,  1426,
       0,     0,  2445,     0,  2048,     0,     0,  1551,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   614,   634,     0,
     654,   671,   685,   698,     0,   713,  2474,     0,  2072,     0,
       0,     0,     0,     0,  2959,  1579,  3108,  3109,  3110,  3111,
    3112,  3113,  3114,  3115,  3116,  3117,  3118,  3119,     0,   744,
    1452,     0,     0,     0,     0,     0,  1035,     0,   244,     0,
    2218,     0,     0,     0,     0,     0,  2256,  2257,     0,  1611,
       0,   770,     0,   258,     0,     0,     0,     0,     0,     0,
    2489,     0,     0,     0,     0,     0,     0,     0,  2130,     0,
       0,     0,  1635,   820,     0,     0,     0,     0,  2112,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,  1519,     0,   225,   226,   227,   228,   229,   230,     0,
       0,  2163,     0,     0,     0,   306,     0,     0,     0,     0,
       0,   342,   343,   344,     0,   345,   531,     0,   202,   203,
     204,   205,     0,   279,  1548,   209,  1577,     0,   224,     0,
       0,     0,     0,   227,   228,   229,     0,     0,     0,  2538,
       0,  2569,     0,     0,     0,     0,  1132,     0,     0,     0,
    2211,     0,     0,   359,     0,     0,     0,     0,   280,     0,
    1724,     0,   532,     0,     0,     0,     0,     0,     0,     0,
       0,  1609,     0,  1633,  1414,     0,   531,     0,   202,   203,
     204,   205,     0,   279,   887,   209,     0,     0,     0,     0,
       0,     0,   364,   365,   228,   403,   404,     0,     0,     0,
     532,     0,     0,     0,   903,  2112,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,     0,   224,     0,     0,
     225,   226,   227,   228,   229,   230,   533,     0,   535,     0,
     364,   365,     0,     0,     0,     0,  2359,     0,   342,   343,
     344,     0,   345,     0,   958,   536,     0,     0,   537,     0,
       0,  1819,     0,     0,     0,   403,   404,     0,     0,  1722,
     532,     0,  2382,  1744,   533,     0,   535,     0,     0,  2388,
       0,     0,   490,  1195,     0,     0,     0,     0,     0,  1502,
       0,  1531,  1559,   536,  1812,   977,   537,     0,     0,   532,
     364,   365,   993,     0,     0,     0,     0,     0,     0,     0,
     531,     0,  2505,   203,   204,     0,     0,     0,     0,   209,
       0,     0,     0,     0,  1015,     0,     0,     0,   228,   364,
     365,     0,     0,     0,   533,     0,   535,     0,  1013,  1038,
       0,     0,  1593,  1616,     0,     0,     0,     0,  1919,     0,
    2226,  1946,  1043,   536,     0,  2406,   537,     0,     0,     0,
       0,     0,     0,   533,     0,   535,     0,   417,  1926,   418,
       0,   419,     6,     0,   420,     9,   421,     0,    12,     0,
       0,     0,   536,     0,    15,   537,     0,     0,     0,  2421,
     404,  2445,  1301,     0,   532,  1953,    17,    18,   541,     0,
       0,     0,     0,     0,  2428,     0,    19,     0,     0,   614,
    1640,     0,     0,     0,     0,     0,     0,  2048,  1323,     0,
    2474,     0,     0,     0,   364,   365,     0,     0,     0,     0,
       0,     0,   634,     0,     0,  1704,   422,  1728,    21,  2508,
       0,     0,     0,     0,     0,     0,  2072,     0,     0,     0,
       0,   614,     0,   654,     0,     0,     0,     0,   533,   534,
     535,     0,  2130,     0,   423,  2163,     0,     0,     0,     0,
       0,     0,   671,     0,     0,  2768,     0,   536,     0,     0,
     537,     0,     0,     0,  2538,     0,     0,     0,     0,   685,
    1433,     0,     0,  2452,     0,  2051,     0,     0,     0,     0,
       0,     0,     0,   698,     0,     0,  2804,     0,     0,     0,
       0,     0,    25,     0,     0,  2569,  1198,  2481,   713,  2075,
       0,     0,     0,     0,     0,     0,     0,   480,   424,   202,
     203,   204,   205,     0,   279,     0,   209,  2211,     0,   224,
       0,  1459,     0,   744,   227,   531,     0,   202,   203,   204,
     205,     0, -1838,     0,   209,     0,     0,   268,     0,     0,
       0,     0,   227,   228,     0,     0,     0,   244,     0,     0,
     770,     0,    32,     0,     0,     0,     0,    33,     0,  2137,
       0,     0,     0,     0,     0,     0,   269,   258,     0,   992,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,   224,  1522,     0,   225,   226,   227,   228,   229,   230,
    2586,  2587,  2170,     0,     0,     0,     0,  1308,     0,  1329,
       0,   820,     0,     0,   403,   404,     0,     0,     0,   532,
     269,     0,     0,  2606,     0,  1551,     0,  1579,   361,   362,
     363,   364,     0,   366,     0,     0,     0,   306,     0,     0,
    2541,     0,  2572,     0,   481,   482,   483,     0,     0,   364,
     365,  2218,     0,   240,     0,   255,     0,     0,   403,   404,
       0,     0,     0,   532,     0,     0,  2445,     0,     0,  2474,
       0,     0,  1611,   359,  1635,     0,     0,     0,     0,     0,
       0,     0,     0,   533,     0,   535,     0,     0,     0,  1436,
       0,     0,     0,   364,   365,     0,     0,     0,     0,   903,
       0,     0,   536,     0,  2768,   537,     0,     0,     0,     0,
       0,  1414,  1463,     0,     0,     0,   629,     0,   650,  2669,
       0,  2671,  2672,  2673,  2674,  2675,     0,   533,   887,   535,
    2538,     0,     0,     0,     0,     0,     0,     0, -1840,     0,
    2804,     0,     0,     0,     0,     0,   536,   740,     0,   537,
       0,     0,     0,     0,     0,  2693,   240,     0,     0,   977,
    1724,     0,     0,     0,     0,     0,  2569,  2698,     0,   767,
       0,   255,     0,     0,     0,     0,     0,     0,     0,   958,
       0,     0,     0,     0,  2707,  1819,     0,     0,     0,     0,
       0,  2712,  2113,     0,  1529,  2717,  1558,  1583,     0,     0,
       0,  1502,     0,  2819,     0,     0,     0,  1013,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,  2146,     0,   225,   226,   227,   228,   229,   230,  1038,
    1531,     0,     0,     0,     0,     0,     0,     0,     0,  1926,
       0,     0,  1953,     0,     0,     0,     0,     0,   992,   201,
     202,   203,   204,   205,   206,   207,   208,   209,  1559,     0,
     224,     0,  2725,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,     0,     0,     0,   993,     0,     0,  1015,
       0,     0,  2452,  2195,     0,     0,     0,     0,     0,   269,
       0,     0,  1593,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2768,     0,     0,  2804,     0,  2051,     0,
       0,  2481,     0,     0,     0,  1616,     0,     0,     0,     0,
     531,     0,   202,   203,   204,   205,     0,   279,     0,   209,
       0,  1043,   532,     0,     0,     0,     0,  2075,   228,     0,
       0,     0,     0,  1759,  1770,     0,     0,     0,     0,     0,
       0,     0,     0,  2137,     0,     0,  2170,     0,     0,     0,
       0,     0,   364,   365,     0,     0,  2775,   614,     0,   634,
       0,  2833,   654,  2835,   671,  2541,   685,     0,   698,     0,
    1823,     0,     0,     0,     0,     0,  2846,     0,     0,     0,
    1198,     0,     0,     0,     0,     0,   533,  2811,   535,   403,
     404,     0,     0,  1704,   532,   713,  2572,     0,     0,     0,
       0,     0,     0,     0,     0,   536,     0,     0,   537,     0,
       0,     0,     0,     0,     0,     0,     0,  1728,  2218,     0,
       0,   237,     0,   252,   364,   365,     0,   744,     0,     0,
       0,     0,   286,     0,   304,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,   770,     0,     0,     0,     0,
    2896,     0,   531,   500,   202,   203,   204,   205,   533,   279,
     535,   209,  2144,     0,   268,     0,     0,     0,     0,   227,
     228,     0,     0,     0,     0,     0,  2935,   536,     0,     0,
     537,     0,     0,  1933,   626,  1308,   647,   667,   683,     0,
       0,     0,     0,   269,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,  1959,   224,  1329,     0,   225,
     226,   227,   228,   229,   230,   733,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   820,     0,     0,     0,
     629,   403,   404,     0,  2316,   269,   532,   760,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   650,     0,     0,     0,     0,     0,  2452,     0,   811,
    2481,     0,     0,     0,     0,     0,   364,   365,     0,     0,
       0,     0,     0,     0,   286,     0,     0,   341,   532,     0,
     203,   204,     0,     0,   207,     0,   209,     0,  2966,   224,
    2968,   304,   225,   226,   227,  2775,   229,   230,     0,     0,
     533,     0,   535,  2972,     0,     0,     0,     0,   364,   365,
     342,   343,   344,     0,   345,     0,  1436,     0,     0,   536,
       0,  2541,   537,     0,     0,     0,   242,     0,   256,     0,
       0,  2811,     0,   903,     0,  2986,  2058,   288,  2082,   351,
    1463,   740,   533,     0,   535,     0,     0,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2572,     0,     0,
       0,   536,     0,     0,   537,   240,     0,     0,   767,     0,
       0,     0,     0,     0,     0,     0,  2224,     0,     0,     0,
       0,     0,     0,     0,   977,   255,     0,     0,     0,   631,
     900,   651,   669,     0,   931,     0,     0,  2143,     0,     0,
       0,     0,     0,     0,     0,     0,  1529,   531,     0,   202,
     203,   204,   205,  1414,     0,  1302,   209,  1324,  2177,   268,
     742,     0,     0,     0,   227,   228,  2176,     0,     0,   242,
       0,     0,     0,     0,     0,  1558,     0,     0,     0,  3042,
       0,     0,   768,     0,   256,     0,     0,     0,   269,     0,
     992,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,  1583,   818,     0,     0,   227,   228,   229,
       0,   968,     0,     0,     0,     0,     0,   500,     0,   288,
       0,  1013,     0,     0,  1038,     0,   403,   404,  2223,     0,
       0,   532,   280,     0,  2775,     0,     0,  2811,     0,     0,
       0,   531,  2113,   202,   203,   204,   205,     0,   279,     0,
     209,     0,     0,   224,     0,  1029,     0,     0,   227,   228,
     229,   364,   365,     0,     0,  1502,     0,     0,     0,     0,
       0,     0,     0,   341,   532,  2146,   203,   204,     0,     0,
     207,     0,   209,   280,   358,   224,     0,     0,   225,   226,
     227,   228,   229,   230,     0,   533,     0,   535,  1531,     0,
    1559,     0,     0,     0,   364,   365,   342,   343,   344,     0,
     345,     0,     0,  2519,   536,  2550,     0,   537,     0,     0,
     403,   404,     0,     0,  2195,   532,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,   933,
     535,     0,  1523,     0,  1552,  1593,     0,  1616,   626,     0,
   -1840,     0,     0,     0,     0,   364,   365,   536,     0,     0,
     537,     0,     0,     0,     0,     0,     0,     0,     0,   647,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1759,     0,   667,   533,
       0,   535,     0,     0,     0,     0,     0,  1770,     0,     0,
       0,     0,     0,     0,     0,   683,     0,     0,   536,     0,
    1014,   537,     0,   203,   204,     0,   975,   207,     0,   209,
       0,     0,   224,     0,     0,   225,     0,   227,   228,   229,
       0,     0,  1194,  1704,     0,     0,     0,  1728,     0,  1823,
       0,     0,     0,   342,   343,   344,     0,   345,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
    1037,  1198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   591,   201,   202,   203,   204,   205,   206,   207,
     208,   209,     0,   237,   224,     0,   760,   225,   226,   227,
     228,   229,   230,     0,   532,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,   342,   343,   344,     0,   345,
       0,     0,     0,   269,     0,     0,     0,   629,     0,     0,
     650,     0,     0,     0,   364,   365,     0,     0,     0,     0,
       0,     0,     0,  1299,     0,  1321,     0,   811,     0,     0,
       0,     0,     0,     0,     0,     0,  1933,     0,     0,     0,
       0,   403,   404,   631,     0,     0,     0,     0,   533,   286,
     535,     0,     0,   304,     0,     0,     0,     0,     0,     0,
    1308,     0,     0,  1959,   651,     0,     0,   536,     0,     0,
     537,     0,     0,     0,     0,   740,     0,     0,     0,     0,
       0,     0,     0,   669,     0,     0,  1329,     0,     0,   351,
       0,     0,   531,   767,   202,   203,   204,   205,     0,   279,
       0,   209,     0,     0,   355,  1427,     0,     0,     0,   356,
     228,     0,     0,     0,     0,   900,  2113,     0,     0,  2146,
       0,     0,     0,     0,     0,     0,     0,     0,  1453,  2749,
       0,  1927,     0,  1302,     0,     0,     0,     0,  2519,     0,
       0,     0,     0,     0,   931,     0,     0,     0,     0,     0,
       0,     0,     0,  1954,   742,  1324,     0,     0,  1436,     0,
    2785,  2459,     0,  2058,     0,     0,     0,     0,     0,  2550,
       0,   403,   404,     0,     0,   968,   532,   737,   242,     0,
       0,   768,   738,     0,     0,  2488,  2719,  2082,     0,     0,
       0,  2195,     0,     0,     0,     0,     0,     0,   256,   764,
       0,     0,     0,   500,   765,     0,   364,   365,     0,  1463,
    1520,     0,  1549,  1578,     0,     0,   785,     0,     0,     0,
       0,   815,     0,     0,     0,     0,   816,     0,  1304,     0,
    1325,     0,   818,     0,     0,     0,     0,     0,     0,     0,
     533,     0,   535,     0,     0,  1029,     0,  2143,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,   536,
       0,     0,   537,     0,  1634,     0,     0,     0,     0,     0,
    1529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2176,     0,     0,     0,  2052,     0,  2076,     0,     0,     0,
       0,     0,     0,     0,   358,     0,     0,     0,     0,     0,
       0,   355,     0,  1558,     0,  1583,   356,     0,     0,     0,
    1434,     0,     0,     0,     0,     0,     0,     0,  2548,     0,
    2579,     0,     0,     0,     0,     0,     0,     0,     0,  2223,
       0,     0,     0,  1460,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2138,     0,     0,     0,   933,
       0,     0,     0,     0,  1523,     0,     0,     0,     0,     0,
     531,     0,   202,   203,   204,   205,     0,   279,  2749,   209,
       0,     0,   268,     0,  2171,     0,     0,   227,   228,     0,
     975,     0,     0,  1552,     0,   626,     0,     0,   647,     0,
     667,     0,   683,     0,  2519,     0,  1813,     0,     0,     0,
       0,   269,     0,     0,  2785,     0,  1194,     0,     0,     0,
       0,     0,     0,     0,     0,  1525,     0,  1554,  1581,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2550,     0,     0,   972,     0,     0,     0,     0,   973,   403,
     404,     0,     0,     0,   532,  1759,     0,  1770,     0,     0,
    1037,     0,     0,   733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1823,     0,     0,     0,     0,     0,  1637,
       0,   760,     0,     0,   364,   365,     0,  1033,     0,     0,
       0,     0,  1034,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   480,   253,   202,   203,   204,
     205,     0,   207,     0,   209,     0,     0,   224,   533,  1920,
     535,  1299,   227,     0,     0,   352,     0,  1933,     0,     0,
    1959,     0,     0,     0,     0,     0,     0,   536,     0,     0,
     537,  1947,     0,  1321,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,   224,     0,     0,   225,
     226,   227,   811,   229,   230,     0,     0,   627,     0,   648,
    2459,     0,     0,     0,     0,     0,     0,  2749,     0,     0,
    2785,     0,     0,     0,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2058,     0,   734,  2488,
     631,     0,     0,   651,     0,   669,     0,   238,     0,     0,
       0,  1821,     0,     0,     0,     0,   361,   362,   363,   364,
     761,   366,   253,     0,     0,  2082,     0,     0,     0,     0,
       0,     0,   481,   482,   483,     0,     0,   783,     0,     0,
       0,  2143,   812,     0,  2176,     0,     0,     0,     0,     0,
       0,     0,  1427,     0,  2782,     0,     0,     0,     0,     0,
       0,     0,     0,  2548,     0,     0,     0,     0,   742,   900,
       0,     0,  2049,     0,  2073,     0,  1453,     0,     0,     0,
       0,     0,     0,     0,     0,  2818,   768,     0,     0,     0,
       0,   737,     0,     0,  2579,     0,   738,     0,   931,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2223,     0,   764,     0,
     968,     0,   352,   765,  1929,     0,  1304,     0,     0,     0,
       0,     0,     0,  2131,     0,     0,     0,     0,     0,     0,
       0,     0,  1520,     0,     0,   785,  1955,     0,  1325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2164,     0,  1927,     0,     0,   818,     0,   815,
       0,  1549,     0,     0,   816,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,  1302,   224,
       0,  1954,   225,   226,   227,     0,   229,   230,     0,  1578,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,  1324,     0,    14,    15,     0,     0,
    1029,     0,     0,     0,  2212,     0,     0,     0,    16,    17,
      18,   355,     0,     0,     0,     0,   356,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,  1431,     0,     0,
       0,     0,  1432,     0,   969,  2459,  1634,  1434,  2488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
    1457,    21,   910,   924,     0,  1458,     0,  2054,     0,  2078,
       0,  1460,     0,     0,     0,     0,     0,     0,     0,  2453,
       0,  2052,     0,  2782,     0,     0,     0,    22,  1030,     0,
      23,     0,     0,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2482,     0,  2076,     0,   972,     0,  2548,
       0,     0,   973,     0,     0,   975,     0,     0,     0,  2818,
       0,     0,     0,     0,     0,     0,     0,     0,  2140,    24,
       0,     0,     0,     0,     0,    25,   243,  1525,   257,    26,
      27,     0,     0,     0,     0,  2579,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,  2173,     0,     0,
       0,     0,     0,     0,     0,  2138,  1554,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,     0,     0,
       0,   627,  1034,     0,     0,     0,     0,  1054,  1523,     0,
      29,    30,    31,     0,  1581,    32,     0,     0,  2171,   632,
      33,   652,   648,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1037,     0,     0,     0,  2220,
       0,  1552,     0,     0,     0,  1813,     0,     0,     0,     0,
     743,     0,     0,     0,     0,     0,  2542,     0,  2573,   243,
       0,     0,     0,     0,     0,     0,     0,  1194,     0,     0,
       0,  1637,   769,     0,   257,     0,     0,     0,     0,     0,
       0,   591,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,     0,   224,     0,     0,   225,   226,   227,   228,
     229,   230,  2782,     0,     0,  2818,     0,     0,     0,     0,
       0,     0,   734,     0,   342,   343,   344,     0,   345,     0,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,     0,     0,   761,
       0,     0,     0,     0,     0,     0,     0,     0,  1817,     0,
       0,     0,  1920,  1818,     0,     0,   253,     0,     0,     0,
     403,   404,     0,     0,     0,     0,   783,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1299,     0,     0,  1947,
    1014,     0,   202,   203,   204,   205,  1300,   207,  1322,   209,
     812,     0,   224,     0,     0,   225,     0,   227,   228,   229,
       0,     0,  1321,     0,     0,   737,     0,     0,     0,     0,
     738,     0,     0,   342,   343,   344,     0,   345,     0,     0,
       0,   269,     0,   764,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   785,
    1821,     0,   352,     0,     0,  1927,     0,     0,  1954,   403,
     404,  1924,     0,     0,   532,     0,  1925,     0,  1428,     0,
       0,     0,     0,     0,  1427,     0,     0,  2446,     0,  2049,
       0,     0,     0,  1951,     0,     0,     0,     0,  1952,     0,
       0,  1454,     0,     0,   364,   365,     0,     0,  2453,     0,
       0,  2475,     0,  2073,   815,  2722,     0,     0,     0,   816,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2052,  1453,     0,  2482,   533,     0,
     535,     0,     0,     0,     0,     0,     0,     0,   969,     0,
       0,     0,     0,     0,     0,     0,     0,   536,     0,     0,
     537,     0,     0,  2076,     0,     0,     0,  1929,     0,     0,
       0,     0,     0,  2131,     0,     0,     0,     0,     0,  2138,
       0,     0,  2171,  1521,     0,  1550,     0,     0,     0,     0,
       0,  1304,  2776,     0,  1955,     0,  1520,  1447,     0,   910,
       0,  2542,     0,     0,  1431,     0,  2164,     0,     0,  1432,
       0,     0,     0,   924,     0,     0,     0,  1325,  1030,     0,
       0,     0,     0,  2812,     0,     0,     0,     0,  1457,  1549,
       0,  1578,  2573,  1458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2539,     0,  2570,     0,     0,     0,
       0,     0,     0,   632,     0,  2212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   972,     0,   652,     0,     0,   973,  1634,     0,
       0,     0,     0,     0,     0,  2135,     0,     0,     0,  1434,
    2136,     0,  2455,   951,  2054,   202,   203,   204,   205,     0,
     207,     0,   209,     0,     0,   224,     0,     0,   225,     0,
     227,     0,   229,     0,  2168,     0,  2484,     0,  2078,  2169,
       0,     0,     0,     0,     0,     0,   342,   343,   344,     0,
     345,     0,  1604,  1627,     0,     0,     0,     0,     0,     0,
    1460,     0,  1054,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   627,     0,
       0,   648,     0,     0,   743,     0,     0,     0,     0,  1814,
       0,     0,  1033,     0,     0,     0,  2216,  1034,  2140,     0,
       0,  2217,     0,     0,     0,     0,     0,     0,   243,  1813,
       0,   769,     0,  2453,     0,     0,  2482,     0,     0,     0,
       0,  1525,     0,     0,   361,   362,   363,   364,   257,   366,
       0,  2173,     0,     0,     0,     0,     0,     0,     0,     0,
     481,   482,   483,     0,     0,  1717,   734,  1739,     0,     0,
       0,  2776,     0,     0,  1554,     0,  1581,     0,  1306,     0,
    1327,     0,     0,  1920,   761,     0,  1947,     0,     0,  2544,
       0,  2575,     0,     0,     0,     0,     0,  2542,     0,     0,
    2220,     0,     0,     0,     0,     0,     0,  2812,     0,     0,
     783,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1921,  1637,  1300,     0,  2446,     0,     0,     0,
       0,     0,     0,  2573,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1948,     0,  1322,     0,     0,     0,
       0,     0,  2049,     0,     0,  2475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   812,     0,     0,  2112,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
     224,  2073,     0,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,     0,     0,     0,     0,  2131,     0,     0,
    2164,   342,   343,   344,     0,   345,     0,     0,     0,   269,
    2769,     0,     0,     0,     0,     0,     0,     0,     0,  2539,
       0,     0,     0,     0,     0,     0,     0,  1817,     0,     0,
       0,     0,  1818,     0,  1821,     0,     0,     0,     0,     0,
       0,  2805,     0,     0,     0,     0,     0,   403,   404,     0,
    2570,     0,   532,     0,     0,  1428,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1527,     0,  1556,     0,     0,
    2776,     0,  2212,  2812,     0,  2050,     0,  2074,     0,  1454,
       0,     0,   364,   365,     0,     0,     0,     0,  1929,     0,
       0,  1955,   591,   201,   202,   203,   204,   205,   206,   207,
     208,   209,     0,     0,   224,     0,     0,   225,   226,   227,
     228,   229,   230,     0,     0,     0,   533,     0,   535,     0,
     785,     0,     0,   969,     0,   342,   343,   344,     0,   345,
       0,  2455,     0,   269,  1924,   536,  2132,     0,   537,  1925,
       0,     0,     0,     0,     0,  1521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2054,     0,     0,
    2484,  1951,     0,     0,     0,  2165,  1952,     0,     0,     0,
       0,  2041,     0,  2065,  1550,  1447,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2078,     0,     0,     0,
       0,     0,     0,     0,     0,   910,     0,   924,     0,     0,
       0,     0,  2140,     0,     0,  2173,     0,     0,     0,     0,
       0,  2446,     0,     0,  2475,  2778,     0,     0,     0,     0,
       0,     0,     0,  1030,  2544,     0,     0,  2213,     0,     0,
    1175,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     632,     0,   224,   652,     0,     0,  2814,   227,   228,  2769,
       0,     0,     0,     0,     0,  2575,  1431,     0,     0,  2450,
       0,  1432,     0,     0,  2451,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2539,     0,  2220,     0,     0,
       0,     0,     0,  2479,     0,  2805,     0,     0,  2480,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1457,   743,     0,
       0,  2570,  1458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2206,     0,     0,   769,     0,     0,     0,
       0,     0,  1604,     0,     0,     0,     0,     0,     0,     0,
       0,   361,   362,   363,     0,  2135,   366,     0,     0,     0,
    2136,     0,     0,     0,     0,  1627,     0,   481,   482,   483,
       0,     0,     0,     0,  1931,     0,  1306,     0,     0,     0,
       0,  1054,     0,     0,     0,     0,     0,     0,  2168,     0,
       0,     0,     0,  2169,     0,     0,  1957,     0,  1327,  2112,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,   224,     0,     0,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,     0,     0,  2455,     0,     0,  2484,
       0,     0,   342,   343,   344,     0,   345,  2216,     0,     0,
       0,     0,  2217,     0,     0,     0,     0,     0,  1814,     0,
       0,     0,     0,  1717,     0,     0,     0,     0,  2769,     0,
       0,  2805,     0,     0,  2778,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1739,     0,     0,
       0,     0,     0,   532,     0,     0,     0,     0,     0,     0,
    2544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2814,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   364,   365,     0,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,  2575,  2056,   224,  2080,
       0,   225,   226,   227,   228,   229,   230,     0,     0,     0,
       0,   783,     0,     0,     0,     0,     0,   533,     0,   535,
       0,     0,     0,     0,     0,  1921,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,   536,     0,     0,   537,
       0,  1817,     0,     0,     0,     0,  1818,     0,     0,  1300,
       0,     0,  1948,     0,     0,     0,     0,     0,  2141,     0,
       0,     0,     0,     0,     0,   403,   404,  1527,     0,     0,
       0,     0,     0,     0,     0,  1322,   381,     0,     0,     0,
       0,   410,     0,     0,     0,     0,   496,  2174,     0,     0,
       0,     0,     0,     0,     0,  1924,  1556,     0,  1951,     0,
    1925,     0,     0,  1952,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   598,   621,     0,   642,
     661,   678,   692,     0,   707,     0,     0,     0,     0,     0,
       0,     0,     0,  2778,     0,     0,  2814,     0,  2450,     0,
       0,     0,     0,  2451,     0,     0,     0,  1428,     0,     0,
    2447,     0,  2050,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2479,     0,     0,
       0,     0,  2480,     0,  2476,     0,  2074,     0,     0,     0,
       0,     0,     0,     0,   992,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,   224,     0,  1454,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,  2135,
       0,     0,  2168,     0,  2136,     0,     0,  2169,     0,     0,
       0,     0,  2773,     0,     0,   269,     0,  2774,     0,     0,
       0,     0,     0,     0,     0,     0,  2132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2438,     0,  2041,     0,
       0,     0,     0,  2809,     0,     0,     0,     0,  2810,  1521,
       0,     0,     0,   403,   404,     0,     0,     0,   532,  2165,
    2467,     0,  2065,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2216,     0,     0,     0,     0,  2217,
       0,     0,  1550,     0,  1447,   381,     0,     0,   364,   365,
       0,     0,     0,     0,     0,     0,     0,  2540,     0,  2571,
       0,     0,     0,     0,     0,     0,     0,     0,  2213,     0,
       0,     0,     0,   896,     0,     0,   912,   926,     0,     0,
       0,   410,   533,     0,   535,     0,     0,     0,     0,     0,
     992,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,   536,   224,     0,   537,   225,   226,   227,   228,   229,
     230,     0,     0,   591,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   224,     0,     0,   225,   226,
     227,   269,   229,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,   343,   344,     0,
     345,     0,     0,  2531,   964,  2562,     0,     0,     0,     0,
     496,     0,     0,     0,  2206,     0,     0,     0,     0,     0,
       0,     0,     0,  2450,   532,     0,  2479,     0,  2451,     0,
       0,  2480,     0,     0,     0,  1604,     0,  1627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,     0,     0,
       0,  1056,  1814,     0,   364,   365,     0,     0,     0,     0,
       0,  2773,     0,     0,     0,     0,  2774,  1931,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,     0,
     535,  1306,     0,     0,  1957,     0,     0,  2809,     0,     0,
       0,     0,  2810,     0,     0,     0,  1921,   536,     0,  1948,
     537,     0,     0,     0,     0,     0,     0,  1327,   598,     0,
       0,     0,     0,  1717,     0,     0,     0,  1739,     0,     0,
       0,   591,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   621,     0,   224,     0,     0,   225,   226,   227,  2447,
     229,   230,     0,     0,     0,     0,     0,     0,     0,     0,
     598,     0,   642,     0,   342,   343,   344,     0,   345,     0,
       0,     0,   269,     0,     0,  2050,     0,     0,  2476,     0,
       0,   661,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2457,     0,  2056,     0,     0,     0,   678,     0,
       0,     0,     0,     0,  2074,     0,     0,     0,     0,     0,
       0,     0,   692,     0,     0,     0,  2486,     0,  2080,     0,
    2132,     0,     0,  2165,     0,  1189,     0,   707,     0,     0,
       0,     0,     0,  2770,     0,     0,     0,     0,     0,     0,
       0,     0,  2540,     0,     0,  2438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2773,     0,     0,  2809,  2806,  2774,     0,     0,  2810,     0,
       0,  2041,   385,  2571,  2467,     0,     0,   414,  2141,     0,
       0,     0,   502,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2213,     0,     0,     0,     0,
    2065,  1527,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2174,   613,   633,     0,   653,   670,   684,   697,     0,
     712,     0,     0,     0,     0,     0,  1294,     0,  1316,  2761,
       0,     0,     0,     0,  1556,     0,     0,     0,  2531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2546,
       0,  2577,     0,     0,     0,     0,     0,     0,     0,     0,
    2797,     0,     0,     0,     0,     0,     0,     0,     0,  2562,
     591,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,   224,     0,     0,   225,   226,   227,   228,   229,
     230,  2206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   381,     0,   342,   343,   344,     0,   345,  1423,     0,
       0,   269,     0,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1449,     0,   912,  2447,     0,     0,  2476,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   926,     0,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,     0,     0,     0,     0,
       0,     0,  2770,     0,     0,     0,     0,     0,   964,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   385,     0,     0,     0,     0,     0,     0,  2540,     0,
       0,     0,     0,     0,     0,     0,   496,     0,  2806,     0,
       0,     0,     0,  1515,     0,  1544,  1572,     0,     0,   902,
       0,     0,   919,   934,     0,     0,  1006,   414,     0,     0,
    2438,     0,     0,  2467,  2571,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1931,     0,
       0,  1957,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1606,  1629,  2761,     0,
       0,     0,     0,     0,     0,     0,  1056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2457,     0,     0,  2531,     0,     0,     0,     0,     0,
     976,     0,     0,     0,  2797,     0,   502,  1794,   201,   202,
     203,   204,   205,   206,   207,   208,   209,  2056,     0,   224,
    2486,     0,   225,     0,   227,   228,   229,     0,     0,     0,
    2562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,   343,   344,  1012,   345,     0,  2080,  1061,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1719,
       0,  1741,  2141,     0,     0,  2174,     0,     0,     0,     0,
       0,  2770,     0,     0,  2806,  2780,     0,     0,     0,     0,
       0,     0,     0,     0,  2546,     0,   598,     0,   621,     0,
       0,   642,     0,   661,     0,   678,     0,   692,     0,  1808,
       0,     0,     0,     0,     0,     0,  2816,     0,     0,  1189,
       0,     0,     0,     0,   613,  2577,     0,     0,   361,   362,
     363,     0,     0,   366,   707,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,   482,   483,   633,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   613,     0,   653,     0,
       0,     0,     0,     0,     0,     0,     0,  2761,     0,     0,
    2797,     0,     0,     0,     0,     0,     0,   670,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   697,     0,
       0,     0,  1915,     0,  1294,     0,     0,     0,     0,     0,
       0,  1197,     0,   712,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1942,     0,  1316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2457,     0,     0,  2486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2780,     0,     0,     0,     0,   554,
       0,     0,  1307,     0,  1328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2546,   630,     0,     0,     0,  1423,     0,     0,     0,     0,
    2816,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   896,     0,     0,  2044,     0,  2068,     0,  1449,
       0,     0,   741,     0,     0,     0,  2577,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
       0,   926,     0,     0,     0,     0,     0,   385,     0,     0,
     542,   558,     0,     0,  1435,     0,     0,     0,     0,     0,
       0,     0,     0,   964,   902,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2126,  1462,     0,   919,
       0,     0,     0,     0,     0,  1515,     0,     0,     0,     0,
       0,     0,     0,   934,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2159,     0,     0,     0,   414,
       0,     0,     0,     0,  1544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   976,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1572,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   502,     0,     0,     0,     0,     0,     0,  1528,
    1006,  1557,  1582,  2780,     0,     0,  2816,  2208,     0,     0,
       0,     0,  1012,     0,     0,     0,  1606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1629,
       0,     0,     0,   596,   619,     0,   640,   659,   676,   690,
       0,   705,  1614,  1638,     0,  1056,     0,     0,     0,     0,
       0,     0,  1061,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1719,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1727,     0,  1746,     0,     0,
       0,  1741,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1011,  1036,     0,     0,  1060,     0,     0,     0,  1089,
       0,     0,   613,     0,   633,     0,     0,   653,   554,   670,
       0,   684,     0,   697,     0,  1822,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     712,     0,     0,     0,     0,     0,     0,     0,  1808,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1189,     0,   994,  1016,     0,     0,  1044,     0,     0,     0,
    1084,     0,     0,     0,     0,   630,     0,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   558,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1932,     0,
    1307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1958,     0,  1328,     0,     0,  1915,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1294,
       0,     0,  1942,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   741,     0,     0,     0,
       0,     0,     0,     0,  1004,  1316,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1435,     0,     0,     0,     0,     0,     0,     0,     0,
    1303,     0,     0,     0,     0,   596,     0,  1423,   902,     0,
    2441,  2057,  2044,  2081,     0,  1462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   619,     0,
       0,     0,     0,     0,  2470,   919,  2068,   934,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   596,     0,   640,
       0,     0,     0,     0,     0,     0,     0,     0,  1449,   976,
       0,     0,     0,     0,     0,     0,     0,     0,   659,     0,
       0,     0,  2142,     0,     0,     0,     0,     0,     0,     0,
       0,  1528,     0,     0,     0,   676,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2126,     0,     0,   690,
       0,  2175,     0,     0,     0,     0,     0,     0,     0,     0,
    1557,     0,  1187,     0,   705,     0,     0,     0,     0,  1515,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2159,
       0,     0,     0,     0,     0,     0,     0,     0,  1582,     0,
    1473,     0,  1475,  1481,  1483,     0,     0,     0,     0,     0,
       0,     0,  1544,     0,  1572,     0,  1012,     0,     0,     0,
       0,     0,     0,  2222,     0,     0,     0,  2534,     0,  2565,
       0,     0,  1614,     0,     0,     0,     0,     0,  2208,     0,
       0,     0,     0,     0,     0,     0,     0,  1524,     0,  1553,
    1580,     0,     0,     0,     0,  1638,     0,     0,     0,  1606,
    1011,  1629,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1061,     0,  1292,     0,  1314,     0,     0,     0,     0,
       0,     0,  1036,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1612,  1636,     0,     0,     0,     0,     0,     0,     0,     0,
    1060,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1503,     0,
    1532,  1560,     0,  1655,  1664,     0,     0,     0,     0,  1089,
       0,   994,     0,  1727,     0,     0,     0,  1719,     0,     0,
       0,  1741,     0,     0,     0,     0,   554,     0,     0,     0,
       0,     0,     0,  1016,     0,     0,     0,  1746,     0,     0,
       0,     0,  1808,     0,     0,     0,     0,     0,     0,     0,
       0,  1594,  1617,     0,     0,     0,     0,     0,     0,     0,
       0,  1044,     0,  1725,     0,  1745,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1651,  1660,     0,     0,     0,     0,
    1084,     0,   630,     0,     0,     0,  1915,     0,     0,  1942,
       0,     0,     0,  1820,  1822,     0,     0,   542,     0,   558,
       0,     0,     0,  1196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1197,     0,     0,     0,
    1513,     0,  1542,  1570,     0,     0,     0,     0,     0,  2441,
       0,     0,     0,  1004,  1705,     0,  1729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     741,     0,     0,     0,     0,  2044,     0,     0,  2470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2068,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2126,  1932,     0,  2159,     0,     0,  1928,     0,  1303,     0,
       0,     0,     0,  2764,     0,     0,     0,     0,     0,     0,
       0,     0,  2534,     0,     0,  1307,     0,     0,  1958,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2800,     0,     0,     0,     0,     0,
       0,  1328,     0,  2565,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   596,     0,   619,     0,     0,   640,     0,
     659,     0,   676,     0,   690,     0,  1806,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1187,     0,     0,     0,
       0,     0,     0,  1435,     0,     0,  2458,     0,  2057,     0,
       0,   705,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2487,     0,  2081,     0,     0,     0,     0,     0,     0,  2053,
       0,  2077,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2090,     0,     0,     0,     0,     0,     0,  1481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2142,     0,  2441,     0,     0,  2470,     0,  1913,
    2139,  1292,     0,     0,     0,     0,     0,     0,     0,  1524,
       0,     0,     0,     0,     0,  1528,     0,     0,     0,     0,
       0,  1940,     0,  1314,     0,  2175,     0,     0,     0,  2172,
       0,     0,  2764,     0,     0,     0,     0,     0,  1553,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1557,     0,
    1582,     0,     0,     0,     0,     0,     0,     0,  2534,     0,
       0,     0,     0,  2547,     0,  2578,  1580,     0,  2800,     0,
       0,     0,     0,     0,  2222,     0,     0,     0,     0,     0,
       0,  2114,     0,     0,  1011,     0,     0,  1036,     0,     0,
    1503,  2219,     0,     0,  2565,  1614,     0,  1638,     0,     0,
    1612,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2147,     0,     0,     0,     0,     0,     0,     0,     0,  1532,
       0,     0,     0,  1636,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1060,
       0,     0,     0,     0,     0,     0,     0,  1560,  1655,     0,
       0,     0,  2040,     0,  2064,     0,     0,  1664,     0,     0,
       0,     0,     0,     0,     0,   994,     0,  1089,  1016,     0,
     597,   620,  2196,   641,   660,   677,   691,     0,   706,     0,
       0,  1594,     0,  1727,     0,     0,     0,  1746,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1617,     0,     0,     0,  1822,     0,
       0,  1725,     0,  2124,     0,     0,     0,     0,     0,     0,
    1044,     0,  1513,     0,     0,     0,     0,     0,     0,  1651,
       0,  2764,     0,     0,  2800,  1745,     0,     0,  1660,     0,
       0,     0,  2157,     0,     0,     0,     0,     0,  1084,     0,
       0,  1542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1932,     0,     0,  1958,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1705,     0,     0,     0,     0,  1004,     0,     0,
       0,     0,  1820,     0,     0,  2458,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1729,     0,     0,     0,
       0,     0,     0,     0,  1196,     0,     0,     0,     0,     0,
       0,  2057,     0,     0,  2487,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2081,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2142,     0,     0,  2175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2781,
       0,     0,     0,     0,     0,     0,     0,     0,  2547,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1928,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2817,     0,     0,     0,     0,     0,     0,     0,     0,  2578,
       0,     0,     0,  1303,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   819,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1005,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1806,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2454,     0,  2053,  1187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2483,     0,
    2077,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   597,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2458,  1481,     0,  2487,     0,   620,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   918,     0,     0,     0,
       0,     0,     0,     0,   597,     0,   641,     0,     0,     0,
    2139,     0,  1913,     0,     0,     0,     0,     0,  2781,     0,
       0,     0,     0,     0,     0,   660,     0,     0,     0,     0,
       0,     0,     0,  1524,     0,     0,  1292,     0,     0,  1940,
       0,     0,   677,  2172,  2547,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2817,     0,   691,     0,     0,     0,
       0,     0,  1314,     0,     0,     0,  1553,     0,  1580,  1188,
       0,   706,     0,     0,     0,     0,     0,     0,     0,     0,
    2578,  2543,     0,  2574,     0,     0,     0,     0,     0,     0,
       0,  2114,  2219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1612,  1503,  1636,     0,     0,     0,     0,
       0,     0,     0,     0,  2147,  1655,     0,     0,  1664,     0,
       0,     0,     0,     0,     0,     0,     0,  2437,     0,  2040,
       0,     0,     0,     0,     0,     0,     0,  1532,     0,  1560,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2466,  2520,  2064,  2551,     0,     0,     0,     0,     0,
    1293,     0,  1315,  2196,     0,     0,     0,     0,     0,     0,
    1133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1594,     0,  1617,     0,     0,     0,
       0,  1725,     0,     0,     0,  1745,  1651,     0,     0,  1660,
       0,     0,     0,     0,     0,     0,     0,  2781,     0,     0,
    2817,     0,     0,  2124,     0,     0,  1820,     0,     0,     0,
     599,   622,     0,   643,   662,   679,   693,     0,   708,     0,
       0,     0,     0,     0,     0,     0,  1513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1542,
    1928,  1570,  1705,     0,     0,     0,  1729,     0,     0,     0,
       0,     0,     0,     0,  2530,     0,  2561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2454,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2053,
       0,     0,  2483,     0,     0,     0,     0,  1514,     0,  1543,
    1571,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1005,     0,     0,     0,     0,     0,     0,     0,  2077,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2139,     0,  1305,  2172,  1326,     0,
     819,     0,     0,     0,     0,     0,     0,  2777,   996,  1018,
       0,     0,  1046,     0,     0,     0,  2543,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2813,  1806,
       0,     0,     0,     0,     0,     0,     0,  2574,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2219,
       0,     0,     0,     0,     0,  2114,     0,     0,  2147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2750,     0,
       0,     0,     0,  1913,     0,     0,  1940,  2520,     0,     0,
       0,  1461,     0,   918,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2786,
       0,     0,     0,     0,     0,     0,     0,     0,  2551,     0,
     597,     0,   620,     0,     0,   641,  2437,   660,     0,   677,
       0,   691,     0,  1807,     0,     0,     0,     0,     0,     0,
    2196,     0,     0,  1188,     0,     0,     0,     0,     0,     0,
       0,  1007,  2040,     0,     0,  2466,     0,     0,   706,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1526,     0,  1555,     0,     0,     0,     0,
       0,  2064,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2124,  2454,     0,
    2157,  2483,     0,     0,     0,     0,     0,     0,     0,     0,
    2760,     0,     0,     0,     0,     0,     0,     0,     0,  2530,
     999,  1021,   599,     0,  1049,  1072,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2777,     0,     0,     0,
       0,  2796,     0,     0,     0,   622,  1914,     0,  1293,     0,
    2561,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2543,     0,   599,     0,   643,     0,  1941,     0,
    1315,     0,  2813,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   662,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2574,     0,
       0,     0,   679,     0,     0,     0,     0,     0,     0,  1133,
       0,     0,     0,     0,     0,     0,   693,  2750,     0,  1726,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1190,
       0,   708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2520,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2786,     0,     0,     0,     0,   995,  1017,
       0,     0,  1045,  1069,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2551,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2043,
       0,  2067,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2437,     0,     0,  2466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1295,     0,  1317,     0,     0,  2777,     0,     0,  2813,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2125,     0,     0,     0,  1505,     0,  1534,  1562,     0,  1514,
       0,     0,  1930,     0,  1305,  2530,     0,   996,     0,     0,
       0,     0,     0,     0,     0,  2796,     0,     0,     0,  2158,
       0,     0,     0,     0,  1956,     0,  1326,     0,  1543,  1018,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2561,     0,     0,     0,   819,  2750,  1596,  1619,  2786,
       0,     0,     0,     0,     0,     0,  1571,  1046,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1005,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1707,     0,  1731,     0,     0,     0,     0,  1516,     0,  1545,
    1573,     0,     0,     0,     0,  2055,     0,  2079,     0,  1461,
    1007,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2760,   918,
       0,  2796,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   997,  1019,     0,     0,  1047,
       0,     0,     0,     0,     0,     0,  1508,     0,  1537,  1565,
       0,     0,     0,     0,     0,  1526,     0,     0,     0,   999,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1021,     0,     0,  1555,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1599,
    1622,     0,     0,     0,     0,     0,     0,     0,     0,  1049,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1807,     0,     0,  1072,     0,     0,     0,     0,
       0,     0,  1653,  1662,     0,     0,     0,  2221,     0,     0,
       0,     0,     0,     0,  1188,     0,  1613,     0,     0,     0,
     599,     0,   622,     0,     0,   643,     0,   662,     0,   679,
       0,   693,     0,  1809,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1504,     0,  1533,  1561,   708,     0,
       0,     0,  1710,     0,  1734,     0,     0,   995,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1017,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1914,
       0,     0,     0,     0,     0,     0,     0,  1595,  1618,     0,
       0,     0,     0,  1133,     0,     0,     0,  1045,     0,     0,
       0,     0,     0,  1293,     0,     0,  1941,  1726,     0,     0,
       0,     0,     0,  1069,     0,     0,     0,     0,     0,     0,
    1652,  1661,     0,     0,     0,     0,  1916,     0,  1295,  1315,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1943,     0,
    1317,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1706,     0,  1730,     0,     0,     0,     0,  2116,     0,     0,
       0,     0,     0,     0,     0,     0,  1505,     0,     0,     0,
       0,     0,     0,     0,  2440,     0,  2043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2149,     0,     0,     0,
       0,     0,     0,     0,     0,  1534,     0,     0,  2469,     0,
    2067,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1562,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   996,     0,     0,  1018,     0,     0,     0,  2198,  2045,
       0,  2069,     0,     0,     0,     0,     0,  1596,     0,     0,
    2125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1930,     0,     0,     0,     0,
    1619,     0,     0,  1514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2158,     0,     0,  1046,     0,     0,  1305,
       0,     0,  1956,     0,     0,     0,     0,     0,     0,     0,
    2127,     0,     0,     0,     0,     0,  1543,     0,  1571,  1516,
       0,  1506,     0,  1535,  1563,  1326,     0,     0,     0,     0,
       0,  2533,     0,  2564,   997,     0,     0,     0,     0,  2160,
       0,     0,     0,     0,     0,     0,     0,     0,  1545,     0,
       0,     0,     0,     0,     0,     0,  1019,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1707,     0,
       0,     0,     0,     0,  1597,  1620,  1573,     0,     0,  2119,
       0,     0,     0,     0,  1047,     0,     0,     0,  1508,     0,
       0,     0,  1731,     0,  1007,     0,     0,     0,     0,     0,
    2456,     0,  2055,     0,     0,     0,     0,     0,  2152,     0,
       0,     0,     0,     0,     0,     0,     0,  1537,     0,     0,
       0,     0,     0,     0,  2485,     0,  2079,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   998,  1020,     0,     0,
    1048,     0,     0,     0,     0,  1565,     0,     0,  1461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   999,     0,     0,  1021,  1708,     0,  1732,
    2201,     0,     0,     0,     0,     0,  1807,     0,     0,  1599,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1622,     0,     0,     0,     0,     0,     0,  1526,
       0,     0,     0,     0,     0,     0,     0,  2115,  1049,     0,
       0,     0,     0,  1072,     0,     0,  1504,  1653,     0,     0,
    1914,     0,     0,  1941,     0,     0,  1662,     0,     0,     0,
       0,     0,  1555,     0,     0,     0,  2148,     0,     0,     0,
       0,     0,     0,     0,     0,  1533,     0,  2545,     0,  2576,
       0,     0,     0,     0,     0,     0,     0,     0,  2221,     0,
       0,     0,     0,  2440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1561,     0,     0,     0,     0,     0,  1613,
    1710,     0,     0,     0,     0,     0,     0,     0,     0,  2043,
       0,   995,  2469,     0,  1017,     0,     0,     0,  2197,     0,
       0,     0,  1809,     0,  1734,     0,     0,  1595,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2067,     0,
       0,     0,     0,     0,  1190,     0,     0,     0,     0,     0,
    1618,     0,     0,     0,  2125,     0,     0,  2158,     0,     0,
       0,     0,     0,     0,     0,     0,  1045,  2763,     0,     0,
       0,  1069,     0,     0,     0,  1652,  2533,     0,     0,     0,
       0,     0,     0,     0,  1661,     0,     0,  1726,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2799,     0,
       0,     0,     0,     0,     0,     0,     0,  2564,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1916,
       0,     0,     0,     0,     0,     0,     0,     0,  1706,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1295,     0,     0,  1943,     0,     0,     0,
       0,     0,  1730,     0,     0,     0,  1930,     0,     0,  1956,
       0,     0,     0,     0,     0,     0,     0,     0,  2369,  1317,
       0,     0,     0,     0,     0,     0,     0,  2116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2456,
    1505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2055,     0,     0,  2485,     0,
       0,     0,     0,  1534,  2117,  1562,     0,     0,     0,     0,
       0,     0,     0,  1506,  2442,     0,  2045,     0,  2522,     0,
    2553,     0,     0,     0,  2079,     0,     0,     0,  2440,  2198,
       0,  2469,     0,  2150,     0,     0,     0,     0,  2471,     0,
    2069,     0,  1535,     0,     0,     0,     0,     0,     0,     0,
    1596,     0,  1619,  2779,     0,     0,     0,     0,     0,     0,
       0,     0,  2545,     0,     0,     0,  2763,     0,     0,     0,
    1563,     0,  1507,     0,  1536,  1564,     0,     0,     0,     0,
       0,     0,     0,     0,  2815,   998,     0,     0,   997,     0,
       0,  1019,  2533,  2576,     0,  2199,     0,     0,     0,     0,
    2127,     0,  2799,     0,  1597,     0,     0,  1020,     0,     0,
       0,     0,     0,     0,     0,  2221,     0,     0,     0,     0,
       0,     0,     0,  1516,     0,  1598,  1621,  1620,  2564,     0,
       0,     0,     0,  2160,     0,  1048,     0,     0,  1707,     0,
       0,     0,  1731,  1047,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1545,     0,  1573,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2119,
       0,  2535,     0,  2566,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1708,     0,     0,  1709,     0,
    1733,     0,     0,     0,     0,  1537,     0,  1565,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1732,
    2525,     0,  2556,     0,     0,     0,     0,     0,     0,     0,
       0,  2201,     0,     0,  2456,     0,     0,  2485,     0,     0,
       0,     0,     0,     0,     0,  2763,     0,     0,  2799,     0,
       0,     0,  1599,     0,  1622,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1653,     0,     0,  1662,     0,     0,
       0,     0,  2779,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2115,     0,     0,
       0,     0,     0,     0,     0,     0,  1809,     0,  2545,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2815,     0,
    1504,  2116,     0,     0,  2149,     0,     0,     0,     0,     0,
    2148,     0,     0,     0,  2752,     0,     0,     0,     0,     0,
       0,     0,     0,  2522,  2576,     0,     0,     0,     0,     0,
    1710,     0,     0,  1533,  1734,  1561,     0,     0,     0,     0,
    1916,     0,     0,  1943,     0,  2788,     0,     0,  2521,     0,
    2552,     0,     0,     0,  2553,     0,     0,     0,     0,  2197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2198,     0,     0,     0,
    1595,     0,  1618,  2442,     0,     0,     0,     0,     0,  2369,
       0,     0,  1652,     0,     0,  1661,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2045,
       0,     0,  2471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2069,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2127,     0,     0,  2160,     0,     0,
       0,  2779,     0,     0,  2815,     0,     0,  2765,  1706,     0,
       0,     0,  1730,     0,     0,     0,  2535,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2801,     0,
       0,     0,     0,     0,     0,     0,     0,  2566,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2119,     0,     0,  2152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2755,     0,     0,     0,
       0,     0,     0,     0,     0,  2525,     0,     0,     0,     0,
       0,     0,     0,  2752,     0,  2118,     0,     0,     0,     0,
       0,     0,     0,     0,  1507,     0,     0,  2791,     0,     0,
       0,     0,     0,     0,     0,     0,  2556,     0,     0,  2522,
       0,     0,     0,     0,  2151,     0,     0,     0,     0,  2788,
       0,     0,     0,  1536,  2117,     0,     0,     0,  2201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2553,     0,  1506,     0,     0,
       0,  1564,     0,     0,     0,     0,     0,  2150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   998,
       0,     0,  1020,     0,     0,     0,  2200,     0,     0,     0,
    1535,     0,  1563,     0,     0,  1598,     0,     0,     0,     0,
       0,  2115,     0,     0,  2148,  2523,     0,  2554,  2442,     0,
       0,  2471,     0,     0,  2751,     0,  2199,     0,  1621,     0,
       0,     0,     0,  2521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1048,     0,     0,  1597,     0,  1620,
       0,     0,     0,  2369,     0,  2787,  2765,     0,     0,     0,
       0,     0,     0,     0,  2552,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2535,     0,     0,     0,  2197,     0,     0,     0,
       0,     0,  2801,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2752,     0,     0,  2788,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1709,     0,  2566,     0,
       0,     0,     0,     0,     0,  2755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1708,     0,     0,     0,  1732,
    1733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2791,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2765,     0,     0,  2801,     0,
       0,     0,     0,  2751,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2521,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2787,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2755,  2552,     0,  2791,  2117,     0,
       0,  2150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2753,     0,     0,     0,     0,     0,     0,     0,     0,
    2523,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2789,     0,     0,     0,     0,     0,     0,     0,
       0,  2554,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2751,     0,     0,  2787,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2753,  1536,     0,  1564,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2524,     0,  2555,     0,
       0,     0,     0,     0,     0,     0,  2523,  2200,     0,     0,
       0,     0,     0,     0,     0,     0,  2789,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1598,     0,
    1621,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2554,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1709,     0,     0,     0,
    1733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2753,
       0,     0,  2789,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2118,
       0,     0,  2151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2754,     0,     0,     0,     0,     0,     0,     0,
       0,  2524,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2790,     0,     0,     0,     0,     0,     0,
       0,     0,  2555,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2200,     0,     0,     0,     0,     0,
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
       0,  2754,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2524,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2790,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2555,     0,     0,     0,     0,     0,     0,
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
    2754,     0,     0,  2790
};

static const yytype_int16 yycheck[] =
{
     129,   158,   131,   158,   158,   158,   158,   158,   158,   158,
     139,   140,  1138,   142,   143,  1137,  1138,   173,  1682,   530,
     398,   150,   151,   195,  1336,  1984,  1592,   156,   173,   883,
    1137,  1138,   161,   401,  2292,  1289,   143,  1539,  1184,   398,
    1116,   170,  1118,  1311,  1137,  1138,  1444,   170,   988,   223,
     990,   991,  1146,  1158,  1137,  1138,  1510,  1478,  1255,  1287,
    1624,  1051,   191,   192,   161,   194,   195,   196,   197,  1567,
     199,   245,  1601,  1137,  1138,  1080,  1137,  1138,  1649,   398,
    1001,  1309,  1067,  1750,   150,  1124,  1023,  1420,  1658,  1148,
     161,   161,  1149,   267,   223,   539,  1712,   616,   556,  1803,
     908,  2328,   593,   232,   922,   953,   406,   637,   247,   326,
     161,   335,   673,  1736,   702,   299,   245,   727,   247,  1530,
     479,   781,   795,   485,   392,   347,  1910,   511,  1937,   398,
    2121,  2061,  2037,  2203,  2154,  2632,  2633,  2371,   267,  2434,
    2558,   156,   271,  1761,  2527,  2463,   161,  1771,   165,     4,
      23,     4,   271,   282,    14,     4,    23,   223,  2793,    26,
     479,     4,   282,    30,   893,   138,     4,  2757,    35,     4,
     299,    38,    26,    40,   138,    42,    30,   142,     4,   245,
     309,    35,    32,    25,    33,   805,    40,   309,    42,    56,
      57,    58,   232,    60,    36,    33,    33,    41,    33,   858,
     149,   267,   309,   211,   138,   193,   656,    37,   370,    41,
     479,    65,    34,    26,    27,    33,   233,   585,   347,    32,
     754,    33,    35,    32,    68,   188,   213,    40,   165,    44,
     402,   391,    33,    26,    27,   687,    68,    33,   189,    32,
      59,   370,   192,   150,   194,   195,   196,   197,    41,   199,
      69,    64,   161,    59,   109,    33,   111,   112,     8,   247,
     247,   213,    72,    69,   119,   120,   121,   149,   233,   398,
     233,    17,   401,   402,   247,    68,   165,   406,   401,   402,
      23,   347,   233,   247,   233,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   247,   233,    35,   207,   208,
     149,   398,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   165,   247,    35,    23,   223,    38,    39,    40,
      41,    42,    43,   149,  2959,    75,    33,   398,   398,   526,
     165,     8,     9,    41,    33,    56,    57,    58,   245,    60,
     249,   700,    23,    64,   233,    26,    27,   398,   149,    30,
     479,    32,     7,    23,    35,   262,   485,    38,    39,    40,
     267,    42,    43,  2621,   107,  2623,  2956,    25,    26,    27,
      28,    41,    30,   233,    32,    56,    57,    58,   233,    60,
     233,   700,   479,   256,   233,   235,   401,   402,   485,   256,
     233,   406,   247,   522,   523,   233,   233,   526,   233,   107,
    2783,  2819,   256,   526,  2722,   247,   218,   233,   479,   479,
     539,   233,   256,   479,   485,   485,   539,   247,   233,   575,
     163,   164,   218,   233,  2719,     4,   235,    33,   479,   574,
     138,   700,   233,   138,   485,   247,     4,   107,   247,   138,
     347,   247,   213,   256,   102,   103,     4,     0,  2407,  3006,
     193,  2685,     4,   165,    33,    33,   585,   523,   165,    26,
      27,    28,    33,   256,   593,    33,    18,   149,   138,   143,
     485,   145,   146,   147,   148,    33,   247,   165,   186,   187,
     185,  2978,   247,  2980,   656,   250,    19,   616,  2508,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   165,
      33,   169,   170,  3060,   247,   249,   635,    74,   637,     4,
    2580,   526,   217,    23,  2505,   893,    26,    27,   256,   218,
      30,   233,    32,   193,   883,    35,   233,   656,    38,    39,
      40,    41,    42,    43,   893,   256,   249,    38,    33,   247,
     908,   215,   216,   101,   673,   233,    56,    57,    58,   101,
      60,   247,   249,   727,   250,  2460,    57,    58,   687,  2489,
      61,    62,    63,     4,   883,   233,  1420,     4,     4,  1080,
    1510,   700,   479,   702,   893,   256,     4,   247,    33,    25,
     754,    52,    53,    54,   248,  2394,   250,     5,     6,   247,
      36,     9,    33,  2851,   953,  2853,    33,    33,   727,  1539,
     248,   985,   250,   700,  2978,    33,  2980,  2391,   166,  1170,
     249,  1199,  1285,   881,   883,  1275,   523,  1771,  1694,   981,
    1696,  1231,   751,   840,   893,   754,   850,  1567,  1750,   700,
     700,   805,   771,  2337,   953,  1761,  1166,  2203,   938,  1761,
    1488,  1099,   771,  1750,  1163,   867,  2873,   831,  1466,   700,
    1640,  1588,  2319,  1097,  1761,  1714,  1464,  1750,  1715,  1698,
    1645,   727,  2226,  1668,  1585,  2236,   616,  1750,  1761,  2239,
    1161,  2092,   801,  1041,   803,  2177,   805,  1782,  1761,  1825,
    1934,  2179,  1910,  1777,   953,  2083,  1750,   637,   754,  1750,
    2144,  1888,  1960,  2316,   823,  2224,  2312,  1761,   827,  2032,
    1761,  2325,   831,  2321,   823,   834,   656,   827,  1437,  1937,
    1330,   751,   834,  1372,   876,  1249,   724,  2975,  1168,   879,
    1172,     7,   256,   673,   166,  2684,     6,   834,   166,     9,
      45,    46,   906,   138,   160,   161,   162,   687,   867,   805,
      55,     6,   247,  2154,     9,   250,   256,   876,     8,   249,
     922,    23,   702,   220,   883,   256,  1124,   105,   106,   107,
     108,     4,   233,     7,   893,    33,  1134,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   906,    33,   908,
     249,   207,   208,   906,   249,   908,   883,   213,    26,    27,
       5,     6,    30,   922,    32,   247,   893,    35,   250,   922,
     186,   867,   249,    41,   249,   191,   192,  2035,    73,   938,
      75,    23,   883,   883,   249,  1174,   249,   883,   104,   991,
     727,   247,   893,   893,   953,  1184,   249,   247,   186,    41,
     250,  2059,   883,   191,   192,   107,   105,   106,   107,   108,
     906,   101,   893,   249,  1041,  1042,    19,   754,   249,    22,
     249,   801,   981,   803,  1051,  1174,   953,    30,    30,   988,
      33,   990,   991,   249,   249,  1184,   109,     4,   111,   112,
    1042,   249,  1001,    33,   781,   249,   119,   120,   121,     4,
       5,     6,   953,   953,   981,   249,    11,   953,    30,   247,
      15,   163,   164,   908,  1023,   107,    33,   249,   805,   247,
     248,   247,   953,   186,   250,  1174,   166,   922,   191,   192,
     981,   981,  1041,  1042,   247,  1184,   233,   250,  1041,  1042,
     249,   193,  1051,   938,   247,   185,   138,   250,  1051,   247,
     981,   233,   250,   247,   220,   247,   250,  1134,   250,  1136,
      75,    76,    77,   229,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   249,   247,    35,  1023,   250,  2623,
     867,    40,  1118,    42,   101,   249,   981,   145,  1097,   247,
     148,  1116,   250,    26,  1097,   249,   883,    30,   249,    26,
      27,   193,    35,    30,    33,    32,    65,    40,    35,    42,
     233,   249,   165,    40,   247,  1124,  1168,   250,   185,   906,
     256,   181,   182,   183,   184,  1134,   129,  1136,   131,     8,
       9,  1134,    65,  1136,  2580,   233,   139,    64,   256,   142,
     143,   249,   145,   210,   211,   212,  1041,  1042,   151,   166,
     167,   168,  1161,   156,  1163,   247,  1051,  1166,   161,  1168,
    2352,  1170,   249,  1172,   233,  1174,   953,   170,   185,   221,
     222,   223,   224,   225,   226,  1184,   228,  1231,    33,  1437,
     247,  1420,    33,   105,   106,   107,   108,   249,   191,   192,
    1199,   194,   195,   196,   197,  1249,   199,  1174,  1437,   221,
     222,   223,   224,   225,   226,   185,   228,  1184,  2400,   155,
     156,   157,   158,   159,    30,   247,  1464,  2508,   250,   249,
     223,  1420,  1231,  1174,  1174,   247,   233,  2518,  1174,   232,
     210,   211,   212,  1184,  1184,   249,  1023,   233,  1437,   138,
    1249,  1136,   245,  1174,   247,    23,    26,    27,   247,  1488,
      30,   250,    32,  1184,   220,    35,   247,   203,  2549,   250,
      40,   249,   247,    41,   267,   250,   247,   247,   271,   250,
     249,  1420,   247,    26,    27,   250,  1330,  1668,  1287,    32,
    1289,   249,    35,  2391,    64,  1231,  2394,    40,  1437,  1488,
     233,  2325,  2326,  2327,  2328,  2329,   299,   256,  2032,   226,
    1309,   247,  1311,  1249,   249,   247,   309,  2851,   250,   249,
     247,    64,  2346,   250,   249,  2321,   219,  2319,   185,  2321,
     247,  1330,   233,   326,  2144,   247,  2434,   247,   250,   107,
     250,   249,  2319,  1163,  2321,   249,  1166,   249,  1168,  1488,
    1170,  1287,  1172,   210,   211,   212,  2319,  2303,  2321,  2305,
      23,     5,     6,  1601,    80,  2463,  2319,  2177,  2321,  2179,
     138,    87,    88,  1309,   249,    91,    92,   370,    41,  1199,
     247,    37,  2192,   250,  2194,  2319,   247,  2321,  2319,   250,
    2321,    66,    67,   247,  1330,    23,   250,  1174,    26,    27,
    1444,   249,    30,   247,    32,   398,   250,    35,   401,   402,
      38,   249,    40,   406,    42,   221,   222,   223,   224,   225,
     226,  1420,   228,   247,  1466,   193,   250,   249,    56,    57,
      58,   233,    60,    47,    23,   249,    64,   247,  1437,   247,
     250,  1440,   250,  1442,   107,  1444,   249,  1440,    23,  1442,
     249,  1444,    41,  1420,  1231,   249,   226,   160,   161,   162,
    1698,   145,   146,   147,   148,  1464,   249,  1466,   249,  1289,
    1437,  1464,  1249,  1466,  1712,   138,  2757,   249,   247,  1420,
    1420,   250,   247,   226,  1420,   250,   479,   247,   249,  1488,
     250,  1311,   485,   249,    26,    27,  1437,  1437,  1275,  1420,
      32,   233,  1501,   247,   207,   208,   250,   249,  1444,    41,
    1287,  1510,  2793,   160,   161,   162,  1437,   233,   107,   247,
     249,  1488,   250,   186,   187,  1567,   242,   243,   244,   522,
     523,  1530,  1309,   526,  1601,    30,    68,   253,   254,   255,
    1539,   249,   247,   249,   247,   250,   539,  1488,  1488,   138,
     249,   247,  1488,  1330,   250,     8,     9,  1624,   249,   160,
     161,   162,   160,   161,   162,  1501,   138,  1488,  1567,     8,
       9,    26,    27,  1640,  1803,    30,    33,    32,   249,  1464,
      35,  1466,  1624,    38,    39,    40,  1585,    42,    43,  1588,
      33,   185,   585,  1592,  1530,   249,  1825,     5,     6,  1592,
     593,    41,  1601,     6,   193,   250,   207,   208,  1601,   207,
     208,   113,   114,   115,  1803,  2639,   210,   211,   212,   213,
    1440,  2719,  1442,   616,  2722,  1624,   247,   248,   256,   142,
     143,  1624,   145,   146,   147,   148,  1825,   215,   216,   247,
     248,  1640,   635,  1420,   637,  1712,   247,  1640,  2632,  2633,
     249,    30,  1588,     5,     6,   250,  1592,     9,   249,    11,
     248,    30,   249,   656,  1803,   249,  1692,  1444,   249,  1736,
     155,   156,   157,   158,   159,  2956,  1691,   226,  2959,   249,
     673,   249,  1697,   249,   249,   249,  1825,   249,   249,    26,
      27,   249,   249,    30,   687,    32,   249,   249,    35,  1698,
     250,    38,    39,    40,    41,    42,    43,   700,   249,   702,
     233,  1488,   250,  1712,   233,   250,  1601,  2527,   203,  1712,
     250,    73,   248,    75,  1501,   247,   221,   222,   223,   224,
     225,   226,   250,   228,   727,    26,    27,  1736,   248,  1624,
     247,    32,   250,  1736,    35,   249,   247,   250,  2558,    40,
     250,   248,   247,  1530,   250,  1640,   248,   250,   751,   249,
      23,   754,    25,    26,    27,    28,   249,    30,   250,    32,
     250,   248,    35,    64,   250,    38,   249,    40,   771,    42,
     248,   250,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   248,    56,    57,    58,   247,    60,   250,   248,
      41,   256,   247,  2032,  1803,     6,   250,   248,   801,    33,
     803,  1588,   805,   248,   250,  1592,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  1825,   250,    33,   249,
     823,   249,   249,   160,   161,   162,  1803,   249,   831,   233,
     250,   834,   248,  2032,   248,    38,  2870,   840,   247,  2873,
     250,  1736,   221,   222,   223,   224,   225,   226,  1825,   228,
     249,   249,  1803,  1803,    57,    58,   107,  1803,    61,    62,
      63,   134,   135,   136,   137,   249,   139,   249,   247,   249,
     207,   208,  1803,   876,  1825,  1825,   213,   150,   151,   152,
     883,   249,   248,  2032,   248,   250,   137,   138,   249,   247,
     893,   250,   248,   233,  1825,   250,   248,    25,    26,    27,
      28,  1910,    30,   906,    32,   908,   247,    35,   247,   256,
     193,   249,    40,   143,    42,   145,   146,   147,   148,   922,
     171,   250,   173,   250,   250,  1934,   233,    70,  1937,   197,
     198,   199,   200,   201,   202,   938,   233,    65,   247,   190,
     250,   247,   193,  2977,   248,  2979,   248,   250,   247,   247,
     953,  1960,   248,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  2783,  1910,    35,   250,   233,    38,    39,
      40,    41,    42,    43,   102,   103,  2224,   248,   981,   247,
      26,    27,   249,   256,    30,   988,    32,   990,   991,    35,
     250,  1937,   250,   250,    64,    41,   247,   250,  1001,  2819,
      93,    94,    95,    96,    97,    98,    99,   100,   250,  3043,
    3044,    47,    48,    49,    50,    51,  1803,   250,   250,     6,
    1023,   249,   249,  2032,   248,   248,  2035,   249,  2037,  2083,
     247,   250,  2035,   166,  2037,   185,   250,   250,  1041,  1042,
     248,  3075,    23,  3077,   248,    26,    27,   248,  1051,    30,
    2059,    32,  2061,   250,    35,  2032,  2059,    38,  2061,    40,
      41,    42,   248,   250,  2312,   250,   250,   247,   250,   247,
      87,    88,   248,   250,  2083,    56,    57,    58,   250,    60,
    2083,  2032,  2032,   248,   250,   247,  2032,    87,    88,  2035,
     249,    91,    92,   249,  1097,    87,    88,   249,  2337,    91,
      92,  2032,   247,   250,  1934,   213,   248,   238,   249,  1896,
     250,   249,  2121,  2059,   249,    78,    79,    80,   248,   247,
     233,  1124,   248,  1910,    87,    88,   107,  2179,    91,    92,
    1960,  1134,   250,  1136,   249,  2144,   233,  2083,  2337,   249,
     233,    25,    26,    27,    28,  2154,    30,  2224,    32,  2226,
    1937,   160,   161,   162,   250,   249,   137,   138,  1161,   233,
    1163,   247,   249,  1166,   248,  1168,   248,  1170,  2177,  1172,
    2179,  1174,   167,   250,  2226,  2121,   185,   168,   250,   248,
     233,  1184,   249,  2192,   233,  2194,   256,   248,  2337,  2192,
     171,  2194,   173,   233,  2203,   247,  1199,   247,   207,   208,
    2203,   210,   211,   212,   248,   250,   247,  2037,  2154,   190,
     248,   250,   193,   250,    71,  2224,   250,  2226,   102,   103,
     248,  2224,   248,  2226,   248,   242,   243,   244,  1231,   250,
     250,  2061,   233,   233,   233,  2312,   253,   254,   255,  2316,
     251,   233,   242,   243,   244,  2032,  1249,   250,  2035,   233,
     242,   243,   244,   253,   254,   255,   233,  2203,   166,   248,
     250,   253,   254,   255,   250,  2301,   247,   166,   248,   248,
     233,   233,  2059,   227,  2299,   250,   250,   250,   248,   242,
     243,   244,  2307,   247,  1287,   227,  1289,   248,   247,   238,
     253,   254,   255,   248,   250,   233,  2083,  3054,  3055,  3056,
    3057,  3058,  3059,  2312,   250,   238,  1309,  2316,  1311,  2312,
     250,   248,   248,  2316,   248,    93,    94,    95,    96,    97,
      98,    99,   100,   250,   249,  3082,   249,  1330,  2337,  2224,
     233,  2226,     5,   250,  2121,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   249,    23,    35,   249,    26,
      38,    39,    40,    30,    42,    43,   249,   249,    35,   249,
    2337,    38,   249,    40,   249,    42,   249,  2154,    56,    57,
      58,   238,    60,   238,   233,   110,    64,   252,   238,    56,
      57,    58,  2391,    60,   233,  2394,  2337,  2337,   250,   250,
     233,  2337,   233,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   249,   233,    35,  2337,   233,    38,    39,
      40,   250,    42,    43,   248,   250,  2203,  1420,   233,   250,
     250,  2316,   233,   248,   233,  2434,    56,    57,    58,   250,
      60,  2434,   250,  1244,  1437,   248,  1247,  1440,   248,  1442,
     248,  1444,   233,   233,  2329,  2391,  2870,  2703,  2394,  2367,
     158,  2460,   158,   158,  2463,   233,   158,  2460,   158,   158,
    2463,  1464,   158,  1466,    25,    26,    27,    28,   158,    30,
    1906,    32,   158,  1685,    35,  1104,   158,   172,  1689,    40,
    2489,   172,  2424,   172,  3018,  1488,  2489,  3093,  2434,  2933,
     221,   222,   223,   224,   225,   226,  2505,   228,  1501,  2508,
    3066,  2612,  2621,    64,  2851,   158,   158,  1510,   158,  2518,
     158,   158,   158,   158,   158,  2518,   158,  2463,  2527,   158,
     158,   158,   158,   158,  2527,   158,   158,  1530,    23,  2703,
      25,    26,    27,    28,  2703,   158,  1539,    32,  2703,  2703,
    2549,   102,   103,   158,  2703,   158,  2549,   158,   158,  2558,
    2337,   158,   158,   158,   158,  2558,   158,   158,  2703,  2505,
    2703,  2703,  2508,  2703,  1567,  2703,  2703,  1368,   256,  1363,
    2688,  2580,  2518,  3105,   330,  1386,   635,  2580,   837,  1891,
    2361,  2636,  1585,    -1,    -1,  1588,   129,  1896,   131,  1592,
    1401,    -1,    -1,    -1,    -1,  1406,   139,    -1,  1601,   142,
     143,    -1,    -1,  2549,  2391,    -1,    -1,  2394,   151,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,   161,    -1,
      -1,  1624,    78,    79,    80,    -1,   256,   170,    -1,    -1,
    2460,    87,    88,    -1,  2580,    91,    92,  1640,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,  2434,   191,   192,
      -1,   194,   195,   196,   197,    -1,   199,  1468,  1469,  2489,
     197,   198,   199,   200,   201,   202,  2703,    -1,  2703,  2703,
    2703,  2703,  2703,  2703,  2703,    -1,  2463,    -1,    -1,    -1,
     223,    -1,  1493,  1494,    26,    27,   247,    -1,    30,   232,
      32,    -1,    -1,    35,    -1,  1698,    38,    39,    40,    41,
      42,    43,   245,    -1,   247,    -1,    -1,    -1,    -1,  1712,
    2719,    -1,    -1,  2722,    -1,    -1,  2719,    -1,  2505,  2722,
      -1,  2508,    -1,    -1,   267,    -1,    -1,    -1,   271,    -1,
      -1,  2518,    -1,  1736,    23,    -1,    25,    26,    27,    28,
      -1,    30,    -1,    32,    -1,    -1,    35,    -1,  2757,    38,
      -1,    40,   247,    42,  2757,    -1,   299,    -1,    -1,    -1,
      -1,    -1,  2549,    -1,    -1,    -1,   309,    56,    57,    58,
      -1,    60,    -1,  2719,  2783,    64,  2722,   233,    -1,    -1,
    2783,    -1,    -1,    -1,  2793,    -1,   242,   243,   244,    -1,
    2793,    -1,    -1,  2580,    -1,    -1,    -1,   253,   254,   255,
    1803,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
    2819,  2757,    -1,   102,   103,    -1,  2819,    -1,    -1,    87,
      88,    -1,  1825,    91,    92,    -1,    -1,   370,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,  2793,    38,    -1,
      40,    41,    42,    -1,    -1,   398,    -1,    -1,   401,   402,
      -1,    -1,    -1,   406,    -1,    -1,    56,    57,    58,    -1,
      60,   113,   114,   115,   116,   117,   118,  1688,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    -1,  1910,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,  1934,  2719,    -1,  1937,  2722,   479,    -1,    -1,    -1,
      -1,   233,   485,    -1,   134,   135,   136,  2956,    -1,   139,
    2959,    -1,    -1,  2956,    -1,    -1,  2959,  1960,   247,    -1,
     150,   151,   152,    -1,    -1,   233,    -1,    -1,    -1,    -1,
    2757,    -1,    -1,    -1,   242,   243,   244,    -1,    -1,   522,
     523,    -1,    -1,   526,    -1,   253,   254,   255,   174,   175,
     176,   177,   178,   179,   180,    -1,   539,    -1,   134,   135,
     136,    -1,    -1,   139,    -1,    -1,  2793,    -1,    -1,    -1,
    2956,    -1,    -1,  2959,   150,   151,   152,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,  2032,
      35,    -1,  2035,    -1,  2037,    40,    41,    42,    25,    26,
      27,    28,   585,    30,    -1,    32,    -1,    -1,    35,    -1,
     593,    -1,    -1,    40,    -1,    42,  2059,    -1,  2061,    -1,
      65,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,   616,    -1,    -1,    -1,    -1,    65,    -1,
    2083,    23,    -1,    25,    26,    27,    28,   129,    -1,   131,
      32,    -1,   635,    -1,   637,    -1,    -1,   139,   140,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,   656,    -1,   102,   103,    -1,  2121,   161,
     256,    -1,    23,    -1,    25,    26,    27,    28,    -1,    30,
     673,    32,   137,   138,    35,    -1,    -1,    -1,    -1,    40,
      -1,  2144,   256,    -1,   687,    -1,    -1,    -1,    -1,    -1,
     192,  2154,   194,   195,    -1,    -1,    -1,   700,    -1,   702,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,  2956,
      -1,    -1,  2959,    -1,  2177,    -1,  2179,  1988,    -1,    -1,
      -1,   223,    -1,    -1,   727,   190,    -1,    -1,   193,  2192,
     232,  2194,   134,   135,   136,   137,   138,   139,   140,   141,
    2203,    -1,    -1,   245,    -1,   247,    -1,    -1,   751,    -1,
      23,   754,    25,    26,    27,    28,    -1,    30,    -1,    32,
      -1,  2224,    35,  2226,    -1,   267,    -1,    40,   771,   271,
      -1,    -1,    -1,   134,   135,   136,   137,    -1,   139,    -1,
     282,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,   801,    -1,
     803,    -1,   805,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
     823,    -1,    38,    39,    40,    -1,    42,    43,   831,    -1,
      -1,   834,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   347,    -1,    35,    64,  2312,
      38,    39,    40,  2316,    42,    43,    -1,    -1,    78,    79,
      80,   134,   135,   136,   137,    -1,   139,    87,    88,    -1,
      -1,    91,    92,   876,  2337,    -1,    -1,   150,   151,   152,
     883,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     893,    -1,    -1,    -1,    -1,   256,   398,    -1,    -1,   401,
     402,    -1,    -1,   906,    -1,   908,    -1,    -1,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,   922,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,  2391,    -1,
      -1,  2394,    -1,    -1,   247,   938,    32,    33,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    -1,    -1,    -1,
     953,    -1,    23,    -1,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,  2434,    -1,    -1,   247,    -1,    -1,   479,   981,    25,
      26,    27,    28,   485,    30,   988,    32,   990,   991,    35,
      -1,   247,    -1,    64,    40,    26,    27,  2460,  1001,    30,
    2463,    32,    -1,    -1,    35,   101,    -1,    38,    39,    40,
      -1,    42,    43,   233,    -1,    -1,    -1,    -1,    64,    -1,
    1023,   523,   242,   243,   244,    -1,  2489,    -1,    -1,    -1,
      -1,   102,   103,   253,   254,   255,   107,    -1,  1041,  1042,
     256,    -1,  2505,    -1,    -1,  2508,    -1,    -1,  1051,    -1,
      -1,    -1,    -1,    -1,    -1,  2518,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,  2527,    -1,   137,   138,   256,    -1,
      -1,    -1,    23,  2344,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,   585,    35,    -1,  2549,    38,    -1,    40,
      41,    42,    -1,    -1,  1097,  2558,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,    -1,    64,   616,    -1,    -1,  2580,    -1,   190,
      -1,  1124,   193,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,  1134,    -1,  1136,    -1,   637,    -1,    -1,    -1,    -1,
      -1,    -1,  2413,    -1,    -1,    -1,    -1,    -1,  2419,    -1,
      -1,   102,   103,    -1,   656,   226,   107,    -1,  1161,    -1,
    1163,    -1,    -1,  1166,    -1,  1168,    -1,  1170,    -1,  1172,
      -1,  1174,    -1,    -1,    23,    -1,   247,    26,    27,    -1,
      -1,  1184,    -1,    32,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,  1199,    -1,   700,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
     171,    -1,   173,    -1,    -1,   727,    -1,    -1,  1231,    -1,
    2501,    -1,    56,    57,    58,    -1,    60,    -1,    -1,   190,
      64,    -1,   193,    -1,    -1,    -1,  1249,    -1,    -1,   751,
      -1,    -1,   754,    -1,   103,    -1,  2719,    -1,   107,  2722,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,   771,
      55,   233,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     242,   243,   244,   107,  1287,    -1,  1289,    -1,   137,   138,
      -1,   253,   254,   255,  2757,    -1,   247,    -1,    -1,   801,
      -1,   803,    -1,   805,    -1,    -1,  1309,    -1,  1311,    -1,
      -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,    -1,
    2783,   823,   171,   172,   173,   827,    -1,  1330,    -1,    -1,
    2793,    -1,    -1,  2604,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,    -1,   193,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    23,  2819,    25,    26,    27,
      28,    -1,    30,    -1,    32,   867,   190,    35,    -1,   193,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,   883,    -1,    -1,    -1,  2656,  2657,    -1,    56,    57,
      58,   893,    60,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   906,    -1,   908,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  1420,    -1,    35,
     922,    -1,    -1,   247,    40,    -1,    42,    -1,    -1,  2700,
      -1,    -1,    -1,    -1,  1437,    -1,    -1,  1440,    -1,  1442,
      -1,  1444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,   953,   194,   195,   196,   197,   198,   199,   200,   201,
     202,  1464,    -1,  1466,  2735,  2736,   134,   135,   136,   137,
      -1,   139,    -1,    -1,  2745,  2746,  2747,  2748,    -1,   981,
      -1,    -1,   150,   151,   152,  1488,   988,    -1,   990,   991,
      -1,   233,    -1,  2956,    -1,    -1,  2959,    23,  1501,    -1,
      26,    27,   161,    -1,    30,    -1,    32,  1510,    -1,    35,
      -1,   170,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,  1023,    -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,
      56,    57,    58,    -1,    60,    -1,  1539,    -1,    64,  1041,
    1042,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,  1567,    -1,    35,    -1,    -1,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,   247,
      -1,    -1,  1585,    -1,    -1,  1588,    -1,    -1,    -1,  1592,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,  1601,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,  2884,  2885,    38,    39,    40,    41,    42,
      43,  1624,  1124,    -1,    -1,    -1,    -1,    -1,  1210,  1211,
    1212,  1213,  1134,   102,   103,    -1,    -1,  1640,   107,    -1,
      -1,    64,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1163,    41,    -1,  1166,    -1,  1168,    -1,   137,   138,
      -1,    -1,  1174,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,  1184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2962,    -1,    -1,  2965,  1698,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,    -1,    -1,    -1,  1712,
      -1,    -1,    -1,    -1,    -1,    -1,  2987,  2988,  2989,    -1,
      -1,   190,    -1,    -1,   193,    -1,    -1,    -1,   107,  1231,
      -1,    -1,    -1,  1736,    -1,    -1,    -1,    -1,    -1,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1249,    -1,    -1,
    1332,    -1,    -1,  3024,  3025,  3026,  3027,    -1,   137,   138,
    1342,  1343,    -1,  1345,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,   247,    38,
      39,    40,    41,    42,    43,  1287,    -1,  1289,    -1,    -1,
      -1,    -1,   171,    -1,   173,  1377,  1378,    -1,    -1,  1381,
    1803,    -1,  3073,  3074,    -1,    64,    -1,  1309,    -1,  1311,
      -1,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
     479,    -1,  1825,    -1,   247,    -1,   485,    -1,  1330,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    -1,    -1,   522,   523,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
     539,    64,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    38,    39,    40,    41,    42,    43,  1910,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    -1,  1420,   102,
     103,    -1,    -1,    -1,   107,    -1,    -1,    64,    -1,    -1,
      -1,  1934,    -1,    -1,  1937,  1437,    -1,    -1,  1440,    -1,
    1442,    23,  1444,    25,    26,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,   137,   138,    38,  1960,    40,    -1,
      42,    -1,  1464,    -1,  1466,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,
      -1,    -1,    64,    -1,    -1,   129,  1488,   131,   171,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,  1501,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   190,  1510,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,  1530,  2032,
      -1,    -1,  2035,    -1,  2037,    -1,    -1,  1539,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,
     194,   195,   196,   197,    -1,   199,  2059,    -1,  2061,    -1,
      -1,    -1,    -1,    -1,   247,  1567,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,    -1,   223,
    2083,    -1,    -1,    -1,    -1,    -1,  1588,    -1,   232,    -1,
    1592,    -1,    -1,    -1,    -1,    -1,  1678,  1679,    -1,  1601,
      -1,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2121,    -1,
      -1,    -1,  1624,   267,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,  2144,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,  2154,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    60,    23,    -1,    25,    26,
      27,    28,    -1,    30,  2177,    32,  2179,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,  2192,
      -1,  2194,    -1,    -1,    -1,    -1,  1698,    -1,    -1,    -1,
    2203,    -1,    -1,   347,    -1,    -1,    -1,    -1,    65,    -1,
    1712,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2224,    -1,  2226,   883,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,   893,    32,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    41,   102,   103,    -1,    -1,    -1,
     107,    -1,    -1,    -1,   398,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,   171,    -1,   173,    -1,
     137,   138,    -1,    -1,    -1,    -1,  1868,    -1,    56,    57,
      58,    -1,    60,    -1,   953,   190,    -1,    -1,   193,    -1,
      -1,  1803,    -1,    -1,    -1,   102,   103,    -1,    -1,  2312,
     107,    -1,  1894,  2316,   171,    -1,   173,    -1,    -1,  1901,
      -1,    -1,   981,  1825,    -1,    -1,    -1,    -1,    -1,   988,
      -1,   990,   991,   190,  2337,   479,   193,    -1,    -1,   107,
     137,   138,  1001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,   247,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    41,   137,
     138,    -1,    -1,    -1,   171,    -1,   173,    -1,   522,   523,
      -1,    -1,  1041,  1042,    -1,    -1,    -1,    -1,  2391,    -1,
     247,  2394,  1051,   190,    -1,  1977,   193,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,     4,  1910,     6,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,   190,    -1,    21,   193,    -1,    -1,    -1,  2011,
     103,  2434,  1934,    -1,   107,  1937,    33,    34,  1097,    -1,
      -1,    -1,    -1,    -1,  2026,    -1,    43,    -1,    -1,   593,
     247,    -1,    -1,    -1,    -1,    -1,    -1,  2460,  1960,    -1,
    2463,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,   616,    -1,    -1,  1134,    73,  1136,    75,   247,
      -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,    -1,    -1,
      -1,   635,    -1,   637,    -1,    -1,    -1,    -1,   171,   172,
     173,    -1,  2505,    -1,   101,  2508,    -1,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    -1,  2518,    -1,   190,    -1,    -1,
     193,    -1,    -1,    -1,  2527,    -1,    -1,    -1,    -1,   673,
    2032,    -1,    -1,  2035,    -1,  2037,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   687,    -1,    -1,  2549,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,  2558,   700,  2059,   702,  2061,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,   165,    25,
      26,    27,    28,    -1,    30,    -1,    32,  2580,    -1,    35,
      -1,  2083,    -1,   727,    40,    23,    -1,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,   751,    -1,    -1,
     754,    -1,   209,    -1,    -1,    -1,    -1,   214,    -1,  2121,
      -1,    -1,    -1,    -1,    -1,    -1,    64,   771,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,  2144,    -1,    38,    39,    40,    41,    42,    43,
    2232,  2233,  2154,    -1,    -1,    -1,    -1,   801,    -1,   803,
      -1,   805,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
      64,    -1,    -1,  2255,    -1,  2177,    -1,  2179,   134,   135,
     136,   137,    -1,   139,    -1,    -1,    -1,   831,    -1,    -1,
    2192,    -1,  2194,    -1,   150,   151,   152,    -1,    -1,   137,
     138,  2203,    -1,   129,    -1,   131,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,    -1,    -1,  2719,    -1,    -1,  2722,
      -1,    -1,  2224,   867,  2226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,    -1,    -1,   883,
      -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,   893,
      -1,    -1,   190,    -1,  2757,   193,    -1,    -1,    -1,    -1,
      -1,  1420,   906,    -1,    -1,    -1,   192,    -1,   194,  2351,
      -1,  2353,  2354,  2355,  2356,  2357,    -1,   171,  1437,   173,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
    2793,    -1,    -1,    -1,    -1,    -1,   190,   223,    -1,   193,
      -1,    -1,    -1,    -1,    -1,  2387,   232,    -1,    -1,   953,
    2312,    -1,    -1,    -1,    -1,    -1,  2819,  2399,    -1,   245,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1488,
      -1,    -1,    -1,    -1,  2416,  2337,    -1,    -1,    -1,    -1,
      -1,  2423,  1501,    -1,   988,  2427,   990,   991,    -1,    -1,
      -1,  1510,    -1,   247,    -1,    -1,    -1,  1001,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,  1530,    -1,    38,    39,    40,    41,    42,    43,  1023,
    1539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2391,
      -1,    -1,  2394,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1567,    -1,
      35,    -1,  2494,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1585,    -1,    -1,  1588,
      -1,    -1,  2434,  1592,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2956,    -1,    -1,  2959,    -1,  2460,    -1,
      -1,  2463,    -1,    -1,    -1,  1624,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    27,    28,    -1,    30,    -1,    32,
      -1,  1640,   107,    -1,    -1,    -1,    -1,  2489,    41,    -1,
      -1,    -1,    -1,  1137,  1138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2505,    -1,    -1,  2508,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,  2518,  1161,    -1,  1163,
      -1,  2603,  1166,  2605,  1168,  2527,  1170,    -1,  1172,    -1,
    1174,    -1,    -1,    -1,    -1,    -1,  2618,    -1,    -1,    -1,
    1184,    -1,    -1,    -1,    -1,    -1,   171,  2549,   173,   102,
     103,    -1,    -1,  1712,   107,  1199,  2558,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1736,  2580,    -1,
      -1,   129,    -1,   131,   137,   138,    -1,  1231,    -1,    -1,
      -1,    -1,   140,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,  1249,    -1,    -1,    -1,    -1,
    2692,    -1,    23,   161,    25,    26,    27,    28,   171,    30,
     173,    32,   247,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,  2718,   190,    -1,    -1,
     193,    -1,    -1,  1287,   192,  1289,   194,   195,   196,    -1,
      -1,    -1,    -1,    64,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,  1309,    35,  1311,    -1,    38,
      39,    40,    41,    42,    43,   223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,  1330,    -1,    -1,    -1,
     616,   102,   103,    -1,   247,    64,   107,   245,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   637,    -1,    -1,    -1,    -1,    -1,  2719,    -1,   267,
    2722,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,    -1,    23,   107,    -1,
      26,    27,    -1,    -1,    30,    -1,    32,    -1,  2830,    35,
    2832,   299,    38,    39,    40,  2757,    42,    43,    -1,    -1,
     171,    -1,   173,  2845,    -1,    -1,    -1,    -1,   137,   138,
      56,    57,    58,    -1,    60,    -1,  1420,    -1,    -1,   190,
      -1,  2783,   193,    -1,    -1,    -1,   129,    -1,   131,    -1,
      -1,  2793,    -1,  1437,    -1,  2877,  1440,   140,  1442,   347,
    1444,   727,   171,    -1,   173,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,    -1,    -1,
      -1,   190,    -1,    -1,   193,   751,    -1,    -1,   754,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1488,   771,    -1,    -1,    -1,   192,
     398,   194,   195,    -1,   402,    -1,    -1,  1501,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1510,    23,    -1,    25,
      26,    27,    28,  2032,    -1,   801,    32,   803,   247,    35,
     223,    -1,    -1,    -1,    40,    41,  1530,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,  1539,    -1,    -1,    -1,  2981,
      -1,    -1,   245,    -1,   247,    -1,    -1,    -1,    64,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,  1567,   267,    -1,    -1,    40,    41,    42,
      -1,   479,    -1,    -1,    -1,    -1,    -1,   485,    -1,   282,
      -1,  1585,    -1,    -1,  1588,    -1,   102,   103,  1592,    -1,
      -1,   107,    65,    -1,  2956,    -1,    -1,  2959,    -1,    -1,
      -1,    23,  2121,    25,    26,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,   523,    -1,    -1,    40,    41,
      42,   137,   138,    -1,    -1,  2144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,   107,  2154,    26,    27,    -1,    -1,
      30,    -1,    32,    65,   347,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,   171,    -1,   173,  2177,    -1,
    2179,    -1,    -1,    -1,   137,   138,    56,    57,    58,    -1,
      60,    -1,    -1,  2192,   190,  2194,    -1,   193,    -1,    -1,
     102,   103,    -1,    -1,  2203,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   402,
     173,    -1,   988,    -1,   990,  2224,    -1,  2226,   616,    -1,
     226,    -1,    -1,    -1,    -1,   137,   138,   190,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   637,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1750,    -1,   656,   171,
      -1,   173,    -1,    -1,    -1,    -1,    -1,  1761,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   673,    -1,    -1,   190,    -1,
      23,   193,    -1,    26,    27,    -1,   479,    30,    -1,    32,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      -1,    -1,   700,  2312,    -1,    -1,    -1,  2316,    -1,  1803,
      -1,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,
     523,  1825,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,   751,    35,    -1,   754,    38,    39,    40,
      41,    42,    43,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   771,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,  1163,    -1,    -1,
    1166,    -1,    -1,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   801,    -1,   803,    -1,   805,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1910,    -1,    -1,    -1,
      -1,   102,   103,   616,    -1,    -1,    -1,    -1,   171,   827,
     173,    -1,    -1,   831,    -1,    -1,    -1,    -1,    -1,    -1,
    1934,    -1,    -1,  1937,   637,    -1,    -1,   190,    -1,    -1,
     193,    -1,    -1,    -1,    -1,  1231,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   656,    -1,    -1,  1960,    -1,    -1,   867,
      -1,    -1,    23,  1249,    25,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,   150,   883,    -1,    -1,    -1,   150,
      41,    -1,    -1,    -1,    -1,   893,  2505,    -1,    -1,  2508,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   906,  2518,
      -1,  1287,    -1,  1289,    -1,    -1,    -1,    -1,  2527,    -1,
      -1,    -1,    -1,    -1,   922,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1309,   727,  1311,    -1,    -1,  2032,    -1,
    2549,  2035,    -1,  2037,    -1,    -1,    -1,    -1,    -1,  2558,
      -1,   102,   103,    -1,    -1,   953,   107,   223,   751,    -1,
      -1,   754,   223,    -1,    -1,  2059,   247,  2061,    -1,    -1,
      -1,  2580,    -1,    -1,    -1,    -1,    -1,    -1,   771,   245,
      -1,    -1,    -1,   981,   245,    -1,   137,   138,    -1,  2083,
     988,    -1,   990,   991,    -1,    -1,   262,    -1,    -1,    -1,
      -1,   267,    -1,    -1,    -1,    -1,   267,    -1,   801,    -1,
     803,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,  1023,    -1,  2121,    -1,    -1,
      -1,    -1,    -1,    -1,   827,    -1,    -1,    -1,    -1,   190,
      -1,    -1,   193,    -1,  1042,    -1,    -1,    -1,    -1,    -1,
    2144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,  1440,    -1,  1442,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   867,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,  2177,    -1,  2179,   347,    -1,    -1,    -1,
     883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2192,    -1,
    2194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2203,
      -1,    -1,    -1,   906,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1501,    -1,    -1,    -1,   922,
      -1,    -1,    -1,    -1,  1510,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    27,    28,    -1,    30,  2757,    32,
      -1,    -1,    35,    -1,  1530,    -1,    -1,    40,    41,    -1,
     953,    -1,    -1,  1539,    -1,  1163,    -1,    -1,  1166,    -1,
    1168,    -1,  1170,    -1,  2783,    -1,  1174,    -1,    -1,    -1,
      -1,    64,    -1,    -1,  2793,    -1,  1184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2819,    -1,    -1,   479,    -1,    -1,    -1,    -1,   479,   102,
     103,    -1,    -1,    -1,   107,  2319,    -1,  2321,    -1,    -1,
    1023,    -1,    -1,  1231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2337,    -1,    -1,    -1,    -1,    -1,  1042,
      -1,  1249,    -1,    -1,   137,   138,    -1,   523,    -1,    -1,
      -1,    -1,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,    23,   131,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    -1,    35,   171,  1287,
     173,  1289,    40,    -1,    -1,   150,    -1,  2391,    -1,    -1,
    2394,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     193,  1309,    -1,  1311,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,
      39,    40,  1330,    42,    43,    -1,    -1,   192,    -1,   194,
    2434,    -1,    -1,    -1,    -1,    -1,    -1,  2956,    -1,    -1,
    2959,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2460,    -1,   223,  2463,
    1163,    -1,    -1,  1166,    -1,  1168,    -1,   232,    -1,    -1,
      -1,  1174,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     245,   139,   247,    -1,    -1,  2489,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,    -1,    -1,   262,    -1,    -1,
      -1,  2505,   267,    -1,  2508,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1420,    -1,  2518,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2527,    -1,    -1,    -1,    -1,  1231,  1437,
      -1,    -1,  1440,    -1,  1442,    -1,  1444,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2549,  1249,    -1,    -1,    -1,
      -1,   727,    -1,    -1,  2558,    -1,   727,    -1,  1466,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2580,    -1,   754,    -1,
    1488,    -1,   347,   754,  1287,    -1,  1289,    -1,    -1,    -1,
      -1,    -1,    -1,  1501,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1510,    -1,    -1,   781,  1309,    -1,  1311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1530,    -1,  1910,    -1,    -1,  1330,    -1,   805,
      -1,  1539,    -1,    -1,   805,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,  1934,    35,
      -1,  1937,    38,    39,    40,    -1,    42,    43,    -1,  1567,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,  1960,    -1,    20,    21,    -1,    -1,
    1588,    -1,    -1,    -1,  1592,    -1,    -1,    -1,    32,    33,
      34,   867,    -1,    -1,    -1,    -1,   867,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   883,    -1,    -1,
      -1,    -1,   883,    -1,   479,  2719,  1624,  1420,  2722,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
     906,    75,   401,   402,    -1,   906,    -1,  1440,    -1,  1442,
      -1,  1444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,
      -1,  2037,    -1,  2757,    -1,    -1,    -1,   101,   523,    -1,
     104,    -1,    -1,  1466,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2059,    -1,  2061,    -1,   953,    -1,  2783,
      -1,    -1,   953,    -1,    -1,  1488,    -1,    -1,    -1,  2793,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1501,   143,
      -1,    -1,    -1,    -1,    -1,   149,   129,  1510,   131,   153,
     154,    -1,    -1,    -1,    -1,  2819,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2121,  1539,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,
      -1,   616,  1023,    -1,    -1,    -1,    -1,   526,  2144,    -1,
     204,   205,   206,    -1,  1567,   209,    -1,    -1,  2154,   192,
     214,   194,   637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,  1592,
      -1,  2177,    -1,    -1,    -1,  1803,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,    -1,    -1,  2192,    -1,  2194,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1825,    -1,    -1,
      -1,  1624,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,  2956,    -1,    -1,  2959,    -1,    -1,    -1,    -1,
      -1,    -1,   727,    -1,    56,    57,    58,    -1,    60,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   751,    -1,    -1,   754,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1174,    -1,
      -1,    -1,  1910,  1174,    -1,    -1,   771,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,   781,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1934,    -1,    -1,  1937,
      23,    -1,    25,    26,    27,    28,   801,    30,   803,    32,
     805,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      -1,    -1,  1960,    -1,    -1,  1231,    -1,    -1,    -1,    -1,
    1231,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,    64,    -1,  1249,    -1,    -1,    -1,    -1,  1249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1275,
    1803,    -1,   867,    -1,    -1,  2391,    -1,    -1,  2394,   102,
     103,  1287,    -1,    -1,   107,    -1,  1287,    -1,   883,    -1,
      -1,    -1,    -1,    -1,  2032,    -1,    -1,  2035,    -1,  2037,
      -1,    -1,    -1,  1309,    -1,    -1,    -1,    -1,  1309,    -1,
      -1,   906,    -1,    -1,   137,   138,    -1,    -1,  2434,    -1,
      -1,  2059,    -1,  2061,  1330,   247,    -1,    -1,    -1,  1330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2460,  2083,    -1,  2463,   171,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     193,    -1,    -1,  2489,    -1,    -1,    -1,  1910,    -1,    -1,
      -1,    -1,    -1,  2121,    -1,    -1,    -1,    -1,    -1,  2505,
      -1,    -1,  2508,   988,    -1,   990,    -1,    -1,    -1,    -1,
      -1,  1934,  2518,    -1,  1937,    -1,  2144,   906,    -1,   908,
      -1,  2527,    -1,    -1,  1420,    -1,  2154,    -1,    -1,  1420,
      -1,    -1,    -1,   922,    -1,    -1,    -1,  1960,  1023,    -1,
      -1,    -1,    -1,  2549,    -1,    -1,    -1,    -1,  1444,  2177,
      -1,  2179,  2558,  1444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2192,    -1,  2194,    -1,    -1,    -1,
      -1,    -1,    -1,   616,    -1,  2203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1488,    -1,   637,    -1,    -1,  1488,  2226,    -1,
      -1,    -1,    -1,    -1,    -1,  1501,    -1,    -1,    -1,  2032,
    1501,    -1,  2035,    23,  2037,    25,    26,    27,    28,    -1,
      30,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    -1,  1530,    -1,  2059,    -1,  2061,  1530,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,  1041,  1042,    -1,    -1,    -1,    -1,    -1,    -1,
    2083,    -1,  1051,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1163,    -1,
      -1,  1166,    -1,    -1,   727,    -1,    -1,    -1,    -1,  1174,
      -1,    -1,  1588,    -1,    -1,    -1,  1592,  1588,  2121,    -1,
      -1,  1592,    -1,    -1,    -1,    -1,    -1,    -1,   751,  2337,
      -1,   754,    -1,  2719,    -1,    -1,  2722,    -1,    -1,    -1,
      -1,  2144,    -1,    -1,   134,   135,   136,   137,   771,   139,
      -1,  2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,  1134,  1231,  1136,    -1,    -1,
      -1,  2757,    -1,    -1,  2177,    -1,  2179,    -1,   801,    -1,
     803,    -1,    -1,  2391,  1249,    -1,  2394,    -1,    -1,  2192,
      -1,  2194,    -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,
    2203,    -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,
    1275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1287,  2226,  1289,    -1,  2434,    -1,    -1,    -1,
      -1,    -1,    -1,  2819,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1309,    -1,  1311,    -1,    -1,    -1,
      -1,    -1,  2460,    -1,    -1,  2463,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1330,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,  2489,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2505,    -1,    -1,
    2508,    56,    57,    58,    -1,    60,    -1,    -1,    -1,    64,
    2518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1803,    -1,    -1,
      -1,    -1,  1803,    -1,  2337,    -1,    -1,    -1,    -1,    -1,
      -1,  2549,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
    2558,    -1,   107,    -1,    -1,  1420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   988,    -1,   990,    -1,    -1,
    2956,    -1,  2580,  2959,    -1,  1440,    -1,  1442,    -1,  1444,
      -1,    -1,   137,   138,    -1,    -1,    -1,    -1,  2391,    -1,
      -1,  2394,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,   171,    -1,   173,    -1,
    1896,    -1,    -1,  1488,    -1,    56,    57,    58,    -1,    60,
      -1,  2434,    -1,    64,  1910,   190,  1501,    -1,   193,  1910,
      -1,    -1,    -1,    -1,    -1,  1510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2460,    -1,    -1,
    2463,  1937,    -1,    -1,    -1,  1530,  1937,    -1,    -1,    -1,
      -1,  1440,    -1,  1442,  1539,  1444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1464,    -1,  1466,    -1,    -1,
      -1,    -1,  2505,    -1,    -1,  2508,    -1,    -1,    -1,    -1,
      -1,  2719,    -1,    -1,  2722,  2518,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1588,  2527,    -1,    -1,  1592,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1163,    -1,    35,  1166,    -1,    -1,  2549,    40,    41,  2757,
      -1,    -1,    -1,    -1,    -1,  2558,  2032,    -1,    -1,  2035,
      -1,  2032,    -1,    -1,  2035,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2783,    -1,  2580,    -1,    -1,
      -1,    -1,    -1,  2059,    -1,  2793,    -1,    -1,  2059,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2083,  1231,    -1,
      -1,  2819,  2083,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1592,    -1,    -1,  1249,    -1,    -1,    -1,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,  2121,   139,    -1,    -1,    -1,
    2121,    -1,    -1,    -1,    -1,  1624,    -1,   150,   151,   152,
      -1,    -1,    -1,    -1,  1287,    -1,  1289,    -1,    -1,    -1,
      -1,  1640,    -1,    -1,    -1,    -1,    -1,    -1,  2154,    -1,
      -1,    -1,    -1,  2154,    -1,    -1,  1309,    -1,  1311,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,  2719,    -1,    -1,  2722,
      -1,    -1,    56,    57,    58,    -1,    60,  2203,    -1,    -1,
      -1,    -1,  2203,    -1,    -1,    -1,    -1,    -1,  1803,    -1,
      -1,    -1,    -1,  1712,    -1,    -1,    -1,    -1,  2956,    -1,
      -1,  2959,    -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1736,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  2819,  1440,    35,  1442,
      -1,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,  1896,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,    -1,    -1,  1910,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   193,
      -1,  2337,    -1,    -1,    -1,    -1,  2337,    -1,    -1,  1934,
      -1,    -1,  1937,    -1,    -1,    -1,    -1,    -1,  1501,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,  1510,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1960,   151,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    -1,    -1,   161,  1530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2391,  1539,    -1,  2394,    -1,
    2391,    -1,    -1,  2394,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,   194,
     195,   196,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2956,    -1,    -1,  2959,    -1,  2434,    -1,
      -1,    -1,    -1,  2434,    -1,    -1,    -1,  2032,    -1,    -1,
    2035,    -1,  2037,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2463,    -1,    -1,
      -1,    -1,  2463,    -1,  2059,    -1,  2061,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,  2083,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,  2505,
      -1,    -1,  2508,    -1,  2505,    -1,    -1,  2508,    -1,    -1,
      -1,    -1,  2518,    -1,    -1,    64,    -1,  2518,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,  2037,    -1,
      -1,    -1,    -1,  2549,    -1,    -1,    -1,    -1,  2549,  2144,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,  2154,
    2059,    -1,  2061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,  2580,
      -1,    -1,  2177,    -1,  2083,   370,    -1,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2192,    -1,  2194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2203,    -1,
      -1,    -1,    -1,   398,    -1,    -1,   401,   402,    -1,    -1,
      -1,   406,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,   190,    35,    -1,   193,    38,    39,    40,    41,    42,
      43,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    64,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    -1,    -1,  2192,   479,  2194,    -1,    -1,    -1,    -1,
     485,    -1,    -1,    -1,  2203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2719,   107,    -1,  2722,    -1,  2719,    -1,
      -1,  2722,    -1,    -1,    -1,  2224,    -1,  2226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,   526,  2337,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,  2757,    -1,    -1,    -1,    -1,  2757,  1910,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,  1934,    -1,    -1,  1937,    -1,    -1,  2793,    -1,    -1,
      -1,    -1,  2793,    -1,    -1,    -1,  2391,   190,    -1,  2394,
     193,    -1,    -1,    -1,    -1,    -1,    -1,  1960,   593,    -1,
      -1,    -1,    -1,  2312,    -1,    -1,    -1,  2316,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   616,    -1,    35,    -1,    -1,    38,    39,    40,  2434,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     635,    -1,   637,    -1,    56,    57,    58,    -1,    60,    -1,
      -1,    -1,    64,    -1,    -1,  2460,    -1,    -1,  2463,    -1,
      -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2035,    -1,  2037,    -1,    -1,    -1,   673,    -1,
      -1,    -1,    -1,    -1,  2489,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   687,    -1,    -1,    -1,  2059,    -1,  2061,    -1,
    2505,    -1,    -1,  2508,    -1,   700,    -1,   702,    -1,    -1,
      -1,    -1,    -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2527,    -1,    -1,  2434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2956,    -1,    -1,  2959,  2549,  2956,    -1,    -1,  2959,    -1,
      -1,  2460,   151,  2558,  2463,    -1,    -1,   156,  2121,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,
    2489,  2144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2154,   191,   192,    -1,   194,   195,   196,   197,    -1,
     199,    -1,    -1,    -1,    -1,    -1,   801,    -1,   803,  2518,
      -1,    -1,    -1,    -1,  2177,    -1,    -1,    -1,  2527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2192,
      -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,  2580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   876,    -1,    56,    57,    58,    -1,    60,   883,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   906,    -1,   908,  2719,    -1,    -1,  2722,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   938,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,   953,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   981,    -1,  2793,    -1,
      -1,    -1,    -1,   988,    -1,   990,   991,    -1,    -1,   398,
      -1,    -1,   401,   402,    -1,    -1,  1001,   406,    -1,    -1,
    2719,    -1,    -1,  2722,  2819,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2391,    -1,
      -1,  2394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,  2757,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2434,    -1,    -1,  2783,    -1,    -1,    -1,    -1,    -1,
     479,    -1,    -1,    -1,  2793,    -1,   485,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,  2460,    -1,    35,
    2463,    -1,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
    2819,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,   522,    60,    -1,  2489,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1134,
      -1,  1136,  2505,    -1,    -1,  2508,    -1,    -1,    -1,    -1,
      -1,  2956,    -1,    -1,  2959,  2518,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2527,    -1,  1161,    -1,  1163,    -1,
      -1,  1166,    -1,  1168,    -1,  1170,    -1,  1172,    -1,  1174,
      -1,    -1,    -1,    -1,    -1,    -1,  2549,    -1,    -1,  1184,
      -1,    -1,    -1,    -1,   593,  2558,    -1,    -1,   134,   135,
     136,    -1,    -1,   139,  1199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   616,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,   637,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2956,    -1,    -1,
    2959,    -1,    -1,    -1,    -1,    -1,    -1,   656,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   687,    -1,
      -1,    -1,  1287,    -1,  1289,    -1,    -1,    -1,    -1,    -1,
      -1,   700,    -1,   702,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1309,    -1,  1311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2719,    -1,    -1,  2722,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2757,    -1,    -1,    -1,    -1,   170,
      -1,    -1,   801,    -1,   803,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2783,   192,    -1,    -1,    -1,  1420,    -1,    -1,    -1,    -1,
    2793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1437,    -1,    -1,  1440,    -1,  1442,    -1,  1444,
      -1,    -1,   223,    -1,    -1,    -1,  2819,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1464,
      -1,  1466,    -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,
     170,   171,    -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1488,   893,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1501,   906,    -1,   908,
      -1,    -1,    -1,    -1,    -1,  1510,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   922,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,    -1,   938,
      -1,    -1,    -1,    -1,  1539,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   953,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1567,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   981,    -1,    -1,    -1,    -1,    -1,    -1,   988,
    1585,   990,   991,  2956,    -1,    -1,  2959,  1592,    -1,    -1,
      -1,    -1,  1001,    -1,    -1,    -1,  1601,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1624,
      -1,    -1,    -1,   191,   192,    -1,   194,   195,   196,   197,
      -1,   199,  1041,  1042,    -1,  1640,    -1,    -1,    -1,    -1,
      -1,    -1,  1051,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1712,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1134,    -1,  1136,    -1,    -1,
      -1,  1736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   522,   523,    -1,    -1,   526,    -1,    -1,    -1,   530,
      -1,    -1,  1161,    -1,  1163,    -1,    -1,  1166,   539,  1168,
      -1,  1170,    -1,  1172,    -1,  1174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1803,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1825,    -1,   522,   523,    -1,    -1,   526,    -1,    -1,    -1,
     530,    -1,    -1,    -1,    -1,   616,    -1,    -1,    -1,   539,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   556,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1287,    -1,
    1289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1309,    -1,  1311,    -1,    -1,  1910,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   700,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1934,
      -1,    -1,  1937,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   727,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   522,  1960,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     801,    -1,    -1,    -1,    -1,   593,    -1,  2032,  1437,    -1,
    2035,  1440,  2037,  1442,    -1,  1444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   616,    -1,
      -1,    -1,    -1,    -1,  2059,  1464,  2061,  1466,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,   637,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2083,  1488,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   656,    -1,
      -1,    -1,  1501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1510,    -1,    -1,    -1,   673,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,   687,
      -1,  1530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1539,    -1,   700,    -1,   702,    -1,    -1,    -1,    -1,  2144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1567,    -1,
     941,    -1,   943,   944,   945,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2177,    -1,  2179,    -1,  1585,    -1,    -1,    -1,
      -1,    -1,    -1,  1592,    -1,    -1,    -1,  2192,    -1,  2194,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,  2203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   988,    -1,   990,
     991,    -1,    -1,    -1,    -1,  1624,    -1,    -1,    -1,  2224,
    1001,  2226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1640,    -1,   801,    -1,   803,    -1,    -1,    -1,    -1,
      -1,    -1,  1023,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1041,  1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1051,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   988,    -1,
     990,   991,    -1,  1074,  1075,    -1,    -1,    -1,    -1,  1080,
      -1,  1001,    -1,  1712,    -1,    -1,    -1,  2312,    -1,    -1,
      -1,  2316,    -1,    -1,    -1,    -1,  1097,    -1,    -1,    -1,
      -1,    -1,    -1,  1023,    -1,    -1,    -1,  1736,    -1,    -1,
      -1,    -1,  2337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1041,  1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1051,    -1,  1134,    -1,  1136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1074,  1075,    -1,    -1,    -1,    -1,
    1080,    -1,  1163,    -1,    -1,    -1,  2391,    -1,    -1,  2394,
      -1,    -1,    -1,  1174,  1803,    -1,    -1,  1097,    -1,  1099,
      -1,    -1,    -1,  1184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1825,    -1,    -1,    -1,
     988,    -1,   990,   991,    -1,    -1,    -1,    -1,    -1,  2434,
      -1,    -1,    -1,  1001,  1134,    -1,  1136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1231,    -1,    -1,    -1,    -1,  2460,    -1,    -1,  2463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2489,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2505,  1910,    -1,  2508,    -1,    -1,  1287,    -1,  1289,    -1,
      -1,    -1,    -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2527,    -1,    -1,  1934,    -1,    -1,  1937,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2549,    -1,    -1,    -1,    -1,    -1,
      -1,  1960,    -1,  2558,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1161,    -1,  1163,    -1,    -1,  1166,    -1,
    1168,    -1,  1170,    -1,  1172,    -1,  1174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1184,    -1,    -1,    -1,
      -1,    -1,    -1,  2032,    -1,    -1,  2035,    -1,  2037,    -1,
      -1,  1199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2059,    -1,  2061,    -1,    -1,    -1,    -1,    -1,    -1,  1440,
      -1,  1442,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2083,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1471,    -1,    -1,    -1,    -1,    -1,    -1,  1478,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2121,    -1,  2719,    -1,    -1,  2722,    -1,  1287,
    1501,  1289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1510,
      -1,    -1,    -1,    -1,    -1,  2144,    -1,    -1,    -1,    -1,
      -1,  1309,    -1,  1311,    -1,  2154,    -1,    -1,    -1,  1530,
      -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,  1539,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2177,    -1,
    2179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,
      -1,    -1,    -1,  2192,    -1,  2194,  1567,    -1,  2793,    -1,
      -1,    -1,    -1,    -1,  2203,    -1,    -1,    -1,    -1,    -1,
      -1,  1501,    -1,    -1,  1585,    -1,    -1,  1588,    -1,    -1,
    1510,  1592,    -1,    -1,  2819,  2224,    -1,  2226,    -1,    -1,
    1601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1539,
      -1,    -1,    -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1640,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1567,  1649,    -1,
      -1,    -1,  1440,    -1,  1442,    -1,    -1,  1658,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1585,    -1,  1668,  1588,    -1,
     191,   192,  1592,   194,   195,   196,   197,    -1,   199,    -1,
      -1,  1601,    -1,  2312,    -1,    -1,    -1,  2316,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1624,    -1,    -1,    -1,  2337,    -1,
      -1,  1712,    -1,  1501,    -1,    -1,    -1,    -1,    -1,    -1,
    1640,    -1,  1510,    -1,    -1,    -1,    -1,    -1,    -1,  1649,
      -1,  2956,    -1,    -1,  2959,  1736,    -1,    -1,  1658,    -1,
      -1,    -1,  1530,    -1,    -1,    -1,    -1,    -1,  1668,    -1,
      -1,  1539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2391,    -1,    -1,  2394,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1567,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1712,    -1,    -1,    -1,    -1,  1585,    -1,    -1,
      -1,    -1,  1803,    -1,    -1,  2434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1736,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1825,    -1,    -1,    -1,    -1,    -1,
      -1,  2460,    -1,    -1,  2463,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2505,    -1,    -1,  2508,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2518,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1910,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,
      -1,    -1,    -1,  1934,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1803,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2035,    -1,  2037,  1825,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2059,    -1,
    2061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2719,  2092,    -1,  2722,    -1,   616,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   635,    -1,   637,    -1,    -1,    -1,
    2121,    -1,  1910,    -1,    -1,    -1,    -1,    -1,  2757,    -1,
      -1,    -1,    -1,    -1,    -1,   656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2144,    -1,    -1,  1934,    -1,    -1,  1937,
      -1,    -1,   673,  2154,  2783,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2793,    -1,   687,    -1,    -1,    -1,
      -1,    -1,  1960,    -1,    -1,    -1,  2177,    -1,  2179,   700,
      -1,   702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2819,  2192,    -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2121,  2203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2224,  2144,  2226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2154,  2236,    -1,    -1,  2239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,  2037,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2177,    -1,  2179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2059,  2192,  2061,  2194,    -1,    -1,    -1,    -1,    -1,
     801,    -1,   803,  2203,    -1,    -1,    -1,    -1,    -1,    -1,
     585,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2224,    -1,  2226,    -1,    -1,    -1,
      -1,  2312,    -1,    -1,    -1,  2316,  2236,    -1,    -1,  2239,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2956,    -1,    -1,
    2959,    -1,    -1,  2121,    -1,    -1,  2337,    -1,    -1,    -1,
     191,   192,    -1,   194,   195,   196,   197,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2177,
    2391,  2179,  2312,    -1,    -1,    -1,  2316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2192,    -1,  2194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2460,
      -1,    -1,  2463,    -1,    -1,    -1,    -1,   988,    -1,   990,
     991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2505,    -1,   801,  2508,   803,    -1,
     805,    -1,    -1,    -1,    -1,    -1,    -1,  2518,   522,   523,
      -1,    -1,   526,    -1,    -1,    -1,  2527,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,  2337,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2580,
      -1,    -1,    -1,    -1,    -1,  2505,    -1,    -1,  2508,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2518,    -1,
      -1,    -1,    -1,  2391,    -1,    -1,  2394,  2527,    -1,    -1,
      -1,   906,    -1,   908,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,
    1161,    -1,  1163,    -1,    -1,  1166,  2434,  1168,    -1,  1170,
      -1,  1172,    -1,  1174,    -1,    -1,    -1,    -1,    -1,    -1,
    2580,    -1,    -1,  1184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   522,  2460,    -1,    -1,  2463,    -1,    -1,  1199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   988,    -1,   990,    -1,    -1,    -1,    -1,
      -1,  2489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2505,  2719,    -1,
    2508,  2722,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2527,
     522,   523,   593,    -1,   526,   527,  1041,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2757,    -1,    -1,    -1,
      -1,  2549,    -1,    -1,    -1,   616,  1287,    -1,  1289,    -1,
    2558,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2783,    -1,   635,    -1,   637,    -1,  1309,    -1,
    1311,    -1,  2793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,    -1,
      -1,    -1,   673,    -1,    -1,    -1,    -1,    -1,    -1,  1124,
      -1,    -1,    -1,    -1,    -1,    -1,   687,  2757,    -1,  1134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   700,
      -1,   702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2793,    -1,    -1,    -1,    -1,   522,   523,
      -1,    -1,   526,   527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1440,
      -1,  1442,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2719,    -1,    -1,  2722,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     801,    -1,   803,    -1,    -1,  2956,    -1,    -1,  2959,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2757,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1501,    -1,    -1,    -1,   988,    -1,   990,   991,    -1,  1510,
      -1,    -1,  1287,    -1,  1289,  2783,    -1,  1001,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,    -1,  1530,
      -1,    -1,    -1,    -1,  1309,    -1,  1311,    -1,  1539,  1023,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2819,    -1,    -1,    -1,  1330,  2956,  1041,  1042,  2959,
      -1,    -1,    -1,    -1,    -1,    -1,  1567,  1051,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1585,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1134,    -1,  1136,    -1,    -1,    -1,    -1,   988,    -1,   990,
     991,    -1,    -1,    -1,    -1,  1440,    -1,  1442,    -1,  1444,
    1001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2956,  1464,
      -1,  2959,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   522,   523,    -1,    -1,   526,
      -1,    -1,    -1,    -1,    -1,    -1,   988,    -1,   990,   991,
      -1,    -1,    -1,    -1,    -1,  1510,    -1,    -1,    -1,  1001,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1023,    -1,    -1,  1539,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1041,
    1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1051,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1803,    -1,    -1,  1067,    -1,    -1,    -1,    -1,
      -1,    -1,  1074,  1075,    -1,    -1,    -1,  1592,    -1,    -1,
      -1,    -1,    -1,    -1,  1825,    -1,  1601,    -1,    -1,    -1,
    1161,    -1,  1163,    -1,    -1,  1166,    -1,  1168,    -1,  1170,
      -1,  1172,    -1,  1174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   988,    -1,   990,   991,  1199,    -1,
      -1,    -1,  1134,    -1,  1136,    -1,    -1,  1001,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1910,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,
      -1,    -1,    -1,  1698,    -1,    -1,    -1,  1051,    -1,    -1,
      -1,    -1,    -1,  1934,    -1,    -1,  1937,  1712,    -1,    -1,
      -1,    -1,    -1,  1067,    -1,    -1,    -1,    -1,    -1,    -1,
    1074,  1075,    -1,    -1,    -1,    -1,  1287,    -1,  1289,  1960,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1309,    -1,
    1311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1134,    -1,  1136,    -1,    -1,    -1,    -1,  1501,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2035,    -1,  2037,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1539,    -1,    -1,  2059,    -1,
    2061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1567,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1585,    -1,    -1,  1588,    -1,    -1,    -1,  1592,  1440,
      -1,  1442,    -1,    -1,    -1,    -1,    -1,  1601,    -1,    -1,
    2121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1910,    -1,    -1,    -1,    -1,
    1624,    -1,    -1,  2144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2154,    -1,    -1,  1640,    -1,    -1,  1934,
      -1,    -1,  1937,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1501,    -1,    -1,    -1,    -1,    -1,  2177,    -1,  2179,  1510,
      -1,   988,    -1,   990,   991,  1960,    -1,    -1,    -1,    -1,
      -1,  2192,    -1,  2194,  1001,    -1,    -1,    -1,    -1,  1530,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1539,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1712,    -1,
      -1,    -1,    -1,    -1,  1041,  1042,  1567,    -1,    -1,  1501,
      -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,  1510,    -1,
      -1,    -1,  1736,    -1,  1585,    -1,    -1,    -1,    -1,    -1,
    2035,    -1,  2037,    -1,    -1,    -1,    -1,    -1,  1530,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1539,    -1,    -1,
      -1,    -1,    -1,    -1,  2059,    -1,  2061,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   522,   523,    -1,    -1,
     526,    -1,    -1,    -1,    -1,  1567,    -1,    -1,  2083,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1585,    -1,    -1,  1588,  1134,    -1,  1136,
    1592,    -1,    -1,    -1,    -1,    -1,  2337,    -1,    -1,  1601,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,  2144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1501,  1640,    -1,
      -1,    -1,    -1,  1645,    -1,    -1,  1510,  1649,    -1,    -1,
    2391,    -1,    -1,  2394,    -1,    -1,  1658,    -1,    -1,    -1,
      -1,    -1,  2177,    -1,    -1,    -1,  1530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1539,    -1,  2192,    -1,  2194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2203,    -1,
      -1,    -1,    -1,  2434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1567,    -1,    -1,    -1,    -1,    -1,  2224,
    1712,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2460,
      -1,  1585,  2463,    -1,  1588,    -1,    -1,    -1,  1592,    -1,
      -1,    -1,  1803,    -1,  1736,    -1,    -1,  1601,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,
      -1,    -1,    -1,    -1,  1825,    -1,    -1,    -1,    -1,    -1,
    1624,    -1,    -1,    -1,  2505,    -1,    -1,  2508,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1640,  2518,    -1,    -1,
      -1,  1645,    -1,    -1,    -1,  1649,  2527,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1658,    -1,    -1,  2312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1910,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1712,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1934,    -1,    -1,  1937,    -1,    -1,    -1,
      -1,    -1,  1736,    -1,    -1,    -1,  2391,    -1,    -1,  2394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1890,  1960,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2434,
    2144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2460,    -1,    -1,  2463,    -1,
      -1,    -1,    -1,  2177,  1501,  2179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1510,  2035,    -1,  2037,    -1,  2192,    -1,
    2194,    -1,    -1,    -1,  2489,    -1,    -1,    -1,  2719,  2203,
      -1,  2722,    -1,  1530,    -1,    -1,    -1,    -1,  2059,    -1,
    2061,    -1,  1539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2224,    -1,  2226,  2518,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2527,    -1,    -1,    -1,  2757,    -1,    -1,    -1,
    1567,    -1,   988,    -1,   990,   991,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2549,  1001,    -1,    -1,  1585,    -1,
      -1,  1588,  2783,  2558,    -1,  1592,    -1,    -1,    -1,    -1,
    2121,    -1,  2793,    -1,  1601,    -1,    -1,  1023,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2144,    -1,  1041,  1042,  1624,  2819,    -1,
      -1,    -1,    -1,  2154,    -1,  1051,    -1,    -1,  2312,    -1,
      -1,    -1,  2316,  1640,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2177,    -1,  2179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2121,
      -1,  2192,    -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1712,    -1,    -1,  1134,    -1,
    1136,    -1,    -1,    -1,    -1,  2177,    -1,  2179,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1736,
    2192,    -1,  2194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2203,    -1,    -1,  2719,    -1,    -1,  2722,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2956,    -1,    -1,  2959,    -1,
      -1,    -1,  2224,    -1,  2226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2236,    -1,    -1,  2239,    -1,    -1,
      -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2337,    -1,  2783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,
    2144,  2505,    -1,    -1,  2508,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,  2518,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2527,  2819,    -1,    -1,    -1,    -1,    -1,
    2312,    -1,    -1,  2177,  2316,  2179,    -1,    -1,    -1,    -1,
    2391,    -1,    -1,  2394,    -1,  2549,    -1,    -1,  2192,    -1,
    2194,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,  2203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,
    2224,    -1,  2226,  2434,    -1,    -1,    -1,    -1,    -1,  2371,
      -1,    -1,  2236,    -1,    -1,  2239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2460,
      -1,    -1,  2463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2505,    -1,    -1,  2508,    -1,    -1,
      -1,  2956,    -1,    -1,  2959,    -1,    -1,  2518,  2312,    -1,
      -1,    -1,  2316,    -1,    -1,    -1,  2527,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2505,    -1,    -1,  2508,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2518,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2527,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2757,    -1,  1501,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1510,    -1,    -1,  2549,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,  2783,
      -1,    -1,    -1,    -1,  1530,    -1,    -1,    -1,    -1,  2793,
      -1,    -1,    -1,  1539,  2121,    -1,    -1,    -1,  2580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2819,    -1,  2144,    -1,    -1,
      -1,  1567,    -1,    -1,    -1,    -1,    -1,  2154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1585,
      -1,    -1,  1588,    -1,    -1,    -1,  1592,    -1,    -1,    -1,
    2177,    -1,  2179,    -1,    -1,  1601,    -1,    -1,    -1,    -1,
      -1,  2505,    -1,    -1,  2508,  2192,    -1,  2194,  2719,    -1,
      -1,  2722,    -1,    -1,  2518,    -1,  2203,    -1,  1624,    -1,
      -1,    -1,    -1,  2527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1640,    -1,    -1,  2224,    -1,  2226,
      -1,    -1,    -1,  2685,    -1,  2549,  2757,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2783,    -1,    -1,    -1,  2580,    -1,    -1,    -1,
      -1,    -1,  2793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2956,    -1,    -1,  2959,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1712,    -1,  2819,    -1,
      -1,    -1,    -1,    -1,    -1,  2757,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2312,    -1,    -1,    -1,  2316,
    1736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2956,    -1,    -1,  2959,    -1,
      -1,    -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2783,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2793,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2956,  2819,    -1,  2959,  2505,    -1,
      -1,  2508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2558,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2956,    -1,    -1,  2959,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2757,  2177,    -1,  2179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2192,    -1,  2194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2783,  2203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2224,    -1,
    2226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2819,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2312,    -1,    -1,    -1,
    2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2956,
      -1,    -1,  2959,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2505,
      -1,    -1,  2508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2549,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2558,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2580,    -1,    -1,    -1,    -1,    -1,
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
      -1,  2757,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2819,    -1,    -1,    -1,    -1,    -1,    -1,
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
    2956,    -1,    -1,  2959
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    21,    32,    33,    34,    43,
      73,    75,   101,   104,   143,   149,   153,   154,   165,   204,
     205,   206,   209,   214,   268,   269,   273,   276,   308,   317,
     334,   336,   338,   340,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   358,   359,   360,   362,   364,   366,   368,
     395,   564,   569,   574,   579,   584,   589,   594,   599,   604,
     609,   614,   619,   624,   629,   634,   639,   644,   649,   654,
     659,   664,   669,   674,   676,   680,   682,   684,   688,   689,
     691,   693,   696,   698,   700,   702,   704,   706,   708,   710,
     712,   714,   716,   718,   720,   722,   724,   726,   728,   730,
     732,   736,   737,   741,   744,   746,   748,   750,   755,   759,
     766,     5,     6,     9,    11,    73,    75,   318,    33,   675,
      33,   677,    19,    22,    30,    33,   165,     4,    33,   697,
     729,   731,   733,   738,   745,   363,    17,   756,   277,   751,
     681,   335,   369,   149,     8,     9,   749,     7,   274,   367,
      33,   337,   342,     4,    33,   101,   166,   167,   168,   185,
     350,   361,   356,   396,   365,     0,     7,   104,   220,   229,
     270,   319,   321,   322,   323,   325,   327,   329,   330,   331,
     332,    33,   709,    33,   711,   713,   715,   717,   149,   719,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     772,   820,   862,   908,   968,   976,   978,   982,   986,   991,
    1006,  1066,  1068,   683,    35,    38,    39,    40,    41,    42,
      43,   781,   829,   879,   986,   991,  1006,  1012,  1019,  1037,
    1039,  1042,  1043,  1058,  1068,   685,   782,   830,   880,   986,
     991,  1006,  1012,  1019,  1037,  1039,  1043,  1058,  1068,   309,
     767,   760,   692,   694,   354,     5,     6,   699,    35,    64,
     790,   836,   886,   986,   991,  1006,  1016,  1037,  1055,    30,
      65,   806,   852,   902,   984,   991,  1012,  1037,  1043,  1082,
      66,    67,   807,   853,   903,  1049,  1051,    41,   808,   854,
     904,   986,   991,  1006,  1012,  1041,  1068,    68,   810,   855,
     905,   986,   991,  1006,  1010,  1041,     4,     5,     6,    11,
      15,   813,   857,   907,   235,   415,   427,   441,   554,   986,
     747,   249,    25,    36,   278,   279,   280,   281,   980,   249,
     752,    23,    56,    57,    58,    60,   784,   831,   881,   944,
     991,  1012,  1019,  1024,  1031,  1033,  1035,  1037,  1043,  1068,
      23,   134,   135,   136,   137,   138,   139,   140,   141,   378,
     416,   428,   442,   444,   445,   446,   449,   473,   475,   488,
     911,   978,   986,   991,  1006,  1066,    33,   138,   218,   468,
     557,   558,   559,   560,   561,   562,   563,    33,   721,     4,
      33,   565,   595,   102,   103,   780,   828,   878,   970,   974,
     978,   986,   991,  1006,  1066,  1082,   165,     4,     6,     8,
      11,    13,    73,   101,   165,   272,   275,   276,   317,   334,
     336,   338,   343,   349,   358,   362,   364,   368,   395,   564,
     569,   579,   589,   594,   599,   609,   619,   624,   629,   634,
     639,   644,   649,   659,   669,   678,   680,   686,   689,   696,
     698,   702,   706,   710,   712,   716,   718,   720,   722,   724,
     726,   728,   734,   736,   739,   742,   748,   249,   371,   339,
      23,   150,   151,   152,   379,   417,   429,   442,   444,   445,
     446,   473,   490,   492,   494,   914,   978,   986,   991,  1006,
    1012,  1037,  1066,  1082,   155,   156,   157,   158,   159,   203,
     381,   419,   431,   495,   496,   497,   498,   500,   501,     5,
       6,     9,   600,   630,     8,     9,   635,   344,   166,   166,
     352,    23,   107,   171,   172,   173,   190,   193,   385,   423,
     435,   446,   449,   502,   513,   515,   517,   522,   542,   934,
     974,   986,   991,  1006,  1042,   414,   426,   440,   449,   161,
     207,   208,   249,   390,   393,   394,   410,   411,   412,   160,
     162,   213,   397,   399,   402,   403,   409,   410,   411,   412,
     413,   249,   370,   220,     7,     8,   101,   166,   185,   320,
     333,    23,   788,   834,   884,   947,   968,   976,   978,   982,
     986,   991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,
    1039,  1043,  1058,  1066,  1068,   796,   842,   892,   908,   968,
     976,   978,   982,   986,   991,  1006,  1012,  1019,  1037,  1039,
    1042,  1043,  1058,  1066,  1068,   690,   797,   843,   893,   908,
     968,   976,   978,   982,   986,   991,  1006,  1012,  1019,  1037,
    1039,  1043,  1058,  1066,  1068,   798,   844,   894,   908,   968,
     976,   978,   982,   984,   986,   991,  1006,  1012,  1037,  1043,
    1066,  1068,   799,   845,   895,   908,   968,   976,   978,   982,
     986,   991,  1006,  1012,  1066,  1068,   800,   846,   896,   908,
     968,   976,   978,   982,   986,   991,  1006,  1066,  1068,    33,
     725,   801,   847,   897,   908,   968,   976,   978,   982,   986,
     991,  1006,  1066,  1068,   249,   969,   249,   992,  1007,  1067,
     977,  1069,   249,   249,   247,   862,   785,   832,   882,   944,
     986,   991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,
    1039,  1042,  1043,  1058,  1068,   249,   249,  1059,  1038,   249,
    1040,   256,   879,   786,   833,   883,   944,   986,   991,  1006,
    1012,  1019,  1024,  1031,  1033,  1035,  1037,  1039,  1043,  1058,
    1068,   256,   880,   249,   310,   249,   249,    61,    62,    63,
     789,   835,   885,  1019,  1024,  1033,  1045,  1047,  1048,   249,
     186,   191,   192,   249,   387,   425,   439,   528,   538,   540,
      33,   701,    33,   703,   791,   837,   887,   944,   986,   991,
    1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,  1043,  1055,
    1068,  1017,   249,   256,   886,  1083,   249,   256,   902,  1050,
    1052,   256,   904,  1011,   256,   905,    23,   256,   956,   249,
     247,   441,   814,   858,   907,   233,   757,   758,   249,   282,
     247,   280,   233,   753,   754,    59,    69,   815,   816,   859,
     972,  1053,   249,  1032,  1034,   249,  1036,   256,   881,   249,
     443,   249,   450,   474,   249,   489,   247,   428,   469,   247,
     561,   247,   560,   723,   442,   444,   445,   446,   473,   490,
     492,   494,   802,   848,   898,   914,   978,   986,   991,  1006,
    1012,  1037,  1066,  1068,     5,     6,   570,   566,   567,   568,
     970,   974,   978,   986,   991,  1006,  1016,  1037,  1055,  1066,
    1082,   596,   597,   598,   970,   974,   978,   984,   986,   991,
    1006,  1012,  1037,  1043,  1066,  1082,   971,   975,   247,   878,
      33,   679,     4,   735,   740,   743,     8,     4,   101,   233,
     372,    23,   380,   418,   430,   442,   444,   445,   446,   473,
     490,   492,   494,   940,   978,   986,   991,  1006,  1012,  1019,
    1024,  1031,  1033,  1035,  1037,  1043,  1066,  1068,   249,   491,
     493,   247,   429,   249,   233,   247,   431,    33,   605,    33,
     610,   625,    23,   446,   449,   502,   513,   517,   522,   542,
     601,   602,   603,   920,   968,   976,   978,   982,   986,   991,
    1006,  1042,  1066,  1068,    23,   446,   449,   502,   513,   517,
     522,   542,   631,   632,   633,   924,   986,   991,  1006,  1012,
    1019,  1024,  1031,  1033,  1035,  1037,  1042,  1043,  1068,     4,
      33,   640,   650,   446,   449,   502,   513,   517,   522,   542,
     636,   637,   638,   934,   970,   974,   978,   986,   991,  1006,
    1042,  1066,  1082,    23,   163,   164,   382,   420,   432,   502,
     509,   511,   542,   917,   346,   348,    23,   107,   187,   386,
     424,   436,   437,   438,   449,   506,   528,   533,   937,  1042,
     249,   249,   514,   516,   518,   523,   543,   247,   435,   247,
     440,   233,   391,   392,   249,   404,   185,   210,   211,   212,
     398,   401,   405,   406,   407,   408,   247,   403,   247,   402,
     233,   377,   220,   777,   825,   869,   870,   871,   986,   991,
    1006,  1016,  1037,  1055,     8,    75,   328,   324,   326,   221,
     222,   223,   224,   225,   228,   773,   821,   863,   864,   865,
     993,   994,   996,   998,  1000,  1002,   138,   779,   827,   875,
     249,   256,   884,   256,   892,   788,   256,   893,   256,   894,
     256,   895,   256,   896,   727,    23,   442,   444,   445,   473,
     490,   492,   494,   804,   850,   900,   959,   968,   976,   978,
     982,   986,   991,  1006,  1012,  1037,  1042,  1066,  1068,   256,
     897,     4,   233,   909,   249,    26,    27,    28,    74,   979,
     249,   249,   249,   249,   249,    75,    76,    77,   983,    93,
      94,    95,    96,    97,    98,    99,   100,   233,   987,   990,
     862,   256,   882,    44,   233,  1013,  1018,    52,    53,    54,
     233,  1021,  1023,   249,   249,   219,  1044,   249,   879,   256,
     883,   880,   233,    37,   312,   313,   314,   315,    72,   233,
     768,   769,   770,   771,    87,    88,   242,   243,   244,   253,
     254,   255,   761,   762,  1046,   256,   885,   233,   695,   249,
     539,   249,   233,   388,   389,   247,   439,   705,   792,   838,
     888,   908,   968,   976,   978,   982,   986,   991,  1006,  1012,
    1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   707,
     793,   839,   889,   908,   968,   976,   978,   982,   986,   991,
    1006,  1012,  1019,  1037,  1039,  1043,  1055,  1058,  1066,  1068,
     256,   887,   249,    47,  1056,   886,   249,     4,    18,   101,
     985,   902,   249,   249,   904,   249,   905,   249,   956,    87,
      88,    91,    92,   233,   242,   243,   244,   253,   254,   255,
     555,   556,   441,   247,   250,   981,   249,   280,   247,   250,
     973,   249,   247,   859,    33,   233,   945,   249,   249,   233,
    1026,   249,   881,    34,   233,   912,   249,    87,    88,    91,
      92,   233,   242,   243,   244,   253,   254,   255,   447,   448,
     249,   249,   142,   233,   476,   478,   249,   428,   249,   561,
     560,   442,   444,   445,   446,   473,   490,   492,   494,   803,
     849,   899,   940,   978,   986,   991,  1006,  1012,  1019,  1024,
    1031,  1033,  1035,  1037,  1043,  1066,  1068,   256,   898,    33,
     575,    33,   580,   571,   572,   573,   944,   970,   974,   978,
     986,   991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,
    1043,  1055,  1066,  1068,   247,   568,   247,   598,   249,   249,
     878,   687,   783,  1042,   809,  1042,    68,   811,   856,   906,
    1008,  1042,   812,  1042,     4,     8,   250,   249,   247,   430,
     149,   233,   915,   249,   249,   429,   160,   161,   162,   499,
     431,   615,   446,   449,   502,   513,   517,   522,   542,   606,
     607,   608,   920,   968,   976,   978,   982,   986,   991,  1006,
    1012,  1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,
     620,   446,   449,   502,   513,   517,   522,   542,   611,   612,
     613,   920,   968,   976,   978,   982,   986,   991,  1006,  1012,
    1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   446,
     449,   502,   513,   517,   522,   542,   626,   627,   628,   920,
     968,   976,   978,   982,   984,   986,   991,  1006,  1012,  1037,
    1042,  1043,  1066,  1068,   249,   247,   603,   249,   247,   633,
       5,     6,   645,   446,   449,   502,   513,   517,   522,   542,
     641,   642,   643,   934,   970,   974,   978,   986,   991,  1006,
    1016,  1037,  1042,  1055,  1066,  1082,   446,   449,   502,   513,
     517,   522,   542,   651,   652,   653,   934,   970,   974,   978,
     984,   986,   991,  1006,  1012,  1037,  1042,  1043,  1066,  1082,
     247,   638,   249,   510,   512,   247,   432,    23,   383,   421,
     433,   449,   502,   542,   928,  1042,    23,   384,   422,   434,
     449,   502,   542,   931,  1042,   249,   249,   249,   247,   436,
     165,   233,   935,   169,   170,   233,   503,   505,   249,   249,
     249,   249,   249,   435,   440,   247,   250,   391,   249,   247,
     400,   402,   403,   398,   403,   398,   402,   250,   247,   869,
      30,  1070,   226,  1072,   446,   449,   502,   513,   517,   522,
     542,   778,   826,   872,   873,   874,   934,   970,   974,   978,
     986,   991,  1006,  1016,  1037,  1042,  1055,  1066,   446,   449,
     502,   513,   517,   522,   542,   776,   824,   868,   934,   970,
     974,   978,   986,   991,  1006,  1042,  1066,  1082,   226,   774,
     822,   866,   993,   994,   996,   998,  1000,  1002,  1004,  1068,
     775,   823,   867,   993,   994,   996,   998,  1000,  1002,  1004,
    1068,   249,   995,   997,  1001,  1003,   999,   247,   863,  1070,
    1072,   876,   247,   875,     4,    33,   233,   948,   884,   892,
     893,   894,   895,   896,    23,   442,   444,   445,   473,   490,
     492,   494,   805,   851,   901,   963,   968,   976,   978,   982,
     986,   991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,
    1042,  1043,  1066,  1068,   249,   256,   900,   897,   248,   250,
     233,   258,   250,   233,   259,   260,   260,   260,   260,    78,
      79,    80,    87,    88,    91,    92,   233,   242,   243,   244,
     253,   254,   255,  1078,  1079,  1080,  1081,   250,   247,   250,
     248,   882,   247,   250,   248,   247,   248,   250,   249,    45,
      46,    47,    48,    49,    50,    51,    55,  1060,  1061,  1062,
    1064,  1065,   258,   250,   258,   883,   311,   316,   247,   314,
     250,   248,   250,   248,   249,   885,   250,   188,   233,   529,
     531,   249,   113,   114,   115,   541,   247,   250,   439,   794,
     840,   890,   947,   968,   976,   978,   982,   986,   991,  1006,
    1012,  1019,  1024,  1031,  1033,  1035,  1037,  1039,  1042,  1043,
    1055,  1058,  1066,  1068,   256,   888,   795,   841,   891,   947,
     968,   976,   978,   982,   986,   991,  1006,  1012,  1019,  1024,
    1031,  1033,  1035,  1037,  1039,  1043,  1055,  1058,  1066,  1068,
     256,   889,   887,   260,  1057,   250,    80,  1079,  1084,  1085,
     250,   260,   260,   260,    14,   233,   957,   248,   757,   250,
     105,   106,   107,   108,   286,   287,   290,   753,   249,    93,
      94,    95,    96,    97,    98,    99,   100,   233,  1054,   859,
     248,   250,   260,   260,   247,   248,   250,   260,   248,   250,
     258,   248,   142,   143,   145,   146,   147,   148,   451,   452,
     453,   463,   258,   479,   247,   250,   248,   258,   215,   216,
     470,   471,   256,   899,   898,   585,   576,   577,   578,   908,
     968,   970,   974,   976,   978,   982,   986,   991,  1006,  1012,
    1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   590,
     581,   582,   583,   908,   968,   970,   974,   976,   978,   982,
     986,   991,  1006,  1012,  1019,  1037,  1039,  1042,  1043,  1055,
    1058,  1066,  1068,   247,   573,   568,   598,   258,   258,   787,
    1042,  1009,   256,   906,     4,   138,   185,   217,   373,   374,
     375,   464,    33,   149,   233,   941,   430,   248,   250,   258,
     258,   250,    23,   446,   449,   502,   513,   517,   522,   542,
     616,   617,   618,   951,   968,   976,   978,   982,   986,   991,
    1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,  1039,  1042,
    1043,  1058,  1066,  1068,   247,   608,   446,   449,   502,   513,
     517,   522,   542,   621,   622,   623,   951,   968,   976,   978,
     982,   986,   991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,
    1037,  1039,  1042,  1043,  1058,  1066,  1068,   247,   613,   247,
     628,     4,   165,   233,   921,   603,    33,   165,   233,   925,
     633,    33,   655,    33,   660,   446,   449,   502,   513,   517,
     522,   542,   646,   647,   648,   924,   970,   974,   978,   986,
     991,  1006,  1012,  1019,  1024,  1031,  1033,  1035,  1037,  1042,
    1043,  1055,  1066,  1068,   247,   643,   247,   653,   638,   165,
     233,   918,   249,   249,   432,   249,   247,   433,   249,   247,
     434,   165,   233,   938,   233,   507,   189,   233,   534,   536,
     436,   248,   250,   247,   250,   248,   260,   260,   174,   175,
     176,   177,   178,   179,   180,   519,   520,    93,    94,    95,
      96,    97,    98,    99,   100,   233,   524,   525,   526,   527,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   233,
     544,   546,   549,   552,   553,   392,   250,   258,   400,   247,
     403,   247,   402,   247,   398,   247,   398,   247,   403,   869,
    1071,  1073,   247,   872,  1070,  1072,   247,   868,  1005,   247,
     866,   247,   867,   259,   261,   249,   249,   249,   249,   249,
     863,   249,   875,   248,   248,   250,   249,   256,   901,     4,
     149,   233,   960,   900,   910,   250,   247,   250,   250,   250,
     250,   248,   247,   988,   989,  1014,  1015,  1022,   233,   260,
     250,   248,   247,   247,   250,   250,   250,   249,   314,   542,
     818,   819,   861,   233,   771,    70,   817,   860,  1028,   233,
     763,   764,   260,   789,   532,   247,   250,   248,   260,   250,
     388,   256,   890,   888,   256,   891,   889,   250,   247,   248,
     247,   250,   250,   250,   248,   250,   260,   247,   248,   287,
     288,   258,   250,   946,   250,   250,  1027,   233,   250,   913,
     250,   260,   454,   248,   247,   250,   249,   477,   260,   250,
     472,   250,   899,   586,   587,   588,   947,   968,   970,   974,
     976,   978,   982,   986,   991,  1006,  1012,  1019,  1024,  1031,
    1033,  1035,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,
     247,   578,   591,   592,   593,   947,   968,   970,   974,   976,
     978,   982,   986,   991,  1006,  1012,  1019,  1024,  1031,  1033,
    1035,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   247,
     583,   573,   250,   250,   249,   906,   465,   249,   248,   248,
     250,   916,   250,   250,   249,   247,   618,   608,   247,   623,
     613,   628,   248,   248,   250,   248,   248,   250,   665,   446,
     449,   502,   513,   517,   522,   542,   656,   657,   658,   920,
     968,   970,   974,   976,   978,   982,   986,   991,  1006,  1012,
    1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   670,
     446,   449,   502,   513,   517,   522,   542,   661,   662,   663,
     920,   968,   970,   974,   976,   978,   982,   986,   991,  1006,
    1012,  1019,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,
     247,   648,   643,   653,   166,   250,   260,   260,   165,   233,
     929,   433,   165,   233,   932,   434,   185,   250,   247,   250,
     537,   247,   250,   248,   936,   504,   260,   250,   250,   250,
     248,   250,   247,   249,   249,   249,   247,   250,   248,   194,
     195,   247,   547,   550,   552,   553,   250,   403,   402,   398,
     398,   403,   249,   249,   872,   868,   249,   866,   867,   247,
     250,   261,   259,   261,   265,   267,   259,   260,   264,   266,
     266,   259,   264,   145,   148,   877,   950,   949,     4,    33,
     149,   233,   964,   901,   248,   248,   250,   258,   259,   260,
    1079,   260,   260,   260,   260,   260,  1020,   250,  1061,    45,
      46,    55,  1063,   233,   286,   247,   861,   249,   247,   248,
     250,   249,   530,   260,   250,   890,   891,   233,   260,  1079,
     958,   250,   287,   283,   238,   250,   258,   260,  1025,   258,
     250,   249,   260,   452,   233,   480,   481,   260,   248,   247,
     588,   578,   247,   593,   583,   260,   249,   143,   145,   146,
     147,   148,   215,   216,   376,   943,   942,   258,     4,    33,
     165,   233,   952,   618,   623,   923,   922,   927,   926,   446,
     449,   502,   513,   517,   522,   542,   666,   667,   668,   951,
     968,   970,   974,   976,   978,   982,   986,   991,  1006,  1012,
    1019,  1024,  1031,  1033,  1035,  1037,  1039,  1042,  1043,  1055,
    1058,  1066,  1068,   247,   658,   446,   449,   502,   513,   517,
     522,   542,   671,   672,   673,   951,   968,   970,   974,   976,
     978,   982,   986,   991,  1006,  1012,  1019,  1024,  1031,  1033,
    1035,  1037,  1039,  1042,  1043,  1055,  1058,  1066,  1068,   247,
     663,   648,   248,   250,   250,   167,   250,   168,   250,   248,
     508,   249,   535,   260,   258,   260,   181,   182,   183,   184,
     521,   524,   233,   233,   233,   545,   260,   547,   552,   194,
     195,   247,   548,   551,   552,   553,   233,  1075,  1077,  1080,
    1081,   233,  1074,  1076,  1080,  1081,  1078,   259,   250,   248,
     247,   250,   248,   247,   250,   250,   250,   248,   258,   258,
     248,   248,   248,   250,   961,   962,   250,   250,   250,   861,
      71,  1029,   763,   233,   765,   233,   260,   250,   258,     4,
       7,     8,   101,   271,   276,   285,   308,   317,   674,   680,
     682,   691,   696,   698,   700,   704,   728,   730,   732,   736,
     737,   744,   746,   748,   750,   251,   250,   233,   455,   456,
     250,   233,   483,   247,   250,   260,   588,   593,   250,   145,
     146,   147,   148,   466,   467,   250,   258,   258,   248,   248,
     248,   250,   258,   258,   258,   258,   247,   668,   658,   247,
     673,   663,   919,   166,   166,   939,   260,   233,   260,   250,
     250,   250,   260,   548,   552,   247,   552,   248,   247,   248,
     247,   248,   227,   267,   227,   266,   260,   965,   967,   966,
     258,   258,   238,   250,   250,    33,     4,   284,     4,   109,
     111,   112,   119,   120,   121,   233,   291,   292,   293,   295,
     296,   298,   299,   300,   302,   303,   233,   458,   247,   250,
     482,   238,   481,   250,   248,   954,   953,   955,   668,   673,
     258,   248,   248,   258,   250,   552,   259,   262,  1077,   259,
     263,  1077,   260,   249,   249,   250,   258,   258,   258,   233,
    1030,   250,   249,   249,   249,   249,   249,   249,   249,   249,
     247,   289,   292,   457,   238,   456,   238,   233,   484,   258,
     258,   258,   258,   930,   933,   247,   250,   247,   250,   250,
     259,   259,   304,   110,   306,   306,   306,   306,   306,   306,
     306,   292,   252,   238,   233,   459,   484,   485,   258,   258,
     259,   259,   250,   250,   305,   306,   249,   233,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     301,   113,   114,   115,   116,   117,   118,   297,   233,   233,
     233,   250,   459,   460,   248,   250,   772,   233,   294,   250,
     250,   248,   233,   307,   250,   233,   486,   250,   461,   248,
     487,   248,   248,   462,   233,   233
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   257,   258,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   265,   266,   266,   266,   267,   267,   267,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   269,   268,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   274,   273,   275,
     277,   276,   278,   278,   279,   279,   279,   280,   280,   282,
     283,   284,   281,   285,   285,   286,   286,   286,   288,   289,
     287,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     292,   292,   294,   293,   295,   295,   295,   296,   297,   297,
     297,   297,   297,   297,   298,   299,   300,   300,   300,   300,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   302,   303,   304,   303,   305,   306,   307,   306,
     309,   308,   311,   310,   312,   312,   313,   313,   313,   314,
     316,   315,   318,   317,   320,   319,   321,   322,   324,   323,
     326,   325,   328,   327,   329,   330,   331,   333,   332,   335,
     334,   337,   336,   339,   338,   340,   342,   341,   344,   343,
     346,   345,   348,   347,   350,   349,   352,   351,   354,   353,
     356,   355,   357,   358,   359,   361,   360,   363,   362,   365,
     364,   367,   366,   369,   368,   370,   370,   370,   370,   371,
     372,   373,   373,   373,   374,   375,   376,   376,   376,   376,
     376,   376,   376,   377,   378,   378,   379,   379,   380,   380,
     381,   382,   383,   383,   384,   384,   385,   385,   386,   387,
     387,   387,   388,   389,   389,   390,   390,   390,   391,   391,
     392,   393,   393,   394,   394,   394,   396,   395,   397,   397,
     397,   397,   397,   397,   397,   397,   398,   398,   399,   399,
     399,   399,   399,   400,   400,   400,   400,   400,   400,   400,
     401,   401,   401,   401,   402,   402,   402,   402,   402,   404,
     403,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   414,   415,   415,   416,   416,   416,   417,   417,   417,
     418,   418,   418,   419,   419,   419,   420,   420,   420,   421,
     421,   421,   422,   422,   422,   423,   423,   423,   424,   424,
     424,   425,   425,   425,   426,   426,   426,   427,   427,   427,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   431,   431,   431,   431,   431,   431,
     432,   432,   432,   432,   432,   433,   433,   433,   433,   433,
     434,   434,   434,   434,   434,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   436,
     436,   437,   437,   438,   438,   438,   438,   439,   439,   439,
     440,   441,   441,   443,   442,   444,   445,   446,   447,   447,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     450,   449,   451,   451,   452,   454,   453,   455,   455,   457,
     456,   458,   456,   460,   461,   459,   462,   462,   463,   463,
     463,   463,   463,   465,   464,   466,   467,   467,   467,   467,
     469,   468,   470,   471,   472,   471,   474,   473,   475,   476,
     477,   476,   476,   479,   478,   480,   480,   482,   481,   483,
     481,   485,   486,   484,   487,   487,   489,   488,   491,   490,
     493,   492,   494,   495,   496,   497,   498,   499,   499,   499,
     500,   501,   502,   503,   504,   503,   503,   505,   505,   506,
     507,   508,   507,   510,   509,   512,   511,   514,   513,   516,
     515,   518,   517,   519,   519,   520,   520,   520,   520,   520,
     520,   520,   521,   521,   521,   521,   523,   522,   524,   524,
     525,   525,   525,   525,   526,   526,   526,   526,   526,   526,
     526,   526,   527,   528,   529,   530,   529,   529,   532,   531,
     533,   534,   535,   534,   534,   537,   536,   539,   538,   540,
     541,   541,   541,   543,   542,   544,   545,   544,   544,   546,
     546,   546,   546,   546,   547,   547,   547,   547,   548,   548,
     549,   549,   549,   550,   550,   550,   551,   551,   551,   552,
     552,   552,   552,   552,   552,   553,   554,   555,   555,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   557,
     557,   557,   558,   558,   558,   559,   559,   559,   560,   561,
     561,   562,   563,   565,   564,   566,   566,   567,   567,   567,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   570,   569,   571,   571,   572,   572,   572,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   575,   574,   576,   576,
     577,   577,   577,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   580,   579,   581,   581,   582,   582,   582,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     585,   584,   586,   586,   587,   587,   587,   588,   588,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   590,   589,   591,   591,   592,   592,   592,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   595,   594,   596,   596,   597,   597,   597,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   600,   599,   601,   601,   602,   602,   602,   603,   603,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   605,   604,   606,   606,
     607,   607,   607,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   610,   609,
     611,   611,   612,   612,   612,   613,   613,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     615,   614,   616,   616,   617,   617,   617,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   620,   619,   621,   621,   622,
     622,   622,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     625,   624,   626,   626,   627,   627,   627,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   630,
     629,   631,   631,   632,   632,   632,   633,   633,   633,   633,
     633,   633,   633,   633,   633,   633,   633,   633,   633,   633,
     633,   633,   633,   633,   633,   633,   633,   635,   634,   636,
     636,   637,   637,   637,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638,   638,   638,   638,   638,   638,   638,
     638,   640,   639,   641,   641,   642,   642,   642,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   645,   644,
     646,   646,   647,   647,   647,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   650,   649,   651,   651,   652,   652,   652,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   653,   653,   653,   655,
     654,   656,   656,   657,   657,   657,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   660,   659,   661,   661,   662,   662,   662,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   665,   664,   666,
     666,   667,   667,   667,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   670,   669,   671,   671,   672,
     672,   672,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   675,   674,   677,   676,   679,   678,   681,
     680,   683,   682,   685,   684,   687,   686,   688,   690,   689,
     692,   691,   694,   693,   695,   695,   697,   696,   699,   698,
     701,   700,   703,   702,   705,   704,   707,   706,   709,   708,
     711,   710,   713,   712,   715,   714,   717,   716,   719,   718,
     721,   720,   723,   722,   725,   724,   727,   726,   729,   728,
     731,   730,   733,   732,   735,   734,   736,   738,   737,   740,
     739,   741,   743,   742,   745,   744,   747,   746,   749,   748,
     751,   750,   752,   753,   754,   754,   756,   755,   757,   758,
     758,   760,   759,   761,   762,   762,   762,   762,   762,   762,
     762,   762,   763,   764,   764,   765,   767,   766,   768,   769,
     769,   770,   770,   771,   772,   772,   773,   773,   774,   775,
     776,   776,   777,   777,   778,   778,   779,   779,   780,   780,
     781,   781,   782,   782,   783,   783,   784,   784,   785,   785,
     786,   786,   787,   787,   788,   788,   789,   789,   790,   790,
     791,   791,   792,   792,   793,   793,   794,   794,   795,   795,
     796,   796,   797,   797,   798,   798,   799,   799,   800,   800,
     801,   801,   802,   802,   803,   803,   804,   804,   805,   805,
     806,   806,   807,   808,   808,   809,   809,   810,   810,   811,
     811,   812,   812,   813,   813,   814,   814,   815,   815,   816,
     816,   816,   817,   817,   818,   818,   819,   819,   819,   820,
     820,   820,   821,   821,   821,   822,   822,   822,   823,   823,
     823,   824,   824,   824,   825,   825,   825,   826,   826,   826,
     827,   827,   827,   828,   828,   828,   829,   829,   829,   830,
     830,   830,   831,   831,   831,   832,   832,   832,   833,   833,
     833,   834,   834,   834,   835,   835,   835,   836,   836,   836,
     837,   837,   837,   838,   838,   838,   839,   839,   839,   840,
     840,   840,   841,   841,   841,   842,   842,   842,   843,   843,
     843,   844,   844,   844,   845,   845,   845,   846,   846,   846,
     847,   847,   847,   848,   848,   848,   849,   849,   849,   850,
     850,   850,   851,   851,   851,   852,   852,   852,   853,   854,
     854,   854,   855,   855,   855,   856,   856,   856,   857,   857,
     857,   858,   859,   859,   860,   861,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   863,   863,   863,   863,
     863,   863,   864,   863,   865,   863,   866,   866,   866,   866,
     866,   866,   866,   866,   867,   867,   867,   867,   867,   867,
     867,   867,   868,   868,   868,   868,   868,   868,   868,   868,
     868,   868,   868,   868,   868,   868,   868,   868,   868,   869,
     869,   869,   869,   869,   869,   870,   869,   871,   869,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   873,   872,
     874,   872,   876,   875,   877,   877,   878,   878,   878,   878,
     878,   878,   878,   878,   879,   879,   879,   879,   879,   879,
     879,   879,   879,   879,   879,   880,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   881,   881,   881,   881,   881,
     881,   881,   881,   881,   881,   881,   882,   882,   882,   882,
     882,   882,   882,   882,   882,   882,   882,   882,   882,   882,
     882,   882,   883,   883,   883,   883,   883,   883,   883,   883,
     883,   883,   883,   883,   883,   883,   883,   884,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   885,   885,   885,
     885,   885,   885,   886,   886,   886,   886,   886,   886,   887,
     887,   887,   887,   887,   887,   887,   887,   887,   887,   887,
     887,   887,   887,   888,   888,   888,   888,   888,   888,   888,
     888,   888,   888,   888,   888,   888,   888,   888,   888,   888,
     888,   889,   889,   889,   889,   889,   889,   889,   889,   889,
     889,   889,   889,   889,   889,   889,   889,   889,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   890,   890,
     890,   890,   890,   890,   890,   890,   890,   890,   890,   890,
     891,   891,   891,   891,   891,   891,   891,   891,   891,   891,
     891,   891,   891,   891,   891,   891,   891,   891,   891,   891,
     891,   892,   892,   892,   892,   892,   892,   892,   892,   892,
     892,   892,   892,   892,   892,   892,   892,   892,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   894,   894,   894,   894,   894,   894,
     894,   894,   894,   894,   894,   894,   894,   894,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   897,
     897,   897,   897,   897,   897,   897,   897,   897,   897,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   899,   899,   899,   899,   899,   899,   899,   899,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   900,   900,   900,   900,   900,   900,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   902,   902,   902,   902,   902,
     902,   903,   903,   904,   904,   904,   904,   904,   904,   905,
     905,   905,   905,   905,   906,   906,   907,   907,   907,   907,
     907,   908,   910,   909,   909,   911,   913,   912,   912,   914,
     916,   915,   915,   917,   919,   918,   918,   920,   922,   921,
     923,   921,   921,   924,   926,   925,   927,   925,   925,   928,
     930,   929,   929,   931,   933,   932,   932,   934,   936,   935,
     935,   937,   939,   938,   938,   940,   942,   941,   943,   941,
     941,   944,   946,   945,   945,   947,   949,   948,   950,   948,
     948,   951,   953,   952,   954,   952,   955,   952,   952,   956,
     958,   957,   957,   959,   961,   960,   962,   960,   960,   963,
     965,   964,   966,   964,   967,   964,   964,   969,   968,   971,
     970,   973,   972,   975,   974,   977,   976,   978,   979,   979,
     979,   979,   980,   981,   982,   983,   983,   983,   984,   985,
     985,   985,   986,   987,   988,   987,   989,   987,   990,   990,
     990,   990,   990,   990,   990,   990,   990,   992,   991,   993,
     995,   994,   997,   996,   999,   998,  1001,  1000,  1003,  1002,
    1005,  1004,  1007,  1006,  1009,  1008,  1011,  1010,  1012,  1013,
    1014,  1013,  1015,  1013,  1017,  1016,  1018,  1019,  1020,  1019,
    1021,  1022,  1021,  1021,  1023,  1023,  1023,  1024,  1025,  1024,
    1026,  1027,  1026,  1028,  1029,  1030,  1032,  1031,  1034,  1033,
    1036,  1035,  1038,  1037,  1040,  1039,  1039,  1041,  1042,  1043,
    1044,  1046,  1045,  1047,  1048,  1050,  1049,  1052,  1051,  1053,
    1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1055,
    1056,  1057,  1056,  1059,  1058,  1060,  1060,  1061,  1061,  1062,
    1062,  1063,  1063,  1063,  1064,  1064,  1064,  1065,  1065,  1065,
    1065,  1065,  1067,  1066,  1069,  1068,  1071,  1070,  1073,  1072,
    1074,  1074,  1075,  1075,  1076,  1076,  1077,  1077,  1078,  1078,
    1079,  1079,  1080,  1080,  1080,  1081,  1081,  1081,  1081,  1081,
    1081,  1081,  1081,  1081,  1081,  1083,  1082,  1084,  1084,  1085
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     6,     6,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     1,
       0,     3,     0,     1,     1,     2,     3,     1,     1,     0,
       0,     0,     9,     1,     0,     1,     2,     3,     0,     0,
       7,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     0,     6,     1,     1,     1,     5,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     4,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     2,     0,     0,     6,
       0,     5,     0,     4,     0,     1,     1,     2,     3,     1,
       0,     5,     0,     3,     0,     3,     2,     3,     0,     4,
       0,     4,     0,     4,     3,     4,     3,     0,     3,     0,
       3,     0,     3,     0,     4,     1,     0,     3,     0,     4,
       0,     5,     0,     5,     0,     3,     0,     4,     0,     4,
       0,     3,     3,     1,     1,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     4,     5,     4,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       3,     1,     1,     1,     3,     0,     3,     1,     1,     3,
       1,     1,     4,     1,     1,     1,     0,     3,     1,     2,
       5,     5,     3,     4,     4,     3,     2,     3,     0,     2,
       2,     1,     1,     0,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
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
       1,     1,     1,     0,     5,     1,     1,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     1,     3,     1,     0,     5,     1,     3,     0,
       5,     0,     4,     0,     0,     6,     0,     2,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       0,     5,     1,     1,     0,     4,     0,     5,     4,     1,
       0,     4,     3,     0,     5,     1,     3,     0,     5,     0,
       4,     0,     0,     6,     0,     2,     0,     5,     0,     5,
       0,     5,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     2,     4,     1,     0,     4,     3,     1,     1,     4,
       1,     0,     4,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     1,     3,
       1,     4,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     0,     4,     3,     0,     5,
       4,     1,     0,     4,     3,     0,     5,     0,     5,     4,
       1,     1,     1,     0,     5,     1,     0,     4,     3,     1,
       2,     3,     3,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     2,     3,     1,     2,     3,     1,     1,
       1,     1,     1,     0,     4,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     8,     0,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     8,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     4,     0,     4,     0,     4,     4,     0,     5,
       0,     4,     0,     7,     0,     1,     0,     3,     0,     4,
       0,     5,     0,     5,     0,     6,     0,     6,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     5,     0,     5,     0,     6,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     0,     3,     0,
       3,     1,     0,     3,     0,     3,     0,     4,     0,     3,
       0,     4,     3,     1,     1,     3,     0,     5,     1,     1,
       3,     0,     7,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     7,     1,     1,
       3,     1,     1,     1,     0,     1,     0,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       2,     3,     0,     1,     0,     1,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     1,
       2,     3,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     1,
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
       1,     4,     0,     4,     1,     4,     0,     4,     1,     4,
       0,     4,     1,     4,     0,     5,     1,     4,     0,     4,
       0,     4,     1,     4,     0,     4,     0,     4,     1,     4,
       0,     6,     1,     4,     0,     6,     1,     4,     0,     4,
       1,     4,     0,     5,     1,     4,     0,     4,     0,     4,
       1,     4,     0,     4,     1,     4,     0,     4,     0,     4,
       1,     4,     0,     4,     0,     4,     0,     4,     1,     4,
       0,     4,     1,     4,     0,     4,     0,     4,     1,     4,
       0,     4,     0,     4,     0,     4,     1,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     4,     1,     1,
       1,     1,     4,     0,     4,     1,     1,     1,     4,     1,
       1,     1,     4,     1,     0,     4,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     4,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     7,     0,     5,     0,     5,     0,     5,     4,     1,
       0,     4,     0,     4,     0,     5,     1,     4,     0,     7,
       1,     0,     4,     4,     1,     1,     1,     4,     0,     7,
       1,     0,     4,     4,     3,     1,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     5,     1,     1,     1,     4,
       1,     0,     5,     1,     1,     0,     5,     0,     5,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     0,     4,     0,     5,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     0,     7,     0,     7,     0,     7,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     3,
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
#line 127 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 7951 "ompparser.cc"
    break;

  case 3: /* variable: EXPR_STRING  */
#line 128 "ompparser.yy"
                         {(yyval.stype)=(yyvsp[0].stype); }
#line 7957 "ompparser.cc"
    break;

  case 6: /* var_list_cluster: variable  */
#line 139 "ompparser.yy"
                            {
                      printf("var: %s\n", (yyvsp[0].stype));
                      addArg((yyvsp[0].stype));
                    }
#line 7966 "ompparser.cc"
    break;

  case 7: /* var_list_cluster: var_list_cluster ',' variable  */
#line 144 "ompparser.yy"
                    {
                      printf("var: %s\n", (yyvsp[0].stype));
                      addArg((yyvsp[0].stype));
                    }
#line 7975 "ompparser.cc"
    break;

  case 8: /* var_list_reduction: variable  */
#line 150 "ompparser.yy"
                              { if(enReductionCluster || enReductionDistribute){MPI_Reduce(true, (yyvsp[0].stype));}}
#line 7981 "ompparser.cc"
    break;

  case 9: /* var_list_reduction: var_list_reduction ',' variable  */
#line 151 "ompparser.yy"
                                          { if(enReductionCluster || enReductionDistribute){MPI_Reduce(true, (yyvsp[0].stype));}}
#line 7987 "ompparser.cc"
    break;

  case 10: /* var_list_allreduction: variable  */
#line 154 "ompparser.yy"
                                 { if(enAllReductionCluster || enAllReductionDistribute){MPI_AllReduce(true, (yyvsp[0].stype));}}
#line 7993 "ompparser.cc"
    break;

  case 11: /* var_list_allreduction: var_list_allreduction ',' variable  */
#line 155 "ompparser.yy"
                                             { if(enAllReductionCluster || enAllReductionDistribute){MPI_AllReduce(true, (yyvsp[0].stype));}}
#line 7999 "ompparser.cc"
    break;

  case 13: /* var_chunk_cluster: variable ':' CHUNK '(' variable ')'  */
#line 162 "ompparser.yy"
            {
              chunk = 1;
              printf("var1: %s\n", (yyvsp[-5].stype));
              addArg((yyvsp[-5].stype));
              printf("var2: %s\n", (yyvsp[-1].stype));
              addArg((yyvsp[-1].stype));
            }
#line 8011 "ompparser.cc"
    break;

  case 105: /* $@1: %empty  */
#line 268 "ompparser.yy"
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
#line 8029 "ompparser.cc"
    break;

  case 107: /* directiveAuxCluster: cluster_directive  */
#line 285 "ompparser.yy"
                                      {n_llaves = 0;}
#line 8035 "ompparser.cc"
    break;

  case 113: /* directiveAuxCluster: cluster_distribute_directive  */
#line 291 "ompparser.yy"
                                                                         {enDistribute = 1; dist_n_llaves = 0;}
#line 8041 "ompparser.cc"
    break;

  case 114: /* directiveAuxCluster: cluster_teams_distribute_directive  */
#line 292 "ompparser.yy"
                                                                               {enDistribute = 1; dist_n_llaves = 0;}
#line 8047 "ompparser.cc"
    break;

  case 187: /* $@2: %empty  */
#line 371 "ompparser.yy"
                    { }
#line 8053 "ompparser.cc"
    break;

  case 188: /* end_directive: END $@2 end_clause_seq  */
#line 371 "ompparser.yy"
                                       { }
#line 8059 "ompparser.cc"
    break;

  case 190: /* $@3: %empty  */
#line 377 "ompparser.yy"
                                        { }
#line 8065 "ompparser.cc"
    break;

  case 199: /* $@4: %empty  */
#line 394 "ompparser.yy"
                   { }
#line 8071 "ompparser.cc"
    break;

  case 200: /* $@5: %empty  */
#line 394 "ompparser.yy"
                                                              { }
#line 8077 "ompparser.cc"
    break;

  case 201: /* $@6: %empty  */
#line 394 "ompparser.yy"
                                                                                         { }
#line 8083 "ompparser.cc"
    break;

  case 203: /* when_variant_directive: variant_directive  */
#line 397 "ompparser.yy"
                                           { }
#line 8089 "ompparser.cc"
    break;

  case 204: /* when_variant_directive: %empty  */
#line 398 "ompparser.yy"
                  { ; }
#line 8095 "ompparser.cc"
    break;

  case 208: /* $@7: %empty  */
#line 406 "ompparser.yy"
                                             { }
#line 8101 "ompparser.cc"
    break;

  case 209: /* $@8: %empty  */
#line 406 "ompparser.yy"
                                                                             { }
#line 8107 "ompparser.cc"
    break;

  case 211: /* trait_set_selector_name: USER  */
#line 409 "ompparser.yy"
                               { }
#line 8113 "ompparser.cc"
    break;

  case 212: /* trait_set_selector_name: CONSTRUCT  */
#line 410 "ompparser.yy"
                            { }
#line 8119 "ompparser.cc"
    break;

  case 213: /* trait_set_selector_name: DEVICE  */
#line 411 "ompparser.yy"
                         { }
#line 8125 "ompparser.cc"
    break;

  case 214: /* trait_set_selector_name: IMPLEMENTATION  */
#line 412 "ompparser.yy"
                                 { }
#line 8131 "ompparser.cc"
    break;

  case 215: /* trait_selector_list: trait_selector  */
#line 415 "ompparser.yy"
                                     { }
#line 8137 "ompparser.cc"
    break;

  case 216: /* trait_selector_list: trait_selector_list trait_selector  */
#line 416 "ompparser.yy"
                                                     { }
#line 8143 "ompparser.cc"
    break;

  case 217: /* trait_selector_list: trait_selector_list ',' trait_selector  */
#line 417 "ompparser.yy"
                                                         { }
#line 8149 "ompparser.cc"
    break;

  case 219: /* trait_selector: construct_selector  */
#line 421 "ompparser.yy"
                                     { }
#line 8155 "ompparser.cc"
    break;

  case 222: /* $@9: %empty  */
#line 426 "ompparser.yy"
                                                           { }
#line 8161 "ompparser.cc"
    break;

  case 228: /* context_kind_name: HOST  */
#line 437 "ompparser.yy"
                         { }
#line 8167 "ompparser.cc"
    break;

  case 229: /* context_kind_name: NOHOST  */
#line 438 "ompparser.yy"
                           { }
#line 8173 "ompparser.cc"
    break;

  case 230: /* context_kind_name: ANY  */
#line 439 "ompparser.yy"
                        { }
#line 8179 "ompparser.cc"
    break;

  case 231: /* context_kind_name: CPU  */
#line 440 "ompparser.yy"
                        { }
#line 8185 "ompparser.cc"
    break;

  case 232: /* context_kind_name: GPU  */
#line 441 "ompparser.yy"
                        { }
#line 8191 "ompparser.cc"
    break;

  case 233: /* context_kind_name: FPGA  */
#line 442 "ompparser.yy"
                         { }
#line 8197 "ompparser.cc"
    break;

  case 234: /* context_isa: ISA '(' trait_score EXPR_STRING  */
#line 445 "ompparser.yy"
                                              { }
#line 8203 "ompparser.cc"
    break;

  case 235: /* context_arch: ARCH '(' trait_score EXPR_STRING  */
#line 448 "ompparser.yy"
                                                { }
#line 8209 "ompparser.cc"
    break;

  case 237: /* implementation_selector: EXTENSION '(' trait_score EXPR_STRING  */
#line 452 "ompparser.yy"
                                                                { }
#line 8215 "ompparser.cc"
    break;

  case 238: /* implementation_selector: EXPR_STRING  */
#line 453 "ompparser.yy"
                                      { }
#line 8221 "ompparser.cc"
    break;

  case 239: /* implementation_selector: EXPR_STRING '(' trait_score ')'  */
#line 454 "ompparser.yy"
                                                          { }
#line 8227 "ompparser.cc"
    break;

  case 240: /* context_vendor_name: AMD  */
#line 457 "ompparser.yy"
                          { }
#line 8233 "ompparser.cc"
    break;

  case 241: /* context_vendor_name: ARM  */
#line 458 "ompparser.yy"
                          { }
#line 8239 "ompparser.cc"
    break;

  case 242: /* context_vendor_name: BSC  */
#line 459 "ompparser.yy"
                          { }
#line 8245 "ompparser.cc"
    break;

  case 243: /* context_vendor_name: CRAY  */
#line 460 "ompparser.yy"
                           { }
#line 8251 "ompparser.cc"
    break;

  case 244: /* context_vendor_name: FUJITSU  */
#line 461 "ompparser.yy"
                              { }
#line 8257 "ompparser.cc"
    break;

  case 245: /* context_vendor_name: GNU  */
#line 462 "ompparser.yy"
                          { }
#line 8263 "ompparser.cc"
    break;

  case 246: /* context_vendor_name: IBM  */
#line 463 "ompparser.yy"
                          { }
#line 8269 "ompparser.cc"
    break;

  case 247: /* context_vendor_name: INTEL  */
#line 464 "ompparser.yy"
                            { }
#line 8275 "ompparser.cc"
    break;

  case 248: /* context_vendor_name: LLVM  */
#line 465 "ompparser.yy"
                           { }
#line 8281 "ompparser.cc"
    break;

  case 249: /* context_vendor_name: PGI  */
#line 466 "ompparser.yy"
                          { }
#line 8287 "ompparser.cc"
    break;

  case 250: /* context_vendor_name: TI  */
#line 467 "ompparser.yy"
                         { }
#line 8293 "ompparser.cc"
    break;

  case 251: /* context_vendor_name: UNKNOWN  */
#line 468 "ompparser.yy"
                              { }
#line 8299 "ompparser.cc"
    break;

  case 253: /* parallel_selector: PARALLEL  */
#line 474 "ompparser.yy"
                             { }
#line 8305 "ompparser.cc"
    break;

  case 254: /* $@10: %empty  */
#line 475 "ompparser.yy"
                               { }
#line 8311 "ompparser.cc"
    break;

  case 258: /* $@11: %empty  */
#line 482 "ompparser.yy"
                                    { }
#line 8317 "ompparser.cc"
    break;

  case 260: /* $@12: %empty  */
#line 485 "ompparser.yy"
                                            { }
#line 8323 "ompparser.cc"
    break;

  case 262: /* $@13: %empty  */
#line 489 "ompparser.yy"
                                  { }
#line 8329 "ompparser.cc"
    break;

  case 270: /* $@14: %empty  */
#line 504 "ompparser.yy"
                     { }
#line 8335 "ompparser.cc"
    break;

  case 271: /* match_clause: MATCH $@14 '(' context_selector_specification ')'  */
#line 505 "ompparser.yy"
                                                       { }
#line 8341 "ompparser.cc"
    break;

  case 272: /* $@15: %empty  */
#line 509 "ompparser.yy"
                              { }
#line 8347 "ompparser.cc"
    break;

  case 274: /* $@16: %empty  */
#line 512 "ompparser.yy"
                            { }
#line 8353 "ompparser.cc"
    break;

  case 276: /* declare_cluster_directive: DECLARE CLUSTER  */
#line 515 "ompparser.yy"
                                            { }
#line 8359 "ompparser.cc"
    break;

  case 277: /* end_declare_cluster_directive: END DECLARE CLUSTER  */
#line 518 "ompparser.yy"
                                                    { }
#line 8365 "ompparser.cc"
    break;

  case 278: /* $@17: %empty  */
#line 521 "ompparser.yy"
                                      { }
#line 8371 "ompparser.cc"
    break;

  case 280: /* $@18: %empty  */
#line 524 "ompparser.yy"
                                          { update =1; }
#line 8377 "ompparser.cc"
    break;

  case 281: /* cluster_update_directive: CLUSTER UPDATE $@18 cluster_update_clause_optseq  */
#line 524 "ompparser.yy"
                                                                                      { }
#line 8383 "ompparser.cc"
    break;

  case 282: /* $@19: %empty  */
#line 527 "ompparser.yy"
                                        { }
#line 8389 "ompparser.cc"
    break;

  case 286: /* cluster_teams_master_directive: CLUSTER TEAMS MASTER  */
#line 536 "ompparser.yy"
                                                      { }
#line 8395 "ompparser.cc"
    break;

  case 287: /* $@20: %empty  */
#line 539 "ompparser.yy"
                                  { }
#line 8401 "ompparser.cc"
    break;

  case 288: /* task_async_directive: TASK_ASYNC $@20 task_async_clause_optseq  */
#line 539 "ompparser.yy"
                                                               { MPITask(); }
#line 8407 "ompparser.cc"
    break;

  case 289: /* $@21: %empty  */
#line 544 "ompparser.yy"
                      { }
#line 8413 "ompparser.cc"
    break;

  case 291: /* $@22: %empty  */
#line 546 "ompparser.yy"
                              { }
#line 8419 "ompparser.cc"
    break;

  case 293: /* $@23: %empty  */
#line 548 "ompparser.yy"
                                        { }
#line 8425 "ompparser.cc"
    break;

  case 295: /* taskyield_directive: TASKYIELD  */
#line 550 "ompparser.yy"
                                { }
#line 8431 "ompparser.cc"
    break;

  case 296: /* $@24: %empty  */
#line 552 "ompparser.yy"
                              { }
#line 8437 "ompparser.cc"
    break;

  case 298: /* $@25: %empty  */
#line 554 "ompparser.yy"
                                     { }
#line 8443 "ompparser.cc"
    break;

  case 300: /* $@26: %empty  */
#line 556 "ompparser.yy"
                                                 { }
#line 8449 "ompparser.cc"
    break;

  case 302: /* $@27: %empty  */
#line 558 "ompparser.yy"
                                               { }
#line 8455 "ompparser.cc"
    break;

  case 304: /* $@28: %empty  */
#line 560 "ompparser.yy"
                           { }
#line 8461 "ompparser.cc"
    break;

  case 306: /* $@29: %empty  */
#line 562 "ompparser.yy"
                                        { }
#line 8467 "ompparser.cc"
    break;

  case 308: /* $@30: %empty  */
#line 564 "ompparser.yy"
                                          { }
#line 8473 "ompparser.cc"
    break;

  case 310: /* $@31: %empty  */
#line 566 "ompparser.yy"
                        { }
#line 8479 "ompparser.cc"
    break;

  case 312: /* end_declare_target_directive: END DECLARE TARGET  */
#line 569 "ompparser.yy"
                                                  { }
#line 8485 "ompparser.cc"
    break;

  case 313: /* master_directive: MASTER  */
#line 571 "ompparser.yy"
                          { }
#line 8491 "ompparser.cc"
    break;

  case 314: /* barrier_directive: BARRIER  */
#line 573 "ompparser.yy"
                            { }
#line 8497 "ompparser.cc"
    break;

  case 315: /* $@32: %empty  */
#line 575 "ompparser.yy"
                              { }
#line 8503 "ompparser.cc"
    break;

  case 317: /* $@33: %empty  */
#line 577 "ompparser.yy"
                                { }
#line 8509 "ompparser.cc"
    break;

  case 319: /* $@34: %empty  */
#line 579 "ompparser.yy"
                              { }
#line 8515 "ompparser.cc"
    break;

  case 321: /* $@35: %empty  */
#line 581 "ompparser.yy"
                          { }
#line 8521 "ompparser.cc"
    break;

  case 323: /* $@36: %empty  */
#line 583 "ompparser.yy"
                            { }
#line 8527 "ompparser.cc"
    break;

  case 330: /* depobj: EXPR_STRING  */
#line 592 "ompparser.yy"
                     { }
#line 8533 "ompparser.cc"
    break;

  case 334: /* destroy_clause: DESTROY  */
#line 599 "ompparser.yy"
                        {}
#line 8539 "ompparser.cc"
    break;

  case 336: /* update_dependence_type: SOURCE  */
#line 604 "ompparser.yy"
                                { }
#line 8545 "ompparser.cc"
    break;

  case 337: /* update_dependence_type: IN  */
#line 605 "ompparser.yy"
                            { }
#line 8551 "ompparser.cc"
    break;

  case 338: /* update_dependence_type: OUT  */
#line 606 "ompparser.yy"
                             { }
#line 8557 "ompparser.cc"
    break;

  case 339: /* update_dependence_type: INOUT  */
#line 607 "ompparser.yy"
                               { }
#line 8563 "ompparser.cc"
    break;

  case 340: /* update_dependence_type: MUTEXINOUTSET  */
#line 608 "ompparser.yy"
                                       { }
#line 8569 "ompparser.cc"
    break;

  case 341: /* update_dependence_type: DEPOBJ  */
#line 609 "ompparser.yy"
                                { }
#line 8575 "ompparser.cc"
    break;

  case 342: /* update_dependence_type: SINK  */
#line 610 "ompparser.yy"
                              { }
#line 8581 "ompparser.cc"
    break;

  case 343: /* critical_name: EXPR_STRING  */
#line 613 "ompparser.yy"
                            { }
#line 8587 "ompparser.cc"
    break;

  case 362: /* extended_variable: EXPR_STRING  */
#line 644 "ompparser.yy"
                                { }
#line 8593 "ompparser.cc"
    break;

  case 370: /* flush_variable: EXPR_STRING  */
#line 656 "ompparser.yy"
                             { }
#line 8599 "ompparser.cc"
    break;

  case 376: /* $@37: %empty  */
#line 666 "ompparser.yy"
                          { }
#line 8605 "ompparser.cc"
    break;

  case 409: /* $@38: %empty  */
#line 709 "ompparser.yy"
                  { 
                     }
#line 8612 "ompparser.cc"
    break;

  case 411: /* read_clause: READ  */
#line 712 "ompparser.yy"
                   { }
#line 8618 "ompparser.cc"
    break;

  case 412: /* write_clause: WRITE  */
#line 714 "ompparser.yy"
                     { }
#line 8624 "ompparser.cc"
    break;

  case 413: /* update_clause: UPDATE  */
#line 716 "ompparser.yy"
                       { }
#line 8630 "ompparser.cc"
    break;

  case 414: /* capture_clause: CAPTURE  */
#line 718 "ompparser.yy"
                         { }
#line 8636 "ompparser.cc"
    break;

  case 415: /* seq_cst_clause: SEQ_CST  */
#line 721 "ompparser.yy"
                         { }
#line 8642 "ompparser.cc"
    break;

  case 416: /* acq_rel_clause: ACQ_REL  */
#line 723 "ompparser.yy"
                         { }
#line 8648 "ompparser.cc"
    break;

  case 417: /* release_clause: RELEASE  */
#line 725 "ompparser.yy"
                         { }
#line 8654 "ompparser.cc"
    break;

  case 418: /* acquire_clause: ACQUIRE  */
#line 727 "ompparser.yy"
                         { }
#line 8660 "ompparser.cc"
    break;

  case 419: /* relaxed_clause: RELAXED  */
#line 729 "ompparser.yy"
                         { }
#line 8666 "ompparser.cc"
    break;

  case 563: /* $@39: %empty  */
#line 906 "ompparser.yy"
                    { }
#line 8672 "ompparser.cc"
    break;

  case 565: /* untied_clause: UNTIED  */
#line 908 "ompparser.yy"
                      { }
#line 8678 "ompparser.cc"
    break;

  case 566: /* mergeable_clause: MERGEABLE  */
#line 910 "ompparser.yy"
                            { }
#line 8684 "ompparser.cc"
    break;

  case 567: /* in_reduction_clause: IN_REDUCTION '(' in_reduction_identifier ':' var_list ')'  */
#line 912 "ompparser.yy"
                                                                                { }
#line 8690 "ompparser.cc"
    break;

  case 569: /* in_reduction_identifier: EXPR_STRING  */
#line 915 "ompparser.yy"
                                      { }
#line 8696 "ompparser.cc"
    break;

  case 570: /* in_reduction_enum_identifier: '+'  */
#line 918 "ompparser.yy"
                                   { }
#line 8702 "ompparser.cc"
    break;

  case 571: /* in_reduction_enum_identifier: '-'  */
#line 919 "ompparser.yy"
                                  { }
#line 8708 "ompparser.cc"
    break;

  case 572: /* in_reduction_enum_identifier: '*'  */
#line 920 "ompparser.yy"
                                  { }
#line 8714 "ompparser.cc"
    break;

  case 573: /* in_reduction_enum_identifier: '&'  */
#line 921 "ompparser.yy"
                                  { }
#line 8720 "ompparser.cc"
    break;

  case 574: /* in_reduction_enum_identifier: '|'  */
#line 922 "ompparser.yy"
                                  { }
#line 8726 "ompparser.cc"
    break;

  case 575: /* in_reduction_enum_identifier: '^'  */
#line 923 "ompparser.yy"
                                  { }
#line 8732 "ompparser.cc"
    break;

  case 576: /* in_reduction_enum_identifier: LOGAND  */
#line 924 "ompparser.yy"
                                     { }
#line 8738 "ompparser.cc"
    break;

  case 577: /* in_reduction_enum_identifier: LOGOR  */
#line 925 "ompparser.yy"
                                    { }
#line 8744 "ompparser.cc"
    break;

  case 578: /* in_reduction_enum_identifier: MAX  */
#line 926 "ompparser.yy"
                                  { }
#line 8750 "ompparser.cc"
    break;

  case 579: /* in_reduction_enum_identifier: MIN  */
#line 927 "ompparser.yy"
                                  { }
#line 8756 "ompparser.cc"
    break;

  case 580: /* $@40: %empty  */
#line 930 "ompparser.yy"
                                     { }
#line 8762 "ompparser.cc"
    break;

  case 581: /* depend_with_modifier_clause: DEPEND $@40 '(' depend_parameter ':' var_list ')'  */
#line 930 "ompparser.yy"
                                                                               { }
#line 8768 "ompparser.cc"
    break;

  case 583: /* depend_parameter: depend_modifier ',' dependence_type  */
#line 934 "ompparser.yy"
                                                       { }
#line 8774 "ompparser.cc"
    break;

  case 585: /* $@41: %empty  */
#line 938 "ompparser.yy"
                                    { }
#line 8780 "ompparser.cc"
    break;

  case 589: /* $@42: %empty  */
#line 943 "ompparser.yy"
                                                    { }
#line 8786 "ompparser.cc"
    break;

  case 591: /* $@43: %empty  */
#line 944 "ompparser.yy"
                                        { }
#line 8792 "ompparser.cc"
    break;

  case 593: /* $@44: %empty  */
#line 946 "ompparser.yy"
                                         { }
#line 8798 "ompparser.cc"
    break;

  case 594: /* $@45: %empty  */
#line 946 "ompparser.yy"
                                                             { }
#line 8804 "ompparser.cc"
    break;

  case 595: /* depend_range_specification: EXPR_STRING $@44 ':' EXPR_STRING $@45 depend_range_step  */
#line 946 "ompparser.yy"
                                                                                   { }
#line 8810 "ompparser.cc"
    break;

  case 596: /* depend_range_step: %empty  */
#line 948 "ompparser.yy"
                              { }
#line 8816 "ompparser.cc"
    break;

  case 597: /* depend_range_step: ':' EXPR_STRING  */
#line 949 "ompparser.yy"
                                    { }
#line 8822 "ompparser.cc"
    break;

  case 598: /* depend_enum_type: IN  */
#line 951 "ompparser.yy"
                      { }
#line 8828 "ompparser.cc"
    break;

  case 599: /* depend_enum_type: OUT  */
#line 952 "ompparser.yy"
                       { }
#line 8834 "ompparser.cc"
    break;

  case 600: /* depend_enum_type: INOUT  */
#line 953 "ompparser.yy"
                         { }
#line 8840 "ompparser.cc"
    break;

  case 601: /* depend_enum_type: MUTEXINOUTSET  */
#line 954 "ompparser.yy"
                                 { }
#line 8846 "ompparser.cc"
    break;

  case 602: /* depend_enum_type: DEPOBJ  */
#line 955 "ompparser.yy"
                          { }
#line 8852 "ompparser.cc"
    break;

  case 603: /* $@46: %empty  */
#line 958 "ompparser.yy"
                              { }
#line 8858 "ompparser.cc"
    break;

  case 604: /* depend_depobj_clause: DEPEND $@46 '(' dependence_depobj_parameter ')'  */
#line 958 "ompparser.yy"
                                                                     {
}
#line 8865 "ompparser.cc"
    break;

  case 606: /* dependence_depobj_type: IN  */
#line 963 "ompparser.yy"
                                        { }
#line 8871 "ompparser.cc"
    break;

  case 607: /* dependence_depobj_type: OUT  */
#line 964 "ompparser.yy"
                                        { }
#line 8877 "ompparser.cc"
    break;

  case 608: /* dependence_depobj_type: INOUT  */
#line 965 "ompparser.yy"
                                        { }
#line 8883 "ompparser.cc"
    break;

  case 609: /* dependence_depobj_type: MUTEXINOUTSET  */
#line 966 "ompparser.yy"
                                        { }
#line 8889 "ompparser.cc"
    break;

  case 610: /* $@47: %empty  */
#line 968 "ompparser.yy"
                               { }
#line 8895 "ompparser.cc"
    break;

  case 611: /* depend_ordered_clause: DEPEND $@47 '(' dependence_ordered_parameter ')'  */
#line 968 "ompparser.yy"
                                                                       {
}
#line 8902 "ompparser.cc"
    break;

  case 613: /* dependence_ordered_type: SOURCE  */
#line 973 "ompparser.yy"
                                  { }
#line 8908 "ompparser.cc"
    break;

  case 614: /* $@48: %empty  */
#line 974 "ompparser.yy"
                               { }
#line 8914 "ompparser.cc"
    break;

  case 616: /* $@49: %empty  */
#line 977 "ompparser.yy"
                          { }
#line 8920 "ompparser.cc"
    break;

  case 619: /* affinity_parameter: EXPR_STRING  */
#line 982 "ompparser.yy"
                                 { }
#line 8926 "ompparser.cc"
    break;

  case 620: /* $@50: %empty  */
#line 983 "ompparser.yy"
                                     { }
#line 8932 "ompparser.cc"
    break;

  case 623: /* $@51: %empty  */
#line 987 "ompparser.yy"
                                      { }
#line 8938 "ompparser.cc"
    break;

  case 624: /* affinity_modifier: MODIFIER_ITERATOR $@51 '(' iterators_definition ')'  */
#line 987 "ompparser.yy"
                                                                   {}
#line 8944 "ompparser.cc"
    break;

  case 627: /* $@52: %empty  */
#line 992 "ompparser.yy"
                                             { }
#line 8950 "ompparser.cc"
    break;

  case 629: /* $@53: %empty  */
#line 993 "ompparser.yy"
                                { }
#line 8956 "ompparser.cc"
    break;

  case 631: /* $@54: %empty  */
#line 995 "ompparser.yy"
                                  { }
#line 8962 "ompparser.cc"
    break;

  case 632: /* $@55: %empty  */
#line 995 "ompparser.yy"
                                                      { }
#line 8968 "ompparser.cc"
    break;

  case 633: /* range_specification: EXPR_STRING $@54 ':' EXPR_STRING $@55 range_step  */
#line 995 "ompparser.yy"
                                                                     { }
#line 8974 "ompparser.cc"
    break;

  case 634: /* range_step: %empty  */
#line 998 "ompparser.yy"
                       { }
#line 8980 "ompparser.cc"
    break;

  case 635: /* range_step: ':' EXPR_STRING  */
#line 999 "ompparser.yy"
                             { }
#line 8986 "ompparser.cc"
    break;

  case 636: /* $@56: %empty  */
#line 1002 "ompparser.yy"
                      { }
#line 8992 "ompparser.cc"
    break;

  case 638: /* $@57: %empty  */
#line 1004 "ompparser.yy"
                            { }
#line 8998 "ompparser.cc"
    break;

  case 640: /* $@58: %empty  */
#line 1006 "ompparser.yy"
                            { }
#line 9004 "ompparser.cc"
    break;

  case 642: /* nogroup_clause: NOGROUP  */
#line 1008 "ompparser.yy"
                        { }
#line 9010 "ompparser.cc"
    break;

  case 643: /* reverse_offload_clause: REVERSE_OFFLOAD  */
#line 1010 "ompparser.yy"
                                        { }
#line 9016 "ompparser.cc"
    break;

  case 644: /* unified_address_clause: UNIFIED_ADDRESS  */
#line 1012 "ompparser.yy"
                                        { }
#line 9022 "ompparser.cc"
    break;

  case 645: /* unified_shared_memory_clause: UNIFIED_SHARED_MEMORY  */
#line 1014 "ompparser.yy"
                                                    { }
#line 9028 "ompparser.cc"
    break;

  case 646: /* atomic_default_mem_order_clause: ATOMIC_DEFAULT_MEM_ORDER '(' atomic_default_mem_order_parameter ')'  */
#line 1016 "ompparser.yy"
                                                                                                      { }
#line 9034 "ompparser.cc"
    break;

  case 647: /* atomic_default_mem_order_parameter: SEQ_CST  */
#line 1018 "ompparser.yy"
                                             { }
#line 9040 "ompparser.cc"
    break;

  case 648: /* atomic_default_mem_order_parameter: ACQ_REL  */
#line 1019 "ompparser.yy"
                                             { }
#line 9046 "ompparser.cc"
    break;

  case 649: /* atomic_default_mem_order_parameter: RELAXED  */
#line 1020 "ompparser.yy"
                                             { }
#line 9052 "ompparser.cc"
    break;

  case 650: /* dynamic_allocators_clause: DYNAMIC_ALLOCATORS  */
#line 1022 "ompparser.yy"
                                              { }
#line 9058 "ompparser.cc"
    break;

  case 651: /* ext_implementation_defined_requirement_clause: EXT_ EXPR_STRING  */
#line 1024 "ompparser.yy"
                                                                { }
#line 9064 "ompparser.cc"
    break;

  case 653: /* device_parameter: EXPR_STRING  */
#line 1028 "ompparser.yy"
                                { }
#line 9070 "ompparser.cc"
    break;

  case 654: /* $@59: %empty  */
#line 1029 "ompparser.yy"
                                   { }
#line 9076 "ompparser.cc"
    break;

  case 657: /* device_modifier_parameter: ANCESTOR  */
#line 1033 "ompparser.yy"
                                     { }
#line 9082 "ompparser.cc"
    break;

  case 658: /* device_modifier_parameter: DEVICE_NUM  */
#line 1034 "ompparser.yy"
                                       { }
#line 9088 "ompparser.cc"
    break;

  case 660: /* device_without_modifier_parameter: EXPR_STRING  */
#line 1039 "ompparser.yy"
                                                 { }
#line 9094 "ompparser.cc"
    break;

  case 661: /* $@60: %empty  */
#line 1040 "ompparser.yy"
                                                    { }
#line 9100 "ompparser.cc"
    break;

  case 663: /* $@61: %empty  */
#line 1043 "ompparser.yy"
                                       { }
#line 9106 "ompparser.cc"
    break;

  case 665: /* $@62: %empty  */
#line 1046 "ompparser.yy"
                                         { }
#line 9112 "ompparser.cc"
    break;

  case 667: /* $@63: %empty  */
#line 1048 "ompparser.yy"
                                     { }
#line 9118 "ompparser.cc"
    break;

  case 668: /* is_device_ptr_clause: IS_DEVICE_PTR $@63 '(' var_list ')'  */
#line 1048 "ompparser.yy"
                                                          {
}
#line 9125 "ompparser.cc"
    break;

  case 669: /* $@64: %empty  */
#line 1052 "ompparser.yy"
                                         { }
#line 9131 "ompparser.cc"
    break;

  case 670: /* has_device_addr_clause: HAS_DEVICE_ADDR $@64 '(' var_list ')'  */
#line 1052 "ompparser.yy"
                                                              {
}
#line 9138 "ompparser.cc"
    break;

  case 671: /* $@65: %empty  */
#line 1055 "ompparser.yy"
                              { }
#line 9144 "ompparser.cc"
    break;

  case 673: /* defaultmap_parameter: defaultmap_behavior  */
#line 1057 "ompparser.yy"
                                           { }
#line 9150 "ompparser.cc"
    break;

  case 675: /* defaultmap_behavior: BEHAVIOR_ALLOC  */
#line 1061 "ompparser.yy"
                                     { }
#line 9156 "ompparser.cc"
    break;

  case 676: /* defaultmap_behavior: BEHAVIOR_TO  */
#line 1062 "ompparser.yy"
                                  { }
#line 9162 "ompparser.cc"
    break;

  case 677: /* defaultmap_behavior: BEHAVIOR_FROM  */
#line 1063 "ompparser.yy"
                                    { }
#line 9168 "ompparser.cc"
    break;

  case 678: /* defaultmap_behavior: BEHAVIOR_TOFROM  */
#line 1064 "ompparser.yy"
                                      {}
#line 9174 "ompparser.cc"
    break;

  case 679: /* defaultmap_behavior: BEHAVIOR_FIRSTPRIVATE  */
#line 1065 "ompparser.yy"
                                            { }
#line 9180 "ompparser.cc"
    break;

  case 680: /* defaultmap_behavior: BEHAVIOR_NONE  */
#line 1066 "ompparser.yy"
                                    { }
#line 9186 "ompparser.cc"
    break;

  case 681: /* defaultmap_behavior: BEHAVIOR_DEFAULT  */
#line 1067 "ompparser.yy"
                                       { }
#line 9192 "ompparser.cc"
    break;

  case 682: /* defaultmap_category: CATEGORY_SCALAR  */
#line 1069 "ompparser.yy"
                                      { }
#line 9198 "ompparser.cc"
    break;

  case 683: /* defaultmap_category: CATEGORY_AGGREGATE  */
#line 1070 "ompparser.yy"
                                         { }
#line 9204 "ompparser.cc"
    break;

  case 684: /* defaultmap_category: CATEGORY_POINTER  */
#line 1071 "ompparser.yy"
                                       { }
#line 9210 "ompparser.cc"
    break;

  case 685: /* defaultmap_category: CATEGORY_ALLOCATABLE  */
#line 1072 "ompparser.yy"
                                           { }
#line 9216 "ompparser.cc"
    break;

  case 686: /* $@66: %empty  */
#line 1074 "ompparser.yy"
                                          { }
#line 9222 "ompparser.cc"
    break;

  case 690: /* allocators_list: allocators_list_parameter_enum  */
#line 1079 "ompparser.yy"
                                                 { }
#line 9228 "ompparser.cc"
    break;

  case 691: /* allocators_list: allocators_list_parameter_enum '(' EXPR_STRING ')'  */
#line 1080 "ompparser.yy"
                                                                     { }
#line 9234 "ompparser.cc"
    break;

  case 692: /* allocators_list: allocators_list_parameter_user  */
#line 1081 "ompparser.yy"
                                                 { }
#line 9240 "ompparser.cc"
    break;

  case 693: /* allocators_list: allocators_list_parameter_user '(' EXPR_STRING ')'  */
#line 1082 "ompparser.yy"
                                                                     { }
#line 9246 "ompparser.cc"
    break;

  case 694: /* allocators_list_parameter_enum: DEFAULT_MEM_ALLOC  */
#line 1085 "ompparser.yy"
                                                   { }
#line 9252 "ompparser.cc"
    break;

  case 695: /* allocators_list_parameter_enum: LARGE_CAP_MEM_ALLOC  */
#line 1086 "ompparser.yy"
                                                     { }
#line 9258 "ompparser.cc"
    break;

  case 696: /* allocators_list_parameter_enum: CONST_MEM_ALLOC  */
#line 1087 "ompparser.yy"
                                                 { }
#line 9264 "ompparser.cc"
    break;

  case 697: /* allocators_list_parameter_enum: HIGH_BW_MEM_ALLOC  */
#line 1088 "ompparser.yy"
                                                   { }
#line 9270 "ompparser.cc"
    break;

  case 698: /* allocators_list_parameter_enum: LOW_LAT_MEM_ALLOC  */
#line 1089 "ompparser.yy"
                                                   { }
#line 9276 "ompparser.cc"
    break;

  case 699: /* allocators_list_parameter_enum: CGROUP_MEM_ALLOC  */
#line 1090 "ompparser.yy"
                                                  { }
#line 9282 "ompparser.cc"
    break;

  case 700: /* allocators_list_parameter_enum: PTEAM_MEM_ALLOC  */
#line 1091 "ompparser.yy"
                                                 { }
#line 9288 "ompparser.cc"
    break;

  case 701: /* allocators_list_parameter_enum: THREAD_MEM_ALLOC  */
#line 1092 "ompparser.yy"
                                                  { }
#line 9294 "ompparser.cc"
    break;

  case 702: /* allocators_list_parameter_user: EXPR_STRING  */
#line 1094 "ompparser.yy"
                                             { }
#line 9300 "ompparser.cc"
    break;

  case 704: /* to_parameter: EXPR_STRING  */
#line 1097 "ompparser.yy"
                            { }
#line 9306 "ompparser.cc"
    break;

  case 705: /* $@67: %empty  */
#line 1098 "ompparser.yy"
                               { }
#line 9312 "ompparser.cc"
    break;

  case 708: /* $@68: %empty  */
#line 1101 "ompparser.yy"
                      { }
#line 9318 "ompparser.cc"
    break;

  case 709: /* to_mapper: TO_MAPPER $@68 '(' EXPR_STRING ')'  */
#line 1101 "ompparser.yy"
                                           { }
#line 9324 "ompparser.cc"
    break;

  case 711: /* from_parameter: EXPR_STRING  */
#line 1105 "ompparser.yy"
                             { }
#line 9330 "ompparser.cc"
    break;

  case 712: /* $@69: %empty  */
#line 1106 "ompparser.yy"
                                 { }
#line 9336 "ompparser.cc"
    break;

  case 715: /* $@70: %empty  */
#line 1109 "ompparser.yy"
                          { }
#line 9342 "ompparser.cc"
    break;

  case 716: /* from_mapper: FROM_MAPPER $@70 '(' EXPR_STRING ')'  */
#line 1109 "ompparser.yy"
                                               { }
#line 9348 "ompparser.cc"
    break;

  case 717: /* $@71: %empty  */
#line 1111 "ompparser.yy"
                   {
}
#line 9355 "ompparser.cc"
    break;

  case 718: /* link_clause: LINK $@71 '(' var_list ')'  */
#line 1112 "ompparser.yy"
                   { }
#line 9361 "ompparser.cc"
    break;

  case 719: /* device_type_clause: DEVICE_TYPE '(' device_type_parameter ')'  */
#line 1114 "ompparser.yy"
                                                               { }
#line 9367 "ompparser.cc"
    break;

  case 720: /* device_type_parameter: HOST  */
#line 1116 "ompparser.yy"
                             { }
#line 9373 "ompparser.cc"
    break;

  case 721: /* device_type_parameter: NOHOST  */
#line 1117 "ompparser.yy"
                             { }
#line 9379 "ompparser.cc"
    break;

  case 722: /* device_type_parameter: ANY  */
#line 1118 "ompparser.yy"
                          { }
#line 9385 "ompparser.cc"
    break;

  case 723: /* $@72: %empty  */
#line 1121 "ompparser.yy"
                 { }
#line 9391 "ompparser.cc"
    break;

  case 725: /* map_parameter: EXPR_STRING  */
#line 1123 "ompparser.yy"
                            { }
#line 9397 "ompparser.cc"
    break;

  case 726: /* $@73: %empty  */
#line 1124 "ompparser.yy"
                                { }
#line 9403 "ompparser.cc"
    break;

  case 740: /* map_modifier1: MAP_MODIFIER_ALWAYS  */
#line 1142 "ompparser.yy"
                                    { }
#line 9409 "ompparser.cc"
    break;

  case 741: /* map_modifier1: MAP_MODIFIER_CLOSE  */
#line 1143 "ompparser.yy"
                                    { }
#line 9415 "ompparser.cc"
    break;

  case 742: /* map_modifier1: map_modifier_mapper  */
#line 1144 "ompparser.yy"
                                    { }
#line 9421 "ompparser.cc"
    break;

  case 743: /* map_modifier2: MAP_MODIFIER_ALWAYS  */
#line 1146 "ompparser.yy"
                                    { }
#line 9427 "ompparser.cc"
    break;

  case 744: /* map_modifier2: MAP_MODIFIER_CLOSE  */
#line 1147 "ompparser.yy"
                                    { }
#line 9433 "ompparser.cc"
    break;

  case 745: /* map_modifier2: map_modifier_mapper  */
#line 1148 "ompparser.yy"
                                    { }
#line 9439 "ompparser.cc"
    break;

  case 746: /* map_modifier3: MAP_MODIFIER_ALWAYS  */
#line 1150 "ompparser.yy"
                                    { }
#line 9445 "ompparser.cc"
    break;

  case 747: /* map_modifier3: MAP_MODIFIER_CLOSE  */
#line 1151 "ompparser.yy"
                                    { }
#line 9451 "ompparser.cc"
    break;

  case 748: /* map_modifier3: map_modifier_mapper  */
#line 1152 "ompparser.yy"
                                    { }
#line 9457 "ompparser.cc"
    break;

  case 749: /* map_type: MAP_TYPE_TO  */
#line 1154 "ompparser.yy"
                       { }
#line 9463 "ompparser.cc"
    break;

  case 750: /* map_type: MAP_TYPE_FROM  */
#line 1155 "ompparser.yy"
                         { }
#line 9469 "ompparser.cc"
    break;

  case 751: /* map_type: MAP_TYPE_TOFROM  */
#line 1156 "ompparser.yy"
                           { }
#line 9475 "ompparser.cc"
    break;

  case 752: /* map_type: MAP_TYPE_ALLOC  */
#line 1157 "ompparser.yy"
                          { }
#line 9481 "ompparser.cc"
    break;

  case 753: /* map_type: MAP_TYPE_RELEASE  */
#line 1158 "ompparser.yy"
                            { }
#line 9487 "ompparser.cc"
    break;

  case 754: /* map_type: MAP_TYPE_DELETE  */
#line 1159 "ompparser.yy"
                           { }
#line 9493 "ompparser.cc"
    break;

  case 755: /* map_modifier_mapper: MAP_MODIFIER_MAPPER '(' EXPR_STRING ')'  */
#line 1161 "ompparser.yy"
                                                            { }
#line 9499 "ompparser.cc"
    break;

  case 756: /* task_reduction_clause: TASK_REDUCTION '(' task_reduction_identifier ':' var_list ')'  */
#line 1164 "ompparser.yy"
                                                                                      { }
#line 9505 "ompparser.cc"
    break;

  case 758: /* task_reduction_identifier: EXPR_STRING  */
#line 1167 "ompparser.yy"
                                        { }
#line 9511 "ompparser.cc"
    break;

  case 759: /* task_reduction_enum_identifier: '+'  */
#line 1170 "ompparser.yy"
                                     { }
#line 9517 "ompparser.cc"
    break;

  case 760: /* task_reduction_enum_identifier: '-'  */
#line 1171 "ompparser.yy"
                                     { }
#line 9523 "ompparser.cc"
    break;

  case 761: /* task_reduction_enum_identifier: '*'  */
#line 1172 "ompparser.yy"
                                     { }
#line 9529 "ompparser.cc"
    break;

  case 762: /* task_reduction_enum_identifier: '&'  */
#line 1173 "ompparser.yy"
                                     { }
#line 9535 "ompparser.cc"
    break;

  case 763: /* task_reduction_enum_identifier: '|'  */
#line 1174 "ompparser.yy"
                                     { }
#line 9541 "ompparser.cc"
    break;

  case 764: /* task_reduction_enum_identifier: '^'  */
#line 1175 "ompparser.yy"
                                     { }
#line 9547 "ompparser.cc"
    break;

  case 765: /* task_reduction_enum_identifier: LOGAND  */
#line 1176 "ompparser.yy"
                                        { }
#line 9553 "ompparser.cc"
    break;

  case 766: /* task_reduction_enum_identifier: LOGOR  */
#line 1177 "ompparser.yy"
                                       { }
#line 9559 "ompparser.cc"
    break;

  case 767: /* task_reduction_enum_identifier: MAX  */
#line 1178 "ompparser.yy"
                                     { }
#line 9565 "ompparser.cc"
    break;

  case 768: /* task_reduction_enum_identifier: MIN  */
#line 1179 "ompparser.yy"
                                     { }
#line 9571 "ompparser.cc"
    break;

  case 781: /* threads_clause: THREADS  */
#line 1198 "ompparser.yy"
                         { }
#line 9577 "ompparser.cc"
    break;

  case 782: /* simd_ordered_clause: SIMD  */
#line 1200 "ompparser.yy"
                           { }
#line 9583 "ompparser.cc"
    break;

  case 783: /* $@74: %empty  */
#line 1202 "ompparser.yy"
                                              { }
#line 9589 "ompparser.cc"
    break;

  case 801: /* $@75: %empty  */
#line 1223 "ompparser.yy"
                                                         { }
#line 9595 "ompparser.cc"
    break;

  case 826: /* $@76: %empty  */
#line 1251 "ompparser.yy"
                                                                         { }
#line 9601 "ompparser.cc"
    break;

  case 853: /* $@77: %empty  */
#line 1281 "ompparser.yy"
                                                                       { }
#line 9607 "ompparser.cc"
    break;

  case 880: /* $@78: %empty  */
#line 1311 "ompparser.yy"
                                                                                  { }
#line 9613 "ompparser.cc"
    break;

  case 911: /* $@79: %empty  */
#line 1345 "ompparser.yy"
                                                                                { }
#line 9619 "ompparser.cc"
    break;

  case 942: /* $@80: %empty  */
#line 1379 "ompparser.yy"
                                 { }
#line 9625 "ompparser.cc"
    break;

  case 961: /* $@81: %empty  */
#line 1401 "ompparser.yy"
                                           { }
#line 9631 "ompparser.cc"
    break;

  case 986: /* $@82: %empty  */
#line 1430 "ompparser.yy"
                                                   { }
#line 9637 "ompparser.cc"
    break;

  case 1018: /* $@83: %empty  */
#line 1465 "ompparser.yy"
                                                 { }
#line 9643 "ompparser.cc"
    break;

  case 1050: /* $@84: %empty  */
#line 1500 "ompparser.yy"
                                                             { }
#line 9649 "ompparser.cc"
    break;

  case 1085: /* $@85: %empty  */
#line 1538 "ompparser.yy"
                                                           { }
#line 9655 "ompparser.cc"
    break;

  case 1120: /* $@86: %empty  */
#line 1576 "ompparser.yy"
                                                     { }
#line 9661 "ompparser.cc"
    break;

  case 1149: /* $@87: %empty  */
#line 1608 "ompparser.yy"
                                   { }
#line 9667 "ompparser.cc"
    break;

  case 1177: /* $@88: %empty  */
#line 1639 "ompparser.yy"
                                     { }
#line 9673 "ompparser.cc"
    break;

  case 1201: /* $@89: %empty  */
#line 1666 "ompparser.yy"
                                                           { }
#line 9679 "ompparser.cc"
    break;

  case 1228: /* $@90: %empty  */
#line 1696 "ompparser.yy"
                                                                     { }
#line 9685 "ompparser.cc"
    break;

  case 1261: /* $@91: %empty  */
#line 1732 "ompparser.yy"
                                               { }
#line 9691 "ompparser.cc"
    break;

  case 1289: /* $@92: %empty  */
#line 1763 "ompparser.yy"
                                                                                     { }
#line 9697 "ompparser.cc"
    break;

  case 1323: /* $@93: %empty  */
#line 1800 "ompparser.yy"
                                                                                   { }
#line 9703 "ompparser.cc"
    break;

  case 1357: /* $@94: %empty  */
#line 1837 "ompparser.yy"
                                                                                               { }
#line 9709 "ompparser.cc"
    break;

  case 1395: /* $@95: %empty  */
#line 1878 "ompparser.yy"
                                                                                             { }
#line 9715 "ompparser.cc"
    break;

  case 1433: /* $@96: %empty  */
#line 1921 "ompparser.yy"
                    { }
#line 9721 "ompparser.cc"
    break;

  case 1435: /* $@97: %empty  */
#line 1923 "ompparser.yy"
                  { }
#line 9727 "ompparser.cc"
    break;

  case 1437: /* $@98: %empty  */
#line 1925 "ompparser.yy"
                         { }
#line 9733 "ompparser.cc"
    break;

  case 1439: /* $@99: %empty  */
#line 1927 "ompparser.yy"
                      { }
#line 9739 "ompparser.cc"
    break;

  case 1441: /* $@100: %empty  */
#line 1929 "ompparser.yy"
                              { }
#line 9745 "ompparser.cc"
    break;

  case 1443: /* $@101: %empty  */
#line 1931 "ompparser.yy"
                            { }
#line 9751 "ompparser.cc"
    break;

  case 1445: /* $@102: %empty  */
#line 1933 "ompparser.yy"
                                   { }
#line 9757 "ompparser.cc"
    break;

  case 1448: /* $@103: %empty  */
#line 1937 "ompparser.yy"
                                              { }
#line 9763 "ompparser.cc"
    break;

  case 1450: /* $@104: %empty  */
#line 1939 "ompparser.yy"
                                      { }
#line 9769 "ompparser.cc"
    break;

  case 1452: /* $@105: %empty  */
#line 1941 "ompparser.yy"
                                              { }
#line 9775 "ompparser.cc"
    break;

  case 1455: /* proc_name: EXPR_STRING  */
#line 1944 "ompparser.yy"
                        { }
#line 9781 "ompparser.cc"
    break;

  case 1456: /* $@106: %empty  */
#line 1946 "ompparser.yy"
                                  { }
#line 9787 "ompparser.cc"
    break;

  case 1458: /* $@107: %empty  */
#line 1948 "ompparser.yy"
                                            { }
#line 9793 "ompparser.cc"
    break;

  case 1460: /* $@108: %empty  */
#line 1950 "ompparser.yy"
                                                            { }
#line 9799 "ompparser.cc"
    break;

  case 1462: /* $@109: %empty  */
#line 1952 "ompparser.yy"
                                                          { }
#line 9805 "ompparser.cc"
    break;

  case 1464: /* $@110: %empty  */
#line 1954 "ompparser.yy"
                                                                      { }
#line 9811 "ompparser.cc"
    break;

  case 1466: /* $@111: %empty  */
#line 1956 "ompparser.yy"
                                                                    { }
#line 9817 "ompparser.cc"
    break;

  case 1468: /* $@112: %empty  */
#line 1958 "ompparser.yy"
                                      { }
#line 9823 "ompparser.cc"
    break;

  case 1470: /* $@113: %empty  */
#line 1960 "ompparser.yy"
                                    { }
#line 9829 "ompparser.cc"
    break;

  case 1472: /* $@114: %empty  */
#line 1962 "ompparser.yy"
                                        { }
#line 9835 "ompparser.cc"
    break;

  case 1474: /* $@115: %empty  */
#line 1964 "ompparser.yy"
                                                { }
#line 9841 "ompparser.cc"
    break;

  case 1476: /* $@116: %empty  */
#line 1966 "ompparser.yy"
                                                  { }
#line 9847 "ompparser.cc"
    break;

  case 1478: /* $@117: %empty  */
#line 1968 "ompparser.yy"
                                            { }
#line 9853 "ompparser.cc"
    break;

  case 1480: /* $@118: %empty  */
#line 1970 "ompparser.yy"
                                            {
                          }
#line 9860 "ompparser.cc"
    break;

  case 1482: /* $@119: %empty  */
#line 1974 "ompparser.yy"
                                                      {
                               }
#line 9867 "ompparser.cc"
    break;

  case 1484: /* $@120: %empty  */
#line 1978 "ompparser.yy"
                                                              {
                                   }
#line 9874 "ompparser.cc"
    break;

  case 1486: /* $@121: %empty  */
#line 1982 "ompparser.yy"
                                                                        {
                                        }
#line 9881 "ompparser.cc"
    break;

  case 1488: /* $@122: %empty  */
#line 1986 "ompparser.yy"
                      { }
#line 9887 "ompparser.cc"
    break;

  case 1490: /* $@123: %empty  */
#line 1988 "ompparser.yy"
                      { }
#line 9893 "ompparser.cc"
    break;

  case 1492: /* $@124: %empty  */
#line 1990 "ompparser.yy"
                              { }
#line 9899 "ompparser.cc"
    break;

  case 1494: /* $@125: %empty  */
#line 1992 "ompparser.yy"
                                     { }
#line 9905 "ompparser.cc"
    break;

  case 1496: /* section_directive: SECTION  */
#line 1994 "ompparser.yy"
                            { }
#line 9911 "ompparser.cc"
    break;

  case 1497: /* $@126: %empty  */
#line 1996 "ompparser.yy"
                          { }
#line 9917 "ompparser.cc"
    break;

  case 1499: /* $@127: %empty  */
#line 1998 "ompparser.yy"
                                 { }
#line 9923 "ompparser.cc"
    break;

  case 1501: /* workshare_directive: WORKSHARE  */
#line 2000 "ompparser.yy"
                                { }
#line 9929 "ompparser.cc"
    break;

  case 1502: /* $@128: %empty  */
#line 2002 "ompparser.yy"
                                       { }
#line 9935 "ompparser.cc"
    break;

  case 1504: /* $@129: %empty  */
#line 2004 "ompparser.yy"
                          { }
#line 9941 "ompparser.cc"
    break;

  case 1506: /* $@130: %empty  */
#line 2011 "ompparser.yy"
                                                  { }
#line 9947 "ompparser.cc"
    break;

  case 1508: /* $@131: %empty  */
#line 2018 "ompparser.yy"
                        { }
#line 9953 "ompparser.cc"
    break;

  case 1510: /* $@132: %empty  */
#line 2021 "ompparser.yy"
                              { }
#line 9959 "ompparser.cc"
    break;

  case 1513: /* directive_variable: EXPR_STRING  */
#line 2026 "ompparser.yy"
                                 { }
#line 9965 "ompparser.cc"
    break;

  case 1516: /* $@133: %empty  */
#line 2032 "ompparser.yy"
                                        {  }
#line 9971 "ompparser.cc"
    break;

  case 1518: /* threadprivate_variable: EXPR_STRING  */
#line 2034 "ompparser.yy"
                                     { }
#line 9977 "ompparser.cc"
    break;

  case 1521: /* $@134: %empty  */
#line 2040 "ompparser.yy"
                                                { }
#line 9983 "ompparser.cc"
    break;

  case 1524: /* reduction_identifiers: '+'  */
#line 2046 "ompparser.yy"
                           { }
#line 9989 "ompparser.cc"
    break;

  case 1525: /* reduction_identifiers: '-'  */
#line 2047 "ompparser.yy"
                           { }
#line 9995 "ompparser.cc"
    break;

  case 1526: /* reduction_identifiers: '*'  */
#line 2048 "ompparser.yy"
                           { }
#line 10001 "ompparser.cc"
    break;

  case 1527: /* reduction_identifiers: '&'  */
#line 2049 "ompparser.yy"
                           { }
#line 10007 "ompparser.cc"
    break;

  case 1528: /* reduction_identifiers: '|'  */
#line 2050 "ompparser.yy"
                           { }
#line 10013 "ompparser.cc"
    break;

  case 1529: /* reduction_identifiers: '^'  */
#line 2051 "ompparser.yy"
                           { }
#line 10019 "ompparser.cc"
    break;

  case 1530: /* reduction_identifiers: LOGAND  */
#line 2052 "ompparser.yy"
                              { }
#line 10025 "ompparser.cc"
    break;

  case 1531: /* reduction_identifiers: LOGOR  */
#line 2053 "ompparser.yy"
                             { }
#line 10031 "ompparser.cc"
    break;

  case 1532: /* typername_variable: EXPR_STRING  */
#line 2056 "ompparser.yy"
                                 { }
#line 10037 "ompparser.cc"
    break;

  case 1535: /* combiner: EXPR_STRING  */
#line 2061 "ompparser.yy"
                       { }
#line 10043 "ompparser.cc"
    break;

  case 1536: /* $@135: %empty  */
#line 2064 "ompparser.yy"
                                          { }
#line 10049 "ompparser.cc"
    break;

  case 1541: /* mapper_identifier: IDENTIFIER_DEFAULT  */
#line 2074 "ompparser.yy"
                                       { }
#line 10055 "ompparser.cc"
    break;

  case 1542: /* mapper_identifier: EXPR_STRING  */
#line 2075 "ompparser.yy"
                                { }
#line 10061 "ompparser.cc"
    break;

  case 1543: /* type_var: EXPR_STRING  */
#line 2078 "ompparser.yy"
                       { }
#line 10067 "ompparser.cc"
    break;

  case 1772: /* $@136: %empty  */
#line 2442 "ompparser.yy"
                             {enReductionCluster = 1;}
#line 10073 "ompparser.cc"
    break;

  case 1774: /* $@137: %empty  */
#line 2443 "ompparser.yy"
                             {enAllReductionCluster = 1;}
#line 10079 "ompparser.cc"
    break;

  case 1815: /* $@138: %empty  */
#line 2490 "ompparser.yy"
                      {enReductionDistribute = 1;}
#line 10085 "ompparser.cc"
    break;

  case 1817: /* $@139: %empty  */
#line 2491 "ompparser.yy"
                      {enAllReductionDistribute = 1;}
#line 10091 "ompparser.cc"
    break;

  case 1838: /* $@140: %empty  */
#line 2513 "ompparser.yy"
                                  {enReductionDistribute = 1;}
#line 10097 "ompparser.cc"
    break;

  case 1840: /* $@141: %empty  */
#line 2514 "ompparser.yy"
                                  {enAllReductionDistribute = 1;}
#line 10103 "ompparser.cc"
    break;

  case 1842: /* $@142: %empty  */
#line 2517 "ompparser.yy"
                           { }
#line 10109 "ompparser.cc"
    break;

  case 1844: /* dependance_type: IN  */
#line 2520 "ompparser.yy"
                     {printf("var: IN\n");
                      addArg("IN"); }
#line 10116 "ompparser.cc"
    break;

  case 1845: /* dependance_type: OUT  */
#line 2522 "ompparser.yy"
                                      {printf("var: OUT\n");
                      addArg("OUT"); }
#line 10123 "ompparser.cc"
    break;

  case 2226: /* construct_type_clause: PARALLEL  */
#line 2942 "ompparser.yy"
                                 { }
#line 10129 "ompparser.cc"
    break;

  case 2227: /* construct_type_clause: SECTIONS  */
#line 2943 "ompparser.yy"
                                 { }
#line 10135 "ompparser.cc"
    break;

  case 2228: /* construct_type_clause: FOR  */
#line 2944 "ompparser.yy"
                            { }
#line 10141 "ompparser.cc"
    break;

  case 2229: /* construct_type_clause: DO  */
#line 2945 "ompparser.yy"
                           { }
#line 10147 "ompparser.cc"
    break;

  case 2230: /* construct_type_clause: TASKGROUP  */
#line 2946 "ompparser.yy"
                                  { }
#line 10153 "ompparser.cc"
    break;

  case 2231: /* if_parallel_clause: IF '(' if_parallel_parameter ')'  */
#line 2953 "ompparser.yy"
                                                      { ; }
#line 10159 "ompparser.cc"
    break;

  case 2232: /* $@143: %empty  */
#line 2956 "ompparser.yy"
                                     { }
#line 10165 "ompparser.cc"
    break;

  case 2233: /* if_parallel_parameter: PARALLEL ':' $@143 expression  */
#line 2957 "ompparser.yy"
                                   { ; }
#line 10171 "ompparser.cc"
    break;

  case 2234: /* if_parallel_parameter: EXPR_STRING  */
#line 2958 "ompparser.yy"
                                    { }
#line 10177 "ompparser.cc"
    break;

  case 2235: /* if_task_clause: IF '(' if_task_parameter ')'  */
#line 2960 "ompparser.yy"
                                              { ; }
#line 10183 "ompparser.cc"
    break;

  case 2236: /* $@144: %empty  */
#line 2963 "ompparser.yy"
                             { }
#line 10189 "ompparser.cc"
    break;

  case 2237: /* if_task_parameter: TASK ':' $@144 expression  */
#line 2963 "ompparser.yy"
                                             { ; }
#line 10195 "ompparser.cc"
    break;

  case 2238: /* if_task_parameter: EXPR_STRING  */
#line 2964 "ompparser.yy"
                                { }
#line 10201 "ompparser.cc"
    break;

  case 2239: /* if_taskloop_clause: IF '(' if_taskloop_parameter ')'  */
#line 2966 "ompparser.yy"
                                                      { ; }
#line 10207 "ompparser.cc"
    break;

  case 2240: /* $@145: %empty  */
#line 2969 "ompparser.yy"
                                     { }
#line 10213 "ompparser.cc"
    break;

  case 2241: /* if_taskloop_parameter: TASKLOOP ':' $@145 expression  */
#line 2969 "ompparser.yy"
                                                     { ; }
#line 10219 "ompparser.cc"
    break;

  case 2242: /* if_taskloop_parameter: EXPR_STRING  */
#line 2970 "ompparser.yy"
                                    { }
#line 10225 "ompparser.cc"
    break;

  case 2243: /* if_target_data_clause: IF '(' if_target_data_parameter ')'  */
#line 2972 "ompparser.yy"
                                                            { ; }
#line 10231 "ompparser.cc"
    break;

  case 2244: /* $@146: %empty  */
#line 2975 "ompparser.yy"
                                           { }
#line 10237 "ompparser.cc"
    break;

  case 2245: /* if_target_data_parameter: TARGET DATA ':' $@146 expression  */
#line 2975 "ompparser.yy"
                                                           { ; }
#line 10243 "ompparser.cc"
    break;

  case 2246: /* if_target_data_parameter: EXPR_STRING  */
#line 2976 "ompparser.yy"
                                       { }
#line 10249 "ompparser.cc"
    break;

  case 2247: /* if_target_parallel_clause: IF '(' if_target_parallel_parameter ')'  */
#line 2978 "ompparser.yy"
                                                                    { ; }
#line 10255 "ompparser.cc"
    break;

  case 2248: /* $@147: %empty  */
#line 2981 "ompparser.yy"
                                          { }
#line 10261 "ompparser.cc"
    break;

  case 2249: /* if_target_parallel_parameter: TARGET ':' $@147 expression  */
#line 2981 "ompparser.yy"
                                                          { ; }
#line 10267 "ompparser.cc"
    break;

  case 2250: /* $@148: %empty  */
#line 2982 "ompparser.yy"
                                            { }
#line 10273 "ompparser.cc"
    break;

  case 2251: /* if_target_parallel_parameter: PARALLEL ':' $@148 expression  */
#line 2982 "ompparser.yy"
                                                            { ; }
#line 10279 "ompparser.cc"
    break;

  case 2252: /* if_target_parallel_parameter: EXPR_STRING  */
#line 2983 "ompparser.yy"
                                           { }
#line 10285 "ompparser.cc"
    break;

  case 2253: /* if_target_simd_clause: IF '(' if_target_simd_parameter ')'  */
#line 2985 "ompparser.yy"
                                                            { ; }
#line 10291 "ompparser.cc"
    break;

  case 2254: /* $@149: %empty  */
#line 2988 "ompparser.yy"
                                      { }
#line 10297 "ompparser.cc"
    break;

  case 2255: /* if_target_simd_parameter: TARGET ':' $@149 expression  */
#line 2988 "ompparser.yy"
                                                      { ; }
#line 10303 "ompparser.cc"
    break;

  case 2256: /* $@150: %empty  */
#line 2989 "ompparser.yy"
                                    { }
#line 10309 "ompparser.cc"
    break;

  case 2257: /* if_target_simd_parameter: SIMD ':' $@150 expression  */
#line 2989 "ompparser.yy"
                                                    { ; }
#line 10315 "ompparser.cc"
    break;

  case 2258: /* if_target_simd_parameter: EXPR_STRING  */
#line 2990 "ompparser.yy"
                                       { }
#line 10321 "ompparser.cc"
    break;

  case 2259: /* if_target_enter_data_clause: IF '(' if_target_enter_data_parameter ')'  */
#line 2992 "ompparser.yy"
                                                                        { ; }
#line 10327 "ompparser.cc"
    break;

  case 2260: /* $@151: %empty  */
#line 2995 "ompparser.yy"
                                                       { }
#line 10333 "ompparser.cc"
    break;

  case 2261: /* if_target_enter_data_parameter: TARGET ENTER DATA ':' $@151 expression  */
#line 2995 "ompparser.yy"
                                                                       { ; }
#line 10339 "ompparser.cc"
    break;

  case 2262: /* if_target_enter_data_parameter: EXPR_STRING  */
#line 2996 "ompparser.yy"
                                             { }
#line 10345 "ompparser.cc"
    break;

  case 2263: /* if_target_exit_data_clause: IF '(' if_target_exit_data_parameter ')'  */
#line 2998 "ompparser.yy"
                                                                      { ; }
#line 10351 "ompparser.cc"
    break;

  case 2264: /* $@152: %empty  */
#line 3001 "ompparser.yy"
                                                     { }
#line 10357 "ompparser.cc"
    break;

  case 2265: /* if_target_exit_data_parameter: TARGET EXIT DATA ':' $@152 expression  */
#line 3001 "ompparser.yy"
                                                                     { ; }
#line 10363 "ompparser.cc"
    break;

  case 2266: /* if_target_exit_data_parameter: EXPR_STRING  */
#line 3002 "ompparser.yy"
                                            { }
#line 10369 "ompparser.cc"
    break;

  case 2267: /* if_target_clause: IF '(' if_target_parameter ')'  */
#line 3004 "ompparser.yy"
                                                  { ; }
#line 10375 "ompparser.cc"
    break;

  case 2268: /* $@153: %empty  */
#line 3007 "ompparser.yy"
                                 { }
#line 10381 "ompparser.cc"
    break;

  case 2269: /* if_target_parameter: TARGET ':' $@153 expression  */
#line 3007 "ompparser.yy"
                                                 { ; }
#line 10387 "ompparser.cc"
    break;

  case 2270: /* if_target_parameter: EXPR_STRING  */
#line 3008 "ompparser.yy"
                                  { }
#line 10393 "ompparser.cc"
    break;

  case 2271: /* if_target_update_clause: IF '(' if_target_update_parameter ')'  */
#line 3010 "ompparser.yy"
                                                                { ; }
#line 10399 "ompparser.cc"
    break;

  case 2272: /* $@154: %empty  */
#line 3013 "ompparser.yy"
                                               { }
#line 10405 "ompparser.cc"
    break;

  case 2273: /* if_target_update_parameter: TARGET UPDATE ':' $@154 expression  */
#line 3013 "ompparser.yy"
                                                               { ; }
#line 10411 "ompparser.cc"
    break;

  case 2274: /* if_target_update_parameter: EXPR_STRING  */
#line 3014 "ompparser.yy"
                                         { }
#line 10417 "ompparser.cc"
    break;

  case 2275: /* if_taskloop_simd_clause: IF '(' if_taskloop_simd_parameter ')'  */
#line 3016 "ompparser.yy"
                                                                { ; }
#line 10423 "ompparser.cc"
    break;

  case 2276: /* $@155: %empty  */
#line 3019 "ompparser.yy"
                                          { }
#line 10429 "ompparser.cc"
    break;

  case 2277: /* if_taskloop_simd_parameter: TASKLOOP ':' $@155 expression  */
#line 3019 "ompparser.yy"
                                                          { ; }
#line 10435 "ompparser.cc"
    break;

  case 2278: /* $@156: %empty  */
#line 3020 "ompparser.yy"
                                      { }
#line 10441 "ompparser.cc"
    break;

  case 2279: /* if_taskloop_simd_parameter: SIMD ':' $@156 expression  */
#line 3020 "ompparser.yy"
                                                      { ; }
#line 10447 "ompparser.cc"
    break;

  case 2280: /* if_taskloop_simd_parameter: EXPR_STRING  */
#line 3021 "ompparser.yy"
                                         {
                             }
#line 10454 "ompparser.cc"
    break;

  case 2281: /* if_simd_clause: IF '(' if_simd_parameter ')'  */
#line 3023 "ompparser.yy"
                                              { ; }
#line 10460 "ompparser.cc"
    break;

  case 2282: /* $@157: %empty  */
#line 3025 "ompparser.yy"
                             { }
#line 10466 "ompparser.cc"
    break;

  case 2283: /* if_simd_parameter: SIMD ':' $@157 expression  */
#line 3025 "ompparser.yy"
                                             { ; }
#line 10472 "ompparser.cc"
    break;

  case 2284: /* if_simd_parameter: EXPR_STRING  */
#line 3026 "ompparser.yy"
                                { }
#line 10478 "ompparser.cc"
    break;

  case 2285: /* if_parallel_simd_clause: IF '(' if_parallel_simd_parameter ')'  */
#line 3028 "ompparser.yy"
                                                                { ; }
#line 10484 "ompparser.cc"
    break;

  case 2286: /* $@158: %empty  */
#line 3030 "ompparser.yy"
                                      { }
#line 10490 "ompparser.cc"
    break;

  case 2287: /* if_parallel_simd_parameter: SIMD ':' $@158 expression  */
#line 3030 "ompparser.yy"
                                                      { ; }
#line 10496 "ompparser.cc"
    break;

  case 2288: /* $@159: %empty  */
#line 3031 "ompparser.yy"
                                          { }
#line 10502 "ompparser.cc"
    break;

  case 2289: /* if_parallel_simd_parameter: PARALLEL ':' $@159 expression  */
#line 3031 "ompparser.yy"
                                                          { ; }
#line 10508 "ompparser.cc"
    break;

  case 2290: /* if_parallel_simd_parameter: EXPR_STRING  */
#line 3032 "ompparser.yy"
                                         { }
#line 10514 "ompparser.cc"
    break;

  case 2291: /* if_target_parallel_simd_clause: IF '(' if_target_parallel_simd_parameter ')'  */
#line 3034 "ompparser.yy"
                                                                              { ; }
#line 10520 "ompparser.cc"
    break;

  case 2292: /* $@160: %empty  */
#line 3036 "ompparser.yy"
                                             { }
#line 10526 "ompparser.cc"
    break;

  case 2293: /* if_target_parallel_simd_parameter: SIMD ':' $@160 expression  */
#line 3036 "ompparser.yy"
                                                             { ; }
#line 10532 "ompparser.cc"
    break;

  case 2294: /* $@161: %empty  */
#line 3037 "ompparser.yy"
                                                 { }
#line 10538 "ompparser.cc"
    break;

  case 2295: /* if_target_parallel_simd_parameter: PARALLEL ':' $@161 expression  */
#line 3037 "ompparser.yy"
                                                                 { ; }
#line 10544 "ompparser.cc"
    break;

  case 2296: /* $@162: %empty  */
#line 3038 "ompparser.yy"
                                               { }
#line 10550 "ompparser.cc"
    break;

  case 2297: /* if_target_parallel_simd_parameter: TARGET ':' $@162 expression  */
#line 3038 "ompparser.yy"
                                                               { ; }
#line 10556 "ompparser.cc"
    break;

  case 2298: /* if_target_parallel_simd_parameter: EXPR_STRING  */
#line 3039 "ompparser.yy"
                                                { }
#line 10562 "ompparser.cc"
    break;

  case 2299: /* if_cancel_clause: IF '(' if_cancel_parameter ')'  */
#line 3041 "ompparser.yy"
                                                  { ; }
#line 10568 "ompparser.cc"
    break;

  case 2300: /* $@163: %empty  */
#line 3043 "ompparser.yy"
                                 { }
#line 10574 "ompparser.cc"
    break;

  case 2301: /* if_cancel_parameter: CANCEL ':' $@163 expression  */
#line 3043 "ompparser.yy"
                                                 { ; }
#line 10580 "ompparser.cc"
    break;

  case 2302: /* if_cancel_parameter: EXPR_STRING  */
#line 3044 "ompparser.yy"
                                  { }
#line 10586 "ompparser.cc"
    break;

  case 2303: /* if_parallel_taskloop_clause: IF '(' if_parallel_taskloop_parameter ')'  */
#line 3046 "ompparser.yy"
                                                                        { ; }
#line 10592 "ompparser.cc"
    break;

  case 2304: /* $@164: %empty  */
#line 3048 "ompparser.yy"
                                              { }
#line 10598 "ompparser.cc"
    break;

  case 2305: /* if_parallel_taskloop_parameter: PARALLEL ':' $@164 expression  */
#line 3048 "ompparser.yy"
                                                              { ; }
#line 10604 "ompparser.cc"
    break;

  case 2306: /* $@165: %empty  */
#line 3049 "ompparser.yy"
                                              { }
#line 10610 "ompparser.cc"
    break;

  case 2307: /* if_parallel_taskloop_parameter: TASKLOOP ':' $@165 expression  */
#line 3049 "ompparser.yy"
                                                              { ; }
#line 10616 "ompparser.cc"
    break;

  case 2308: /* if_parallel_taskloop_parameter: EXPR_STRING  */
#line 3050 "ompparser.yy"
                                             {
                                }
#line 10623 "ompparser.cc"
    break;

  case 2309: /* if_parallel_taskloop_simd_clause: IF '(' if_parallel_taskloop_simd_parameter ')'  */
#line 3052 "ompparser.yy"
                                                                                  { ; }
#line 10629 "ompparser.cc"
    break;

  case 2310: /* $@166: %empty  */
#line 3054 "ompparser.yy"
                                                   { }
#line 10635 "ompparser.cc"
    break;

  case 2311: /* if_parallel_taskloop_simd_parameter: PARALLEL ':' $@166 expression  */
#line 3054 "ompparser.yy"
                                                                   { ; }
#line 10641 "ompparser.cc"
    break;

  case 2312: /* $@167: %empty  */
#line 3055 "ompparser.yy"
                                                   { }
#line 10647 "ompparser.cc"
    break;

  case 2313: /* if_parallel_taskloop_simd_parameter: TASKLOOP ':' $@167 expression  */
#line 3055 "ompparser.yy"
                                                                   { ; }
#line 10653 "ompparser.cc"
    break;

  case 2314: /* $@168: %empty  */
#line 3056 "ompparser.yy"
                                               { }
#line 10659 "ompparser.cc"
    break;

  case 2315: /* if_parallel_taskloop_simd_parameter: SIMD ':' $@168 expression  */
#line 3056 "ompparser.yy"
                                                               { ; }
#line 10665 "ompparser.cc"
    break;

  case 2316: /* if_parallel_taskloop_simd_parameter: EXPR_STRING  */
#line 3057 "ompparser.yy"
                                                  { }
#line 10671 "ompparser.cc"
    break;

  case 2317: /* $@169: %empty  */
#line 3068 "ompparser.yy"
                                {
                         }
#line 10678 "ompparser.cc"
    break;

  case 2319: /* $@170: %empty  */
#line 3071 "ompparser.yy"
                            {
                         }
#line 10685 "ompparser.cc"
    break;

  case 2321: /* $@171: %empty  */
#line 3074 "ompparser.yy"
                    {
                  }
#line 10692 "ompparser.cc"
    break;

  case 2323: /* $@172: %empty  */
#line 3078 "ompparser.yy"
                                  { }
#line 10698 "ompparser.cc"
    break;

  case 2325: /* $@173: %empty  */
#line 3080 "ompparser.yy"
                      {
                }
#line 10705 "ompparser.cc"
    break;

  case 2327: /* default_clause: DEFAULT '(' default_parameter ')'  */
#line 3084 "ompparser.yy"
                                                   { }
#line 10711 "ompparser.cc"
    break;

  case 2328: /* default_parameter: SHARED  */
#line 3087 "ompparser.yy"
                           { }
#line 10717 "ompparser.cc"
    break;

  case 2329: /* default_parameter: NONE  */
#line 3088 "ompparser.yy"
                         { }
#line 10723 "ompparser.cc"
    break;

  case 2330: /* default_parameter: FIRSTPRIVATE  */
#line 3089 "ompparser.yy"
                                 { }
#line 10729 "ompparser.cc"
    break;

  case 2331: /* default_parameter: PRIVATE  */
#line 3090 "ompparser.yy"
                            { }
#line 10735 "ompparser.cc"
    break;

  case 2332: /* default_variant_clause: DEFAULT '(' default_variant_directive ')'  */
#line 3093 "ompparser.yy"
                                                                   { }
#line 10741 "ompparser.cc"
    break;

  case 2333: /* default_variant_directive: %empty  */
#line 3096 "ompparser.yy"
                            { }
#line 10747 "ompparser.cc"
    break;

  case 2334: /* proc_bind_clause: PROC_BIND '(' proc_bind_parameter ')'  */
#line 3099 "ompparser.yy"
                                                         { }
#line 10753 "ompparser.cc"
    break;

  case 2335: /* proc_bind_parameter: MASTER  */
#line 3101 "ompparser.yy"
                             { }
#line 10759 "ompparser.cc"
    break;

  case 2336: /* proc_bind_parameter: CLOSE  */
#line 3102 "ompparser.yy"
                            { }
#line 10765 "ompparser.cc"
    break;

  case 2337: /* proc_bind_parameter: SPREAD  */
#line 3103 "ompparser.yy"
                             { }
#line 10771 "ompparser.cc"
    break;

  case 2338: /* bind_clause: BIND '(' bind_parameter ')'  */
#line 3105 "ompparser.yy"
                                          { }
#line 10777 "ompparser.cc"
    break;

  case 2339: /* bind_parameter: TEAMS  */
#line 3107 "ompparser.yy"
                       { }
#line 10783 "ompparser.cc"
    break;

  case 2340: /* bind_parameter: PARALLEL  */
#line 3108 "ompparser.yy"
                          { }
#line 10789 "ompparser.cc"
    break;

  case 2341: /* bind_parameter: THREAD  */
#line 3109 "ompparser.yy"
                        { }
#line 10795 "ompparser.cc"
    break;

  case 2343: /* allocate_parameter: EXPR_STRING  */
#line 3113 "ompparser.yy"
                                  { }
#line 10801 "ompparser.cc"
    break;

  case 2344: /* $@174: %empty  */
#line 3114 "ompparser.yy"
                                     { }
#line 10807 "ompparser.cc"
    break;

  case 2346: /* $@175: %empty  */
#line 3115 "ompparser.yy"
                                             { ; }
#line 10813 "ompparser.cc"
    break;

  case 2348: /* allocator_parameter: DEFAULT_MEM_ALLOC  */
#line 3117 "ompparser.yy"
                                        { }
#line 10819 "ompparser.cc"
    break;

  case 2349: /* allocator_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3118 "ompparser.yy"
                                          { }
#line 10825 "ompparser.cc"
    break;

  case 2350: /* allocator_parameter: CONST_MEM_ALLOC  */
#line 3119 "ompparser.yy"
                                      { }
#line 10831 "ompparser.cc"
    break;

  case 2351: /* allocator_parameter: HIGH_BW_MEM_ALLOC  */
#line 3120 "ompparser.yy"
                                        { }
#line 10837 "ompparser.cc"
    break;

  case 2352: /* allocator_parameter: LOW_LAT_MEM_ALLOC  */
#line 3121 "ompparser.yy"
                                        { }
#line 10843 "ompparser.cc"
    break;

  case 2353: /* allocator_parameter: CGROUP_MEM_ALLOC  */
#line 3122 "ompparser.yy"
                                       { }
#line 10849 "ompparser.cc"
    break;

  case 2354: /* allocator_parameter: PTEAM_MEM_ALLOC  */
#line 3123 "ompparser.yy"
                                      { }
#line 10855 "ompparser.cc"
    break;

  case 2355: /* allocator_parameter: THREAD_MEM_ALLOC  */
#line 3124 "ompparser.yy"
                                       { }
#line 10861 "ompparser.cc"
    break;

  case 2356: /* allocator_parameter: EXPR_STRING  */
#line 3125 "ompparser.yy"
                                  { }
#line 10867 "ompparser.cc"
    break;

  case 2357: /* $@176: %empty  */
#line 3128 "ompparser.yy"
                         { }
#line 10873 "ompparser.cc"
    break;

  case 2358: /* private_clause: PRIVATE $@176 '(' var_list ')'  */
#line 3128 "ompparser.yy"
                                              { }
#line 10879 "ompparser.cc"
    break;

  case 2359: /* alloc_clause: ALLOC '(' var_list_cluster ')'  */
#line 3131 "ompparser.yy"
                                              { MPIAlloc(); }
#line 10885 "ompparser.cc"
    break;

  case 2360: /* $@177: %empty  */
#line 3133 "ompparser.yy"
                     { }
#line 10891 "ompparser.cc"
    break;

  case 2361: /* broad_clause: BROAD $@177 '(' var_list_cluster ')'  */
#line 3133 "ompparser.yy"
                                                  { MPIBroad(); }
#line 10897 "ompparser.cc"
    break;

  case 2362: /* $@178: %empty  */
#line 3135 "ompparser.yy"
                         { }
#line 10903 "ompparser.cc"
    break;

  case 2363: /* scatter_clause: SCATTER $@178 '(' var_chunk_list_cluster ')'  */
#line 3135 "ompparser.yy"
                                                             { if(chunk == 1){ MPIScatterChunk(); }}
#line 10909 "ompparser.cc"
    break;

  case 2364: /* $@179: %empty  */
#line 3137 "ompparser.yy"
                   { }
#line 10915 "ompparser.cc"
    break;

  case 2365: /* halo_clause: HALO $@179 '(' var_chunk ')'  */
#line 3138 "ompparser.yy"
        { 
		if(update==1){
			MPIUpdateHalo(); 
			update = 0;
		}else{
			MPIScatterHalo(); 
		}
	}
#line 10928 "ompparser.cc"
    break;

  case 2366: /* $@180: %empty  */
#line 3147 "ompparser.yy"
                       { }
#line 10934 "ompparser.cc"
    break;

  case 2368: /* $@181: %empty  */
#line 3149 "ompparser.yy"
                             { }
#line 10940 "ompparser.cc"
    break;

  case 2370: /* $@182: %empty  */
#line 3151 "ompparser.yy"
                                   { }
#line 10946 "ompparser.cc"
    break;

  case 2372: /* $@183: %empty  */
#line 3153 "ompparser.yy"
                                   { }
#line 10952 "ompparser.cc"
    break;

  case 2373: /* firstprivate_clause: FIRSTPRIVATE $@183 '(' var_list ')'  */
#line 3153 "ompparser.yy"
                                                        { }
#line 10958 "ompparser.cc"
    break;

  case 2374: /* $@184: %empty  */
#line 3156 "ompparser.yy"
                                 { }
#line 10964 "ompparser.cc"
    break;

  case 2375: /* copyprivate_clause: COPYPRIVATE $@184 '(' var_list ')'  */
#line 3156 "ompparser.yy"
                                                      { }
#line 10970 "ompparser.cc"
    break;

  case 2376: /* $@185: %empty  */
#line 3158 "ompparser.yy"
                                         { }
#line 10976 "ompparser.cc"
    break;

  case 2377: /* fortran_copyprivate_clause: COPYPRIVATE $@185 '(' var_list ')'  */
#line 3158 "ompparser.yy"
                                                              { }
#line 10982 "ompparser.cc"
    break;

  case 2379: /* lastprivate_parameter: EXPR_STRING  */
#line 3162 "ompparser.yy"
                                    { }
#line 10988 "ompparser.cc"
    break;

  case 2380: /* $@186: %empty  */
#line 3163 "ompparser.yy"
                                        { }
#line 10994 "ompparser.cc"
    break;

  case 2382: /* $@187: %empty  */
#line 3164 "ompparser.yy"
                                                {;}
#line 11000 "ompparser.cc"
    break;

  case 2384: /* $@188: %empty  */
#line 3167 "ompparser.yy"
                                            { }
#line 11006 "ompparser.cc"
    break;

  case 2385: /* lastprivate_distribute_clause: LASTPRIVATE $@188 '(' var_list ')'  */
#line 3167 "ompparser.yy"
                                                                 { }
#line 11012 "ompparser.cc"
    break;

  case 2386: /* lastprivate_modifier: MODIFIER_CONDITIONAL  */
#line 3169 "ompparser.yy"
                                            { }
#line 11018 "ompparser.cc"
    break;

  case 2388: /* $@189: %empty  */
#line 3173 "ompparser.yy"
                                                            { }
#line 11024 "ompparser.cc"
    break;

  case 2390: /* linear_parameter: EXPR_STRING  */
#line 3176 "ompparser.yy"
                                { }
#line 11030 "ompparser.cc"
    break;

  case 2391: /* $@190: %empty  */
#line 3177 "ompparser.yy"
                                   {  }
#line 11036 "ompparser.cc"
    break;

  case 2394: /* linear_modifier: MODOFIER_VAL  */
#line 3180 "ompparser.yy"
                               { }
#line 11042 "ompparser.cc"
    break;

  case 2395: /* linear_modifier: MODOFIER_REF  */
#line 3181 "ompparser.yy"
                               { }
#line 11048 "ompparser.cc"
    break;

  case 2396: /* linear_modifier: MODOFIER_UVAL  */
#line 3182 "ompparser.yy"
                                { }
#line 11054 "ompparser.cc"
    break;

  case 2398: /* $@191: %empty  */
#line 3186 "ompparser.yy"
                                                               { }
#line 11060 "ompparser.cc"
    break;

  case 2400: /* aligned_parameter: EXPR_STRING  */
#line 3190 "ompparser.yy"
                                { }
#line 11066 "ompparser.cc"
    break;

  case 2401: /* $@192: %empty  */
#line 3191 "ompparser.yy"
                                    { }
#line 11072 "ompparser.cc"
    break;

  case 2405: /* expr: EXPR_STRING  */
#line 3198 "ompparser.yy"
                  { }
#line 11078 "ompparser.cc"
    break;

  case 2406: /* $@193: %empty  */
#line 3200 "ompparser.yy"
                        { }
#line 11084 "ompparser.cc"
    break;

  case 2407: /* safelen_clause: SAFELEN $@193 '(' var_list ')'  */
#line 3200 "ompparser.yy"
                                             { }
#line 11090 "ompparser.cc"
    break;

  case 2408: /* $@194: %empty  */
#line 3203 "ompparser.yy"
                        { }
#line 11096 "ompparser.cc"
    break;

  case 2409: /* simdlen_clause: SIMDLEN $@194 '(' var_list ')'  */
#line 3203 "ompparser.yy"
                                             { }
#line 11102 "ompparser.cc"
    break;

  case 2410: /* $@195: %empty  */
#line 3206 "ompparser.yy"
                                { }
#line 11108 "ompparser.cc"
    break;

  case 2411: /* nontemporal_clause: NONTEMPORAL $@195 '(' var_list ')'  */
#line 3206 "ompparser.yy"
                                                     { }
#line 11114 "ompparser.cc"
    break;

  case 2412: /* $@196: %empty  */
#line 3209 "ompparser.yy"
                          { }
#line 11120 "ompparser.cc"
    break;

  case 2413: /* collapse_clause: COLLAPSE $@196 '(' expression ')'  */
#line 3209 "ompparser.yy"
                                                 { }
#line 11126 "ompparser.cc"
    break;

  case 2414: /* $@197: %empty  */
#line 3212 "ompparser.yy"
                        { }
#line 11132 "ompparser.cc"
    break;

  case 2416: /* ordered_clause: ORDERED  */
#line 3213 "ompparser.yy"
                        { }
#line 11138 "ompparser.cc"
    break;

  case 2417: /* fortran_nowait_clause: NOWAIT  */
#line 3215 "ompparser.yy"
                              { }
#line 11144 "ompparser.cc"
    break;

  case 2418: /* nowait_clause: NOWAIT  */
#line 3217 "ompparser.yy"
                      { }
#line 11150 "ompparser.cc"
    break;

  case 2419: /* order_clause: ORDER '(' order_parameter ')'  */
#line 3219 "ompparser.yy"
                                            { }
#line 11156 "ompparser.cc"
    break;

  case 2420: /* order_parameter: CONCURRENT  */
#line 3222 "ompparser.yy"
                             { }
#line 11162 "ompparser.cc"
    break;

  case 2421: /* $@198: %empty  */
#line 3225 "ompparser.yy"
                        { }
#line 11168 "ompparser.cc"
    break;

  case 2423: /* inbranch_clause: INBRANCH  */
#line 3228 "ompparser.yy"
                          { }
#line 11174 "ompparser.cc"
    break;

  case 2424: /* notinbranch_clause: NOTINBRANCH  */
#line 3231 "ompparser.yy"
                                { }
#line 11180 "ompparser.cc"
    break;

  case 2425: /* $@199: %empty  */
#line 3233 "ompparser.yy"
                            { }
#line 11186 "ompparser.cc"
    break;

  case 2427: /* $@200: %empty  */
#line 3235 "ompparser.yy"
                            { }
#line 11192 "ompparser.cc"
    break;

  case 2430: /* allocator1_parameter: DEFAULT_MEM_ALLOC  */
#line 3238 "ompparser.yy"
                                         { }
#line 11198 "ompparser.cc"
    break;

  case 2431: /* allocator1_parameter: LARGE_CAP_MEM_ALLOC  */
#line 3239 "ompparser.yy"
                                           { }
#line 11204 "ompparser.cc"
    break;

  case 2432: /* allocator1_parameter: CONST_MEM_ALLOC  */
#line 3240 "ompparser.yy"
                                       { }
#line 11210 "ompparser.cc"
    break;

  case 2433: /* allocator1_parameter: HIGH_BW_MEM_ALLOC  */
#line 3241 "ompparser.yy"
                                         { }
#line 11216 "ompparser.cc"
    break;

  case 2434: /* allocator1_parameter: LOW_LAT_MEM_ALLOC  */
#line 3242 "ompparser.yy"
                                         { }
#line 11222 "ompparser.cc"
    break;

  case 2435: /* allocator1_parameter: CGROUP_MEM_ALLOC  */
#line 3243 "ompparser.yy"
                                        { }
#line 11228 "ompparser.cc"
    break;

  case 2436: /* allocator1_parameter: PTEAM_MEM_ALLOC  */
#line 3244 "ompparser.yy"
                                       { }
#line 11234 "ompparser.cc"
    break;

  case 2437: /* allocator1_parameter: THREAD_MEM_ALLOC  */
#line 3245 "ompparser.yy"
                                        { }
#line 11240 "ompparser.cc"
    break;

  case 2438: /* allocator1_parameter: EXPR_STRING  */
#line 3246 "ompparser.yy"
                                   { }
#line 11246 "ompparser.cc"
    break;

  case 2439: /* dist_schedule_clause: DIST_SCHEDULE '(' dist_schedule_parameter ')'  */
#line 3249 "ompparser.yy"
                                                                     {}
#line 11252 "ompparser.cc"
    break;

  case 2440: /* dist_schedule_parameter: STATIC  */
#line 3251 "ompparser.yy"
                                 { }
#line 11258 "ompparser.cc"
    break;

  case 2441: /* $@201: %empty  */
#line 3252 "ompparser.yy"
                                 { }
#line 11264 "ompparser.cc"
    break;

  case 2442: /* dist_schedule_parameter: STATIC $@201 ',' EXPR_STRING  */
#line 3252 "ompparser.yy"
                                                     { }
#line 11270 "ompparser.cc"
    break;

  case 2443: /* $@202: %empty  */
#line 3254 "ompparser.yy"
                           { }
#line 11276 "ompparser.cc"
    break;

  case 2444: /* schedule_clause: SCHEDULE $@202 '(' schedule_parameter ')'  */
#line 3254 "ompparser.yy"
                                                         {
                }
#line 11283 "ompparser.cc"
    break;

  case 2445: /* schedule_parameter: schedule_kind  */
#line 3258 "ompparser.yy"
                                   {}
#line 11289 "ompparser.cc"
    break;

  case 2447: /* schedule_kind: schedule_enum_kind  */
#line 3263 "ompparser.yy"
                                   { }
#line 11295 "ompparser.cc"
    break;

  case 2448: /* schedule_kind: schedule_enum_kind ',' EXPR_STRING  */
#line 3264 "ompparser.yy"
                                                    { }
#line 11301 "ompparser.cc"
    break;

  case 2451: /* schedule_modifier2: MODIFIER_MONOTONIC  */
#line 3271 "ompparser.yy"
                                        { }
#line 11307 "ompparser.cc"
    break;

  case 2452: /* schedule_modifier2: MODIFIER_NONMONOTONIC  */
#line 3272 "ompparser.yy"
                                           { }
#line 11313 "ompparser.cc"
    break;

  case 2453: /* schedule_modifier2: MODIFIER_SIMD  */
#line 3273 "ompparser.yy"
                                   { }
#line 11319 "ompparser.cc"
    break;

  case 2454: /* schedule_enum_modifier: MODIFIER_MONOTONIC  */
#line 3275 "ompparser.yy"
                                            { }
#line 11325 "ompparser.cc"
    break;

  case 2455: /* schedule_enum_modifier: MODIFIER_NONMONOTONIC  */
#line 3276 "ompparser.yy"
                                               { }
#line 11331 "ompparser.cc"
    break;

  case 2456: /* schedule_enum_modifier: MODIFIER_SIMD  */
#line 3277 "ompparser.yy"
                                       { }
#line 11337 "ompparser.cc"
    break;

  case 2457: /* schedule_enum_kind: STATIC  */
#line 3280 "ompparser.yy"
                            { }
#line 11343 "ompparser.cc"
    break;

  case 2458: /* schedule_enum_kind: DYNAMIC  */
#line 3281 "ompparser.yy"
                             { }
#line 11349 "ompparser.cc"
    break;

  case 2459: /* schedule_enum_kind: GUIDED  */
#line 3282 "ompparser.yy"
                            { }
#line 11355 "ompparser.cc"
    break;

  case 2460: /* schedule_enum_kind: AUTO  */
#line 3283 "ompparser.yy"
                          { }
#line 11361 "ompparser.cc"
    break;

  case 2461: /* schedule_enum_kind: RUNTIME  */
#line 3284 "ompparser.yy"
                             { }
#line 11367 "ompparser.cc"
    break;

  case 2462: /* $@203: %empty  */
#line 3286 "ompparser.yy"
                       { }
#line 11373 "ompparser.cc"
    break;

  case 2464: /* $@204: %empty  */
#line 3289 "ompparser.yy"
                             { }
#line 11379 "ompparser.cc"
    break;

  case 2465: /* reduction_clause: REDUCTION $@204 '(' reduction_parameter ':' var_list ')'  */
#line 3289 "ompparser.yy"
                                                                          {
                 }
#line 11386 "ompparser.cc"
    break;

  case 2466: /* $@205: %empty  */
#line 3293 "ompparser.yy"
                                     { }
#line 11392 "ompparser.cc"
    break;

  case 2468: /* $@206: %empty  */
#line 3296 "ompparser.yy"
                                           { }
#line 11398 "ompparser.cc"
    break;

  case 2474: /* allreduction_identifier_cluster: reduction_enum_identifier  */
#line 3306 "ompparser.yy"
                                                            { if(enAllReductionCluster || enAllReductionDistribute){MPI_AllReduce(false, (yyvsp[0].stype));}}
#line 11404 "ompparser.cc"
    break;

  case 2475: /* allreduction_identifier_cluster: EXPR_STRING  */
#line 3307 "ompparser.yy"
                                              { }
#line 11410 "ompparser.cc"
    break;

  case 2476: /* reduction_identifier_cluster: reduction_enum_identifier  */
#line 3310 "ompparser.yy"
                                                         { if(enReductionCluster || enReductionDistribute){MPI_Reduce(false, (yyvsp[0].stype));}}
#line 11416 "ompparser.cc"
    break;

  case 2477: /* reduction_identifier_cluster: EXPR_STRING  */
#line 3311 "ompparser.yy"
                                            { }
#line 11422 "ompparser.cc"
    break;

  case 2478: /* reduction_parameter: reduction_identifier  */
#line 3314 "ompparser.yy"
                                           {}
#line 11428 "ompparser.cc"
    break;

  case 2480: /* reduction_identifier: reduction_enum_identifier  */
#line 3318 "ompparser.yy"
                                                 {}
#line 11434 "ompparser.cc"
    break;

  case 2481: /* reduction_identifier: EXPR_STRING  */
#line 3319 "ompparser.yy"
                                   { }
#line 11440 "ompparser.cc"
    break;

  case 2482: /* reduction_modifier: MODIFIER_INSCAN  */
#line 3322 "ompparser.yy"
                                     { }
#line 11446 "ompparser.cc"
    break;

  case 2483: /* reduction_modifier: MODIFIER_TASK  */
#line 3323 "ompparser.yy"
                                   { }
#line 11452 "ompparser.cc"
    break;

  case 2484: /* reduction_modifier: MODIFIER_DEFAULT  */
#line 3324 "ompparser.yy"
                                      { }
#line 11458 "ompparser.cc"
    break;

  case 2485: /* reduction_enum_identifier: '+'  */
#line 3327 "ompparser.yy"
                               { (yyval.stype) = "+"; }
#line 11464 "ompparser.cc"
    break;

  case 2486: /* reduction_enum_identifier: '-'  */
#line 3328 "ompparser.yy"
                               { }
#line 11470 "ompparser.cc"
    break;

  case 2487: /* reduction_enum_identifier: '*'  */
#line 3329 "ompparser.yy"
                               { (yyval.stype) = "*"; }
#line 11476 "ompparser.cc"
    break;

  case 2488: /* reduction_enum_identifier: '&'  */
#line 3330 "ompparser.yy"
                               { (yyval.stype) = "&"; }
#line 11482 "ompparser.cc"
    break;

  case 2489: /* reduction_enum_identifier: '|'  */
#line 3331 "ompparser.yy"
                               { (yyval.stype) = "|"; }
#line 11488 "ompparser.cc"
    break;

  case 2490: /* reduction_enum_identifier: '^'  */
#line 3332 "ompparser.yy"
                               { (yyval.stype) = "^"; }
#line 11494 "ompparser.cc"
    break;

  case 2491: /* reduction_enum_identifier: LOGAND  */
#line 3333 "ompparser.yy"
                                  { }
#line 11500 "ompparser.cc"
    break;

  case 2492: /* reduction_enum_identifier: LOGOR  */
#line 3334 "ompparser.yy"
                                 { }
#line 11506 "ompparser.cc"
    break;

  case 2493: /* reduction_enum_identifier: MAX  */
#line 3335 "ompparser.yy"
                               { (yyval.stype) = "MAX"; }
#line 11512 "ompparser.cc"
    break;

  case 2494: /* reduction_enum_identifier: MIN  */
#line 3336 "ompparser.yy"
                               { (yyval.stype) = "MIN"; }
#line 11518 "ompparser.cc"
    break;

  case 2495: /* $@207: %empty  */
#line 3339 "ompparser.yy"
                                          { }
#line 11524 "ompparser.cc"
    break;

  case 2496: /* reduction_default_only_clause: REDUCTION $@207 '(' reduction_default_only_parameter ':' var_list ')'  */
#line 3339 "ompparser.yy"
                                                                                                    {
                              }
#line 11531 "ompparser.cc"
    break;

  case 2497: /* reduction_default_only_parameter: reduction_identifier  */
#line 3343 "ompparser.yy"
                                                        {}
#line 11537 "ompparser.cc"
    break;

  case 2499: /* reduction_default_only_modifier: MODIFIER_DEFAULT  */
#line 3347 "ompparser.yy"
                                                   { }
#line 11543 "ompparser.cc"
    break;


#line 11547 "ompparser.cc"

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

#line 3350 "ompparser.yy"


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
