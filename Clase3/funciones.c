#include "funciones.h"

void cargarVector(int *v, int ce)
{
  int i;

  for(i = 0; i < ce; i++)
  {
    printf("Ingrese elemento en posicion %d:", i);
    scanf("%d", v); // No es necesario el & porque es un puntero (direccion)
    v++;
  }
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

void cargarVector2 (int *v, int *ce)
{
    printf("Ingrese elemento (0 para finalizar la carga):");
    scanf("%d", v);
    while(*v != 0 && *ce < TAM)
    {
      *ce += 1; // (*ce)++; -> aumenta el contenido de puntero
      v++;
      printf("Ingrese elemento (0 para finalizar la carga):");
      scanf("%d", v);
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
