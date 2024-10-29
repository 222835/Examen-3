/**
	Anna Lizbeth Barajas Sandoval 222835
	Examen 3 - Factorial
	Codigo para realizar el factorial de un numero con recursividad
**/

#include <iostream>

using namespace std;

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

int main ()
{
	int numero;
	double resultado;
	cout << "Ingrese un numero para sacar el factorial: ";
	cin >> numero;
	if (numero < 0)
	{
		cout << "No se puede sacar un factorial de un numero negativo";
	} else
	{
		resultado = factorial(numero);
		cout << "El factorial es: " << resultado;
	}
	
	return 0;
}