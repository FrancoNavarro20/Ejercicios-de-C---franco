#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validacionesYmenu.h"
#define VACIO 0
#define LLENO 1




//Menu funcion

int menu(char opciones[], char texto[], char textoError[])
{
    char guardarOpcion[100];
    int opcion;

    printf("%s\n",opciones);
    printf("%s",  texto);
    fflush(stdin);
    scanf("%[^\n]", guardarOpcion);
    while(validarEnteroIsdigit(guardarOpcion) == 0)
    {
        printf("%s",  textoError);
        fflush(stdin);
        scanf("%[^\n]", guardarOpcion);
    }

    opcion = atoi(guardarOpcion);
    //validarDatosInt(opcion,1,4,textoError);
    return opcion;
}

//------------------Ingreso de datos y validacion--------------------

int ingresarOpcionInt(char texto[])
{
    int opcion;
    if(texto != NULL)
    {
        printf("%s", texto);
        scanf("%d",&opcion);
    }

    return opcion;
}

float ingresarOpcionFloat(char texto[])
{
    float opcion;
    if(texto != NULL)
    {
        printf("%s", texto);
        scanf("%f",&opcion);
    }

    return opcion;
}

void ingresarOpcionSoloUnChar(char opcion, char texto[])
{
    if(texto != NULL)
    {
        printf("%s", texto);
        fflush(stdin);
        scanf("%c", &opcion);
    }
}


void ingresarOpcionChar(char opcion[], char texto[])
{

    if(opcion != NULL && texto != NULL)
    {
        printf("%s", texto);
        fflush(stdin);
        scanf("%[^\n]", opcion);
    }
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

float validarDatosFloat(float dato, float min, float max, char textoError[])
{
    float opcion;
    opcion = dato;

    while(opcion < min || opcion > max)
    {
        opcion = ingresarOpcionFloat(textoError);
    }

    return opcion;
}

int validarEnteroIsdigit(char texto[])
{
    int i;
    int retorno = 1;
    int cantidadTexto = strlen(texto);

    if(texto != NULL)
    {
        for(i=0;i<cantidadTexto;i++)
        {
            if(!isdigit(texto[i]))
            {
                retorno = 0;
            }
        }
    }

    return retorno;
}

int validarEnteroFlotante(char texto[])
{
    int i;
    int retorno = -1;
    int cantidadTexto = strlen(texto);

    if(texto != NULL)
    {
        for(i=0;i<cantidadTexto;i++)
        {
            if(!isdigit(texto[i])&& ispunct(texto[i+1]))
            {
                retorno = 0;
                break;
            }
        }
    }

    return retorno;
}


int validarCharCadena(char texto[])
{
    int i;
    int retorno = 1;
    int cantidadTexto = strlen(texto);

    if(texto != NULL)
    {
        for(i=0;i<cantidadTexto;i++)
        {
            if(!isalpha(texto[i]))
            {
                retorno = 0;
            }
        }
    }

    return retorno;
}

int opcionErrorChar(char opcion[],char textoError[])
{
    int retorno = -1;
    if(opcion != NULL && textoError != NULL)
    {
       while(validarEnteroIsdigit(opcion)== 0)
       {
            printf("%s", textoError);
            scanf("%s", opcion);
            retorno =0;
       }
    }

    return retorno;
}






