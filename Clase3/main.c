#include "funciones.h"

int main()
{
//    int vec[8]={8,5,4,3,8,10,-2,0};
//    int *p;
//    p=&vec;
//
//    printf("%p\n", vec);
//    printf("%p\n",vec[0]);
//    printf("%p\n",&vec);
//    printf("%p\n", p);
//    printf("%p\n", &p);

    int vec[TAM];
    int vec2[TAM]={1,3,5};
    int vec3[]={2,3,5};
    int vec4[TAM]={0};
    int vec5[]={0};
//  int vec6[5]={1,3,6,9,12};
    int ce = 0;
    int pos=3, elem=100;


    cargarVector(vec, TAM);
    //cargarVector2(vec, &ce); // El usuario carga la cantidad de elementos del vector
    mostrarVector(vec, ce);
    insertarElementoPos(vec, elem, pos, &ce, TAM);
    puts("\n");
    mostrarVector(vec, ce);


    return 0;
}
