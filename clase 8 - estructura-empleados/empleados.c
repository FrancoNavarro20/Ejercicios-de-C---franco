#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "empleados.h"
#define T 5
#define lleno 1
#define vacio 0


Empleados cargarEmpleados()
{
    Empleados datosEmpleados;
    float sueldoConAumento;

    printf("Ingrese el nombre del  empleado:");
    fflush(stdin);
    gets(datosEmpleados.nombre);

    printf("Ingrese el numero de legajo:");
    scanf("%d",&datosEmpleados.legajo);
    while(validacionNumerosEnteros(datosEmpleados.legajo,1,5000))
    {
        printf("Error,re-igrese el numero de legajo(mayor a 1 y menor a 5000):");
        scanf("%d",&datosEmpleados.legajo);
    }

    printf("Ingrese el sueldo del empleado:");
    scanf("%f",&datosEmpleados.sueldo);
    while(validacionNumerosFlotantes(datosEmpleados.sueldo,1,100000))
    {
        printf("Error,re-igrese el sueldo(mayor a 1 y menor a 100000):");
        scanf("%f",&datosEmpleados.sueldo);
    }


    printf("Ingrese el porcentaje de aumento del empleado:");
    scanf("%d",&datosEmpleados.porcentajeAumento);
    while(validacionNumerosEnteros(datosEmpleados.porcentajeAumento,1,100))
    {
        printf("Error,re-ingrese el porcentaje de aumento del empleado(1 a 100):");
        scanf("%d",&datosEmpleados.porcentajeAumento);
    }

    sueldoConAumento = sueldoFinal(datosEmpleados);

    datosEmpleados.sueldoFinal =  sueldoConAumento;

    return datosEmpleados;
}

float sueldoFinal(Empleados datosEmpleados)
{
    float resultado;
    float resultadoFinal;

    resultado = (datosEmpleados.sueldo*datosEmpleados.porcentajeAumento)/100;
    resultadoFinal =datosEmpleados.sueldo+resultado;

    return resultadoFinal;
}

void mostrarEmpleados(Empleados datosEmpleados)
{
    printf("%-8s | %-4d | %-4.2f | %-4.2f\n",datosEmpleados.nombre,datosEmpleados.legajo,datosEmpleados.sueldo,datosEmpleados.sueldoFinal);
}

int validacionNumerosEnteros(int numero,int min , int max)
{
    int retorno;
    retorno = 0;

    if(numero < min || numero > max)
    {
        retorno = 1;
    }

    return retorno;
}

int validacionNumerosFlotantes(float numero,int min , int max)
{
    int retorno;
    retorno = 0;

    if(numero < min || numero > max)
    {
        retorno = 1;
    }

    return retorno;
}

void isEmptyInicializacion(Empleados datosEmpleados[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        datosEmpleados[i].isEmpty = vacio;
    }
}

