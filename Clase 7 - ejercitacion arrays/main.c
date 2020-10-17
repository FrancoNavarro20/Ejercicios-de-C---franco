#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1: Dado el vector "edadesMujeres" y "edadesVarones" con 5 elementos cada uno, HACER la carga secuencialmente.
El vector "edadesMayores" guardará en cada posición el valor máximo obtenido entre cada indice del vector edadesMujeres" y el vector "edadesVarones". (Link de GDB)
mostrar los tres arrays
 ej:
edadesMujeres: {2,3,77,66,6}
edadesVarones  {6,1,3,8,9}
deberia dar como resultado:
resultado: {6,3,77,66,9}

*/
void CompletarArray(int array[],char texto[]);
void MostarArrays(int mostrarArray[], char texto2[]);
void MayoresEntreArrays(int array1[], int array2[], int arrayTotal[]);
int main()
{
    int edadesMujeres[5];
    int edadesVarones[5];
    int edadesMayores[5];
   // int i;

    /*
     for(i=0;i<5;i++)
    {
        printf("Ingrese la edad del varon %d",edadesVarones[i]);
        scanf("%d",&edadesVarones[i]);
    }
    */
    //Rellenado arrays
    CompletarArray(edadesMujeres,"Ingrese la edad de la mujer");
    printf("\n");
    CompletarArray(edadesVarones,"Ingrese la edad del varon");
    printf("\n");

    //Asignando mayores al array mayores
    MayoresEntreArrays(edadesMujeres,edadesVarones,edadesMayores);


    printf("\n***Mostrando todas las edades***\n");
     printf("\n");
    //Mostrando arrays
    MostarArrays(edadesMujeres,"La edad de la mujer es");
    printf("\n");
    MostarArrays(edadesVarones,"La edad del varon es");
    printf("\n");
    MostarArrays(edadesMayores,"La edad del mayor es");

    return 0;
}

void CompletarArray(int array[],char texto[])
{
    int i;
    //Rellenar vectores edadesMujeres
    for(i=0;i<5;i++)
    {
        printf("%s %d:",texto,i+1);
        scanf("%d",&array[i]);
    }
}
void MostarArrays(int mostrarArray[], char texto2[])
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("%s %d: %d\n",texto2,i+1,mostrarArray[i]);
    }
}
void MayoresEntreArrays(int array1[], int array2[], int arrayTotal[])
{
    int i;

    for(i=0;i<5;i++)
    {
        if(array1[i] > array2[i])
        {
            arrayTotal[i] = array1[i];
        }
        else
        {
            arrayTotal[i] = array2[i];
        }
    }
}
