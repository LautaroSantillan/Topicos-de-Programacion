#include "funciones.h"

int generarEmpleados(char *ruta)
{
    FILE *arch = fopen(ruta, "wb");
    if(!arch)
    {
        puts("Error en la creacion del archivo");
        return ERROR_ARCH;
    }
    Empleado emp[5] = {
        {45175053, "Lautaro", 'M', {15, 12, 2003}, 100.00},
        {65484151, "Carlos", 'M', {11, 10, 2003}, 200.00},
        {84894151, "Milagros", 'F', {10, 3, 2003}, 150.00},
        {55468791, "Juan", 'M', {5, 2, 2003}, 80.00},
        {35781525, "Candela", 'F', {1, 1, 2003}, 50.00}
    };
    fwrite(emp, sizeof(Empleado), 5, arch);
    fclose(arch);
    return TODO_BIEN;
}

typedef void (*BinaTxt)(const void *reg, FILE *archt);

int archBinaTxt(const char *narchb, const char *narcht, size_t tamreg, BinaTxt binatxt)
{
    FILE *archb = fopen(narchb,"rb");
    if(!archb)
    {
        printf("Error apertura de archivo");
        return ERROR_ARCH;
    }

    FILE *archt = fopen(narcht,"wt");
    if(!archt)
    {
        printf("Error apertura de archivo");
        fclose(archb);
        return ERROR_ARCH;
    }

    void *reg = malloc(tamreg);
    if(!reg)
        return ERROR_SINMEM;

    fread(reg,tamreg,1,archb);
    while(!feof(archb))
    {
        binatxt(reg,archt); ///Convertir de binario a texto
        fread(reg,tamreg,1,archb);
    }
    fclose(archb);
    fclose(archt);
    return TODO_BIEN;
}

void empBinaTxtV(const void *reg, FILE *archt)
{
    Empleado *emp = (Empleado *)reg;
    fprintf(archt,"%d|%s|%c|%d/%d/%d|%.2f\n",emp->dni,emp->apyn, emp->sexo,emp->fnac.d,
            emp->fnac.m, emp->fnac.a,emp->sueldo);
}

void empBinaTxtF(const void *reg, FILE *archt)
{
    Empleado *emp = (Empleado *)reg;
    fprintf(archt,"%-8d%-20s%c%02d/%02d/%04d%8.2f\n",emp->dni,emp->apyn, emp->sexo,emp->fnac.d,
            emp->fnac.m, emp->fnac.a,emp->sueldo);
}
