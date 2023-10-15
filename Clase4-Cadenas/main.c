#include "funciones.h"

int main()
{
    char cad[TAM]="hola"; //total 8 bytes => 1 caracter = 1 byte
    char cad2[]=" LAUTI"; // 1 caracter ocupa 1 byte. Implicitamente
                        // 1 caracter para el \0

    char cad3[] = {'H','0','L','A'};

    printf("Tamanio %d\n", sizeof(cad3));
    printf("%s\n", cad3);

    return 0;
}
