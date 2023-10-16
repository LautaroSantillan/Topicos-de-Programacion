#include "funciones.h"

void cargarVector(int *v, int ce)
{
  int i;
  for(i = 0; i < ce; i++)
  {
    printf("Ingrese elemento en posicion %d: ", i);
    scanf("%d", v); // No es necesario el & porque es un puntero (direccion)
    v++;
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
