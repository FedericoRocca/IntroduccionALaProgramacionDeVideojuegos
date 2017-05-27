#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void PrintHangedMan(int);
bool SearchCharInArray(char, char*);

int main(void)
{

	cout << "Palabra: ";
	char Palabra[512];
	cin >> Palabra;

	bool Juego = true;
	char Letra;
	char Resultado[512];

	int c = 0;
	while (Palabra[c] != '\0')
	{
		Resultado[c] = '-';
		c++;
	}
	Resultado[c] = '\0';
	int IsWin = c - 1;
	int WinCounter = 0;
	int ErrorCount = 0;
	while (Juego && ErrorCount < 7)
	{
		system("cls");
		PrintHangedMan(ErrorCount);
		cout << "Palabra a adivinar: " << Resultado << endl;
		cout << "Letra: ";
		cin >> Letra;

		if (SearchCharInArray(Letra, Palabra) == true)
		{
			int CCounter = 0;
			while (Palabra[CCounter] != '\0')
			{
				if (Palabra[CCounter] == Letra && Resultado[CCounter] != Letra)
				{
					Resultado[CCounter] = Letra;
					WinCounter++;
				}
				CCounter++;
			}
			
			if (WinCounter > IsWin)
			{
				system("cls");
				cout << "Ganaste!" << endl;
				system("pause");
				return 0;
			}
		}
		else
		{
			ErrorCount++;
		}
		
	}

	system("cls");
	cout << "Perdiste Manco" << endl;
	system("pause");

}

bool SearchCharInArray(char Character, char* Array)
{
	int i = 0;
	while (Array[i] != '\0')
	{
		if (Character == Array[i])
		{
			return true;
		}
		i++;
	}
	return false;
}

void PrintHangedMan(int HMan)
{

	switch (HMan)
	{
	case 0:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		break;
	case 1:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             ''' " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		break;
	case 2:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             '''" << endl;
		cout << "||              | " << endl;
		cout << "||              | " << endl;
		cout << "||              | " << endl;
		cout << "||              | " << endl;
		cout << "||              | " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		break;
	case 3:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             '''" << endl;
		cout << "||              | " << endl;
		cout << "||             /| " << endl;
		cout << "||            / | " << endl;
		cout << "||           /  | " << endl;
		cout << "||              | " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		break;
	case 4:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             '''" << endl;
		cout << "||              | " << endl;
		cout << "||             /|\\ " << endl;
		cout << "||            / | \\" << endl;
		cout << "||           /  |  \\" << endl;
		cout << "||              | " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		cout << "||               " << endl;
		break;
	case 5:
		cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             '''" << endl;
		cout << "||              | " << endl;
		cout << "||             /|\\ " << endl;
		cout << "||            / | \\" << endl;
		cout << "||           /  |  \\" << endl;
		cout << "||              | " << endl;
		cout << "||             /    " << endl;
		cout << "||            /     " << endl;
		cout << "||           /      " << endl;
		cout << "||               " << endl;
		break;
	case 6:cout << "------------------" << endl;
		cout << "||             III" << endl;
		cout << "||            (   )" << endl;
		cout << "||             '''" << endl;
		cout << "||              | " << endl;
		cout << "||             /|\\ " << endl;
		cout << "||            / | \\" << endl;
		cout << "||           /  |  \\" << endl;
		cout << "||              | " << endl;
		cout << "||             / \\   " << endl;
		cout << "||            /   \\ " << endl;
		cout << "||           /     \\ " << endl;
		cout << "||               " << endl;
		break;
	}

}

