	#ifndef MPI_WRITER_H
#define MPI_WRITER_H

#include <sstream>
#include <fstream>
#include <vector>
#include "SymbolTable.h"

extern std::ofstream generado;
extern ofstream logFile;
extern std::ofstream errFile;
extern int statePragma;
extern int stateFuncion;
extern bool saltaFor;
extern string last_iter, first_iter;
extern SymbolTable table;
extern bool enReduce;


class MPI_Funcion
{
private:
    std::ostringstream variables, sec_pre_inic, c_pre_sec, sec_pre_fin, pre_pragmas, pragmas, sec_pos_inic, c_pos_sec, sec_pos_fin, fin;

public:
    void write_MPI_pre(){
        if (sec_pre_inic.str().empty() && sec_pre_fin.str().empty())
        {
            sec_pre_inic << "\nif (__taskid == 0) { \n";
            sec_pre_fin << "}\n";
        }
    }

    void write_MPI_pos(){
        if (sec_pos_inic.str().empty() && sec_pos_fin.str().empty())
        {
            sec_pos_inic << "\nif (__taskid == 0) { \n";
            sec_pos_fin << "}\n";
        }
    }
    void extractForLoop(const string& line) {
        // Expresiones regulares para buscar la inicialización y la condición del bucle for
        regex initRegex(R"(for\s*\(([^;]+);)");
        regex condRegex(R"(;([^;]+);)");

        smatch match;

        // Buscar la inicialización del bucle for
        if (regex_search(line, match, initRegex)) {
            string initialization = match.str(1);
            size_t equalPos = initialization.find('=');

            if (equalPos != string::npos) {
                size_t startPos = initialization.find_first_not_of(" \t", equalPos + 1);
                if (startPos != string::npos) {
                    size_t endPos = initialization.find_first_of(" \t;", startPos);
                    if (endPos == string::npos) {
                        endPos = initialization.size();
                    }
                    first_iter = initialization.substr(startPos, endPos - startPos);
                    //logFile << "Valor de first_iter: " << first_iter << endl;
                }
            }
        }

        // Buscar la condición del bucle for
        if (regex_search(line, match, condRegex)) {
            string condition = match.str(1);
            size_t greaterLessPos = condition.find_first_of("><");
            //logFile << "entro en  last_iter: " << endl;

            if (greaterLessPos != string::npos) {
                size_t startPost = condition.find_first_not_of(" \t", greaterLessPos + 1);
                if (startPost != string::npos) {
                    size_t endPost = condition.find_first_of(" \t;", startPost);
                    if (endPost == string::npos) {
                        endPost = condition.size();
                    }
                    last_iter = condition.substr(startPost, endPost - startPost);
                    //logFile << "Valor de last_iter: " << last_iter << endl;
                }
            }
        }
        
    }    

    void analyze_Pragma(std::string texto){
        logFile << "entro en pragmas y statePragma= " << statePragma << endl;
        switch (statePragma)
        {
        case 0: // ningun cluster visto, se copia
            pragmas << "#" << texto << endl;
            break;
        case 1: // cluster y distribute visto, vemos parallel for SIN schedule
            pragmas << "#" << texto << endl;
            statePragma = 3;
            break;
        case 2: // cluster y distribute visto, vemos parallel for CON schedule
            pragmas << "#" << texto << endl;
            statePragma = 4;
            break;
        case 3: // tiene que copiar el bucle for entero menos el primer for, viene de 1 
            if(saltaFor==true){
                extractForLoop(texto);
                write_Distribute(0);
                write_Distribute(2);
                saltaFor = false;
                //logFile << "he llamado a forloop con: " << texto;
                break;
            }
            pragmas << texto;
            break;
        case 4: // tiene que copiar el bucle for entero menos el primer for, viene de 2
            if(saltaFor==true){
                extractForLoop(texto);
                write_Distribute(1);
                write_Distribute(3);
                //logFile << "he llamado a forloop con: " << texto;
                saltaFor = false;
                break;
            }
            pragmas << texto;
            break;
        case 5: // la ultima llave del for
                 pragmas << texto;
                 logFile << saltaFor << endl;
                 stateFuncion++;

            break;
        case 6: // el bucle del schedule requiere una llave adicional
            write_Distribute(4);
            break;
        }
    }

