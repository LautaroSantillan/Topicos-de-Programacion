#include "funciones.h"

void eliminarEspacios(char *cadena) {
    int i, j = 0;
    int longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        if (!isspace(cadena[i]) || (i > 0 && !isspace(cadena[i - 1]))) {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j] = '\0';
}

void normalizarCadena(char *cadena) {
    int i, capitalizar = 1;
    int longitud = strlen(cadena);

    eliminarEspacios(cadena);

    for (i = 0; i < longitud; i++) {
        if (isspace(cadena[i])) {
            capitalizar = 1;
        } else if (capitalizar) {
            cadena[i] = toupper(cadena[i]);
            capitalizar = 0;
        } else
            cadena[i] = tolower(cadena[i]);
    }
}
