#include "listavertice.h"

ListaVertice::ListaVertice()
{
    array = new Vertice[5];
    cantElementos = 0;
    tamanoArreglo = 5;
}

Vertice ListaVertice::obtain(int pos)
{
    return array[pos];
}

int ListaVertice::search(string nombre)
{
    for(int i = 0; i < cantElementos; i++)
        {
            if(nombre == array[i].nombre)
                return i;
        }
        return -1;
}

bool ListaVertice::exists(string nombre)
{
    if(search(nombre) == -1)
        return true;
    return false;
}

bool ListaVertice::isEmpty()
{
    if(cantElementos == 0)
        return true;
    return false;
}

Vertice ListaVertice::eliminatePos(int pos)
{
    Vertice retorno = Vertice("empty");
    if(pos >= cantElementos || pos < 0)
            return retorno;
        retorno = array[pos];
        for(int i = pos; i < cantElementos - 1; i++)
        {
            array[i] = array[i+1];
        }
        cantElementos--;
        return retorno;
}

Vertice ListaVertice::eliminateVal(string nombre)
{
    Vertice retorno = Vertice("empty");
    int pos = search(nombre);
    if(pos == -1)
        return retorno;
    else
        return eliminatePos(pos);
}

void ListaVertice::doubleArray()
{
    Vertice* tmp = new Vertice[tamanoArreglo*2];
    for(int i = 0; i < cantElementos; i++)
    {
        tmp[i] = array[i];
    }
    delete[] array;
    array = tmp;
    tamanoArreglo = tamanoArreglo*2;
}

void ListaVertice::decreaseArray()
{
    Vertice* tmp = new Vertice[tamanoArreglo*(2/3)];
    for(int i = 0; i < cantElementos; i++)
    {
        tmp[i] = array[i];
    }
    delete[] array;
    array = tmp;
    tamanoArreglo = tamanoArreglo*(2/3);
}

Vertice ListaVertice::insert(string nombre, int pos)
{
    Vertice tmp = Vertice("empty");
    if(pos > cantElementos || pos < 0)
        return tmp;
    if(cantElementos == tamanoArreglo)
        doubleArray();
    tmp.setNombre(nombre);
    for(int i = cantElementos; i > pos; i--)
    {
        array[i] = array[i-1];
    }
    array[pos] = tmp;
    cantElementos++;
    return tmp;
}

Vertice ListaVertice::add(string nombre)
{
    return insert(nombre, cantElementos);
}
