#include <stdio.h>
#include <stdlib.h>

/*

1- ralizar una funcion que:
 reciba 5(cinco parámetros) :tres números flotantes, un puntero al máximo de los tres , un puntero al mínimo de los tres
retorne 1 si son los tres iguales o 0 si no lo son

*/

int CalcularMaximosYMinimos(float numero1,float numero2,float numero3, float* pNumMaximo,float* pNumMinimo);
int cargarMaximo(float numero1,float numero2,float numero3, float* pNumMaximo);
int cargarMinimo(float numero1,float numero2,float numero3, float* pNumMinimo);

int main()
{
    float numero1;
    float numero2;
    float numero3;
    float numMaximo;
    float numMinimo;
    int respuesta;
    numero1= 8;
    numero2= 1;
    numero3= 3;

    respuesta = CalcularMaximosYMinimos(numero1,numero2,numero3,&numMaximo,&numMinimo);

    if(respuesta == -1)
    {
        printf("Hubo un error");
    }
    else if(respuesta== 1)
    {
        printf("Los datos son iguales");
    }
    else
    {
        printf("El numero maximo es: %.2f",numMaximo);
        printf("El numero minimo es: %.2f",numMinimo);
    }

    return 0;
}

int CalcularMaximosYMinimos(float numero1,float numero2,float numero3, float* pNumMaximo,float* pNumMinimo)
{
    int retorno = -1;
    if(pNumMaximo != NULL && pNumMinimo !=NULL)
    {
        if(numero1== numero2&& numero1 == numero3 && numero2==numero3)
        {
            retorno = 1;
        }
        else if(cargarMaximo(numero1,numero2,numero3,pNumMaximo) == 1 &&  cargarMinimo(numero1,numero2,numero3,pNumMinimo)==1 )
        {
            retorno = 2;
        }

    }

    return retorno;
}

int cargarMaximo(float numero1,float numero2,float numero3, float* pNumMaximo)
{

    int retorno = -1;
    if(pNumMaximo != NULL)
    {

        if(numero1>numero2&&numero1>numero3)
        {
            *pNumMaximo = numero1;
            retorno =  1;
        }
        else if(numero2>numero3)
        {
            *pNumMaximo=numero2;
            retorno =  1;
        }
        else
        {
            *pNumMaximo =numero3;
            retorno =  1;
        }

    }

    return retorno;
}

int cargarMinimo(float numero1,float numero2,float numero3, float* pNumMinimo)
{

    int retorno = -1;
    if(pNumMinimo != NULL)
    {
        //Buscando minimo
        if(numero1<numero2&&numero1<numero3)
        {
            *pNumMinimo = numero1;
            retorno =  1;
        }
        else if(numero2<numero3)
        {
            *pNumMinimo=numero2;
            retorno =  1;
        }
        else
        {
            *pNumMinimo =numero3;
            retorno =  1;
        }

    }

    return retorno;
}

 /*
        else if(numero1>numero2&&numero1>numero3)
        {
            *pNumMaximo = numero1;
            retorno =  2;
        }
        else if(numero2>numero3)
        {
            *pNumMaximo=numero2;
            retorno =  2;
        }
        else
        {
            *pNumMaximo =numero3;
            retorno =  2;
        }
        */



        /*Buscando minimo
        if(numero1<numero2&&numero1<numero3)
        {
            *pNumMinimo = numero1;
            retorno =  2;
        }
        else if(numero2<numero3)
        {
            *pNumMinimo=numero2;
            retorno =  2;
        }
        else
        {
            *pNumMinimo =numero3;
            retorno =  2;
        }
        */

