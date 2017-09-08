#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcion.h"


struct personaE
{
    char nombre[51];
    char apellido[51];
    int edad;
    char DNI[11];
};


int main()
{
    char nombreAux []= {"juan"};
    char apellidoAux []= {"perez"};
    char DNIAux []= "40789456";
    int edadAux = 28;
    struct personaE unaPersona;
    char mensaje[] = "Ingrese nombre";
    char errorMgs[] = "error de datos";
    int statusError;
    nombreAux [50] = '\0';
    strncpy(unaPersona.nombre , nombreAux,51);
    nombreAux [50] = '\0';
    strncpy(unaPersona.apellido , apellidoAux,51);
    unaPersona.edad = edadAux;
    nombreAux [50] = '\0';
    strncpy(unaPersona.DNI , DNIAux,11);
    printf("nombre:%s\napellido:%s\nedad:%d\nDNI:%s\n",unaPersona.nombre,unaPersona.apellido,unaPersona.edad,unaPersona.DNI);
    //printf("Escribe tu nombre o muere\n");
        //fgets(buffer,4096,stdin);
    //buffer[4095] = '\0';

    statusError = getnombre(&nombreAux,&mensaje,&errorMgs);
    if(statusError != 0)
    {
        printf("MAAAAALLLLLL!\n");
    }

    return 0;
}
