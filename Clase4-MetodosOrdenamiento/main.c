#include "funciones.h"

int main()
{
    int vec[] = {15, 3, 0, 8, 11, 24, 7, 5};
    int ce = 8;
    mostrarVector(vec, ce);
    ordenarVecXSeleccion(vec, ce);
    puts("\n\n");
    mostrarVector(vec, ce);
    return 0;
}
