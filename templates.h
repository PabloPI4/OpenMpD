#ifndef TEMPLATE_H
#define TEMPLATE_H


#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <fstream>
#include "SymbolTable.h"
#include <vector>

using namespace std;

vector<const char *> args;
std::vector<std::vector<const char *>> argsScatter;
std::vector<std::vector<const char *>> argsGather;
std::vector<std::vector<const char *>> argsAllGather;
std::vector<const char *> argsReduceOpsCluster;
std::vector<std::vector<const char *>> argsReduceVarsCluster;
std::vector<const char *> argsAllReduceOpsCluster;
std::vector<std::vector<const char *>> argsAllReduceVarsCluster;
std::vector<const char *> argsReduceOpsDistribute;
std::vector<std::vector<const char *>> argsReduceVarsDistribute;
std::vector<const char *> argsAllReduceOpsDistribute;
std::vector<std::vector<const char *>> argsAllReduceVarsDistribute;

string DeclareTypes = "void DeclareTypesMPI() {\n";

std::vector<std::string> varsReduceConstruir;
std::vector<std::vector<std::string>> reduceConst;

extern ofstream output, errFile;

extern int statementZone;
extern int zonaPragma;
extern int finalizeOK;
extern int contadorTask;
extern int enCluster;
extern int chunk_pos;
extern int enDistribute;

extern int chunk;
extern int task;

extern long posInit;
extern long posVarsInit;

extern SymbolTable table;

