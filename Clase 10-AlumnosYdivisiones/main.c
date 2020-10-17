#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisiones.h"
#define Talumnos 10
#define Tcursos 3
/*
Definir un array de 10 alumnos(id, nombre, apellido, edad)
Definir un array de 3 divisiones (id, nombre, cuatrimestre)
Relacionar los 10 alumnos con las 3 divisiones.
Mostrar:
1. Listado de divisiones.
2. Listado de alumnos.
3. Listado de alumnos con el nombre de la división y su cuatrimestre.
4. Por cada curso, todos sus alumnos.
5. El usuario elige el curso y muestra todos sus alumnos.
6. El/los cursos con mas alumnos.


*/


typedef struct
{
    int idAlumnos;
    char nombre[50];
    char apellido[50];
    int edad;
    int idCurso;
}eAlumno;

void hardcodearAlumnos(eAlumno datosAlumnos[],int cant);
void mostrarUnAlumno(eAlumno datosAlumno);

int main()
{
    eCurso datosCurso[Talumnos];
    eAlumno datosAlumnos[Tcursos];

    printf(" --Mostrando los datos del curso:--\n\n");
    hardcodearCursos(datosCurso,Tcursos);
    mostrarlistadoCursos(datosCurso,Tcursos);

    hardcodearAlumnos(datosAlumnos,Talumnos);
    mostrarUnAlumno(datosAlumnos[0]);

    return 0;
}

void hardcodearAlumnos(eAlumno datosAlumnos[],int cant)
{
    int id[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][50]={"Juan", "Maria", "Ana", "Luis", "Octavio", "German", "Christian", "Yanina", "Camila", "Maxi"};
    char apellido[10][50]={"Gomez", "Ruiz", "Rodriguez", "Perez", "Navarro", "Parker", "Baus", "Escudero", "Iglesias", "Neiner"};
    int edad[10]= {23,18,33,45,44,32,48,43,30,45};
    int idCurso[10]={100,101,100,102,100,101,101,102,102,100};

    int i;
    for(i=0;i<cant;i++)
    {
        datosAlumnos[i].idAlumnos=id[i];
        strcpy(datosAlumnos[i].nombre, nombre[i]);
        strcpy(datosAlumnos[i].apellido, apellido[i]);


        printf("Si hardcodeo");
    }

}

void mostrarUnAlumno(eAlumno datosAlumno)
{
    printf("%-5d %-8s  %-8s %-4d %-4d",datosAlumno.idAlumnos,
                                      datosAlumno.nombre,
                                      datosAlumno.apellido,
                                      datosAlumno.edad,
                                      datosAlumno.idCurso);
}

