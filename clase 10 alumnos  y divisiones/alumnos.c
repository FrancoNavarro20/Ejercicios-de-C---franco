#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"


/*---------------HARDCODEAR Y MOSTRAR ALUMNOS----------------------*/

void hardCodearAlumnos(eAlumno listado[], int tam)
{
    int id[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][51]={"Martin","Fabio","Carla","Milena","Marcos","Diego","Ezequiel","Facundo","Emanuel","Abril"};
    char apellido[10][51]={"Perez","Martinez","Castro","Fernandez","Ferrini","Gonzalez","Carrizo","Gonzalez","Steinbrenner","Miok"};
    int edad[10] = {20, 31, 23, 23, 52, 23, 31, 26, 18, 50};
    int idCurso[10] = {100, 101, 102, 102, 101, 102, 100, 101, 100, 100};
    char sexo[10][10] ={"masculino","masculino","femenino","femenino","masculino","masculino","masculino","masculino","masculino","femenino"};
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i].idAlumno=id[i];
        strcpy(listado[i].nombre, nombre[i]);
        strcpy(listado[i].apellido, apellido[i]);
        listado[i].edad=edad[i];
        listado[i].idCurso=idCurso[i];
        strcpy(listado[i].sexo,sexo[i]);

    }
}

void  mostrarAlumno(eAlumno datosAlumnos)
{
    printf("   %-4d     %-10s    %-12s   %-4d   %-8d\n",datosAlumnos.idAlumno,datosAlumnos.nombre,datosAlumnos.apellido,datosAlumnos.edad,datosAlumnos.idCurso);
}

void mostrarArrayAlumnos(eAlumno datosAlumnos[], int tam)
{
    int i;
    printf("   ID     | Nombre  |    Apellido     | Edad | Curso\n");
    for(i=0;i<tam;i++)
    {
        mostrarAlumno(datosAlumnos[i]);
    }

}
//----------------------Curso con mas alumnos-------------------
int cursoConMasAlumnos(int alumnos100, int alumnos101, int  alumnos102)
{
    int maximo =0;

    if(alumnos100> alumnos101  && alumnos100>alumnos102)
    {
        maximo = 100;
    }
    else if(alumnos101>alumnos102)
    {
        maximo =101;
    }
    else if(alumnos102>alumnos101)
    {
        maximo =102;
    }

    return  maximo;
}

//-------------

float promedioEdadesHombres(eAlumno datosAlumno[],int cantAlumnos,int curso)
{
    int i;
    int acumularEdadHombres =0;
    int cotadorEdadesHombres=0;
    float promedioEdadesHombres;
    for(i=0;i<cantAlumnos;i++)
    {
        if(datosAlumno[i].idCurso== curso)
        {
            if(strcmp(datosAlumno[i].sexo,"masculino")== 0)
            {
                acumularEdadHombres+= datosAlumno[i].edad;
                cotadorEdadesHombres++;
            }

        }
    }

    promedioEdadesHombres = (float)acumularEdadHombres/cotadorEdadesHombres;


    return promedioEdadesHombres;
}

int cuatrimestreMenosMujeres(int contador1, int contador2, int  contador3)
{
    int minimo =0;

    if(contador1< contador2  && contador1<contador3)
    {
        minimo = 100;
    }
    else if(contador2<contador3)
    {
        minimo =101;
    }
    else if(contador3<contador2)
    {
        minimo =102;
    }

    return  minimo;
}
//-------------------
