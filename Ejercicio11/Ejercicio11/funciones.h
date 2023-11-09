#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TODO_OK 1
#define ERROR 0
#define CANT_PRODS 15
typedef struct {
    int NRO_PEDIDO;
    int NRO_ARTICULO;
    int CANTIDAD_PEDIDA;
    float PRECIO_UNITARIO;
}Articulo;
int generarProductos(char *r);
int mostrarArchivo(const char *r);
int procesarArchivo(char *r1, char *r2, char *r3);

#endif // FUNCIONES_H_INCLUDED
