#ifndef WRITER_H
#define WRITER_H


#include <iostream>
#include <string.h>
#include <cstdio>
#include <fstream>

using namespace std;

extern ofstream output;

int statementZone = 0;
int zonaPragma = 0;
int finalizeOK = 0;
int task = 0;
int deletePrePragma = 0;
int enFor = 0;

char * _yytext=NULL;
char *linea = NULL;
string guardarLineasDist = "";
char *distVar;
int dist_n_llaves = -100;

extern int n_llaves;
extern int enCluster;
extern int enDistribute;
extern int enReductionCluster;
extern int enReductionDistribute;

extern void MPIEmpezarSecuencial();
extern void finSecuencial();
extern void MPITaskEnd();
extern void MPIDistribute(string ini, string fin);
extern void calcularReduceFinal();

void calcularDistribute(string *ini, string *fin, char **linea);
bool comprobarLlavesCluster(char *linea);

void setYytext(char * yytext) {
    if (_yytext != NULL) {
        free(_yytext);  // Free the previously allocated memory
    }
    _yytext = yytext ? strdup(yytext) : NULL;  // Duplicate yytext_pre1
}

void updateText() {
    if(strcmp(_yytext, "\n") != 0) {
        //Si se lee un for estando en distribute se activa el estado enFor para después traducirlo
        if (enDistribute && strcmp(_yytext, "for") == 0 && enFor == 0) {
            enFor = 1;
        }
        //Si ya se ha traducido la cabecera del for, se sigue en distribute y se lee la variable de control del bucle, se sustituye por la nueva traducida
        if (enDistribute && enFor == -1) {
            if (strcmp(_yytext, distVar) == 0) {
                _yytext = (char *) realloc(_yytext, 10);
                strncpy(_yytext, "__distrib", 10);
            }
        }

        //Se concatena a la linea el token leido
        int size = (linea ? strlen(linea) : 0) + strlen(_yytext) + 1;
        char *addToLinea = new char[size];

        if (linea) {
            strcpy(addToLinea, linea);
            delete[] linea;
        } else {
            addToLinea[0] = '\0';
        }

        strcat(addToLinea, _yytext);
        linea = addToLinea;
    }
    else {
        //Si está en estado for en distribute se traduce la cabecera del for y se guarda el inicio y final del for sin traducir, ya que lo usara MPIDistribute
        if (enFor == 1) {
            string ini = "";
            string fin = "";

            calcularDistribute(&ini, &fin, &linea);

            MPIDistribute(ini, fin);

            output << guardarLineasDist;

            enFor = -1;
        }

        if(zonaPragma == 1 && finalizeOK == 0 && task == 0 ) {
            output << "\tif (__taskid == 0) {\n" << endl;
            zonaPragma = 0;
        }

        //Si esta en distribute pero no se ha llegado a la cabecera del for se guardan las lineas, ya que el objetivo es escribir MPIDistribute
        //y a continuacion todas estas lineas, pero no se puede escribir el distribute hasta que no se haya leido la cabecera del for
        if (enDistribute && enFor == 0) {
            guardarLineasDist += (linea ? linea : "");
        }
        else {
            if(task != 0) {
            
                output << "\t" << (linea ? linea : "") << endl;
                if(strchr(linea, '}') != nullptr){
                    MPITaskEnd();
                    task = 0;
                }
            
            }
            else if(statementZone == 1 && zonaPragma == 0 && finalizeOK == 0) {
                output << (linea ? "\t" + string(linea) : "") << endl;
            }
            else{
                output << (linea ? linea : "") << endl;
            }
        }

        //Si se esta en cluster y no se ha leido todavia una llave pero la linea no esta vacia, se hace que el cluster solo afecte a esta linea
        if (enCluster && n_llaves == 0 && linea) {
            if (comprobarLlavesCluster(linea)) {
                n_llaves = -100;
            }
        }

        /*Si se esta en distribute despues de haber leido el for y no se ha leido ninguna llave se hace que solo afecte a la siguiente linea, ya que significa
        que el for tiene la siguiente forma:
        for (int i = 0; i < x; i++)
            sentencia;
        */
        if (enFor == -1 && dist_n_llaves == 0 && linea) {
            if (comprobarLlavesCluster(linea) && strstr(linea, "for") == NULL) {
                dist_n_llaves = -100;
            }
        }

        delete[] linea;
        linea = NULL;
		deletePrePragma = 0;

        //Si se han leido el mismo numero de llaves de apertura que de cierre estando en cluster y estos dos son mayor que 0, entonces se cierra el cluster
        if (enCluster && n_llaves == -100) {
            if (enReductionCluster)
                calcularReduceFinal();
            MPIEmpezarSecuencial();
            enCluster = 0;
        }
        //Si se han leido el mismo numero de llaves de apertura que de cierre estando en distribute y estos dos son mayor que 0, entonces se cierra el distribute
        if (enDistribute && dist_n_llaves == -100) {
            if (enReductionDistribute)
                calcularReduceFinal();
            enDistribute = 0;
            enFor = 0;
        }
    }
    
}

