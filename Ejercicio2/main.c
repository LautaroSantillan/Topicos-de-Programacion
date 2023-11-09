///Ejercicio 2: Desarrollar una función que reciba una cadena de caracteres y la normalice.
///Ej.: "	cEnTrO    sUd 	"  ==>  "Centro Sud"
#include "funciones.h"

int main() {
    char cadena[] = "  unIVersIdaD nACioNal   de lA   matanZA  ";
    normalizarCadena(cadena);
    printf("Cadena Final: %s\n", cadena);

    return 0;
}
