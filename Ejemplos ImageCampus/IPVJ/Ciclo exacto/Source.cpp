#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{

	bool Menu = true;

	while (Menu)
	{
		
		system("cls");
		cout << "A - Hola 5 veces" << endl;
		cout << "B - 5 veces la letra ingresada" << endl;
		cout << "C - Desde el cero hasta el ingresado" << endl;
		cout << "D - Multiplicacion por sumas entre dos numeros" << endl;
		cout << "E - Numeros pares entre cero y el ingresado" << endl;
		cout << "F - Triangulo" << endl;
		cout << "G - Rombo" << endl;
		cout << "0 - Salir" << endl;
		cout << "Opcion: ";
		char Opcion;
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{
		case '0':

			Menu = false;
			cout << "Nos vemos!" << endl;
			system("pause");
			break;

		default:

			cout << "Ingresaste cualquier cosa..." << endl;
			cout << "Proba de nuevo..." << endl;
			system("pause");

			break;

		case 'a':
		case 'A':
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "Hola n " << i + 1 << endl;
			}
			system("pause");
		}
		break;

		case 'b':
		case 'B':
		{
			cout << "Ingresa una letra: ";
			char Letra;
			cin >> Letra;
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout << "Letra: " << Letra << ", repeticion: " << i + 1 << endl;
			}
			system("pause");

		}
		break;

		case 'c':
		case 'C':
		{

			cout << "Ingrese el numero: ";
			int Numero;
			cin >> Numero;
			system("cls");

			if (Numero == 0)
			{
				cout << "Metiste 0, pelotudaso" << endl;
				system("pause");
			}
			else
			{

				for (int i = 0; i <= Numero; i++)
				{
					cout << "Secuencia: " << i << endl;
				}

				system("pause");

			}

		}
		break;

		case 'D':
		case 'd':
		{
			cout << "Ingresa el numero a multiplicar: ";
			int Numero;
			cin >> Numero;
			system("cls");

			cout << "Ingresa el multiplicador: ";
			int Multiplicador;
			cin >> Multiplicador;
			system("cls");

			int Resultado = 0;

			for (int i = Multiplicador; i != 0; i--)
			{
				Resultado += Numero;
			}

			cout << "El resultado es: " << Resultado << endl;
			system("pause");

		}
		break;

		case 'e':
		case 'E':
		{

			cout << "Ingresa el numero: ";
			int Numero;
			cin >> Numero;
			system("cls");

			for (int i = 0; i <= Numero; i++)
			{
				if (i % 2 == 0)
				{
					cout << "Numero par: " << i << endl;
				}
			}

			system("pause");
		}
		break;

		case 'f':
		case 'F':
		{
			cout << "Ingresa un numero: ";
			int Numero;
			cin >> Numero;
            Numero = (Numero / 2) + 1;
			system("cls");

			int EmptyToPrint = 0;
			int AstToPrint = 1;

			EmptyToPrint = Numero - AstToPrint;

			for (int i = 0; i < Numero; i++)
			{
				for (int a = 0; a < EmptyToPrint; a++)
				{
					cout << " ";
				}

				for (int b = 0; b < AstToPrint; b++)
				{
					cout << "*";
				}

				EmptyToPrint = EmptyToPrint - 1;
				AstToPrint = AstToPrint + 2;
				cout << endl;
			}

			system("pause");
		}
		break;

		case 'g':
		case 'G':
			cout << "Ingresa un numero: ";
			int Numero;
			cin >> Numero;
			system("cls");
            Numero = (Numero / 2) + 1;

			int EmptyToPrint = 0;
			int AstToPrint = 1;

			EmptyToPrint = Numero - AstToPrint;

			for (int i = 0; i < Numero; i++)
			{
				for (int a = 0; a < EmptyToPrint; a++)
				{
					cout << " ";
				}

				for (int b = 0; b < AstToPrint; b++)
				{
					cout << "*";
				}

				EmptyToPrint = EmptyToPrint - 1;
				AstToPrint = AstToPrint + 2;
				cout << endl;
			}

			EmptyToPrint = EmptyToPrint + 1;
			AstToPrint = AstToPrint - 2;

			for (int i = 0; i < Numero; i++)
			{
				for (int a = 0; a < EmptyToPrint; a++)
				{
					cout << " ";
				}

				for (int b = 0; b < AstToPrint; b++)
				{
					cout << "*";
				}

				EmptyToPrint = EmptyToPrint + 1;
				AstToPrint = AstToPrint - 2;
				cout << endl;
			}

			system("pause");
			break;

		}

	}

	return 0;
}