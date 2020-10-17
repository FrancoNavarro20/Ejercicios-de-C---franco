#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos_y_divisiones.h"
#include "ingresar_y_validar.h"





//----------------------------
int mostrarCursosPorUsuario(eAlumno datosAlumnos[],eCurso datosCurso[])
{
    int retorno=-1;
    int opcion;


    opcion = ingresarOpcionInt("\n\nIngrese el curso que desea ver:");
    opcion = validarDatosInt(opcion,100,102,"Error ,re-ingrese la opcion(100 , 101 , 102):");

    if(opcion == 100)
    {
        retorno=0;
        printf("\n");
        mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
    }
    else if(opcion==101)
    {
        retorno=0;
        printf("\n");
        mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
    }
    else
    {
        retorno=0;
        printf("\n");
        mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);
    }



    return retorno;
}

int mostrarAlumnosPorCurso(eAlumno datosAlumnos[], eCurso datosCurso[], int cantAlumnos, int cantidadCurso, int curso)
{
    int i;
    int contador=0;
    printf("   ID     | Nombre  |   Apellido      | Edad | Curso\n");
    for(i=0;i<cantAlumnos;i++)
    {
        if(datosAlumnos[i].idCurso ==curso)
        {
            printf("   %-8d %-11s %-16s %-5d %-11d\n",datosAlumnos[i].idAlumno,
                                                    datosAlumnos[i].nombre,
                                                    datosAlumnos[i].apellido,
                                                    datosAlumnos[i].edad,
                                                    curso);
            contador++;
        }

    }

    return contador;
}


//-----------------------CONTADOR MUJERES------------------------------------

int  ContadorConMasMujeres(eAlumno datosAlumnos[], eCurso datosCurso[],int cantAlumnos, int cantCurso, int curso)
{
    int contadorMujeres =0;
    int i;
    for(i=0;i<cantAlumnos;i++)
    {
        if(datosAlumnos[i].idCurso == curso && strcmp(datosAlumnos[i].sexo, "femenino") ==0)
        {
            contadorMujeres++;
        }
    }

    if(contadorMujeres == 0)
    {
        contadorMujeres = 10000;
    }
    return contadorMujeres;
}

//-----------------MOSTRANDO DIVISIONES------------------------------

void mostrarAlumnosSegundoTrimestre(eAlumno datosAlumnos[], eCurso datosCurso[], int cantAlumnos, int cantCurso)
{
    int i,j;
    printf("   ID     | Nombre  |    Apellido     | Edad | Curso | CUATRIMESTRE\n");
    for(i=0;i<cantAlumnos;i++)
    {
        for(j=0;j<cantCurso;j++)
        {
            if(datosAlumnos[i].idCurso == datosCurso[j].idCurso && strcmp(datosCurso[j].cuatrimestre,"2 do")== 0)
            {
                    printf("   %-4d     %-10s    %-12s   %-4d   %-8d %-4s\n",datosAlumnos[i].idAlumno,datosAlumnos[i].nombre,datosAlumnos[i].apellido,datosAlumnos[i].edad,datosAlumnos[i].idCurso, datosCurso[j].cuatrimestre);


            }
        }

    }
}


void mostrarAlumnos_division_cuatrimestre(eAlumno datosAlumnos[],eCurso datosCurso[], int cantAlum, int cantCursos)
{
    int i,j;
    printf("\n   ID   |  NOMBRE  |   APELLIDO    |   EDAD    |    CURSO   |   DIVISION    |   CUATRIMESTRE\n");
    for(i=0;i<cantAlum;i++)
    {
        for(j=0;j<cantCursos;j++)
        {
            if(datosAlumnos[i].idCurso == datosCurso[j].idCurso)
            {
                  printf("   %-7d %-11s %-16s %-12d %-11d %-15s %-12s \n",datosAlumnos[i].idAlumno,
                                                       datosAlumnos[i].nombre,
                                                       datosAlumnos[i].apellido,
                                                       datosAlumnos[i].edad,datosAlumnos[i].idCurso,
                                                       datosCurso[j].descripcion,
                                                       datosCurso[j].cuatrimestre);
            }

        }
    }



}



