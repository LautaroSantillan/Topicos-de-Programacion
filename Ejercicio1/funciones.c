#include "funciones.h"

int eliminar(char *cadena, const char *charEliminar) {
    int i,j, cantEliminados = 0, eliminar;
    int longitud = strlen(cadena);

    for (i = 0; i < longitud; i++) {
        eliminar = 0;
        for (j = 0; charEliminar[j] != '\0'; j++) {
            if (cadena[i] == charEliminar[j])
                eliminar = 1;
        }
        if (eliminar) {
            cantEliminados++;
        } else
            cadena[i - cantEliminados] = cadena[i];
    }
    cadena[longitud - cantEliminados] = '\0';

    return cantEliminados;
}
