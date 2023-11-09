///Ejercicio 8: Escriba una función <char *str_str(const char *donde, const char *que);>, que determine y devuelva en
///qué dirección de memoria se encuentra la primer ocurrencia de una subcadena en una cadena.
///Por ejemplo:
///"ABRACADABRA PATA DE CABRA" - "ABRA" => Devuelve la dirección de la primera <A>
///"ABRACADABRA PATA DE CABRA" - "EBRA"	 => No la encuentra, devuelve NULL
///"ABRACADABRA PATA DE CABRA" - "" => Devuelve la dirección de la primera <A>
#include "funciones.h"

int main() {
    const char *cadena = "ABRACADABRA PATA DE CABRA";
    const char *subcadena = "CABRA";

    const char *resultado = str_str(cadena, subcadena);

    if (resultado)
        printf("Direccion de memoria del primer caracter: %p\n", (void *)resultado);
    else
        printf("Subcadena no encontrada\n");

    return 0;
}
