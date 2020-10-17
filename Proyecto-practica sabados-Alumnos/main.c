#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG_NAME 50
#define CANTCLIENTES 5
#define ALTA 1
#define BAJA 0


typedef struct{
	char calle[LONG_NAME];
	int altura;
	char cp[10];
	char localidad[10];
}sDireccion;

typedef struct {
	char nombre[LONG_NAME];
	int edad;
	int isEmpty;
	sDireccion direccion;
}sCliente;


int cliente_imprimir(sCliente arrayClientes[],int tamanioClientes);
int cargarArrayClientes(sCliente* datosClientes, int tamanio);
sCliente cargar_Cliente();
int InicializarClientesBaja(sCliente* datosClientes,int tam);
int main()
{
    //lista de clientes
	char nombresClientes[10][LONG_NAME];
	int edadClientes[10];
    int opcion;

	sCliente cliente1;
	sCliente arrayClientes[5];
    InicializarClientesBaja(arrayClientes,5);

    do
    {
        printf("\n1.cargar Empleado");
        printf("\n2.mostrar lista de empleados");
        printf("\n3.Salir\n");

        printf("\nIngrese una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1 :
                system("cls");
                cargarArrayClientes(arrayClientes,5);
                 system("cls");
                break;
            case 2 :
                printf("Nombre  |   edad\n");
                cliente_imprimir(arrayClientes, 5);

                break;
            case 3:
                exit(-1);
                break;
        }
    }while(opcion != 3);






 /*
    cliente1.edad = 10;
	strncpy(cliente1.nombre,"Marina",LONG_NAME);
	cliente1.direccion.altura=123;
	strncpy(cliente1.direccion.calle,"asasr",LONG_NAME);

	arrayClientes[2] = cliente1;


	if(cliente_imprimir(arrayClientes,CANTCLIENTES)==0){
		printf("Esto funciono");
	}else{
		printf("Che esto no salio");
	}
    */


    return 0;
}
int InicializarClientesBaja(sCliente* datosClientes,int tam)
{
    int retorno =  -1;
    int i;
    if(datosClientes !=NULL && tam >0)
    {
        retorno =0;
        for(i=0;i<tam;i++)
        {
            datosClientes[i].isEmpty = BAJA;
        }
    }

    return retorno;
}

sCliente cargar_Cliente()
{
    sCliente datosClientes;

    printf("Ingrese el nombre del cliente:");
    fflush(stdin);
    scanf("%s", datosClientes.nombre);

    printf("Ingrese la  edad del cliente:");
    scanf("%d", &datosClientes.edad);

    return datosClientes;
}

int cargarArrayClientes(sCliente* datosClientes, int tamanio)
{
    int retorno = -1;
    int i;
    if(datosClientes != NULL && tamanio >0)
    {
        retorno = 0;
        for(i=0;i<tamanio;i++)
        {
            datosClientes[i]= cargar_Cliente();
            datosClientes[i].isEmpty = ALTA;
            break;
        }
    }

    return retorno;
}

int cliente_imprimir(sCliente arrayClientes[],int tamanioClientes){
	int retorno = -1;

	if(arrayClientes != NULL && tamanioClientes > 0)
    {
		retorno = 0;
		for (int i = 0; i < tamanioClientes; i++)
        {
            if(arrayClientes[i].isEmpty == ALTA)
            {
                printf("%-10s %-6d \n",arrayClientes[i].nombre,arrayClientes[i].edad);
            }

		}
	}

	return retorno;
}
