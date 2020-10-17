#ifndef EMPLEADOS_H
#define EMPLEADOS_H

//Estructuras
typedef struct
{
  char nombre[20];
  int legajo;
  float sueldo;
  int porcentajeAumento;
  float sueldoFinal;
  int isEmpty;

}Empleados;

//Firmas o prototipos;

Empleados cargarEmpleados();
float sueldoFinal(Empleados datosEmpleados);
void mostrarEmpleados(Empleados datosEmpleados);
int validacionNumerosEnteros(int numero,int min , int max);
int validacionNumerosFlotantes(float numero,int min , int max);
void menu(Empleados datosEmpleados[], int cant);
int ingresarOpcion(int min,int max);
void ordenamientoEmpleadosSwitch(Empleados datosEmpleados[], int cant);
void OrdenarPorNombre(Empleados datosEmpleados[],int cant);
void OrdenarPorlegajo(Empleados datosEmpleados[],int cant);
int ingreseOpcionAborrar();
void borrarEmpleado(Empleados datosEmpleados[],int opcionBorrar, int cant);
int verificarEspacios(Empleados datosEmpleados[],int cant);


#endif // EMPLEADOS_H_INCLUDED