void cargarArrayEmpleados(Empleados datosEmpleados[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(datosEmpleados[i].isEmpty == vacio)
        {
            printf("Cargando Empleado %d\n",i+1);
            datosEmpleados[i] = cargarEmpleados();
            datosEmpleados[i].isEmpty = lleno;
            printf("\n");
            break;
        }

    }

}
void mostrarArrayEmpleados(Empleados datosEmpleados[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(datosEmpleados[i].isEmpty == lleno)
        {
            mostrarEmpleados(datosEmpleados[i]);
        }

    }

}
void menu(Empleados datosEmpleados[], int cant)
{
    int opcion;
    int opcionBorrar;
    int posicionVacia;
    char respuesta;
    do
    {
        printf("\nBienvenidos al programa para cargar Empleados.\n");
        printf("\n1.Cargar Empleados\n");
        printf("2.Mostrar lista de empleados\n");
        printf("3.Ordenar lista de empleados\n");
        printf("4.Eliminar elementos de la lista\n");
        printf("5.Verificar  si hay lugar en la lista para cargar mas datos\n");
        printf("6.Salir\n");

        opcion  = ingresarOpcion(1,6);

        switch(opcion)
        {
            case 1:
                system("cls");
                cargarArrayEmpleados(datosEmpleados, cant);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                printf("Nombre | legajo | sueldo    |sueldoAumento \n");
                mostrarArrayEmpleados(datosEmpleados, cant);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                ordenamientoEmpleadosSwitch(datosEmpleados,cant);
                break;
            case 4:
                system("cls");
                mostrarArrayEmpleados(datosEmpleados,cant);
                printf("\n");
                opcionBorrar = ingreseOpcionAborrar();
                borrarEmpleado(datosEmpleados,opcionBorrar,cant);
                printf("\nLa lista actualizada es:\n");
                mostrarArrayEmpleados(datosEmpleados,cant);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                posicionVacia = verificarEspacios(datosEmpleados,cant);
                if(posicionVacia == -1)
                {
                   printf("No hay mas espacio, no se pueden cargar mas datos.");
                }
                else
                {
                    printf("\nLa posicion %d esta vacia",posicionVacia);
                    printf("\nDesea ingresar datos de empleados?(s/n):");
                    fflush(stdin);
                    scanf("%c",&respuesta);
                    while(respuesta != 's' && respuesta != 'n')
                    {
                        printf("\nError,Desea ingresar datos de empleados?(s/n):\n");
                        fflush(stdin);
                        scanf("%c",&respuesta);
                    }
                    if(respuesta == 's')
                    {
                        datosEmpleados[posicionVacia-1] = cargarEmpleados();
                    }
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                printf("\nGracias por usar nuestro programa.\n");
                exit(-1);
                break;
        }

    }while(opcion != 6);

}
int verificarEspacios(Empleados datosEmpleados[],int cant)
{
    int i;
    int retorno;
    retorno =-1;
    for(i=0;i<cant;i++)
    {
        if(datosEmpleados[i].isEmpty == vacio)
        {
            retorno = i+1;
            break;
        }
    }

   return retorno;
}
//Algoritmo case 4
int ingresarOpcion(int min,int max)
{
    int opcion;

    printf("\nIngrese una opcion:");
    scanf("%d",&opcion);
    while(validacionNumerosEnteros(opcion,min,max))
    {
        printf("\nError,re-ingrese una opcion(1 a 6):");
        scanf("%d",&opcion);
    }
    return opcion;
}

int ingreseOpcionAborrar()
{
    int opcionBorrar;
    printf("Ingrese el numero de legajo del  empleado que desea borrar:");
    scanf("%d",&opcionBorrar);
    while(validacionNumerosEnteros(opcionBorrar,1,5000))
    {
        printf("\nError,re-ingrese el legajo(1 a 5000):");
        scanf("%d",&opcionBorrar);
    }

    return opcionBorrar;
}

void borrarEmpleado(Empleados datosEmpleados[],int opcionBorrar, int cant)
{
    int i;
    int guardarPosicion;
    guardarPosicion= 0;

    for(i=0;i<cant;i++)
    {
        if(datosEmpleados[i].legajo == opcionBorrar)
        {
            datosEmpleados[i].isEmpty = vacio;
            guardarPosicion = i;
        }
    }
    if(guardarPosicion == 0)
    {
        printf("\nNo se ha encontrado el legajo puesto.\n");
    }

}

//Algoritmo case 3
void ordenamientoEmpleadosSwitch(Empleados datosEmpleados[], int cant)
{
    int opcion;

    system("cls");
    printf("1.Ordenar por nombre del empleado\n");
    printf("2.Ordenar por legajo del empleado\n");
    printf("3.Volver al menu  principal\n");

    opcion = ingresarOpcion(1,3);
    switch(opcion)
    {
        case 1:
            OrdenarPorNombre(datosEmpleados,cant);
            printf("\nLa lista actualizada es:\n");
            mostrarArrayEmpleados(datosEmpleados, cant);
            system("pause");
            break;
        case 2:
            OrdenarPorlegajo(datosEmpleados,cant);
            printf("\nLa lista actualizada es:\n");
            mostrarArrayEmpleados(datosEmpleados, cant);
            system("pause");
            break;
        case 3:
            printf("\nVolviendo al menu principal\n");
            break;
    }

    system("cls");
}

void OrdenarPorNombre(Empleados datosEmpleados[],int cant)
{
    int i;
    int j;
    Empleados auxEmpleados;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(datosEmpleados[i].nombre,datosEmpleados[j].nombre)>0)
            {
                auxEmpleados= datosEmpleados[i];
                datosEmpleados[i] = datosEmpleados[j];
                datosEmpleados[j] = auxEmpleados;

            }
        }
    }
}
void OrdenarPorlegajo(Empleados datosEmpleados[],int cant)
{
    int i;
    int j;
    Empleados auxEmpleados;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(datosEmpleados[i].legajo > datosEmpleados[j].legajo)
            {
                auxEmpleados= datosEmpleados[i];
                datosEmpleados[i] = datosEmpleados[j];
                datosEmpleados[j] = auxEmpleados;
            }
        }
    }
}










