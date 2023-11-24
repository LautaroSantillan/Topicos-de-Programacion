#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TODO_OK 0
#define ERROR 1
#define CANT_EMPL 5
#define CANT_ESTU 5
#define TAM_LINEA 100
typedef struct{
    int DNI;
    char apellido[30];
    char nombre[30];
    double sueldo;
}Empleado;
typedef struct{
    int DNI;
    char apellido[30];
    char nombre[30];
    float promedio;
}Estudiante;
int generarEmpleados(char *);
void ordenarEmpleados(Empleado emp[], int);
int generarEstudiantes();
void ordenarEstudiantes(Estudiante est[], int);
int actualizarSueldo(char *, char *);
void trozar(char *, Estudiante *);
int mostrarArchivo(char *ruta);

#endif // FUNCIONES_H_INCLUDED
