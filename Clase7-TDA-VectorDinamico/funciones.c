#include "funciones.h"

int crearLista( Lista *pl)
{
    pl->vec = (int*)malloc(8*sizeof(int));
    if(!pl->vec)
        return 1;
    pl->ce =0;
    pl->cap = 8;
    return 0;
}

int insertarEnOrden(Lista *pl, int elem)
{
    int ncap;
    int *nvec;
    if (pl->ce == pl->cap) // Vector LLeno
    {
        ncap = pl->cap *2;
        nvec = (int*)realloc(pl->vec, ncap*sizeof(int));
        if(!nvec)
            return 0;
        pl->vec = nvec;
        pl->cap = ncap;
    }
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
    if(pl->ce*3<=pl->cap)
    {
        pl->cap /=2;
        pl->vec = realloc (pl->vec, pl->cap*sizeof(int)) ;
    }

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

void destruirLista( Lista *pl)
{
    free(pl->vec);
}
