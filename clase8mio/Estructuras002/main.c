#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[51];
    char apellido[51];
    int edad;
}sPersona;

int main()
{
    sPersona auxiliarPersona;
    strncpy(auxiliarPersona.nombre,"nombrado",50);
    auxiliarPersona.nombre[50] = 0;//o \0
    auxiliarPersona.edad = 76;
    printf("nombre:%s\n",auxiliarPersona.nombre);
    return 0;
}
