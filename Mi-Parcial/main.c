#include "funciones.h"

int main()
{
    char cad[]={"Hola"};
    str_rev(cad);
    printf("%s", cad);

    puts("\n-----\n");
    char test = 'C';
    char lower = to_lower(test);
    printf("%c", lower);

    puts("\n-----\n");
    char test2 = 'l';
    char upperA = to_upper(test2);
    printf("%c", upperA);

    puts("\n-----\n");
    char title[] = "esTo estO";
    str_tit(title);
    printf("Titulo:%s", title);

    return 0;
}
