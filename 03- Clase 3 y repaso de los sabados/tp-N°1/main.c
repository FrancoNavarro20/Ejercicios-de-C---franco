#include <stdio.h>
#include <stdlib.h> //libreria para los system
#include <conio.h>
#include <ctype.h> //Para las funciones isdegit, isalpha ,isspacce
#include <string.h>
/*
hacer una calculadora

*/

//Prototipos de funcion
float SumarFlotantes(float primerNumero, float segundoNumero);
float RestarFlotantes(float primerNumero, float segundoNumero);
float DividirFlotantes(float primerNumero, float segundoNumero);
float MultiplicacionFlotantes(float primerNumero, float segundoNumero);
float FactorialFlotante(float Numero);

int main()
{
    system("color f0");

    //variables
    float primerNumero;
    float segundoNumero;
    int opcion;
    float OperacionSuma;
    float OperacionResta;
    float OperacionDivision;
    float OperacionMultiplicacion;
    float OperacionFactorialUno;
    float OperacionFactorialDos;
    int banderaPrimerNumero;
    int banderaSegundoNumero;

    banderaPrimerNumero =1;
    banderaSegundoNumero =1;

    printf("Hola bienvenido a nuestra calculadora!!! \n");
    printf("\n");
    printf("Ingrese las opciones con los numeros corresponcientes y les resolveremos los promeblas :)");
    printf("\n");
    printf("\n");
    system("pause");
    system("cls");


    do
    {
        //MENU DE ENTRADA;
        printf(":::Calculadora::: \n \n");
        if(banderaPrimerNumero == 1)
        {
            printf("1.Ingrese 1er operando(A=x)\n");
        }
        else
        {
            printf("1.Ingrese 1er operando(A=%.2f)\n",primerNumero);
        }

        if(banderaSegundoNumero ==1)
        {
            printf("2.Ingrese 2do operando(B=y)\n");

        }
        else
        {
            printf("2.Ingrese 2do operando(B=%.2f)\n",segundoNumero);

        }

        printf("\n3.Calcular todas las operaciones");

        if(banderaPrimerNumero == 0 && banderaSegundoNumero == 0)
        {
            printf("\n  a) Calcular la suma(%.2f + %.2f)",primerNumero,segundoNumero);
            printf("\n  b) Calcular la resta(%.2f - %.2f)",primerNumero,segundoNumero);
            printf("\n  c) Calcular la division(%.2f / %.2f)",primerNumero,segundoNumero);
            printf("\n  d) Calcular la multiplicacion(%.2f * %.2f)",primerNumero,segundoNumero);
            printf("\n  f) Calcular la factorial A=%.2f! y el de B=%.2f \n",primerNumero,segundoNumero);
        }
        else
        {
            printf("\n  a) Calcular la suma(A + B)");
            printf("\n  b) Calcular la resta(A - B)");
            printf("\n  c) Calcular la division(A / B)");
            printf("\n  d) Calcular la multiplicacion(A * B)");
            printf("\n  f) Calcular la factorial A=! y el de B=! \n");
        }
        printf("\n4.informar resultados:");
        printf("\n5.Salir \n");

        //OPCION Y VALIDACION
        printf("Ingrese una opcion:");
        scanf("%d", &opcion);
        while(opcion<1 || opcion> 5)
        {
            printf("Error, re-ingrese una opcion(1 al 5):");
            scanf("%d", &opcion);
        }

        // SELECCION DE OPERACION;
        switch(opcion)
        {
            case 1:
                system("cls");
                printf("1.Ingrese 1er operando(A=x):");
                scanf("%f",&primerNumero);
                banderaPrimerNumero = 0;
                system("cls");
                break;
            case 2:
                system("cls");
                printf("2.Ingrese 2do operando(B=y):");
                scanf("%f",&segundoNumero);
                banderaSegundoNumero = 0;
                system("cls");
                break;
            case 3:
                if(banderaPrimerNumero == 0 && banderaSegundoNumero == 0)
                {
                   //Realizando las operaciones;
                    OperacionSuma = SumarFlotantes(primerNumero,segundoNumero);
                    OperacionResta = RestarFlotantes(primerNumero,segundoNumero);
                    OperacionDivision = DividirFlotantes(primerNumero,segundoNumero);
                    OperacionMultiplicacion = MultiplicacionFlotantes(primerNumero,segundoNumero);
                    OperacionFactorialUno=FactorialFlotante(primerNumero);
                    OperacionFactorialDos=FactorialFlotante(segundoNumero);

                    system("cls");
                    printf("\nBien hecho sean resulto todas las operacion !!!\n");
                    printf("\n");
                    getch(); //pausa
                    //system("pause");
                    system("cls");
                }
                else
                {   system("cls");
                    printf("Debes ingresar primero los numeros para que podamos resolver las operaciones.");
                    getch(); //pausa
                    system("cls");
                    continue;
                }
                break;
            case 4:
                system("cls");
                printf("a)El resultado de(%.2f + %.2f) es: %.2f \n",primerNumero,segundoNumero,OperacionSuma);
                printf("b)El resultado de(%.2f - %.2f) es: %.2f \n",primerNumero,segundoNumero,OperacionResta);

                if(segundoNumero == 0.00)
                {
                    printf("c)El resultado de(%.2f / %.2f) es: No se puede dividir por cero \n",primerNumero,segundoNumero);
                }
                else
                {
                    printf("c)El resultado de(%.2f / %.2f) es: %.2f \n",primerNumero,segundoNumero,OperacionDivision);
                }

                printf("d)El resultado de(%.2f * %.2f) es: %.2f \n",primerNumero,segundoNumero,OperacionMultiplicacion);
                printf("f)El factorial de %.2f es: %.2f y el factorial de %.2f es: %.2f \n",primerNumero,OperacionFactorialUno, segundoNumero,OperacionFactorialDos);

                printf("\n");
                system("pause");
                system("cls");
                break;
            case 5:
                printf("Muchas gracias!! vuelva pronto.");
                break;

            }



        //Dejar un espacio al volver ejecutarse el programa;
        printf("\n");

    }while(opcion != 5);


    return 0;
}

