#ifndef LISTAVERTICE_H
#define LISTAVERTICE_H

#include "vertice.h"
#include <cstddef>

class ListaVertice
{
public:
    ListaVertice();

    Vertice* array;
    int cantElementos;
    int tamanoArreglo;

    Vertice add(string nombre);
    Vertice insert(string nombre, int pos);
    Vertice obtain(int pos);
    int search(string nombre);
    Vertice eliminatePos(int pos);
    Vertice eliminateVal(string nombre);
    bool isEmpty();
    bool exists(string nombre);
    void doubleArray();
    void decreaseArray();
};

#endif // LISTAVERTICE_H
