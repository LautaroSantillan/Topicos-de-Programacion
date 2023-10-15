#include "funciones.h"

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

void insercion(int *v, int ce)
{
    int i, j, indice;
    for(i=1; i<ce; i++)
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

void mostrarVector(int *v, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}
