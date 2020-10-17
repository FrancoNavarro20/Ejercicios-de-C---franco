#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED

typedef struct
{
    int codigoMascota;
    char nombreMascota[30];
    int edad;
    char sexo;
    char tipo[20];
    float pesoMascota;
    int idRazas;
    int idPais;
    int isEmpty;

}eMascotas;




/** \brief Inicializa los datos completos de 5 mascotas
 *
 * \param datosMascotas[] eMascotas , es el array de la estructura mascotas para cargarlo.
 * \return void , no devuelve nada la funcion.
 *
 */
void InicializarMascotas(eMascotas datosMascotas[]);

//------Inicializando  isEmpty-----------------------------||


/** \brief inicializamos todos los estados vacios del array mascotas en Vacio  o Cero.
 *
 * \param datosMascotas[] eMascotas
 * \param cant int, la cantidad de veces que va a iterar el bucle para inicializar  los isEmpty.
 * \return devuelve -1 si hubo un error y 0 si se pudo inicializar correctamente.
 *
 */
int inicializar_IsEmty(eMascotas datosMascotas[], int cant);

//------carcango una sola mascota-----------------------------||

/** \brief funcion que carga los datos de solamente una sola mascota.
 *
 * \return devuelve la la variable de la estructura cargada de una sala mascota.
 *
 */
eMascotas cargarUnaSolaMascota();

//------carcango mascotas-----------------------------||



/** \brief funcion que carga los datos de todas las mascota.
 *
 * \param datosMascotas[] eMascotas, es el array que pasamos para cargar los todos de las mascotas
 * \param cant int, la cantidad de mascotas que se pueden cargar, para que itere el bucle.
 * \return int, devuelve -1 si hubo un error y 0 si se pudo cargar correctamente.
 *
 */
int cargarMascotasArray(eMascotas datosMascotas[], int cant);



/** \brief funcion que te modifica la mascota segun el codigo de la mascota que se ingrese;
 *
 * \param datosMascotas[] eMascotas, el array con la informacion de las mascotas
 * \param idModificador int, el codigo del numero ingresado por el usuario para modificar a la mascota;
 * \param cantMascotas int, cantidad de mascotas;
 * \return int
 *
 */
int ModificarMascota(eMascotas datosMascotas[], int idModificador,int cantMascotas);

#endif // MASCOTAS_H_INCLUDED
