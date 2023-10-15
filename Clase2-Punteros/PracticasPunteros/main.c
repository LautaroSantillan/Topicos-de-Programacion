#include "funciones.h"

int main()
{
    /*int x = 4;
    int *p;
    p = &x;


    printf("Direccion de X: %p \n", &x);
    printf("Direccion de p: %p \n", p);
    printf("Contenido de X: %d \n", x);
    printf("Contenido de p: %d \n", *p);

    *p = 20;
    printf("Contenido de X: %d \n", x);
    printf("Contenido de p: %d \n", *p);*/

    /*---------------------------------------------
    int a = 5, b = 8;

    printf("Antes   a: %d, b: %d \n", a, b);

    intercambio(&a, &b);*/

    /*---------------------------------------------
    int a;
    int *pEntero;
    pEntero = &a;
    printf("------------\n");
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("El numero es: %d", a);*/

    /*--------------------------------------------------
    t_persona lautaro;
    t_persona *p = &lautaro; //el puntero va a apuntar a un tipo
                             // de persona de la variable lautaro

    (*p).edad = 19;
    (*p).dni = 45175053;
    (*p).legajo = 68684;*/

    /*p->edad = 19;
    p->dni = 45175053;
    p->legajo = 68684;
    printf("Edad: %d\n", lautaro.edad);
    printf("DNI: %d\n", lautaro.dni);
    printf("Legajo: %d\n", lautaro.legajo);*/


    /* SUMAR DIAS A UNA FECHA
    int dias = 90;
    Fecha fInicio, fSuma;
    ingresarFecha(&fInicio);
    mostrarFecha(&fInicio);
    fSuma = sumarDias(&fInicio, dias);
    printf("\n--------------\n");
    mostrarFecha(&fSuma);*/

    /* COMPARAR DIAS
    Fecha fPrimeraFecha, fSegundaFecha;
    ingresarFecha(&fPrimeraFecha);
    printf("\n-----------\n\n");
    ingresarFecha(&fSegundaFecha);
    if(!compararFechas(&fPrimeraFecha, &fSegundaFecha))
        puts("\nNo son iguales");
    else puts("\nSon iguales");*/

    // RESTAR DIAS A UNA FECHA
//    int dias = 90;
//    Fecha fInicio, fResta;
//    ingresarFecha(&fInicio);
//    mostrarFecha(&fInicio);
//    fResta = restarDias(&fInicio, dias);
//    printf("\n--------------\n");
//    mostrarFecha(&fResta);

    Fecha fHoy, fNac, fResult;
    puts("---FECHA DE HOY---");
    ingresarFecha(&fHoy);
    puts("\n---FECHA DE NACIMIENTO---");
    ingresarFecha(&fNac);
    fResult = calcularEdad(&fHoy, &fNac);
    printf("\n--------------\n");
    mostrarFecha(&fResult);

    return 0;
}
