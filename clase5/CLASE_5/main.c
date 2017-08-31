#include <stdio.h>
#include <stdlib.h>
#include "Lib.h"
#define CANT_EMPLEADOS 2

int promediosInt(int edad,int* promedio,int CANT_EMPLEADOS);

int main()
{
    int edad[CANT_EMPLEADOS];
    float salario[CANT_EMPLEADOS];
    int maximo;
    int promedio;

    obtenerDatos ( edad, salario,CANT_EMPLEADOS);
    MaximoInt(edad,&maximo,CANT_EMPLEADOS);
    promediosInt(edad,&promedio,CANT_EMPLEADOS);

    mostrarDatos(edad,salario,CANT_EMPLEADOS);
    printf("maximo:%d",maximo);

    return 0;
}

int promediosInt(int edad,int* promedio,int CANT_EMPLEADOS)
{

}

