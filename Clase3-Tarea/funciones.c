#include "funciones.h"

void insertarOrdenado (int * v, int *ce, int elem, int tam)
{
    int i, aux2;
    int aux = elem;


    v += (tam == *ce) ? (*ce)-1 : *ce; // Corremos el puntero a la ultima posicion del vector.
                                         // En caso de que el vector este lleno, se desplaza una posicion anterior a la ultima.
    for (i = *ce - 1; i >= ce - 1; i--)
    {

      if(v[i] > aux)
      {
          aux2 = *(v + 1);
          *v = *(v + 1);
          *v = aux;
      }

       v ++;
    }


    if(tam != ce)
      *ce+=1;
}

void mostrarVector(int * vec, int ce)
{
  int i;

  for(i=0; i < ce; i++)
  {
    printf("%d\t", *vec);
    vec++;
  }
}

void insertarElementoPos(int * vec, int elem, int pos, int *ce, int tam)
{

    int i;

    vec += (tam == *ce) ? (*ce)-1 : *ce; // Corremos el puntero a la ultima posicion del vector.
                                         // En caso de que el vector este lleno, se desplaza una posicion anterior a la ultima.
    for (i = *ce - 1; i >= pos - 1; i--)
    {
      *vec = *(vec - 1); // Muevo el contenido una posicion
      vec --;
    }

    *vec = elem;

    if(tam != *ce)
      *ce+=1;
}

void ordenamientoBurbujeo (int * v, int *ce)
{


    int i, j, indMenor, aux;
    for(i=0; i < ce; i++)
    {
        indMenor = i;
        for(j= i + 1; j < ce; j++)
        {
            if(v[j] < v[indMenor])
                indMenor = j;
        }
        if(indMenor != i)
        {
            aux = v[i];
            v[i] = v[indMenor];
            v[indMenor] = aux;
        }
    }
}

void eliminarPrimeraOcurrencia(int *v, int ce)
{
    int i, posElim;
    for(i = 0 ; i < ce-1; i++)
    {
        if(v[i] == v[i+1])
            posElim = i;
    }
    for(i = posElim+1; i < ce-1; i++)
        v[i] = v[i+1];
    mostrarVector(v, ce-1);
}

void eliminarTodasLasOcurrencias(int *v, int ce)
{
    int i, j = 0, posElim, cont = 0;
    for(i = 0 ; i < ce-1; i++)
    {
        if(v[i] == v[i+1])
            cont += 1;
    }
    while(cont != 0)
    {
        for(i = 0 ; i < ce-1; i++)
        {
            if(v[i] == v[i+1])
            {
                posElim = i;
                eliminaOcurrencia(v, ce, posElim);
                eliminaOcurrencia(v, ce, posElim);
            }
        }
        j++;
        cont--;
    }
    mostrarVector(v, ce-j*2);
}

void eliminaOcurrencia(int *v, int ce, int pos)
{
    int i;
    for(i = pos; i < ce-1; i++)
            v[i] = v[i+1];
}
