#include "Lib.h"
#include <stdio.h>
#include <stdlib.h>

int obtenerDatos (int edad[], float salario[],int candadmaxima)
{

int i;
float aux;


for(i = 0; i < candadmaxima ; i++)
    {
        printf("\nIngrese edad persona [%d]: ", i+1);
        scanf("%d", &edad[i]);

        printf("\nIngrese salario persona [%d]: ", i+1);
        scanf("%f", &aux);

        salario[i] = aux;

    }

return 0;

}

int mostrarDatos(int edad[], float salario[],int candadmaxima){
    int i;

        printf("\nEDAD\t\tSALARIO");
        for(i = 0; i < candadmaxima; i++)
        {
            printf("\n%d\t\t%.2f\n", edad[i], salario[i]);
        }
    return 0;
    }

int MaximoInt(int edad [],int* maximo,int candadmaxima)
{
    int i;
    *maximo = 0;
    for(i = 0; i < candadmaxima; i++)
    {
        if(edad[i] > *maximo)
        {
            *maximo = edad[i];
        }
    }
    return 0;
}


