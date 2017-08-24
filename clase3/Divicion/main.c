#include <stdio.h>
#include <stdlib.h>

int dividir(int , int ,int* );

int main()
{
    int numeroA;
    int numeroB;
    int resultado;
    int auxiliar;
    printf("Ingrese numero a dividir\n");
    scanf("%d",&numeroA);
    printf("Ingrese numero a divisor\n");
    scanf("%d",&numeroB);

    auxiliar = dividir(numeroA,numeroB,&resultado);

    if(auxiliar == -1)
    {
        printf("error fulminante!!");
    }else
    {
        printf("resultado = %d",resultado);
    }


    return 0;
}


/** \brief divide 2 valores
 *
 * \param valorA
 * \param valorB
 * \param resultado
 * \return 0 ok - (-1= error
 *
 */

int dividir(int valorA, int valorB,int* resultado)
 {
     system("cls");
     int respuesta = -1;

     if(valorB != 0)
     {
         *resultado = valorA / valorB;
         respuesta = 0;
     }

     return respuesta;
 }
