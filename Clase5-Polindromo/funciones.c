#include "funciones.h"

size_t tamcad(char *cad)
{
    size_t cant = 0;
    for(int i = 0; i < cad[i]; i++)
        cant++;

    return cant;
}

int palindromo(char *cad)
{
    char *ini, *fin;
    int cant = tamcad(cad);
    ini = cad;
    fin = cad + cant - 1;

    while(ini < fin)
    {
        if(*ini == ' ')
            ini++;

        if(*fin == ' ')
            fin--;

        if(*ini != *fin)
            return 1;

        ini++;
        fin--;
    }

    return 0;
}
