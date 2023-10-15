#include "funciones.h"

int main()
{
    //HACER METODO DE ORDENAMIENTO => BURBUJEO && INSERCION
    int vec[TAM]={34, 13, 8, 21, 1, 2, 5, 3};
    int ce = sizeof(vec)/sizeof(vec[0]);
    puts("Vector sin ordenar");
    mostrarVector(vec, ce);
    puts("\n\nBurbujeo");
    //BURBUJEO
    burbujeo(vec, ce);
    mostrarVector(vec, ce);
    puts("\n\nInsercion");
    /* --------------- */
    //INSERCION
    insercion(vec, ce);
    mostrarVector(vec, ce);

    return 0;
}
