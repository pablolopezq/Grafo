#ifndef ARISTA_H
#define ARISTA_H

#include "vertice.h"

class Arista
{
public:
    Arista(string nombreOrigen, string nombreDestino, int peso);
    void setPeso(int peso);

    Vertice* origen;
    Vertice* destino;
    int peso;
};

#endif // ARISTA_H
