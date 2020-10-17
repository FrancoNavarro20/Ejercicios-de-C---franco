#include <stdio.h>
#include <stdlib.h>
#include "ValidacionesSexo.h"



char pedirSexo(char textoError [])
{
    char sexo;

    printf("Ingrese el Sexo (m o f):");
    fflush(stdin); //limpiar buffer!!!
    scanf("%c",&sexo);

    while(validarSexo(sexo))
    {
        printf("%s", textoError);
        fflush(stdin); //limpiar buffer
        scanf("%c",&sexo);
    }


    return sexo;
}

int validarSexo(char sexo)
{
    int validarSexo;

    validarSexo = 0;

    if(sexo != 'm' && sexo != 'f')
    {
        validarSexo = 1;
    }

    return validarSexo;
}


