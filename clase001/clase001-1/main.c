#include <stdio.h>
#include <stdlib.h>
#define NUMERO_DEF 5

int main()
{
    int i;
    int numeroRecibido;
    int negativos = 0;
    float acumPositivo = 0;
    float acumNegativos = 0 ;
    for(i = 0;i < NUMERO_DEF;i ++)
    {
        printf("Ingrese un numero\n");
        scanf("%d",&numeroRecibido);
        if(numeroRecibido < 0)
        {
            negativos ++;
            acumNegativos = acumNegativos+numeroRecibido;
        }else
        {
            acumPositivo = acumPositivo+numeroRecibido;
        }
    }

    numeroRecibido = NUMERO_DEF - negativos;

    if(negativos!=0)
    {
        acumNegativos = acumNegativos / negativos;
    }
    if(numeroRecibido!=0)
    {
        acumPositivo = acumPositivo / numeroRecibido;
    }

    //numero/(float)numeroflotante en caso de querer resultar
    system("cls");
    printf("negativos %d\n",negativos);
    printf("positivos %d\n",numeroRecibido);
    printf("prom. negativos %.2f\n",acumNegativos);
    printf("prom. positivos %.2f\n",acumPositivo);

    return 0;
}
