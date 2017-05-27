#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

	bool Menu = true;

	while (Menu)
	{
		system("cls");
		cout << "A - Numeros diversos" << endl;
		cout << "B - Numeros diversos inverso" << endl;
		cout << "C - Ingresar los valores de cada elemento" << endl;
		cout << "D - Promedio de floats" << endl;
		cout << "E - 50 valores random" << endl;
		cout << "F - Indices pares" << endl;
		cout << "G - Indices impares" << endl;
		cout << "H - Elementos pares luego impares" << endl;
		cout << "I - Suma de floats" << endl;
		cout << "J - Busqueda de int" << endl;
		cout << "K - Repeticion de int" << endl;
		cout << "L - Menor y mayor elemento" << endl;
		cout << "0 - Salir" << endl;
		cout << "Opcion: ";
		char Opcion;
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{

			default:
			{
				cout << "Metiste mal los garfios papa, proba de nuevo" << endl;
				system("pause");
			}
				break;

			case '0':
			{
				Menu = false;
				cout << "Nos vemos!" << endl;
				system("pause");
			}
				break;

			case 'a':
			case 'A':
			{

				int Numbers[5] = { 2, 4, 6, 8, 10 };

				for (int i = 0; i < 5; i++)
				{

					cout << "Numero " << Numbers[i] << " en posicion " << i + 1 << endl;

				}

				system("pause");

			}
				break;

			case 'b':
			case 'B':
			{

				int Numbers[5] = { 2, 4, 6, 8, 10 };

				for (int i = 5; i > 0; i--)
				{

					cout << "Numero " << Numbers[i - 1] << " en posicion " << i << endl;

				}

				system("pause");

			}
			break;

			case 'c':
			case 'C':
			{

				int Number[5];

				for (int i = 0; i < 5; i++)
				{
					cout << "Ingresa el numero en la posicion " << i + 1 << ": ";
					cin >> Number[i];
				}

				system("cls");
				cout << "Ingresaste: " << endl;

				for (int i = 0; i < 5; i++)
				{
					cout << "El numero " << Number[i] << " en la posicion " << i + 1 << endl;
				}

				system("pause");

			}
				break;

			case 'd':
			case 'D':
			{

				float Numbers[5] = { 2.5, 3.4, 2.5, 3.3, 10.2 };
				float Total = 0;

				cout << "Numeros: ";

				for (int i = 0; i < 5; i++)
				{
					cout << Numbers[i] << ", ";
					Total += Numbers[i];
				}
				cout << endl;

				cout << "Promedio: " << Total / 5 << endl;

				system("pause");

			}
				break;

			case 'e':
			case 'E':
			{

				srand(time(0));
				int RandomNumbers[50];

				for (int i = 0; i < 50; i++)
				{
					RandomNumbers[i] = rand();
					cout << "Numero random en posicion " << i + 1 << ": " << RandomNumbers[i] << endl;
				}

				system("pause");

			}
				break;

			case 'f':
			case 'F':
			{

				int Numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };

				for (int i = 0; i < 10; i++)
				{
					if (i % 2 == 0)
					{
						cout << "Numero en la posicion " << i << ": " << Numbers[i] << endl;
					}
				}

				system("pause");

			}
				break;

			case 'g':
			case 'G':
			{

				int Numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };

				for (int i = 0; i < 10; i++)
				{
					if (i % 2 != 0)
					{
						cout << "Numero en la posicion " << i << ": " << Numbers[i] << endl;
					}
				}

				system("pause");

			}
			break;

			case 'h':
			case 'H':
			{

				int Numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };

				for (int i = 0; i < 10; i++)
				{
					if (i % 2 != 0)
					{
						cout << "Elemento par: " << Numbers[i] << endl;
					}
				}
				
				for (int i = 0; i < 10; i++)
				{
					if (i % 2 == 0)
					{
						cout << "Elemento impar : " << Numbers[i] << endl;
					}
				}

				system("pause");

			}
			break;

			case 'i':
			case 'I':
			{

				float Numbers[10] = { 2.5, 3.4, 2.5, 3.3, 10.2, 3.5, 4.4, 6.5, 3.3, 15.2 };
				float Total = 0;

				cout << "Numeros del array: " << endl;

				for (int i = 0; i < 10; i++)
				{
					cout << Numbers[i] << endl;
					Total += Numbers[i];
				}
				cout << endl;

				cout << "Total: " << Total << endl;

				system("pause");

			}
				break;

			case 'j':
			case 'J':
			{

				cout << "Ingresa el numero a buscar: ";
				int ToSearch;
				cin >> ToSearch;

				system("cls");

				int WhereSearch[10] = {1,2,3,4,5,6,7,8,9,0};

				bool DoSearch = true;
				int PosCounter = 0;

				while (DoSearch)
				{
					if (ToSearch == WhereSearch[PosCounter])
					{
						DoSearch = false;
						cout << "El numero " << ToSearch << " fue encontrado en la posicion " << PosCounter << endl;
					}

					PosCounter++;

					if (PosCounter > 9)
					{
						DoSearch = false;
						cout << "El numero " << ToSearch << " no fue encontrado en el array" << endl;
					}

				}

				system("pause");

			}
				break;

			case 'k':
			case 'K':
			{

				cout << "Ingresa el numero a contar ";
				int ToCount;
				cin >> ToCount;

				int ToSearch[10] = {1,1,2,3,3,4,5,5,6,7};

				system("cls");
				int FoundCount = 0;

				for (int i = 0; i < 10; i++)
				{
					if (ToCount == ToSearch[i])
					{
						FoundCount++;
					}
				}

				if (FoundCount == 0)
				{
					cout << "No se encontro el numero " << ToCount << " en el array" << endl;
				}
				else cout << "Se encontro el numero " << ToCount << ", " << FoundCount << " veces." << endl;

				system("pause");

			}
				break;

			case 'l':
			case 'L':
			{

				float Elements[10] = { 0.1,9.3,8.5,9.1,7.3,4.6,4.7,5.4,2.4,13.13 };

				float Mayor;
				float Menor;

				for (int i = 0; i < 10; i++)
				{
					if (i == 0)
					{
						Mayor = Elements[i];
						Menor = Elements[i];
					}

					if (Elements[i] > Mayor)
					{
						Mayor = Elements[i];
					}

					if (Elements[i] < Menor)
					{
						Menor = Elements[i];
					}

				}

				system("cls");

				cout << "Numero mayor: " << Mayor << endl;
				cout << "Numero menor: " << Menor << endl;

				system("pause");

			}
				break;

		}

	}


	return 0;
}