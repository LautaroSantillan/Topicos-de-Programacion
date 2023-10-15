#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int *, int);
int comparar_enteros(const void *, const void *);
int comparar_dni(const void *, const void *);
int comparar_apellido_y_dni(const void *, const void *);

typedef struct{
    int dni;
    char nya[45];
}T_Alumno;

#endif // FUNCIONES_H_INCLUDED
