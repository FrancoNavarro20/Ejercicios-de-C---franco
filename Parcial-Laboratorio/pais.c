#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascotasYrazas.h"
#include "validacionesYmenu.h"
#include "pais.h"
#define cMascotas 10
#define cRazas 4
#define LLENO 1
#define VACIO 0



void InicializarPais(ePais datosPais[], int cantPais)
{
    char pais[][30]={"tailandia","alemania","persia","belgica","argentina"};
    int  codigoTelefonico[] = {66,49,98,32,54};
    int  idPais[] = {1,2,3,4,5};
    /*Pasar estos valores a un array de duenios*/
    int i;
    for(i=0;i<cantPais;i++)
    {
        strncpy(datosPais[i].nombrePais,pais[i],30);
        datosPais[i].codigoTelefonico = codigoTelefonico[i];
        datosPais[i].idPais = idPais[i];
    }

}

int mostrarPaises(ePais datosPaises[],int cantPais)
{
    int retorno = -1;
    int i;
    if(datosPaises !=NULL &&  cantPais > 0)
    {   printf("\n  ID PAIS  |  PAISES DISPONIBLES \n");
        for(i=0;i<cantPais;i++)
        {
            printf("      %-9d  %-14s \n",datosPaises[i].idPais,datosPaises[i].nombrePais);
            retorno = 0;
        }
    }

    return retorno;
}
/*
ePais cargarPais()
{
    ePais datosPais;

    printf("Ingrese el nombre del pais:");
    scanf("%s",datosPais.nombrePais);
    while(validarCharCadena(datosPais.nombrePais)== 0)
    {
        printf("Error,re-ingrese el nombre del pais:");
        scanf("%s",datosPais.nombrePais);
    }

}
*/