int matrizTipos[11][11] = {{-1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1},
                {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2},
                {-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1},
                {-1, -1, -1, -1, -1, -1, 1, -1, 0, -1, -1},
                {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2},
                {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1},
                {-1, 0, -1, 0, -1, -1, 1, -1, -1, -1, 1},
                {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                {-1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1},
                {0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                {0, -2, -1, -1, -1, 0, 0, -1, -1, -1, -1}};

//-------------------------------AUXILIARES--------------------
void finSecuencial(){
    zonaPragma = 1;
    output << "\t}" << endl;
}

void aumentarReduction() {
    if (enDistribute)
        argsReduceVarsDistribute.push_back({});
    else
        argsReduceVarsCluster.push_back({});
}

void aumentarAllReduction() {
    if (enDistribute)
        argsAllReduceVarsDistribute.push_back({});
    else
        argsAllReduceVarsCluster.push_back({});
}

void aumentarScatter() {
    argsScatter.push_back({});
}

void aumentarGather() {
    argsGather.push_back({});
}

void aumentarAllGather() {
    argsAllGather.push_back({});
}

void addArgScatter(const char *arg) {
    argsScatter.at(chunk_pos).push_back(arg);
}

void addArgGather(const char *arg) {
    argsGather.at(chunk_pos).push_back(arg);
}

void addArgAllGather(const char *arg) {
    argsAllGather.at(chunk_pos).push_back(arg);
}

void addArg(const char *arg){
    args.push_back(arg);
}

void addReduce(bool vars, const char *arg) {
    if (vars) {
        if (enDistribute)
            argsReduceVarsDistribute.at(argsReduceVarsDistribute.size() - 1).push_back(arg);
        else
            argsReduceVarsCluster.at(argsReduceVarsCluster.size() - 1).push_back(arg);
    }
    else {
        if (enDistribute)
            argsReduceOpsDistribute.push_back(arg);
        else
            argsReduceOpsCluster.push_back(arg);
    }
}

void addAllReduce(bool vars, const char *arg) {
    if (vars) {
        if (enDistribute)
            argsAllReduceVarsDistribute.at(argsAllReduceVarsDistribute.size() - 1).push_back(arg);
        else
            argsAllReduceVarsCluster.at(argsAllReduceVarsCluster.size() - 1).push_back(arg);
    }
    else {
        if (enDistribute)
            argsAllReduceOpsDistribute.push_back(arg);
        else
            argsAllReduceOpsCluster.push_back(arg);
    }
}

string aMayuscula(string cadena) {
  for (string::size_type i = 0; i < cadena.length(); i++) cadena[i] = toupper(cadena[i]);
  return cadena;
}
string aMinuscula(string cadena) {
  for (string::size_type i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
  return cadena;
}

string translateTypes(string type) {
    string typeRes = "MPI";
    vector<string> parts;

    for (long unsigned int i = 0; i < type.size(); i++) {
        string x = "";

        for (; i < type.size(); i++) {
            if (type.at(i) == '_') {
                break;
            }
            else {
                x += type.at(i);
            }
        }

        if (x != "") {
            int fila = -1;
            string y = aMayuscula(x);
            if (y == "CHAR") {
                fila = 0;
            }
            else if (y == "INT") {
                fila = 1;
            }
            else if (y == "FLOAT") {
                fila = 2;
            }
            else if (y == "DOUBLE") {
                fila = 3;
            }
            else if (y == "BOOL") {
                fila = 4;
            }
            else if (y == "SHORT") {
                fila = 5;
            }
            else if (y == "LONG") {
                fila = 6;
            }
            else if (y == "BYTE") {
                fila = 7;
            }
            else if (y == "COMPLEX") {
                fila = 8;
            }
            else if (y == "SIGNED") {
                fila = 9;
            }
            else if (y == "UNSIGNED") {
                fila = 10;
            }
            else {
                continue;
            }

            if (parts.size() == 0 && fila >= 0) {
                parts.insert(parts.begin(), x);
                continue;
            }

            for (long unsigned int j = 0; j < parts.size(); j++) {
                int col;

                if (parts.at(j) == "CHAR") {
                    col = 0;
                }
                else if (parts.at(j) == "INT") {
                    col = 1;
                }
                else if (parts.at(j) == "FLOAT") {
                    col = 2;
                }
                else if (parts.at(j) == "DOUBLE") {
                    col = 3;
                }
                else if (parts.at(j) == "BOOL") {
                    col = 4;
                }
                else if (parts.at(j) == "SHORT") {
                    col = 5;
                }
                else if (parts.at(j) == "LONG") {
                    col = 6;
                }
                else if (parts.at(j) == "BYTE") {
                    col = 7;
                }
                else if (parts.at(j) == "COMPLEX") {
                    col = 8;
                }
                else if (parts.at(j) == "SIGNED") {
                    col = 9;
                }
                else if (parts.at(j) == "UNSIGNED") {
                    col = 10;
                }

                int elem = matrizTipos[fila][col];

                switch (elem) {
                    case -2: parts.insert(parts.begin() + j, y);
                            parts.erase(parts.begin() + j + 1);
                            break;
                    case 0: parts.insert(parts.begin() + j, y);
                            break;
                    case 1: parts.insert(parts.begin() + j + 1, y);
                            break;
                }

                if (elem != -1) {
                    break;
                }
            }
        }
    }

    for (long unsigned int i = 0; i < parts.size(); i++) {
        typeRes += ("_" + parts.at(i));
    }

    if (typeRes == "MPI") {
        fprintf(stderr, "tipo de MPI no permitido\n");
        exit(50);
    }

    return typeRes;
}

    vector<string> extractValues(string str) {
        vector<string> values;
        bool variable = true;
        bool abierto = false;

        for (long unsigned int i = 0; i < str.size(); i++) {
            string val = "";

            for (; i < str.size(); i++) {
                if(str.at(i) == ']') {
                    if (!abierto) {
                        fprintf(stderr, "'[' expected before ']' in cluster alloc\n");  
                        exit(80);
                    }
                    abierto = false;
                    break;
                }
                else if(str.at(i) == '[') {
                    abierto = true;
                    if (variable) {
                        break;
                    }
                }
                else {
                    val += str.at(i);
                }
            }

            if (abierto && variable) {
                variable = false;
            }
            else if (abierto) {
                fprintf(stderr, "']' expected in cluster alloc\n");
            }

            values.push_back(val);
        }

        return values;
    }

int countBrackets(string str) {
    int counter = 0;
    for (char c : str) {
        if (c == '[') {
            counter++;
        }
    }
    return counter;
}

vector<string> splitMatAIndices(const string& input) {
    size_t start_bracket1 = input.find('[');
    size_t end_bracket1 = input.find(']');
    size_t start_bracket2 = input.find('[', end_bracket1);
    size_t end_bracket2 = input.find(']', start_bracket2);

    string matA = input.substr(0, start_bracket1);
    string fA = input.substr(start_bracket1 + 1, end_bracket1 - start_bracket1 - 1);
    string cA = input.substr(start_bracket2 + 1, end_bracket2 - start_bracket2 - 1);

    return {matA, fA, cA};
}

void splitMatIndex(vector<string>& vec, const string& input) {
    size_t start_bracket1 = input.find('[');
    size_t end_bracket1 = input.find(']');
    size_t start_bracket2 = input.find('[', end_bracket1);
    size_t end_bracket2 = input.find(']', start_bracket2);

    string val1 = input.substr(0, start_bracket1);
    string val2 = input.substr(start_bracket1 + 1, end_bracket1 - start_bracket1 - 1);
    string val3 = input.substr(start_bracket2 + 1, end_bracket2 - start_bracket2 - 1);

	vec.push_back(val1);
	vec.push_back(val2);
	vec.push_back(val3);
}

void preConfPragma(){
    //statementZone = 1; //puede dar problemas
    if(zonaPragma==0){
        finSecuencial();
    }
}

vector<string> inTask(){
    int in = 0;
    vector<string> result;
    for(auto& arg : args){
        if(strcmp(arg, "IN") == 0){
            in = 1;
        }else if(strcmp(arg, "OUT") == 0){
            in = 0;
        }
        else if(in == 1){
            result.push_back(arg);
        }
    }
    return result;
}

vector<string> outTask(){
    int out = 0;
    vector<string> result;
    for(const auto& arg : args){
        if(strcmp(arg, "OUT") == 0){
            out = 1;
        }else if(strcmp(arg, "IN") == 0){
            out = 0;
        }
        else if(out == 1){
            result.push_back(arg);
        }
    }
    return result;
}

vector<string> argFormat(string arg) {
    vector<string> result;

    size_t startBracketPos = arg.find('[');
    size_t colonPos = arg.find(':');
    size_t endBracketPos = arg.find(']');

    if (startBracketPos != string::npos && colonPos != string::npos && endBracketPos != string::npos) {
        string part1 = arg.substr(0, startBracketPos);
        result.push_back(part1);

        string part2 = arg.substr(startBracketPos + 1, colonPos - startBracketPos - 1);
        result.push_back(part2);

        string part3 = arg.substr(colonPos + 1, endBracketPos - colonPos - 1);
        result.push_back(part3);
    } else {
        cerr << "Invalid format: " << arg << endl;
    }

    return result;
}

vector<string> scatterArgs(){
	vector<string> result = splitMatAIndices(args.at(0));
	result.push_back(args.at(1));
	return result;
}

vector<string> scatterHaloArgs(){
	vector<string> result;
	splitMatIndex(result, args.at(0));
	splitMatIndex(result, args.at(1));
	result.push_back(args.at(2));
	return result;
}

//-------------------------------PLANTILLAS--------------------
void MPIInit(){
    long posActual = output.tellp();

    output.seekp(0);

    output.write("#include <assert.h>\n#include <mpi.h>", 36);

    output.seekp(posVarsInit);

    output.write("void DeclareTypesMPI();\n\nint __taskid = -1, __numprocs = -1;\n", 61);

    output.seekp(posInit);

    output.write("\tMPI_Init(&argc,&argv);\n\tMPI_Comm_size(MPI_COMM_WORLD,&__numprocs);\n\tMPI_Comm_rank(MPI_COMM_WORLD,&__taskid);\n\tDeclareTypesMPI();\nif (__taskid == 0) {\n", 151);
    
    output.seekp(posActual);
    statementZone = 1;
}

void MPIEmpezarSecuencial() {
    output << "if (__taskid == 0) {" << endl;
}

void MPIWriteCluster() {
    output << "}" << endl;
}

void MPIFinalize(){
    if(!enCluster){
        MPIWriteCluster();
    }
    finalizeOK = 1;
    string finalize=    "\tMPI_Finalize();";
    output << finalize << endl;
}

    void MPIAlloc() {
        if(args.size() < 1){
            errFile << "Error: Alloc pragma must have 1 argument and it has " << args.size() << endl;
            exit(1);
        }

        string alloc = "";

        for (long unsigned int i = 0; i < args.size(); i++) {
            const char *arg = args.at(i);
            vector<string> values = extractValues(std::string(arg));
            SymbolInfo *infoVar = table.getSymbolInfo(values.at(0));

            alloc += "if (__taskid != 0) {\n";
            alloc += ("\t" + values.at(0) + " = (" + aMinuscula(infoVar->getVariableType()) + " ");
            for (long unsigned int j = 1; j < values.size(); j++) {
                alloc += "*";
            }
            alloc += (") malloc(" + values.at(1) + " * sizeof(" + aMinuscula(infoVar->getVariableType()) + " ");
            for (long unsigned int j = 2; j < values.size(); j++) {
                alloc += "*";
            }
            alloc += "));\n";

            for (long unsigned int j = 2; j < values.size(); j++) {
                string indentacion = "";
                for (long unsigned int k = 1; k < j; k++) {
                    indentacion += "\t";
                }

                alloc += (indentacion + "for (int __alloc" + std::to_string(j-2) + " = 0; __alloc" + std::to_string(j-2) 
                + " < " + values.at(j) + "; __alloc" + std::to_string(j-2) + "++) {\n");

                alloc += "\t" + indentacion + values.at(0);

                for (long unsigned int k = 0; k < j - 1; k++) {
                    alloc += "[__alloc" + std::to_string(k) + "]";
                }

                alloc += (" = (" + aMinuscula(infoVar->getVariableType()) + " ");
                for (long unsigned int k = j; k < values.size(); k++) {
                    alloc += "*";
                }
                alloc += (") malloc(" + values.at(j) + " * sizeof(" + aMinuscula(infoVar->getVariableType()) + " ");
                for (long unsigned int k = j + 1; k < values.size(); k++) {
                    alloc += "*";
                }
                alloc += ("));\n");
            }

            for (long unsigned int j = 2; j < values.size(); j++) {
                alloc += "\t}\n";
            }

            alloc += "}\n";

            output  << alloc << endl;

            alloc = "";
        }

        args.clear();
    }

    void MPIBroad(){
    	string broad = "";
        for(const auto& arg : args){
    		SymbolInfo *sim = table.getSymbolInfo(arg);
    		if(sim->isArray()){
    			broad += "MPI_Bcast(" + string(arg) + ", " + sim->getSizeList() + ", " + translateTypes(sim->getVariableType())  + ", 0, MPI_COMM_WORLD);\n";
    		}
    		else{
    			broad += "MPI_Bcast(&" + string(arg) + ", 1, " + translateTypes(sim->getVariableType()) + ", 0, MPI_COMM_WORLD);\n";
    		}
    	}
    	output << broad << endl;
        args.clear();
    }

    void MPIScatterChunk() {
        if (args.size() % 2 != 0) {
            fprintf(stderr, "insuficientes argumentos en scatter\n");
            exit(60);
        }
    
        for (long unsigned int i = 0; i < args.size(); i+=2) {
            vector<string> values = extractValues(args.at(i));
            string chunk = (std::string(args.at(i + 1)));
            if (chunk.find("[") != (long unsigned int)(-1)) {
                fprintf(stderr, "chunk de scatter incorrecto\n");
            }
            values.push_back(chunk);
            SymbolInfo * infoVar = table.getSymbolInfo(values.at(0));
    
            string scatter =
                "{\nint __chunk" + infoVar->getSymbolName() + ";\n" +
                aMinuscula(infoVar->getVariableType()) + "** __" + infoVar->getSymbolName() + ";\n" +
                "int *displs" + infoVar->getSymbolName() + " = (int *) malloc(__numprocs * sizeof(int));\n" +
                "int *counts" + infoVar->getSymbolName() + " = (int *) malloc(__numprocs * sizeof(int));\n" +
                "int offset" + infoVar->getSymbolName() + ";\n" +
    
                "if (" + values.at(1) + " % __numprocs == 0) {\n" +
                "\t__chunk" + infoVar->getSymbolName() + " = " + values.at(1) + "/__numprocs;\n" +
                "}\n" +
                "else {\n" +
                "\t__chunk" + infoVar->getSymbolName() + " = " + values.at(1) + "/__numprocs + 1;\n" +
                "}\n" +
    
                "if(__taskid == 0) {\n" +
                "\toffset" + infoVar->getSymbolName() + " = 0;\n" +
                "\tfor (int __scatter0 = 0; __scatter0 < __numprocs - 1; __scatter0++) {\n" +
                "\t\tcounts" + infoVar->getSymbolName() + "[__scatter0] = __chunk" + infoVar->getSymbolName() + " * " + values.at(2) + ";\n" +
                "\t\tdispls" + infoVar->getSymbolName() + "[__scatter0] = offset" + infoVar->getSymbolName() + ";\n" +
                "\t\toffset" + infoVar->getSymbolName() + " += __chunk" + infoVar->getSymbolName() + " * " + values.at(2) + ";\n" +
                "\t}\n" +
                "\tcounts" + infoVar->getSymbolName() + "[__numprocs - 1] = (" + values.at(1) + " - (" + "__chunk" + infoVar->getSymbolName() + " * " + "(__numprocs - 1))) * " + values.at(2) + ";\n" +
                "}\n" +
                "else if(__taskid == __numprocs - 1) {\n"
                "\tcounts" + infoVar->getSymbolName() + "[__taskid] = (" + values.at(1) + " - (" + "__chunk" + infoVar->getSymbolName() + " * " + "(__numprocs - 1))) * " + values.at(2) + ";\n" +
                "}\n" +
                "else {\n" +
                "\tcounts" + infoVar->getSymbolName() + "[__taskid] = __chunk" + infoVar->getSymbolName() + " * " + values.at(2) + ";\n" +
                "}\n" +
    
                "__" + infoVar->getSymbolName() + " = (" + aMinuscula(infoVar->getVariableType()) + " **) malloc(" + values.at(1) + " * sizeof(" + aMinuscula(infoVar->getVariableType()) + " *));\n" +
                "for (int __scatter1 = 0; __scatter1 < " + values.at(1) + "; __scatter1++) {\n" +
                "\t__" + infoVar->getSymbolName() + "[__scatter1] = (" + aMinuscula(infoVar->getVariableType()) + " *) malloc(" + values.at(2) + " * sizeof(" + aMinuscula(infoVar->getVariableType()) + "));\n" +
                "}\n" +
    
                aMinuscula(infoVar->getVariableType()) + " *" + infoVar->getSymbolName() + "aux = &" + infoVar->getSymbolName() + "[0][0];\n" +
                aMinuscula(infoVar->getVariableType()) + " *__" + infoVar->getSymbolName() + "aux = &__" + infoVar->getSymbolName() + "[0][0];\n" +
    
    
                "MPI_Scatterv(" + infoVar->getSymbolName() + "aux, counts" + infoVar->getSymbolName() + ", displs" + infoVar->getSymbolName() + ", MPI_" + infoVar->getVariableType() + ", __" + 
                infoVar->getSymbolName() + "aux + (__chunk" + infoVar->getSymbolName() + "*" + values.at(2) + "*__taskid), counts" + infoVar->getSymbolName() + "[__taskid], " + "MPI_" +
                infoVar->getVariableType() + ", 0, MPI_COMM_WORLD);\n}\n";
            
            output << scatter << endl;
        }

        args.clear();
    }

void MPIScatterHalo(){

	vector<string> argsScatterHalo = scatterHaloArgs();

	string uno = argsScatterHalo.at(0);//w
	string dos = argsScatterHalo.at(1);//M
	string tres = argsScatterHalo.at(2);//N

	SymbolInfo *sim1 = table.getSymbolInfo(uno);

	string scatterHalo = 
		"\tdouble __" + uno + "[" + dos+ "][" + tres+ "];\n"
		"\tif (__taskid == 0)\n"
		"\t\tfor ( i = 0; i < M; i++ )\n"
		"\t\t\tfor ( j = 0; j < " + tres+ "; j++ )\n" 
		"\t\t\t\t__" + uno + "[i][j] = " + uno + "[i][j];\n"
		"\tMPI_Bcast(&__" + uno + "[0][0], " + dos + "*" + tres+ ", MPI_" + sim1->getVariableType() + ", 0, MPI_COMM_WORLD);\n";
	output << scatterHalo << endl;
}

void MPIUpdateHalo(){
	vector<string> argsScatterHalo = scatterHaloArgs();

	string uno = argsScatterHalo.at(0);//w
	string dos = argsScatterHalo.at(1);//M
	string tres = argsScatterHalo.at(2);//N

	SymbolInfo *sim1 = table.getSymbolInfo(uno);

	string updateHalo = 
	"\t{\n"
		"\t\tint __chunk;\n"
		"\t\tint __start_" + uno + ";\n"
		"\t\tint __end_" + uno + ";\n"
		"\t\t__chunk = (" + dos + " / __numprocs);\n"
		"\t\tif (__taskid < (" + dos + " % __numprocs))\n"
		"\t\t\t__chunk++;\n"
		"\t\t__start_" + uno + " =  __chunk * __taskid;\n"
		"\t\tif (__taskid >= (" + dos + " % __numprocs))"
		"\t\t\t__start_" + uno + " += " + dos + " % __numprocs;\n"
		"\t\t__end_" + uno + " = __start_" + uno + " + __chunk ;\n"
		"\t\tif (__taskid == 0) __start_" + uno + " = __start_" + uno + " - 1;\n"
		"\t\tif (__taskid == (__numprocs-1)) __end_" + uno + " = __end_" + uno + " - 1;\n"
		"\t\tif (__taskid == (__numprocs-1)) assert (__end_" + uno + " == (" + dos + "-1));\n"
		"\t\t\tif(__taskid > 0)\n"
		"\t\t\t\tMPI_Isend(__" + uno + "[__start_" + uno + "], 1*" + tres + ", MPI_" + sim1->getVariableType() + ", __taskid - 1, 100, MPI_COMM_WORLD, &reqs);\n"
		"\t\t\tif(__taskid < __numprocs - 1)\n"
		"\t\t\t\tMPI_Isend(__" + uno + "[__end_" + uno + "-1], 1*" + tres + ", MPI_" + sim1->getVariableType() + ", __taskid + 1, 101, MPI_COMM_WORLD, &reqs);\n"
		"\t\t\tif(__taskid > 0)\n"
		"\t\t\t\tMPI_Recv(__" + uno + "[__start_" + uno + "-1], 1*" + tres + ", MPI_" + sim1->getVariableType() + ", __taskid - 1, 101, MPI_COMM_WORLD, &status);\n"
		"\t\t\tif(__taskid < __numprocs - 1)\n"
		"\t\t\t\tMPI_Recv(__" + uno + "[__end_" + uno + "], 1*" + tres + ", MPI_" + sim1->getVariableType() + ", __taskid + 1, 100, MPI_COMM_WORLD, &status);\n"
	"\t}\n\n";
	output << updateHalo << endl;
    args.clear();
}

void MPITask(){
    preConfPragma();
    task = 1;
    string task =  
        "\tif (__taskid == " + to_string(contadorTask) + ") {\n";

    vector<string> inArg = inTask();

    for(const auto& arg : inArg){
        vector<string> argItem = argFormat(arg);
        SymbolInfo *sim = table.getSymbolInfo(argItem.at(0));

        task += "\t\tMPI_Recv (&" + argItem.at(0) + "[" + argItem.at(1) + "]" +", " + argItem.at(2) + ", MPI_" +  sim->getVariableType() + ", " + to_string(contadorTask -1) + ", 0, MPI_COMM_WORLD, &__status);\n";
    }

    output << task;
}

void MPITaskEnd(){
    preConfPragma();
    string task =  "";

    vector<string> outArg = outTask();

    for(const auto& arg : outArg){
        vector<string> argItem = argFormat(arg);
        SymbolInfo *sim = table.getSymbolInfo(argItem.at(0));
        
        task += "\t\tMPI_Send (&" + argItem.at(0) + "[" + argItem.at(1) + "]" +", " + argItem.at(2) + ", MPI_" +  sim->getVariableType() + ", " + to_string(contadorTask +1) + ", 0, MPI_COMM_WORLD);\n";
    }
    task += "\t}";

	contadorTask++;

    output << task << endl;
    args.clear();
}

void MPIDistribute(string ini, string fin) {
    string distribute =
        "int __iter;\nint __start;\nint __end;\n__iter = (((" + fin + ") - (" + ini + ")) / __numprocs);\n" +
        "if (__taskid < (((" + fin + ") - (" + ini + ")) % __numprocs))\n" +
        "\t__iter++;\n" +
        "__start = ((" + ini + ") + __iter * __taskid);\n" +
        "if (__taskid >= (((" + fin + ") - (" + ini + ")) % __numprocs))\n" +
        "\t__start += (((" + fin + ") - (" + ini + ")) % __numprocs);\n" +
        "__end = __start + __iter;\nif (__taskid == (__numprocs - 1)) assert(__end == (" + fin + "));\n";
    
    output << distribute << endl;
}

void calcularReduceFinal(bool cluster) {
    std::vector<std::vector<const char *>> *argsReduceVars;
    std::vector<const char *> *argsReduceOps;

    if (cluster) {
        argsReduceVars = &argsReduceVarsCluster;
        argsReduceOps = &argsReduceOpsCluster;
    }
    else {
        argsReduceVars = &argsReduceVarsDistribute;
        argsReduceOps = &argsReduceOpsDistribute;
    }

    std::string finalReduce = "\n";

    if ((*argsReduceOps).size() != (*argsReduceVars).size()) {
        exit(120);
    }

    for (long unsigned int i = 0; i < (*argsReduceOps).size(); i++) {
        string opMPI;
        if (strcmp((*argsReduceOps).at(i), "+") == 0) {
            opMPI = "MPI_SUM";
        }
        else if (strcmp((*argsReduceOps).at(i), "*") == 0) {
            opMPI = "MPI_PROD";
        }
        else if (strcmp((*argsReduceOps).at(i), "MAX") == 0) {
            opMPI = "MPI_MAX";
        }
        else if (strcmp((*argsReduceOps).at(i), "MIN") == 0) {
            opMPI = "MPI_MIN";
        }
        else if (strcmp((*argsReduceOps).at(i), "&") == 0) {
            opMPI = "MPI_LAND";
        }
        else if (strcmp((*argsReduceOps).at(i), "|") == 0) {
            opMPI = "MPI_LOR";
        }
        else if (strcmp((*argsReduceOps).at(i), "^") == 0) {
            opMPI = "MPI_LXOR";
        }
        else {
            fprintf(stderr, "Operacion de reduction no valida\n");
            exit(20);
        }

        for (long unsigned int varIt = 0; varIt < (*argsReduceVars).at(i).size(); varIt++) {
            SymbolInfo *infoVar = table.getSymbolInfo((*argsReduceVars).at(i).at(varIt));
            std::string toUpper;
            std::string toLower;
            toUpper += infoVar->getVariableType();
            toLower += infoVar->getVariableType();

            for (long unsigned int j = 0; j < infoVar->getVariableType().size(); j++) {
                toUpper.at(j) = toupper(infoVar->getVariableType().at(j));
                toLower.at(j) = tolower(infoVar->getVariableType().at(j));
            }

            finalReduce += (toLower + " __" + (*argsReduceVars).at(i).at(varIt) + ";\n");

            finalReduce = finalReduce + "MPI_Reduce(&" + (*argsReduceVars).at(i).at(varIt) + ", &__" + (*argsReduceVars).at(i).at(varIt) + ", 1, " + translateTypes(toUpper) +
             ", " + opMPI + ", 0, MPI_COMM_WORLD);\n";

            finalReduce = finalReduce + "if (__taskid == 0) { " + (*argsReduceVars).at(i).at(varIt) + " = __" + (*argsReduceVars).at(i).at(varIt) + "; }\n";
        }
    }

    output << finalReduce << endl;

    (*argsReduceOps).clear();
    (*argsReduceVars).clear();
}

void calcularAllReduceFinal(bool cluster) {
    std::vector<std::vector<const char *>> *argsAllReduceVars;
    std::vector<const char *> *argsAllReduceOps;

    if (cluster) {
        argsAllReduceVars = &argsAllReduceVarsCluster;
        argsAllReduceOps = &argsAllReduceOpsCluster;
    }
    else {
        argsAllReduceVars = &argsAllReduceVarsDistribute;
        argsAllReduceOps = &argsAllReduceOpsDistribute;
    }

    std::string finalReduce = "\n";

    if ((*argsAllReduceOps).size() != (*argsAllReduceVars).size()) {
        exit(120);
    }

    for (long unsigned int i = 0; i < (*argsAllReduceOps).size(); i++) {
        string opMPI;
        if (strcmp((*argsAllReduceOps).at(i), "+") == 0) {
            opMPI = "MPI_SUM";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "*") == 0) {
            opMPI = "MPI_PROD";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "MAX") == 0) {
            opMPI = "MPI_MAX";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "MIN") == 0) {
            opMPI = "MPI_MIN";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "&") == 0) {
            opMPI = "MPI_LAND";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "|") == 0) {
            opMPI = "MPI_LOR";
        }
        else if (strcmp((*argsAllReduceOps).at(i), "^") == 0) {
            opMPI = "MPI_LXOR";
        }
        else {
            fprintf(stderr, "Operacion de reduction no valida\n");
            exit(20);
        }

        for (long unsigned int varIt = 0; varIt < (*argsAllReduceVars).at(i).size(); varIt++) {
            SymbolInfo *infoVar = table.getSymbolInfo((*argsAllReduceVars).at(i).at(varIt));
            std::string toUpper;
            std::string toLower;
            toUpper += infoVar->getVariableType();
            toLower += infoVar->getVariableType();

            for (long unsigned int j = 0; j < infoVar->getVariableType().size(); j++) {
                toUpper.at(j) = toupper(infoVar->getVariableType().at(j));
                toLower.at(j) = tolower(infoVar->getVariableType().at(j));
            }

            finalReduce += (toLower + " __" + (*argsAllReduceVars).at(i).at(varIt) + ";\n");

            finalReduce = finalReduce + "MPI_Allreduce(&" + (*argsAllReduceVars).at(i).at(varIt) + ", &__" + (*argsAllReduceVars).at(i).at(varIt) + ", 1, " + translateTypes(toUpper) +
             ", " + opMPI + ", MPI_COMM_WORLD);\n";

            finalReduce = finalReduce + (*argsAllReduceVars).at(i).at(varIt) + " = __" + (*argsAllReduceVars).at(i).at(varIt) + ";\n";
        }
    }

    output << finalReduce << endl;

    (*argsAllReduceOps).clear();
    (*argsAllReduceVars).clear();
}

