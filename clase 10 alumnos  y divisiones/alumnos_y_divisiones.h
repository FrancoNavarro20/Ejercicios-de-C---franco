#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"
#include "divisiones.h"
#include "ingresar_y_validar.h"

#ifndef ALUMNOS_Y_DIVISIONES_H_INCLUDED
#define ALUMNOS_Y_DIVISIONES_H_INCLUDED

int mostrarAlumnosPorCurso(eAlumno datosAlumnos[], eCurso datosCurso[], int cantAlumnos, int cantidadCurso, int curso);

int mostrarCursosPorUsuario(eAlumno datosAlumnos[],eCurso datosCurso[]);

int  ContadorConMasMujeres(eAlumno datosAlumnos[], eCurso datosCurso[],int cantAlumnos, int cantCurso, int curso);


void mostrarAlumnos_division_cuatrimestre(eAlumno datosAlumnos[],eCurso datosCurso[], int cantAlum, int cantCursos);


void mostrarAlumnosSegundoTrimestre(eAlumno datosAlumnos[], eCurso datosCurso[], int cantAlumnos, int cantCurso);
#endif // ALUMNOS_Y_DIVISIONES_H_INCLUDED
