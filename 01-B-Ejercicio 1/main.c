#include <stdio.h>
#include <stdlib.h>

/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* //Variables
    int auxiliarInt;
    int numeroMaximo;
    int numeroMInimo;
    int acumulador;
    float promedio;
    int i;

    printf("Introduzca un numero:");
    scanf("%d", &auxiliarInt);

    //Inicializando;
    numeroMaximo = auxiliarInt;
    numeroMInimo = auxiliarInt;
    acumulador = auxiliarInt;

    for(i=0; i<4; i++)
    {
        printf("Intrduzca un numero:");
        scanf("%d", &auxiliarInt);

        //acumulador
        acumulador = acumulador + auxiliarInt;

        //maximos y minimos;
        if(auxiliarInt > numeroMaximo)
        {
            numeroMaximo = auxiliarInt;
        }

        if(auxiliarInt < numeroMInimo)
        {
            numeroMInimo = auxiliarInt;
        }

    }

    promedio = acumulador / 5;

    //valores finales;
    printf("El promedio es: %f\n", promedio);
    printf("El numero maximo es: %d\n", numeroMaximo);
    printf("El numero minimo es: %d\n", numeroMInimo);

    return 0;
* *******************************************************************/

int main()
{
    //variables
    int i;
    int numeroIngresado;
    int numeroMaximo;
    int numeroMinimo;
    int acumulador;
    float promedio;

    acumulador = 0;

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numeroIngresado);

        //Acumulador de numeros;
        acumulador = acumulador + numeroIngresado;

        if(i==0 || numeroIngresado > numeroMaximo)
        {
            numeroMaximo = numeroIngresado;
        }

        if(i == 0|| numeroIngresado < numeroMinimo)
        {
            numeroMinimo = numeroIngresado;
        }

    }

    promedio = (float)acumulador / i;

    //Asignando valores finales
    printf("El promedio es: %f \n", promedio);
    printf("El numero maximo es: %d \n", numeroMaximo);
    printf("El numero minimo es: %d \n", numeroMinimo);

    return 0;
}





