void ReducirReduceConstVariables() {
    for (int i = 0; i < 7; i++) {
        reduceConst.push_back({});
    }

    for (unsigned long int i = 0; i < varsReduceConstruir.size(); i++) {
        string x = "";
        string op;
        int estado = 0;
        reduceConst.push_back({});
        int n = 0;

        for (unsigned long int j = 0; j < varsReduceConstruir.at(i).size(); j++) {
            switch(estado) {
                case 0: if (varsReduceConstruir.at(i).at(j) == ':') {estado = 1; continue;}
                        op += varsReduceConstruir.at(i).at(j);
                        break;
                case 1: if (varsReduceConstruir.at(i).at(j) == ',') {
                            if (op == "+") {
                                reduceConst.at(0).push_back(x);
                            }
                            else if (op == "*") {
                                reduceConst.at(1).push_back(x);
                            }
                            else if (op == "max") {
                                reduceConst.at(2).push_back(x);
                            }
                            else if (op == "min") {
                                reduceConst.at(3).push_back(x);
                            }
                            else if (op == "&") {
                                reduceConst.at(4).push_back(x);
                            }
                            else if (op == "|") {
                                reduceConst.at(5).push_back(x);
                            }
                            else if (op == "^") {
                                reduceConst.at(6).push_back(x);
                            }
                            else {
                                fprintf(stderr, "Operacion de reduction no valida\n");
                                exit(20);
                            }

                            x = "";
                            n++;
                            continue;
                        }

                        x += varsReduceConstruir.at(i).at(j);
                        
                        if (j == varsReduceConstruir.at(i).size() - 1) {
                            if (op == "+") {
                                reduceConst.at(0).push_back(x);
                            }
                            else if (op == "*") {
                                reduceConst.at(1).push_back(x);
                            }
                            else if (op == "max") {
                                reduceConst.at(2).push_back(x);
                            }
                            else if (op == "min") {
                                reduceConst.at(3).push_back(x);
                            }
                            else if (op == "&") {
                                reduceConst.at(4).push_back(x);
                            }
                            else if (op == "|") {
                                reduceConst.at(5).push_back(x);
                            }
                            else if (op == "^") {
                                reduceConst.at(6).push_back(x);
                            }
                            else {
                                fprintf(stderr, "Operacion de reduction no valida\n");
                                exit(20);
                            }
                        }
            }
        }
    }
}

