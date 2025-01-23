D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			([Ee][+-]?{D}+)
P                       ([Pp][+-]?{D}+)
FS			(f|F|l|L)
IS                      ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))

%{
#include<bits/stdc++.h>
#include "SymbolTable.h"
#include <stdio.h>
#include <cstring>
#include <fstream>
#include "y.tab.hh"
#include "MPIwriter.h"

extern void parseOpenMP(const char* _input, void * _exprParse(const char*));
extern void yyerror(const char *);
extern ofstream generado;
static void count(void);
static void comment(void);
static char * get_pragma();

extern ofstream logFile;
extern ofstream errFile;
extern int stateGlobal, stateFuncion;
extern SymbolTable table;
extern MPI_Writer mpi_writer;

int column = 0;
int line_count = 1;

using namespace std;

extern YYSTYPE yylval;


%}

%option nounput

%%
"#"           {
                char * texto = get_pragma();
                char * pragma = strstr(texto, "pragma");
				char * include = strstr(texto, "include");

                if (pragma != NULL) {

					if(stateGlobal > 1) {stateFuncion = 2; } //estado de escribir pragma
                    parseOpenMP(pragma+7, NULL);
					mpi_writer.analyze_Pragma(texto);
                }
				else{
					std::ostringstream buffer;
					buffer << "#" << texto << endl;
					if ( stateGlobal > 1 && stateFuncion == 2){
						stateFuncion = 3;
					}
					if(include != NULL){
						mpi_writer.write_MPI_File(buffer.str(), 0, 0);
					}
					else{
						mpi_writer.write_MPI_File(buffer.str(), stateGlobal, stateFuncion);
					}
					line_count++;
					column = 0;
				}
              }
"/*"			{ comment(); }
"//"[^\n]*              { /* consume //-comment */ }


"auto"			{ count(); return(AUTO); }
"_Bool"			{ count(); return(BOOL); }
"break"			{ count(); return(BREAK); }
"case"			{ count(); return(CASE); }
"char"			{ count(); return(CHAR); }
"_Complex"		{ count(); return(COMPLEX); }
"const"			{ count(); return(CONST); }
"continue"		{ count(); return(CONTINUE); }
"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"enum"			{ count(); return(ENUM); }
"extern"		{ count(); return(EXTERN); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"goto"			{ count(); return(GOTO); }
"if"			{ count(); return(IF); }
"_Imaginary"	{ count(); return(IMAGINARY); }
"inline"		{ count(); return(INLINE); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"register"		{ count(); return(REGISTER); }
"restrict"		{ count(); return(RESTRICT); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"signed"		{ count(); return(SIGNED); }
"sizeof"		{ count(); return(SIZEOF); }
"static"		{ count(); return(STATIC); }
"struct"		{ count(); return(STRUCT); }
"switch"		{ count(); return(SWITCH); }
"typedef"		{ count(); return(TYPEDEF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{
	count();
	SymbolInfo *s = new SymbolInfo(yytext, (char *)"IDENTIFIER");
	yylval.sym = s;

	return IDENTIFIER;
}

0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0[0-7]*{IS}?		{ count(); return(CONSTANT); }
[1-9]{D}*{IS}?		{ 
	count();
	SymbolInfo *s = new SymbolInfo(yytext, (char *)"CONSTANT");
	yylval.sym = s;
	return(CONSTANT); 
}
L?'(\\.|[^\\'\n])+'	{ count(); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+{E}?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*{E}?{FS}?	{ count(); return(CONSTANT); }
0[xX]{H}+{P}{FS}?	{ count(); return(CONSTANT); }
0[xX]{H}*"."{H}+{P}{FS}?     { count(); return(CONSTANT); }
0[xX]{H}+"."{H}*{P}{FS}?     { count(); return(CONSTANT); }


L?\"(\\.|[^\\"\n])*\"	{ count(); return(STRING_LITERAL); }

"..."			{ count(); return(ELLIPSIS); }
">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(RIGHT_OP); }
"<<"			{ count(); return(LEFT_OP); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"->"			{ count(); return(PTR_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* Add code to complain about unmatched characters */ }

%%

int yywrap(void)
{
	table.exitScope();
	mpi_writer.mpi_write_linea(stateFuncion, stateGlobal);
    mpi_writer.generarMPI();
	return 1;
}


char * get_pragma(void)
{
        char c;
        char * line = (char *) malloc(256);
        int i=0;

        ECHO;

        while ((c = yyinput()) != 0 && (c != '\n' && c != '\r'))   /* (EOF maps to 0) */
        {
                if (yyout != NULL)
                        fputc(c, yyout);
                line[i++] = c;
        }
        if (yyout != NULL)
                fputc(c, yyout);
        line[i] = 0;
        return(line);
}

void comment(void)
{
	char c, prev = 0;

        ECHO;
  
	while ((c = yyinput()) != 0)      /* (EOF maps to 0) */
	{
		if (yyout != NULL)
			fputc(c, yyout);
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	yyerror("unterminated comment");
}

void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n'){
			line_count++;
			column = 0;
		}
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
	mpi_writer.mpi_write_caracter(yytext,stateGlobal,stateFuncion);


	ECHO;
}
