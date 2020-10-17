#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char prueba[20];
    char prueba2[25];

    /*
    sprintf(prueba,"Hola estoy probando esta funcion!!");
    snprintf(prueba,19,",Hola estoy probando ,esta funcion!!dasdasdsadasd");
    printf("%s",prueba);

    strcpy(prueba,"Hola como estas");
    strncpy(prueba2,prueba,4); - aca le copia lo de la cadena prueba pero los caractes que le pongamos en este caso 4;
-----------------------------------------------
    strcpy(prueba,"Hola como estas!");
    strcpy(prueba2,", soy franco");

    strncat(prueba,prueba2,3); - Aca le agregar lo de la cadena prueba2 pero solo los caracteres que le pongamos;
-----------------------------------------------
    strcpy() - te copia la cadena completa
    strcat() - te agrega lo que la cadena tenia ya puesto, no copiar si la cadena no tiene nada por que te agraga la basura;
    */


    //printf("Concatenando las caderas %s", strncat(prueba,prueba2,3));
    printf("char prueba = %s\n", prueba);
    printf("char prueba2 = %s\n", prueba2);


    return 0;
}
