#include "vertice.h"

Vertice::Vertice(string nombre)
{
    this->nombre = nombre;
    this->listaAristas = new ListaAristas();
}

Vertice::Vertice()
{

}

void Vertice::setNombre(string nombre)
{
    this->nombre = nombre;
}