    void write_Distribute(int state){
        switch (state)
        {
        case 0: //detecta el cluster y el distribute, no hay schedule
            pre_pragmas << "int __iter;\n";
            pre_pragmas << "int __start;\n";
            pre_pragmas << "int __end;\n";
            pre_pragmas << "__iter = ((" << last_iter << " - " << first_iter << ") / __numprocs);\n";
            pre_pragmas << "__start = (" << first_iter << "+ __iter * __taskid) ;\n";
            pre_pragmas << "if (__taskid >= ((" << last_iter << "-" << first_iter << ") % __numprocs)) { __start += ((" << last_iter << "-" << first_iter << ") % __numprocs);}\n";
            pre_pragmas << "__end = __start + __iter;\n";
            pre_pragmas << "if (__taskid == (__numprocs-1)) assert (__end == num_steps);\n";
            break;
        case 1: //detecta el cluster y el distribute, hay schedule
            pre_pragmas << "int __i;\n";
            pre_pragmas << "int __start = " << first_iter << "+ __taskid * chunk;\n";
            pragmas << "int __end =" << last_iter << ";\n";
            pre_pragmas << "int __step = __numprocs * chunk * step;\n";
            break;
        case 2: //copia el bucle for sin schedule
            pragmas << "for (i=__start;i< __end; i++) {\n";
            break;
        case 3: //copia el bucle for con schedule
            pragmas << "for (i=__start;i< __end; i++) {\n";
            pragmas << "\tfor (i=__i;i< (__i+chunk*step); i++) {\n";
            break;
        case 4: //cierra el for con schedule
            pragmas << "\t}\n";
            break;
        }
    }

    void write_MPI_Funcion(std::string texto, int state){
        switch (state)
        {
        case 0:
            variables << texto;
            break;
        case 1:
            c_pre_sec << texto;
            break;
        case 2:
            write_MPI_pre();
            analyze_Pragma(texto);
            write_MPI_pos();
            break;
        case 3:
            c_pos_sec << texto;
            logFile << "estoy en caso 3 metiendo: " << texto;
            break;
        case 4:
            fin << texto;
            break;
        }
    
    }

    std::string print_MPI_Funcion(){
        return variables.str() + sec_pre_inic.str() + c_pre_sec.str() + sec_pre_fin.str() + pre_pragmas.str() + pragmas.str() + sec_pos_inic.str() + c_pos_sec.str() + sec_pos_fin.str() + fin.str();
    }

    ~MPI_Funcion() {}
};

class MPI_Writer
{
private:
    std::ostringstream includes, globales, variables, sec_pre_inic, c_pre_sec, sec_pre_fin, pre_pragmas, pragmas, sec_pos_inic, c_pos_sec, sec_pos_fin, fin;
    std::vector<std::unique_ptr<MPI_Funcion>> funciones;
    std::ostringstream texto;
    vector<const char *> args;
    std::vector<const char *> argsReduceOps;
    std::vector<const char *> argsReduceVars;

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


public:
    string aMayuscula(string cadena) {
      for (string::size_type i = 0; i < cadena.length(); i++) cadena[i] = toupper(cadena[i]);
      return cadena;
    }

