#include "funciones.h"

void mostrarVector(int *v, int ce)
{
    int i;
    for(i = 0; i < ce; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}

void insercion(int *v, int ce)
{
    int i, j, indice;
    for(i = 1; i < ce; i++)
    {
        indice = v[i];
        j = i-1;
        while(j>=0 && v[j] > indice)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = indice;
    }
}
