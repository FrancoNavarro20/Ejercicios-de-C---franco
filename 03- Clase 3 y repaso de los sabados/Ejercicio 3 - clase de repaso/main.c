#include <stdio.h>
#include <stdlib.h>
#include "ValidacionesSexo.h"
/*
Bibliotecas:
función
//retorna 1 si el sexo es correcto 'f' o 'm'
int validarSexo(char sexoParametro)
en la biblioteca "validacion.h", hacer el ".c"
función
//retorna un sexo valido ('f' o 'm'), pide el dato por "scanf" y lo //validad usando la funcion "validarSexo"
char pedirSexo()
en la bilioteca "funciones.h", hacer el ".c"

##llamar a la funcion en el Main y mostrar el sexo ingresado

*/

//prototipos
int validarSexo(char sexo);
char pedirSexo(char textoError []);

int main()
{


    char sexoIngresado;
    sexoIngresado = pedirSexo("Error , re-ingrese el sexo:");

    printf("El sexo ingresado es: %c", sexoIngresado);

    return 0;
}















