#include "funciones.h"

int main()
{
    int pal;
    char cad[] = "anita lava la tina";

    pal = palindromo(cad);

    if(pal == 0)
        printf("Es palindromo");
    if(pal == 1)
        printf("No es palindromo");

    return 0;
}
