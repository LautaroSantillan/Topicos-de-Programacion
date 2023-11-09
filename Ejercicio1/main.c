/*
Ejercicio 1: Escriba una función <eliminar> que elimina de la cadena que recibe en su primer argumento
(modificándola) los caracteres que recibe en su segundo argumento, y que devuelva la cantidad de caracteres eliminados.
Por Ejemplo:
"Algo que se me ocurrió", "aeiou" --> 	"Alg q s m crró"     	devuelve 8.
"Algo que se me ocurrió", "aeiouAEIOUáéíóú" -->     "lg q s m crr"         devuelve 10.
"Algo que se me ocurrió", "EIOU " -->     "Algo que se me ocurrió"         devuelve 0.
*/
#include "funciones.h"

int main() {
    int eliminados;
    ///Ejemplo 1
    /*char cadena[] = "Algo que se me ocurrió";
    const char charEliminar[] = "aeiou";*/

    ///Ejemplo 2
    //char cadena[] = "Algo que se me ocurrió";
    //const char charEliminar[] = "aeiouAEIOUáéíóú";

    ///Ejemplo 3
    char cadena[] = "Algo que se me ocurrió";
    const char charEliminar[] = "EIOU";

    eliminados = eliminar(cadena, charEliminar);

    printf("Cadena modificada: %s\n", cadena);
    printf("Caracteres que se eliminaron: %d\n", eliminados);
}
