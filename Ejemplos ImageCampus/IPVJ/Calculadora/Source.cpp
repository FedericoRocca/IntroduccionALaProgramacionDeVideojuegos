#include <iostream>

using namespace std;

#include <cstdlib>

int main(int argc, char* argv[])
{

	int Numero1 = 0, Numero2 = 0;
	char Opcion;
	bool MenuActivo = true;

	while (MenuActivo)
	{
		system("cls");
		cout << "Ingrese:" << endl;
		cout << "1 - Sumar" << endl;
		cout << "2 - Restar" << endl;
		cout << "3 - Multiplicar" << endl;
		cout << "4 - Dividir" << endl;
		cout << "5 - Resto" << endl;
		cout << "6 - Salir" << endl;
		cout << "Opcion: ";
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{
		case '1':
			cout << "Ingrese el primero numero: ";
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> Numero2;
			cout << "El resultado de la suma es: " << Numero1 + Numero2 << endl;
			system("pause");
			break;

		case '2':
			cout << "Ingrese el primero numero: ";
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> Numero2;
			cout << "El resultado de la resta es: " << Numero1 - Numero2 << endl;
			system("pause");
			break;

		case '3':
			cout << "Ingrese el primero numero: ";
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> Numero2;
			cout << "El resultado de la multiplicacion es: " << Numero1 * Numero2 << endl;
			system("pause");
			break;

		case '4':
			cout << "Ingrese el primero numero: ";
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> Numero2;
			if (Numero2 <= 0)
			{
				cout << "No se puede dividir por 0." << endl;
			}
			else
			{
				cout << "El resultado de la division es: " << Numero1 / Numero2 << endl;
				system("pause");
			}
			break;

		case '5':
			cout << "Ingrese el primero numero: ";
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> Numero2;
			if (Numero2 <= 0)
			{
				cout << "No se puede dividir por 0." << endl;
			}
			else
			{
				cout << "El resto de la division es: " << Numero1 % Numero2 << endl;
				system("pause");
			}
			break;

		case '6':
			system("cls");
			cout << "Al toke perrou... Nos vemos..." << endl;
			MenuActivo = false;
			break;

		default:
			system("cls");
			cout << "Metiste mal un dedo macho... trata de nuevo" << endl;
			system("pause");
			break;

		}

	}

	system("pause");

	return 0;

}
