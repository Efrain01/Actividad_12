#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

class ArregloDinamico{
    private:
        string *arreglo_dinamico;
        size_t tam;
        size_t cont;
        const static size_t MAX = 5;
        void expandir();
    
    public:
        ArregloDinamico();
        ~ArregloDinamico();
        void insertar_inicio(const string &s);
        void insertar_final(const string &s);
        size_t size();
        string operator[](size_t p){
            return arreglo_dinamico[p];
        }
};

#endif