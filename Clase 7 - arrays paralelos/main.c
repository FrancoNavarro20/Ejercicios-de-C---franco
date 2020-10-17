#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define TAM 5

void CargarDatosArrays(int legajos[],float sueldos[],char nombres[][20],int cant);
void OrdenarPorNumerosLegajo(int legajos[],float sueldos[],char nombres[][20],int cant);
void OrdenarNombresAlfabeticamente(int legajos[],float sueldos[],char nombres[][20],int cant);
void MostrarArraysColumnas(int legajos[],float sueldos[],char nombres[][20],int cant);

int main()
{
    int legajos[TAM] = {1000,1247,999,777,1234};
    float sueldos[TAM]= {15000,45000,71000,25000,77777.77};
    char nombres[TAM][20]= {"daria","juan","octavio","german","Ana"};
    int opcion;
    int opcionSubMenu;
   //int i;//Naranja
   //int j;//Azul

    do
    {
         printf("**********Ingrese los datos de los empreados.***************\n");

    printf("1. Cargar Empleados\n");
    printf("2. Ordenar Empleados\n");
    printf("3. Mostrar Empleados \n");
    printf("4. Salir\n");
    printf("\n");


    printf("Ingrese una opcion:");
    scanf("%d",&opcion);

     switch(opcion)
        {
            case 1:
               printf("Ingrese los datos:");
               CargarDatosArrays(legajos,sueldos,nombres,TAM);
            break;
            case 2:
                printf("1. Ordenar Empleados por LEGAJO\n");
                printf("2. Ordenar Empleados por Nombre\n");
                printf("Ingrese una opcion:");
                scanf("%d",&opcion);

                switch(opcionSubMenu)
                {
                    case 1:
                        OrdenarPorNumerosLegajo(legajos,sueldos,nombres,TAM);
                        printf("Perfecto se han ordenado por legajo correctamente.\n");
                        printf("\nVuelva a menu, opcion 3 para mostrar.\n");
                        getch();
                        break;
                    case 2:
                        OrdenarNombresAlfabeticamente(legajos,sueldos,nombres,TAM);
                        printf("Perfecto se han ordenado alfabeticamente correctamente.");
                        printf("\nVuelva a menu, opcion 3 para mostrar.\n");
                        getch();
                        break;
                }

                break;
            case 3:
                MostrarArraysColumnas(legajos,sueldos,nombres,TAM);
                break;
        }


    }while(opcion != 4);



   // MostrarArraysColumnas(legajos,sueldos,nombres,TAM);

    return 0;
}//fin del main;

void CargarDatosArrays(int legajos[],float sueldos[],char nombres[][20],int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("Empleado numero %d:\n",i+1);
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]", nombres[i]);

        printf("\n");

        nombres[i][0]=toupper(nombres[i][0]); //Inicializa la primera letra de los nombres en mayuscula;
    }


}
void OrdenarPorNumerosLegajo(int legajos[],float sueldos[],char nombres[][20], int cant)
{
    int i;
    int j;
    int auxInt;
    int auxFloat;
    char auxNombre[20];

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;i<cant;i++)
        {
            if(legajos[i] > legajos[j])
            {
                //Ordenando por legajos de menor a mayor;
                auxInt =legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                //Ordenando sueldos;
                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

                //Ordenar nombres
                strcpy(auxNombre,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxNombre);

            }

        }
    }

}//fin de la funcion

void OrdenarNombresAlfabeticamente(int legajos[],float sueldos[],char nombres[][20],int cant)
{
    int i;
    int j;
    int auxInt;
    int auxFloat;
    char auxNombre[100];

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(nombres[i],nombres[j]) > 0)
            {
                //Ordenar nombres alfabeticamente;
                strcpy(auxNombre,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxNombre);

                //Ordenando por legajos;
                auxInt =legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                //Ordenando sueldos;
                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

            }
        }
    }

}//fin de la funcion

void MostrarArraysColumnas(int legajos[],float sueldos[],char nombres[][20],int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("%4d %8.2f %10s\n", legajos[i], sueldos[i], nombres[i]);
    }

}


      /*for(i=0; i<TAM; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]", nombres[i]);

        nombres[i][0]=toupper(nombres[i][0]);

    }*/

    //Cargando Arrays;
    //CargarDatosArrays(legajos,sueldos,nombres);

    /////////////////////////////////////////////


    /*
    for(i=0; i<TAM-1; i++)//NARANJA
    {
        for(j=i+1; j<TAM; j++)//AZUL
        {
            if(legajos[i]>legajos[j])//criterio de ordenamiento por  legajos
            {
                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;


                vector nombres [i](es la fila) [0](es la primera letra);
                if(strcmp(nombres[i][0],nombres[i][0]) < 0)
                {
                    strcpy(auxString,nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j],auxString);
                }

            }
        }
    }
    */
    /*
    //Acomodar palabras alfabeticamente;
    for(i=0; i<TAM-1; i++)//NARANJA
    {
        for(j=i+1; j<TAM; j++)//AZUL
        {
                if(strcmp(nombres[i],nombres[j]) > 0)
                {
                    strcpy(auxString,nombres[i]);
                    strcpy(nombres[i],nombres[j]);
                    strcpy(nombres[j],auxString);
                }
        }
    }
    */

