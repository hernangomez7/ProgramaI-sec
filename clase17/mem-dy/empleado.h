#ifndef _EMPLEADO
#define _EMPLEADO
#define NAME_SIZE 51
#define LAST_NAME_SIZE 51

typedef struct
{
    char nombre[NAME_SIZE];
    char apellido[LAST_NAME_SIZE];
    int idSector;
}Empleado;

#endif // _EMPLEADO

Empleado* empleado_new(void);
void empleado_delete(Empleado* pEmpleado);

int empleado_setNombre(Empleado* pEmpleado, char* nombre);
char* empleado_getnombre(Empleado* pEmpleado);


int empleado_setApellido(Empleado* pEmpleado, char* apellido);
char* empleado_getapellido(Empleado* pEmpleado);

int empleado_setidSector(Empleado* pEmpleado, int idSector);
int empleado_getidSector(Empleado* pEmpleado);

void empleado_debugShow(Empleado* pEmpleado);

