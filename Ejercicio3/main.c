///* Ejercicio 3: Realizar una funci�n que realice el ordenamiento por burbujeo con aritm�tica de punteros.*/
#include "funciones.h"

int main()
{
    int vec[TAM]={34, 13, 8, 21, 1, 2, 5, 3, 16};
    int ce = TAM;

    puts("Ordenamiento por Burbujeo\n");
    burbujeo(vec, ce);
    mostrarVector(vec, ce);
    return 0;
}
