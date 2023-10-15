#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define CAP 8

typedef struct{
int vec[CAP];
int ce;
int cap;
}Lista;

void crearLista(Lista *pl);
int insertarEnOrden (Lista *pl, int elem);
int eliminarOrdenado(Lista *pl, int elem);
int buscarElemento (Lista *pl, int elem);
int insertarEnPrimeraPos (Lista *pl, int elem);
int insertarEnUltPos (Lista *pl, int elem);
void mostrar(Lista *pl);

#endif // FUNCIONES_H_INCLUDED
