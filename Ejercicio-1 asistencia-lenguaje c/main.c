#include <stdio.h>
#include <stdlib.h>



/**<
Se Ingresan dos precios , mostrar :
1)la suma de los importes
2) el promedio de la compra
3) el precio final mas iva(21%)
*/

int main()
{
    //variables
    int precio1;
    int precio2;
    int sumaPrecios;
    float promedioCompra;
    float precioFinalMasIva;

    printf("Ingrese el primer precio:");
    scanf("%d", &precio1);

    printf("Ingrese el segundo precio:");
    scanf("%d", &precio2);

    sumaPrecios = precio1 + precio2;
    promedioCompra = (float)sumaPrecios / 2;
    precioFinalMasIva = sumaPrecios * 1.21;

    //datos finales
    printf("La suma de los precios es: %d \n", sumaPrecios);
    printf("El promedio de la compra es: %.1f \n", promedioCompra);
    printf("El precio final mas iva es: %.2f", precioFinalMasIva);

    return 0;
}
