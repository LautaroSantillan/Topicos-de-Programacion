#include "funciones.h"

int loteProducto()
{
    T_prod prod[5] = {
        {"Martillo", 10, 14.6},
        {"Tornillo", 20, 15.6},
        {"Pintura", 100, 56.5},
        {"Cable", 55, 4.6},
        {"Clavo", 13, 1.9}
    };
    FILE *pf = fopen("productos.dat","wb");
    if(!pf)
    {
        printf("No se pudo crear el archivo");
        return ERROR;
    }
    fwrite(prod, sizeof(T_prod), 5, pf);
    fclose(pf);
    return TODO_OK;
}

int lotePedido()
{
    int i;
    T_pedid ped[6] = {
        {1, 10},
        {4, 100},
        {2, 1},
        {1, 5},
        {4, 90},
        {5, 45}
    };
    FILE *pf = fopen("pedidos.txt","wt");
    if(!pf)
    {
        printf("No se pudo crear el arhivo");
        return ERROR;
    }
    for(i = 0; i < 6; i++)
        fprintf(pf,"%6d%3d\n", ped[i].COD_PROD, ped[i].CANT);
    fclose(pf);
    return TODO_OK;
}

int procesarArch(char *n1, char *n2)
{
    char linea[TAM_LINEA];
    float total = 0;
    T_prodnu aux;
    T_prod var1;
    T_pedid var2;
    FILE *pro = fopen(n1,"r+b");
    if(!pro)
    {
        printf("Error en el archivo productos.dat");
        return ERROR;
    }
    FILE *pd = fopen(n2,"rt");
    if(!pd)
    {
        printf("Error en el archivo pedidos.txt");
        fclose(pro);
        return ERROR;
    }
    FILE *pr = fopen("pedidos_realizados.txt","wt");
    if(!pd)
    {
        printf("Error en crear el archivo pedidos_realizados.txt");
        fclose(pro);
        fclose(pd);
        return ERROR;
    }
    FILE *pf = fopen("pedidos_faltantes.txt","wt");
    if(!pf)
    {
        printf("Error en crear el archivo pedidos_faltantes.txt");
        fclose(pro);
        fclose(pd);
        fclose(pr);
        return ERROR;
    }
    fgets(linea, TAM_LINEA, pd);
    while(!feof(pd))
    {
        trozar(linea, &var2);
        fseek(pro, ((var2.COD_PROD)-1)*sizeof(T_prod), SEEK_SET);
        fread(&var1, sizeof(T_prod), 1, pro);
        if(var1.STOCK < var2.CANT)
            fprintf(pf,"%-21s %d %-2.f\n", var1.DESC, var1.STOCK, var1.PRECIO_UNI);
        else
        {
            strcpy(aux.DESC, var1.DESC);
            var1.STOCK -= var2.CANT;
            aux.PRECIO = var2.CANT * var1.PRECIO_UNI;
            total += aux.PRECIO;
            fseek(pro,(long)(-1*(sizeof(T_prod))), SEEK_CUR);
            //fseek(pro,((var2.COD_PROD)-1)*sizeof(T_prod),SEEK_SET);
            fwrite(&var1, sizeof(T_prod), 1, pro);
            fprintf(pr,"%-21s %-2.f\n", aux.DESC, aux.PRECIO);
        }
        fseek(pro,(((var2.COD_PROD)-1)*sizeof(T_prod)), SEEK_CUR);
        fgets(linea, TAM_LINEA, pd);
    }
    printf("El total facturado es de: %2.f", total);
    fclose(pf);
    fclose(pro);
    fclose(pd);
    fclose(pr);
    return TODO_OK;
}

void trozar(char *linea, T_pedid *var2)
{
    char *act = strchr(linea,'\n');
    *act = '\0';
    act -= 3;
    sscanf(act,"%d", &(var2->CANT));
    *act = '\0';
    act -= 6;
    sscanf(act,"%d", &(var2->COD_PROD));
}
