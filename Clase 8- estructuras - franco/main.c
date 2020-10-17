#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#define T 2


int main()
{

    Alumnos Datos_1[T];

    /*
    Datos_1=cargarAlumnos();
    mostrarAlumnos(Datos_1);
    */
    printf("Ingresando los datos de los alumnos:\n");
    printf("\n");

    cargarArrayAlumnos(Datos_1,T);
    mostrarArrayAlumnos(Datos_1,T);


    return 0;
}











