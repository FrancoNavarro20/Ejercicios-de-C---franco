#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "duenios.h"
#define VACIO 0
#define LLENO 1


//-------------------HARDCODEANDO DUENIOS------------------------

void InicializarDuenios(eDuenios datosDuenios[], int cantDuenios)
{
    int idDuenio[]={1,2,3,4,5};
    char nombre[][30]={"Juan","Maria","Raquel","Jose","Luisa"};
    /*Pasar estos valores a un array de duenios*/
    int i;
    for(i=0;i<cantDuenios;i++)
    {
        datosDuenios[i].idDuenio = idDuenio[i];
        strncpy(datosDuenios[i].nombreDuenio,nombre[i],30);
    }

}

//-------------------MOSTRANDO TODOS LOS DUENIOS------------------------


int mostrarTodosLosDuenios(eDuenios datosDuenios[], int cantDuenios)
{
    int retorno = -1;
    int i;
    if(datosDuenios !=NULL && cantDuenios > 0)
    {   printf("\n  ID    |     NOMBRE    | \n");
        for(i=0;i<cantDuenios;i++)
        {
            retorno = 0;
            printf("   %-9d   %-8s \n",datosDuenios[i].idDuenio,datosDuenios[i].nombreDuenio);
        }
    }

    return retorno;
}








