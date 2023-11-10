#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define ERROR_ARCH 1
#define ERROR_SINMEM 1
#define TODO_BIEN 0
typedef struct{
    int d;
    int m;
    int a;
}Fecha;
typedef struct{
    int dni;
    char apyn[100];
    char sexo;
    Fecha fnac;
    float sueldo;
}Empleado;
int generarEmpleados(char *ruta);
typedef void (*BinaTxt)(const void *reg, FILE *archt);
int archBinaTxt(const char *narchb, const char *narcht, size_t tamreg, BinaTxt binatxt);
void empBinaTxtV(const void *reg, FILE *archt);
void empBinaTxtF(const void *reg, FILE *archt);

#endif // FUNCIONES_H_INCLUDED
