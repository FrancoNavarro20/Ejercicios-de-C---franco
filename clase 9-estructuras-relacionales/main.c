#include <stdio.h>
#include <string.h>
#include "alumnos_divisiones.h"
/******************************************************************************
Alumno listaAlumnos[100]={{100,"Juan","Gomez",23,3},
                              {101,"Maria","Ruiz",18,1},
                              {103,"Ana","Rodriguez",33,3},
                              {104,"Luis","Perez",45,3},
                              {108,"Octavio","Villegas",44,1},
                              {102,"German","Scarafilo",32,2},
                              {106,"Christian","Baus",48,3},
                              {105,"Yanina","Escudero",43,1},
                              {109,"Camila","Iglesias",30,3},
                              {107,"Maxi","Neiner",45,2}};



                              // eDivision listaDivisiones[5]={{1,"1C",1},{2,"3A",3},{3,"2B",2}};

    Alumno listaAlumnos[100]={{100,"Juan","Gomez",23,3},
                              {101,"Maria","Ruiz",18,1},
                              {103,"Ana","Rodriguez",33,3},
                              {104,"Luis","Perez",45,3},
                              {108,"Octavio","Villegas",44,1},
                              {102,"German","Scarafilo",32,2},
                              {106,"Christian","Baus",48,3},
                              {105,"Yanina","Escudero",43,1},
                              {109,"Camila","Iglesias",30,3},
                              {107,"Maxi","Neiner",45,2}};

7. Mostrar los alumnos del segundo cuatrimestre.
8. Mostrar el cuatrimestre con menos mujeres
9.El promedio de edades de los hombres del primer cuatrimestre.
10. Listado de cursos ordenados por cantidad de alumnos (descendentemente)

*******************************************************************************/




int main()
{
    eCurso datosCurso[3];
    eAlumno datosAlumnos[5];

   // printf("\n%s %s", "Nombre    |  Apellido\n");

    hardCodearCursos(datosCurso,3);
    printf("\n  id  |   descripcion |   cuatrimestre\n");
    mostrarlistadoCursos(datosCurso,3);

    hardCodearAlumnos(datosAlumnos,5);
    printf("\nidAlumno  |   Nombre |   Apellido |  edad  | Curso\n");
    mostrarArrayAlumnos(datosAlumnos,5);

    printf("\nidAlumno  |   Nombre |   Apellido |  edad  | Curso  | descripcion  | cuatrimestre \n");
    mostrarListaCursoAlumnos(datosAlumnos,datosCurso,10);

    printf("\nEstudiantes segundo trimestre \n");
    printf("\nidAlumno  |   Nombre |   Apellido |  edad  | Curso  | descripcion  | cuatrimestre \n");
    mostrarAlumnos2cuatrimestre(datosAlumnos,datosCurso,5);



    return 0;
}





















