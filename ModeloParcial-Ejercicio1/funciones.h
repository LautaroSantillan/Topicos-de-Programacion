#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define ERROR 1
#define TODO_OK 0
#define TAM_LINEA 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char DESC[21];
    int STOCK;
    float PRECIO_UNI;
}T_prod;
typedef struct{
    int COD_PROD;
    int CANT;
}T_pedid;
typedef struct{
    char DESC[21];
    float PRECIO;
}T_prodnu;
int procesarArch(char *n, char *s);
int loteProducto();
int lotePedido();
void trozar(char *linea, T_pedid *reg);


#endif // FUNCIONES_H_INCLUDED