void lastLine(){
    output << (linea ? linea : "") << endl;
}

//Esta funcion cambia la linea que contiene un for al formato distribute y devuelve los valores de inicio y final del for que había anteriormente
void calcularDistribute(string *ini, string *fin, char **linea) {
    int estado = 0;
    int saltar = 0;
    int activarOperador = 0;
    int activarVarFin = 0;
    string guardarIni = "";
    string guardarFin = "";
    char *guardarInc = (char *) calloc(256, 1);
    int guardIncCont = 0;
    string operacion;

    for (int i = 0; (*linea)[i]; i++) {
        switch(estado) {
            case 0: if ((*linea)[i] == '(') {estado = 1;}
                    break;

            case 1: if (saltar > 0) {saltar--; continue;}
                    if ((*linea)[i] == ';') {
                        if (!activarOperador) {
                            *ini += guardarIni;
                        }
                        if (*ini == "") {
                            activarVarFin = 1;
                        }
                        activarOperador = 0;
                        estado = 2;
                        continue;
                    }

                    if (strncmp((*linea)+i, "int", 3) == 0 && ((*linea)[i + 3] == ' ' || (*linea)[i + 3] == '\t')) {saltar = 2; continue;}
                    if (strncmp((*linea)+i, "long", 4) == 0 && ((*linea)[i + 4] == ' ' || (*linea)[i + 4] == '\t')) {saltar = 3; continue;}
                    if (strncmp((*linea)+i, "short", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}
                    if (strncmp((*linea)+i, "char", 4) == 0 && ((*linea)[i + 4] == ' ' || (*linea)[i + 4] == '\t')) {saltar = 3; continue;}
                    if (strncmp((*linea)+i, "float", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}
                    if (strncmp((*linea)+i, "double", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "register", 8) == 0 && ((*linea)[i + 8] == ' ' || (*linea)[i + 8] == '\t')) {saltar = 7; continue;}
                    if (strncmp((*linea)+i, "signed", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "unsigned", 8) == 0 && ((*linea)[i + 8] == ' ' || (*linea)[i + 8] == '\t')) {saltar = 7; continue;}
                    if (strncmp((*linea)+i, "static", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "const", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}

                    if ((*linea)[i] == '=') {activarOperador = 1; continue;}

                    if (activarOperador) {*ini += (*linea)[i];}
                    else {guardarIni += (*linea)[i];}
                    break;

            case 2: if (saltar > 0) {cout << "No se permite declaracion en la zona de condicion de un bucle" << endl; exit(80);}
                    if ((*linea)[i] == ';') {
                        if (!activarOperador) {
                            cout << "No se permite este tipo de for en distribute" << endl; exit(83);
                        }
                        if (*fin == "") {
                            cout << "No se permite que no haya condicion de parada del bucle en distribute" << endl;
                            exit(82);
                        }
                        if (*ini == "") {
                            cout << "No se ha podido definir un inicio del bucle en distribute" << endl;
                            exit(83);
                        }
                        estado = 3;
                        continue;
                    }

                    if (strncmp((*linea)+i, "int", 3) == 0 && ((*linea)[i + 3] == ' ' || (*linea)[i + 3] == '\t')) {saltar = 2; continue;}
                    if (strncmp((*linea)+i, "long", 4) == 0 && ((*linea)[i + 4] == ' ' || (*linea)[i + 4] == '\t')) {saltar = 3; continue;}
                    if (strncmp((*linea)+i, "short", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}
                    if (strncmp((*linea)+i, "char", 4) == 0 && ((*linea)[i + 4] == ' ' || (*linea)[i + 4] == '\t')) {saltar = 3; continue;}
                    if (strncmp((*linea)+i, "float", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}
                    if (strncmp((*linea)+i, "double", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "register", 8) == 0 && ((*linea)[i + 8] == ' ' || (*linea)[i + 8] == '\t')) {saltar = 7; continue;}
                    if (strncmp((*linea)+i, "signed", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "unsigned", 8) == 0 && ((*linea)[i + 8] == ' ' || (*linea)[i + 8] == '\t')) {saltar = 7; continue;}
                    if (strncmp((*linea)+i, "static", 6) == 0 && ((*linea)[i + 6] == ' ' || (*linea)[i + 6] == '\t')) {saltar = 5; continue;}
                    if (strncmp((*linea)+i, "const", 5) == 0 && ((*linea)[i + 5] == ' ' || (*linea)[i + 5] == '\t')) {saltar = 4; continue;}

                    if ((*linea)[i] == '<' && (*linea)[i + 1] == '=') {activarOperador = 1; i++; activarVarFin = 0; operacion = "<="; continue;}
                    else if ((*linea)[i] == '<') {activarOperador = 1; activarVarFin = 0; operacion = "<"; continue;}
                    if ((*linea)[i] == '>' && (*linea)[i + 1] == '=') {activarOperador = 1; i++; activarVarFin = 0; operacion = ">="; continue;}
                    else if ((*linea)[i] == '>') {activarOperador = 1; activarVarFin = 0; operacion = ">"; continue;}

                    if ((*linea)[i] == '=' && (*linea)[i + 1] == '=') {cout << "No se permite el operador == en distribute" << endl; exit(81);}
                    else if ((*linea)[i] == '=') {cout << "No se permite declaracion en la zona de condicion de un bucle" << endl; exit(80);}
                    if ((*linea)[i] == '!' && (*linea)[i + 1] == '=') {cout << "No se permite el operador == en distribute" << endl; exit(81);}

                    if (activarOperador) {*fin += (*linea)[i];}
                    else {guardarFin += (*linea)[i];}

                    if (activarVarFin) {*ini += (*linea)[i];}
                    break;

            case 3: guardarInc[guardIncCont] = (*linea)[i];
                    guardIncCont++;
                    break;
        }
    }

    distVar = (char *) malloc(guardarFin.size() + 1);
    strcpy(distVar, guardarFin.data());
    distVar[guardarFin.size()] = '\0';
    char * pointerInc;

    if ((pointerInc = strstr(guardarInc, distVar)) == NULL) {
        (*linea) = (char *) realloc((*linea), 49 + operacion.size() + guardIncCont);

        strncpy((*linea), "for (int __distrib = __start; __distrib ", 40);
        strncpy((*linea) + 40, operacion.data(), operacion.size());
        strncpy((*linea) + 40 + operacion.size(), " __end; ", 8);
        strcpy((*linea) + 48 + operacion.size(), guardarInc);
    }
    else {
        (*linea) = (char *) realloc((*linea), 58 + operacion.size() + guardIncCont - strlen(distVar));
        
        strncpy((*linea), "for (int __distrib = __start; __distrib ", 40);
        strncpy((*linea) + 40, operacion.data(), operacion.size());
        strncpy((*linea) + 40 + operacion.size(), " __end; ", 8);
        strncpy((*linea) + 48 + operacion.size(), guardarInc, pointerInc - guardarInc);
        strncpy((*linea) + 48 + operacion.size() + (pointerInc - guardarInc), "__distrib", 9);
        strcpy((*linea) + 57 + operacion.size() + (pointerInc - guardarInc), pointerInc + strlen(distVar));
    }
}

//Esta funcion calcula si en la linea hay algún caracter diferente a espacio, tabulador y salto de linea
bool comprobarLlavesCluster(char *linea) {
    for (int i = 0; i < strlen(linea); i++) {
        if (linea[i] != ' ' && linea[i] != '\t' && linea[i] != '\n') {
            return true;
        }
    }

    return false;
}

#endif
