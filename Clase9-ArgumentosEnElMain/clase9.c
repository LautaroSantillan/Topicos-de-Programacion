#include "clase9.h"

int generarProductos(char * ruta)
{
    FILE * arch = fopen(ruta, "wb");
    if(!arch)
    {
        printf("Error al generar el archivo\n");
        return ERROR;
    }
    Producto prod[CANT_PRODS]=
    {
        {0, "Higo", 100, 50.00},
        {4, "Banana", 200, 60.00},
        {7, "Pera", 50, 30.00},
        {9, "Manzana", 80, 100.00},
        {14, "Durazno", 90, 80.00}
    };

    fwrite(prod, sizeof(Producto), CANT_PRODS, arch);

    fclose(arch);

    return TODO_OK;
}

int generarMovimientos(char * ruta)
{
    FILE * arch = fopen(ruta, "wb");
    if(!arch)
    {
        printf("Error al generar el archivo\n");
        return ERROR;
    }
    Movimiento mov[CANT_MOV]=
    {
        {1, "Kiwi", 20, 50.00},
        {7, "Pera", 30, 70.00},
        {7, "Pera", -10, 90.00},
        {8, "Uva", 50, 100.00},
        {11, "Mango", 30, 10.00},
        {12, "Naranja", 70, 30.00},
        {12, "Naranja", -20, 20.00},
        {15, "Mandarina", -100, 50.00},
        {15, "Mandarina", 300, 60.00}
    };

    fwrite(mov, sizeof(Movimiento), CANT_MOV, arch);

    fclose(arch);

    return TODO_OK;
}

int actualizarProductos(char * ruta1,  char* ruta2)
{
   int cmp;

    FILE * archp = fopen(ruta1,"rb");
    if(!archp)
    {
        printf("Error al abrir el archivo de productos\n");
        return ERROR;
    }

    FILE * archm = fopen(ruta2,"rb");
    if(!archm)
    {
        fclose(archp);
        printf("Error al abrir el archivo de movimientos\n");
        return ERROR;
    }

    FILE * archtem = fopen("productosAct.dat","wb");
    if(!archtem)
    {
        fclose(archp);
        fclose(archm);
        printf("Error al abrir el archivo temporal\n");
        return ERROR;
    }

    Producto prod;
    Movimiento mov;
    Producto prodNuevo;

    fread(&prod,sizeof(Producto),1,archp);
    fread(&mov,sizeof(Movimiento),1,archm);

    while(!feof(archp) && !feof(archm))
    {

        cmp = prod.cod - mov.cod;
        if(cmp < 0)
        {
            fwrite(&prod,sizeof(Producto),1,archtem);
            fread(&prod,sizeof(Producto),1,archp);
        }

        if(cmp > 0)
        {
            fwrite(&mov,sizeof(Movimiento),1,archtem);
            fread(&mov,sizeof(Movimiento),1,archm);
        }

        if(prod.cod == mov.cod)
        {
            prodNuevo.cod = mov.cod;
            strcpy(prodNuevo.descripcion, mov.descripcion);
            prodNuevo.stock = prod.stock + mov.cant;
            prodNuevo.precio = mov.precio;
            fwrite(&prodNuevo,sizeof(Movimiento),1,archtem);
            fread(&prod,sizeof(Producto),1,archp);
            fread(&mov,sizeof(Movimiento),1,archm);
        }
    }

    fclose(archp);
    fclose(archm);
    fclose(archtem);

    return TODO_OK;
}

int mostrarArchivo()
{
        Movimiento prod;
        FILE * arch;
        arch = fopen("productosAct.dat", "rb");
        if(!arch)
        {
                printf("Error al abrir el archivo de productos\n");
                return ERROR;
        }
        fread(&prod, sizeof(Movimiento), 1, arch);
        while(!feof(arch))
        {
                printf("%d\t%s\t%d\t%0.2f\n", prod.cod, prod.descripcion, prod.cant, prod.precio);
                puts("--------\n");
                fread(&prod, sizeof(Movimiento), 1, arch);
        }
        fclose(arch);

        return TODO_OK;
}
