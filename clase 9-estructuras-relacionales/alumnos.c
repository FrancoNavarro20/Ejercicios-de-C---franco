#include <stdio.h>
#include <string.h>
#include "alumnos.h"

//ha no profe ese   no lo  hice ,sino  le puedo  mostrar algo mas parecido lo del  tp con lo del ABM ,DALE DALE PROFE,SISI

//SI PROFE PERDON QUE NOLE PUDE  MOSTRAR
void hardCodearAlumnos(eAlumno listado[], int tam)
{
    int id[5]={100,101,102,102,101};
    int idAlumno[5]={1,2,3,4,5};
    char nombre[5][50]={"juan", "alberto","Ruben","carlos", "fabio"};
    char apellido[5][50]={"Navarro","Gomez","Ramires","Lugones", "Yapura"};
    int edad [5] = {15,53,33,66,17,};
    char cuatrimestre[5][20]={"1er","2do","1er","2do","2do"};

    int i;
    for(i=0;i<tam;i++)
    {
        listado[i].idAlumno=idAlumno[i];
        strcpy(listado[i].nombre,nombre[i]);
        strcpy(listado[i].apellido,apellido[i]);
        listado[i].edad = edad[i];
        listado[i].idCurso = id[i];
        strcpy(listado[i].cuatrimestre,cuatrimestre[i]);

        printf("%s", listado[i].cuatrimestre);
    }
}

void  mostrarAlumno(eAlumno datosAlumnos)
{
    printf("%4d %14s %12s %8d %8d\n",datosAlumnos.idAlumno,datosAlumnos.nombre,datosAlumnos.apellido,datosAlumnos.edad,datosAlumnos.idCurso);
}

void mostrarArrayAlumnos(eAlumno datosAlumnos[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarAlumno(datosAlumnos[i]);
    }

}
















