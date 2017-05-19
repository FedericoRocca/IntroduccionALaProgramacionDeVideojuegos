#include <iostream>
#include <algorithm>
using namespace std;

/** -------- Devuelve el Maximo Comun Divisor entre dos numeros -------- **/
long int MCD(long int, long int);

/** -------- Devuelve el Minimo Comun Multiplo entre dos numeros -------- **/
long int MCM(long int, long int);

int main(void)
{
	cout << "Ingrese el primer numero: ";
	long int PrimerNumero;
	cin >> PrimerNumero;
	system("cls");

	cout << "Ingrese el segundo numero: ";
	long int SegundoNumero;
	cin >> SegundoNumero;
	system("cls");
	
	cout << "El MCD entre " << PrimerNumero << " y " << SegundoNumero << " es: " << MCD(PrimerNumero, SegundoNumero) << endl;
	cout << "El MCM entre " << PrimerNumero << " y " << SegundoNumero << " es: " << MCM(PrimerNumero, SegundoNumero) << endl;

	system("pause");

	return 0;

}

/** -------- Devuelve el Maximo Comun Divisor entre dos numeros -------- **/
long int MCD(long int FirstNumber, long int SecondNumber) {
	long int MCD = 0;
	long int a = std::max(FirstNumber, SecondNumber);
	long int b = std::min(FirstNumber, SecondNumber);
	do {
		MCD = b;
		b = a%b;
		a = MCD;
	} while (b != 0);
	return MCD;
}

/** -------- Devuelve el Minimo Comun Multiplo entre dos numeros -------- **/
long int MCM(long int FirstNumber, long int SecondNumber) {
	long int MCM = 0;
	long int a = std::max(FirstNumber, SecondNumber);
	long int b = std::min(FirstNumber, SecondNumber);
	MCM = (a / MCD(a, b))*b;
	return MCM;
}
