#include "funciones.h"

double Factorial(int n){
    double fact = 1;
    int i;
    for(i=n;i>0;i--)
        fact*=i;

    return fact;
}
