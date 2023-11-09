///Ejercicio 6: Se debe considerar que una palabra está formada por letras (sólo considere de la 'a' a la 'z' mayúsculas y/o minúsculas).
///Cualquier otro carácter (incluso vocales con acento o diéresis o las letras 'ñ' y 'Ñ'), son separadores de palabra.
///El texto ha sido codificado del siguiente modo:
///-si la palabra tiene un tamaño par, cada carácter se ha reemplazado por el siguiente, para finalmente invertir la palabra.
///-si la palabra tiene un tamaño impar, en primer lugar se ha invertido la palabra y luego se ha reemplazado cada carácter por el anterior.
///Por ejemplo: “hay unos” resultó en “xZg tpov”.
///Note que el siguiente de 'z' es 'A' y el siguiente de 'Z' es 'a'. Del mismo modo, el anterior de 'A' es 'z' y el anterior de 'a' es 'Z'.
#include "funciones.h"

int main() {
    char texto[] = "hay unos";
    char palabra[TAM];
    int i = 0, j;

    while(texto[i] != '\0') {
        j = 0;
        while (texto[i] != ' ' && texto[i] != '\0') {
            palabra[j] = texto[i];
            i++;
            j++;
        }
        palabra[j] = '\0';
        codificarPalabra(palabra);
        printf("%s ", palabra);
        if(texto[i] != '\0')
            i++;
    }
    printf("\n");
    return 0;
}
