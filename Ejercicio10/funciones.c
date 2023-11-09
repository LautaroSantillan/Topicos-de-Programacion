#include "funciones.h"

int esSimetricaDiagonalSecundaria(int matriz[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matriz[i][j] != matriz[N - 1 - j][N - 1 - i])
                return NO_SIMETRICA;
        }
    }
    return SIMETRICA;
}
