#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "pais.h"
#include "mascotasYrazas.h"
#include "validacionesYmenu.h"
#define cMascotas 10
#define cRazas 4
#define LLENO 1
#define VACIO 0


//-------------------------------------switch  opciones-------------------------

void switchOpciones(eMascotas datosMascotas[],eRazas datosRazas[],ePais datosPaises[], int opcionMenu, int cantMascotas, int cantRazas, int cantPaises)
{
    //Variables case 1;
    char guardarOpcionRaza[30];
    char guardarOpcionPais[30];
    int opcionRaza;
    int opcionPais;
    int buscandoRazaDisponible;
    //Varaibles case 2;
    char guardarOpcionEliminarRaza[30];
    char guardarOpcionEliminarTodasLasRazas[30];
    int opcionEliminarRaza;
    int OpcionEliminarTodasLasRazas;
    int opcionMenuEliminar;
    //variables case 3
    char guardarOpcionModificarRaza[30];
    char guardarOpcionRazaIdModificacion[30];
    char guardarOpcionModificarPais[30];
    int opcionModificarRaza;
    int opcionRazaIdModificacion;
    int contadorPais1;
    int contadorPais2;
    int contadorPais3;
    int contadorPais4;
    int contadorPais5;
    int paisConMasMascotas;
    int opcionModificarPais;


    switch(opcionMenu)
    {
        case 1:
            system("cls");
            printf("||--------------CARGANDO LOS DATOS DE LAS MASCOTAS---------||\n");
            if(cargarMascotasArray(datosMascotas,cantMascotas)== -1)
            {
                printf("\nUpss, no  hay mas espacio  para cargar mascotas.\n");
            }
            else
            {
                printf("\nAcontinuacion escriba el  numero id de la raza que es su  mascota....\n");
                mostrarRazas(datosRazas,cantRazas);
                ingresarOpcionChar(guardarOpcionRaza,"\nIngrese el id de la raza de su mascota:");
                opcionErrorChar(guardarOpcionRaza, "\nError, re-ingrese el id de la raza de su mascota:");
                opcionRaza = atoi(guardarOpcionRaza);
                buscandoRazaDisponible = buscarRazaDisponible(datosRazas,opcionRaza,cantRazas);

                printf("\nAcontinuacion escriba el  numero id del pais que es su  mascota....\n");
                mostrarPaises(datosPaises,cantPaises);

                ingresarOpcionChar(guardarOpcionPais,"\nIngrese el id del pais de su mascota:");
                opcionErrorChar(guardarOpcionPais, "\nError, re-ingrese el id del pais de su mascota:");
                opcionPais = atoi(guardarOpcionPais);
                //datosMascotas[7].isEmpty = LLENO;
                PonerIdRaza(datosMascotas,opcionRaza,opcionPais,cantMascotas);

                if(buscandoRazaDisponible == -1)
                {
                    printf("\nNo se ha encontrado el id de la raza que ingreso.\n");
                }
                else
                {
                    printf("\nSe ha guardado la raza de su mascota correctamente.\n");
                    printf("\nLa lista de las  razas disponibles actualizada es:\n");
                    mostrarRazasDisponibles(datosRazas,opcionRaza,cantRazas);
                    printf("\nSe cargo exitosamente el cargo de la mascota.\n");
                }
            }
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");




                     printf("||-------------------ELIMINAR MASCOTA---------------------||");
                    mostrarMascotasYRazas(datosMascotas,datosRazas,datosPaises,cantMascotas,cantRazas,cantPaises);

                    ingresarOpcionChar(guardarOpcionEliminarRaza,"\nIngrese el CODIGO de la mascota que desea eliminar:");
                    opcionErrorChar(guardarOpcionEliminarRaza, "\nError, re-ingrese el CODIGO de la mascota que desea eliminar:");
                    opcionEliminarRaza = atoi(guardarOpcionEliminarRaza);

                    if(eliminarMascota(datosMascotas,datosRazas,opcionEliminarRaza,cantMascotas) == -1)
                    {
                        printf("\nNo se ha encontrado el CODIGO de la mascota que se desea eliminar.\n");
                    }
                    else
                    {
                        printf("\nLa lista actualizada es:\n");
                        mostrarMascotasYRazas(datosMascotas,datosRazas,datosPaises,cantMascotas,cantRazas,cantPaises);
                        printf("\nSe ha  eliminado exitosamente la mascota.\n");
                    }

                    printf("\nAcontinuacion le mostrartemos la lista de las mascotas organizadas por peso\n");
                    system("pause");
                    OrdenandoMacotasPorPeso(datosMascotas,datosRazas,cantMascotas,cantRazas);
                    mostrarMascotasYRazas(datosMascotas,datosRazas,datosPaises,cantMascotas,cantRazas,cantPaises);
                    break;


            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");

            printf("||-------------------MODIFICAR MASCOTA---------------------||");
            mostrarMascotasYRazas(datosMascotas,datosRazas,datosPaises,cantMascotas,cantRazas,cantPaises);
            ingresarOpcionChar(guardarOpcionModificarRaza,"\nIngrese el CODIGO de la raza que desea modificar:");
            //Validacion
            opcionErrorChar(guardarOpcionModificarRaza, "\nError, re-ingrese el CODIGO de la mascota que desea MODIFICAR:");
            opcionModificarRaza = atoi(guardarOpcionModificarRaza);
            if(ModificarMascota(datosMascotas,opcionModificarRaza,cantMascotas)== -1)
            {
               printf("\nNo se ha encontrado el CODIGO de la mascota que se desea MODIFICAR.\n");
            }
            else
            {
                printf("\nAcontinuacion escriba el  numero id de la raza que es su  mascota....\n");
                //ME MUESTRA LAS RAZAS DISPONIBLES;
                mostrarRazas(datosRazas,cantRazas);
                //LE PIDO AL USUARIO EL ID DE LA RAZA A LA CUAL PERTENECE SU MASCOTA;
                ingresarOpcionChar(guardarOpcionRazaIdModificacion,"\nIngrese el id de la raza de su mascota:");
                //VALIDA EL DATO INGRESADO;
                opcionErrorChar(guardarOpcionRazaIdModificacion, "\nError, re-ingrese el id de la raza de su mascota:");
                //CONVIERTE EL DATO DE UNA CADENA A UN ENTERO;
                opcionRazaIdModificacion = atoi(guardarOpcionRazaIdModificacion);

                printf("\nAcontinuacion escriba el  numero id del pais que es su  mascota....\n");
                mostrarPaises(datosPaises,cantPaises);

                ingresarOpcionChar(guardarOpcionModificarPais,"\nIngrese el id del pais de su mascota:");
                opcionErrorChar(guardarOpcionModificarPais, "\nError, re-ingrese el id del pais de su mascota:");
                opcionModificarPais = atoi(guardarOpcionModificarPais);
                PonerIdRazaYPaisModificado(datosMascotas,opcionRazaIdModificacion,opcionModificarPais,cantMascotas);
                printf("\nLa lista actualizada es:\n");
                mostrarMascotasYRazas(datosMascotas,datosRazas,datosPaises,cantMascotas,cantRazas,cantPaises);
                printf("\nLa mascota se a modificado correctamente.\n");
            }
            contadorPais1 =CantidadDeMascotasPorPais(datosMascotas,1,cantMascotas);
            contadorPais2 =CantidadDeMascotasPorPais(datosMascotas,2,cantMascotas);
            contadorPais3 =CantidadDeMascotasPorPais(datosMascotas,3,cantMascotas);
            contadorPais4 =CantidadDeMascotasPorPais(datosMascotas,4,cantMascotas);
            contadorPais5 =CantidadDeMascotasPorPais(datosMascotas,5,cantMascotas);
            printf("\nAcontinuacion mostraremos el pais con mas mascotas dentro de la veterinaria:\n\n");
            system("pause");
            PaisConMasMascotasEnLaVeterinaria(contadorPais1,contadorPais2,contadorPais3,contadorPais4,contadorPais5,&paisConMasMascotas);
            mostrarPaisConMasMascotas(paisConMasMascotas);
            system("pause");
            system("cls");
            break;
        default:
            printf("\nEl numero ingresado no es una opcion, precione cualquier tecla para re-ingresar la opcion .\n");
            getch();
            system("cls");
            break;
    }


}

