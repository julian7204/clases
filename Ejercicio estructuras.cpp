#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

//Crea la estructura para almacenar los datos del empleado
struct estEmpleado
{
	int codigo;
	string nombre;
	char cedula[11];
	char coddep[4];
	char genero;
	bool jubilado;
	float sueldo;

};

//definir el array de estructura para almancerna 50 empleados como máximo
estEmpleado *empleado = new estEmpleado[50];

//Buscar por CI
bool buscarCI()
{
	//Escriba una función para buscar y mostrar el empleado al que le corresponde la CI ingresada por el usuario, 
	//este parámetro se recibe en esta función y se usa para buscar el CI, ademas que parametro necesita recibir para controlar el bucle, 
	//Tenga cuidado con el tipo de variable que usa como paramétro de CI. Revise la estructura para decidir como definirá
	//este parámetro, tenga en cuenta que si va a comparar arrays de cadenas no puede usar ==, deberá usar la función strcmp()	
}

//Crear empleados
int crearEmpleados()
{
	int indiceEmpleado=0;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0103203201");
	empleado[indiceEmpleado].nombre="Tony Stark";
	strcpy(empleado[indiceEmpleado].coddep,"VEN");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=false;
	empleado[indiceEmpleado].sueldo=1200;
	indiceEmpleado++; //SE INCREMENTA EL INDICE DE EMPLEADOS UNA VEZ QUE SE HA INGRESADO EL NUEVO
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0120312911");
	empleado[indiceEmpleado].nombre="Janet Van Dyne";
	strcpy(empleado[indiceEmpleado].coddep,"MKT");
	empleado[indiceEmpleado].genero='F';
	empleado[indiceEmpleado].jubilado=false;
	empleado[indiceEmpleado].sueldo=1250;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0103203201");
	empleado[indiceEmpleado].nombre="Steve Rogers";
	strcpy(empleado[indiceEmpleado].coddep,"ADM");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=false;
	empleado[indiceEmpleado].sueldo=3800;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0193495301");
	empleado[indiceEmpleado].nombre="Bruce Banner";
	strcpy(empleado[indiceEmpleado].coddep,"ADM");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=true;
	empleado[indiceEmpleado].sueldo=1500;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0103203201");
	empleado[indiceEmpleado].nombre="Natasha Romanoff";
	strcpy(empleado[indiceEmpleado].coddep,"MKT");
	empleado[indiceEmpleado].genero='F';
	empleado[indiceEmpleado].jubilado=true;
	empleado[indiceEmpleado].sueldo=450;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0103229549");
	empleado[indiceEmpleado].nombre="Pietro Maximoff";
	strcpy(empleado[indiceEmpleado].coddep,"VEN");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=false;
	empleado[indiceEmpleado].sueldo=500;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0112040351");
	empleado[indiceEmpleado].nombre="Wanda Maximoff";
	strcpy(empleado[indiceEmpleado].coddep,"VEN");
	empleado[indiceEmpleado].genero='F';
	empleado[indiceEmpleado].jubilado=true;
	empleado[indiceEmpleado].sueldo=1900;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0432458931");
	empleado[indiceEmpleado].nombre="Peter Parker";
	strcpy(empleado[indiceEmpleado].coddep,"MKT");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=false;
	empleado[indiceEmpleado].sueldo=450;
	indiceEmpleado++;
	
	empleado[indiceEmpleado].codigo=indiceEmpleado+1;
	strcpy(empleado[indiceEmpleado].cedula,"0806483201");
	empleado[indiceEmpleado].nombre="Clint Barton";
	strcpy(empleado[indiceEmpleado].coddep,"ADM");
	empleado[indiceEmpleado].genero='M';
	empleado[indiceEmpleado].jubilado=true;
	empleado[indiceEmpleado].sueldo=800;
	indiceEmpleado++; 

	return indiceEmpleado; // SE RETORNA EL NUEVO INDICE PARA PODER PASARLO A LAS OTRAS FUNCIONES QUE LO USAN
	
}

void listarEmpleados()
{	
	//Escriba una función para mostrar todos los empleados ingresados, tenga en cuenta
	//que parametro necesita recibir para controlar el bucle.
}

void empleadosDep()
{
	//Escriba una función para mostrar todos los empleados de un departamento en específico, tenga en cuenta
	//que parametro necesita recibir para controlar el bucle, y el parámetro para saber que departamento listará
	//Tenga cuidado con el tipo de variable que usa como paramétro. Revise la estructura para decidir como definirá
	//este parámetro, tenga en cuenta que si a comparar arrays de cadenas no puede usar ==, deberá usar la función strcmp()	

} 


void empleadosGenero()
{
	//Escriba una función para mostrar todos los empleados de un género en específico, 
	//reciba como parámetro ese valor y haga las compraciones necesarias, tenga en cuenta que
	//parametro necesitara para controlar el bucle
	
}

