#ifndef LISTAARISTAS_H
#define LISTAARISTAS_H

#include "arista.h"
#include <string>

struct Node
{
    Arista arista;
    Node* next;
    Node* prev;

    Node(Arista arista);
};

class ListaAristas
{
private:
    int cantElementos;
    Node* first;
    Node* last;

public:
    ListaAristas();

    int search(string nombreDestino);
    Arista insert(Arista nuevaArista ,int pos);
    Arista add(Arista nuevaArista);
    Arista eliminate(Arista elimArista);
    bool exists(Arista arista);
};

#endif // LISTAARISTAS_H
