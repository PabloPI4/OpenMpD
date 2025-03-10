%{
    extern int openmp_lex();
%}

%union  { std::string stype; }

%token  OMP PARALLEL FOR DO DISTRIBUTE
        PRIVATE FIRSTPRIVATE REDUCTION ALLOCATE SIMD LASTPRIVATE
        SCHEDULE STATIC DYNAMIC GUIDED AUTO RUNTIME MODIFIER_SIMD
        DIST_SCHEDULE
        MAX MIN
        TEAMS
        NUM_TEAMS THREAD_LIMIT
        ALLREDUCTION

%left '<' '>' '=' "!=" "<=" ">="
%left '+' '-'
%left '*' '/' '%'

%type <stype> variable
%type <stype> reduction_enum_identifier

%start dist_directive

%%

dist_directive :  DISTRIBUTE {enDistribute = 1;} distribute_directive {dist_n_llaves = 0;}
                | TEAMS DISTRIBUTE {enDistribute = 1;} teams_distribute_directive {dist_n_llaves = 0;}
                ;

distribute_directive :  cluster_distribute_clause_optseq
                      | SIMD cluster_distribute_simd_clause_optseq
                      | PARALLEL FOR cluster_distribute_parallel_for_clause_optseq
                      | PARALLEL DO cluster_distribute_parallel_do_clause_optseq
                      | PARALLEL FOR SIMD cluster_distribute_parallel_for_simd_clause_optseq
                      | PARALLEL DO SIMD cluster_distribute_parallel_do_simd_clause_optseq
                      ;

cluster_distribute_clause_optseq :  dist_schedule_clause_cluster
                                  | {enReductionDistribute = 1;} reduction_clause_cluster
                                  | {enAllReductionDistribute = 1;} allreduction_clause_cluster

teams_distribute_clause :  cluster_teams_distribute_clause_optseq
                         | SIMD cluster_teams_distribute_simd_clause_optseq
                         | PARALLEL FOR cluster_teams_distribute_parallel_for_clause_optseq
                         | PARALLEL FOR SIMD cluster_teams_distribute_parallel_for_simd_clause_optseq
                         ;
                
%%



int yyerror(const char *s) {
    // printf(" %s!\n", s);
    fprintf(stdout,"error: %s\n",s);
    return 0;
}
 
int yywrap()
{
    return 1;
} 

// Standalone distributeparser
void parseDistribute(const char* _input, void * _exprParse(const char*)) {
    const char *input = _input;
    start_lexer(input);
    yyparse();
    end_lexer();
}