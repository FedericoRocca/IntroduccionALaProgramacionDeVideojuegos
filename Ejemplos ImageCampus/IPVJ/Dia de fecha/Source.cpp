#include <iostream>
#include <string>

using namespace std;

string GetDay(int, int, int);
bool Es_Bisiesto(int);
bool Validar_Fecha(int, int, int);


int main(void)
{

	cout << "Ingresa el dia: ";
	int Day;
	cin >> Day;

	cout << "Ingresa el Mes: ";
	int Month;
	cin >> Month;

	cout << "Ingresa el Anio: ";
	int Year;
	cin >> Year;

	if (Validar_Fecha(Day, Month, Year) == true)
	{
		cout << "El dia de la fecha " << Day << "/" << Month << "/" << Year << " fue: " << GetDay(Day, Month, Year) << endl;
	}
	else cout << "Fecha invalida" << endl;
	

	system("pause");

	return 0;
}

string GetDay(int Day, int Month, int Year)
{

	long long int Result;

	unsigned short int K = Year % 100;
	unsigned short int J = Year / 100;


	Result = (Day + (((Month + 1) * 26) / 10) + K + (K / 4) + (J / 4) + 5 * J) % 7;

	switch (Result)
	{
	case 0:
		return "Sabado";
		break;

	case 1:
		return "Domingo";
		break;

	case 2:
		return "Lunes";
		break;

	case 3:
		return "Martes";
		break;

	case 4:
		return "Miercoles";
		break;

	case 5:
		return "Jueves";
		break;

	case 6:
		return "Viernes";
		break;
	}

	return "Day Not Recognized";
}

/** -------- Devuelve true en caso de que un anio sea bisiesto -------- **/
bool Es_Bisiesto(int Anio)
{
	if ((Anio % 4 == 0 && Anio % 100 != 100) || Anio % 400 == 0)
	{
		return true;
	}
	return false;
}

/** -------- Valida la fecha evaluando dia mes y año -------- **/
bool Validar_Fecha(int Dia, int Mes, int Anio)
{
	bool Bisiesto = false;
	Bisiesto = Es_Bisiesto(Anio);

	//comprobamos que los datos ingresados esten en un rango valido
	if (Dia > 0 && Dia < 32 && Mes > 0 && Mes < 13 && Anio > 0) {
		if (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || Mes == 12)
		{
			return true;
		}
		else
		{
			if (Mes == 2 && Dia < 30 && Bisiesto)
				return true;
			else if (Mes == 2 && Dia < 29 && !Bisiesto)
				return true;
			else if (Mes != 2 && Dia < 31)
				return true;
			else
				return false;
		}
	}
	else
		return false;
}