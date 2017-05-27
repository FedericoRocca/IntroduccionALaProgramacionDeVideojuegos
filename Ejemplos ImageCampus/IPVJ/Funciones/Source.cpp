#include <iostream>
using namespace std;

void MostrarSaludo(int);
int Sumar(int, int);
int Restar(int, int);
int Multiplicar(int, int);
void Dividir(int, int);
void MostrarPromedio(int, int, int);
void PrintMayor(int, int);
void RepeticionChar(int, char);

int main(void)
{
	char Opcion;
	bool Menu = true;
	while (Menu)
	{
		system("cls");

		cout << "A - 3 parametros y mostrar promedio" << endl;
		cout << "B - 2 parametros y numero mayor" << endl;
		cout << "C - 2 parametros, repeticion de char" << endl;
		cout << "0 - Salir" << endl;
		cout << "Opcion: ";
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{
			case 'a':
			case 'A':
			{
				cout << "Numero 1 ";
				int Number1;
				cin >> Number1;

				cout << "Numero 2 ";
				int Number2;
				cin >> Number2;

				cout << "Numero 3 ";
				int Number3;
				cin >> Number3;

				system("cls");

				cout << "Promedio de numeros " << Number1 << ", " << Number2 << ", " << Number3 << ": "; MostrarPromedio(Number1, Number2, Number3);
				system("pause");

			}
				break;
			case 'b':
			case 'B':
			{
				cout << "Numero 1: ";
				int Number1;
				cin >> Number1;

				cout << "Numero 2: ";
				int Number2;
				cin >> Number2;

				system("cls");

				PrintMayor(Number1, Number2);
				system("pause");

			}
				break;
			case 'c':
			case 'C':
			{
				cout << "Cantidad: ";
				int Cantidad;
				cin >> Cantidad;

				cout << "Letra: ";
				char Letra;
				cin >> Letra;

				system("cls");

				RepeticionChar(Cantidad, Letra);

				system("pause");
			}
				break;

			case '0':
				Menu = false;
				break;

			default:
				cout << "Metiste mal los ganchos..." << endl;
				system("pause");
				break;

		}

		system("cls");
	}

	return 0;
}

void MostrarSaludo(int Numero)
{
	cout << "Hola vieja " << Numero << endl;
}

int Sumar(int N1, int N2)
{
	return N1 + N2;
}

int Restar(int N1, int N2)
{
	return N1 - N2;
}

int Multiplicar(int N1, int N2)
{
	return N1 * N2;
}

void Dividir(int N1, int N2)
{
	if (N2 != 0)
	{
		cout << "Cociente " << N1 / N2 << ", resto " << N1 % N2 << endl;
	}
	else cout << "No se puede dividor por cero." << endl;
}

void MostrarPromedio(int n1, int n2, int n3)
{
	cout << "Promedio: " << (n1 + n2 + n3) / 3 << endl;
}

void PrintMayor(int n1, int n2)
{
	if (n1 > n2)
	{
		cout << "Numero mayor: " << n1 << endl;
	}
	else if( n2 > n1 )
	{ 
		cout << "Numero mayor: " << n2 << endl;
	}
	else
	{
		cout << "Numeros iguales" << endl;
	}
}

void RepeticionChar(int Cantidad, char Letra)
{
	for (int i = 0; i < Cantidad; i++)
		cout << "Letra: " << Letra << endl;
}