#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascotasYrazas.h"
#include "validacionesYmenu.h"
#include "pais.h"
#define cMascotas 10
#define cRazas 5
#define cPais 5
#define LLENO 1
#define VACIO 0


/*
#-Se debe mostrar un listado de RAZAS con las mascotas que pertenecen a esa
raza
******************************** 3era parte
#Borrado lógico de una mascota del listado
#-Se debe mostrar un listado de mascotas ordenadas por peso.

int mostrarTodasLasMascotas(eMascotas datosMascotas[], int cantMascotas);
int mostrarRazas(eRazas datosRazas[], int cantRazas);
*/

//void switchOpciones(eMascotas datosMascotas[],eRazas datosRazas[], int opcionMenu, int cantMascotas, int cantRazas);


int main()
{
    eMascotas datosMascotas[cMascotas];
    eRazas datosRazas[cRazas];
    ePais datosPais[cPais];
    int opcionMenu;
    //Hardcodeando Razas;
    inicializar_IsEmty(datosMascotas,cMascotas);
    InicializarRazas(datosRazas,datosPais,cRazas);
    InicializarMascotas(datosMascotas);
    InicializarPais(datosPais,cPais);


    do
    {
        opcionMenu = menu("1.Alta mascota\n2.Eliminar mascota\n3.Modificar Mascota\n","Ingrese una opcion:","Error, re-ingrese la opcion:");
        switchOpciones(datosMascotas,datosRazas,datosPais,opcionMenu,cMascotas,cRazas,cPais);

    }while(opcionMenu !=  5);


    return 0;
}






    //MOSTRANDO  Razas  Y MASCOTAS;
    /*
    printf("\n----------------MOSTRANDO LAS MASCOTAS Y SUS RAZAS---------------------------\n");
    mostrarMascotasYRazas(datosMascotas,datosRazas,cMascotas,cRazas);
    */




/*


int mostrarTodasLasMascotas(eMascotas datosMascotas[], int cantMascotas)
{
    int retorno = -1;
    int i;
    if(datosMascotas !=NULL && cantMascotas > 0)
    {   printf("\n    NOMBRE      |  SEXO   |   EDAD  |  TIPO   \n");
        for(i=0;i<cantMascotas;i++)
        {
            if(datosMascotas[i].isEmpty == LLENO)
            {
                retorno = 0;
                printf("    %-14s   %-7c   %-6d  %-9s\n",datosMascotas[i].nombreMascota,datosMascotas[i].sexo,datosMascotas[i].edad, datosMascotas[i].tipo);
            }
        }
    }

    return retorno;
}


int mostrarRazas(eRazas datosRazas[], int cantRazas)
{
    int retorno = -1;
    int i;
    if(datosRazas !=NULL && cantRazas > 0)
    {   printf("\n  DESCRIPCION    |     TAMANIO    |   PAIS\n");
        for(i=0;i<cantRazas;i++)
        {
            retorno = 0;
            printf("   %-18s   %-14s %-8s\n",datosRazas[i].descripcion,datosRazas[i].tamanio,datosRazas[i].pais);
        }
    }

    return retorno;
}
*/
