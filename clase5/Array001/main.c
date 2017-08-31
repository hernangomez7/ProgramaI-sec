#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    int edad[PERSONAL_MAX] = {0},auxEdad;
    float sueldo[PERSONAL_MAX] = {0},auxSueldo;
    int respuesta;
    //VARIABLES
    respuesta = tomaDatos(edad,sueldo);
    if(respuesta==0)
    {
        printf("OK\n");
    }else
    {
        printf("Bad\n");
    }
    system("cls");
    impresorES(edad,sueldo);

    return 0;
}



