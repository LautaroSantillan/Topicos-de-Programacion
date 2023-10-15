#include "funciones.h"

void crearLista( Lista *pl)
{
    pl->ce=0;
    pl->cap = CAP;
}

int insertarEnOrden(Lista *pl, int elem)
{
    if (pl->ce == pl->cap) // Vector LLeno
        return 0;
    int * ini = pl->vec;
    int * fin = pl->vec + pl->ce -1;
    while( ini<= fin && elem > *ini)
        ini++;
    if(ini<= fin && elem == *ini)
        return 0; // Sale por duplicado
    int *j;
    for(j=fin ; j>= ini; j--)
        *(j+1)= *j;
    *ini = elem;
    pl->ce++;
    return 1;
}

int eliminarOrdenado(Lista *pl, int elem)
{
    if(pl->ce == 0)
        return 0; // Vector vacio
    int *ini = pl->vec;
    int *ult = pl->vec+pl->ce -1;
    while (ini <= ult && elem >*ini)
        ini++;
    if(ini>ult || elem!=*ini)  /// NO ENCUENTRA ELEMENTO
        return 0;
    int *j;
    for(j=ini; j<ult; j++)
        *j = *(j+1);
    pl->ce--;
    return 1;

}

void mostrar(Lista *pl)
{
    int *ini = pl->vec;
    int *fin = pl->vec + pl->ce -1;
    while(ini<=fin)
    {
        printf("%d \t",*ini);
        ini++;
    }
}

int insertarInicio(Lista *pl, int elem)
{
    if (pl->ce == pl->cap) // Vector LLeno
        return 0;
    int * ini = pl->vec;
    int * aux = pl->vec;
    int * fin = pl->vec + pl->ce -1;
    while( ini <= fin)
    {
        ini++;
        if(elem == *ini)
            return 0;
    } // Sale por duplicado
    int *j;
    for(j=fin ; j>= ini; j--)
        *(j+1)= *j;
    *aux = elem;
    pl->ce++;
    return 1;
}
