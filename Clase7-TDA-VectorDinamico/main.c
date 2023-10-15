#include "funciones.h"

int main()
{
    Lista l;
    crearLista(&l);
    insertarEnOrden(&l,2);
    insertarEnOrden(&l,5);
    insertarEnOrden(&l,4);
    insertarEnOrden(&l,11);
    insertarEnOrden(&l,7);
    insertarEnOrden(&l,9);
    insertarEnOrden(&l,8);
    insertarEnOrden(&l,15);
    insertarEnOrden(&l,18);
    insertarEnOrden(&l,1);
    insertarEnOrden(&l,99);
    mostrar(&l);
    printf("\n");
    eliminarOrdenado(&l,18);
    mostrar(&l);
    destruirLista(&l);

    return 0;
}
