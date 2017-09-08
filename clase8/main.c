#include <stdio.h>
#include <stdlib.h>
#define CANT 200
#include "lib.h"




int main()
{
    sProducto articulo[CANT];
    inicializarArray(articulo, CANT);

    printf("%d", articulo[5].estaCargado);
//    int i;
//    for(i=0; i<CANT; i++)
//    {
//        articulo[i].estaCargado=0;   //inicializo en 0, no esta cargado
//    }


    return 0;
}



