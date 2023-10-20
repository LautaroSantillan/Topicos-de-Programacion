#include "clase9.h"

int main(int argc, char *argv[])
{
//        int i;
//        for(i=0;  i<argc;  i++)
//        printf("%s \n", argv[i]);

        generarProductos(argv[1]);
        generarMovimientos(argv[2]);
        actualizarProductos(argv[1], argv[2]);
        mostrarArchivo();

        return 0;
}
