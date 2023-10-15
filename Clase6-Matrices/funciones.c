#include "funciones.h"

void cargar(int mat[][COLS])
{
    int f,c;
    for(f=0; f<COLS; f++)
    {
        for(c=0; c<COLS; c++)
        {
            printf("Ingrese valor: ");
            scanf("%d", &mat[f][c]);
        }
    }
}

void imprimir(int mat[][COLS])
{
    int f,c;
    for(f=0; f<COLS; f++)
    {
        for(c=0; c<COLS; c++)
        {
            printf("%d\t", mat[f][c]);
        }
        printf("\n");
    }
}

void mostrarDiagonalPrincipal(int mat[][COLS], int cols)
{
    int i;
    for(i=0; i<cols; i++)
        printf("%d\t", mat[i][i]);
}

int sumarDiagonalPrincipal(int mat[][COLS], int cols)
{
    int i, suma=0;
    for(i=0; i<cols; i++)
        suma+=mat[i][i];
    return suma;
}

void mostrarDiagonalSecundaria(int **mat, int cols)
{
    int i;
    for(i=0; i<cols; i++)
        printf("%d\t", mat[i][cols-1-i]);
}

int sumarDiagonalSecundaria(int mat[][COLS], int cols)
{
    int i, suma=0;
    for(i=0; i<cols; i++)
        suma+=mat[i][cols-1-i];
    return suma;
}

int sumaTrianguloSuperiorDiagonalSec(int mat[][COLS], int cols)
{
    int i, suma=0;
    for(i=0; i<cols; i++)
        suma+=mat[i][cols-3-i];
    return suma;
}

int sumaTrianguloInferiorDiagonalSec(int mat[][COLS], int cols)
{
    int i, suma=0;
    for(i=0; i<cols; i++)
        suma+=mat[i][3+i-cols];
    return suma;
}

void ** crearMatriz(int filas, int columnas, size_t tamElem)
{
    //tamElem esta en Bytes
    void **mat = malloc(filas*sizeof(void*));
    if(!mat)
    {
        puts("ERROR sin memoria");
        return NULL;
    }
    void **ult = mat + filas -1;
    void **i;
    for(i=mat; i<=ult; i++)
    {
        *i = malloc(columnas*tamElem);
        if(!i)
        {
            for(void **j=mat; j<i; j++)
                free(*j);
            free(mat);
            puts("ERROR sin memoria");
            return NULL;
        }
    }
    return mat;
}

void destruirMatriz(void **mat, int filas)
{
    void **ult = mat + (filas -1);
    void **i;
    for(i=mat; i<=ult; i++)
        free(*i);
    free(mat);
}

void cargarMatriz(int **mat, int filas, int columnas)
{
    int i, j;
    for(i=0; i<filas; i++)
    {
        for(j=0; j<columnas; j++)
            mat[i][j]=i*4+j+1;
    }
}

void mostrarMatriz(int **mat, int filas, int columnas)
{
    int i, j;
    for(i=0; i<filas; i++)
    {
        for(j=0; j<columnas; j++)
            printf("%d\t", mat[i][j]);
        puts("\n");
    }
}

int Identidad(int mat[][COLS], int cols)
{
    int i,j;
    for(i=0; i<cols; i++)
    {
        for(j=0; j<cols; j++)
        {
            if(j==i && mat[i][j]!=1)
                return 1;
            else if(j!=i && mat[i][j]!=0)
                return 1;
        }
    }
    return 0;
}

void TrasponerPrincipal(int mat[][COLS], int cols)
{
    int i,j,aux=0;
    for(i=0;i<=COLS-1;i++)
    {
        for(j=0;j<=COLS-1;j++)
        {
            if(j!=i)
            {
                aux=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=aux;
            }
        }
    }
}
