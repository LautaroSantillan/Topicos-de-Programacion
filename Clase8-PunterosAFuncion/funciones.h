#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int dni;
    char nombre[20];
    char apellido[20];
}estudiante;
void mostrar(estudiante *est);
void guardar(estudiante *, int *, void *);
void procesarEstudiantes(estudiante *, int, estudiante *,
                         void guardar(estudiante *, int *, void *),
                         int *);

#endif // FUNCIONES_H_INCLUDED
