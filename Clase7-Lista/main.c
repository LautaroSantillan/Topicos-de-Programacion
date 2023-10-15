#include "funciones.h"

int main()
{
    Lista l;
    crearLista(&l);
    int res;

    insertarEnOrden (&l,2);
    insertarEnOrden (&l,8);
    insertarEnOrden (&l,4);
    insertarEnOrden (&l,11);
    insertarEnOrden (&l,7);
    insertarEnOrden (&l,9);
    insertarEnOrden (&l,13);

    mostrar(&l);

    puts("\n");

    insertarEnPrimeraPos (&l, 10);

    mostrar(&l);

    puts("\n");

    eliminarOrdenado(&l,8);

    mostrar(&l);

    res = buscarElemento (&l,13);

    puts("\n");

    if(res == 0)
        printf("El vector esta vacio o no se encontro el elemento\n");
    else
        printf("Se encontro el elemento\n");


    return 0;
}
