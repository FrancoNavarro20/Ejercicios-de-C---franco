#include <stdio.h>
#include <stdlib.h>
#define TAM 4
/*Ejercicio de estructuras*/




typedef struct
{
    char nombre[20];
    int legajo;
    float sueldo;

    //float sueldoFinal;

}Empleados;

//isEMpi,
//isFaul,

Empleados CargarEmpleados();
void mostarEmpleados(Empleados parametroEmpleados[]);
void CargarArrayEmpleados(Empleados CargandoEmpleados[], int cant);

int main()
{
    //Variables
    int i;
    Empleados empleadoArrays[2];

    /*
    empleadoUno =CargarEmpleados();
    mostarEmpleados(empleadoUno);
    */

    CargarArrayEmpleados(empleadoArrays,2);
    for(i=0;i<2;i++)
    {
        mostarEmpleados(empleadoArrays[i]);
    }




    return 0;
}
Empleados CargarEmpleados()
{
    //variables locales
    Empleados DatosEmpleados;


    printf("Ingrese el nombre:");
    fflush(stdin);
    scanf("%[^\n]",DatosEmpleados.nombre);

    printf("Ingrese el legajo:");
    scanf("%d",&DatosEmpleados.legajo);

    printf("Ingrese el sueldo:");
    scanf("%f", &DatosEmpleados.sueldo);


    return DatosEmpleados;
}
void mostarEmpleados(Empleados parametroEmpleados[],int cant)
{

    for(i=0;i<cant;i++)
    {
        printf("%10s %4d %8.2f",);
    }
    printf("El nombre es: %s", parametroEmpleados[0].nombre);
    printf("El legado es: %d", parametroEmpleados[1].legajo);
    printf("El sueldo es: %.2f", parametroEmpleados[2].sueldo);

}
void CargarArrayEmpleados(Empleados CargandoEmpleados[], int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {
        CargandoEmpleados[i] = CargarEmpleados();
    }
}
