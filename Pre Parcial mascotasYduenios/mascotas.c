#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascotas.h"
#include "utn_estructuras.h"
#define VACIO 0
#define LLENO 1


/*
Parte 1.
Hardcodear las estructuras correspondientes.
En un menu:
1. Alta mascota: Se ingresaran los datos de una mascota en la lista de mascotas, si es que hay lugar.
2. -
3. -
4. Listar:
    a. Todas las mascotas
    b. Todos los dueños

*/



int inicializar_IsEmty(eMascotas datosMascotas[], int cant)
{
    int retorno = -1;
    int i;
    if(datosMascotas != NULL && cant >0)
    {
        for(i=0;i<cant;i++)
        {
            datosMascotas[i].isEmpty = VACIO;
            retorno =0;
        }
    }

    return retorno;
}


//-------------------------------------------HARDCODEANDO MASCOTAS-----------------------------------------


void InicializarMascotas(eMascotas datosMascotas[])
{
    int codigo[]={100,200,300,400,500,600,700,800,900,1000};
    char nombre[][20]={"Michi","Firulais","Dobby","Bobby","Chatran","Pucky","Michifus","Bolt","Dexter","Ayudante de santa"};
    int edad[]={3,2,4,1,2,3,1,5,6,2};
    char tipo[][20]={"Gato","Perro","Perro","Perro","Gato","Gato","Gato","Perro","Gato","Perro"};
    int duenio[]={1,2,1,4,2,3,5,5,1,2};
    /*Pasar estos valores a  un array de mascotas*/
    int  i;
    for(i=0;i<10;i++)
    {
        datosMascotas[i].codigoMascota = codigo[i];
        strcpy(datosMascotas[i].nombreMascota,nombre[i]);
        datosMascotas[i].edad = edad[i];
        strcpy(datosMascotas[i].tipo,tipo[i]);
        datosMascotas[i].idDuenio = duenio[i];
        datosMascotas[i].isEmpty = LLENO;
    }

}
//---------------------------------------CARGANDO UNA SOLA MASCOTA-----------------------------------------


eMascotas cargarUnaSolaMascota()
{
    eMascotas datosMascotasLocal;
    char edadAnimal[20];
    char idDuenio[20];
    //Nombre de  la  mascota;
    printf("Ingrese el nombre de la mascota:");
    fflush(stdin);
    scanf("%[^\n]", datosMascotasLocal.nombreMascota);
    while(validarCharCadena(datosMascotasLocal.nombreMascota)== 0)
    {
        printf("Error solo letras,re-ingrese el nombre de la mascota:");
        fflush(stdin);
        scanf("%[^\n]",datosMascotasLocal.nombreMascota);
    }

    //TIPO de  la  mascota;
    printf("Ingrese el tipo de la mascota:");
    fflush(stdin);
    scanf("%[^\n]", datosMascotasLocal.tipo);
    while(validarCharCadena(datosMascotasLocal.tipo)== 0)
    {
        printf("Error solo letras,re-ingrese el tipo de la mascota:");
        fflush(stdin);
        scanf("%[^\n]",datosMascotasLocal.nombreMascota);
    }

    //Edad de la mascota;
    printf("Ingrese la edad de la mascota:");
    fflush(stdin);
    scanf("%s", edadAnimal);
    while(validarEnteroIsdigit(edadAnimal) == 0)
    {
        printf("Error solo numeros, re-ingrese la edad de la mascota:");
        fflush(stdin);
        scanf("%s", edadAnimal);
    }

    datosMascotasLocal.edad= atoi(edadAnimal);

    //Id del DUENIO de la mascota;
    printf("Ingrese el id del duenio de la mascota(1,2,3,4,5):");
    fflush(stdin);
    scanf("%s", idDuenio);
    while(validarEnteroIsdigit(idDuenio) == 0)
    {
        printf("Error solo numeros, re-ingrese la edad de la mascota(1,2,3,4,5):");
        fflush(stdin);
        scanf("%s", idDuenio);
    }

    datosMascotasLocal.idDuenio= atoi(idDuenio);
    validarDatosInt(datosMascotasLocal.idDuenio,1,5,"Error, re-ingrese la edad de la mascota(1,2,3,4,5):");
    return datosMascotasLocal;
}

