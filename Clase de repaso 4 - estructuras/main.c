#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "animales-estructuras.h"
#define T 3
#define vacio 0
#define lleno 1

/*
necesitamos hacer una aplicaci�n para una veterinaria que tiene 10 lugares para atender a las mascotas.
deber�amos almacenar nombre de (m�ximo 10 letras o un solo car�cter para los que NO vieron cadena de caracteres) y edad de la mascota.
a-permitir el ingreso de las 10 mascotas
b-mostrar el listado de las mascotas ingresadas


*/



int main()
{

    Animales datosAnimales[T];


    //Inicializando los IsEmpty;
    inicializarIsEmpty(datosAnimales,T);


    //Algoritmo
    menu(datosAnimales,T);

    return 0;
}


