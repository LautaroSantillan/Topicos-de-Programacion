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
        s++;
    }
    return s;
}

int generarProductos()
{
    FILE *pf = fopen("productos.dat","wb");
    if(!pf)
    {
        printf("Error al abrir el archivo de productos\n");
        return ERROR;
    }
    Producto prod[CANT_PROD]={
                    {"AB1", "reD deAD redePtioN 2", 8},
                    {"AB2", "rocKet lEaGue", 20},
                    {"AB3", "GTA v", 5}
    };
    fwrite(&prod, sizeof(Producto), CANT_PROD, pf);
    fclose(pf);
    return TODO_OK;
}

int actualizarArchProd()
{
    FILE *pf = fopen("productos.dat", "r+b");
    if(!pf)
    {
        printf("Error al abrir el archivo de productos\n");
        return ERROR;
    }
    Producto prod;
    fread(&prod, sizeof(Producto), 1, pf);
    while(!feof(pf))
    {
        str_rev(prod.clave);
        str_tit(prod.desc);
        ///printf("%s - %s - %d\n", prod.clave, prod.desc, prod.stock);
        fseek(pf, (long)(-1*sizeof(Producto)), SEEK_CUR);
        fwrite(&prod, sizeof(Producto), 1, pf);
        fseek(pf, 0L, SEEK_CUR);
        fread(&prod, sizeof(Producto), 1, pf);
    }
    fclose(pf);
    return TODO_OK;
}

int generarStock()
{
    FILE *pf = fopen("stock.txt", "w");
    if(!pf)
    {
        printf("Error al abrir el archivo de stocks\n");
        return ERROR;
    }
    Stock st[CANT_STOCK]={ ///1BA 2BA 3BA
                {"1BA", 23},
                {"3BA", -5},
                {"2BA", 5},
                {"1BA", -16},
                {"2BA", 8},
                {"3BA", 12}
    };
    burbujeo(st, CANT_STOCK);
    for(int i = 0; i < CANT_STOCK; i++)
        fprintf(pf, "%s|%d\n", st[i].clave, st[i].stock);
    fclose(pf);
    return TODO_OK;
}

void burbujeo(Stock st[], int ce)
{
    int i, j;
    for(i = 0; i < ce; i++)
    {
        for(j = i + 1; j < ce - i - 1; j++)
        {
            if (strcmp(st[i].clave, st[j].clave) > 0)
            {
                Stock temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
}

int actualizarStock() {
    FILE *pf = fopen("productos.dat", "r+");
    if (!pf) {
        printf("Error al abrir el archivo de productos\n");
        return ERROR;
    }
    FILE *sf = fopen("stock.txt", "r");
    if (!sf) {
        printf("Error al abrir el archivo de stocks\n");
        fclose(pf);
        return ERROR;
    }
    Producto prod;
    char stClave[11];
    int stStock;
    while (fscanf(sf, "%10[^|]|%d\n", stClave, &stStock) == 2)
    {
        while (fread(&prod, sizeof(Producto), 1, pf) == 1)
        {
            if (strcmp(prod.clave, stClave) == 0)
            {
                prod.stock += stStock;
                fseek(pf, (long)(-1 * sizeof(Producto)), SEEK_CUR);
                fwrite(&prod, sizeof(Producto), 1, pf);
                fseek(pf, 0L, SEEK_SET);
                break;
            }
        }
    }
    fclose(pf);
    fclose(sf);
    return TODO_OK;
}

int mostrarArchivoProd()
{
    FILE *pf = fopen("productos.dat", "r");
    if(!pf)
    {
        printf("Error al abrir el archivo de productos\n");
        return ERROR;
    }
    Producto prod;
    fread(&prod, sizeof(Producto), 1, pf);
    while(!feof(pf))
    {
        printf("%s - %s - %d\n", prod.clave, prod.desc, prod.stock);
        fread(&prod, sizeof(Producto), 1, pf);
    }
    fclose(pf);
    return TODO_OK;
}
