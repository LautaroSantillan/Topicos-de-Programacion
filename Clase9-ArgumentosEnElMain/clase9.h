#ifndef CLASE9_H_INCLUDED
#define CLASE9_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define TODO_OK 1
#define CANT_PRODS 5
#define CANT_MOV 9

typedef struct
{
    int cod;
    char descripcion[20];
    int stock;
    float precio;
} Producto;

typedef struct
{
    int cod;
    char descripcion[20];
    int cant;
    float precio;
} Movimiento;

int generarProductos(char *);
int generarMovimientos(char *);
int actualizarProductos(char *, char *);
int mostrarArchivo();

#endif // CLASE9_H_INCLUDED
