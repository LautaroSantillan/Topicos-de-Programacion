#include "funciones.h"

int main()
{
    //STRCPY
//    char destino[20];
//    char original[]={"Hola como estan?"};
//    char *aux;
//    aux = strcpy(destino, original);
//    printf("%s", aux);

    //MI STRCPY
//    char destino[20]={"holaaaaaaaaaaa"};
//    char original[]={"Hoja"};
//    char *aux;
//    aux = mi_Strcpy(destino, original);
//    printf("%s", aux);

    //MI STRLEN
//    char original[]={"Hola"};
//    int cant;
//    printf("%s", original);
//    cant = mi_Strlen(original);
//    printf("\nLa cantidad de caracteres que tiene la cadena es de: %d\n", cant);

    //STRCMP
//    char s1[]= "Lautaro";
//    char s2[]= "lautaro";
//    int i;
//    printf("s1 = %s", s1);
//    printf("\ts2 = %s", s2);
//    i = strcmp(s1, s2);
//    printf("\ns1 es");
//    if(i<0) printf(" menor que ");
//    else if(i>0) printf(" mayor que ");
//    else printf(" igual a ");
//    printf("s2\n");

    //MI STRCMP
    char s1[]= "Lautaro";
    char s2[]= "lautaro";
    int i;
    printf("s1 = %s", s1);
    printf("\ts2 = %s", s2);
    i = mi_Strcmp(s1, s2);
    printf("\ns1 es");
    if(i<0) printf(" menor que ");
    else if(i>0) printf(" mayor que ");
    else printf(" igual a ");
    printf("s2\n");

    return 0;
}