//-----------------------------------mostrar  Mascotas Y  Razas---------------------------



int mostrarMascotasYRazas(eMascotas datosMascotas[], eRazas datosRazas[],ePais datosPaises[],int cantMascotas,int cantRazas, int cantPais)
{
    int retorno = -1;
    int i;
    int buscarRaza;

    if(datosMascotas !=NULL && datosMascotas !=NULL && cantMascotas > 0 &&cantRazas > 0)
    {   printf("\n CODIGO  |   NOMBRE      |  SEXO   |   EDAD  |  TIPO   |   PESO   |     RAZA        |    PAIS\n");
        for(i=0;i<cantMascotas;i++)
        {
            //Funcion buscar RAZA;
            buscarRaza = buscarRazaDisponible(datosRazas,datosMascotas[i].idRazas,cantRazas);
            //buscarPais = buscaPaisDisponible(datosPaises, datosPaises[i].idPais,cantPais);
            if(datosMascotas[i].idRazas == datosRazas[buscarRaza].idRazas && datosMascotas[i].isEmpty == LLENO)
            {
                printf("   %-6d   %-14s   %-9c   %-6d  %-9s %-9.2f %-18s %-9s\n",datosMascotas[i].codigoMascota,datosMascotas[i].nombreMascota,datosMascotas[i].sexo,datosMascotas[i].edad, datosMascotas[i].tipo, datosMascotas[i].pesoMascota,datosRazas[buscarRaza].descripcion, datosPaises[buscarRaza].nombrePais);
                retorno = 0;
            }
        }
    }

    return retorno;
}



