///Ejercicio 4: Realizar una función que realice el ordenamiento por inserción con aritmética de punteros.
#include "funciones.h"

int main()
{
    int vec[TAM]={34, 13, 8, 21, 1, 2, 5, 3, 16};
    int ce = TAM;

    puts("Ordenamiento por Insercion\n");
    insercion(vec, ce);
    mostrarVector(vec, ce);

    return 0;
}
