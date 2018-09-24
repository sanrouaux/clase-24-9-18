#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha


typedef struct
{
    char nombre[21];
    eFecha nacimiento;
}eEmpleado



int main()
{
    eEmpleado miEmpleado;
    miEmpleado.nombre = "Juan";
    miEmpleado.nacimiento.dia = 01;

    return 0;
}
