#include "funciones.h"

int main()
{
    ///Ejercicio 1
    generacion_archivo();
    mostrarArch();
    puts("\n--- Alta de un Personal ---\n");
    alta_personal();
    mostrarArch();
    puts("\n--- Consulta Personal ---\n");
    consulta_pesonal();
    puts("\n--- Pasar de .dat a .txt ---\n");
    convertir_archivo();

    ///Ejercicio 2
    puts("\n--- EJERCICIO 2 ---\n");
    int matriz[FIL][COLS]={{0}};
    int resultado = 0;
    cargarMatriz(matriz);
    puts("\n--- MATRIZ ---\n");
    mostrarMatriz(matriz);
    resultado = sumDiagonalPrincipal(matriz);
    resultado += sumDiagonalSecundaria(matriz);
    printf("La suma de los elementos por sobre la diagonal principal y secundaria es de: %d\n", resultado);

    ///Ejercicio 3
    puts("\n--- EJERCICIO 3 ---\n");
    char cad1[]="amor";
    char cad2[]="roma";
    int result = sonAnagramas(cad1, cad2);
    if(result)
        puts("Son anagramas\n");
    else
        puts("No son anagramas\n");

    return 0;
}
