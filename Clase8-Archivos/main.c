#include "funciones.h"

int main()
{
    ///Meter datos a un FILE
    /*FILE * pf;
    pf=fopen("datos.dat", "wb");
    if(pf==NULL)
    {
        puts("Error en la apertura del archivo datos.dat");
        return -1;
    }
    formulario persona;
    strcpy(persona.apellido, "Santillan");
    strcpy(persona.nombre, "Lautaro");
    persona.edad=19;
    fwrite(&persona, sizeof(formulario), 1, pf);
    fclose(pf);*/

    ///Leer un archivo
    FILE * pf;
    pf=fopen("datos.dat", "rb");
    if(pf==NULL)
    {
        puts("Error en la apertura del archivo datos.dat");
        return -1;
    }
    formulario persona;
    fread(&persona, sizeof(formulario), 1, pf);
    printf("%s - %s - %d", persona.nombre, persona.apellido, persona.edad);
    fclose(pf);

    return 0;
}
