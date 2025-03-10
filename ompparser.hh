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
    FOR = 259,                     /* FOR  */
    DO = 260,                      /* DO  */
    DECLARE = 261,                 /* DECLARE  */
    DISTRIBUTE = 262,              /* DISTRIBUTE  */
    LOOP = 263,                    /* LOOP  */
    SCAN = 264,                    /* SCAN  */
    SECTIONS = 265,                /* SECTIONS  */
    SECTION = 266,                 /* SECTION  */
    SINGLE = 267,                  /* SINGLE  */
    CANCEL = 268,                  /* CANCEL  */
    TASKGROUP = 269,               /* TASKGROUP  */
    CANCELLATION = 270,            /* CANCELLATION  */
    POINT = 271,                   /* POINT  */
    THREAD = 272,                  /* THREAD  */
    VARIANT = 273,                 /* VARIANT  */
    THREADPRIVATE = 274,           /* THREADPRIVATE  */
    METADIRECTIVE = 275,           /* METADIRECTIVE  */
    MAPPER = 276,                  /* MAPPER  */
    IF = 277,                      /* IF  */
    NUM_THREADS = 278,             /* NUM_THREADS  */
    DEFAULT = 279,                 /* DEFAULT  */
    COPYIN = 280,                  /* COPYIN  */
    REDUCTION = 281,               /* REDUCTION  */
    PROC_BIND = 282,               /* PROC_BIND  */
    ALLOCATE = 283,                /* ALLOCATE  */
    SIMD = 284,                    /* SIMD  */
    TASK = 285,                    /* TASK  */
    LASTPRIVATE = 286,             /* LASTPRIVATE  */
    WHEN = 287,                    /* WHEN  */
    MATCH = 288,                   /* MATCH  */
    LINEAR = 289,                  /* LINEAR  */
    SCHEDULE = 290,                /* SCHEDULE  */
    COLLAPSE = 291,                /* COLLAPSE  */
    NOWAIT = 292,                  /* NOWAIT  */
    ORDER = 293,                   /* ORDER  */
    ORDERED = 294,                 /* ORDERED  */
    STATIC = 295,                  /* STATIC  */
    DYNAMIC = 296,                 /* DYNAMIC  */
    GUIDED = 297,                  /* GUIDED  */
    AUTO = 298,                    /* AUTO  */
    RUNTIME = 299,                 /* RUNTIME  */
    SAFELEN = 300,                 /* SAFELEN  */
    SIMDLEN = 301,                 /* SIMDLEN  */
    ALIGNED = 302,                 /* ALIGNED  */
    ALIGN = 303,                   /* ALIGN  */
    NONTEMPORAL = 304,             /* NONTEMPORAL  */
    UNIFORM = 305,                 /* UNIFORM  */
    INBRANCH = 306,                /* INBRANCH  */
    NOTINBRANCH = 307,             /* NOTINBRANCH  */
    DIST_SCHEDULE = 308,           /* DIST_SCHEDULE  */
    BIND = 309,                    /* BIND  */
    INCLUSIVE = 310,               /* INCLUSIVE  */
    EXCLUSIVE = 311,               /* EXCLUSIVE  */
    COPYPRIVATE = 312,             /* COPYPRIVATE  */
    ALLOCATOR = 313,               /* ALLOCATOR  */
    INITIALIZER = 314,             /* INITIALIZER  */
    OMP_PRIV = 315,                /* OMP_PRIV  */
    IDENTIFIER_DEFAULT = 316,      /* IDENTIFIER_DEFAULT  */
    WORKSHARE = 317,               /* WORKSHARE  */
    PLUS = 318,                    /* PLUS  */
    MINUS = 319,                   /* MINUS  */
    STAR = 320,                    /* STAR  */
    BITAND = 321,                  /* BITAND  */
    BITOR = 322,                   /* BITOR  */
    BITXOR = 323,                  /* BITXOR  */
    LOGAND = 324,                  /* LOGAND  */
    LOGOR = 325,                   /* LOGOR  */
    EQV = 326,                     /* EQV  */
    NEQV = 327,                    /* NEQV  */
    MAX = 328,                     /* MAX  */
    MIN = 329,                     /* MIN  */
    DEFAULT_MEM_ALLOC = 330,       /* DEFAULT_MEM_ALLOC  */
    LARGE_CAP_MEM_ALLOC = 331,     /* LARGE_CAP_MEM_ALLOC  */
    CONST_MEM_ALLOC = 332,         /* CONST_MEM_ALLOC  */
    HIGH_BW_MEM_ALLOC = 333,       /* HIGH_BW_MEM_ALLOC  */
    LOW_LAT_MEM_ALLOC = 334,       /* LOW_LAT_MEM_ALLOC  */
    CGROUP_MEM_ALLOC = 335,        /* CGROUP_MEM_ALLOC  */
    PTEAM_MEM_ALLOC = 336,         /* PTEAM_MEM_ALLOC  */
    THREAD_MEM_ALLOC = 337,        /* THREAD_MEM_ALLOC  */
    TEAMS = 338,                   /* TEAMS  */
    NUM_TEAMS = 339,               /* NUM_TEAMS  */
    THREAD_LIMIT = 340,            /* THREAD_LIMIT  */
    END = 341,                     /* END  */
    USER = 342,                    /* USER  */
    CONSTRUCT = 343,               /* CONSTRUCT  */
    DEVICE = 344,                  /* DEVICE  */
    IMPLEMENTATION = 345,          /* IMPLEMENTATION  */
    CONDITION = 346,               /* CONDITION  */
    SCORE = 347,                   /* SCORE  */
    VENDOR = 348,                  /* VENDOR  */
    KIND = 349,                    /* KIND  */
    HOST = 350,                    /* HOST  */
    NOHOST = 351,                  /* NOHOST  */
    ANY = 352,                     /* ANY  */
    CPU = 353,                     /* CPU  */
    GPU = 354,                     /* GPU  */
    FPGA = 355,                    /* FPGA  */
    ISA = 356,                     /* ISA  */
    ARCH = 357,                    /* ARCH  */
    EXTENSION = 358,               /* EXTENSION  */
    AMD = 359,                     /* AMD  */
    ARM = 360,                     /* ARM  */
    BSC = 361,                     /* BSC  */
    CRAY = 362,                    /* CRAY  */
    FUJITSU = 363,                 /* FUJITSU  */
    GNU = 364,                     /* GNU  */
    IBM = 365,                     /* IBM  */
    INTEL = 366,                   /* INTEL  */
    LLVM = 367,                    /* LLVM  */
    PGI = 368,                     /* PGI  */
    TI = 369,                      /* TI  */
    UNKNOWN = 370,                 /* UNKNOWN  */
    FINAL = 371,                   /* FINAL  */
    UNTIED = 372,                  /* UNTIED  */
    MERGEABLE = 373,               /* MERGEABLE  */
    IN_REDUCTION = 374,            /* IN_REDUCTION  */
    DEPEND = 375,                  /* DEPEND  */
    PRIORITY = 376,                /* PRIORITY  */
    AFFINITY = 377,                /* AFFINITY  */
    DETACH = 378,                  /* DETACH  */
    MODIFIER_ITERATOR = 379,       /* MODIFIER_ITERATOR  */
    DEPOBJ = 380,                  /* DEPOBJ  */
    FINAL_CLAUSE = 381,            /* FINAL_CLAUSE  */
    IN = 382,                      /* IN  */
    INOUT = 383,                   /* INOUT  */
    MUTEXINOUTSET = 384,           /* MUTEXINOUTSET  */
    OUT = 385,                     /* OUT  */
    TASKLOOP = 386,                /* TASKLOOP  */
    GRAINSIZE = 387,               /* GRAINSIZE  */
    NUM_TASKS = 388,               /* NUM_TASKS  */
    NOGROUP = 389,                 /* NOGROUP  */
    TASKYIELD = 390,               /* TASKYIELD  */
    REQUIRES = 391,                /* REQUIRES  */
    REVERSE_OFFLOAD = 392,         /* REVERSE_OFFLOAD  */
    UNIFIED_ADDRESS = 393,         /* UNIFIED_ADDRESS  */
    UNIFIED_SHARED_MEMORY = 394,   /* UNIFIED_SHARED_MEMORY  */
    ATOMIC_DEFAULT_MEM_ORDER = 395, /* ATOMIC_DEFAULT_MEM_ORDER  */
    DYNAMIC_ALLOCATORS = 396,      /* DYNAMIC_ALLOCATORS  */
    SEQ_CST = 397,                 /* SEQ_CST  */
    ACQ_REL = 398,                 /* ACQ_REL  */
    RELAXED = 399,                 /* RELAXED  */
    USE_DEVICE_PTR = 400,          /* USE_DEVICE_PTR  */
    USE_DEVICE_ADDR = 401,         /* USE_DEVICE_ADDR  */
    TARGET = 402,                  /* TARGET  */
    DATA = 403,                    /* DATA  */
    ENTER = 404,                   /* ENTER  */
    EXIT = 405,                    /* EXIT  */
    ANCESTOR = 406,                /* ANCESTOR  */
    DEVICE_NUM = 407,              /* DEVICE_NUM  */
    IS_DEVICE_PTR = 408,           /* IS_DEVICE_PTR  */
    HAS_DEVICE_ADDR = 409,         /* HAS_DEVICE_ADDR  */
    DEFAULTMAP = 410,              /* DEFAULTMAP  */
    BEHAVIOR_ALLOC = 411,          /* BEHAVIOR_ALLOC  */
    BEHAVIOR_TO = 412,             /* BEHAVIOR_TO  */
    BEHAVIOR_FROM = 413,           /* BEHAVIOR_FROM  */
    BEHAVIOR_TOFROM = 414,         /* BEHAVIOR_TOFROM  */
    BEHAVIOR_FIRSTPRIVATE = 415,   /* BEHAVIOR_FIRSTPRIVATE  */
    BEHAVIOR_NONE = 416,           /* BEHAVIOR_NONE  */
    BEHAVIOR_DEFAULT = 417,        /* BEHAVIOR_DEFAULT  */
    CATEGORY_SCALAR = 418,         /* CATEGORY_SCALAR  */
    CATEGORY_AGGREGATE = 419,      /* CATEGORY_AGGREGATE  */
    CATEGORY_POINTER = 420,        /* CATEGORY_POINTER  */
    CATEGORY_ALLOCATABLE = 421,    /* CATEGORY_ALLOCATABLE  */
    UPDATE = 422,                  /* UPDATE  */
    TO = 423,                      /* TO  */
    FROM = 424,                    /* FROM  */
    TO_MAPPER = 425,               /* TO_MAPPER  */
    FROM_MAPPER = 426,             /* FROM_MAPPER  */
    USES_ALLOCATORS = 427,         /* USES_ALLOCATORS  */
    LINK = 428,                    /* LINK  */
    DEVICE_TYPE = 429,             /* DEVICE_TYPE  */
    MAP = 430,                     /* MAP  */
    MAP_MODIFIER_ALWAYS = 431,     /* MAP_MODIFIER_ALWAYS  */
    MAP_MODIFIER_CLOSE = 432,      /* MAP_MODIFIER_CLOSE  */
    MAP_MODIFIER_MAPPER = 433,     /* MAP_MODIFIER_MAPPER  */
    MAP_TYPE_TO = 434,             /* MAP_TYPE_TO  */
    MAP_TYPE_FROM = 435,           /* MAP_TYPE_FROM  */
    MAP_TYPE_TOFROM = 436,         /* MAP_TYPE_TOFROM  */
    MAP_TYPE_ALLOC = 437,          /* MAP_TYPE_ALLOC  */
    MAP_TYPE_RELEASE = 438,        /* MAP_TYPE_RELEASE  */
    MAP_TYPE_DELETE = 439,         /* MAP_TYPE_DELETE  */
    EXT_ = 440,                    /* EXT_  */
    BARRIER = 441,                 /* BARRIER  */
    TASKWAIT = 442,                /* TASKWAIT  */
    FLUSH = 443,                   /* FLUSH  */
    RELEASE = 444,                 /* RELEASE  */
    ACQUIRE = 445,                 /* ACQUIRE  */
    ATOMIC = 446,                  /* ATOMIC  */
    READ = 447,                    /* READ  */
    WRITE = 448,                   /* WRITE  */
    CAPTURE = 449,                 /* CAPTURE  */
    HINT = 450,                    /* HINT  */
    CRITICAL = 451,                /* CRITICAL  */
    SOURCE = 452,                  /* SOURCE  */
    SINK = 453,                    /* SINK  */
    DESTROY = 454,                 /* DESTROY  */
    THREADS = 455,                 /* THREADS  */
    CLUSTER = 456,                 /* CLUSTER  */
    ALLOC = 457,                   /* ALLOC  */
    BROAD = 458,                   /* BROAD  */
    SCATTER = 459,                 /* SCATTER  */
    GATHER = 460,                  /* GATHER  */
    ALLGATHER = 461,               /* ALLGATHER  */
    ALLREDUCTION = 462,            /* ALLREDUCTION  */
    CHUNK = 463,                   /* CHUNK  */
    HALO = 464,                    /* HALO  */
    TASK_ASYNC = 465,              /* TASK_ASYNC  */
    ICONSTANT = 466,               /* ICONSTANT  */
    EXPRESSION = 467,              /* EXPRESSION  */
    ID_EXPRESSION = 468,           /* ID_EXPRESSION  */
    EXPR_STRING = 469,             /* EXPR_STRING  */
    VAR_STRING = 470,              /* VAR_STRING  */
    TASK_REDUCTION = 471,          /* TASK_REDUCTION  */
    MODIFIER_CONDITIONAL = 472,    /* MODIFIER_CONDITIONAL  */
    MODOFIER_VAL = 473,            /* MODOFIER_VAL  */
    MODOFIER_REF = 474,            /* MODOFIER_REF  */
    MODOFIER_UVAL = 475,           /* MODOFIER_UVAL  */
    MODIFIER_INSCAN = 476,         /* MODIFIER_INSCAN  */
    MODIFIER_TASK = 477,           /* MODIFIER_TASK  */
    MODIFIER_DEFAULT = 478,        /* MODIFIER_DEFAULT  */
    CONCURRENT = 479,              /* CONCURRENT  */
    PARALLEL = 480,                /* PARALLEL  */
    SHARED = 481,                  /* SHARED  */
    NONE = 482,                    /* NONE  */
    PRIVATE = 483,                 /* PRIVATE  */
    FIRSTPRIVATE = 484,            /* FIRSTPRIVATE  */
    MASTER = 485,                  /* MASTER  */
    CLOSE = 486,                   /* CLOSE  */
    SPREAD = 487,                  /* SPREAD  */
    MODIFIER_MONOTONIC = 488,      /* MODIFIER_MONOTONIC  */
    MODIFIER_NONMONOTONIC = 489,   /* MODIFIER_NONMONOTONIC  */
    MODIFIER_SIMD = 490            /* MODIFIER_SIMD  */
  };
  typedef enum openmp_tokentype openmp_token_kind_t;
#endif

/* Value type.  */
#if ! defined OPENMP_STYPE && ! defined OPENMP_STYPE_IS_DECLARED
union OPENMP_STYPE
{
#line 102 "ompparser.yy"
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
