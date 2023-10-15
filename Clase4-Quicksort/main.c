#include "funciones.h"

int main()
{
    //CON ENTEROS
//    int vec[] = {30, 1, 45, 67, 89, 25, 32, 64, 34, 14};
//    int ce = sizeof(vec)/sizeof(int);
//    mostrarVector(vec, ce);
//    qsort(vec, ce, sizeof(int), comparar_enteros);
//    printf("\n\n");
//    mostrarVector(vec, ce);

    //CON STRUCTS
    T_Alumno alu[]={
        {45175053, "Lautaro Santillan"},
        {45992739, "Nazareno Perez"},
        {24019138, "Marcelo Santillan"},
        {92987329, "Edith Sosa"},
        {33456789, "Matias Mendoza"},
        {22334455, "Pepe Mauro"},
    };

    int ce = sizeof(alu)/sizeof(T_Alumno);
    int i;
    for(i=0; i<ce; i++)
        printf("%d - %s |\n", alu[i].dni, alu[i].nya);
    qsort(alu, ce, sizeof(T_Alumno), comparar_apellido_y_dni);
    printf("\n\n");
    for(i=0; i<ce; i++)
        printf("%d - %s |\n", alu[i].dni, alu[i].nya);

    return 0;
}