void listarSueldo()
{
	//Escriba una función para mostrar todos los empleados cuyo sueldo sea mayor o igual al valor indicado por el usuario, 
	//reciba como parámetro ese valor y haga las compraciones necesarias, tenga en cuenta que
	//parametro necesitara para controlar el bucle
}
	
void empleadosMinMaxSueldo()
{
	//Escriba una función para mostrar todos los empleados cuyo sueldo igual al minimo sueldo de todos los empleados, 
	//o sea igual al maximo sueldo de todos los empleados.
	//Escriba funciones adicionales para encontrar el sueldo maximo y el sueldo minimo. Haga las compraciones necesarias, 
	//tenga en cuenta que parametro necesitara para controlar el bucle

}
	
void empleadosJubilados()
{
	//Escriba una función para mostrar tanto los empleados jubilados como los activos, 
	//de acuerdo al parámetro recibido,  tenga en cuenta este parámetro para hacer las 
	//compraciones necesarias y listar los empleados activos o los jubilados (nunca los dos al mismo tiempo)
	//ademas que parametro necesitara para controlar el bucle
}	
	
int main()
{
	int menu=0, contEmpleado=0;
	contEmpleado=crearEmpleados();
	do
	{
	system("cls");
	cout << "1. Listar todos los empleados\n";
	cout << "2. Listar empleados de genero femenino\n";
	cout << "3. Listar empleados de genero masculino\n";
	cout << "4. Listar empleados por departamento\n";
	cout << "5. Listar empleados con sueldos mayores a cantidad ingresada\n";
	cout << "6. Listar empleados con el más alto y más bajo sueldo\n";
	cout << "7. Listar empleados jubilados\n";
	cout << "8. Listar empleados activos\n";
	cout << "9. Buscar empleado por CI\n";
	cout << "10. Salir\n";
	
	cin >> menu;
	cin.ignore();
	
	switch(menu)
	{
		case 1:
			//Pasar parámetro para controlar bucle y escribir la funcipon para listar todos los empleados
			listarEmpleados();
			system("pause");
			break;
		
		case 2:
			//pasar parametro adecuado para controlar bucle, y listar empleados solo de género femenino
			empleadosGenero();
			system("pause");
			break;
		
		case 3:
			//pasar parametro adecuado para controlar bucle, y listar empleados solo de género masculino
			empleadosGenero();
			system("pause");
			break;
		
		case 4:
			//pasar parametro adecuado para controlar bucle, y listar empleados por departamento.
			//se debe recibir el parámetro del departamento en una variable, tenga en cuenta el 
			//tipo de variable, para asegurarse de que tipo debe ser revise la estructura como esta
			//definido departamento, recuerde que luego deberá compara con esa variable recorriendo
			//el array de estructuras para verificar que el departamenteo sea igual al solicitado 
			//por el usuario. Consejo, cuando compara cadenas de caracteres no puede usar ==, debe usar
			//la función strcmp().
			empleadosDep();
			system("pause");
			break;	
		case 5:
			//pasar parametro adecuado para controlar bucle, y listar los empleados que ganan
			//mas que una cantidad ingresada por el usuario.
			//reciba aqui ese valor y envielo como parametro a la función listarSueldo()
			listarSueldo();
			system("pause");
			break;
		case 6:
			//pasar parametro adecuado para controlar bucle, y listar empleados que tienen
			//el mas alto y mas bajo sueldo. Cree funciones para encontrar el maximo sueldo
			//el minimo sueldo y uselas dentro de la funcion empleadosMInMaxSueldo()
			//para mostrar mostrar aquellos que cumplen la condición de ganar el minimo y el maximo
			//valor de sueldo.
			empleadosMinMaxSueldo();
			system("pause");
			break;
		case 7:
			//pasar parametro adecuado para controlar bucle, y listar empleados jubilados
			//pase el parametro correcto para listar los jubilados
			empleadosJubilados();
			system("pause");
			break;
		case 8:
			//pasar parametro adecuado para controlar bucle, y listar empleados activos
			//use la misma función de la opción anterior, empleadosJubilados(), para listar los empleados activos
			//pase el parametro correcto para listar los activos
			empleadosJubilados();
			system("pause");
			break;
		case 9:
			//pasar parametro adecuado para controlar bucle, mostrar el empleado por el número de CI
			//se debe recibir el parámetro del CI en una variable, tenga en cuenta el 
			//tipo de variable, para asegurarse de que tipo debe ser, revise la estructura como esta
			//definido CI, recuerde que luego deberá compara con esa variable recorriendo
			//el array de estructuras para verificar que el CI sea igual al solicitado 
			//por el usuario. 
			buscarCI();
			system("pause");
			break;	
			
		
		}
	}while(menu !=10);

}
