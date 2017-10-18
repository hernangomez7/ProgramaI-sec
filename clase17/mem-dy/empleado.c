#include "empleado.h"
#include <string.h>
#define DEBUG 1//para el debug, si es cero no aparece

Empleado* empleado_new(void)
{
    return malloc(sizeof(Empleado));//si falla retorna NULL
}

Empleado* empleado_newConstructor(char* nombre,char* apellido,int idSector)
{
    Empleado* pEmpleado = malloc(sizeof(Empleado));
    if(pEmpleado != NULL)
    {
        empleado_setNombre(pEmpleado,nombre);
        empleado_setApellido(pEmpleado,apellido);
        empleado_setidSector(pEmpleado,idSector);
    }
    return pEmpleado;
}


void empleado_delete(Empleado* pEmpleado)
{
    if(pEmpleado!= NULL)
    {
        free(pEmpleado);
    }
}


int empleado_setNombre(Empleado* pEmpleado, char* nombre)
{
    int retorno = -1;
    if(pEmpleado != NULL)
    {
        retorno = 0;
        strncpy(pEmpleado->nombre,nombre,NAME_SIZE);
    }
    return retorno;
}
char* empleado_getnombre(Empleado* pEmpleado)
{
    char* retorno = NULL;
    if(pEmpleado != NULL)
    {
       retorno = pEmpleado->nombre;
    }
    return retorno;
}


int empleado_setApellido(Empleado* pEmpleado, char* apellido)
{
    int retorno = -1;
    if(pEmpleado != NULL)
    {
        retorno = 0;
        strncpy(pEmpleado->apellido,apellido,LAST_NAME_SIZE);
    }
    return retorno;
}
char* empleado_getapellido(Empleado* pEmpleado)
{
    char* retorno = NULL;
    if(pEmpleado != NULL)
    {
       retorno = pEmpleado->apellido;
    }
    return retorno;
}

int empleado_setidSector(Empleado* pEmpleado, int idSector)
{
    int retorno = -1;
    if(pEmpleado != NULL)
    {
        retorno = 0;
        pEmpleado->idSector = idSector;
    }
    return retorno;
}


int empleado_getidSector(Empleado* pEmpleado)
{
    int retorno = -1;
    if(pEmpleado != NULL)
    {
        retorno = pEmpleado->idSector;
    }
    return retorno;
}

void empleado_debugShow(Empleado* pEmpleado)//codigo para debug
{
    if(pEmpleado != NULL && DEBUG)
    {
        printf("\n%s-%s-%d\n",pEmpleado->nombre,pEmpleado->apellido,pEmpleado->idSector);
    }
}
