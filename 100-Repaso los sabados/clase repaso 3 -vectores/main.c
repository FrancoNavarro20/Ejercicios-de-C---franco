#include <stdio.h>
#include <stdlib.h>


/*
1- realizar el pedido de 10 números entre -100 y 100 al usuario y guardarlos en un vector, luego de ese vector obtén
a- la suma de los números pares
b- que se muestren los números impares
c- la cantidad de ceros


2- ademas de lo anterior:
e-la suma de los impares
f-la cantidad de 5
g-la cantidad de 7
h- que se muestren los números pares
Hacer funciones y reutilizar funcionalidades

*/

int main()
{

    int listaNumeros[10];
    int sumaPares;
    int sumaImpares;
    int cantidadDeCeros;
    int cantidadDe5;
    int cantidadDe7;
    int i;

    cantidadDeCeros =0;
    cantidadDe5=0;
    cantidadDe7=0;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &listaNumeros[i]);
        while(listaNumeros[i]<-100 || listaNumeros[i]>100)
        {
            printf("Error,re-ingrese un numero (-100 a 100):");
            scanf("%d", &listaNumeros[i]);
        }

        sumaNumeros+=listaNumeros[i];
    }

    for(i=0;i<10;i++)
    {
        if(listaNumeros[i]%2 != 0)
        {
            sumaImpares+=listaNumeros[i];
            printf("\nLos numeros impares son: %d\n",listaNumeros[i]);
        }
        else
        {
            sumaPares+=listaNumeros[i];
        }

        switch(listaNumeros[i])
        {
            case 0:
                cantidadDeCeros++;
                break;
            case 5:
                cantidadDe5++;
                break;
            case 7:
                cantidadDe7++;
                break;
        }


    }

    printf("La cantidad de ceros es: %d\n",cantidadDeCeros);
    printf("La suma de los numeros pares es: %d \n", sumaPares);
    printf("La suma de los numeros impares es: %d \n", sumaImpares);
    printf("La cantidad de ceros es %d \n", cantidadDeCeros);
    printf("La cantidad de 5 es: %d \n", cantidadDe5);
    printf("La cantidad de 7 es: %d \n", cantidadDe7);



    return 0;
}