//-------Mostrar listado de razas disponibles------

int buscarRazaDisponible(eRazas datosRazas[],int idRazas, int cantRazas)
{
    int retorno = -1;
    int j;
    if(datosRazas != NULL && cantRazas>0)
    {
        for(j=0;j<cantRazas;j++)
        {
            if(idRazas == datosRazas[j].idRazas)
            {
                retorno = j;
                break;
            }
        }
    }

    return retorno;
}


int PonerIdRaza(eMascotas datosMascotas[],int IdRaza ,int idPais,int cantMascotas)
{
    int retorno = -1;
    int j;
    if(datosMascotas != NULL && cantMascotas>0)
    {
        for(j=6;j<cantMascotas;j++)
        {
            if(datosMascotas[j-1].isEmpty == VACIO)
            {
                datosMascotas[j].isEmpty = LLENO;
                datosMascotas[j].idRazas = IdRaza;
                datosMascotas[j].idPais = idPais;
                retorno = 0;
                break;
            }
        }
    }

    return retorno;
}


int PonerIdRazaYPaisModificado(eMascotas datosMascotas[],int IdRaza ,int idPais,int cantMascotas)
{
    int retorno = -1;
    int j;
    if(datosMascotas != NULL && cantMascotas>0)
    {
        for(j=6;j<cantMascotas;j++)
        {
            if(datosMascotas[j].isEmpty == VACIO)
            {
                datosMascotas[j-1].isEmpty = LLENO;
                datosMascotas[j-1].idRazas = IdRaza;
                datosMascotas[j-1].idPais = idPais;
                retorno = 0;
                break;
            }
        }
    }

    return retorno;
}

//---------------------------------Eliminar mascota----------------------------------------------||

