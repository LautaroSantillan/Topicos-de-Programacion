#include "funciones.h"

void mostrarVector(int *v, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}

void burbujeo(int *v, int ce)
{
    int i, j, indMenor, aux;
    for(i=0; i<ce; i++)
    {
        indMenor=i;
        for(j=i+1; j<ce; j++)
        {
            if(v[j]<v[indMenor])
                indMenor=j;
        }
        if(indMenor!=i)
        {
            aux=v[i];
            v[i]=v[indMenor];
            v[indMenor]=aux;
        }
    }
}
