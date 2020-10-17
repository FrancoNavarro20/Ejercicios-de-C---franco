#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define vacio 0
#define lleno 1
/*
1. Cargar un empleado: Se debera considerar cual es el espacio dentro del array para poder realizar la carga. En caso de no haber espacio disponible se debera notificar al usuario. Recomendamos hacer una funcion que permita encontrar el espacio disponible.
2. Mostrar el listado de empleados. Tener en cuenta que hay elementos del array que pueden no estar cargados.
3. Ordenar empleados.
	a.Por nombre
	b.Por sueldo
4. Eliminar un empledo. Deberan considerar el cambio de estado del empleado dentro del array (El mismo utilizado para el punto 1). Para eso se debera buscar un empleado en particular y cambiar su estado a vacio.
5. Modificar un empleado. La logica es muy parecida a la del ejercicio anterior. Solo que se permitira modificar el nombre del empleado, y no el estado. Se podra agregar otros campos a modificar, menos el legajo.

Tener en cuenta la mayor cantidad de detalles, como por ejemplo confirmaciones al momento de realizar algun cambio, informar al usuario si no existe el dato, retorno de la funcion para evitar mostrar mensajes dentro de cada funcion, etc.
*/
typedef  struct
{
    char nombre[20];
    int legajo;
    float sueldo;

}Empleados;

Empleados cargarEmpleado();
void cargarArrayEmpleados(Empleados array[], int cant);
void mostrarEmpleados (Empleados datos,int i);
void mostrarArrayEmpleados(Empleados datos[], int cant);
void ordenarPorSueldo(Empleados ordenarDatos[],int cant);

int main()
{
    int i,j;
    int opcion;
    int opcionEliminarEmpleado;
    int banderaDatos;
    int auxSueldo;
    int auxLegajo;
    char auxNombre[100];

    Empleados datosEmpleados[3];

    banderaDatos=0;
    i=1;
    do
    {
        printf("Cargando los datos de los empleados:\n");

        printf("\n1.Cargar  Empleado\n");
        printf("2.Mostrar empleados\n");
        printf("3.Ordenar empreados\n");
        printf("4.Eliminar empleado\n");
        printf("5.Salir\n");

        printf("\nIngrese una opcion:");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                switch(banderaDatos)
                {
                    case 0:
                       // cargarArrayEmpleados(datosEmpleados,2);
                        datosEmpleados[0]=cargarEmpleado();
                        banderaDatos= 1;
                       // system("pause");
                        break;
                    case 1:
                        datosEmpleados[1]=cargarEmpleado();
                        banderaDatos= 2;
                       // system("pause");
                        break;
                    case 2:
                        datosEmpleados[2]=cargarEmpleado();
                        banderaDatos= 3;
                       // system("pause");
                        break;
                    default:
                        system("cls");
                        printf("No puedes ingresar mas datos, cantidad de empleados lleno.");
                        break;
                }
                break;
            case 2:
                system("cls");
                switch(banderaDatos)
                {
                     case 1:
                        printf("\nPosicion | Nombres | legajo | sueldo\n");
                       // cargarArrayEmpleados(datosEmpleados,2);
                        mostrarEmpleados(datosEmpleados[0],i);
                        break;
                    case 2:
                        printf("\nPosicion | Nombres | legajo | sueldo\n");
                        mostrarEmpleados(datosEmpleados[0],i);
                        printf("\n");
                        mostrarEmpleados(datosEmpleados[1],i+1);
                        break;
                    case 3:
                        printf("\nPosicion | Nombres | legajo | sueldo\n");
                        mostrarEmpleados(datosEmpleados[0],i);
                        printf("\n");
                        mostrarEmpleados(datosEmpleados[1],i);
                        printf("\n");
                        mostrarEmpleados(datosEmpleados[2],i+2);
                        break;
                    default:
                        system("cls");
                        printf("No puedes ingresar mas datos, cantidad de empleados lleno.");
                        break;
                }
               // mostrarArrayEmpleados(datosEmpleados,2);
                printf("\n");
                system("pause");
                break;
            case 3:

                system("cls");
                //ordenamiento
                for(i=0;i<3-1;i++)
                {
                    for(j=i+1;j<3;j++)
                    {
                        if(datosEmpleados[i].legajo<datosEmpleados[j].legajo)
                        {
                        auxSueldo = datosEmpleados[i].sueldo;
                        datosEmpleados[i].sueldo= datosEmpleados[j].sueldo;
                        datosEmpleados[j].sueldo=auxSueldo;

                        auxLegajo = datosEmpleados[i].legajo;
                        datosEmpleados[i].legajo = datosEmpleados[j].legajo;
                        datosEmpleados[j].legajo = auxLegajo;

                        strcpy(auxNombre,datosEmpleados[i].nombre);
                        strcpy(datosEmpleados[i].nombre,datosEmpleados[j].nombre);
                        strcpy(datosEmpleados[j].nombre,auxNombre);
                        }
                    }
                }
                break;
            case 4:
                printf("Eliminando empleados:\n");
                printf("\n");
                mostrarArrayEmpleados(datosEmpleados,2);

                printf("Elija la pocicion del empleado que desea eliminar:");
                scanf("%d",&opcionEliminarEmpleado);

                for(i=0;i<2;i++)
                {
                    datosEmpleados[opcionEliminarEmpleado-1] = datosEmpleados[opcionEliminarEmpleado+1];
                    mostrarArrayEmpleados(datosEmpleados,2);
                }
                break;

        }




    }while(opcion != 5);




    return 0;
}

Empleados cargarEmpleado()
{
    Empleados datosEmpleados;

    printf("Ingrese el nombre del empleado:");
    fflush(stdin);
    scanf("%s",datosEmpleados.nombre);

    printf("Ingrese el legajo del empleado:");
    scanf("%d",&datosEmpleados.legajo);

    printf("Ingrese el sueldo del empleado:");
    scanf("%f",&datosEmpleados.sueldo);


    return  datosEmpleados;
}

void cargarArrayEmpleados(Empleados array[], int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {
        array[i] = cargarEmpleado();

    }
}

void mostrarEmpleados (Empleados datos,int i)
{
    printf("  %d      | %-8s|%6d    |$%6.2f",i,datos.nombre,datos.legajo,datos.sueldo);
}

void mostrarArrayEmpleados(Empleados datos[], int cant)
{
    int i;

    printf("\nPosicion | Nombres   |legajo |    sueldo\n");
    for(i=0;i<cant;i++)
    {
        mostrarEmpleados(datos[i],i+1);
        printf("\n");

    }

}
/*
void ordenarPorSueldo(Empleados ordenarDatos[],int cant)
{
    int i,j;
    int auxSueldo;
    int auxLegajo;
    char auxNombre[100];



    }
}
*/