float SumarFlotantes(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado = primerNumero + segundoNumero;

    return resultado;
}

float RestarFlotantes(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado = primerNumero - segundoNumero;

    return resultado;
}

float DividirFlotantes(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado = primerNumero / segundoNumero;

    return resultado;
}

float MultiplicacionFlotantes(float primerNumero, float segundoNumero)
{
    float resultado;

    resultado = primerNumero * segundoNumero;

    return resultado;
}

float FactorialFlotante(float Numero)
{
    float resultado;
    int i;

    resultado = 1;

    for(i=1;i<=Numero;i++)
    {
        resultado = resultado*i;
    }

    return resultado;
}






        /*
        else
        {
            printf("1.Ingrese 1er operando(A=%.2f)\n",primerNumero);
            printf("2.Ingrese 2do operando(B=%.2f)\n",segundoNumero);

            printf("\n3.Calcular todas las operaciones");
            printf("\n  a) Calcular la suma(%.2f + %.2f)",primerNumero,segundoNumero);
            printf("\n  b) Calcular la resta(%.2f - %.2f)",primerNumero,segundoNumero);
            printf("\n  c) Calcular la division(%.2f / %.2f)",primerNumero,segundoNumero);
            printf("\n  d) Calcular la multiplicacion(%.2f * %.2f)",primerNumero,segundoNumero);
            printf("\n  f) Calcular la factorial A=%.2f! y el de B=%.2f \n",primerNumero,segundoNumero);

            printf("\n4.informar resultados:");

            printf("\n5.Salir \n");

        }
        */






































































//Suma
int Suma(int primerNumero, int segundoNumero)
{
    float resultado;

    resultado = (float)primerNumero + segundoNumero;

    return resultado;
}

//Resta
int Resta (int primerNumero, int segundoNumero)
{
    float resultado;

    resultado = (float)primerNumero - segundoNumero;

    return resultado;
}

//multiplicacion
int multiplicacion(int primerNumero, int segundoNumero)
{
    float resultado;

    resultado = (float)primerNumero * segundoNumero;


    return resultado;
}

//division
int division(int primerNumero, int segundoNumero)
{
    float resultado;

    if(segundoNumero != 0)
    {
        resultado = (float)primerNumero / segundoNumero;
    }

    return resultado;
}


















