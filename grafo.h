#ifndef GRAFO_H
#define GRAFO_H

#include "listavertice.h"

class Grafo
{
private:
    ListaVertice listaVertices;

public:
    Grafo();

    Vertice* agregarVertice(string nombre);
    Vertice* eliminarVertice(string nombre);
    Vertice* obtenerVertice(string nombre);
    bool existeVertice(string nombre);
};

#endif // GRAFO_H
