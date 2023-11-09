#include "funciones.h"

/*void intercambio(int *x, int *y){
    int w;
    w = *x;
    *x = *y;
    *y = w;
    printf("Despues a: %d, b: %d", x ,y);
}*/

void ingresarFecha(Fecha * f)
{
    puts("Ingrese una fecha (D/M/A): "); //puts imprime cadena de chars y ejecuta saltos de lineas
    scanf("%d / %d / %d", &f->d, &f->m, &f->a);
    while(!esFechaValida(f))
    {
        puts("ERROR en fecha ingresada");
        puts("Ingrese fecha (D/M/A): ");
        scanf("%d / %d / %d", &f->d, &f->m, &f->a);
    }
}

void mostrarFecha(const Fecha* f)
{
    printf("%02d / %02d / %04d", f->d, f->m, f->a);
}

bool esFechaValida (const Fecha *f)
{
    if(f->a >= 1582)
        if(f->m >= 1 && f->m <= 12)
            if(f->d >=1 && f->d <= cantDiasMes(f->m, f->a))
                return true;
    return false;
}

int cantDiasMes(int m, int a)
{
    int dm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2 && esBisiesto(a))
        return 29;
    return dm[m];
}

bool esBisiesto(int a)
{
    return ((a%4==0 && a%100!=0) || a%400==0);
}

Fecha sumarDias(const Fecha* f, const int dias)
{
    Fecha fSuma = *f;
    fSuma.d += dias;
    int cdm;
    while(fSuma.d > (cdm = cantDiasMes(fSuma.m, fSuma.a)))
    {
        fSuma.d -= cdm;
        fSuma.m += 1;
        if(fSuma.m > 12)
        {
            fSuma.a += 1;
            fSuma.m = 1;
        }
    }

    return fSuma;
}

bool compararFechas(const Fecha* f1, const Fecha* f2)
{
    return (f1->d == f2->d && f1->m == f2->m && f1->a == f2->a);
}

Fecha restarDias(const Fecha* f, const int dias)
{
    Fecha fResta = *f;
    fResta.d -= dias;
    int cdm;
    while(fResta.d < 1 )
    {
        cdm = cantDiasMes(fResta.m, fResta.a);
        fResta.d += cdm;
        fResta.m -= 1;
        if(fResta.m < 1)
        {
            fResta.a -= 1;
            fResta.m = 12;
        }
    }

    return fResta;
}

Fecha calcularEdad(const Fecha* f1, const Fecha* f2)
{
    char dias[][13] = {
                        {0, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30},
                        {0, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30}};

    Fecha edad;
    edad = *f2;
    if((edad.d -= f1->d) < 0)
    {
        edad.d += dias[esBisiesto(edad.a)][edad.m];
        edad.m--;
    }
    if((edad.m -= f1->m) < 0)
    {
        edad.m += 12;
        edad.a--;
    }
    edad.a -= f1->a;

    return edad;
}
