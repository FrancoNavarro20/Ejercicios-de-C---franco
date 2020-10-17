#ifndef DIVISIONES_H_INCLUDED
#define DIVISIONES_H_INCLUDED

typedef struct
{
    int idCurso;
    char descripcion[50];
    char cuatrimestre[10];
}eCurso;




//-----CURSOS---
void hardCodearCursos(eCurso listado[], int tam);
void mostrarunCurso(eCurso cursoParametro);
void mostrarlistadoCursos(eCurso listado[], int tam);


#endif // DIVISIONES_H_INCLUDED
