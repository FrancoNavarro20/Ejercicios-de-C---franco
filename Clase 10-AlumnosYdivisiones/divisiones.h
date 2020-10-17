



#ifndef DIVISIONES_H_INCLUDED
#define DIVISIONES_H_INCLUDED

typedef struct
{
    int idDivision;
    char nombreDivision[5];
    int cuatrimestre;

}eCurso;


void hardcodearCursos(eCurso datosCurso[],int cant);
void mostrarlistadoCursos(eCurso listado[], int tam);
void mostrarunCurso(eCurso cursoParametro);
#endif // DIVISIONES_H_INCLUDED
