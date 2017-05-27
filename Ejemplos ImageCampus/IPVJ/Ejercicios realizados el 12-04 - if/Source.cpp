/**

ejericios relacionales

6)   true
7)   true
8)   false
9)   true
10)  false
11)  false
12)  true
13)  false
14)  error division por 0
15)  true
16)  true
17)  true
18)  false

**/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Personaje
{
private:
	int PosX;
	int PosY;
public:
	void setPosX(int _PosX) { PosX = _PosX; }
	void setPosY(int _PosY) { PosY = _PosY; }
	int  getPosX(void) { return PosX; }
	int  getPosY(void) { return PosY; }

	Personaje(string NumeroPersonaje)
	{

		cout << "Ingrese la posicion X del " << NumeroPersonaje << " personaje: ";
		cin >> PosX;
		system("cls");

		cout << "Ingrese la posicion Y del " << NumeroPersonaje << " personaje: ";
		cin >> PosY;
		system("cls");

	}

};

bool Es_Bisiesto(int);

int main(void)
{

	bool Menu = true;

	while (Menu)
	{

		system("cls");
		cout << "A - Positivo, negativo o cero"  << endl;
		cout << "B - Mayor, menor o igual"  << endl;
		cout << "C - Numero mayor"  << endl;
		cout << "D - Vocal o consonante"  << endl;
		cout << "E - Numeros divisibles"  << endl;
		cout << "F - Par o Impar"  << endl;
		cout << "G - Valor absoluto"  << endl;
		cout << "H - Colision personajes"  << endl;
		cout << "I - Bisiesto"  << endl;
		cout << "J - Numeros y operador" << endl;
		cout << "K - Menu de juego" << endl;
		cout << "0 - Salir"        << endl;
		cout << "Opcion: ";
		char Opcion;
		cin >> Opcion;
		system("cls");

		switch (Opcion)
		{

		case 'a':
		case 'A':

			cout << "Ingresa un numero: ";
			long long int Numero;
			cin >> Numero;
			system("cls");

			if (Numero == 0)
			{
				cout << "El numero es 0." << endl;
			}
			else if (Numero > 0)
			{
				cout << "El numero " << Numero << " es positivo." << endl;
			}
			else
			{
				cout << "El numero " << Numero << " es negativo. " << endl;
			}

			system("pause");

			break;

		case 'B':
		case 'b':

			cout << "Ingrese el primer numero: ";
			long long int Numero1;
			cin >> Numero1;
			cout << "Ingrese el segundo numero: ";
			long long int Numero2;
			cin >> Numero2;
			system("cls");

			if (Numero1 > Numero2)
			{
				cout << "El primer numero ingresado es mayor al segundo (" << Numero1 << " > " << Numero2 << ")." << endl;
			}
			else if (Numero1 < Numero2)
			{
				cout << "El segundo numero ingresado es mayor al primero (" << Numero2 << " > " << Numero1 << ")." << endl;
			}
			else
			{
				cout << "Ambos numeros son iguales (" << Numero1 << " == " << Numero2 << ")." << endl;
			}

			system("pause");

			break;

		case 'c':
		case 'C':
		{
			cout << "Ingrese el numero 1: ";
			long long int Numero;
			cin >> Numero;
			long long int NumeroMayor = Numero;

			for (int i = 0; i < 2; i++)
			{
				cout << "Ingrese el numero " << i + 1 << ": ";
				cin >> Numero;

				if (Numero > NumeroMayor)
				{
					NumeroMayor = Numero;
				}
			}

			cout << "El mayor numero ingresado es el " << NumeroMayor << endl;

			system("pause");

		}
		break;

		case 'd':
		case 'D':

			cout << "Ingrese la letra a evaluar: ";
			char Letra;
			cin >> Letra;
			system("cls");

			switch (Letra)
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				cout << "La letra " << Letra << " es vocal." << endl;
				system("pause");
				break;

			default:
				cout << "La letra " << Letra << " es consonante." << endl;
				system("pause");
				break;

			}

			break;

		case 'e':
		case 'E':

			cout << "Ingrese el primer numero: ";
			long long int PrimerNumero;
			cin >> PrimerNumero;
			system("cls");

			cout << "Ingrese el segundo numero: ";
			long long int SegundoNumero;
			cin >> SegundoNumero;
			system("cls");

			if (SegundoNumero == 0)
			{
				cout << "No se puede dividir por 0 (cero)." << endl;
			}
			else if ((PrimerNumero % SegundoNumero) == 0)
			{
				cout << "El numero " << PrimerNumero << " es divisible por el numero " << SegundoNumero << "." << endl;
			}
			else
			{
				cout << "El numero " << PrimerNumero << " no es divisible por el numero " << SegundoNumero << "." << endl;
			}

			system("pause");
			break;

		case 'f':
		case 'F':
		{
			cout << "Ingrese el numero: ";
			long long int Numero;
			cin >> Numero;
			system("cls");

			if (Numero % 2 == 0)
			{
				cout << "El numero " << Numero << " es par." << endl;
			}
			else
			{
				cout << "El numero " << Numero << " es impar." << endl;
			}

			system("pause");
		}
			break;

		case 'g':
		case 'G':
		{
			cout << "Ingrese el numero: ";
			long long int Numero;
			cin >> Numero;
			system("cls");

			cout << "El valor absoluto del numero " << Numero << " es ";

			if (Numero < 0)
			{
				Numero = Numero * (-1);
			}

			cout << Numero << "." << endl;

			system("pause");

		}
			break;

		case 'h':
		case 'H':
		{
		
			Personaje PrimerPersonaje("primer");
			Personaje SegundoPersonaje("segundo");
			system("cls");

			if ( (PrimerPersonaje.getPosX() == SegundoPersonaje.getPosX() ) && ( PrimerPersonaje.getPosY() == SegundoPersonaje.getPosY() ) )
			{
				cout << "Los personajes colisionan. " << endl;
			}
			else
			{
				cout << "Los personajes NO colisionan. " << endl;
			}

			system("pause");

		}
			break;

		case 'i':
		case 'I':

			cout << "Ingrese el anio: ";
			unsigned long long int Anio;
			cin >> Anio;
			system("cls");

			if (Es_Bisiesto(Anio) == true)
			{
				cout << "El anio " << Anio << " es bisiesto." << endl;
			}
			else
			{
				cout << "El anio " << Anio << " NO es bisiesto." << endl;
			}

			system("pause");

			break;

		case 'j':
		case 'J':
		{
			cout << "Ingrese el primero numero: ";
			long long int PrimerNumero;
			cin >> PrimerNumero;
			system("cls");

			cout << "Ingrese el operador: ";
			char Operador;
			cin >> Operador;
			system("cls");

			cout << "Ingrese el segundo numero: ";
			long long int SegundoNumero;
			cin >> SegundoNumero;
			system("cls");

			switch (Operador)
			{

			case '-':
				cout << "El resultado de la resta es: (" << PrimerNumero << Operador << SegundoNumero << ") = " << PrimerNumero - SegundoNumero << endl;
				break;

			case '+':
				cout << "El resultado de la suma es: (" << PrimerNumero << Operador << SegundoNumero << ") = " << PrimerNumero + SegundoNumero << endl;
				break;

			case '*':
				cout << "El resultado de la multiplicacion es: (" << PrimerNumero << Operador << SegundoNumero << ") = " << PrimerNumero * SegundoNumero << endl;
				break;

			case '/':
				cout << "El resultado de la division es: (" << PrimerNumero << Operador << SegundoNumero << ") = " << PrimerNumero / SegundoNumero << endl;
				break;

			case '%':
				cout << "El resultado del resto de la division es: (" << PrimerNumero << Operador << SegundoNumero << ") = " << PrimerNumero % SegundoNumero << endl;
				break;

			default:
				cout << "No reconosco el operador... Lo pusiste bien?" << endl;
				break;

			}

			system("pause");

		}
			break;

		case 'k':
		case 'K':
		{
			bool Menu = true;

			while (Menu)
			{
				system("cls");
				cout << "1 - Jugar" << endl;
				cout << "2 - Opciones" << endl;
				cout << "3 - Salir" << endl;
				cout << "4 - Volver al menu anterior" << endl;
				cout << "Opcion: ";
				char OpcionMenu;
				cin >> OpcionMenu;
				system("cls");

				switch (OpcionMenu)
				{
				case '1':
					cout << "Inicio un juego re copado, graficos Unreal Engine 4, 120 FPS 4k True HD, PC Master Race..." << endl;
					Menu = false;
					system("pause");
					break;
				case '2':
					cout << "Abro las opciones de mi super juego, que me dejan configurar hasta los bits de memoria..." << endl;
					Menu = false;
					system("pause");
					break;
				case '3':
					cout << "Me rompes el corazon, saliendo de mi super juego asi bien chingon..." << endl;
					Menu = false;
					system("pause");
					break;
				case '4':
						Menu = false;
					break;
				default:
					cout << "Fijate que apretas hermano, estas tocando cualquier cosa..." << endl;
					Menu = false;
					system("pause");
					break;
				}

			}

		}
			break;
		
		case '0':

			Menu = false;
			cout << "Hasta luego!" << endl;
			system("pause");

			break;

		default:

			cout << "Metiste mal los garfios hermano... Proba de nuevo..." << endl;
			system("pause");

			break;
		}

	}

	return 0;
}

// Funciones

bool Es_Bisiesto(int Anio)
{
	if ( (Anio % 4 == 0 && Anio % 100 != 100) || Anio % 400 == 0)
	{
		return true;
	}
	return false;
}