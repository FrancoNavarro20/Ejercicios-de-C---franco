#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisiones.h"


void hardCodearCursos(eCurso listado[], int tam)
{
    int id[3]={100,101,102};
    char descripcion[3][50]={"div a","div b","div c"};
    char cuatrimestre[3][50]={"1 ero","2 do","3 ero"};
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i].idCurso=id[i];
        strcpy(listado[i].descripcion,descripcion[i]);
        strcpy(listado[i].cuatrimestre,cuatrimestre[i]);
    }
}

void mostrarunCurso(eCurso cursoParametro)
{
    printf("   %-10d %-13s %-15s \n",cursoParametro.idCurso,cursoParametro.descripcion,cursoParametro.cuatrimestre);
}

void mostrarlistadoCursos(eCurso listado[], int tam)
{
    int i;

    printf("  ID curso |  Division  | Cuatrimestre\n");

    for(i=0;i<tam;i++)
    {
        mostrarunCurso(listado[i]);
    }
    printf("\n\n");
}
//--------------------------------------FIN DE CURSOS--------------------------------

