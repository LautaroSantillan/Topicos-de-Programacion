#include "funciones.h"

void ordenarVecXSeleccion(int *v, int ce)
{
    int *ini = v,
        *fin = v+(ce-1),
        *menor,
        aux;
    while(v!=fin)
    {
        menor = hallarMenor(v, ce);
        if(*menor != *v)
        {
            aux = *v;
            *v = *menor;
            *menor = aux;
        }
        ce--;
        v++;
    }
}

int* hallarMenor(int *v, int ce)
{
    int i, *menor = v;
    for(i=0; i<ce; i++)
    {
        if(*v < *menor)
            menor = v;
        v++;
    }
    return menor;
}

void mostrarVector(int *v, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}
