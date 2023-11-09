#include "funciones.h"

int main()
{
    estudiante est[]={
        {45175053, "Lautaro", "Santillan"},
        {24019138, "Marcelo", "Enrrique"},
        {92985739, "Edith", "Delgado"},
        {44112358, "Cristiano", "Gomez"},
        {28175153, "Lola", "Menes"},
        {48998745, "Tobias", "Perez"},
    };
    estudiante menor_30[10]; //estruc para regs
    estudiante *pmenor_30 = menor_30;
    int ce = sizeof(est)/sizeof(estudiante); //cant regs
    int cant_30; //cant regs menores a 30mill en el dni
    procesarEstudiantes(est, ce, menor_30, guardar, &cant_30);
    for(int i=0;i<cant_30;i++)
    {
        mostrar(menor_30[i]);
        pmenor_30++;
    }

    return 0;
}
