///Ejercicio 5: Escribir una función que valide si dos cadenas son anagramas.
///Las diferencias en espacios y signos de puntuación no deben ser tenidas en cuenta.
///Para resolver este ejercicio no debe utilizar funciones de biblioteca.
#include "funciones.h"

int main() {
    char cadena1[] = "iman y amor";
    char cadena2[] = "roma y mani";

    if (sonAnagramas(cadena1, cadena2))
        printf("Las cadenas son anagramas\n");
    else
        printf("Las cadenas no son anagramas\n");

    return 0;
}
