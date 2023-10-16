#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 8
#include <stdio.h>
#include <stdlib.h>

void insertarOrdenado (int *,int *, int, int);
void mostrarVector(int *, int);
void insertarElementoPos(int *, int, int, int *, int);
void ordenamientoBurbujeo (int *, int *);

void eliminarPrimeraOcurrencia(int *, int);
void eliminarTodasLasOcurrencias(int *, int);
void eliminaOcurrencia(int *, int, int);

#endif // FUNCIONES_H_INCLUDED
