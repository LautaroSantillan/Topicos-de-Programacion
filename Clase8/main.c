#include "funciones.h"

int main()
{
    //MEMCPY
    /*int i;
    personas pers[]={
        {8, "Lautaro"},
        {4, "Marcelo"},
        {14, "Luciano"},
        {1, "Edith"},
        {10, "Lola"},
    };
    personas copia[5];
    memcpy(&copia, &pers[0], sizeof(personas)*5);
    for(i=0;i<5;i++)
        printf("%s\n", copia[i].nom);*/

    //MEMMOVE
    /*int i;
    int vec[]={1,2,3,4,5};
    memmove(vec, vec+2, sizeof(int)*3);
    for(i=0;i<5;i++)
        printf("%d\n", vec[i]);

    char str[]="Hola Mundo";
    memmove(str+10, str, 5);
    printf("%s\n", str);*/

    //MEMCMP
    char str[]="Hola Mundo";
    char str2[]="Hola Mundo";
    char str3[]="HoLa Mundo";
    int result = memcmp(str, str2, 2); ///CHAR = 1BYTE
    if(result==0)
        printf("Las cadenas son iguales\n");
    else
        printf("Las cadenas son distintas\n");
    int result2 = memcmp(str3, str2, sizeof(char)*8);
    if(result2==0)
        printf("Las cadenas son iguales\n");
    else
        printf("Las cadenas son distintas\n");

    return 0;
}
