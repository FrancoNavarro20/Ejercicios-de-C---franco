#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED


typedef struct
{
    int codigoMascota;
    char nombreMascota[30];
    int edad;
    char tipo[20];
    int idDuenio;
    int isEmpty;

}eMascotas;

//----HARDCOREAD MASCOTA---------
void InicializarMascotas(eMascotas datosMascotas[]);

//----CARGAR UNA  SOLA MASCOTA---------
eMascotas cargarUnaSolaMascota();

//----CARGAR TODAS LAS MASCOTA---------
int cargarMascotasArray(eMascotas datosMascotas[], int cant);

//----BUSCAR LUGAR VACIO MASCOTA---------

int BuscarLugarVacio(eMascotas datosMascotas[], int cant);

//----MOSTRAR TODAS LAS MASCOTA---------

int mostrarTodasLasMascotas(eMascotas datosMascotas[], int cantMascotas);


//----INICIALIZAR  ISEMPTY MASCOTA---------

int inicializar_IsEmty(eMascotas datosMascotas[], int cant);


//----ELIMINAR MASCOTA---------
int BajaMascota(eMascotas datosMascotas[], int id, int cant);

//----MODIFICAR MASCOTA---------
int ModificarMascota(eMascotas datosMascotas[], int codigoMascotas,int cant);


//----MOSTRAR LOS DUEÑOS CON SUS ANIMALES---------

#endif // MASCOTAS_H_INCLUDED
