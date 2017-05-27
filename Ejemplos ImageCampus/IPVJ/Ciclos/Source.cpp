#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

	bool MenuPpal = true;
	char OpcionMenu;

	while (MenuPpal)
	{
		system("cls");
		cout << "A - 3 holas" << endl;
		cout << "B - Hola con ingreso" << endl;
		cout << "C - Contador" << endl;
		cout << "D - Cuenta regresiva" << endl;
		cout << "E - Desea salir?" << endl;
		cout << "F - Repetir letra" << endl;
		cout << "G - Numeros entre numeros" << endl;
		cout << "H - Sumador" << endl;
		cout << "I - Blackjack" << endl;
		cout << "J - Ruleta" << endl;
		cout << "0 - Salir" << endl;
		cout << "Opcion: ";
		cin >> OpcionMenu;
		system("cls");

		switch (OpcionMenu)
		{
		case 'a':
		case 'A':
		{
			unsigned short int Contador = 0;

			while (Contador < 3)
			{
				cout << "Hola numero " << Contador + 1 << endl;
				Contador++;
			}

			system("pause");

		}
		break;

		case 'b':
		case 'B':
		{
			cout << "Ingresa la cantidad de veces que queres ser saludado: ";
			int CantidadVeces;
			cin >> CantidadVeces;

			int Contador = 0;
			system("cls");

			while (Contador < CantidadVeces)
			{
				cout << "Hola numero " << Contador + 1 << endl;
				Contador++;
			}

			system("pause");

		}
		break;

		case 'c':
		case 'C':
		{
			cout << "Ingresa un numero copado: ";
			int Ingreso;
			cin >> Ingreso;

			system("cls");
			int Contador = 0;

			while (Contador < Ingreso)
			{
				cout << "Vuelta numero " << Contador + 1 << endl;
				Contador++;
			}

			system("pause");
		}
			break;

		case 'd':
		case 'D':
		{
			
			cout << "Ingresa un numero copado: ";
			int Ingreso;
			cin >> Ingreso;
			system("cls");

			int Contador = Ingreso;

			while (Contador >= 0)
			{
				cout << "Vuelta numero: " << Contador << endl;
				Contador--;
			}

			system("pause");

		}
			break;

		case 'e':
		case 'E':
		{
			bool Menu = true;
			char Opcion;

			while (Menu == true)
			{
				cout << "Desea salir?" << endl;
				cout << "s/S Si" << endl;
				cin >> Opcion;
				system("cls");

				if (Opcion == 's' || Opcion == 'S')
				{
					Menu = false;
					cout << "Goodbye biatch" << endl;
					system("pause");
				}

			}

		}
			break;

		case 'f':
		case 'F':
		{
			cout << "Ingresa la letra a repetir: "; 
			char Letra;
			cin >> Letra;
			system("cls");

			cout << "Ingresa la cantidad de veces a repetir: ";
			int Cantidad;
			cin >> Cantidad;
			system("cls");

			if (Cantidad != 0)
			{
				
				int Contador = 0;

				while (Contador < Cantidad)
				{

					cout << "Cantidad de veces repetidas la letra " << Letra << ": " << Contador + 1 << endl;
					Contador++;

				}

				system("pause");
			}
			else
			{
				cout << "0 veces? Sos medio pelotudo? Tomatelas..." << endl;
				system("cls");
			}

		}
			break;

		case 'g':
		case 'G':
		{
			
			cout << "Ingrese el primer numero: ";
			int PrimerNumero;
			cin >> PrimerNumero;
			system("cls");

			cout << "Ingrese el segundo numero: ";
			int SegundoNumero;
			cin >> SegundoNumero;
			system("cls");

			if (PrimerNumero == SegundoNumero)
			{
				cout << "Numero iguales ganso..." << endl;
				cout << "Deja de meter giladas..." << endl;
				system("pause");
			}
			else if (PrimerNumero > SegundoNumero)
			{

				while (SegundoNumero <= PrimerNumero)
				{
					cout << "Numeros: " << SegundoNumero << endl;
					SegundoNumero++;
				}

				system("pause");

			}

		}
			break;

		case 'h':
		case 'H':
		{
			int Numero;
			bool WhileActive = true;
			int Totalizador = 0;

			while (WhileActive)
			{
				cout << "Ingrese el numero: ";
				cin >> Numero;
				system("cls");

				Totalizador += Numero;

				if (Numero == 0)
				{
					WhileActive = false;
				}

			}

			system("cls");

			cout << "Total ingresado: " << Totalizador << endl;
			system("pause");

		}
			break;

		case 'i':
		case 'I':
		{
			srand(time(0));

			int Total = rand() % 13 + 1;

			bool Jugar = true;

			while (Jugar == true)
			{
				cout << "Jugar? (s/S): " << endl;
				char Eleccion;
				cin >> Eleccion;
				system("cls");

				int PuntosMesa = 0;

				if (Eleccion == 's' || Eleccion == 'S')
				{
					bool Partida = true;

					while (Partida == true)
					{
						cout << "Tenes " << Total << " puntos." << endl;
						cout << "Queres otra carta?: ";
						char MasCarta;
						cin >> MasCarta;

						if (MasCarta == 'n' || MasCarta == 'N')
						{
							Partida = false;
							
                            PuntosMesa = rand() % 5 + 1;
                            PuntosMesa += 16;
							
							system("cls");
							if (PuntosMesa >= Total)
							{
								cout << "Gano la mesa con " << PuntosMesa << " puntos." << endl;
								cout << "Vos tenes " << Total << " puntos." << endl;
							}
							else
							{
								cout << "Ganaste con " << Total << " puntos." << endl;
								cout << "La mesa tiene " << PuntosMesa << " puntos." << endl;
							}
							
							Total = rand() % 13 + 1;
							PuntosMesa = rand() % 13 + 1;
							system("pause");

						}

						Total += rand() % 13 + 1;

						if (Total > 21)
						{
							system("cls");
							cout << "Lola papu, te pasaste con " << Total << " puntos." << endl;
							system("pause");
							Total = rand() % 13 + 1;
							PuntosMesa = rand() % 13 + 1;
							Partida = false;
						}

						system("cls");

					}

				}
				else Jugar = false;

			}

		}
			break;

		case '0':
			cout << "Nos vemos!" << endl;
			MenuPpal = false;
			system("pause");
			break;

		default:
			cout << "Metiste cualquier cosa chango... Proba de nuevo..." << endl;
			system("pause");
			break;
		}

	}

	return 0;
}