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
#include "writer.h"
#include <stdio.h>
#include <cstring>
#include <fstream>
#include "y.tab.hh"

extern ofstream output;
extern void parseOpenMP(const char* _input, void * _exprParse(const char*));
extern void yyerror(const char *);
extern string construirReductionDist(int it);
extern string construirAllReductionDist(int it);
extern void ReducirReduceConstVariables();
extern void lastLine();
int strcmp2(string s1, string s2);

static void count(void);
static void comment(void);
static char * get_pragma();
// static int check_type(void);

extern ofstream logFile;
extern ofstream errFile;
extern SymbolTable table;

int column = 0;
int line_count = 1;
char * conArgc = NULL;
char * conArgv = NULL;

extern int n_llaves;
extern int enCluster;
extern string guardarLineasDist;
extern int dist_n_llaves;
extern int enFor;
extern int MPIInitDone;
extern int MPIInitMainDone;
extern std::vector<const char *> argsReduceOpsDistribute;
extern std::vector<const char *> argsAllReduceOpsDistribute;
extern std::vector<std::string> varsReduceConstruir;
extern std::vector<std::vector<std::string>> reduceConst;
extern char *linea;
extern int enFuncion;

using namespace std;

extern YYSTYPE yylval;

extern int error_count;

%}

%option nounput

