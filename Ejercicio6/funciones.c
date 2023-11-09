#include "funciones.h"

void codificarPalabra(char *palabra) {
    int i, j, longitud = 0;

    for (i = 0; palabra[i] != '\0'; i++) {
        if (esLetra(palabra[i]))
            longitud++;
    }
    for (i = 0; i < longitud; i++) {
        if (esLetra(palabra[i])) {
            if (esPar(longitud)) {
                if (palabra[i] == 'z')
                    palabra[i] = 'A';
                else if (palabra[i] == 'Z')
                    palabra[i] = 'a';
                else
                    palabra[i] = islower(palabra[i]) ? palabra[i] + 1 : palabra[i] - 1;
            } else {
                if (palabra[i] == 'a')
                    palabra[i] = 'Z';
                else if (palabra[i] == 'A')
                    palabra[i] = 'z';
                else
                    palabra[i] = islower(palabra[i]) ? palabra[i] - 1 : palabra[i] + 1;
            }
        }
    }
    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        char temp = palabra[i];
        palabra[i] = palabra[j];
        palabra[j] = temp;
    }
}
