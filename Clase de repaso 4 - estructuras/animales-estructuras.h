

typedef struct
{
    char animal[30];
    int edad;
    int isEmpty;

}Animales;


void CargarAnimalesArray(Animales datosAnimales[], int cant);
void mostrarAnimalesArray(Animales mostrarDatosAnimales[], int cant);
void mostrarAnimales(Animales mostrarDatosAnimales, int cant);
void menu(Animales datosAnimales[],int cant);
void EntrandoAlasOpciones(int opcionMenu, Animales datosAnimales[], int cant);
void OrdenarPorNombreAnimal(Animales datosAnimales[],int cant);
void OrdenarPorEdadAnimal(Animales datosAnimales[],int cant);
void borrarElementoDelArray(Animales datosAnimales[],char nombreAnimal[],int cant);
int buscarLugar(Animales datosAnimales[], int cant);
Animales CargarAnimales();
void inicializarIsEmpty();






