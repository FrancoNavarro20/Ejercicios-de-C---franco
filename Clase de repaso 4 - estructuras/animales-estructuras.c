#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "animales-estructuras.h"
#define T 3
#define vacio 0
#define lleno 1

Animales CargarAnimales()
{
    Animales datosAnimalesLocal;

    printf("\nIngrese que animal tenes:");
    fflush(stdin);
    gets(datosAnimalesLocal.animal);

    printf("Ingrese la edad de la mascota:");
    scanf("%d", &datosAnimalesLocal.edad);
    while(datosAnimalesLocal.edad <1 || datosAnimalesLocal.edad>25)
    {
        printf("Edad maxima para las mascotas es de 25,re-ingrese la edad:");
        scanf("%d", &datosAnimalesLocal.edad);
    }
    printf("\n");
    return datosAnimalesLocal;
}

void CargarAnimalesArray(Animales datosAnimales[], int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {

        if(datosAnimales[i].isEmpty == vacio)
        {
            printf("\nDatos de la mascota %d ",i+1);
            datosAnimales[i] = CargarAnimales();
            datosAnimales[i].isEmpty =  lleno;
            break;
        }

    }

}

void mostrarAnimales(Animales mostrarDatosAnimales, int cant)
{

    printf("%-8s %4d \n",mostrarDatosAnimales.animal,mostrarDatosAnimales.edad);
}

void mostrarAnimalesArray(Animales mostrarDatosAnimales[], int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {
        if(mostrarDatosAnimales[i].isEmpty == lleno)
        {
            mostrarAnimales(mostrarDatosAnimales[i], cant);
        }

    }

}

int validarOpcion(int opcion)
{
    int retorno;
    retorno =0;
    if(opcion<1 || opcion>6)
    {
        retorno =1;
    }
    return retorno;
}


