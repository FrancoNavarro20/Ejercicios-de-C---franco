#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascotas.h"
#include "validacionesYmenu.h"
#define cMascotas 10
#define cRazas 4
#define LLENO 1
#define VACIO 0

//------------iSEmpty-------------------------------
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
           // printf("%d\n", datosMascotas[i].isEmpty);
        }
    }

    return retorno;
}


void InicializarMascotas(eMascotas datosMascotas[])
{
    int codigo[]={100,200,300,400,500,600,700};
    char nombre[][20]={"Michi","Firulais","Dobby","Bobby","Pucky","Rocky","Roke"};
    int edad[]={3,2,4,1,2,3,7};
    char tipo[][20]={"Gato","Perro","Perro","Gato","Gato","Perro","Perro"};
    char sexo[]={'m','f','m','f','m','m','m'};
    float peso[] = {8.5,3.5,6,2.7,9.8,9.9,8.9};
    int  idRazas[] = {4,2,1,3,2,5,2};
    int  idPaises[] = {4,2,1,3,2,5,2};
    /*Pasar estos valores a  un array de mascotas*/
    int  i;
    for(i=0;i<7;i++)
    {
        datosMascotas[i].codigoMascota = codigo[i];
        strcpy(datosMascotas[i].nombreMascota,nombre[i]);
        datosMascotas[i].edad = edad[i];
        strcpy(datosMascotas[i].tipo,tipo[i]);
        datosMascotas[i].sexo = sexo[i];
        datosMascotas[i].idRazas = idRazas[i];
        datosMascotas[i].idPais = idPaises[i];
        datosMascotas[i].pesoMascota = peso[i];
        datosMascotas[i].isEmpty = LLENO;
    }

}

//----------------CARGAR UNA SOLA MASCOTA-----------------------


eMascotas cargarUnaSolaMascota()
{
    eMascotas datosMascotasLocal;
    char edadAnimal[20];
    //char pesoAnimal[20];
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
        scanf("%[^\n]",datosMascotasLocal.tipo);
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

    //Edad de la mascota;
    printf("Ingrese el Sexo de la mascota:");
    fflush(stdin);
    scanf("%c", &datosMascotasLocal.sexo);
    while(datosMascotasLocal.sexo !='m'  && datosMascotasLocal.sexo != 'f')
    {
        printf("Error,re-ingrese el sexo del animal(m o f):");
        fflush(stdin);
        scanf("%c",&datosMascotasLocal.sexo);
    }

    //Peso de la mascota;
    printf("Ingrese el peso de la mascota (ejemplo 4.4 o 7.7):");
    scanf("%f",  &datosMascotasLocal.pesoMascota);
    while(datosMascotasLocal.pesoMascota <  0)
    {
        printf("Error,re-ingrese el peso del animal:");
        scanf("%f",&datosMascotasLocal.pesoMascota);
    }

    return datosMascotasLocal;
}

//----------------CARGAR MASCOTAS-----------------------

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
                break;
            }

        }
    }

    return retorno;
}



//----------------MODIFICAR MASCOTA-----------------------||


int ModificarMascota(eMascotas datosMascotas[], int idModificador,int cantMascotas)
{
    int retorno = -1;
    int i;
    if(datosMascotas != NULL && idModificador > 0 && cantMascotas > 0)
    {
        for(i=0;i<cantMascotas;i++)
        {
            if(datosMascotas[i].codigoMascota == idModificador)
            {
                printf("\nModificando la mascota:\n");
                datosMascotas[i].isEmpty = VACIO;
                datosMascotas[i] = cargarUnaSolaMascota();
                datosMascotas[i].codigoMascota =  idModificador;
                /*datosMascotas[i].idRazas= i+1;
                datosMascotas[i].idPais = i+1;
                datosMascotas[i].isEmpty = LLENO;
                */
                retorno = 0;
                break;
            }
        }
    }


    return retorno;
}






