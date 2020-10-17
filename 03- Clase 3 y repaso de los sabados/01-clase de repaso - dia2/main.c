#include <stdio.h>
#include <stdlib.h>

/*

Sin funciones:
para realizar un pedido, solicitar tres datos , iterar 5 veces;
código de tipo int , validar entre 100 y 200
cantidad de tipo entero(int), validar entre 1 y 20
una talle de tipo char validad entre('S' , 'M' , 'L')
a-mostrar el código y el talle  del que mas cantidad solicito
b-el promedio del total  de cantidades de talle 'M' con decimales

*/


int main()
{
    char talle;
    char tallMasSolicitado;
    int codigoProducto;
    int cantidadDeTalles;
    int cantidadTalleM;
    int contadorTallerM;
    int cantidadTalleMasSolicitado;
    int codigoTallaMasSolicitado;
    int i;
    float promedio;

    cantidadTalleM =0;
    contadorTallerM =0;


    for(i=0;i<3;i++)
    {
        //Primer dato
        printf("Ingrese el codigo del producto(cantidad entre 100 y 200):");
        scanf("%d", &codigoProducto);
        while(codigoProducto <100 || codigoProducto > 200)
        {
            printf("Error!!! reingrese la cantidad:");
            fflush(stdin);
            scanf("%d", &codigoProducto);
        }

        //segundo dato;
        printf("Ingrese la cantidad de talles (1 hasta 10):");
        scanf("%d", &cantidadDeTalles);
        while(cantidadDeTalles<1 || cantidadDeTalles >20)
        {
            printf("Error!!! Re-ingrese la segunda cantidad:");
            scanf("%d", &cantidadDeTalles);
        }

        //Ingresandoese el talle :");
        printf("Ingrese los taller (s, m , l):");
        fflush(stdin); //no olvidar ponerle el buffer al comande char;
        scanf("%c", &talle);
        while(talle != 's' && talle != 'm' && talle != 'l')
        {
            printf("Error!!!re-ingrese el talle (s,m,l) :");
            fflush(stdin); //no olvidar ponerle el buffer al comande char;
            scanf("%c", &talle);
        }


        // primera respuesta!!!
        if((i == 0) || (cantidadDeTalles > cantidadTalleMasSolicitado)) //Le agregue los parentesis para la compilacion por que lo saca como warninnig
        {
            cantidadTalleMasSolicitado = cantidadDeTalles;
            codigoTallaMasSolicitado = codigoProducto;
            tallMasSolicitado = talle;
        }

        if(talle == 'm')
        {
            cantidadTalleM = cantidadTalleM + cantidadDeTalles;
            contadorTallerM++;
        }


    }//fin del for


    //Sacando el promedio de los taller de M
    if(contadorTallerM ==0)
    {
        promedio = 0;
    }
    else
    {
        promedio = (float)cantidadDeTalles / contadorTallerM;

    }


    //mostrando datos finales!!!
    printf("El talle del mas solicitado es %c y el codigo es %d \n",tallMasSolicitado, codigoTallaMasSolicitado);
    printf("El promedio de los taller M es %f:", promedio);

    return 0;
}
