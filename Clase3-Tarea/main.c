#include "funciones.h"

int main()
{
//    int ce = 4;
//    int vec[TAM] = {1, 97, 9, 14};  // 1  8  9  14  97
//    int elem, pos = 2;
//
//    printf("Escriba el elemento a insertar: ");
//    scanf("%d",&elem);
//
//    mostrarVector(vec, ce);
//    ordenamientoBurbujeo (vec, ce);
//    printf("\n");
//    mostrarVector(vec, ce);
//    printf("\n");
//
//    insertarOrdenado (vec, ce, elem, TAM);
//
//    //insertarElementoPos(vec, elem, pos, &ce, TAM);
//    //mostrarVector(vec, ce);
//    mostrarVector(vec, ce);

    //ELIMINAR LA 1° OCURRENCIA
//    int vec[TAM] = {1, 3, 10, 15, 8, 8, 4, 11};
//    int ce = 8;
//    mostrarVector(vec, ce);
//    puts("\n\n");
//    eliminarPrimeraOcurrencia(vec, ce);

    //ELIMINAR TODAS LAS OCURRENCIAS
    int vec[TAM] = {1, 1, 8, 12, 12, 11, 11, 18};
    int ce = 8;
    mostrarVector(vec, ce);
    puts("\n\n");
    eliminarTodasLasOcurrencias(vec, ce);

    return 0;
}
