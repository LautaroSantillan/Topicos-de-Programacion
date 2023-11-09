#include "funciones.h"

const char *str_str(const char *donde, const char *que) {
    while (*donde) {
        const char *donde_ptr = donde;
        const char *que_ptr = que;
        while (*que_ptr && *donde_ptr == *que_ptr) {
            donde_ptr++;
            que_ptr++;
        }
        if (!*que_ptr)
            return donde;
        donde++;
    }
    return VACIO;
}
