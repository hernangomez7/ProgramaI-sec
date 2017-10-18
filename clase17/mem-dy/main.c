#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"

int main()
{
    Empleado * pEmpleado;
    pEmpleado = empleado_newConstructor("JUAN","PEREZ",44);
    empleado_debugShow(pEmpleado);
    empleado_setNombre(pEmpleado,"CARLOS");
    empleado_debugShow(pEmpleado);
    empleado_setApellido(pEmpleado,"AP");
    empleado_debugShow(pEmpleado);
    empleado_setidSector(pEmpleado,87);
    empleado_debugShow(pEmpleado);

    printf("EL NOMBRE ES: %s",empleado_getnombre(pEmpleado));
    return 0;
}
