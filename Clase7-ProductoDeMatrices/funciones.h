#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void ** crearMatriz ( size_t cantFilas, size_t cantColumnas, size_t tamElem);
void destruirMatriz ( void** mat, size_t filas);
void cargarMatriz (int ** mat, size_t filas, size_t columnas);
void cargarMatriz2 (int ** mat, size_t filas, size_t columnas);
void mostrarMatriz (int ** mat, size_t filas, size_t columnas);
int  ** productoMatrices(int** m1, int** m2, int filM1, int colM1filM2, int colM2);

#endif // FUNCIONES_H_INCLUDED
