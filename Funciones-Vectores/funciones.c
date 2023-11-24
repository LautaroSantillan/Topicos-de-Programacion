#include "funciones.h"

void cargarVector(int *v, int ce)
{
  int i;
  for(i = 0; i < ce; i++)
  {
    printf("Ingrese elemento en posicion %d: ", i);
    scanf("%d", v); // No es necesario el & porque es un puntero (direccion)
    v++;
  }
}

void mostrarVector(int *v, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}

void burbujeo(int *v, int ce)
{
    int i, j, indMenor, aux;
    for(i=0; i<ce; i++)
    {
        indMenor=i;
        for(j=i+1; j<ce; j++)
        {
            if(v[j]<v[indMenor])
                indMenor=j;
        }
        if(indMenor!=i)
        {
            aux=v[i];
            v[i]=v[indMenor];
            v[indMenor]=aux;
        }
    }
}


void ordenarVecXSeleccion(int *v, int ce)
{
    int *ini = v,
        *fin = v+(ce-1),
        *menor,
        aux;
    while(v!=fin)
    {
        menor = hallarMenor(v, ce);
        if(*menor != *v)
        {
            aux = *v;
            *v = *menor;
            *menor = aux;
        }
        ce--;
        v++;
    }
}

int* hallarMenor(int *v, int ce)
{
    int i, *menor = v;
    for(i=0; i<ce; i++)
    {
        if(*v < *menor)
            menor = v;
        v++;
    }
    return menor;
}

void insercion(int *v, int ce)
{
    int i, j, indice;
    for(i=1; i<ce; i++)
    {
        indice = v[i];
        j = i-1;
        while(j>=0 && v[j] > indice)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = indice;
    }
}

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
    dest++;
    orig++;
  }
  *dest='\0';
  return aux;
}

char to_lower(char c)
{
  if(c >= 'A' && c <= 'Z')
    return c + 32;
}

char to_upper(char c)
{
  if(c >= 'a' && c <= 'z')
    return c - 32;
}

char* str_tit(char s)
{
  int capitalize = 1;
  while(*s)
  {
    if(isspace(*s) || *s == '\t')
      capitalize = 1;
    if(capitalize)
    {
      *s = to_upper(*s);
      capitalize = 0;
    } else
      *s = to_lower(*s);
    s++;
  }
  return s;
}

char* str_rev(char s)
{
  int ce = mi_Strlen(s);
  char *inicio = s;
  char *fin = s + ce - 1;
  while(inicio < fin)
  {
    char aux = *inicio;
    *inicio = *fin;
    *fin = aux;
    inicio++;
    fin--;
  }
  return s; 
}

void trozar(char *linea, Estudiante *reg) {
    sscanf(linea, "%d|%[^|]|%[^|]|%f", &reg->DNI, reg->apellido, reg->nombre, &reg->promedio);
}

int mi_Strcmp(const char *str1, const char *str2) 
{
    while (*str1 && (*str1 == *str2)) 
    {
        str1++;
        str2++;
    }
    return *(const unsigned char *)str1 - *(const unsigned char *)str2;
}

char *mi_Strchr(const char *str, int character) 
{
    while (*str != '\0') 
    {
        if (*str == (char)character)
            return (char *)str;
        str++;
    }
    return NULL;
}

char* modificarTexto(char *texto)
{
    char *start = texto;
    char *end = texto + mi_Strlen(texto) - 1;
    // Avanzar el inicio hasta encontrar el primer carácter que no sea un espacio
    while (*start == ' ')
        start++;
    // Retroceder el final hasta encontrar el último carácter que no sea un espacio
    while (end > start && *end == ' ')
        end--;
    // Mover los caracteres no espaciales hacia el inicio del texto
    char *current = start;
    char *aux = start;
    while (start <= end)
    {
        if (*start == ' ' && *(start + 1) == ' ')
            start++;
        *current++ = *start++;
    }
    *current = '\0'; // Terminar la cadena
    return aux;
}