//--------------------------------CARGANDO LAS MASCOTAS---------------------------------------


int cargarMascotasArray(eMascotas datosMascotas[], int cant)
{
    int retorno= -1;
    int i;
    if(datosMascotas != NULL &&  cant >0)
    {
        for(i=0;i<cant;i++)
        {
            if(datosMascotas[i].isEmpty == VACIO)
            {
                retorno = 0;
                datosMascotas[i] = cargarUnaSolaMascota();
                datosMascotas[i].codigoMascota = datosMascotas[i-1].codigoMascota + 100;
                datosMascotas[i].isEmpty = LLENO;
                break;
            }

        }
    }

    return retorno;
}


//------------------------------BUSCANDO LUGAR VACIO PARA CARGAR MASCOTAS-----------------------------------------
int BuscarLugarVacio(eMascotas datosMascotas[], int cant)
{
    int retorno= -1;
    int i;
    if(datosMascotas != NULL &&  cant >0)
    {
        for(i=0;i<cant;i++)
        {
            if(datosMascotas[i].isEmpty == VACIO)
            {
                retorno = i+1;
            }

        }
    }

    return retorno;
}


//------------------------------MOSTRAR UNA SOLA MASCOTA-----------------------------------------



int mostrarTodasLasMascotas(eMascotas datosMascotas[], int cantMascotas)
{
    int retorno = -1;
    int i;
    if(datosMascotas !=NULL && cantMascotas > 0)
    {   printf("\n CODIGO   |        NOMBRE           |   EDAD  |  TIPO   \n");
        for(i=0;i<cantMascotas;i++)
        {
            if(datosMascotas[i].isEmpty == LLENO)
            {
                retorno = 0;
                printf("  %-14d   %-19s   %-5d   %-9s \n",datosMascotas[i].codigoMascota,datosMascotas[i].nombreMascota,datosMascotas[i].edad,datosMascotas[i].tipo);
            }
        }
    }

    return retorno;
}



//------------------------------ELIMINAR MASCOTA (BAJA LOGICA)-----------------------------------------


int BajaMascota(eMascotas datosMascotas[], int codigoMascota, int cant)
{
    int retorno = -1;
    char nombreMascota[30];
    char tipoMascota[30];

    int i;
    if(datosMascotas != NULL && codigoMascota > 0 && cant > 0)
    {
        for(i=0;i<cant;i++)
        {
            if(datosMascotas[i].codigoMascota == codigoMascota)
            {
                retorno = 0;
                datosMascotas[i].isEmpty = VACIO;
                strncpy(nombreMascota, datosMascotas[i].nombreMascota,30);
                strncpy(tipoMascota, datosMascotas[i].tipo,30);
                break;
            }
        }


    }

    if(retorno == 0)
    {
         printf("\nLa mascota %s es un  %s con el codigo %d se ha eliminado correctamente.\n", nombreMascota, tipoMascota, codigoMascota);
    }

    return retorno;
}

//-----------------------------------MODIFICAR MASCOTA-----------------------------------------

int ModificarMascota(eMascotas datosMascotas[], int codigoMascotas,int cant)
{
    int retorno = -1;
    int i;
    if(datosMascotas != NULL && codigoMascotas > 0 && cant > 0)
    {
        for(i=0;i<cant;i++)
        {
            if(datosMascotas[i].codigoMascota == codigoMascotas)
            {
                datosMascotas[i].isEmpty = VACIO;
                printf("\nModificando la MASCOTA:\n");
                datosMascotas[i] = cargarUnaSolaMascota();
                datosMascotas[i].isEmpty = LLENO;
                datosMascotas[i].codigoMascota = datosMascotas[i-1].codigoMascota + 100;
                printf("\n\nLa mascota fue modificado correctamente.\n");
                retorno = 0;
                break;
            }
        }
    }


    return retorno;
}