    string aMinuscula(string cadena) {
      for (string::size_type i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
      return cadena;
    }

    void addArg(const char *arg){
        args.push_back(arg);
    }

    //HACER
    string translateTypes(string type) {
        cout << type << endl;
        string typeRes = "MPI";
        vector<string> parts;

        for (int i = 0; i < type.size(); i++) {
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

                for (int j = 0; j < parts.size(); j++) {
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

        for (int i = 0; i < parts.size(); i++) {
            typeRes += ("_" + parts.at(i));
            fprintf(stderr, "MPI TIPO EN BCAST: %s\n", parts.at(i));
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

    void MPIBroad(){
    	string broad = "";
        for(const auto& arg : args){
    		SymbolInfo *sim = table.getSymbolInfo(arg);
    		if(sim->isArray()){
    			broad += "\tMPI_Bcast(" + string(arg) + ", " + sim->getSizeList() + ", " + translateTypes(sim->getVariableType())  + ", 0, MPI_COMM_WORLD);\n";
    		}
    		else{
    			broad += "\tMPI_Bcast(&" + string(arg) + ", 1, " + translateTypes(sim->getVariableType()) + ", 0, MPI_COMM_WORLD);\n";
    		}
    	}
    	pre_pragmas << broad << endl;
        args.clear();
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
                for (int k = 0; k < j; k++) {
                    indentacion += "\t";
                }

                alloc += (indentacion + "for (int __alloc" + std::to_string(j-2) + " = 0; __alloc" + std::to_string(j-2) 
                + " < " + values.at(j) + "; __alloc" + std::to_string(j-2) + "++) {\n");

                alloc += "\t" + indentacion + values.at(0);

                for (int k = 0; k < j - 1; k++) {
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

            pre_pragmas  << alloc << endl;

            alloc = "";
        }

        args.clear();
    }

    std::string calcularReduceFinal() {
        std::string finalReduce = "";

        if (argsReduceOps.size() != argsReduceVars.size()) {
            return finalReduce;
        }

        for (long unsigned int i = 0; i < argsReduceOps.size(); i++) {
            string opMPI;
            if (strcmp(argsReduceOps.at(i), "+") == 0) {
                opMPI = "MPI_SUM";
            }
            else if (strcmp(argsReduceOps.at(i), "*") == 0) {
                opMPI = "MPI_PROD";
            }
            else if (strcmp(argsReduceOps.at(i), "MAX") == 0) {
                opMPI = "MPI_MAX";
            }
            else if (strcmp(argsReduceOps.at(i), "MIN") == 0) {
                opMPI = "MPI_MIN";
            }
            else if (strcmp(argsReduceOps.at(i), "&") == 0) {
                opMPI = "MPI_LAND";
            }
            else if (strcmp(argsReduceOps.at(i), "|") == 0) {
                opMPI = "MPI_LOR";
            }
            else if (strcmp(argsReduceOps.at(i), "^") == 0) {
                opMPI = "MPI_LXOR";
            }
            else {
                exit(20);
            }

            SymbolInfo *infoVar = table.getSymbolInfo(argsReduceVars.at(i));
            std::string toUpper;
            std::string toLower;
            toUpper += infoVar->getVariableType();
            toLower += infoVar->getVariableType();

            for (long unsigned int j = 0; j < infoVar->getVariableType().size(); j++) {
                toUpper.at(j) = toupper(infoVar->getVariableType().at(j));
                toLower.at(j) = tolower(infoVar->getVariableType().at(j));
            }

            finalReduce += (toLower + " __" + argsReduceVars.at(i) + ";\n");
            
            finalReduce = finalReduce + "MPI_Reduce(&" + argsReduceVars.at(i) + ", &__" + argsReduceVars.at(i) + ", 1, " + translateTypes(toUpper) +
             ", " + opMPI + ", 0, MPI_COMM_WORLD);\n";

            finalReduce = finalReduce + "if (__taskid == 0) { " + argsReduceVars.at(i) + " = __" + argsReduceVars.at(i) + "; }\n";
        }

        return finalReduce;
    }

    void MPIScatterChunk() {
        if (args.size() % 2 != 0) {
            fprintf(stderr, "insuficientes argumentos en scatter\n");
            exit(60);
        }
    
        for (int i = 0; i < args.size(); i+=2) {
            vector<string> values = extractValues(args.at(i));
            string chunk = (std::string(args.at(i + 1)));
            if (chunk.find("[") != -1) {
                fprintf(stderr, "chunk de scatter incorrecto\n");
            }
            values.push_back(chunk);
            SymbolInfo * infoVar = table.getSymbolInfo(values.at(0));
    
            string scatter =
                "int __chunk" + infoVar->getSymbolName() + ";\n" +
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
                infoVar->getVariableType() + ", 0, MPI_COMM_WORLD);\n";
            
            pre_pragmas << scatter << endl;
        }

        args.clear();
    }

    void write_MPI_Includes(){
        //logFile << "entro y escribo en includes" << endl;
        includes << "#include <assert.h>\n";
        includes << "#include <mpi.h>\n";
        globales << "\nint __taskid = -1, __numprocs = -1;\n";
    }

    void write_MPI_pre(){
        //logFile << "entro en pre" << endl;
        if (sec_pre_inic.str().empty() && sec_pre_fin.str().empty())
        {
            logFile << "escribo en pre" << endl;
            sec_pre_inic << "MPI_Init(&argc, &argv);\n";
            sec_pre_inic << "MPI_Comm_size(MPI_COMM_WORLD,&__numprocs);\n";
            sec_pre_inic << "MPI_Comm_rank(MPI_COMM_WORLD,&__taskid);\n";
            sec_pre_inic << "Declare_MPI_Types();\n";
            fin << "MPI_Finalize();\n";
            sec_pre_inic << "\nif (__taskid == 0) { \n";
            sec_pre_fin << "}\n";
        }
    }

    void write_MPI_pos(){
        //logFile << "entro en pos" << endl;
        

        if (sec_pos_inic.str().empty() && sec_pos_fin.str().empty())
        {
            if(enReduce) {
                argsReduceOps.push_back("+");
                argsReduceVars.push_back("sum");
                sec_pos_inic << calcularReduceFinal() << "\nif (__taskid == 0) { \n";
                enReduce = false;
            }

            sec_pos_fin << "}\n";
        }
    }

    void write_MPI_Main(std::string texto, int state){
	    //logFile << "entro en writeMain y el state es: " << state << endl;
	    //logFile << "el texto que entra es: " << texto << endl;
        switch (state)
        {
        case 0:
            variables << texto;
            break;
        case 1:
            c_pre_sec << texto;
            break;
        case 2:
	    analyze_Pragma(texto);
            write_MPI_pre();
            write_MPI_pos();
            break;
        case 3:
            c_pos_sec << texto;
            //logFile << "estoy en caso 3 metiendo: " << texto;
            break;
        case 4:
            fin << texto;
            break;
        }
    }

    void MPI_Reduce(bool vars, const char *arg) {
        if (vars) {
            argsReduceVars.push_back(arg);
        }
        else {
            argsReduceOps.push_back(arg);
        }
    }

    void write_Distribute(int state){
        switch (state)
        {
        case 0: //detecta el cluster y el distribute, no hay schedule
            pre_pragmas << "int __iter;\n";
            pre_pragmas << "int __start;\n";
            pre_pragmas << "int __end;\n";
            pre_pragmas << "__iter = ((" << last_iter << " - " << first_iter << ") / __numprocs);\n";
            pre_pragmas << "__start = (" << first_iter << "+ __iter * __taskid) ;\n";
            pre_pragmas << "if (__taskid >= ((" << last_iter << "-" << first_iter << ") % __numprocs)) { __start += ((" << last_iter << "-" << first_iter << ") % __numprocs);}\n";
            pre_pragmas << "__end = __start + __iter;\n";
            pre_pragmas << "if (__taskid == (__numprocs-1)) assert (__end == num_steps);\n";
            break;
        case 1: //detecta el cluster y el distribute, hay schedule
            pre_pragmas << "int __i;\n";
            pre_pragmas << "int __start = " << first_iter << "+ __taskid * chunk;\n";
            pragmas << "int __end =" << last_iter << ";\n";
            pre_pragmas << "int __step = __numprocs * chunk * step;\n";
            break;
        case 2: //copia el bucle for sin schedule
            pragmas << "for (i=__start;i< __end; i++) {\n";
            break;
        case 3: //copia el bucle for con schedule
            pragmas << "for (i=__start;i< __end; i++) {\n";
            pragmas << "\tfor (i=__i;i< (__i+chunk*step); i++) {\n";
            break;
        case 4: //cierra el for con schedule
            pragmas << "\t}\n";
            break;
        }
    }

   void extractForLoop(const string& line) {
        // Expresiones regulares para buscar la inicialización y la condición del bucle for
        regex initRegex(R"(for\s*\(([^;]+);)");
        regex condRegex(R"(;([^;]+);)");

        smatch match;

        // Buscar la inicialización del bucle for
        if (regex_search(line, match, initRegex)) {
            string initialization = match.str(1);
            size_t equalPos = initialization.find('=');

            if (equalPos != string::npos) {
                size_t startPos = initialization.find_first_not_of(" \t", equalPos + 1);
                if (startPos != string::npos) {
                    size_t endPos = initialization.find_first_of(" \t;", startPos);
                    if (endPos == string::npos) {
                        endPos = initialization.size();
                    }
                    first_iter = initialization.substr(startPos, endPos - startPos);
                    //logFile << "Valor de first_iter: " << first_iter << endl;
                }
            }
        }

        // Buscar la condición del bucle for
        if (regex_search(line, match, condRegex)) {
            string condition = match.str(1);
            size_t greaterLessPos = condition.find_first_of("><");
            //logFile << "entro en  last_iter: " << endl;

            if (greaterLessPos != string::npos) {
                size_t startPost = condition.find_first_not_of(" \t", greaterLessPos + 1);
                if (startPost != string::npos) {
                    size_t endPost = condition.find_first_of(" \t;", startPost);
                    if (endPost == string::npos) {
                        endPost = condition.size();
                    }
                    last_iter = condition.substr(startPost, endPost - startPost);
                    //logFile << "Valor de last_iter: " << last_iter << endl;
                }
            }
        }
        
    }    




    void analyze_Pragma(std::string texto){
        logFile << "entro en pragmas y statePragma= " << statePragma << endl;
        switch (statePragma)
        {
        case 0: // ningun cluster visto, se copia
            pragmas << "#" << texto << endl;
            break;
        case 1: // cluster y distribute visto, vemos parallel for SIN schedule
            pragmas << "#" << texto << endl;
            statePragma = 3;
            break;
        case 2: // cluster y distribute visto, vemos parallel for CON schedule
            pragmas << "#" << texto << endl;
            statePragma = 4;
            break;
        case 3: // tiene que copiar el bucle for entero menos el primer for, viene de 1 
            if(saltaFor==true){
                extractForLoop(texto);
                write_Distribute(0);
                write_Distribute(2);
                saltaFor = false;
                //logFile << "he llamado a forloop con: " << texto;
                break;
            }
            pragmas << texto;
            break;
        case 4: // tiene que copiar el bucle for entero menos el primer for, viene de 2
            if(saltaFor==true){
                extractForLoop(texto);
                write_Distribute(1);
                write_Distribute(3);
                //logFile << "he llamado a forloop con: " << texto;
                saltaFor = false;
                break;
            }
            pragmas << texto;
            break;
        case 5: // la ultima llave del for
                 pragmas << texto;
                 logFile << saltaFor << endl;
                 stateFuncion++;

            break;
        case 6: // el bucle del schedule requiere una llave adicional
            write_Distribute(4);
            break;
        }
    }

    void nueva_funcion(){

        funciones.emplace_back(new MPI_Funcion());
    }

    void mpi_write_caracter(std::string caracter, int stateG, int stateF){

        if (caracter == "\n")
        {
            texto << caracter;
            write_MPI_File(texto.str(), stateG, stateF);
            texto = std::ostringstream();

        }
        else
        {
            texto << caracter;   
        }
    }

    void mpi_write_linea(int stateG, int stateF){

        write_MPI_File(texto.str(), stateG, stateF);
        texto = std::ostringstream();
    }


    void write_MPI_File(std::string texto, int stateGlobal, int stateF)
    {
        switch (stateGlobal)
        {
        case 0:
            includes << texto;
            break;
        case 1:
            globales << texto;
            break;
        case 2:
            if (!funciones.empty())
            {
                auto& nuevaFuncion = funciones.back();
                nuevaFuncion->write_MPI_Funcion(texto, stateF);
            }
            break;
        case 3:
            write_MPI_Main(texto, stateF);
            break;
        }
    }

    void generarMPI()
    {
        //logFile << "lanzo el generador" << endl;
        generado << includes.str() << globales.str();

        for (auto& funcion : funciones)
        {
            generado << funcion->print_MPI_Funcion();
        }

        generado << variables.str() << sec_pre_inic.str() << c_pre_sec.str() << sec_pre_fin.str() << pre_pragmas.str() << pragmas.str() << sec_pos_inic.str() << c_pos_sec.str() << sec_pos_fin.str() << fin.str();

    }

    ~MPI_Writer()
    {
        funciones.clear();
    }
};

extern MPI_Writer mpi_writer;

#endif
