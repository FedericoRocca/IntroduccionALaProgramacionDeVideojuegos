#include <iostream>

using namespace std;

bool EsPrimo(long int);

int main(void)
{

	cout << "Ingrese el primer numero: ";
	long int Numero1;
	cin >> Numero1;
	system("cls");

	cout << "Ingrese el segundo numero: ";
	long int Numero2;
	cin >> Numero2;
	system("cls");

	unsigned short int CantPrimos = 0;
	unsigned short int CantCompuestos = 0;
	system("cls");

	cout << "Numeros primos: ";

	if (Numero1 < Numero2)
	{
		while (Numero1 <= Numero2)
		{

			if (EsPrimo(Numero1) == true && Numero1 != 1 && Numero1 != 0)
			{
				cout << Numero1 << ",";
				CantPrimos++;
			}
			else
			{
				CantCompuestos++;
			}

			Numero1++;

		}

	}
	else if (Numero2 < Numero1)
	{
		while (Numero2 <= Numero1)
		{

			if (EsPrimo(Numero2) == true && Numero1 != 1 && Numero1 != 0)
			{
				cout << Numero2 << ",";
				CantPrimos++;
			}
			else
			{
				CantCompuestos++;
			}

			Numero2++;

		}
	}
	else
	{
		if (EsPrimo(Numero1) == true && Numero1 != 1 && Numero1 != 0)
		{
			cout << Numero1;
			CantPrimos++;
		}
		else if (Numero1 != 1 || Numero1 != 0)
		{

		} else CantCompuestos++;
			
			
	}

	cout << endl;

	cout << "Cantidad de primos: " << CantPrimos << endl;
	cout << "Cantidad de compuestos: " << CantCompuestos << endl;
	cout << "Total de numeros: " << CantCompuestos + CantPrimos << endl;

	system("pause");

	return 0;
}

bool EsPrimo(long int Number)
{

	long int Primes = 0;
	unsigned short int Divider = 0;

	for (int i = 1; i <= Number; i++)
	{
		if (Number % i == 0)
		{
			Divider++;
		}
	}

	if (Divider <= 2)
	{
		return true;
	}
	else
	{
		return false;
	}

}