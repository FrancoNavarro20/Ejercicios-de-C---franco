#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos_y_divisiones.h"

#include "ingresar_y_validar.h"
/*

Definir un array de 10 alumnos(id, nombre, apellido, edad)
Definir un array de 3 divisiones (id, nombre, cuatrimestre)
Relacionar los 10 alumnos con las 3 divisiones.
Mostrar:
1. Listado de divisiones. SI
2. Listado de alumnos.  SI
3. Listado de alumnos con el nombre de la división y su cuatrimestre. SI
4. Por cada curso, todos sus alumnos. SI
5. El usuario elige el curso y muestra todos sus alumnos.  SI
6. El/los cursos con mas alumnos.

----------segunda Parte----------------------
7. Mostrar los alumnos del segundo cuatrimestre. SI
8. Mostrar el cuatrimestre con menos mujeres
9.El promedio de edades de los hombres del primer cuatrimestre.
10. Listado de cursos ordenados por cantidad de alumnos (descendentemente)

*/




int main()
{
    eCurso datosCurso[3];
    eAlumno datosAlumnos[10];
    int alumnos100,alumnos101,alumnos102;
    int contadorMujeres100,contadorMujeres101,contadorMujeres102;
    int cuatrimestreConMenosMujeres;
    int cursoMasAlumnos;
    float promedioEdadHombres;


    char vec[9]="Compilar";
    for(int i =0;i<9;i++)
    {
        if(vec[i]!='r' || vec[i]== 'o')
        {
            printf("%c",vec[i]);
        }
    }


    printf("\n-------MOSTRANDO LISTADO CURSOS--------------------------\n\n");
    hardCodearCursos(datosCurso,3);
    mostrarlistadoCursos(datosCurso,3);

    printf("\n-------MOSTRANDO LISTADO ALUMNOS--------------------------\n\n");
    hardCodearAlumnos(datosAlumnos,10);
    mostrarArrayAlumnos(datosAlumnos,10);

    printf("\n-------MOSTRANDO LISTADO ALUMNOS Y CURSOS------------------------------------------------------------\n\n");
    mostrarAlumnos_division_cuatrimestre(datosAlumnos,datosCurso,10,3);


    printf("\n-------MOSTRANDO LISTADO ALUMNOS DEL CURSOS 100------------------------------------------------------------\n\n");
    alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);

    printf("\n-------MOSTRANDO LISTADO ALUMNOS DEL CURSOS 101------------------------------------------------------------\n\n");
    alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);

    printf("\n-------MOSTRANDO LISTADO ALUMNOS DEL CURSOS 102------------------------------------------------------------\n\n");
    alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);


    printf("\n-------PEDIR AL USUARIO QUE MUESTRE EL CURSO  QUE QUIERA------------------------------------------------------------\n\n");
    printf("\n\nLos cursos son : 100 , 101 , 102\n");
    mostrarCursosPorUsuario(datosAlumnos,datosCurso);

    printf("\n-------MOSTRANDO LISTADO DEL CURSO CON MAS ALUMNOS------------------------------------------------------------\n\n");

    cursoMasAlumnos = cursoConMasAlumnos(alumnos100,alumnos101,alumnos102);
    printf("\nEl curso con mas alumnos es el curso : %d\n\n",cursoMasAlumnos);


    printf("\n-------MOSTRANDO LISTADO ALUMNOS DEL SEGUNDO CUATRIMESTRE------------------------------------------------------------\n\n");

    mostrarAlumnosSegundoTrimestre(datosAlumnos,datosCurso,10,3);

    printf("\n-------MOSTRANDO el cuatrimestre con menos mujeres------------------------------------------------------------\n\n");

    contadorMujeres100 = ContadorConMasMujeres(datosAlumnos,datosCurso,10,3,100);
    contadorMujeres101 = ContadorConMasMujeres(datosAlumnos,datosCurso,10,3,101);
    contadorMujeres102 = ContadorConMasMujeres(datosAlumnos,datosCurso,10,3,102);


    cuatrimestreConMenosMujeres = cuatrimestreMenosMujeres(contadorMujeres100,contadorMujeres101,contadorMujeres102);
    if(cuatrimestreConMenosMujeres == 100)
    {
        printf("El cuatrimestre con menos mujeres es el 1er");
    }
    else if(cuatrimestreConMenosMujeres == 101)
    {
        printf("El cuatrimestre con menos mujeres es el 2do");
    }
    else
    {
        printf("El cuatrimestre con menos mujeres es el 3er");
    }

    printf("\n-------MOSTRANDO PROMEDIO DE EDADES DE LOS HOMBRES DEL 1ER CUATRIMESTRE-----------------------------------------\n\n");

    promedioEdadHombres = promedioEdadesHombres(datosAlumnos,10,100);
    printf("\n\nEl promedio de las edades de los hombres del 1er cuatrimestre es: %.2f\n", promedioEdadHombres);

    printf("\n-------MOSTRANDO LISTA DE ALUMNOS ORDENADA DECENDENTE------------------------------------------------------------\n\n");

    if(alumnos100 > alumnos101 && alumnos100 > alumnos102)
    {
        alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
        printf("\n");
         if(alumnos101>alumnos102)
        {
            alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
             printf("\n");
            alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);
        }
        else
        {
            alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);
             printf("\n");
            alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
        }

    }
    else if(alumnos101> alumnos102)
    {
        alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
         printf("\n");
        if(alumnos100>alumnos102)
        {
            alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
             printf("\n");
            alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);
        }
        else
        {
            alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,102);
             printf("\n");
            alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
        }
    }
    else
    {
        alumnos102 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
         printf("\n");
        if(alumnos100>alumnos101)
        {
            alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
             printf("\n");
            alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
        }
        else
        {
            alumnos101 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,101);
             printf("\n");
            alumnos100 = mostrarAlumnosPorCurso(datosAlumnos,datosCurso,10,3,100);
        }
    }


    return 0;
}


//--------------------------------------------ALUMNOS Y DIVISIONES-------------------------------------------------------------------------------



















