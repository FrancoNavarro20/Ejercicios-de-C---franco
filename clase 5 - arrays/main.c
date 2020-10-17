#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define T 5

/*
1. Crear un vector de tipo entero, con capacidad para almacenar 10 números (Entre 1 y 20). Realizar un programa que permita:
a. Cargar secuencialmente dicho vector.
b. Mostrar solo los valores pares.
c. Mostrar cantidad de veces que se encontro el valor maximo, y los indices en donde se ubica dicho valor.
d. Mostrar cantidad de veces que se encontro el valor minimo, y los indices en donde se ubica dicho valor.

*/
// Prototypos
void mostrarPares(int numeros[]);
int maximoEntero(int numeros[]);
int minimoEntero(int numeros[]);
int contarApacionEnteros(int numeros[], int cant, int dato);
int pedirEnterosVectoresValidados(int numeros[], int cant, int max, int min);
//int validacionEnteros(int numeros[], int cant, int min, int max);
void posicionesDeVectores(int numeros[],int cant, int dato,char texto[]); //las posiciones son los indices en que numero  estan (0,1,2,3,4,5,6,7,....);

int main()
{
    system("color f0");
    //variables
    int numeros[10];
    int maximo;
    int minimo;
    int contadorMaximos;
    int contadorMinimos;


    /*
    int i;

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero (entre 1 y 20):");
        scanf("%d", &numeros[i]);
        while(numeros[i]<1 || numeros[i]>20)
        {
            printf("Error re-ingrese un numero(entre 1 y 20):");
            scanf("%d", &numeros[i]);
        }
    }
    */
    //Pedir numeros para el vector;
    pedirEnterosVectoresValidados(numeros, T, 20, 1);

    //Mostrando los pares atraves de una function
    mostrarPares(numeros); //Se le asigna el valor  del array sin los [] corchetes;

    //Sacando elmaximo y su cantidad de  maximos
    maximo = maximoEntero(numeros); //saca el maximo numero del array y su cantidad , imprime su cantidad;
    minimo = minimoEntero(numeros);
    printf("\nEl maximo es %d", maximo);
    printf("\nEl minimo es %d", minimo);

    contadorMaximos = contarApacionEnteros(numeros,T,maximo);
    contadorMinimos = contarApacionEnteros(numeros,T,minimo);

    printf("\nLa cantidad de maximos es de: %d",  contadorMaximos);
    printf("\nLa cantidad de minimos es de: %d",  contadorMinimos);

    //Apariciones de los maximos
    posicionesDeVectores(numeros,T,maximo,"La posicion de los indices maximos son:");//Tener cuidado y poner bien los parametros en  sus lugares;
    posicionesDeVectores(numeros,T,minimo,"La posicion de los indices minimos son:");

    printf("\n");
    /*Mostrando los indices de los maximos!!

    for(i=0;i<5;i++)
    {
        if(numeros[i] == maximo)
        {
           printf("\nLa posicion de los maximos es: %d", i); //La indices de los maximos
        }
    }


    //Mostrando los indices de los minimos!!

    for(i=0;i<5;i++)
    {
        if(numeros[i] == minimo)
        {
           printf("\nLa posicion de los minimos es: %d \n", i);
        }
    }
    */

    return 0;
}//termina el MAIN

int pedirEnterosVectoresValidados(int numeros[], int cant, int max, int min)
{
    int i;

    for(i=0;i<cant;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &numeros[i]);
        while(numeros[i]< min || numeros[i] > max)
        {
            printf("Error, re-ingrese el numero:");
            scanf("%d", &numeros[i]);
        }
    }



    return numeros[i];
}



void mostrarPares(int numeros[])
{
    int i;
     //Mostrando los numeros pares;
    for(i=0;i<5;i++)
    {
        if(numeros[i]%2 == 0)
        {
            printf("\nLos valores pares son: %d", numeros[i]);
        }

    }
}

int maximoEntero(int numeros[])
{
    int i;
    int maximo;

    //Mostrando el maximo
    for(i=0;i<5;i++)
    {
        if(i==0 || numeros[i]>maximo)
        {
            maximo = numeros[i];

        }
    }

    return maximo;
}

int minimoEntero(int numeros[])
{
    int i;
    int minimo;

    //Mostrando el maximo
    for(i=0;i<5;i++)
    {
        if(i==0 || numeros[i]<minimo)
        {
            minimo = numeros[i];

        }
    }

    return minimo;
}

int contarApacionEnteros(int numeros[], int cant, int dato)
{
    int cantidadApariciones;
    int i;

    cantidadApariciones =0;

    for(i=0;i<cant;i++)
    {
        if(numeros[i] == dato)
        {
            cantidadApariciones++;
        }
    }

    return cantidadApariciones++;
}
void posicionesDeVectores(int numeros[],int cant, int dato,char texto[])
{
    int i;

    for(i=0;i<cant;i++)
    {
        if( numeros[i] == dato)
        {
            printf("\n %s: %d",texto,i);
        }

    }


}





