#include "funciones.h"

void mostrarVector(int *vec, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\t", *vec);
        vec++;
    }
}

int comparar_enteros(const void *a, const void *b)
{
    return (*(int*)a)-(*(int*)b);
}

int comparar_dni(const void *a, const void *b)
{
    const T_Alumno *a1 = a;
    const T_Alumno *b1 = b;
    return (a1->dni - b1->dni);
}

int comparar_apellido_y_dni(const void *a, const void *b)
{
    const T_Alumno *a1 = a;
    const T_Alumno *b1 = b;
    int result = (strcmp(b1->nya, a1->nya));
    if(result == 0)
        return (a1->dni - b1->dni);
    return result;
}
