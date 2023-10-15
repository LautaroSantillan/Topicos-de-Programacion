#include "funciones.h"

int main()
{
    int filas = 2;
    int filas2 = 4;
    int columnas =4;
    int columnas2 =3;
    int** matriz = (int**)crearMatriz(filas, columnas, sizeof(int));
    int** matriz2 = (int**)crearMatriz(filas2, columnas2, sizeof(int));
    if(!matriz)
    {
        puts("Sin Memoria");
        return 0;
    }
    if(!matriz2)
    {
        puts("Sin Memoria");
        return 0;
    }
    cargarMatriz(matriz,filas,columnas);
    cargarMatriz2(matriz2,filas2,columnas2);
    mostrarMatriz(matriz,filas,columnas);
    printf("\n");
    mostrarMatriz(matriz2,filas2,columnas2);

    int **matrizResult = productoMatrices(matriz,matriz2,filas,columnas,columnas2);
    printf("\n");
    mostrarMatriz(matrizResult,filas,columnas2);

    destruirMatriz((void**)matriz, filas);
    destruirMatriz((void**)matriz2, filas2);
    destruirMatriz((void**)matrizResult,filas);
    return 0;
}
