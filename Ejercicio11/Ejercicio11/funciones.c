#include "funciones.h"

int generarProductos(char *ruta)
{
    FILE * arch = fopen(ruta, "wb");
    if(!arch)
    {
        printf("Error al generar el archivo - ArticulosPedidos.dat\n");
        return ERROR;
    }
    Articulo art[CANT_PRODS]=
    {
        {0, 1578, 10, 500.00}, ///5.000
        {1, 1564, 20, 1500.00}, ///30.000
        {2, 6587, 21, 364.00}, ///7.644
        {3, 4561, 31, 456.00}, ///14.136
        {4, 4578, 17, 785.00}, ///13.345
        {5, 7812, 12, 308.00}, ///3.696
        {6, 6512, 88, 88.00}, ///7.744
        {7, 9898, 15, 789.00}, ///11.835
        {8, 9871, 9, 327.00}, ///2.943
        {9, 4520, 20, 50.00}, ///1.000
        {10, 5461, 54, 50.00}, ///2.700
        {11, 8512, 25, 841.00}, ///21.025
        {12, 8420, 220, 50.00}, ///11.000
        {13, 3212, 45, 456.00}, ///20.520
        {14, 1258, 50, 50.00} ///2.500
    };
    fwrite(art, sizeof(Articulo), CANT_PRODS, arch);
    fclose(arch);

    return TODO_OK;
}

int mostrarArchivo(const char *ruta)
{
    Articulo art;
    FILE *arch = fopen(ruta, "rb");
    if(!arch)
    {
        printf("Error al abrir el archivo solicitado\n");
        return ERROR;
    }
    puts("NRO PEDIDO - NRO ARTICULO - CANTIDAD PEDIDA - PRECIO UNITARIO\n");
    fread(&art, sizeof(Articulo), 1, arch);
    while(!feof(arch))
    {
        printf("%d\t\t%d\t\t%d\t\t%0.2f\n", art.NRO_PEDIDO, art.NRO_ARTICULO, art.CANTIDAD_PEDIDA, art.PRECIO_UNITARIO);
        fread(&art, sizeof(Articulo), 1, arch);
    }
    fclose(arch);

    return TODO_OK;
}

int procesarArchivo(char *r1, char *r2, char *r3)
{
    Articulo art;
    float total;
    FILE *arch = fopen(r1,"rb");
    if(!arch)
    {
        printf("\nNo se pudo abrir el archivo articulosPedidos.dat");
        return ERROR;
    }
    FILE *archMayor = fopen(r2,"wb");
    if(!archMayor)
    {
        printf("No se pudo abrir el archivo PedidosMayores.dat");
        fclose(arch);
        return ERROR;
    }
    FILE *archRes = fopen(r3,"wb");
    if(!archRes)
    {
        printf("No se pudo abrir el archivo PedidosRestantes.dat");
        fclose(arch);
        fclose(archMayor);
        return ERROR;
    }
    fread(&art, sizeof(Articulo), 1, arch);
    while(!feof(arch))
    {
        total = art.CANTIDAD_PEDIDA * art.PRECIO_UNITARIO;
        if(total > 10000)
            fwrite(&art, sizeof(Articulo), 1, archMayor);
        else
             fwrite(&art, sizeof(Articulo), 1, archRes);
        fread(&art, sizeof(Articulo), 1, arch);
    }
    fclose(arch);
    fclose(archMayor);
    fclose(archRes);

    return TODO_OK;
}
