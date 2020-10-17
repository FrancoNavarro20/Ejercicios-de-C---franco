#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*

Crear un algoritmo que permita ingresar nombre y apellido en variables separadas. Se deberá generar una tercer variable
que permita guardar los dos datos anteriores con el siguiente formato: Apellido, Nombre.
Tener en cuenta que el contenido de las dos primeras variables no se puede modificar.

*/

//Prototipos
void IngresarDatos(char dato1[], char texto[]);
void inicialMayuscula(char dato1[], int cadenaCompleta[]);
int main()
{
    char nombre[30];
    char apellido[30];
    char apellldoYnombre[60];
    int inialNombre;
    int i;

    /* Asi se pueden inicializar cadenas tambien para que no tome el valor basura

    strcat(apellldoYnombre,"")
    strcpy(apellldoYnombre,apellido) pasandole otra cadena para pisarle el valor basura;
    char apellldoYnombre[60] = "";

    */

    //char cad[8] = "ana";

    //printf("%d \n",strlen(cad)); me dice la cantidad de caracteres  que tiene la cadena
    /*
    printf("Ingrese su nombre:");
    gets(nombre);

    printf("Ingrese su apellido:");
    gets(apellido);
    */
    IngresarDatos(nombre,"Ingrese su nombre:");
    IngresarDatos(apellido,"Ingrese su apellido:");

    strcpy(apellldoYnombre,apellido);
    strcat(apellldoYnombre, ", ");
    strcat(apellldoYnombre,nombre);

    //Convirtiendo toda la cadena a minusculas
    strlwr(apellldoYnombre);

    //Convirtiendo la primera letra de la cadena "apellldoYnombre    "
    apellldoYnombre[0] = toupper(apellldoYnombre[0]);

    //el numero total de los caracteres se lo asigno a inicalNombre(ejemplo 15);
    inialNombre = strlen(apellldoYnombre);

    for(i=0;i<inialNombre;i++)
    {
        /*
        if(isspace(apellido[i])!= 0)
        {
           apellldoYnombre[i] = toupper(apellldoYnombre[i]);
        }
        */
        if(apellldoYnombre[i] == ' ')//tambien podria ser -> if(apellldoYnombre[i] == ' ');
        {
           apellldoYnombre[i+1] = toupper(apellldoYnombre[i+1]);
        }

    }

    printf("El nombre  y apellido es : %s", apellldoYnombre);

    return 0;
}

void IngresarDatos(char dato1[], char texto[])
{
    printf("%s",texto);
    gets(dato1);
}

/*
void inicialMayuscula(char dato1[], int cadenaCompleta[])
{
    //int inialNombre;
    int i;
    int cadenaCompleta

    cadenaCompleta = strlen(dato1);

    for(i=0;i<cadenaCompleta[i];i++)
    {
        if(i==0)
        {
           dato1[i] = toupper(dato1[0]);
        }

        if(i==0)
        {
           apellido[i] = toupper(apellido[0]);
        }
    }
}

*/




