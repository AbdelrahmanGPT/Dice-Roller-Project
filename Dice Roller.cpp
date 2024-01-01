#include<iostream>
#include<cstdlib>

using namespace std;

short RandomNumber(short From, short To)
{
	short RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

void DiceRoller()
{
	cout << "DICE 1 FACE = " << RandomNumber(1, 6) << "\n";
	cout << "DICE 2 FACE = " << RandomNumber(1, 6) << "\n";
}

bool DoYouWantToPlayAgain()
{
	string Choice;
	do
	{
		cout << "DO YOU WANT TO PLAY AGAIN[Y/N]\n";
		cin >> Choice;
	} while (Choice != "Y" && Choice != "y" && Choice != "N" && Choice != "n");

	if (Choice == "Y" || Choice == "y")
	{
		system("cls");
		return 1;
	}

	else
	{
		cout << "GOOD BYE :)\n";
		return 0;
	}
}

void StartDiceRoller()
{
	cout << "WELCOME TO DICE ROLLER\n";

	do
	{
		cout << "-----------------------------------\n";
		DiceRoller();
		cout << "-----------------------------------\n";

	} while (DoYouWantToPlayAgain());
}

int main()
{
	srand((unsigned)time(NULL));

	StartDiceRoller();

	return 0;
}