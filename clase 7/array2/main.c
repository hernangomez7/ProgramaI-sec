#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PERSONAL 2
#define CANTNOMBRE 51
#define LF 10

int getInt(int* pEdad,char* message [],char* error [],int reintentos);
int validarInt(char* buffer);


int main()
{
    char arrayNombre[PERSONAL][CANTNOMBRE];
    char edad[PERSONAL];//llega hasta 255
    char mensaje[] = "Ingrese edad";
    char errorMgs[] = "edad errada";
    int statusError ;
    int edadInt ;
    int regain = 1;//veces a preguntar
    //gets(&arrayNombre[0],CANTNOMBRE,stdin);

    statusError = getInt(&edadInt,&mensaje,errorMgs,regain);
    if(statusError != 0)
    {
        printf("MAAAAALLLLLL!\n");
    }


    //printf("nombre:%s",nombre);
    //printf("edad:%d\n",edad);
    return 0;
}

int getInt(int* pEdad,char* message [],char* error [],int reintentos)
{
    int retorno = -1;//cargar invalido primero
    char buffer[4096];
    printf("%s\n",message);
    //PARAMETROS//
    fgets(buffer,4096,stdin);
    buffer[4095] = LF;
    buffer[4095] = '\0';

    if(validarInt(buffer) == 0)
    {
        *pEdad = atoi(buffer);
        retorno = 0;
    }
    return retorno;
}

int validarInt(char* buffer)
{
    int retorno = 0;
    int i = 0;

    while(buffer[i] != LF)
    {
        if((buffer[i] < '0' || buffer[i] > '9') &&  buffer[i] != LF)
        {
            retorno = -1;
            break;
        }
        i++;
    }

    return retorno;
}

