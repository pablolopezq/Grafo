#include "arista.h"

Arista::Arista(string nombreOrigen, string nombreDestino, int peso)
{
    this->origen = new Vertice(nombreOrigen);
    this->destino = new Vertice(nombreDestino);
    this->peso = peso;
}

void Arista::setPeso(int peso)
{
    this->peso = peso;
}
