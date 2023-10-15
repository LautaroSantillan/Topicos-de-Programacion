#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define CAP 8

typedef struct {
 int vec[CAP];
 int ce;
 int cap;
}Lista;

void crearLista( Lista *pl);

int insertarEnOrden(Lista *pl, int elem);

void mostrar(Lista *pl);

int eliminarOrdenado(Lista *pl, int elem);

int insertarInicio(Lista *pl, int elem);

#endif // FUNCIONES_H_INCLUDED
