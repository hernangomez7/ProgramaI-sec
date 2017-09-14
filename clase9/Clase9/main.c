#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

//realizar un programa con un menu de dos opciones: A)cargar un producto,B)imprimir lista productos


int main()
{
    int indice;
    char seguir='s';
    int opcion=0;
    char buffer[100];
    sProducto arrayProductos[200];
    prod_initProducto(arrayProductos,200);

    //prod_cargarProducto (arrayProductos, 0);

    while(seguir=='s')
    {
        printf("1- Cargar producto\n");
        printf("2- Imprimir producto\n");
        printf("3- salir\n");

        val_getEntero(&buffer,"","\nla cagaste",3,3);
        opcion = atoi(buffer);

        switch(opcion)
        {
            case 1:
                //Devolver_empty(arrayProductos,&indice ,200);
                if(Devolver_empty(arrayProductos,&indice ,200)!= -1)
                {
                    prod_cargarProducto (arrayProductos,indice);
                }else{
                printf("\nsin espacio");
                }

                break;
            case 2:
                prod_printProducto(arrayProductos,200);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}


