#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "SymbolTable.h"
#include "MPIwriter.h"

extern int yydebug;
extern FILE *yyin, *yyout;
FILE *inputFile;

char *linea;

extern int MVL_LINNUM;

extern void yyerror(const char *s);
extern int yyparse();

std::ofstream logFile, errFile, sym_tables, output;

extern int error_count, line_count;

extern SymbolTable table;
extern MPI_Writer mpi_writer;

int main(int argc, const char* argv[]) {
    /* missing parameter check */
    
    /* yydebug=1; */

    /* open files */
    if ((argc != 4) && (argc != 5)) {
        std::cout << "command: ./fparse input.c log.txt error.txt [output.c]" << std::endl;
        return 0;
    }

    if ((inputFile = fopen(argv[1], "r")) == NULL) {
        printf("Cannot Open Input File.\n");
        exit(1);
    }

    logFile.open(argv[2]);
    errFile.open(argv[3]);

    if (argc == 5) {
        output.open(argv[4], std::ios::app);
        logFile << "Opened output file: " << argv[4] << std::endl;
    } else {
        logFile << "No output file provided." << std::endl;
    }

    sym_tables.open("sym_tables.txt");
    generado.open("generado.c");  // Abre el archivo generado
    logFile << "Opened generated file: generado.c" << std::endl;

    yyin = inputFile;

    // yydebug = 1;  // Enable Bison's debug mode

    yyparse();
    
    // Output the contents of 'generado' to 'output'
    if (output.is_open()) {
        output << generado.rdbuf() << std::endl;
        logFile << "Written contents of 'generado' to 'output'." << std::endl;
    } else {
        logFile << "Output file is not open." << std::endl;
    }

    table.exitScope();

    logFile << std::endl;
    logFile << "Total lines: " << line_count << std::endl;
    logFile << "Total errors: " << error_count << std::endl << std::endl;

    table.printCurrScopeTable(); // Print the current scope table

    // Close all the files
    logFile.close();
    sym_tables.close();
    errFile.close();
    if (output.is_open()) {
        output.close();
    }
    fclose(yyin);
    generado.close();

    return 0;
}
