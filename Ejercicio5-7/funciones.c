#include "funciones.h"

int generarEmpleados(char *ruta)
{
    FILE *pf = fopen(ruta, "wb");
    if(!pf)
    {
        puts("Error al crear el archivo empleados.dat\n");
        return ERROR;
    }
    Empleado emp[CANT_EMPL] = {
                {45175053, "Santillan", "Lautaro", 82.00},
                {48256471, "Benegas", "Juan", 45.00},
                {42124778, "Antilles", "Tayler", 54.00},
                {24019138, "Enrique", "Marcelo", 95.00},
                {23546885, "Argencio", "Mauricio", 32.00}
    };
    ordenarEmpleados(emp, CANT_EMPL);
    fwrite(&emp, sizeof(Empleado), CANT_EMPL, pf);
    fclose(pf);
    return TODO_OK;
}

void ordenarEmpleados(Empleado emp[], int ce)
{
    for(int i=0; i<ce; i++)
    {
        for(int j=i+1; j<ce; j++)
        {
            if(strcmp(emp[i].apellido, emp[j].apellido)>0)
            {
                Empleado aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }
        }
    }
}

int generarEstudiantes(char *ruta)
{
    FILE *pf = fopen(ruta, "w");
    if(!pf)
    {
        puts("Error al crear el archivo estudiantes.txt\n");
        return ERROR;
    }
    Estudiante est[CANT_ESTU] = {
                {48256471, "Benegas", "Juan", 5.15},
                {23546885, "Argencio", "Mauricio", 7.24},
                {42124778, "Antilles", "Tayler", 5.46},
                {45175053, "Santillan", "Lautaro", 8.22},
                {24019138, "Enrique", "Marcelo", 9.54}
    };
    ordenarEstudiantes(est, CANT_ESTU);
    for(int i=0; i<CANT_ESTU; i++)
        fprintf(pf, "%d|%s|%s|%.2f\n", est[i].DNI, est[i].apellido, est[i].nombre, est[i].promedio);
    fclose(pf);
    return TODO_OK;
}

void ordenarEstudiantes(Estudiante est[], int ce)
{
    for(int i = 0; i < ce; i++)
    {
        for(int j = i+1; j < ce; j++)
        {
            if(strcmp(est[i].apellido, est[j].apellido)>0)
            {
                Estudiante aux = est[i];
                est[i] = est[j];
                est[j] = aux;
            }
        }
    }
}

int actualizarSueldo(char *rutaEmp, char *rutaEst) {
    FILE *pf = fopen(rutaEmp, "r+b");
    if (!pf) {
        puts("Error al abrir el archivo empleados.dat\n");
        return ERROR;
    }
    FILE *sf = fopen(rutaEst, "r");
    if (!sf) {
        puts("Error al abrir el archivo estudiantes.txt\n");
        fclose(pf);
        return ERROR;
    }
    Empleado emp;
    Estudiante est;
    char linea[TAM_LINEA];
    while(fgets(linea, TAM_LINEA, sf))
    {
        trozar(linea, &est);
        if (fread(&emp, sizeof(Empleado), 1, pf))
        {
            if (est.promedio > 7)
            {
                emp.sueldo = emp.sueldo + (emp.sueldo*7.28/100); //7.28%
                fseek(pf, (long)(-1*(sizeof(Empleado))), SEEK_CUR);
                fwrite(&emp, sizeof(Empleado), 1, pf);
                fseek(pf, 0L, SEEK_CUR);
            }
        }
    }
    fclose(pf);
    fclose(sf);
    return TODO_OK;
}

void trozar(char *linea, Estudiante *reg) {
    sscanf(linea, "%d|%[^|]|%[^|]|%f", &reg->DNI, reg->apellido, reg->nombre, &reg->promedio);
}

int mostrarArchivo(char *ruta)
{
    FILE *pf = fopen(ruta, "rb");
    if(!pf)
    {
        puts("Error al crear el archivo empleados.dat\n");
        return ERROR;
    }
    Empleado emp;
    fread(&emp, sizeof(Empleado), 1, pf);
    for(int i=0; i<CANT_EMPL; i++)
    {
        printf("%d - %s - %s - %.2lf\n", emp.DNI, emp.apellido, emp.nombre, emp.sueldo);
        fread(&emp, sizeof(Empleado), 1, pf);
    }
    fclose(pf);
    return TODO_OK;
}