%%
"#"           {
                char * line = get_pragma();
                char * pragma = strstr(line, "pragma");
                if (pragma != NULL) {
                    parseOpenMP(pragma+7, NULL);
					char *red;
					char *busqueda = line;
					string newRed;

					if (strstr(line, "cluster") == NULL && (!enCluster || strstr(line, "distribute") == NULL)) {
						if (enDistribute && enFor == 0) {
							guardarLineasDist += '#';
							guardarLineasDist += line;

							if ((strstr(line, "for") != NULL || strstr(line, "simd") != NULL)) {
								if (enReductionDistribute) {
									while ((red = strstr(busqueda, "reduction")) != NULL) {
										newRed = "";
										busqueda = red + 10;
										while (*busqueda != ')') {
											newRed += *busqueda;
											busqueda++;
										}
										varsReduceConstruir.push_back(newRed);
									}
									ReducirReduceConstVariables();
									varsReduceConstruir.clear();
									for (long unsigned int i = 0; i < argsReduceOpsDistribute.size(); i++) {
										guardarLineasDist += construirReductionDist(i);
									}
								}
								if (enAllReductionDistribute) {
									while ((red = strstr(busqueda, "reduction")) != NULL) {
										newRed = "";
										busqueda = red + 10;
										while (*busqueda != ')') {
											newRed += *busqueda;
											busqueda++;
										}
										varsReduceConstruir.push_back(newRed);
									}
									ReducirReduceConstVariables();
									varsReduceConstruir.clear();
									for (long unsigned int i = 0; i < argsAllReduceOpsDistribute.size(); i++) {
										guardarLineasDist += construirAllReductionDist(i);
									}
								}

								reduceConst.clear();
							}

							guardarLineasDist += '\n';
						}
						else {
							output << "	#" << line;

							if ((strstr(line, "for") != NULL || strstr(line, "simd") != NULL)) {
								if (enReductionDistribute) {
									while ((red = strstr(busqueda, "reduction")) != NULL) {
										newRed = "";
										busqueda = red + 10;
										while (*busqueda != ')') {
											newRed += *busqueda;
											busqueda++;
										}
										varsReduceConstruir.push_back(newRed);
									}
									ReducirReduceConstVariables();
									varsReduceConstruir.clear();
									for (long unsigned int i = 0; i < argsReduceOpsDistribute.size(); i++) {
										output << construirReductionDist(i);
									}
								}
								if (enAllReductionDistribute) {
									while ((red = strstr(busqueda, "reduction")) != NULL) {
										newRed = "";
										busqueda = red + 10;
										while (*busqueda != ')') {
											newRed += *busqueda;
											busqueda++;
										}
										varsReduceConstruir.push_back(newRed);
									}
									ReducirReduceConstVariables();
									varsReduceConstruir.clear();
									for (long unsigned int i = 0; i < argsAllReduceOpsDistribute.size(); i++) {
										output << construirAllReductionDist(i);
									}
								}

								reduceConst.clear();
							}

							output << endl;
						}
					}
				}
				else{
					output << "#" << line << endl;
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

{L}({L}|{D})* {
	logFile << "LEYENDO: " << yytext << endl;
	count();
	SymbolInfo *s = table.getSymbolInfo(yytext);
	if(s != NULL && s->getSymIsType()){
		yylval.sym = new SymbolInfo(yytext, (char *) yytext);
		return USER_DEFINED;
	}
	else if (s != NULL) {
		if (strcmp(yytext, "fB") == 0) {
			fprintf(stderr, "fB en IDENTIFIER 1\n");
		}
		yylval.sym = s;

		if (strcmp2(yytext, std::string("argc")) == 1) {
			conArgc = (char *) malloc(strlen(yytext + 1));
			strcpy(conArgc, yytext);
			conArgc[strlen(yytext)] = '\0';
		}
		if (strcmp2(yytext, std::string("argv")) == 1) {
			conArgv = (char *) malloc(strlen(yytext + 1));
			strcpy(conArgv, yytext);
			conArgv[strlen(yytext)] = '\0';
		}
			
		return IDENTIFIER;
	}
	else {
		if (strcmp(yytext, "fB") == 0) {
			fprintf(stderr, "%s en IDENTIFIER 2\n", yytext);
		}
		s = new SymbolInfo(yytext, (char *)"IDENTIFIER");
		yylval.sym = s;

		if (strcmp2(yytext, std::string("argc")) == 1) {
			conArgc = (char *) malloc(strlen(yytext + 1));
			strcpy(conArgc, yytext);
			conArgc[strlen(yytext)] = '\0';
		}
		if (strcmp2(yytext, std::string("argv")) == 1) {
			conArgv = (char *) malloc(strlen(yytext + 1));
			strcpy(conArgv, yytext);
			conArgv[strlen(yytext)] = '\0';
		}

		return IDENTIFIER;
	}
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
("{"|"<%")		{ count(); if (enCluster) {if (n_llaves == -100) {n_llaves = 0;} n_llaves++;} if (enDistribute) {dist_n_llaves++;} return('{'); }
("}"|"%>")		{ count(); if (enCluster) {n_llaves--; if (n_llaves < 0) {exit(200);} else if(n_llaves == 0) {n_llaves = -100;}}
					if (enDistribute) {dist_n_llaves--; if (dist_n_llaves < 0) {exit(201);} else if (dist_n_llaves == 0) {dist_n_llaves = -100;}} 
					return('}'); }
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
	lastLine();
	
	if (MPIInitDone) {
		output << endl << DeclareTypes << "}";
	}

	return 1;
}


char * get_pragma(void)
{
        char c;
        char * line = (char *) malloc(512);
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
	setYytext(yytext);
	updateText();
	
	for (i = 0; yytext[i] != '\0'; i++) {
		if (yytext[i] == '\n'){
			line_count++;
			column = 0;
		}
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
	}

	//ECHO;
}

int strcmp2(string s1, string s2) {
	int res = 1;

	unsigned long int pos;
	
	for (pos = 0; pos < s1.size() && pos < s2.size(); pos++) {
		char c1 = s1.at(pos);

		if (c1 < 123 && c1 > 64) {
			if (s2.at(pos) - c1 != 0 && s2.at(pos) - c1 != 32) {
				res = 0;
				break;
			}
		}
		else if (c1 != s2.at(pos)) {
			res = 0;
			break;
		}
	}

	if (s1.size() - pos > 0 || s2.size() - pos > 0) {
		res = 0;
	}

	return res;
}


/* int check_type(void)
{ */
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return TYPE_NAME;
*
*	return IDENTIFIER;
*/

/*
*	it actually will only return IDENTIFIER
*/

	/* return IDENTIFIER;
} */
