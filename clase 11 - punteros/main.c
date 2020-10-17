#include <stdio.h>
#include <stdlib.h>

/*

1- funcion que reciba un parametro y lo cargue dentro de la función
2- Funcion que recibe dos numeros flotantes, y un puntero a flotante llamado maximo, retorna int.
esta funcion nos retorna el maximo en el puntero y 0 si son los dos iguales o 1 si hay un maximo
ejemplo :
a-si pasamos { 1,3} , el puntero deberia valer 3 y la funcion retornaria 1
b-si pasamos { 2,2} , el puntero deberia valer 2 y la funcion retornaria 0

*/
int pedirPunteroInt(int* numero);
float pedirPunteroFlotante(float numero1, float numero2, float* maximo);

int main()
{
    //VARIABLES FUNCION 1
    int edad;
    int* pEdad = NULL;
    //VARIABLES FUNCION 2
    float numero1;
    float numero2;
    float* maximo=NULL;
    float valorMaximo;
    int VerificarMaximo;

    pEdad = &edad;
    maximo = &valorMaximo;
    numero1 = 6.6;
    numero2 = 7.7;

    if(pedirPunteroInt(pEdad) == -1)
    {
        printf("\nhubo un error\n");
    }
    else
    {
        printf("\nEl dato se asigno correctamente.\n");
        printf("La edad es:%d\n", *pEdad);
    }

    //------FUNCION  2
    VerificarMaximo = pedirPunteroFlotante(numero1,numero2,maximo);
    if(VerificarMaximo ==  0)
    {
        printf("Los numeros ingresados son iguales");
    }
    else if(VerificarMaximo == 1)
    {
        printf("El numero maximo es: %.2f", *maximo);
    }
    else
    {
        printf("El numero maximo es: %.2f", *maximo);
    }


    return 0;
}

float pedirPunteroFlotante(float numero1, float numero2, float* maximo)
{
    int  retorno = -1;


    //maximo = &resultado;

    if(numero1>0 && numero2 > 0 && maximo != NULL)
    {
        if(numero1 > numero2)
        {
            *maximo = numero1;
            retorno = 1;
            //printf("el numero %.2f es mayor al numero %.2f",resultado,numero2);
        }
        else if(numero2 > numero1)
        {
            *maximo = numero2;
            retorno = 2;
            //printf("el numero %.2f es mayor al numero %.2f",resultado,numero1);
        }
        else
        {
            retorno = 0;
            //printf("Los numeros ingresados son iguales");
        }
    }

    return retorno;
}

int pedirPunteroInt(int* numero)
{
    int retorno = -1;

    if(numero != NULL)
    {
        printf("Ingrese la edad:");
        scanf("%d", numero);
        retorno = 0;
    }


    return retorno;
}
