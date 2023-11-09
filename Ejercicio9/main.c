///Ejercicio 9:  Crear una función que muestre una matriz en espiral. La misma no necesariamente tiene que ser de 3 x 3
#include "funciones.h"

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {9, 8, 7},
        {4, 5, 6},
        {3, 2, 1}
    };
    int matrizEnEspiral[FILAS][COLUMNAS] = {{0}};

    printf("- Matriz original:\n");
    mostrarMatriz(matriz, FILAS, COLUMNAS);

    puts("\n\n");

    guardarMatrizEnEspiral(matriz, FILAS, COLUMNAS, matrizEnEspiral);
    printf("- Matriz en espiral:\n");
    mostrarMatriz(matrizEnEspiral, FILAS, COLUMNAS);

    return 0;
}
