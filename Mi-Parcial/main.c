#include "funciones.h"

int main()
{
    generarProductos();
    puts("\nLista de Productos:\n");
    actualizarArchProd();
    puts("\n-----\n");
    mostrarArchivoProd();
    generarStock();
    actualizarStock();
    puts("\n-----\n");
    mostrarArchivoProd();

    return 0;
}
