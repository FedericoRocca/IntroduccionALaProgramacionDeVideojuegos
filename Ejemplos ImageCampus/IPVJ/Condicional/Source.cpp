#include <iostream>

using namespace std;

#include <cstdlib>
#include <string>

int main(void)
{

	//Condicionales

	bool MenuActivo = true;
	char Opcion;

	while (MenuActivo)
	{
		system("cls");
		// Sp1 - Se ingresa numero y se evalua > 18
		cout << "1 - Mayor de edad" << endl;
		// Sp2 - Se ingresa numero y se evalua > 150
		cout << "2 - Altura" << endl;
		// Sp3 - Se ingresa numero y se evalua si el numero es uno, dos o tres
		cout << "3 - Numeros" << endl;
		// Sp4 - Se ingresa un numero y se imprime que el numero ingresado sea menor a 18, mayor a 65 o esté en el rango
		cout << "4 - Rango de edad" << endl;
		// Sp5 - Se evalua cual es el mayor numero de dos ingresados
		cout << "5 - Numero mayor" << endl;
		// Sp6 - Se pregunta si se desea continuar, con opcion s/S o n/N
		cout << "6 - Desea continuar?" << endl;
		// Sp7 - Juego de conversacion
		cout << "7 - Juego de conversacion" << endl;
		cout << "0 - Salir" << endl;
		cout << "Opcion: ";
		cin >> Opcion;
		system("cls");

		char PlayerName[24];
		string FullHistory;
		string PartePerdida;
		int HistoryOption;

		switch (Opcion)
		{
		case '1':
			// Sp1 - Se ingresa numero y se evalua > 18
			cout << "Ingresa tu edad: " << endl;

			unsigned short int Edad;

			cin >> Edad;

			system("cls");

			if (Edad < 18)
			{
				cout << "Sos un puerco menor, asi que no podes entrar..." << endl;
				system("pause");
			}
			else
			{
				cout << "Sos un puerco mayor, asi que entra y puerquea..." << endl;
				system("pause");
			}

			break;

		case '2':
			// Sp2 - Se ingresa numero y se evalua > 150
			cout << "Ingrese la altura en centimetros: ";

			unsigned short int Altura;
			cin >> Altura;

			if (Altura < 150)
			{
				system("cls");
				cout << "You shall not pass!" << endl;
				system("pause");
			}
			else
			{
				system("cls");
				cout << "You shall pass" << endl;
				system("pause");
			}

			break;

		case '3':
			// Sp3 - Se ingresa numero y se evalua si el numero es uno, dos o tres
			cout << "Ingresa un numero: ";
			int Number;
			cin >> Number;
			system("cls");

			switch (Number)
			{
			case 1:
				cout << "UNO" << endl;
				system("pause");
				break;

			case 2:
				cout << "DOS" << endl;
				system("pause");
				break;

			case 3:
				cout << "TRES" << endl;
				system("pause");
				break;

			default:
				cout << "INVALIDO" << endl;
				system("pause");
				break;
			}
			break;

		case '4':
			// Sp4 - Se ingresa un numero y se imprime que el numero ingresado sea menor a 18, mayor a 65 o esté en el rango
			system("cls");

			unsigned short int RangoEdad;

			cout << "Ingrese la edad: ";
			cin >> RangoEdad;

			system("cls");

			if (RangoEdad < 18)
			{
				cout << "Usted es menor de 18 anios" << endl;
				system("pause");
			}
			else if (RangoEdad > 65)
			{
				cout << "Usted es mayor de 65 anios (Bastante oldie)..." << endl;
				system("pause");
			}
			else
			{
				cout << "Su edad esta entre los 18 y 65 anios..." << endl;
				system("pause");
			}

			break;

		case '5':
			// Sp5 - Se evalua cual es el mayor numero de dos ingresados
			system("cls");

			long long int NumberOne, NumberTwo;

			cout << "Ingrese el primer numero:";
			cin >> NumberOne;
			cout << "Ingrese el segundo numero:";
			cin >> NumberTwo;

			system("cls");

			if (NumberOne > NumberTwo)
			{
				cout << "El primer numero ingresado es mayor al segundo." << endl;
			}
			else if (NumberTwo > NumberOne)
			{
				cout << "El segundo numero ingresado es mayor al primero." << endl;
			}
			else
			{
				cout << "Los numeros son iguales." << endl;
			}
			system("pause");

			break;

		case '6':
			// Sp6 - Se pregunta si se desea continuar, con opcion s/S o n/N
			system("cls");

			cout << "Desea continuar? (s/S o n/N)" << endl;
			char Opcion;
			cin >> Opcion;

			system("cls");

			switch (Opcion)
			{
			case 's':
			case 'S':
				cout << "Ingresaste por el SI" << endl;
				system("pause");
				break;

			case 'n':
			case 'N':
				cout << "Ingresaste por el NO" << endl;
				system("pause");
				break;

			default:
				cout << "Opcion ingresada incorrecta..." << endl;
				system("pause");
				break;
			}


			break;

		case '7':
			// Sp7 - Juego de conversacion
			cout << "Ingresa tu nombre, jugador manco:";
			
			cin >> PlayerName;
			system("cls");

			cout << "Bienvenido " << PlayerName << "." << endl;
			
			cout << "Esta es la historia de un..." << endl;
			cout << "1 - Perro" << endl;
			cout << "2 - Gato" << endl;
			cout << "3 - Topo" << endl;

			FullHistory = "Esta es la historia de un";
			cin >> HistoryOption;

			if (HistoryOption == 1)
			{
				FullHistory += " perro";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " gato";
			}
			else
			{
				FullHistory += " topo";
			}

			system("cls");
			cout << "De color..." << endl;

		    cout << "" << endl;
			cout << "1 - Violeta" << endl;
			cout << "2 - Negro" << endl;
			cout << "3 - Marron" << endl;

			cin >> HistoryOption;
			FullHistory += " de color";

			if (HistoryOption == 1)
			{
				FullHistory += " violeta";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " negro";
			}
			else
			{
				FullHistory += " marron";
			}
			system("cls");
			cout << "Que un dia perdio la..." << endl;
			cout << "1 - Cola" << endl;
			cout << "2 - Pata" << endl;
			cout << "3 - Oreja" << endl;

			cin >> HistoryOption;
			FullHistory += " que un dia perdio la";

			if (HistoryOption == 1)
			{
				FullHistory += " cola";
				PartePerdida = " cola";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " pata";
				PartePerdida = " pata";
			}
			else
			{
				FullHistory += " oreja";
				PartePerdida = " oreja";
			}
			system("cls");
			cout << "Porque..." << endl;
			cout << "1 - Corria" << endl;
			cout << "2 - Saltaba" << endl;
			cout << "3 - Olia" << endl;

			cin >> HistoryOption;
			FullHistory += " porque";

			if (HistoryOption == 1)
			{
				FullHistory += " corria";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " saltaba";
			}
			else
			{
				FullHistory += " olia";
			}
			system("cls");
			cout << "En una..." << endl;
			cout << "1 - Fabrica de cuchillos" << endl;
			cout << "2 - Torre abandonada" << endl;
			cout << "3 - Calle" << endl;

			cin >> HistoryOption;
			FullHistory += " en una";

			if (HistoryOption == 1)
			{
				FullHistory += " fabrica de cuchillos.";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " torre abandonada.";
			}
			else
			{
				FullHistory += " calle.";
			}
			system("cls");
			cout << "Un dia iba..." << endl;
			cout << "1 - Caminando" << endl;
			cout << "2 - Bailando" << endl;
			cout << "3 - Patinando" << endl;

			cin >> HistoryOption;
			FullHistory += " Un dia iba";

			if (HistoryOption == 1)
			{
				FullHistory += " caminando";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " patinando";
			}
			else
			{
				FullHistory += " bailando";
			}
			system("cls");
			cout << "Y de pronto..." << endl;
			cout << "1 - Piso" << endl;
			cout << "2 - Vomito" << endl;
			cout << "3 - Olio" << endl;

			cin >> HistoryOption;
			FullHistory += " y de pronto";

			if (HistoryOption == 1)
			{
				FullHistory += " piso";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " vomito";
			}
			else
			{
				FullHistory += " olio";
			}
			system("cls");
			cout << " su " << PartePerdida <<endl;
			FullHistory += " su";
			FullHistory += PartePerdida;
			system("cls");
			cout << "Que estaba..." << endl;
			cout << "1 - Sucia" << endl;
			cout << "2 - Olorosa" << endl;
			cout << "3 - Rota" << endl;

			cin >> HistoryOption;
			FullHistory += " que estaba";

			if (HistoryOption == 1)
			{
				FullHistory += " sucia";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " olorosa";
			}
			else
			{
				FullHistory += " rota";
			}
			system("cls");
			cout << "De tanto que la..." << endl;
			cout << "1 - Pisaron" << endl;
			cout << "2 - Escupieron" << endl;
			cout << "3 - Golpearon" << endl;

			cin >> HistoryOption;
			FullHistory += " de tanto que la";

			if (HistoryOption == 1)
			{
				FullHistory += " pisaron,";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " escupieron,";
			}
			else
			{
				FullHistory += " golpearon,";
			}
			system("cls");
			cout << "Entonces se la..." << endl;
			cout << "1 - Comio" << endl;
			cout << "2 - Pego" << endl;
			cout << "3 - Guardo" << endl;

			cin >> HistoryOption;
			FullHistory += " entonces se la";

			if (HistoryOption == 1)
			{
				FullHistory += " comio";
			}
			else if (HistoryOption == 2)
			{
				FullHistory += " pego";
			}
			else
			{
				FullHistory += " guardo";
			}
			system("cls");
			cout << "Para no volver a perderla." << endl;
			system("pause");
			system("cls");
			cout << "********************" << endl;
			cout << "********FIN*********" << endl;
			cout << "********************" << endl;
			system("pause");
			system("cls");

			cout << "Que bella historia " << PlayerName << ", me hace llorar :,)..." << endl;
			cout << "Nada que envidiarle a Cohelo, Poe, o Elena Walsh..." << endl;
			cout << "Repasemos la historia: " << endl;
			system("pause");
			system("cls");
			cout << FullHistory << endl;
			system("pause");
			system("cls");
			
		break;

		case '0':
			system("cls");
			cout << "Nos vemos!" << endl;
			system("pause");
			return 0;
		break;

		default:
			system("cls");
			cout << "Metiste mal los ganchos maestro, proba de vuelta..." << endl;
			system("pause");
		break;

		}
	}
}