#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "SymbolTable.h"

extern int yydebug;
extern FILE *yyin, *yyout;
FILE *inputFile;

extern char *linea;
extern int MVL_LINNUM;

extern void yyerror(const char *s);
extern int yyparse ();
extern void lastLine();

std::ofstream logFile, errFile, sym_tables, output;

extern int error_count, line_count;

extern SymbolTable table;

int main( int argc, const char* argv[] )
{
  /* missing parameter check */

  /* yydebug=1; */


  /* open files */
  if ((argc!=4) && (argc!=5)) {
      std::cout << "command: ./fparse input.c log.txt error.txt [output.c]" << std::endl;
      return 0;
  }

  if((inputFile=fopen(argv[1],"r"))==NULL) {
      printf("Cannot Open Input File.\n");
      exit(1);
  }

  logFile.open(argv[2]);
  errFile.open(argv[3]);

  if (argc==5){
    output.open(argv[4]);
  }

  sym_tables.open("sym_tables.txt");

  yyin=inputFile;

  //yydebug = 1;  // Enable Bison's debug mode

  yyparse();

  lastLine();
  table.exitScope();

  logFile << endl;
  logFile << "Total lines: " << line_count << endl;
  logFile << "Total errors: " << error_count << endl << endl;

  table.printCurrScopeTable();

  logFile.close();
  output.close();
  sym_tables.close();
  errFile.close();
  fclose(yyin);

  return 0;

}
