#include <iostream>
using namespace std;

int main(void)
{

	bool Menu = true;

	while (Menu)
	{
		system("cls");
		cout << "A - Insercion de numero en indice" << endl;
		cout << "B - Array capicua" << endl;
		cout << "0 - Salir" << endl;
		char Opcion;
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{

			case 'a':
			case 'A':
			{
				int Numbers[10] = { 1,2,3,4,5,6,7,8,9,0 };

				bool DoIngreso = true;
				int ReplaceWith;
				int PosToReplace;

				while (DoIngreso)
				{
					cout << "Array: " << endl;
					for (int i = 0; i < 10; i++)
					{
						cout << Numbers[i] << "-";
					}
					cout << endl;
					cout << "Ingresa la posicion a reemplazar: ";
					cin >> PosToReplace;
					system("cls");

					if (PosToReplace < 1 || PosToReplace > 10)
					{
						cout << "Posicion ingresada incorrecta." << endl;
						system("pause");
						system("cls");
					}
					else
					{
						cout << "Ingresa el nuevo numero: ";
						cin >> ReplaceWith;
						DoIngreso = false;
						cout << endl;
					}
				}

				cout << "Array original  : ";
				for (int i = 0; i < 10; i++)
				{
					cout << Numbers[i] << ",";
				}
				cout << endl;

				Numbers[PosToReplace - 1] = ReplaceWith;

				cout << "Array modificado: ";
				for (int i = 0; i < 10; i++)
				{
					cout << Numbers[i] << ",";
				}
				cout << endl;
				
				system("pause");
			}
				break;

			case 'b':
			case 'B':
			{

				cout << 2 / 2 << endl;
				cout << 5 / 2 << endl;
				system("pause");

			}
				break;
			
			
			default:
			{
				cout << "Metiste mas los garfios papa, proba de vuelta" << endl;
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

		}

	}

	return 0;
}