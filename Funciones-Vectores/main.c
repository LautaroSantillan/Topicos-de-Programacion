#include "funciones.h"

int main()
{
    //int vec[TAM]={34, 13, 8, 21, 1, 2, 5, 3, 16};
    int vec[TAM]={{0}};
    cargarVector(vec, TAM);
    int ce = sizeof(vec)/sizeof(vec[0]);
    puts("\n");
    puts("Vector sin ordenar");
    mostrarVector(vec, ce);
    //BURBUJEO
    puts("\n\nBurbujeo");
    burbujeo(vec, ce);
    mostrarVector(vec, ce);
    //SELECCION
    puts("\n\nSeleccion");
    ordenarVecXSeleccion(vec, ce);
    mostrarVector(vec, ce);
    //INSERCION
    puts("\n\nInsercion");
    insercion(vec, ce);
    mostrarVector(vec, ce);

    return 0;
}
