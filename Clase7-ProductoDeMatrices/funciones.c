#include "funciones.h"

void ** crearMatriz ( size_t cantFilas, size_t cantColumnas, size_t tamElem)
{
    //tamElem esta en bytes
    void ** mat = malloc ( cantFilas * sizeof(void*));
    // Reservo memoria para todas los punteros a void de filas.
    if(!mat)
        return NULL;
    void **ult = mat + cantFilas -1;
    void **i = mat;
    for (**i; i<=ult; i++)
    {
        *i = malloc(cantColumnas * tamElem);
        if(!*i)
        {
            void**j=mat;
            for(**j; j<i; j++)
                free(*j);
            free(mat); // Si hago solo free de mat libera la primer columna y el resto no.
            return NULL;
        }
    }
    return mat;
}

void destruirMatriz (void** mat, size_t filas)
{
    void **i = mat ;
    void **ult = mat + (filas -1);
    for(**i; i<=ult; i++)
        free(*i);
    free(mat);
}

void cargarMatriz (int ** mat, size_t filas, size_t columnas)
{
    int i, j;
    for(i=0; i <filas; i++)
        for(j=0; j<columnas; j++)
            mat[i][j]=i*4+j+1;
}

void cargarMatriz2 (int ** mat2, size_t filas2, size_t columnas2)
{
    int i, j;
    for(i; i <filas2; i++)
        for(j; j<columnas2; j++)
            mat2[i][j]=i*3+j+1;
}

void mostrarMatriz (int ** mat, size_t filas, size_t columnas)
{
    int i, j;
    for(i; i <filas; i++)
    {
        for(j; j<columnas; j++)
            printf("%d \t", mat[i][j]);
        printf("\n");
    }
}

int** productoMatrices(int** m1, int** m2, int filM1, int colM1filM2, int colM2)
{
    int i, j, k;
    int** matrizResult = (int**)crearMatriz(filM1, colM2, sizeof(int));
    if(!matrizResult)
        return NULL;
    for (i=0; i<filM1 ; i++)
    {
        for (j=0; j<colM2; j++)
        {
            matrizResult[i][j]=0;
            for (k=0; k<colM1filM2; k++)
                matrizResult[i][j]+= m1[i][k]*m2[k][j];
        }
    }
    return matrizResult;
}
