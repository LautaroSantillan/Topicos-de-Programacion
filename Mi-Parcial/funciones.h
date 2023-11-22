#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ERROR 1
#define TODO_OK 0
#define CANT_PROD 3
#define CANT_STOCK 6
#define TAM_LINEA 20
typedef struct{
    char clave[11];
    char desc[50];
    int stock;
}Producto;
typedef struct{
    char clave[11];
    int stock;
}Stock;
size_t mi_Strlen(const char *);
char *mi_Strcpy(char *, const char *);
char *str_rev(char *);
char *str_tit(char *);
char to_lower(char);
char to_upper(char);
int generarProductos();
int actualizarArchProd();
int generarStock();
void burbujeo(Stock st[], int ce);
int actualizarStock();
int mostrarArchivoProd();

#endif // FUNCIONES_H_INCLUDED
