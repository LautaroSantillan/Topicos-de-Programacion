#include "funciones.h"

int main()
{
    //MEMORIA - BLOQUE
//    int x=2, i=1;
//    printf("%d\n", x); //2
//
//    if(x<7)
//    {
//        int x=3; //no se declaran variables aca
//        printf("%d\n", x); //3
//        while(i<2)
//        {
//            int x=4; //no se declaran variables aca
//            i++;
//            printf("%d\n", x); //4
//        }
//        printf("%d\n", x); //3
//    }
//    printf("%d\n", x); //2

    //MEMORIA DINAMICA
//    int *vec;
//    int *aux;
//    int tam, i;
//    printf("Cuantos elementos tendra este vector: ");
//    scanf("%d", &tam);
//    vec = malloc(sizeof(int)*tam);
//    //vec = calloc(tam, sizeof(int));
//    if(!vec)
//        return ERROR;
//
//    aux=realloc(vec,2);
//    if(!aux)
//        return ERROR;
//
//    vec = aux;
//
//    printf("\n-----------\n\n");
//    for(i=0; i<tam+2; i++)
//    {
//       printf("Ingrese los elementos: ");
//        scanf("%d", &vec[i]);
//    }
//    printf("\n-----------\n");
//    for(i=0; i<tam+2; i++)
//        printf("Elemento %d: %d\n", i, vec[i]);
//
//    free(vec);

    T_Persona *p, *aux;
    int seguirCargando, auxNewLong, longPersonas=1, i;

    p=malloc(sizeof(T_Persona));
    if(p==NULL)
    {
        printf("\nNo hay lugar en la memoria");
        return ERROR;
    }
    do
    {
        printf("Ingrese nombre: ");
        scanf("%s", (p+longPersonas-1)->nombre); //no va & porque ya va a la primera posicion del puntero
        printf("Ingrese edad: ");
        scanf("%d", &(p+longPersonas-1)->edad);
        printf("\nDesea cargar a otra persona (1): ");
        scanf("%d", &seguirCargando);
        if(seguirCargando == 1)
        {
            //calcular el nuevo tamaño del array
            printf("\n");
            auxNewLong = sizeof(T_Persona)* longPersonas;
            aux = realloc(p, auxNewLong);
            if(aux==NULL)
            {
                printf("\nNo hay lugar en la memoria");
                return ERROR;
            }
            longPersonas++;
            p=aux;
        }
    }while(seguirCargando==1);

    for(i=0; i<longPersonas; i++)
    {
        printf("\n---------\n");
        printf("\nNombre: %s - ", (p+i)->nombre);
        printf("Edad: %d\n", (p+i)->edad);
    }
    free(p);

    return 0;
}
