#include "funciones.h"

int mi_Strcat(char *cad1, const char *cad2)
{
    int tam = mi_Strlen(cad1);
    int tam2 = mi_Strlen(cad2);
    int tamtot = tam + tam2;
    char *aux;
    int i;
    aux = malloc(sizeof(cad1));
    for(i = 0; i < tamtot; i++)
    {
        if(i < tam2)
           aux[i] = cad2[i];
        else
            aux[i] = cad1[i-tam2];
    }
    strcpy(cad1, aux);
    printf("%s", cad1);
    return TODO_OK;
}

size_t mi_Strlen(const char *s)
{
    size_t cant = 0;
    while(*s)
    {
       cant++;
       s++;
    }
    return cant;
}
