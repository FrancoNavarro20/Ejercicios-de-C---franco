#include <stdio.h>
#include <stdlib.h>

/***************************
 *
 * 1. Ingresar la inicial del nombre, edad y sexo de 10 personas. Indicar:
 *  a) suma de las edades,
 *  b) promedio
 *  c) inicial la edad mas grande e inicial de la edad mas chica.
 *
 *2. Al ejercicio anterior AGREGAR:
 *  a) El promedio de edades de las mujeres.
 *  b) La inicial de la mujer mas grande.
 *  c) La inicial del hombre mas joven.
 *
 *************************/



int main()
{
    //variables
    char nombre;
    char sexo;
    int edad;
    int sumaEdades;
    int sumaEdadesMujeres;
    int contadorMujeres;
    float promedio;
    float promedioMujeres;
    char inicialEdadMasGrande;
    char inicialEdadMasChica;
    char inicialMujerMasGrande;
    char inicialHombreMasChica;
    int edadMasGrande;
    int edadMasChica;
    int edadMujerMasGrande;
    int edadHombreMaschica;
    int banderaMujer;
    int banderaHombre;
    int i;

    sumaEdades = 0;
    sumaEdadesMujeres =0;
    contadorMujeres = 0;
    edadMujerMasGrande =0;
    banderaHombre = 1;
    banderaMujer = 1;


    for(i=0; i<3; i++)
    {
        //Nombre;
        printf("Ingrese el nombre:");
        fflush(stdin); // purgando la memoria!!!
        scanf("%c",&nombre);

        //sexo;
        printf("Ingrese el sexo: (m o f)");
        fflush(stdin); // purgando la memoria!!!
        scanf("%c", &sexo);
        while(sexo != 'm' && sexo !='f')
        {
            printf("Re-ingrese el sexo: (m o f)");
            fflush(stdin); // purgando la memoria!!!
            scanf("%c", &sexo);
        }

        //edad;
        printf("Ingrese la edad:");
        scanf("%d", &edad);
        while(edad < 0)
        {
           printf("Re-ingrese la edad:");
           scanf("%d", &edad);
        }

        //Acumulacion de edades!!!!
        sumaEdades = sumaEdades + edad;

        //Inicial edad mas grande!!!
        if(i==0 || edad > edadMasGrande)
        {
            edadMasGrande = edad;
            inicialEdadMasGrande = nombre;
        }

        //Inicial edad mas chica!!!
        if(i==0 || edad < edadMasChica)
        {
            edadMasChica = edad;
            inicialEdadMasChica = nombre;
        }

        //switch sexo
        switch(sexo)
        {
            case 'f':
                sumaEdadesMujeres = sumaEdadesMujeres + edad;
                contadorMujeres++;
                if(banderaMujer ==1 || edad > edadMujerMasGrande)
                {
                    edadMujerMasGrande = edad;
                    inicialMujerMasGrande = nombre;
                    banderaMujer = 0;
                }
                break;
            case 'm':
                if(banderaHombre == 1 || edad < edadHombreMaschica)
                {
                    edadHombreMaschica = edad;
                    inicialHombreMasChica = nombre;
                    banderaHombre = 0;
                }
                break;

        }


    }


    //Sacando el promedio
    promedio = (float)sumaEdades / i;
    promedioMujeres = (float)sumaEdadesMujeres / contadorMujeres;


    if(sumaEdadesMujeres == 0)
    {
        promedioMujeres = 0;

    }

    //Asignacion de datos!!!
    printf("\n");
    printf("La suma de las edades: %d \n", sumaEdades);
    printf("El promedio es: %f \n", promedio);
    printf("La inicial mas grande es: %c \n", inicialEdadMasGrande);
    printf("La inicial mas chica es: %c \n",inicialEdadMasChica);

    //asignando segundos valores;
    printf("\n");
    printf("El promedio de las edades de las mujeres es: %.1f \n", promedioMujeres);
    printf("La mujer mas grande es: %c \n", inicialMujerMasGrande);
    printf("El hombre mas chico es: %c \n", inicialHombreMasChica);

    return 0;
}
















