#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void inicializarArray(sProducto* campo, int size)
{
    int i;
    for(i=0; i<CANT; i++)
    {
        campo[i].estaCargado=0;   //inicializo en 0, no esta cargado
    }
}

int carga(int size, char msj, sProducto* campo)
{
    char auxPosicion[10];
    char bufferNombre[200];
    char bufferDescripcion[300];
    char bufferPrecio[200];
    int auxPosicionEntero;
    printf(msj); //ingrese posicion

    if(validarNumero(fgets(auxPosicion, 10, stdin)==0))
    {
        auxPosicionEntero=atoi(auxPosicion);
        if(auxPosicionEntero <= size && auxPosicionEntero > 0)
        {
            auxPosicionEntero=auxPosicionEntero-1;
            if(campo[auxPosicionEntero].estaCargado==0)
            {
                //while(flag==0)  //0 esta bien
                fgets(bufferNombre, 200, stdin);
                fgets(bufferDescripcion, 200, stdin);
                fgets(bufferPrecio, 200, stdin);
            }

        }

    }
    if(validarLetras(bufferNombre)==0 && validarLetras(bufferDescripcion)==0 && validarFlotante(bufferPrecio)==0)

    {
        campo[auxPosicionEntero].nombre
    }




    }

int validarNumero(char`* valor)
{
    int retorno =0;  //0 esta bien
    return retorno;
}

int validarLetras(char`* valor)
{
    int retorno =0;  //0 esta bien
    return retorno;
}

int validarFlotante(char`* valor)
{
    int retorno =0;  //0 esta bien
    return retorno;
}

