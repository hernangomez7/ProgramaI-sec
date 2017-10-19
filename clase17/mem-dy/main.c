#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"

int main()
{
    int i;
    Empleado * pEmpleado[50];

    void *pGenerico[50];//puntero generico, guarda direcciones de memoria no importa el tipo

    for(i=0;i<50;i++)
    {
        //pEmpleado[i] = empleado_newConstructor("JUAN","PEREZ",i);
        pGenerico[i] = empleado_newConstructor("JUAN","PEREZ",i);
    }

    empleado_debugShow((Empleado*)pGenerico[33]);//acepta Empleado no tipo void

    /*
    empleado_debugShow(pEmpleado[33]);
    empleado_debugShow(pEmpleado[42]);
    empleado_setNombre(pEmpleado,"CARLOS");
    empleado_debugShow(pEmpleado);
    empleado_setApellido(pEmpleado,"AP");
    empleado_debugShow(pEmpleado);
    empleado_setidSector(pEmpleado,87);
    empleado_debugShow(pEmpleado);
    printf("EL NOMBRE ES: %s",empleado_getnombre(pEmpleado));*/


    return 0;
}
