#include "funciones.h"

void mostrarMatriz(int matriz[][COLUMNAS], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("  %d  ", matriz[i][j]);
            if (j < columnas - 1)
                printf("-");
        }
        printf("\n");
    }
}

void guardarMatrizEnEspiral(int matriz[][COLUMNAS], int filas, int columnas, int resultado[FILAS][COLUMNAS]) {
    int i;
    int fila_inicio = 0;
    int fila_fin = filas - 1;
    int columna_inicio = 0;
    int columna_fin = columnas - 1;
    int valor = 1;

    while (fila_inicio <= fila_fin && columna_inicio <= columna_fin) { /// Guardar la fila superior
        for (i = columna_inicio; i <= columna_fin; i++)
            resultado[fila_inicio][i] = valor++;
        fila_inicio++;

        for (i = fila_inicio; i <= fila_fin; i++) /// Guardar la columna derecha
            resultado[i][columna_fin] = valor++;
        columna_fin--;

        if (fila_inicio <= fila_fin) { /// Guardar la fila inferior (si aún queda)
            for (int i = columna_fin; i >= columna_inicio; i--)
                resultado[fila_fin][i] = valor++;
            fila_fin--;
        }

        if (columna_inicio <= columna_fin) { /// Guardar la columna izquierda (si aún queda)
            for (i = fila_fin; i >= fila_inicio; i--)
                resultado[i][columna_inicio] = valor++;
            columna_inicio++;
        }
    }
}
