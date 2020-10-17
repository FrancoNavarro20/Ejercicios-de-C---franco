#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>

/**<

1. Ingresar la inicial del nombre, edad y sexo de 10 personas. Indicar:
a) suma de las edades,
b) promedio
c) inicial la edad mas grande e inicial de la edad mas chica.


 */

int main()
{
    //variables
    char nombre;
    int edad;
    char sexo;
    int i;
    int sumaEdades;
    float promedioEdades;
    int edadMasGrande;
    int edadMasChica;
    char inicialMasGrande;
    char inicialMasChica;

    sumaEdades = 0; //siempre inicializar los acumuladores;

    for(i=0; i< 2; i++)
    {

        printf("Ingrese el nombre:");
        fflush(stdin); //limpiando el buffer , siempre en los tipos de datos "char"
        scanf("%c", &nombre);

        printf("Ingrese su edad:");
        scanf("%d", &edad);

        printf("Ingrese su sexo (m o f):");
        fflush(stdin);
        scanf("%c",&sexo);

        sumaEdades = sumaEdades + edad;


        if(i==0 || edad > edadMasGrande )
        {
            edadMasGrande = edad;
            inicialMasGrande = nombre;
        }

        if(i==0 || edad < edadMasChica)
        {
            edadMasChica = edad;
            inicialMasChica = nombre;
        }

    }

    promedioEdades = (float)sumaEdades / i;


    //valores finales
    printf("La suma de las edades es: %d \n", sumaEdades);
    printf("El promedio de las edades es: %.1f \n",promedioEdades);
    printf("Inicial de la edad mas grande: %c \n", inicialMasGrande);
    printf("Incial de la edad mas chica: %c", inicialMasChica);




    return 0;
}
