#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define COLS 3

void imprimir(int mat[][COLS]);
void cargar(int mat[][COLS]);
void mostrarDiagonalPrincipal(int mat[][COLS], int cols);
int sumarDiagonalPrincipal(int mat[][COLS], int cols);
void mostrarDiagonalSecundaria(int **matriz, int cols);
int sumarDiagonalSecundaria(int mat[][COLS], int cols);
int sumaTrianguloSuperiorDiagonalSec(int mat[][COLS], int cols);
int sumaTrianguloInferiorDiagonalSec(int mat[][COLS], int cols);
void ** crearMatriz(int filas, int columnas, size_t tamElem);
void destruirMatriz(void **mat, int filas);
void cargarMatriz(int **matriz, int filas, int columnas);
void mostrarMatriz(int **matriz, int filas, int columnas);
int Identidad(int mat[][COLS], int cols);
void TrasponerPrincipal(int mat[][COLS], int cols);

#endif // FUNCIONES_H_INCLUDED
