#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED

typedef struct
{
    int idAlumno;
    char nombre[50];
    char apellido[50];
    int edad;
    int  idCurso;
    char sexo[10];
}eAlumno;

//----ALUMNOS----
void hardCodearAlumnos(eAlumno listado[], int tam);
void mostrarArrayAlumnos(eAlumno datosAlumnos[], int tam);
void  mostrarAlumno(eAlumno datosAlumnos);

//------

float promedioEdadesHombres(eAlumno datosAlumno[],int cantAlumnos,int curso);

int cuatrimestreMenosMujeres(int contador1, int contador2, int  contador3);

int cursoConMasAlumnos(int alumnos100, int alumnos101, int  alumnos102);
#endif // ALUMNOS_H_INCLUDED
