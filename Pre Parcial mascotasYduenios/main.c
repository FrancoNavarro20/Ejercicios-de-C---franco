#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MascotasYduenios.h"
#include "utn_estructuras.h"
#define VACIO 0
#define LLENO 1
#define cMASCOTAS 15
#define cDUENIOS 5


/*
Parte 1.
Hardcodear las estructuras correspondientes.
En un menu:
1. Alta mascota: Se ingresaran los datos de una mascota en la lista de mascotas, si es que hay lugar.
2. Baja de mascota(baja logica)
3. Modificar mascota
4. Listar:
    a. Todas las mascotas
    b. Todos los dueños
    c.Todas las mascotas con sus dueños
    d. Los dueños con sus  mascotas
    e. Los datos de el/los dueños con mas mascotas
    f. Listado de dueños ordenados por cantidad de mascotas de manera ascendente.
 */


//-------Funciones para la biblioteca relacionada---------



int main()
{
    //Cambiando el color al programa;
    system("color f0");

    eMascotas datosMascotas[cMASCOTAS];
    eDuenios datosDuenios[cDUENIOS];
    int opcionMenu;



    if(inicializar_IsEmty(datosMascotas,cMASCOTAS)==0)
    {
        printf("Se han inicializado correctamente.\n");
    }
    InicializarMascotas(datosMascotas);
    InicializarDuenios(datosDuenios,cDUENIOS);



    do
    {

        opcionMenu = menu("1.Alta mascota\n2.Baja mascota\n3.Modificar mascota\n4.Listar","Ingrese una opcion:","Error, vuelva a ingresar la opcion(1 al 4):");
        switchOpciones(datosMascotas,datosDuenios,opcionMenu,cMASCOTAS, cDUENIOS);


    }while(opcionMenu!=5);

    return 0;
}





