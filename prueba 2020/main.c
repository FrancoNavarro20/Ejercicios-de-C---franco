#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

2) Crear una función que reciba una cadena de caracteres
y un carácter. La función deberá buscar cada incidencia del carácter pasado en la cadena y lo reemplazará por un '*'. Retornará la cantidad de veces que pudo reemplazar el carácter.
 Crear la función y probarla desde el main. *
*/



/*
3) Crear la estructura eProducto que tiene id, precio y estadoProceso. Realizar una función que recibe como uno de sus parámetros un array
del tipo eProducto y un valor. La función deberá retornar la sumatoria de todos los precios, siempre
 y cuando el precio del producto supere el valor pasado como parámetro. La función se encargará, además,
de cambiar el estado de dichos elementos. Desde el main probar la función y
ostrar aquellos productos que hayan sido incluidos en la suma. *


*/

//Estructura
typedef struct
{
  int id;
  int precio;
  int estadoProceso;
}eProducto;

//Firmas
int pedirNumero(int numero);

int recibeCadenaYunCaracter(char cadena[], char letra);

void hardcodearProducto(eProducto datosProductos[], int cant);

float sumatoriaPrecios(eProducto datosProducto[],int valorPrecioPuesto, int cant);


int main()
{
    //variables
    int numero;
    int remplazarCaracter;
    char nombre[] ="franco";
    char letra = 'a';
    eProducto datosProducto[2];
    float sumatoriaPreciosTotal;

    //-------------------------------------------------------------------------------------------

    printf("-----------FUNCION 1------------\n");

    //Pedir un numero
    numero = pedirNumero(numero);
    if(numero > 0)
    {
        printf("El numero es positivo");
    }
    else if(numero <0)
    {
         printf("El numero es negativo");
    }
    else
    {
         printf("El numero es cero");
    }
    //-------------------------------------------------------------------------------------------

    printf("\n\n-----------FUNCION 2------------\n");

    remplazarCaracter = recibeCadenaYunCaracter(nombre,letra);
    printf("\nLa cantidad de veces que pudo cambiar la letra es de : %d\n\n", remplazarCaracter);

    //-------------------------------------------------------------------------------------------

    printf("-----------FUNCION 3------------\n");
    hardcodearProducto(datosProducto,2);
    sumatoriaPreciosTotal = sumatoriaPrecios(datosProducto,5000,2);
    if(sumatoriaPreciosTotal == -1)
    {
        printf("\nEl precio puesto es mayor a la suma de los precios.\n");
        printf("\nEl valor de los estados de los elementos es: 0 \n");
    }
    else
    {
        printf("\nEl precio total es: %.2f\n", sumatoriaPreciosTotal);
        printf("\nEl valor de los estados de los elementos es: 1\n");
    }


    return 0;

}//fin del main;



//-----------Funcion 1----------------------------

int pedirNumero(int numero)
{
    int retorno;
    printf("ingrese un numero:");
    scanf("%d", &numero);

    if(numero > 0)
    {
        retorno = 1;
    }
    else if(numero <0)
    {
        retorno=-1;
    }
    else
    {
        retorno =0;
    }

    return retorno;
}

//---------------------Funcion 2----------------------------


int recibeCadenaYunCaracter(char cadena[], char letra)
{
    int i;
    int cantidad =0;
    int cantidadLetrasVector = strlen(cadena);

    for(i=0;i<cantidadLetrasVector;i++)
    {
        if(cadena[i] == letra)
        {
            cadena[i]='*';
            cantidad++;
        }
    }

    printf("%s", cadena);

    return cantidad;
}


//--------------FUNCION 3--------------------------------------------

void hardcodearProducto(eProducto datosProductos[], int cant)
{
    int id[2]= {1,2};
    int precio[2] ={5000,4000};
    int estadoproceso[2] ={1,1};

    int i;
    for(i=0;i<cant;i++)
    {
        datosProductos[i].id = id[i];
        datosProductos[i].precio = precio[i];
        datosProductos[i].estadoProceso = estadoproceso[i];

    }

}

float sumatoriaPrecios(eProducto datosProducto[],int valorPrecioPuesto, int cant)
{
    float sumatoria = 0;
    int i;

    for(i=0;i<cant;i++)
    {
        sumatoria = sumatoria + datosProducto[i].precio;
        datosProducto[i].estadoProceso = 1;
    }

    if(sumatoria < valorPrecioPuesto)
    {
        sumatoria = -1;
        datosProducto[0].estadoProceso = 0;
        datosProducto[1].estadoProceso = 0;
    }

    return sumatoria;
}
//-------------------------------------------------------------------












