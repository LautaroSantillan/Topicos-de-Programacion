#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//
#define FACTORIAL(X)({ int i, fact=1; \
                        for(i=2;i<=X;i++)\
                            fact*=i;\
                        fact;})
#define PARTE_ENTERA(X) int(X)
#define PARTE_DECIMAL(X) (X)-PARTE_ENTERA(X)
#define CUADRADO(X) (X)*(X)
#define CUBO(X) (X)*CUADRADO(X)
#define REDONDEO(X) ({

#endif // FUNCIONES_H_INCLUDED
