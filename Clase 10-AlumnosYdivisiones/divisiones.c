#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisiones.h"
//-------Harcodeando cursos y mostrandolos--------
void hardcodearCursos(eCurso datosCurso[],int cant)
{
    int id[3] ={100,101,102};
    char division[3][5]={"1a","1b","1c"};
    int cuatrimestre[3]={1,2,3};

    int i;
    for(i=0;i<cant;i++)
    {
        datosCurso[i].idDivision = id[i];
        strcpy(datosCurso[i].nombreDivision,division[i]);
        datosCurso[i].cuatrimestre = cuatrimestre[i];
    }
}

void mostrarunCurso(eCurso cursoParametro)
{
    printf("%5d %8s %12d \n",cursoParametro.idDivision,cursoParametro.nombreDivision,cursoParametro.cuatrimestre);
}

void mostrarlistadoCursos(eCurso listado[], int tam)
{
    int i;
    printf("  Id  |  Division  | cuatrimestre\n");
    for(i=0;i<tam;i++)
    {
        mostrarunCurso(listado[i]);
    }

}

//--------------------FIN--------------------------

