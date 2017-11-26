#include "grafo.h"

Grafo::Grafo()
{
    listaVertices.ListaVertice();
}

bool Grafo::existeVertice(string nombre)
{
    if(listaVertices.exists(nombre))
        return true;
    return false;
}

Vertice* Grafo::agregarVertice(string nombre)
{
    if(existeVertice(nombre))
        return NULL;
    Vertice* nuevo = new Vertice(nombre);
    listaVertices.add(nombre);
    return nuevo;
}

Vertice* Grafo::eliminarVertice(string nombre)
{
    return listaVertices.eliminateVal(nombre);
}
Vertice* Grafo::obtenerVertice(string nombre)
{
    return listaVertices.obtain(search(nombre));
}
