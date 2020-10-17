#include "mascotas.h"
#include "duenios.h"



#ifndef MASCOTASYDUENIOS_H_INCLUDED
#define MASCOTASYDUENIOS_H_INCLUDED

void switchOpciones(eMascotas datosMascotas[],eDuenios datosDuenios[], int opcionMenu, int cantMascotas, int cantDuenios);


int mostrarMascotasYduenios(eMascotas datosMascotas[], eDuenios datosDuenios[],int cantMascotas, int cantDuenios);

int MostrarDueniosConSusAnimales(eMascotas datosMascotas[],eDuenios datosDuenios[],int idDuenioPuesto ,int cantMascotas,int cantDuenios);

int mostrarMascotasYduenios(eMascotas datosMascotas[], eDuenios datosDuenios[],int cantMascotas, int cantDuenios);

int contadorMascotasDuenios(eMascotas datosMascotas[],eDuenios datosDuenios[],int idDuenioPuesto ,int cantMascotas,int cantDuenios);

int DuenioConMasMascotas_iguales(int contadoresDuenios[],eMascotas datosMascotas[], eDuenios datosDuenios[],int cantMascotas,int cantDuenios);
#endif // MASCOTASYDUENIOS_H_INCLUDED
