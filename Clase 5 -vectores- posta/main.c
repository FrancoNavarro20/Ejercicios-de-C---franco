#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Vectores.h"
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
    /*Mostrando los indices de los maximos!!*/

    return 0;
}//termina el MAIN




