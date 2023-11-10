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
    /*FILE * pf;
    pf=fopen("datos.dat", "rb");
    if(pf==NULL)
    {
        puts("Error en la apertura del archivo datos.dat");
        return -1;
    }
    formulario persona;
    fread(&persona, sizeof(formulario), 1, pf);
    printf("%s - %s - %d", persona.nombre, persona.apellido, persona.edad);
    fclose(pf);*/

    ///FSEEK
//    FILE *pf = fopen("datos.dat", "r+b");
//    if(!pf)
//    {
//        puts("Error al crear el archivo\n");
//        return ERROR_ARCH;
//    }
////    formulario persona[3]={
////        {"Lautaro", "Santillan", 19},
////        {"Gaston", "Gimenez", 38},
////        {"Marcelo", "Lopez", 49},
////    };
////    fwrite(&persona, sizeof(formulario), 3, pf);
//    formulario persona;
//    fread(&persona, sizeof(formulario), 1, pf);
//    while(!feof(pf))
//    {
//        if(persona.edad >= 25)
//        {
//            persona.edad += 1;
//            fseek(pf, (long)(-1*(sizeof(formulario))), SEEK_CUR);
//            fwrite(&persona, sizeof(formulario), 1, pf);
//        }
//        fseek(pf, 0L, SEEK_CUR);
//        printf("%s - %s - %d \n", persona.nombre, persona.apellido, persona.edad);
//        fread(&persona, sizeof(formulario), 1, pf);
//    }
//    fclose(pf);

    ///FTELL
    FILE *pf = fopen("datos.dat", "r+b");
    if(!pf)
    {
        puts("Error al crear el archivo\n");
        return ERROR_ARCH;
    }
    //fseek(pf, 0L, SEEK_SET);
    fseek(pf, 0L, SEEK_END);
    int len = ftell(pf);
    printf("Tamanio del archivo: %d\n", len);

    int cantRegs = ftell(pf)/sizeof(formulario);
    printf("Cantidad de registros: %d\n", cantRegs);

    return 0;
}
