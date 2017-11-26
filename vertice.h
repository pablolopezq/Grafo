#ifndef VERTICE_H
#define VERTICE_H

#include <string>
#include "listaaristas.h"

using namespace std;

class Vertice
{
public:
    Vertice(string nombre);
    Vertice();

    void setNombre(string nombre);

    string nombre;
    ListaAristas* listaAristas;
};

#endif // VERTICE_H
