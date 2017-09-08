#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcion.h"


int getnombre(int* nombre,char* message [],char* error [])
{
    int retorno = -1;//cargar invalido primero
    char buffer[4096];
    printf("%s\n",message);
    //PARAMETROS//
    fgets(buffer,4096,stdin);
    buffer[4095] = 0;
    buffer[4095] = '\0';

    if(validarInt(buffer) == 0)
    {
        *nombre = atoi(buffer);
        retorno = 0;
    }
    return retorno;
}

int validarInt(char* buffer)
{
    int retorno = 0;
    int i = 0;

    while(buffer[i] != 0)
    {
        if(((buffer[i] < '0' || buffer[i] > '9') &&  buffer[i] != 0) != 0)
        {
            retorno = -1;
            break;
        }
        i++;
    }

    return retorno;
}

