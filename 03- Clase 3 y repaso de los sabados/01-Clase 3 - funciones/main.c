#include <stdio.h>
#include <stdlib.h>

//Funciones realizar:
/*
    suma de numeros;
    resta
    multiplicacion
    division

    realizar sus cuentas;
*/

//Prototipo de funciones - importante!!!

int pedirPrimerNumero(); //Pedir numero uno;
int pedirSegundoNumero(); //pedir numero dos;
int sumaNumeros (int primerNumero, int segundoNumero); //suma
int restaNumeros (int primerNumero, int segundoNumero); //resta
int multiplicacionNumeros(int primerNumero, int segundoNumero); //multiplicacion
float divisionNumeros(int primerNumero, int segundoNumero); //division
void realizarCuentas(void); //realizador de cuentas!!

int main()
{
    printf("Buenos dias!! ingrese por favor los dos numeros \n");

    realizarCuentas();

    return 0;
}
//Funcion Suma
int sumaNumeros(int primerNumero, int segundoNumero)
{
    int suma;

    suma = primerNumero + segundoNumero;

    return suma;
}

//Funcion Resta;
int restaNumeros(int primerNumero,int segundoNumero)
{
    int resta;

    resta = primerNumero - segundoNumero;

    return resta;
}

//Function multiplicacion;
int multiplicacionNumeros(int primerNumero, int segundoNumero)
{
    int multiplicacion;

    multiplicacion = primerNumero * segundoNumero;

    return multiplicacion;
}

//Function division
float divisionNumeros(int primerNumero, int segundoNumero)
{
    float division;
    division = (float)primerNumero / (float) segundoNumero;


    return division;
}

//Function realizar cuentas;
void realizarCuentas(void)
{
    int ingresoPrimerNumero;
    int ingresoSegundoNumero;
    int suma;
    int resta;
    int multiplicacion;
    float division;

    /*
    printf("Ingrese el primer numero:");
    scanf("%d", &ingresoPrimerNumero);

    printf("ingrese el segundo numero:");
    scanf("%d", &ingresoSegundoNumero);
    */

    ingresoPrimerNumero = pedirPrimerNumero();
    ingresoSegundoNumero = pedirSegundoNumero();

    printf("\n");

    suma = sumaNumeros(ingresoPrimerNumero, ingresoSegundoNumero);
    printf("La suma de los numeros es: %d \n",suma);

    resta = restaNumeros(ingresoPrimerNumero, ingresoSegundoNumero);
    printf("La resta de los numeros es: %d \n", resta);

    multiplicacion = multiplicacionNumeros(ingresoPrimerNumero, ingresoSegundoNumero);
    printf("La multiplicacion de los numeros es: %d \n", multiplicacion);

    division = divisionNumeros(ingresoPrimerNumero, ingresoSegundoNumero);
    printf("La division de los numeros es: %.1f", division);

}

//Pedir numero uno;
int pedirPrimerNumero()
{
    int primerNumero;

    //Primer Numero
    printf("Ingrese un numero:");
    scanf("%d", &primerNumero);

    return primerNumero;
}

int pedirSegundoNumero()
{
    int SegundoNumero;

    //segundo Numero
    printf("Ingrese un numero:");
    scanf("%d", &SegundoNumero);

    return SegundoNumero;
}
















