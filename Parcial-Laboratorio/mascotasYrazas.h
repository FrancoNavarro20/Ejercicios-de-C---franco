#include "mascotas.h"
#include "razas.h"
#include "pais.h"
#ifndef MASCOTASYRAZAS_H_INCLUDED
#define MASCOTASYRAZAS_H_INCLUDED






/** \brief Funcion que muestra el listado de las razas y mascotas juntos.
 *
 * \param datosRazas[] eRazas , el array con la informacion de las razas para mostrarla.
 * \param datosMascotas[] eMascotas , el array con la informacion de las mascotas para mostrarla.
 * \param cantRazas int, es la cantidad de las razas.
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \return devuelve -1 si hubo un error y 0 si se pudo mostrar correctamente.
 *
 */

int mostrarMascotasYRazas(eMascotas datosMascotas[], eRazas datosRazas[],ePais datosPaises[],int cantMascotas,int cantRazas, int cantPais);




/** \brief
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas.
 * \param datosRazas[] eRazas, el array con la informacion de las razas.
 * \param opcionMenu int, es la opcion que ingreso el usuario.
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \param cantRazas int, es la cantidad de las razas.
 * \return void, no devuelve ningun valor.
 *
 */
void switchOpciones(eMascotas datosMascotas[],eRazas datosRazas[],ePais datosPaises[], int opcionMenu, int cantMascotas, int cantRazas, int cantPaises);

//--------------------------Eliminar mascotas-----------------------------||

/** \brief funcion que hace un borrado logico de con el id , para eliminar a la mascota.
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas.
 * \param datosRazas[] eRazas, el array con la informacion de las razas.
 * \param idRazas int, es el id que ingreso el usuario en referencia a la mascota que desea borrar.
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \return int,devuelve -1 si hubo un error y 0 si se pudo eliminar correctamente.
 *
 */
int eliminarMascota(eMascotas datosMascotas[],eRazas datosRazas[] ,int idRazas, int cantMascotas);


/** \brief funcion que te busca la raza disponible segun el id que le pongas,
 *
 * \param datosRazas[] eRazas, el array con la informacion de las razas.
 * \param idRazas int, es el id que ingreso el usuario en referencia a la mascota que desea buscar.
 * \param cantRazas int, es la cantidad de las razas.
 * \return int,devuelve -1 si hubo un error y 0 si se pudo encontrar la raza.
 *
 */
int buscarRazaDisponible(eRazas datosRazas[],int idRazas, int cantRazas);


/** \brief funcion que le asigna la raza ingresada a los datos de la mascota con el id ingresado y despues la da de ALTA, con IsEmpty lleno.
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas.
 * \param idRazas int, es el id que ingreso el usuario en referencia a la mascota que desea ASIGNAR LA RAZA.
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \return int,devuelve -1 si hubo un error y 0 si se pudo poner correctamente la raza.
 *
 */
int PonerIdRaza(eMascotas datosMascotas[],int IdRaza,int IdPais, int cantMascotas);

/** \brief funcion que te ordena las mascotas por el peso de menor al mas pesado.
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas.
 * \param datosRazas[] eRazas, el array con la informacion de las razas.
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \param cantRazas int, es la cantidad de las razas.
 * \return int,devuelve -1 si hubo un error y 0 si se pudo ordenar correctamente las mascotas.
 *
 */
int OrdenandoMacotasPorPeso(eMascotas datosMascotas[], eRazas datosRazas[],int cantMascotas,int cantRazas);

/** \brief funcion que cuenta la cantidad de mascotas que hay por pais;
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas.
 * \param IdPais int, el pais al cual queremos realizar el contador;
 * \param cantMascotas int, es la cantidad de las mascotas.
 * \return int, devuelve -1 si hubo  un error, y si no hubo error devuelve la cantidad de mascotas del  pais asignado;
 *
 */
int CantidadDeMascotasPorPais(eMascotas datosMascotas[],int IdPais, int cantMascotas);

/** \brief funcion para sacar el maximo pais  con mascotas
 *
 * \param contPais1 int, cantidad de mascotas del pais 1
 * \param contPais2 int, cantidad de mascotas del pais 2
 * \param contPais3 int, cantidad de mascotas del pais 3
 * \param contPais4 int, cantidad de mascotas del pais 4
 * \param maximo int*, recibe un puntero que se le asigna al maximo de todos los contadores;
 * \return int, devuelve -1 si hubo un error, o cero  0 si pudo encontrar el maximo;
 *
 */
int PaisConMasMascotasEnLaVeterinaria(int contPais1,int contPais2,int contPais3,int contPais4,int contPais5,int* maximo);

/** \brief funcion que muestra el pais con mas mascotas dentrode la veterinaria;
 *
 * \param maximo int, recibe numero maximo que refiere al id del pais con mas mascotas;
 * \return int, devuelve -1 si hubo un error, o cero  0 si pudo mostrar correctamente;
 *
 */
int mostrarPaisConMasMascotas(int maximo);



int PonerIdRazaYPaisModificado(eMascotas datosMascotas[],int IdRaza ,int idPais,int cantMascotas);

int eliminarRazaCompleta(eMascotas datosMascotas[],eRazas datosRazas[] ,int IdRaza, int cantMascotas);
#endif // MASCOTASYRAZAS_H_INCLUDED
