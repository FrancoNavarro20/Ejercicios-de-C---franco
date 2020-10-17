#include "pais.h"

#ifndef RAZAS_H_INCLUDED
#define RAZAS_H_INCLUDED

typedef struct
{
    int idRazas;
    char descripcion[30];
    char tamanio[30];
    int idPais;
   //ePais datosPaises;

}eRazas;



/** \brief Inicializa los datos completos de las razas.
 *
 * \param datosRazas[] eRazas , es el array de la estructura Razas para cargarlo.
 * \return void , no devuelve nada la funcion.
 *
 */
void InicializarRazas(eRazas datosRazas[],ePais datosPaises[], int cantRazas);



/** \brief Funcion que muestra el listado de las razas solamente.
 *
 * \param datosRazas[] eRazas , el array con la informacion de las razas para mostrarla.
 * \param cantRazas int, es la cantidad de las razas.
 * \return devuelve -1 si hubo un error y 0 si se pudo mostrar correctamente.
 *
 */
int mostrarRazas(eRazas datosRazas[],int cantRazas);
//--------------



/** \brief Funcion que muestra el listado de las razas disponilbes solamente.
 *
 * \param datosRazas[] eRazas , el array con la informacion de las razas para mostrarla.
 * \param cantRazas int, es la cantidad de las razas.
 * \return devuelve -1 si hubo un error y 0 si se pudo mostrar correctamente.
 *
 */
int mostrarRazasDisponibles(eRazas datosRazas[],int idRaza,int cantRazas);
#endif // RAZAS_H_INCLUDED
