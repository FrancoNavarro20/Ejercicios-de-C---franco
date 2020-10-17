#include <stdio.h>
#include <stdlib.h>
/** \brief
 *
 Se Ingresan dos precios , mostrar :
1)la suma de los importes
2) el promedio de la compra
3) el precio final mas iva(21%)
 * \param
 * \param
 * \return
 *
 */


int main()
{
   //Varaibles
    int precioIngresado1;
    int precioIngresado2;
    int sumaTotal;
    float promedioCompra;
    float precioFinalMasIva;

    printf("Ingrese el primer precio de la compra:");
    scanf("%d", &precioIngresado1);

    printf("Ingrese el segundo precio de la compra:");
    scanf("%d", &precioIngresado2);

    sumaTotal = precioIngresado1 + precioIngresado2;
    promedioCompra = (float)sumaTotal / 2; // el (float) es para convertir el tipo de dato al int; por que int= int/ int hace falta convertirlo;
    precioFinalMasIva = sumaTotal * 1.21;


    printf("La suma total es %.1d \n", sumaTotal);
    printf("El promedio de la compra es %f \n", promedioCompra);
    printf("El precio final de la compra es %.2f", precioFinalMasIva);


    return 0;
}
