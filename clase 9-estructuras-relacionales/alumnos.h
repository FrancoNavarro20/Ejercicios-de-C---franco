#include <stdio.h>
#include <string.h>


#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED

//Ya  esta hardcodeada
typedef struct
{
    int idAlumno;
    char nombre[50];
    char apellido[50];
    int edad;
    char cuatrimestre[20];
    int idCurso;
}eAlumno;


void hardCodearAlumnos(eAlumno listado[], int tam);
void mostrarArrayAlumnos(eAlumno datosAlumnos[], int tam);
void mostrarAlumno(eAlumno datosAlumnos);

#endif // ALUMNOS_H_INCLUDED
