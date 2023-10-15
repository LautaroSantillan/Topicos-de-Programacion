#include "funciones.h"

int main()
{
    void *z;
    int *pe;
    int entero = 99;

    pe = &entero;
    z = pe;

    (*(int*)z++);

    printf("%d\n", *pe);
    printf("%d", entero);

    return 0;
}
