#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///fprintf
    /*FILE * pf;
    pf = fopen("arch_text.txt", "wt"); ///Solo poniendo w sirve tmb
    if(!pf)
    {
        puts("Error, no se pudo abrir el archivo");
        return 1;
    }
    fprintf(pf, "%s\n", "esto es una cadena de prueba");
    fprintf(pf, "%d\n", 45175053);
    fclose(pf);*/

    ///fscanf
    /*FILE * pf;
    pf = fopen("arch_text.txt", "rt"); ///Solo poniendo r sirve tmb
    if(!pf)
    {
        puts("Error, no se pudo abrir el archivo");
        return 1;
    }
    char cad[100];
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    printf("%s ", cad);
    fscanf(pf, "%s\n", cad);
    fclose(pf);*/

    ///fgets
    /*FILE * pf;
    pf = fopen("arch_text.txt", "r");
    if(!pf)
    {
        puts("Error, no se pudo abrir el archivo");
        return 1;
    }
    char cad[100];
    while(fgets(cad, 100, pf)) ///Va a leer 99 caracteres, el 100 es el \0
        printf("%s", cad);
    fclose(pf);*/

    ///fputs
    /*FILE * pf;
    pf = fopen("arch_text.txt", "w");
    if(!pf)
    {
        fputs("Error, no se pudo abrir el archivo", stdout);
        return 1;
    }
    char cad[] = "Hola! Mi nombre es Lautaro\n";
    fputs(cad, pf);
    fputs("Buenas, yo soy Juan Carlos\n", pf);
    fclose(pf);*/

    ///fgetc
    FILE * pf;
    pf = fopen("arch_text.txt", "r");
    if(!pf)
    {
        fputs("Error, no se pudo abrir el archivo", stdout);
        return 1;
    }
    char caracter;
    while((caracter = fgetc(pf))!=EOF) ///Va a recorrer todo el file hasta el EOF
        printf("%c", caracter);
    fclose(pf);

    ///fputc
    /*FILE * pf;
    pf = fopen("arch_text.txt", "w");
    if(!pf)
    {
        puts("Error, no se pudo abrir el archivo");
        return 1;
    }
    char caracter='L';
    fputc(caracter, pf);
    fclose(pf);*/

    return 0;
}