string construirReductionDist(int it) {
    string reduction = " reduction(";

    reduction += aMinuscula(argsReduceOpsDistribute.at(it));

    reduction += ":";

    int op;
    int n_escritos = 0;

    for (unsigned long int i = 0; i < argsReduceVarsDistribute.at(it).size(); i++) {
        if (strcmp(argsReduceOpsDistribute.at(it), "+") == 0) {
            op = 0;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "*") == 0) {
            op = 1;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "MAX") == 0) {
            op = 2;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "MIN") == 0) {
            op = 3;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "&") == 0) {
            op = 4;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "|") == 0) {
            op = 5;
        }
        else if (strcmp(argsReduceOpsDistribute.at(it), "^") == 0) {
            op = 6;
        }
        else {
            fprintf(stderr, "Operacion de reduction no valida\n");
            exit(20);
        }

        int esta = 0;
        for (unsigned long int j = 0; j < reduceConst.at(op).size(); j++) {
            if (strcmp(argsReduceVarsDistribute.at(it).at(i), reduceConst.at(op).at(j).data()) == 0) {
                esta = 1;
                break;
            }
        }

        if (!esta) {
            if (n_escritos > 0) {
                reduction += ", ";
            }
            reduction += argsReduceVarsDistribute.at(it).at(i);
            n_escritos++;
        }
    }

    reduction += ")";

    if (n_escritos == 0) {
        reduction = "";
    }

    return reduction;
}

