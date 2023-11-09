#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void intercambio(int *, int *);

typedef int t_entero;

typedef struct
{
    t_entero edad;
    t_entero dni;
    t_entero legajo;
} t_persona;

typedef struct
{
    int d;
    int m;
    int a;
} Fecha;

void ingresarFecha(Fecha *); //Lo va a recibir como un puntero

void mostrarFecha(const Fecha *); //Ponemos const en el caso de mostrar cosas y que no vamos a cambiar o alterar el valor

bool esFechaValida (const Fecha *);

int cantDiasMes(int, int);

bool esBisiesto(int);

Fecha sumarDias(const Fecha*, const int);

bool compararFechas(const Fecha*, const Fecha*);

Fecha restarDias(const Fecha*, const int);

Fecha calcularEdad(const Fecha*, const Fecha*);

#endif // FUNCIONES_H_INCLUDED
