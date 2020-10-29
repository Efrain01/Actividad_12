#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main(){
    ArregloDinamico arreglo;
    arreglo.insertar_final("dijo");
    arreglo.insertar_final("esa");
    arreglo.insertar_final("mentira");
    arreglo.insertar_final("que");
    arreglo.insertar_final("eras");
    arreglo.insertar_final("facil");
    arreglo.insertar_final("de");
    arreglo.insertar_final("olvidar");

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl<<endl;
    arreglo.insertar_inicio("te");
    arreglo.insertar_inicio("Quien");

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
}