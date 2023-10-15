#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct {
 int *vec;
 int ce;
 int cap;
}Lista;

int crearLista( Lista *pl);

int insertarEnOrden(Lista *pl, int elem);

void mostrar(Lista *pl);

int eliminarOrdenado(Lista *pl, int elem);

void destruirLista( Lista *pl);

#endif // FUNCIONES_H_INCLUDED
