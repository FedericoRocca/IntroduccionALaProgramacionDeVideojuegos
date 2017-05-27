#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{

	bool IsMenuActivo = true;

	while (IsMenuActivo)
	{
		system("cls");
		cout << "Menu de juegos" << endl;
		// A - Piedra, papel o tijera
		cout << "A - Piedra papel o tijera" << endl;
		// B - Dados, mayor numero gana
		cout << "B - Dados" << endl;
		// C - Dados, dos jugadores, 4 dados
		cout << "C - Dados, dos jugadores" << endl;
		cout << "0 - Salir" << endl;
			cout << "Ingresar opcion: ";
		char Opcion;
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{

		case 'a':
		case 'A':
		{
			cout << "Elegir: " << endl;
			cout << "1 - Piedra" << endl;
			cout << "2 - Papel" << endl;
			cout << "3 - Tijera" << endl;
			int EleccionUser;
			cin >> EleccionUser;

			srand(time(0));

			const int Piedra = 1;
			const int Papel = 2;
			const int Tijera = 3;

			const int EleccionCPU = rand() % 3 + 1;

			system("cls");

			switch (EleccionUser)
			{
			case Piedra:
				if (EleccionCPU == Papel)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, perdiste... MANCO" << endl;
				}
				else if (EleccionCPU == EleccionUser)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, empataron... MANCO" << endl;
				}
				else
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, ganaste... CPU MANCA" << endl;
				}
				break;

			case Papel:
				if (EleccionCPU == Papel)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, empataron... MANCO" << endl;
				}
				else if (EleccionCPU == EleccionUser)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, ganaste... CPU MANCA" << endl;
				}
				else
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, ganaste... CPU MANCA" << endl;
				}
				break;

			case Tijera:
				if (EleccionCPU == Papel)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, ganaste... CPU MANCA" << endl;
				}
				else if (EleccionCPU == EleccionUser)
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, empataron... MANCO" << endl;
				}
				else
				{
					cout << "Vos elegiste: ";
					switch (EleccionUser)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "La CPU eligio: ";
					switch (EleccionCPU)
					{
					case Piedra:
						cout << "Piedra" << endl;
						break;
					case Papel:
						cout << "Papel" << endl;
						break;
					case Tijera:
						cout << "Tijera" << endl;
						break;
					}
					cout << "O sea, perdiste...MANCO" << endl;
				}
				break;
			}

			system("pause");

		}
		break;

		case 'b':
		case 'B':
			unsigned short int DadoCPU;
			srand(time(0));
			DadoCPU = rand() % 6 + 1;

			cout << "Presione enter para tirar los dados..." << endl;
			cin.ignore();
			cin.get();

			unsigned short int DadoJugador;
			

			DadoJugador = rand() % 6 + 1;
			system("cls");
			cout << "Tirando dados..." << endl;
			system("timeout /NOBREAK 1 >nul");

			system("cls");

			cout << "Al jugador le salio el dado " << DadoJugador << endl;
			cout << "A la cpu le salio el dado " << DadoCPU << endl;

			if (DadoCPU == DadoJugador)
			{
				cout << "Por ende empataron..." << endl;
			}
			else if (DadoCPU < DadoJugador)
			{
				cout << "Por ende el jugador gano..." << endl;
			}
			else
			{
				cout << "Por ende gano la CPU" << endl;
			}

			system("pause");

				break;

		case 'c':
		case 'C':
		{
			unsigned short int Dado1Jugador1;
			unsigned short int Dado2Jugador1;
			unsigned short int Dado1Jugador2;
			unsigned short int Dado2Jugador2;
			
			srand(time(0));

			cout << "Jugador 1, tira los dados aprentando enter..." << endl;
			system("pause 1 >nul");
			Dado1Jugador1 = rand() % 5 + 1;
			cout << "Tirando dado 1..." << endl;
			system("timeout /NOBREAK 1 >nul");
			cout << "Tirando dado 2..." << endl;
			system("timeout /NOBREAK 1 >nul");
			Dado2Jugador1 = rand() % 5 + 1;
			system("cls");

			cout << "Jugador 2, tira los dados aprentando enter..." << endl;
			system("pause 1 >nul");
			Dado1Jugador2 = rand() % 5 + 1;
			cout << "Tirando dado 1..." << endl;
			system("timeout /NOBREAK 1 >nul");
			cout << "Tirando dado 2..." << endl;
			system("timeout /NOBREAK 1 >nul");
			Dado2Jugador2 = rand() % 5 + 1;
			system("cls");

			if ((Dado1Jugador1 + Dado2Jugador1) < (Dado1Jugador2 + Dado2Jugador2))
			{
				cout << "Gano el jugador dos, sumando " << Dado1Jugador2 + Dado2Jugador2 << " con los dados " << Dado1Jugador2 << " y " << Dado2Jugador2;
				cout << ", mientras que el jugador 1 sumo " << Dado1Jugador1 + Dado2Jugador1 << " con los dados " << Dado1Jugador1 << " y " << Dado2Jugador1 << endl;
			}
			else if ((Dado1Jugador1 + Dado2Jugador1) > (Dado1Jugador2 + Dado2Jugador2))
			{
				cout << "Gano el jugador uno, sumando " << Dado1Jugador1 + Dado2Jugador1 << " con los dados " << Dado1Jugador1 << " y " << Dado2Jugador1;
				cout << ", mientras que el jugador 1 sumo " << Dado1Jugador2 + Dado2Jugador2 << " con los dados " << Dado1Jugador2 << " y " << Dado2Jugador2 << endl;
			}
			else
			{
				cout << "Empataron, sacando los dados " << Dado1Jugador1 << " y " << Dado2Jugador1 << endl;
			}

			system("pause");


		}
			break;

		case '0':
			cout << "Nos vemos!" << endl;
			IsMenuActivo = false;
			break;

		default:
			cout << "Ingresaste mal la opcion... Proba de nuevo..." << endl;
			system("pause");
			break;

		}
		
	}

	system("pause");
	return 0;
}