string construirAllReductionDist(int it) {
    string reduccion = " reduction(";

    reduccion += argsAllReduceOpsDistribute.at(it);

    reduccion += ":";

    for (long unsigned int i = 0; i < argsAllReduceVarsDistribute.at(it).size(); i++) {
        if (i != 0) {
            reduccion += ", ";
        }
        reduccion += argsAllReduceVarsDistribute.at(it).at(i);
    }

    reduccion += ")";

    return reduccion;
}

void GatherConChunk(std::vector<const char *> argsG) {
    std::vector<std::string> vals = extractValues(argsG.at(0));
    std::string chunk = argsG.at(1);

    SymbolInfo *infoVar = table.getSymbolInfo(vals.at(0));

    string mult = "";

    for (long unsigned int i = 2; i < vals.size(); i++) {
        mult += "*";
        mult += vals.at(i);
    }

    string gather =
        "{\n\tint __offset = 0;\n\tint *__displs = (int *) malloc(sizeof(int) * __numprocs);\n\tint *__counts = (int *) malloc(sizeof(int) * __numprocs);\n\n\twhile (__offset < " +
        vals.at(1) + mult + ") {\n" +
        "\t\tif (__taskid == 0) {\n" +
        "\t\t\tfor (int __gather = 0; __gather < __numprocs; __gather++) {\n" +
        "\t\t\t\tif (__offset < " + vals.at(1) + mult + ") {\n" +
        "\t\t\t\t\t__counts[__gather] = " + chunk + ";\n" +
        "\t\t\t\t\t__displs[__gather] = __offset;\n" +
        "\t\t\t\t\t__offset += " + chunk + ";\n" +
        "\t\t\t\t}\n" +
        "\t\t\t\telse {\n" +
        "\t\t\t\t\t__counts[__gather] = 0;\n" +
        "\t\t\t\t\t__displs[__gather] = " + vals.at(1) + mult + ";\n" +
        "\t\t\t\t}\n" +
        "\t\t\t}\n" +
        "\t\t}\n" +
        "\t\telse {\n" +
        "\t\t\tif (__offset + __taskid*" + chunk + " < " + vals.at(1) + mult + ") {\n" +
        "\t\t\t\t__counts[__taskid] = " + chunk + ";\n" +
        "\t\t\t\t__displs[__taskid] = __offset + __taskid*" + chunk + ";\n" +
        "\t\t\t\t__offset += __numprocs*" + chunk + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse {\n" +
        "\t\t\t\t__counts[__taskid] = 0;\n" +
        "\t\t\t\t__displs[__taskid] = " + vals.at(1) + mult + ";\n" +
        "\t\t\t\t__offset += __numprocs*" + chunk + ";\n" +
        "\t\t\t}\n" +
        "\t\t}\n\n" +
        "\t\tMPI_Gatherv(" + vals.at(0) + "+__displs[__taskid], __counts[__taskid], " + translateTypes(infoVar->getVariableType()) +
        ", " + vals.at(0) + ", __counts, __displs, " + translateTypes(infoVar->getVariableType()) + ", 0, MPI_COMM_WORLD);\n" +
        "\t}\n" +
        "}\n";

    output << gather << endl;
}

void GatherSinChunk(std::vector<const char *> argsG) {
    std::vector<std::string> vals = extractValues(std::string(argsG.at(0)));

    SymbolInfo *infoVar = table.getSymbolInfo(vals.at(0));

    string mult = "";

    for (long unsigned int i = 2; i < vals.size(); i++) {
        mult += "*";
        mult += vals.at(i);
    }

    string gather =
        "{\n\tint __chunk;\n\tint *__displs = (int *) malloc(sizeof(int) * __numprocs);\n\tint *__counts = (int *) malloc(sizeof(int) * __numprocs);\n\t__chunk = (" +
        vals.at(1) + " / __numprocs);\n" +
        "\t__displs[__taskid] = __chunk*__taskid" + mult + ";\n\n" +

        "\tif (__taskid < (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t__counts[__taskid] = (__chunk + 1)" + mult + ";\n" +
        "\t\t__displs[__taskid] += __taskid" + mult + ";\n" +
        "\t}\n" +
        "\telse {\n" +
        "\t\t__counts[__taskid] = __chunk" + mult + ";\n" +
        "\t\t__displs[__taskid] += (" + vals.at(1) + " % __numprocs)" + mult + ";\n" +
        "\t}\n\n" +

        "\tif (__taskid == 0) {\n" +
        "\t\t__displs[0] = 0;\n\n" +
        "\t\tfor (int __gather = 1; __gather < __numprocs; __gather++) {\n" +
        "\t\t\tif (__gather < (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t\t\t__counts[__gather] = (__chunk + 1)" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse if (__gather == (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t\t\t__counts[__gather] = __chunk" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse {\n" +
        "\t\t\t\t__counts[__gather] = __chunk" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + __chunk" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t}\n\n" +
        "\t\tassert((__displs[__numprocs - 1] + counts[__numprocs - 1]) == " + vals.at(1) + mult + ");\n" +
        "\t}\n\n" +

        "\tMPI_Gatherv(" + vals.at(0) + "+__displs[__taskid], counts[__taskid], " + translateTypes(infoVar->getVariableType()) +
        ", " + vals.at(0) + ", __counts, __displs, " + translateTypes(infoVar->getVariableType()) + ", 0, MPI_COMM_WORLD);\n" +
        "}\n";

    output << gather << endl;
}

void MPIGather() {
    for (unsigned long int i = 0; i < argsGather.size(); i++) {
        if (argsGather.at(i).size() == 1) {
            GatherSinChunk(argsGather.at(i));
        }
        else if (argsGather.at(i).size() == 2) {
            GatherConChunk(argsGather.at(i));
        }
        else {
            fprintf(stderr, "Numero de argumentos de gather incorrectos, se tienen: %ld\n", argsGather.at(i).size());
            exit(210);
        }
    }
}

void AllGatherConChunk(std::vector<const char *> argsG) {
    std::vector<std::string> vals = extractValues(argsG.at(0));
    std::string chunk = argsG.at(1);

    SymbolInfo *infoVar = table.getSymbolInfo(vals.at(0));

    string mult = "";

    for (long unsigned int i = 2; i < vals.size(); i++) {
        mult += "*";
        mult += vals.at(i);
    }

    string gather =
        "{\n\tint __offset = 0;\n\tint *__displs = (int *) malloc(sizeof(int) * __numprocs);\n\tint *__counts = (int *) malloc(sizeof(int) * __numprocs);\n\n\twhile (__offset < " +
        vals.at(1) + mult + ") {\n" +
        "\t\tif (__taskid == 0) {\n" +
        "\t\t\tfor (int __gather = 0; __gather < __numprocs; __gather++) {\n" +
        "\t\t\t\tif (__offset < " + vals.at(1) + mult + ") {\n" +
        "\t\t\t\t\t__counts[__gather] = " + chunk + ";\n" +
        "\t\t\t\t\t__displs[__gather] = __offset;\n" +
        "\t\t\t\t\t__offset += " + chunk + ";\n" +
        "\t\t\t\t}\n" +
        "\t\t\t\telse {\n" +
        "\t\t\t\t\t__counts[__gather] = 0;\n" +
        "\t\t\t\t\t__displs[__gather] = " + vals.at(1) + mult + ";\n" +
        "\t\t\t\t}\n" +
        "\t\t\t}\n" +
        "\t\t}\n" +
        "\t\telse {\n" +
        "\t\t\tif (__offset + __taskid*" + chunk + " < " + vals.at(1) + mult + ") {\n" +
        "\t\t\t\t__counts[__taskid] = " + chunk + ";\n" +
        "\t\t\t\t__displs[__taskid] = __offset + __taskid*" + chunk + ";\n" +
        "\t\t\t\t__offset += __numprocs*" + chunk + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse {\n" +
        "\t\t\t\t__counts[__taskid] = 0;\n" +
        "\t\t\t\t__displs[__taskid] = " + vals.at(1) + mult + ";\n" +
        "\t\t\t\t__offset += __numprocs*" + chunk + ";\n" +
        "\t\t\t}\n" +
        "\t\t}\n\n" +
        "\t\tMPI_Gatherv(" + vals.at(0) + "+__displs[__taskid], __counts[__taskid], " + translateTypes(infoVar->getVariableType()) +
        ", " + vals.at(0) + ", __counts, __displs, " + translateTypes(infoVar->getVariableType()) + ", 0, MPI_COMM_WORLD);\n" +
        "\t}\n" +
        "}\n";

    output << gather << endl;
}

void AllGatherSinChunk(std::vector<const char *> argsG) {
    std::vector<std::string> vals = extractValues(std::string(argsG.at(0)));

    SymbolInfo *infoVar = table.getSymbolInfo(vals.at(0));

    string mult = "";

    for (long unsigned int i = 2; i < vals.size(); i++) {
        mult += "*";
        mult += vals.at(i);
    }

    string gather =
        "{\n\tint __chunk;\n\tint *__displs = (int *) malloc(sizeof(int) * __numprocs);\n\tint *__counts = (int *) malloc(sizeof(int) * __numprocs);\n\t__chunk = (" +
        vals.at(1) + " / __numprocs);\n" +
        "\t__displs[__taskid] = __chunk*__taskid" + mult + ";\n\n" +

        "\tif (__taskid < (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t__counts[__taskid] = (__chunk + 1)" + mult + ";\n" +
        "\t\t__displs[__taskid] += __taskid" + mult + ";\n" +
        "\t}\n" +
        "\telse {\n" +
        "\t\t__counts[__taskid] = __chunk" + mult + ";\n" +
        "\t\t__displs[__taskid] += (" + vals.at(1) + " % __numprocs)" + mult + ";\n" +
        "\t}\n\n" +

        "\tif (__taskid == 0) {\n" +
        "\t\t__displs[0] = 0;\n\n" +
        "\t\tfor (int __gather = 1; __gather < __numprocs; __gather++) {\n" +
        "\t\t\tif (__gather < (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t\t\t__counts[__gather] = (__chunk + 1)" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse if (__gather == (" + vals.at(1) + " % __numprocs)) {\n" +
        "\t\t\t\t__counts[__gather] = __chunk" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + (__chunk + 1)" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t\telse {\n" +
        "\t\t\t\t__counts[__gather] = __chunk" + mult + ";\n" +
        "\t\t\t\t__displs[__gather] = __displs[__gather - 1] + __chunk" + mult + ";\n" +
        "\t\t\t}\n" +
        "\t\t}\n\n" +
        "\t\tassert((__displs[__numprocs - 1] + counts[__numprocs - 1]) == " + vals.at(1) + mult + ");\n" +
        "\t}\n\n" +

        "\tMPI_Gatherv(" + vals.at(0) + "+__displs[__taskid], counts[__taskid], " + translateTypes(infoVar->getVariableType()) +
        ", " + vals.at(0) + ", __counts, __displs, " + translateTypes(infoVar->getVariableType()) + ", 0, MPI_COMM_WORLD);\n" +
        "}\n";

    output << gather << endl;
}

void MPIAllGather() {
    for (unsigned long int i = 0; i < argsAllGather.size(); i++) {
        if (argsAllGather.at(i).size() == 1) {
            AllGatherSinChunk(argsAllGather.at(i));
        }
        else if (argsAllGather.at(i).size() == 2) {
            AllGatherConChunk(argsAllGather.at(i));
        }
        else {
            fprintf(stderr, "Numero de argumentos de gather incorrectos, se tienen: %ld\n", argsAllGather.at(i).size());
            exit(210);
        }
    }
}

#endif 