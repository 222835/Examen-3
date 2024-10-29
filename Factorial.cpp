/**
	Anna Lizbeth Barajas Sandoval 222835
	Examen 3 - Factorial y cajero
	Codigo para realizar el factorial de un numero con recursividad y
	para simular un cajero
**/

#include <iostream>

using namespace std;

/** Funcion que recibe un numero, realiza el factorial de forma recursiva, y regresa el resultado del factorial **/
double factorial(int num)
{
	if (num == 0)
	{
		return 1;
	} else
	{
		return num*factorial(num-1);
	}
}

/** Funcion que realiza todas las funciones del cajero **/
void cajero()
{
	/** Se inicializa el saldo**/
	float saldo = 20000;
	int opc;
	/** Se realiza un menu de opciones con un ciclo **/
	do{
		system("cls");
		float retiro = 0;
		cout << "--- MENU CAJERO ---" << endl
		<< "0. Salir " << endl
		<< "1. Consultar saldo" << endl
		<< "2. Retirar efectivo" << endl
		<< "Seleccione una opcion: ";
		cin >> opc;
		switch (opc)
		{
			case 0:
				cout << "Saliendo del cajero..." << endl;
				system("pause");
				return;
				break;
			case 1:
				cout << "Su saldo actual es : $" << saldo << endl;
				system("pause");
				break;
			case 2:
				cout << "Cuanto dinero desea retirar?: ";
				cin >> retiro;
				/** Si no hay suficiente dinero no se realiza ninguna operacion y se le informa al usuario **/
				if (retiro > saldo)
				{
					cout << "Usted no cuenta con el dinero suficiente para realizar el retiro" << endl
					<< "Su saldo actual es: $" << saldo << endl;
					system("pause");
				} else
				{
					saldo = saldo - retiro;
					cout << "Se han retirado $" << retiro << endl
					<< "Su saldo actual es: $" << saldo << endl;
					system("pause");
				}
				break;
			default:
				cout << "Favor de escoger una opcion valida" << endl;
				system("pause");
				break;
		}
		
	}while(opc != 0);
}

/** Se encarga de el menu principal y la redireccion a las funciones necesarias **/
int main ()
{
	int opc;
	do {
		system ("cls");
		cout << "** MENU **" << endl
		<< "0. Salir " << endl
		<< "1. Factorial de un numero" << endl
		<< "2. Cajero" << endl
		<< "Seleccione una opcion: ";
		cin >> opc;
		switch (opc)
		{
			case 0:
				cout << "Saliendo del programa...";
				break;
			case 1:
				/** Se inicializan variables para el numero y el resultado **/
				int numero;
				double resultado;
				cout << "--- FACTORIAL ---" << endl 
				<<"Ingrese un numero para sacar el factorial: ";
				cin >> numero;
				/** Si el numero es negativo no se puede obtener unn factorial, asi que informa al usuario. De lo contrario llama a la funcion e imprime **/
				if (numero < 0)
				{
					cout << "No se puede sacar un factorial de un numero negativo" << endl;
					system("pause");
				} else
				{
					resultado = factorial(numero);
					cout << "El factorial es: " << resultado << endl;
					system("pause");
				}
				break;
			case 2:
				/** Llama a la funcion cajero **/
				cajero();
				break;
			default:
				cout << "Favor de ingresar una opcion valida" << endl;
				break;
		}
		
	} while (opc != 0);
	
	return 0;
}