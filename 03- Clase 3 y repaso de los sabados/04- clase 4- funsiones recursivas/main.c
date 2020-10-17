#include <stdio.h>
#include <stdlib.h> // esta libreria es para evitar que la consola se cierre automaticamente!!! atenti ajaja


//Prototype de funsiones
int calcularFactorial(int);
int calcularFactorialBucle(int);

int main()
{
    int numero;
    int resultado;
    int resultadoConBucle;


    printf("Ingrese un numero:");
    scanf("%d", &numero);


    resultado = calcularFactorial(numero);
    resultadoConBucle = calcularFactorialBucle(numero);


    printf("El numero factoriado es: %d \n", resultado);
    printf("El numero factoriado con bucle es: %d", resultadoConBucle);

    return 0;
}

long int calcularFactorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * calcularFactorial(numero-1);
    }

    return resultado;
}

int calcularFactorialBucle(int numero)
{

    int factorial;
    int i;


    factorial = 1;

    for(i=1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    return factorial;

}












