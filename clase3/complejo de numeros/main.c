#include <stdio.h>
#include <stdlib.h>

int calculadorBasica(int , int ,int* ,int* , int* ,int* );

int main()
{
    int numeroA;
    int numeroB;
    int resSuma;
    int resResta;
    int resMulti;
    int resDivi;
    int auxiliar;
    printf("Ingrese numero a dividir\n");
    scanf("%d",&numeroA);
    printf("Ingrese numero a divisor\n");
    scanf("%d",&numeroB);

    auxiliar = calculadorBasica(numeroA,numeroB,&resSuma,&resResta,&resMulti,&resDivi);

    if(auxiliar == -1)
    {
        printf("error en divicion!!\n");
    }
    else
    {
        printf("resultado = %d\n",resDivi);
    }
    printf("resultado de suma = %d\n",resSuma);
    printf("resultado de resta = %d\n",resResta);
    printf("resultado de multiplicacion = %d\n",resMulti);


    return 0;
}


/** \brief calculadorBasica
 *
 * \param valorA
 * \param valorB
 * \param resultado de suma
 * \param resultado de resta
 * \param resultado de multiplicacion
 * \param resultado de divicion
 * \return 0 ok - (-1= error
 *
 */

int calculadorBasica(int valorA, int valorB,int* resSuma,int* resResta,int* resMulti,int* resDivicion)
 {
     system("cls");
     int respuesta = -1;

     if(valorB != 0)
     {
         *resDivicion = valorA / valorB;
         respuesta = 0;
     }
     *resSuma = valorA + valorB;
     *resResta = valorA - valorB;
     *resMulti = valorA * valorB;

     return respuesta;
 }
