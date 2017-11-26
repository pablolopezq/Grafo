#include "listaaristas.h"
#include <cstddef>

ListaAristas::ListaAristas()
{
    this->first = NULL;
    this->last = NULL;
    cantElementos = 0;
}

Node::Node(Arista arista)
{
    this->arista = arista;
    this->next = NULL;
    this->prev = NULL;
}

Arista ListaAristas::insert(Arista nuevaArista ,int pos)
{
    if(pos < 0 || pos > cantElementos)
            return -1;
        Node* nuevo = new Node(nuevaArista);
        if(pos == 0)
        {
            nuevo->next = first;
            first = nuevo;
        }
        else if(pos == cantElementos)
        {
            nuevo->prev = last;
            last = nuevo;
        }
        else
        {
            Node* tmp = first;
            for(int i = 0; i < pos; i++)
            {
                tmp = tmp->next;
            }
            tmp->prev->next = nuevo;
            nuevo->prev = tmp->prev;
            nuevo->next = tmp;
            tmp->prev = nuevo;
        }
        cantElementos;
        return nuevo->arista;
}

Arista ListaAristas::add(Arista nuevaArista)
{
    return insert(nuevaArista, cantElementos);
}

Arista ListaAristas::eliminate(Arista elimArista)
{
    if(pos < 0 || pos >= cantElementos)
            return -1;
        Node* eliminate;
        if(pos == 0)
        {
            eliminate = first;
            first = first->next;
            if(cantElementos = 1)
                last = NULL;
        }
        else
        {
            Node* tmp = first;
            for(int i = 0; i < pos; i++)
            {
                tmp = tmp->next;
            }
            eliminate = tmp;
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
        }
        Node* retorno = eliminate->value;
        delete eliminate;
        return retorno->arista;
}
bool ListaAristas::exists(Arista arista)
{
    Node* tmp = first;
    for(int i = 0; i < cantElementos; i++)
    {
        if(tmp->arista.destino->nombre == arista.destino->nombre)
            return true;
        tmp = tmp->next;
    }
    return false;
}
