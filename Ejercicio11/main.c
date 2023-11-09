///Ejercicio11: Construir un programa para procesar un archivo de artículos pedidos, cuya estructura de registro es:
///NRO_PEDIDO, NRO_ARTICULO , CANTIDAD_PEDIDA y PRECIO_UNITARIO, ordenado en forma ascendente por NRO_PEDIDO.
///Se pide separar la información en dos archivos: uno con los pedidos que superen los $10.000 y el otro con los restantes.
///Los archivos deben quedar ordenados al final.
#include "funciones.h"

int main(int argc, char *argv[])
{
    generarProductos(argv[1]);
    puts("\t\t---- PRODUCTOS ----\n");
    mostrarArchivo(argv[1]);
    procesarArchivo(argv[1], argv[2], argv[3]);
    puts("\n\t\t---- PRODUCTOS > 10.000 ----\n");
    mostrarArchivo(argv[2]);
    puts("\n\t\t---- PRODUCTOS RESTANTES ----\n");
    mostrarArchivo(argv[3]);

    return 0;
}
