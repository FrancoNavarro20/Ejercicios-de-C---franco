#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#define T 2

Alumnos cargarAlumnos()
{
    Alumnos datosAlumnos;

    //Cargando los alumnos;
    printf("Ingrese el nombre del alumno:");
    fflush(stdin);
    gets(datosAlumnos.nombre);

    printf("Ingrese la edad del alumno:");
    scanf("%d",&datosAlumnos.edad);

    printf("Ingrese la nota del alumno:");
    scanf("%d",&datosAlumnos.nota);
    printf("\n");
    return datosAlumnos;
}

void cargarArrayAlumnos(Alumnos array[], int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {
        array[i] = cargarAlumnos();
    }

}

void mostrarAlumnos(Alumnos datos)
{
    printf("%8s %4d %4d",datos.nombre,datos.edad,datos.nota);
}

void mostrarArrayAlumnos(Alumnos datos[], int cant)
{
    int i;

    printf("\n Nombres  edad  nota\n");
    for(i=0;i<T;i++)
    {
        mostrarAlumnos(datos[i]);
        printf("\n");
    }

}




