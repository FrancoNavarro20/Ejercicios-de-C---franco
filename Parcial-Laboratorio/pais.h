#ifndef PAIS_H_INCLUDED
#define PAIS_H_INCLUDED

typedef struct
{
    char nombrePais[30];
    int codigoTelefonico;
    int idPais;
}ePais;

void InicializarPais(ePais datosPais[], int cantPais);


int mostrarPaises(ePais datosPaises[],int cantPais);
#endif // PAIS_H_INCLUDED
