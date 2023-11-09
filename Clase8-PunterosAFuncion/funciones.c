#include "funciones.h"

void mostrar(estudiante *est)
{
    printf("DNI: %d", est->dni);
    printf("Nombre: %s\n", est->nombre);
    printf("Apellido: %s\n", est->apellido);
    puts("\n-----------\n");
}

void guardar(estudiante *menor_30, int *cant_30, void *dato)
{
    memcpy(menor_30+(*cant_30), dato, sizeof(estudiante));
    (*cant_30)++;
}

void procesarEstudiantes(estudiante *p, int ce, estudiante *menor_30,
                         void guardar(estudiante *, int *, void *),
                         int *cant_30)
{
    estudiante *ult = p + ce - 1;
    while(p <= ult)
    {
        if(p->dni <= 30000000)
            guardar(menor_30, cant_30, p);
        p++;
    }
}
