///Ejercicio 10:  Construir una función que reciba una matriz cuadrada de enteros de orden N y
///determine si es simétrica respecto de la diagonal secundaria
#include "funciones.h"

int main() {
    /*int matriz[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };*/ /// => No cumple

    int matriz[N][N] = {
        {1, 2, 3},
        {4, 5, 2},
        {7, 4, 1}
    }; /// => Si cumple

    if (esSimetricaDiagonalSecundaria(matriz))
        printf("La matriz es simetrica respecto a la diagonal secundaria\n");
    else
        printf("La matriz no es simetrica respecto a la diagonal secundaria\n");

    return 0;
}
