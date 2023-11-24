#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 1
#define TODO_OK 0
#define CANT_PERS 8
#define COLS 2
#define FIL 2
typedef struct{
    int DNI; /// 8
    char nomAp[25]; /// 25
    int antiguedad; /// 2
    char baja[2]; /// 2
}Personal;
///Ejercicio 1
int generacion_archivo();
int mostrarArch();
int consulta_pesonal();
int tamanio_arch();
int convertir_archivo();
///EJERCICIO 2
void cargarMatriz(int m[][COLS]);
void mostrarMatriz(int m[][COLS]);
int sumDiagonalPrincipal(int m[][COLS]);
int sumDiagonalSecundaria(int m[][COLS]);
///EJERCICIO 3
char* mi_Strcpy(char *dest, const char *orig);
size_t mi_Strlen(char *s);
int sonAnagramas(char *cad1, char *cad2);

#endif // FUNCIONES_H_INCLUDED
