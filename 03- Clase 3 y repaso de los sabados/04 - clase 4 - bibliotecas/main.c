#include <stdio.h>
#include <stdlib.h>


//Prototype
float calcularFactorial(float numero);


int main()
{
    float numeroFactorial;

    numeroFactorial = calcularFactorial(5);

    printf("El numero factorial es %f", numeroFactorial);

    return 0;
}

float calcularFactorial(float numero)
{
   float factorial;
   int i;

   factorial = 1;

    for(i=1; i<numero; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

