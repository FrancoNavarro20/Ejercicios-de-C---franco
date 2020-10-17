#ifndef CURSOS_H_INCLUDED
#define CURSOS_H_INCLUDED

//Ya  esta hardcodeada
typedef struct
{
    int idCurso;
    char descripcion[50];
    char cuatrimestre[10];
}eCurso;



void hardCodearCursos(eCurso listado[], int tam);
void mostrarunCurso(eCurso cursoParametro);
void mostrarlistadoCursos(eCurso listado[], int tam);
#endif // CURSOS_H_INCLUDED
