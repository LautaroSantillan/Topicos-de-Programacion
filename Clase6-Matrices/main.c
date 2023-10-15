#include "funciones.h"

int main()
{
    //CARGAR Y MOSTRAR MATRIZ
    /*int cols=COLS, res;
    int m[][COLS]={{0}};
    cargar(m);
    puts("\n");
    imprimir(m);

    //MOSTRAR-SUMAR DIAGONAL PRINCIPAL Y MOSTRAR-SUMAR DIAGONAL SECUNDARIA
//    int cols=COLS, suma=0, suma2=0, suma3=0, suma4=0;
//    int mat[][COLS]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//    imprimir(mat);
//    puts("\n");
//    mostrarDiagonalPrincipal(mat, cols);
//    suma=sumarDiagonalPrincipal(mat, cols);
//    puts("\n");
//    printf("\nLa suma de la diagonal principal es: %d", suma);
//    puts("\n");
//    mostrarDiagonalSecundaria(mat, cols);
//    suma2=sumarDiagonalSecundaria(mat, cols);
//    puts("\n");
//    printf("\nLa suma de la diagonal secundaria es: %d", suma2);
//    suma3=sumaTrianguloSuperiorDiagonalSec(mat, cols);
//    puts("\n");
//    printf("\nLa suma del triangulo superior respecto de la diagonal secundaria es: %d", suma3);
//    suma4=sumaTrianguloInferiorDiagonalSec(mat, cols);
//    puts("\n");
//    printf("\nLa suma del triangulo inferior respecto de la diagonal secundaria es: %d", suma4);

    //MATRICES DINAMICAS
    //int filas = 4, columnas = 4;
    //int filas, columnas;
    //printf("Insertar cuantas filas quiere: ");
    //scanf("%d", &filas);
    //printf("Insertar cuantas columnas quiere: ");
    //scanf("%d", &columnas);
    //puts("\n");
    //int **matriz = (int**)crearMatriz(filas, columnas, sizeof(int));
    //cargarMatriz(matriz, filas, columnas);
    //mostrarMatriz(matriz, filas, columnas);
    //puts("\n");
    //mostrarDiagonalSecundaria(matriz, columnas);
    //destruirMatriz((void**)matriz, filas);

    // ¿Es matriz Identidad?
    /*int cols=COLS, res;
    int m[][COLS]={{0}};
    cargar(m);
    puts("\n");
    imprimir(m);
    res=Identidad(m, cols);
    if(res==0)
        printf("\nEs identidad");
    else
        printf("\nNo es identidad");*/


    int cols=COLS, res;
    int m[][COLS]={{0}};
    //int mt[][COLS]={{0}};
    cargar(m);
    puts("\n");
    imprimir(m);
    puts("\nMatriz Traspuesta");
    int i,j,aux=0;
    for(i=0;i<=COLS-1;i++)
    {
        for(j=0;j<=COLS-1;j++)
        {
            if(j!=i)
            {
                aux=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=aux;
            }
        }
    }
    imprimir(m);

    return 0;
}
