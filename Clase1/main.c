#include "funciones.h"

int main()
{
    int num;
    double fact;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    fact=Factorial(num);
    printf("%d! = %.2lf", num, fact);

    return 0;
}
