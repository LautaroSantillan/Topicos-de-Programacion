#include "funciones.h"

char* mi_Strcpy(char *dest, const char *orig)
{
    char *aux = dest;
    while(*orig)//while(*orig!='\0')
    {
        *dest=*orig;
        orig++;
        dest++;
    }
    *dest='\0';

    return aux;
}

size_t mi_Strlen(const char *s)
{
    size_t cant=0;
    while(*s++)
        cant++;
    return cant;
}

int mi_Strcmp(const char *s1, const char *s2)
{
    while(*s1 || *s2)
    {
        if(*s1==*s2)
        {
            s1++;
            s2++;
        }
        else return (*s1-*s2);
    }
    return (*s1-*s2);
}
