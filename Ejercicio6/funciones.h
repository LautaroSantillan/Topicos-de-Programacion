#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 20
#define esLetra(X) ((X >= 'a' && X <= 'z') || (X >= 'A' && X <= 'Z'))
#define esPar(X) ((X % 2) == 0)
void codificarPalabra(char *palabra);

#endif // FUNCIONES_H_INCLUDED
