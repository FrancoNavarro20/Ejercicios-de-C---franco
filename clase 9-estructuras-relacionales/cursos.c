#include <stdio.h>
#include <string.h>
#include "cursos.h"

void hardCodearCursos(eCurso listado[], int tam)
{
    int id[3]={100,101,102};
    char descripcion[3][50]={"div a","div b","div c"};
    char cuatrimestre[3][50]={"1er","2do","1er"};

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
    printf("%5d %12s %12s \n",cursoParametro.idCurso,cursoParametro.descripcion,cursoParametro.cuatrimestre);
}

void mostrarlistadoCursos(eCurso listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarunCurso(listado[i]);
    }

}