int eliminarMascota(eMascotas datosMascotas[],eRazas datosRazas[] ,int CodigoEliminar, int cantMascotas)
{
    int retorno = -1;
    char nombreMascota[51];

    int i;
    if(datosMascotas != NULL && datosRazas != NULL && CodigoEliminar > 0 && cantMascotas > 0)
    {
        for(i=0;i<cantMascotas;i++)
        {
            if(datosMascotas[i].codigoMascota == CodigoEliminar && datosMascotas[i].isEmpty == LLENO)
            {
                datosMascotas[i].isEmpty = VACIO;
                strncpy(nombreMascota, datosMascotas[i].nombreMascota,51);
                retorno = 0;
                break;
            }
        }
    }

    if(retorno == 0)
    {
         printf("\nLa mascota %s con el CODIGO %d se ha eliminado correctamente.\n", nombreMascota,CodigoEliminar);
    }

    return retorno;
}
/*
int eliminarRazaCompleta(eMascotas datosMascotas[],eRazas datosRazas[] ,int IdRaza, int cantMascotas)
{
    int retorno = -1;
    char Raza[51];

    int i;
    if(datosMascotas != NULL && datosRazas != NULL && CodigoEliminar > 0 && cantMascotas > 0)
    {
        for(i=0;i<cantMascotas;i++)
        {
            if(datosMascotas[i].idRazas == IdRaza && datosMascotas[i].isEmpty == LLENO)
            {
                datosMascotas[i].isEmpty = VACIO;
                strncpy(Raza, datosRazas[i].descripcion,51);
                retorno = 0;
                break;
            }
        }
    }

    if(retorno == 0)
    {
         printf("\nLa RAZA %s con el  %d se ha eliminado correctamente.\n", nombreMascota,CodigoEliminar);
    }

    return retorno;
}
*/
//---------------------------------Eliminar mascota----------------------------------------------||

int OrdenandoMacotasPorPeso(eMascotas datosMascotas[], eRazas datosRazas[],int cantMascotas,int cantRazas)
{
    int retorno = -1;
    int i,j;
    eMascotas auxMascotas;

    if(datosMascotas !=NULL && datosMascotas !=NULL && cantMascotas > 0 &&cantRazas > 0)
    {
        for(i=0;i<cantMascotas-1;i++)
        {
            for(j=i+1;j<cantMascotas;j++)
            {
                if(datosMascotas[i].pesoMascota > datosMascotas[j].pesoMascota)
                {
                   auxMascotas = datosMascotas[i];
                   datosMascotas[i] =datosMascotas[j];
                   datosMascotas[j] = auxMascotas;
                   break;
                }
            }

        }
    }

    return retorno;
}

//---------------------------------CONTADOR MASCOTA PAIS----------------------------------------------||

int CantidadDeMascotasPorPais(eMascotas datosMascotas[],int IdPais, int cantMascotas)
{
    int retorno = -1;
    int j;
    if(datosMascotas != NULL && cantMascotas>0)
    {
        for(j=0;j<cantMascotas;j++)
        {
            if(datosMascotas[j].idRazas == IdPais)
            {
                retorno = j+1;
            }
        }
    }

    return retorno;
}



int PaisConMasMascotasEnLaVeterinaria(int contPais1,int contPais2,int contPais3,int contPais4,int contPais5,int* maximo)
{
    int retorno = -1;

        if(contPais1>contPais2 &&contPais1>contPais3 &&contPais1>contPais4)
        {
            *maximo = 1;
            retorno = 0;
        }
        else if(contPais2>contPais3 && contPais2>contPais4)
        {
            *maximo= 2;
            retorno = 0;
        }
        else if(contPais3>contPais4)
        {
           *maximo= 3;
           retorno = 0;
        }
        else if(contPais4>contPais5)
        {
            *maximo= 4;
            retorno = 0;
        }
        else
        {
            *maximo= 5;
            retorno = 0;
        }


    return retorno;
}



int mostrarPaisConMasMascotas(int maximo)
{
    int retorno = -1;

    switch(maximo)
    {
        case 1:
            printf("\nEl pais con mas mascotas en la veterinaria es: tailandia\n");
            retorno = 0;
            break;
        case 2:
            printf("\nEl pais con mas mascotas en la veterinaria es: alemania\n");
            retorno = 0;
            break;
        case 3:
            printf("\nEl pais con mas mascotas en la veterinaria es: persia\n");
            retorno = 0;
            break;
        case 4:
            printf("\nEl pais con mas mascotas en la veterinaria es: belgica\n");
            retorno = 0;
            break;
    }

    return retorno;
}









