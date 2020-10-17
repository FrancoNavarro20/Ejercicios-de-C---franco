
//Estructura
typedef struct
{
    char nombre[30];
    int edad;
    int nota;
}Alumnos;

//prototipos
Alumnos cargarAlumnos();
void cargarArrayAlumnos(Alumnos array[], int cant);
void mostrarAlumnos(Alumnos datos);
void mostrarArrayAlumnos(Alumnos datos[], int cant);
