#include "funciones.h"


int tomaDatos(int* edad[],float* sueldo[])
{
    int* auxEdad;
    float* auxSueldo;
    int i;
    respuesta = -1;
    for(i = 0;i < PERSONAL_MAX;i++)
    {
        printf("ingrese edad\n");

            scanf("%d",&auxEdad);
        if(auxEdad<18||auxEdad>50);
        {

        }
        edad[i]=auxEdad;
        printf("ingrese sueldo\n");
        do
        {
            scanf("%f",&auxSueldo);

        }
        while(auxEdad<18||auxEdad>50);
        sueldo[i] = auxSueldo;

        system("cls");
    }
}

void impresorES(int edad [],float sueldo [])
 {
    int i;
    for(i = 0;i < PERSONAL_MAX;i++)
    {
        printf("edad: %d\n",edad[i]);
        printf("sueldo: %.2f$\n",sueldo[i]);
    }

 }
