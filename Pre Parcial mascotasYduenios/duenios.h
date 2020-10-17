#ifndef DUENIOS_H_INCLUDED
#define DUENIOS_H_INCLUDED

typedef struct
{
    int idDuenio;
    char nombreDuenio[30];

}eDuenios;



void InicializarDuenios(eDuenios datosDuenios[], int cantDuenios);
int mostrarTodosLosDuenios(eDuenios datosDuenios[], int cantDuenios);
#endif // DUENIOS_H_INCLUDED