void menu(Animales datosAnimales[],int cant)
{
    int bandera;
    int banderaOpcion1Lleno;
    int banderaLugaresVacios;
    int opcionSubMenu;
    char nombreAnimal[30];
    char respuestaBorrarElemento;
    int buscarSiHayLugar;
    char cargarLugarVacio;
    int opcion;

    bandera = 0;
    banderaOpcion1Lleno=0;
    banderaLugaresVacios=0;
    do
    {
        printf("Ingreso de animales:\n");
        printf("\n1.Ingresar datos de los animales\n");
        printf("2.Mostrar lista  de los animales\n");
        printf("3.Ordenar lista de animales\n");
        printf("4.Eliminar un elemento de la lista de animales\n");
        printf("5.Permitir si hay lugar  para ingresar mas animales\n");
        printf("6.Salir\n");

        printf("\nIngrese una opcion:");
        scanf("%d",&opcion);

        while(opcion<1||opcion>6)
        {
            printf("\nError,re-ingrese una opcion:");
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
            case 1:
                if(banderaOpcion1Lleno != 3)
                {
                    system("cls");
                    printf("Recuerde que solo se puede ingresar hasta 10 animales:\n");
                    CargarAnimalesArray(datosAnimales,T);
                    bandera =1;
                    banderaOpcion1Lleno++;
                    system("cls");
                }
                else
                {
                    system("cls");
                    printf("Estan todos los lugares llenos , no puede ingresar mas datos.\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                }

                break;
            case 2:
                 system("cls");
                 if(bandera == 0 && banderaLugaresVacios ==0)
                 {
                    printf("Por favor primero ingrese los datos de los 10 animales y le mostraremos la lista.\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                 }
                 else
                 {
                    printf("\nAnimales | Edad\n");
                    mostrarAnimalesArray(datosAnimales, T);
                    printf("\n");
                    system("pause");
                    system("cls");
                 }
                break;
            case 3:
                if(bandera == 0)
                {
                    system("cls");
                    printf("Ingrese primero los datos de los animales por favor.\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    system("cls");
                    printf("\n1.Ordenar por nombre del animal\n");
                    printf("2.Ordenar por edad del animal\n");
                    printf("3.Volver al menu principal");
                }

                printf("\nIngrese una opcion:");
                scanf("%d",&opcionSubMenu);

                while(opcionSubMenu<1||opcionSubMenu>3)
                {
                    printf("\nError,re-ingrese una opcion:");
                    scanf("%d",&opcionSubMenu);
                }
                switch(opcionSubMenu)
                {
                    case 1:
                        printf("\nLos nombres se han ordenado correctamente\n");
                        OrdenarPorNombreAnimal(datosAnimales,cant);
                        printf("\nLa lista actualizada es:\n");
                        mostrarAnimalesArray(datosAnimales, T);
                        break;
                    case 2:
                        printf("\nLas edades de los animales se han ordenado correctamente\n");
                        OrdenarPorEdadAnimal(datosAnimales,cant);
                        printf("\nLa lista actualizada es:\n");
                        mostrarAnimalesArray(datosAnimales, T);
                        break;
                    case 3:
                        break;
                }
                printf("\n");
                system("pause");
                system("cls");
                break;
            case  4:
                if(bandera ==0)
                {
                    system("cls");
                    printf("Ingrese primero los datos de los animales por favor.\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    system("cls");
                    printf("Eliminar elementos de los animales:\n");
                    printf("\n");

                    mostrarAnimalesArray(datosAnimales, T);
                    printf("\n");

                    printf("Ingrese el nombre del animal que desea borrar:");
                    scanf("%s", nombreAnimal);

                    printf("Esta seguro que desea borrar %s? (s/n):",nombreAnimal);
                    fflush(stdin);
                    scanf("%c",&respuestaBorrarElemento);
                    while(respuestaBorrarElemento!='s'&&respuestaBorrarElemento!='n')
                    {
                        printf("Error,si esta seguro que desea borrar %s? (s/n):",nombreAnimal);
                        fflush(stdin);
                        scanf("%s",&respuestaBorrarElemento);
                    }

                    if(respuestaBorrarElemento == 's')
                    {
                        borrarElementoDelArray(datosAnimales,nombreAnimal,cant);
                    }

                    printf("\nLa lista actualizada es:\n");

                    mostrarAnimalesArray(datosAnimales, T);
                }

                system("\npause");
                system("cls");
                break;
            case 5:
                buscarSiHayLugar  = buscarLugar(datosAnimales,cant);
                if(buscarSiHayLugar == -1)
                {
                    printf("Esta lleno, no se pueden ingresar mas datos.");
                }
                else
                {
                    printf("la posicion %d esta vacia\n",buscarSiHayLugar);
                    printf("\ndesea cargar el elemento vacio? (s/n):");
                    fflush(stdin);
                    scanf("%c",&cargarLugarVacio);
                    while(cargarLugarVacio!='s'&&cargarLugarVacio!='n')
                    {
                        printf("\nError,desea cargar el elemento vacio? (s/n):");
                        fflush(stdin);
                        scanf("%c",&cargarLugarVacio);
                    }
                    if(cargarLugarVacio == 's')
                    {
                        datosAnimales[buscarSiHayLugar-1] = CargarAnimales();
                        datosAnimales[buscarSiHayLugar-1].isEmpty = lleno;
                        banderaLugaresVacios=1;
                    }

                 }
                system("cls");
                break;
        }
    }while(opcion !=6);


}
int devuelteUno(void)
{
    int numero;
    numero =1;

    return numero;
}
/*
void EntrandoAlasOpciones(int opcionMenu, Animales datosAnimales[], int cant)
{
}
*/
void borrarElementoDelArray(Animales datosAnimales[],char nombreAnimal[],int cant)
{
    int i;
    int guardarPosicion;

    guardarPosicion= -1;
    for(i=0;i<cant;i++)
    {
        if(strcmp(nombreAnimal,datosAnimales[i].animal)==0)
        {
            datosAnimales[i].isEmpty= vacio;
            guardarPosicion = i;
        }

    }

    if(guardarPosicion ==-1)
    {
        printf("\nNo se ha encontrado a la mascota.\n");
    }



}

void OrdenarPorNombreAnimal(Animales datosAnimales[],int cant)
{
    int i,j;
    Animales auxAnimales;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(datosAnimales[i].animal,datosAnimales[j].animal) > 0)
            {
                        auxAnimales = datosAnimales[i];
                        datosAnimales[i]= datosAnimales[j];
                        datosAnimales[j]=  auxAnimales;
            }
        }
    }

}
void OrdenarPorEdadAnimal(Animales datosAnimales[],int cant)
{
    int i,j;
    Animales auxAnimalesEdad;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(datosAnimales[i].edad<datosAnimales[j].edad)
            {
                auxAnimalesEdad = datosAnimales[i];
                datosAnimales[i]= datosAnimales[j];
                datosAnimales[j]=  auxAnimalesEdad;
            }
        }
    }

}

int buscarLugar(Animales datosAnimales[], int cant)
{
    int i;
    int retorno;

    for(i=0;i<cant;i++)
    {
        if(datosAnimales[i].isEmpty == vacio)
        {
            retorno = i+1;
            break;
        }
        else
        {
            retorno = -1;
        }
    }

    return retorno;
}


void inicializarIsEmpty(Animales datosAnimales[], int cant)
{
    int  i;

    for(i=0;i<cant;i++)
    {
        datosAnimales[i].isEmpty =  vacio;
    }

}




