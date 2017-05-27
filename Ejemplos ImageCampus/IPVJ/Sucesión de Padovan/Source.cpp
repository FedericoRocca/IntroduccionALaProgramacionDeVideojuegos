#include <iostream>

using namespace std;

int DoPadovan(int);

int main(void)
{

	//Programa que calcula la suceción de Padovan

	cout << "Ingrese la cantidad de numeros Padovan a mostrar: " << endl;
	int Cantidad;
	cin >> Cantidad;
	unsigned long long int Secuence = 0;

	while (Cantidad != 0)
	{

		cout << DoPadovan(Secuence) << ", ";
		Secuence++;

		Cantidad--;

	}

	system("pause");

	return 0;
}

int DoPadovan(int Numero)
{
	if (Numero < 3)
		return 1;
	else
		return DoPadovan(Numero - 2) + DoPadovan(Numero - 3);
}

