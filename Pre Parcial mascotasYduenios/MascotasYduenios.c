#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascotas.h"
#include "duenios.h"
#include "utn_estructuras.h"
#define VACIO 0
#define LLENO 1
#define cMASCOTAS 15
#define cDUENIOS 5


//--------------------------------------------Entrar a las opciones del switch----------------------------------------------


void switchOpciones(eMascotas datosMascotas[],eDuenios datosDuenios[], int opcionMenu, int cantMascotas, int cantDuenios)
{
    int opcionSubMenu;
    char GuardarcodigoMascota[10];
    int codigoMascota;
    int contadoresDuenios[5];


      switch(opcionMenu)
        {
            case 1:
                system("cls");
                if(cargarMascotasArray(datosMascotas,cMASCOTAS)== -1)
                {
                    printf("\nUpss!! no hay mas espacio para cargar mas  mascotas!!\n\n");
                }
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");

                //Primero muestro a todas las mascotas;
                mostrarTodasLasMascotas(datosMascotas,cantMascotas);
                ingresarOpcionChar(GuardarcodigoMascota,"Ingrese el codigo de la mascota que desea eliminar:");
                while(validarEnteroIsdigit(GuardarcodigoMascota)== 0)
                {
                    ingresarOpcionChar(GuardarcodigoMascota,"Error,re-ingrese el codigo de la mascota que desea eliminar:");
                }
                codigoMascota = atoi(GuardarcodigoMascota);

                if(BajaMascota(datosMascotas,codigoMascota,cantMascotas)==-1)
                {
                    printf("No se encontro el codigo de la mascota.");
                }

                printf("\nLa lista actualizada es:\n");
                mostrarTodasLasMascotas(datosMascotas,cantMascotas);

                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                //Primero muestro a todas las mascotas;
                mostrarTodasLasMascotas(datosMascotas,cantMascotas);

                //Le pido que ingrese una opcion;
                ingresarOpcionChar(GuardarcodigoMascota,"Ingrese el codigo de la mascota que desea modificar:");
                while(validarEnteroIsdigit(GuardarcodigoMascota)== 0)
                {
                    ingresarOpcionChar(GuardarcodigoMascota,"Error,re-ingrese el codigo de la mascota que desea modificar:");
                }
                codigoMascota = atoi(GuardarcodigoMascota);

                ModificarMascota(datosMascotas,codigoMascota,cantMascotas);
                printf("\nLa lista actualizada es:\n");
                mostrarTodasLasMascotas(datosMascotas,cantMascotas);

                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                opcionSubMenu = menu("1.Todas las mascotas\n2.Todos los duenios\n3.Todas las mascotas con sus duenios\n4.Los dueños con sus  mascotas\n5.Los datos de el/los dueños con mas mascotas\n6.Listado de dueños ordenados por cantidad de mascotas de manera ascendente.\n","Ingrese una opcion:", "Error, re-ingrese una opcion(1 o 3):");

                switch(opcionSubMenu)
                {
                    case 1:
                        //Mostrando todos las mascotas;
                        printf("----------------Mostrando a todas las mascotas:---------------------------\n");
                        mostrarTodasLasMascotas(datosMascotas,cantMascotas);
                        break;
                    case 2:
                        //Mostrando todos los duenios;
                        printf("\n\n----------------Mostrando a todos los Duenios:---------------------------\n");
                        mostrarTodosLosDuenios(datosDuenios,5);
                        break;
                    case 3:
                        //Mostrando todos los duenios;
                        printf("\n\n----------------Mostrando a todas las mascotas con sus dueños:---------------------------\n");
                        mostrarMascotasYduenios(datosMascotas,datosDuenios,cantMascotas,cantDuenios);
                        break;
                    case 4:
                         printf("\n\n----------------Mostrando a todos sus duenios con sus mascotas:---------------------------\n");

                         printf("\n\n----------------Duenio 1:-------------------\n");
                         MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,1,cantMascotas,cantDuenios);

                         printf("\n\n----------------Duenio 2:-------------------\n");
                         MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,2,cantMascotas,cantDuenios);

                         printf("\n\n----------------Duenio 3:-------------------\n");
                         MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,3,cantMascotas,cantDuenios);

                         printf("\n\n----------------Duenio 4:-------------------\n");
                         MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,4,cantMascotas,cantDuenios);

                         printf("\n\n----------------Duenio 5:-------------------\n");
                         MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,5,cantMascotas,cantDuenios);
                         break;
                     case 5:
                         //Contando la cantidad de mascotas de los duenios
                        contadoresDuenios[0] = contadorMascotasDuenios(datosMascotas,datosDuenios,1,cantMascotas,cantDuenios);
                        contadoresDuenios[1] = contadorMascotasDuenios(datosMascotas,datosDuenios,2,cantMascotas,cantDuenios);
                        contadoresDuenios[2] = contadorMascotasDuenios(datosMascotas,datosDuenios,3,cantMascotas,cantDuenios);
                        contadoresDuenios[3] = contadorMascotasDuenios(datosMascotas,datosDuenios,4,cantMascotas,cantDuenios);
                        contadoresDuenios[4] = contadorMascotasDuenios(datosMascotas,datosDuenios,5,cantMascotas,cantDuenios);

                        //Mostrando el dueño  con  mas mascotas;
                        DuenioConMasMascotas_iguales(contadoresDuenios,datosMascotas,datosDuenios,cantMascotas,cantDuenios);

                        break;
                    default:
                        printf("\nNo se ha encontrado la opcion puesta.\n");
                        break;
                }
                system("pause");
                system("cls");
                break;
            default:
                printf("\nLa opcion ingresada no es correcta.\n");
                system("pause");
                system("cls");
                break;

        }


}

