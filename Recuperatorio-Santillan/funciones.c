#include "funciones.h"

char* mi_Strcpy(char *dest, const char *orig)
{
    char *aux = dest;
    while(*orig)
    {
        *dest=*orig;
        dest++;
        orig++;
    }
    *dest='\0';
    return aux;
}

///EJERCICIO 1
int generacion_archivo()
{
    FILE *pf = fopen("personal.dat", "wb");
    if(!pf)
    {
        puts("No pudo crearse el archivo personal.dat\n");
        return ERROR;
    }
    Personal per[CANT_PERS] = {
                {45175053, "Lautaro Santilan", 10, "no"},
                {13245687, "Carlos Carmona", 11, "si"},
                {87925132, "Juan Sanlan", 23, "no"},
                {54612582, "Luis Gonzalez", 32, "si"},
                {56120456, "Sebas Ferna", 05, "si"},
                {87412354, "Matias Lopez", 13, "si"},
                {12384215, "Fran Benga", 15, "no"},
                {56478912, "Miguel Paz", 21, "no"},
    };
    fwrite(&per, sizeof(Personal), CANT_PERS, pf);
    fclose(pf);
    return TODO_OK;
}

int mostrarArch()
{
    FILE *pf = fopen("personal.dat", "rb");
    if(!pf)
    {
        puts("No se pudo abrir el archivo personal.dat\n");
        return ERROR;
    }
    Personal per;
    fread(&per, sizeof(Personal), 1, pf);
    while(!feof(pf))
    {
        printf("%d - %s - %d - %s\n", per.DNI, per.nomAp, per.antiguedad, per.baja);
        fread(&per, sizeof(Personal), 1, pf);
    }
    fclose(pf);
    return TODO_OK;
}

int alta_personal()
{
    FILE *pf = fopen("personal.dat", "ab");
    if(!pf)
    {
        puts("No se pudo el archivo personal.dat\n");
        return ERROR;
    }
    Personal newPer;
    int dni;
    char nomap[25];
    char baja[2]="no";
    puts("Ingreso nuevo personal: \n");
    puts("\nIngrese el DNI:");
    scanf("%d", &newPer.DNI);
    puts("\nIngrese el nombre y apellido: ");
    gets(nomap); ///No se porque razon el gets no me deja ingresar nada, el profe me dijo que era algo de los punteros
    mi_Strcpy(newPer.nomAp, nomap);
    newPer.antiguedad = 00;
    mi_Strcpy(newPer.baja, baja);
    printf("\n%d - %s - %d - %s\n", newPer.DNI, newPer.nomAp, newPer.antiguedad, newPer.baja);
    fwrite(&newPer, sizeof(Personal), 1, pf); ///No funciona porque no me agarraba el de nombre y apellido
    fclose(pf);
    return TODO_OK;
}

int tamanio_arch()
{
    FILE *pf = fopen("personal.dat", "rb");
    if(!pf)
    {
        puts("No se pudo el archivo personal.dat\n");
        return ERROR;
    }
    long int final;
    fseek(pf, 0L, SEEK_END);
    final=ftell(pf);
    fclose(pf);
    return final;
}

int consulta_pesonal()
{
    FILE *pf = fopen("personal.dat", "rb");
    if(!pf)
    {
        puts("No se pudo abrir el archivo personal.dat\n");
        return ERROR;
    }
    Personal per;
    int cantPersonalActivos = 0;
    int tamanio = tamanio_arch();
    int cantRegistros = tamanio/(sizeof(Personal)*1);
    char text[]="si";
    fread(&per, sizeof(Personal), 1, pf);
    while(!feof(pf))
    {
        if(strcmp(per.baja, text)==0)
            cantPersonalActivos++;
        fread(&per, sizeof(Personal), 1, pf);
    }
    printf("Cantidad de personal activo: %d\n", cantPersonalActivos);
    printf("Cantidad de personal registrado: %d\n", cantRegistros);
    fclose(pf);
    return TODO_OK;
}

int convertir_archivo()
{
    FILE *pf = fopen("personal.dat", "rb");
    if(!pf)
    {
        puts("No se pudo abrir el archivo personal.dat\n");
        return ERROR;
    }
    FILE *sf = fopen("personal.txt", "w");
    if(!pf)
    {
        puts("No se pudo crear el archivo personal.txt\n");
        fclose(pf);
        return ERROR;
    }
    Personal per;
    puts("DNI | Nombre y Apellido | Antiguedad | Baja\n");
    fread(&per, sizeof(Personal), 1, pf);
    while(!feof(pf))
    {
//        fprintf(pf, "%8d|%25s|%2d|%2d\n", per.DNI, per.nomAp, per.antiguedad, per.baja);
//        printf("%d | %s | %d | %s\n", per.DNI, per.nomAp, per.antiguedad, per.baja);
//        fread(&per, sizeof(Personal), 1, pf);
    }
    fclose(pf);
    fclose(sf);
    return TODO_OK;
}

///EJERCICIO 2
void cargarMatriz(int m[][COLS])
{
    int f, c;
    for(f=0; f<COLS; f++)
    {
        printf("Inserte valores para la columna %d: ", f+1);
        for(c=0; c<COLS; c++)
           scanf("%d", &m[f][c]);
    }

}

void mostrarMatriz(int m[][COLS])
{
    int f, c;
    for(f=0; f<COLS; f++)
    {
       for(c=0; c<COLS; c++)
           printf("%d\t", m[f][c]);
       puts("\n");
    }
}

int sumDiagonalPrincipal(int m[][COLS])
{
    int f, c, sum=0;
    for(f=0; f<COLS; f++)
    {
        for(c=0+1+f; c<COLS; c++)
            sum += m[f][c];
    }
    return sum;
}

int sumDiagonalSecundaria(int m[][COLS])
{
    int f, c, sum=0;
    for(f=0; f<COLS-1; f++)
    {
        for(c=0; c<COLS-1; c++)
            sum += m[f][c];
    }
    return sum;
}

///EJERCICIO 3
size_t mi_Strlen(char *s)
{
    size_t cant=0;
    while(*s++)
        cant++;
    return cant;
}

int sonAnagramas(char *cad1, char *cad2)
{
    int cant=0;
    int band=0;
    int len = mi_Strlen(cad1);
    int len2 = mi_Strlen(cad2);
    char *inicio = cad1;
    char *fin = cad2 + len2 - 1;
    if(len != len2)
        return 0;
    while(len > 0)
    {
        if(strcmp(cad1, cad2)!=0)
            cant++;
        inicio++;
        fin--;
        len--;
    }
    if(cant == len)
        return 1;
}
