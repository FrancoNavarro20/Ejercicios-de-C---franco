#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "razas.h"
#define cMascotas 10
#define cRazas 4
#define LLENO 1
#define VACIO 0





void InicializarRazas(eRazas datosRazas[],ePais datosPaises[], int cantRazas)
{

    char descripcion[][30]={"siames","doberman","persa","pastor belga","dogo"};
    char tamanio[][20]={"chico","grande","mediano","grande"};
    //char pais[][30]={"tailandia","alemania","persia","belgica","argentina"};
    int  idRazas[] = {1,2,3,4,5};

    /*Pasar estos valores a un array de duenios*/
    int i;
    for(i=0;i<cantRazas;i++)
    {
        strncpy(datosRazas[i].descripcion,descripcion[i],30);
        strncpy(datosRazas[i].tamanio,tamanio[i],20);
        strncpy(datosRazas[i].datosPaises.nombrePais,datosPaises[i].nombrePais,30);
        //strncpy(datosRazas[i].pais,pais[i],30);
        datosRazas[i].idRazas = idRazas[i];
    }

}

//-------Mostrar listado de razas disponibles------


int mostrarRazas(eRazas datosRazas[],int cantRazas)
{
    int retorno = -1;
    int i;
    if(datosRazas !=NULL &&  cantRazas > 0)
    {   printf("\n  ID RAZAS  |  RAZAS DISPONIBLES \n");
        for(i=0;i<cantRazas;i++)
        {
            printf("      %-9d  %-14s \n",datosRazas[i].idRazas,datosRazas[i].descripcion);
            retorno = 0;
        }
    }

    return retorno;
}

//-------Mostrar listado de razas disponibles------


int mostrarRazasDisponibles(eRazas datosRazas[],int idRaza,int cantRazas)
{
    int retorno = -1;
    int i;
    if(datosRazas !=NULL && idRaza > 0 && cantRazas > 0)
    {   printf("\n   ID RAZAS  |   RAZAS DISPONIBLES \n");
        for(i=0;i<cantRazas;i++)
        {
            if(datosRazas[i].idRazas != idRaza)
            {
                printf("       %-9d  %-14s \n",datosRazas[i].idRazas,datosRazas[i].descripcion);
                retorno = 0;
            }

        }
    }

    return retorno;
}


/*
int mostrarMascotaYraza(eRazas datosRazas[],int cantRazas, char textoRaza[])
{
    int retorno = -1;
    int i;
    if(datosRazas !=NULL &&  cantRazas > 0)
    {   printf("\n   %s  \n",textoRaza);
        for(i=0;i<cantRazas;i++)
        {
            if()
            {

            }
            printf("   %-14s \n",datosRazas[i].descripcion);
        }
    }

    return retorno;
}

*/
