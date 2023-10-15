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
    mostrar(&l);
    printf("\n");
    eliminarOrdenado(&l,8);
    mostrar(&l);
    insertarInicio(&l,12);
    insertarInicio(&l,15);
    insertarInicio(&l,10);
    mostrar(&l);

    return 0;
}
