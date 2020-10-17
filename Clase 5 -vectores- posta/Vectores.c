#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Vectores.h"
#define T 5


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



