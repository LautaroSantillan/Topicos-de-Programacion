#include "funciones.h"

size_t mi_Strlen(const char *cad)
{
    size_t cant = 0;
    while(*cad++)
        cant++;
    return cant;
}

char* mi_Strcpy(char *dest, const char *orig)
{
    char *aux = dest;
    while(*orig)
    {
        *dest=*orig;
        orig++;
        dest++;
    }
    *dest='\0';
    return aux;
}

char *str_rev(char *s)
{
    int len = mi_Strlen(s);
    char *start = s;
    char *end = s + len - 1;
    while(start < end)
    {
        char auxCaracter = *start;
        *start = *end;
        *end = auxCaracter;
        start++;
        end--;
    }
    return s;
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

char to_upper(char c)
{
    if(c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char *str_tit(char *s)
{
    int capitalize = 1;
    while(*s)
    {
        if(isspace(*s) || *s == '\t')
            capitalize = 1;
        else
        {
            if(capitalize) {
                *s = to_upper(*s);
                capitalize = 0;
            } else
                *s = to_lower(*s);
        }
        *s++;
    }
    return s;
}
