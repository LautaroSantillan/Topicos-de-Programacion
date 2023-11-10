#include "funciones.h"

int main(int argc, char *argv[])
{
    generarEmpleados(argv[1]);
    archBinaTxt(argv[1], argv[2],sizeof(Empleado),argv[3][0]=='F'?empBinaTxtF:empBinaTxtV );

    return 0;
}

