#include "funciones.h"

bool sonAnagramas(const char *cadena1, const char *cadena2) {
    int freq1[25] = {0};
    int freq2[25] = {0};

    while(*cadena1) {
        if(*cadena1 >= 'a' && *cadena1 <= 'z')
            freq1[*cadena1 - 'a']++;
        cadena1++;
    }
    while(*cadena2) {
        if(*cadena2 >= 'a' && *cadena2 <= 'z')
            freq2[*cadena2 - 'a']++;
        cadena2++;
    }
    for(int i = 0; i < 25; i++) {
        if(freq1[i] != freq2[i])
            return ERROR;
    }
    return TODO_OK;
}