//--------------------------------------------MostrarMascotas  Y  Duenios----------------------------------------------

int mostrarMascotasYduenios(eMascotas datosMascotas[], eDuenios datosDuenios[],int cantMascotas, int cantDuenios)
{
    int retorno = -1;
    int i,j;
    if(datosMascotas != NULL && datosMascotas != NULL && cantMascotas > 0 && cantDuenios > 0)
    {
        printf("\n CODIGO   |        NOMBRE           |   EDAD  |  TIPO   |   DUENIO\n");
        for(i=0;i<cantMascotas;i++)
        {
            for(j=0;j<cantDuenios;j++)
            {
                if(datosMascotas[i].idDuenio == datosDuenios[j].idDuenio && datosMascotas[i].isEmpty == LLENO)
                {
                    printf("  %-14d   %-19s   %-5d   %-10s  %-9s\n",datosMascotas[i].codigoMascota,
                                                                  datosMascotas[i].nombreMascota,
                                                                  datosMascotas[i].edad,
                                                                  datosMascotas[i].tipo,
                                                                  datosDuenios[j].nombreDuenio);
                    retorno = 0;
                }
            }

        }
    }
    return retorno;
}


//-----------------------------------MOSTRAR DUEÑOS CON SU RESPECTIVAS MASCOTAS-----------------------------------------

int MostrarDueniosConSusAnimales(eMascotas datosMascotas[],eDuenios datosDuenios[],int idDuenioPuesto ,int cantMascotas,int cantDuenios)
{
    int retorno = -1;
    int i,j;
    if(datosMascotas !=NULL && cantMascotas > 0)
    {   printf("\n DUENIO   |       MASCOTA           |   EDAD  |  TIPO   \n");
        for(i=0;i<cantMascotas;i++)
        {

            for(j=0;j<cantDuenios;j++)
            {
                if(datosMascotas[i].idDuenio == datosDuenios[j].idDuenio && datosMascotas[i].idDuenio == idDuenioPuesto)
                {
                    printf("  %-14s   %-19s   %-5d   %-9s \n",datosDuenios[j].nombreDuenio,datosMascotas[i].nombreMascota,datosMascotas[i].edad,datosMascotas[i].tipo);
                    retorno = 0;
                }
            }

        }
    }

    return retorno;
}

//-----------------------------------CONTADOR  DUENIOS----------------------------------------------------
int contadorMascotasDuenios(eMascotas datosMascotas[],eDuenios datosDuenios[],int idDuenioPuesto ,int cantMascotas,int cantDuenios)
{
    int retorno = 0;
    int i,j;
    if(datosMascotas !=NULL && cantMascotas > 0)
    {
        for(i=0;i<cantMascotas;i++)
        {

            for(j=0;j<cantDuenios;j++)
            {
                if(datosMascotas[i].idDuenio == datosDuenios[j].idDuenio && datosMascotas[i].idDuenio == idDuenioPuesto)
                {
                    retorno++;
                }
            }

        }
    }

    return retorno;
}

//--------------------------------------DUENIO  CON  MAS MASCOTAS defectuoso---------------------------------------------------------------

int DuenioConMasMascotas_iguales(int contadoresDuenios[],eMascotas datosMascotas[], eDuenios datosDuenios[],int cantMascotas,int cantDuenios)
{
    int retorno =-1;
    if(contadoresDuenios != NULL)
    {
        if(contadoresDuenios[0] >= contadoresDuenios[1] && contadoresDuenios[0] > contadoresDuenios[2] && contadoresDuenios[0] > contadoresDuenios[3] && contadoresDuenios[0] > contadoresDuenios[4])
        {
            MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,1,cantMascotas,cantDuenios);
            retorno =0;
        }
        else if(contadoresDuenios[1] > contadoresDuenios[2] && contadoresDuenios[1] > contadoresDuenios[3] && contadoresDuenios[1] > contadoresDuenios[4])
        {
            MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,2,cantMascotas,cantDuenios);
            retorno =0;
        }
        else if(contadoresDuenios[2] > contadoresDuenios[3] && contadoresDuenios[2] > contadoresDuenios[4])
        {
            MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,3,cantMascotas,cantDuenios);
            retorno =0;
        }
        else
        {
            MostrarDueniosConSusAnimales(datosMascotas,datosDuenios,4,cantMascotas,cantDuenios);
            retorno =0;
        }
    }

   return retorno;
}


