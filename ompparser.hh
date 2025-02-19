/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_OPENMP_OMPPARSER_HH_INCLUDED
# define YY_OPENMP_OMPPARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef OPENMP_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define OPENMP_DEBUG 1
#  else
#   define OPENMP_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define OPENMP_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined OPENMP_DEBUG */
#if OPENMP_DEBUG
extern int openmp_debug;
#endif

/* Token kinds.  */
#ifndef OPENMP_TOKENTYPE
# define OPENMP_TOKENTYPE
  enum openmp_tokentype
  {
    OPENMP_EMPTY = -2,
    OPENMP_EOF = 0,                /* "end of file"  */
    OPENMP_error = 256,            /* error  */
    OPENMP_UNDEF = 257,            /* "invalid token"  */
    OMP = 258,                     /* OMP  */
    PARALLEL = 259,                /* PARALLEL  */
    FOR = 260,                     /* FOR  */
    DO = 261,                      /* DO  */
    DECLARE = 262,                 /* DECLARE  */
    DISTRIBUTE = 263,              /* DISTRIBUTE  */
    LOOP = 264,                    /* LOOP  */
    SCAN = 265,                    /* SCAN  */
    SECTIONS = 266,                /* SECTIONS  */
    SECTION = 267,                 /* SECTION  */
    SINGLE = 268,                  /* SINGLE  */
    CANCEL = 269,                  /* CANCEL  */
    TASKGROUP = 270,               /* TASKGROUP  */
    CANCELLATION = 271,            /* CANCELLATION  */
    POINT = 272,                   /* POINT  */
    THREAD = 273,                  /* THREAD  */
    VARIANT = 274,                 /* VARIANT  */
    THREADPRIVATE = 275,           /* THREADPRIVATE  */
    METADIRECTIVE = 276,           /* METADIRECTIVE  */
    MAPPER = 277,                  /* MAPPER  */
    IF = 278,                      /* IF  */
    NUM_THREADS = 279,             /* NUM_THREADS  */
    DEFAULT = 280,                 /* DEFAULT  */
    PRIVATE = 281,                 /* PRIVATE  */
    FIRSTPRIVATE = 282,            /* FIRSTPRIVATE  */
    SHARED = 283,                  /* SHARED  */
    COPYIN = 284,                  /* COPYIN  */
    REDUCTION = 285,               /* REDUCTION  */
    PROC_BIND = 286,               /* PROC_BIND  */
    ALLOCATE = 287,                /* ALLOCATE  */
    SIMD = 288,                    /* SIMD  */
    TASK = 289,                    /* TASK  */
    LASTPRIVATE = 290,             /* LASTPRIVATE  */
    WHEN = 291,                    /* WHEN  */
    MATCH = 292,                   /* MATCH  */
    LINEAR = 293,                  /* LINEAR  */
    SCHEDULE = 294,                /* SCHEDULE  */
    COLLAPSE = 295,                /* COLLAPSE  */
    NOWAIT = 296,                  /* NOWAIT  */
    ORDER = 297,                   /* ORDER  */
    ORDERED = 298,                 /* ORDERED  */
    MODIFIER_CONDITIONAL = 299,    /* MODIFIER_CONDITIONAL  */
    MODIFIER_MONOTONIC = 300,      /* MODIFIER_MONOTONIC  */
    MODIFIER_NONMONOTONIC = 301,   /* MODIFIER_NONMONOTONIC  */
    STATIC = 302,                  /* STATIC  */
    DYNAMIC = 303,                 /* DYNAMIC  */
    GUIDED = 304,                  /* GUIDED  */
    AUTO = 305,                    /* AUTO  */
    RUNTIME = 306,                 /* RUNTIME  */
    MODOFIER_VAL = 307,            /* MODOFIER_VAL  */
    MODOFIER_REF = 308,            /* MODOFIER_REF  */
    MODOFIER_UVAL = 309,           /* MODOFIER_UVAL  */
    MODIFIER_SIMD = 310,           /* MODIFIER_SIMD  */
    SAFELEN = 311,                 /* SAFELEN  */
    SIMDLEN = 312,                 /* SIMDLEN  */
    ALIGNED = 313,                 /* ALIGNED  */
    ALIGN = 314,                   /* ALIGN  */
    NONTEMPORAL = 315,             /* NONTEMPORAL  */
    UNIFORM = 316,                 /* UNIFORM  */
    INBRANCH = 317,                /* INBRANCH  */
    NOTINBRANCH = 318,             /* NOTINBRANCH  */
    DIST_SCHEDULE = 319,           /* DIST_SCHEDULE  */
    BIND = 320,                    /* BIND  */
    INCLUSIVE = 321,               /* INCLUSIVE  */
    EXCLUSIVE = 322,               /* EXCLUSIVE  */
    COPYPRIVATE = 323,             /* COPYPRIVATE  */
    ALLOCATOR = 324,               /* ALLOCATOR  */
    INITIALIZER = 325,             /* INITIALIZER  */
    OMP_PRIV = 326,                /* OMP_PRIV  */
    IDENTIFIER_DEFAULT = 327,      /* IDENTIFIER_DEFAULT  */
    WORKSHARE = 328,               /* WORKSHARE  */
    NONE = 329,                    /* NONE  */
    MASTER = 330,                  /* MASTER  */
    CLOSE = 331,                   /* CLOSE  */
    SPREAD = 332,                  /* SPREAD  */
    MODIFIER_INSCAN = 333,         /* MODIFIER_INSCAN  */
    MODIFIER_TASK = 334,           /* MODIFIER_TASK  */
    MODIFIER_DEFAULT = 335,        /* MODIFIER_DEFAULT  */
    PLUS = 336,                    /* PLUS  */
    MINUS = 337,                   /* MINUS  */
    STAR = 338,                    /* STAR  */
    BITAND = 339,                  /* BITAND  */
    BITOR = 340,                   /* BITOR  */
    BITXOR = 341,                  /* BITXOR  */
    LOGAND = 342,                  /* LOGAND  */
    LOGOR = 343,                   /* LOGOR  */
    EQV = 344,                     /* EQV  */
    NEQV = 345,                    /* NEQV  */
    MAX = 346,                     /* MAX  */
    MIN = 347,                     /* MIN  */
    DEFAULT_MEM_ALLOC = 348,       /* DEFAULT_MEM_ALLOC  */
    LARGE_CAP_MEM_ALLOC = 349,     /* LARGE_CAP_MEM_ALLOC  */
    CONST_MEM_ALLOC = 350,         /* CONST_MEM_ALLOC  */
    HIGH_BW_MEM_ALLOC = 351,       /* HIGH_BW_MEM_ALLOC  */
    LOW_LAT_MEM_ALLOC = 352,       /* LOW_LAT_MEM_ALLOC  */
    CGROUP_MEM_ALLOC = 353,        /* CGROUP_MEM_ALLOC  */
    PTEAM_MEM_ALLOC = 354,         /* PTEAM_MEM_ALLOC  */
    THREAD_MEM_ALLOC = 355,        /* THREAD_MEM_ALLOC  */
    TEAMS = 356,                   /* TEAMS  */
    NUM_TEAMS = 357,               /* NUM_TEAMS  */
    THREAD_LIMIT = 358,            /* THREAD_LIMIT  */
    END = 359,                     /* END  */
    USER = 360,                    /* USER  */
    CONSTRUCT = 361,               /* CONSTRUCT  */
    DEVICE = 362,                  /* DEVICE  */
    IMPLEMENTATION = 363,          /* IMPLEMENTATION  */
    CONDITION = 364,               /* CONDITION  */
    SCORE = 365,                   /* SCORE  */
    VENDOR = 366,                  /* VENDOR  */
    KIND = 367,                    /* KIND  */
    HOST = 368,                    /* HOST  */
    NOHOST = 369,                  /* NOHOST  */
    ANY = 370,                     /* ANY  */
    CPU = 371,                     /* CPU  */
    GPU = 372,                     /* GPU  */
    FPGA = 373,                    /* FPGA  */
    ISA = 374,                     /* ISA  */
    ARCH = 375,                    /* ARCH  */
    EXTENSION = 376,               /* EXTENSION  */
    AMD = 377,                     /* AMD  */
    ARM = 378,                     /* ARM  */
    BSC = 379,                     /* BSC  */
    CRAY = 380,                    /* CRAY  */
    FUJITSU = 381,                 /* FUJITSU  */
    GNU = 382,                     /* GNU  */
    IBM = 383,                     /* IBM  */
    INTEL = 384,                   /* INTEL  */
    LLVM = 385,                    /* LLVM  */
    PGI = 386,                     /* PGI  */
    TI = 387,                      /* TI  */
    UNKNOWN = 388,                 /* UNKNOWN  */
    FINAL = 389,                   /* FINAL  */
    UNTIED = 390,                  /* UNTIED  */
    MERGEABLE = 391,               /* MERGEABLE  */
    IN_REDUCTION = 392,            /* IN_REDUCTION  */
    DEPEND = 393,                  /* DEPEND  */
    PRIORITY = 394,                /* PRIORITY  */
    AFFINITY = 395,                /* AFFINITY  */
    DETACH = 396,                  /* DETACH  */
    MODIFIER_ITERATOR = 397,       /* MODIFIER_ITERATOR  */
    DEPOBJ = 398,                  /* DEPOBJ  */
    FINAL_CLAUSE = 399,            /* FINAL_CLAUSE  */
    IN = 400,                      /* IN  */
    INOUT = 401,                   /* INOUT  */
    MUTEXINOUTSET = 402,           /* MUTEXINOUTSET  */
    OUT = 403,                     /* OUT  */
    TASKLOOP = 404,                /* TASKLOOP  */
    GRAINSIZE = 405,               /* GRAINSIZE  */
    NUM_TASKS = 406,               /* NUM_TASKS  */
    NOGROUP = 407,                 /* NOGROUP  */
    TASKYIELD = 408,               /* TASKYIELD  */
    REQUIRES = 409,                /* REQUIRES  */
    REVERSE_OFFLOAD = 410,         /* REVERSE_OFFLOAD  */
    UNIFIED_ADDRESS = 411,         /* UNIFIED_ADDRESS  */
    UNIFIED_SHARED_MEMORY = 412,   /* UNIFIED_SHARED_MEMORY  */
    ATOMIC_DEFAULT_MEM_ORDER = 413, /* ATOMIC_DEFAULT_MEM_ORDER  */
    DYNAMIC_ALLOCATORS = 414,      /* DYNAMIC_ALLOCATORS  */
    SEQ_CST = 415,                 /* SEQ_CST  */
    ACQ_REL = 416,                 /* ACQ_REL  */
    RELAXED = 417,                 /* RELAXED  */
    USE_DEVICE_PTR = 418,          /* USE_DEVICE_PTR  */
    USE_DEVICE_ADDR = 419,         /* USE_DEVICE_ADDR  */
    TARGET = 420,                  /* TARGET  */
    DATA = 421,                    /* DATA  */
    ENTER = 422,                   /* ENTER  */
    EXIT = 423,                    /* EXIT  */
    ANCESTOR = 424,                /* ANCESTOR  */
    DEVICE_NUM = 425,              /* DEVICE_NUM  */
    IS_DEVICE_PTR = 426,           /* IS_DEVICE_PTR  */
    HAS_DEVICE_ADDR = 427,         /* HAS_DEVICE_ADDR  */
    DEFAULTMAP = 428,              /* DEFAULTMAP  */
    BEHAVIOR_ALLOC = 429,          /* BEHAVIOR_ALLOC  */
    BEHAVIOR_TO = 430,             /* BEHAVIOR_TO  */
    BEHAVIOR_FROM = 431,           /* BEHAVIOR_FROM  */
    BEHAVIOR_TOFROM = 432,         /* BEHAVIOR_TOFROM  */
    BEHAVIOR_FIRSTPRIVATE = 433,   /* BEHAVIOR_FIRSTPRIVATE  */
    BEHAVIOR_NONE = 434,           /* BEHAVIOR_NONE  */
    BEHAVIOR_DEFAULT = 435,        /* BEHAVIOR_DEFAULT  */
    CATEGORY_SCALAR = 436,         /* CATEGORY_SCALAR  */
    CATEGORY_AGGREGATE = 437,      /* CATEGORY_AGGREGATE  */
    CATEGORY_POINTER = 438,        /* CATEGORY_POINTER  */
    CATEGORY_ALLOCATABLE = 439,    /* CATEGORY_ALLOCATABLE  */
    UPDATE = 440,                  /* UPDATE  */
    TO = 441,                      /* TO  */
    FROM = 442,                    /* FROM  */
    TO_MAPPER = 443,               /* TO_MAPPER  */
    FROM_MAPPER = 444,             /* FROM_MAPPER  */
    USES_ALLOCATORS = 445,         /* USES_ALLOCATORS  */
    LINK = 446,                    /* LINK  */
    DEVICE_TYPE = 447,             /* DEVICE_TYPE  */
    MAP = 448,                     /* MAP  */
    MAP_MODIFIER_ALWAYS = 449,     /* MAP_MODIFIER_ALWAYS  */
    MAP_MODIFIER_CLOSE = 450,      /* MAP_MODIFIER_CLOSE  */
    MAP_MODIFIER_MAPPER = 451,     /* MAP_MODIFIER_MAPPER  */
    MAP_TYPE_TO = 452,             /* MAP_TYPE_TO  */
    MAP_TYPE_FROM = 453,           /* MAP_TYPE_FROM  */
    MAP_TYPE_TOFROM = 454,         /* MAP_TYPE_TOFROM  */
    MAP_TYPE_ALLOC = 455,          /* MAP_TYPE_ALLOC  */
    MAP_TYPE_RELEASE = 456,        /* MAP_TYPE_RELEASE  */
    MAP_TYPE_DELETE = 457,         /* MAP_TYPE_DELETE  */
    EXT_ = 458,                    /* EXT_  */
    BARRIER = 459,                 /* BARRIER  */
    TASKWAIT = 460,                /* TASKWAIT  */
    FLUSH = 461,                   /* FLUSH  */
    RELEASE = 462,                 /* RELEASE  */
    ACQUIRE = 463,                 /* ACQUIRE  */
    ATOMIC = 464,                  /* ATOMIC  */
    READ = 465,                    /* READ  */
    WRITE = 466,                   /* WRITE  */
    CAPTURE = 467,                 /* CAPTURE  */
    HINT = 468,                    /* HINT  */
    CRITICAL = 469,                /* CRITICAL  */
    SOURCE = 470,                  /* SOURCE  */
    SINK = 471,                    /* SINK  */
    DESTROY = 472,                 /* DESTROY  */
    THREADS = 473,                 /* THREADS  */
    CONCURRENT = 474,              /* CONCURRENT  */
    CLUSTER = 475,                 /* CLUSTER  */
    ALLOC = 476,                   /* ALLOC  */
    BROAD = 477,                   /* BROAD  */
    SCATTER = 478,                 /* SCATTER  */
    GATHER = 479,                  /* GATHER  */
    ALLGATHER = 480,               /* ALLGATHER  */
    ALLREDUCTION = 481,            /* ALLREDUCTION  */
    CHUNK = 482,                   /* CHUNK  */
    HALO = 483,                    /* HALO  */
    TASK_ASYNC = 484,              /* TASK_ASYNC  */
    ICONSTANT = 485,               /* ICONSTANT  */
    EXPRESSION = 486,              /* EXPRESSION  */
    ID_EXPRESSION = 487,           /* ID_EXPRESSION  */
    EXPR_STRING = 488,             /* EXPR_STRING  */
    VAR_STRING = 489,              /* VAR_STRING  */
    TASK_REDUCTION = 490           /* TASK_REDUCTION  */
  };
  typedef enum openmp_tokentype openmp_token_kind_t;
#endif

/* Value type.  */
#if ! defined OPENMP_STYPE && ! defined OPENMP_STYPE_IS_DECLARED
union OPENMP_STYPE
{
#line 93 "ompparser.yy"
  int itype;
          double ftype;
          const char* stype;
          void* ptype; /* For expressions or variables */
        

#line 314 "ompparser.hh"

};
typedef union OPENMP_STYPE OPENMP_STYPE;
# define OPENMP_STYPE_IS_TRIVIAL 1
# define OPENMP_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined OPENMP_LTYPE && ! defined OPENMP_LTYPE_IS_DECLARED
typedef struct OPENMP_LTYPE OPENMP_LTYPE;
struct OPENMP_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define OPENMP_LTYPE_IS_DECLARED 1
# define OPENMP_LTYPE_IS_TRIVIAL 1
#endif


extern OPENMP_STYPE openmp_lval;
extern OPENMP_LTYPE openmp_lloc;

int openmp_parse (void);


#endif /* !YY_OPENMP_OMPPARSER_HH_INCLUDED  */
