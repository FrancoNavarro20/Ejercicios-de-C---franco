#include <stdio.h>
#include <string.h>
#include "alumnos_divisiones.h"





void mostrarListaCursoAlumnos(eAlumno datosAlumnos[], eCurso datosCurso[], int tam)
{
    int i,j;
    for(i=0;i<tam;i++)
    {
        for(j=0;j<3;j++)
        {
            if(datosAlumnos[i].idCurso == datosCurso[j].idCurso)
            {
                 printf("%4d %14s %12s %8d %8d %12s %12s \n",datosAlumnos[i].idAlumno,datosAlumnos[i].nombre,datosAlumnos[i].apellido,datosAlumnos[i].edad,datosAlumnos[i].idCurso, datosCurso[j].descripcion,datosCurso[j].cuatrimestre);
            }
        }


    }
}


int mostrarAlumnos2cuatrimestre(eAlumno datosAlumnos[],eCurso datosCursos[],int cant)
{
    int retorno= -1;
    int i,j;
    char segundoCuatri[] = "2do";

    if(datosAlumnos !=NULL && cant >0)
    {
        for(i=0;i<cant;i++)
        {
            printf("Entro  al for");
            if(segundoCuatri ==   datosAlumnos[i].cuatrimestre)
            {
                printf("Lo lograste");
            }


        }
    }

    // noo no avance hasta ahi profee ,siii s
    return retorno;
}

