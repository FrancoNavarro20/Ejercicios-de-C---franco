#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ingresar_y_validar.h"
#define TAM 1000
#define VACIO 0
#define LLENO 1



//Funcion Inicialisar los isEmpty;

int ingresarOpcionInt(char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d",&opcion);

    return opcion;
}

int validarDatosInt(int dato, int min , int max, char textoError[])
{
    int opcion;
    opcion = dato;

    while(opcion < min || opcion > max)
    {
        opcion = ingresarOpcionInt(textoError);
    }


    return opcion;
}

