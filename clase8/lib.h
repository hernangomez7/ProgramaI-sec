#define CANT 200
typedef struct
{
    char nombre[51];
    char descripcion[256];
    float precio;
    int estaCargado;             //1=cargado 0=vacio
} sProducto;

void inicializarArray(sProducto* campo, int size);
