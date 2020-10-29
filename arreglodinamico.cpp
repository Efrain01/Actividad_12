#include "arreglodinamico.h"

ArregloDinamico::ArregloDinamico(){
    arreglo_dinamico = new string[MAX];
    cont = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico(){
    delete[] arreglo_dinamico;
}


void ArregloDinamico::insertar_final(const string &s){
    if(cont == tam){
        expandir();
    }
    arreglo_dinamico[cont] = s;
    cont ++;
}

void ArregloDinamico::insertar_inicio(const string &s){
    if(cont == tam){
        expandir();
    }
    for (size_t i = cont; i > 0; i--){
        arreglo_dinamico[i] = arreglo_dinamico[i-1];
    }
    arreglo_dinamico[0] = s;
    cont++;
    
}

void ArregloDinamico::expandir(){
    string *nuevo = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo_dinamico[i];
    }
    delete[] arreglo_dinamico;
    arreglo_dinamico = nuevo;
    tam = tam + MAX;
}

size_t ArregloDinamico::size(){
    return cont;
}