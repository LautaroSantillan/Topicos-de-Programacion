///Ejercicio 6: Se debe considerar que una palabra est� formada por letras (s�lo considere de la 'a' a la 'z' may�sculas y/o min�sculas).
///Cualquier otro car�cter (incluso vocales con acento o di�resis o las letras '�' y '�'), son separadores de palabra.
///El texto ha sido codificado del siguiente modo:
///-si la palabra tiene un tama�o par, cada car�cter se ha reemplazado por el siguiente, para finalmente invertir la palabra.
///-si la palabra tiene un tama�o impar, en primer lugar se ha invertido la palabra y luego se ha reemplazado cada car�cter por el anterior.
///Por ejemplo: �hay unos� result� en �xZg tpov�.
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
