#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

string PrintFibonacci(int);
string inttostring(int);
int main(void)
{

	cout << "Ingrese hasta donde desea imprimir la sucesion Fibonacci: ";
	int Until;
	cin >> Until;
	system("cls");
	cout << "Sucesion Fibonacci: ";

	if (Until <= 0)
	{
		cout << "0" << endl;
		system("pause");
		return 0;
	}

	cout << PrintFibonacci(Until) << endl;

	system("pause");

	return 0;
}

/** -------- Devuelve en un string la sucesion Fibonacci hasta un numero limite dado (incluido) -------- **/
string PrintFibonacci(int Until)
{
	int Sucesion[3];

	Sucesion[0] = 0;
	Sucesion[1] = 1;
	Sucesion[2] = 0;
	int SucCounter = 0;

	string SucesionString;

	while (Sucesion[2] <= Until)
	{

		if (SucCounter == 0)
		{
			SucesionString = inttostring(Sucesion[2]);
		}
		else
		{
			SucesionString += ", ";
			SucesionString += inttostring(Sucesion[2]);
		}

		Sucesion[2] = Sucesion[0] + Sucesion[1];
		Sucesion[0] = Sucesion[1];
		Sucesion[1] = Sucesion[2];
		SucCounter++;
	}

	return SucesionString;

}

string inttostring(int num)
{
	stringstream Tempss;

	Tempss << num;

	return Tempss.str();
}