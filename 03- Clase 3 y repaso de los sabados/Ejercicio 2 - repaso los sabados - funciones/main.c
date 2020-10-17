#include <stdio.h> // bibliotecas estandar
#include <stdlib.h>

/*
Una función:
Realizar una función que reciba el precio float
y el porcentaje de descuento como entero  ,retornar el precio con el descuento al main

*/


//prototype
void PrecioDescuento(float precio , float descuento);
float PedirNumeroFlotante(char texto[], char textoError[], int min, int max);
int PedirNumeroEntero(char texto[], char textoError[], int min, int max);

int main()
{
    int descuento;
    float precio;

    //Pidiendo los numeros!!
    precio = PedirNumeroFlotante("Ingrese el precio:","Erorr re-ingrese el precio (no menor que 1 y hasta 2000 maximo) :",1,2000);
    descuento = PedirNumeroEntero("Ingrese el descuento:","Error re-ingrese el descuento:", 1, 1000);

    //Precio con descuento;
    PrecioDescuento(precio, descuento);

    return 0;
}

float PedirNumeroFlotante(char texto[], char textoError[], int min, int max)
{
    float precioIngresado;

    printf("%s", texto);
    scanf("%f", &precioIngresado);
    while(precioIngresado < min || precioIngresado > max)
    {
        printf("%s", textoError);
        scanf("%f", &precioIngresado);
    }

    return precioIngresado;
}

int PedirNumeroEntero(char texto[], char textoError[], int min, int max)
{
    int descuento;

    printf("%s", texto);
    scanf("%d", &descuento);
    while(descuento < min || descuento > max)
    {
        printf("%s", textoError);
        scanf("%d", &descuento);
    }

    return descuento;
}

void PrecioDescuento(float numeroPrecio, float numeroDescuento)
{
    float Descuento;
    float PrecioConDescuento;

    Descuento = (numeroPrecio * numeroDescuento) / 100;
    PrecioConDescuento = numeroPrecio - Descuento;

    printf("El precio con descuento es %.1f:", PrecioConDescuento);
}
























