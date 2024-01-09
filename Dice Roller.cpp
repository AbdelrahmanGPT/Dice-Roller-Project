#include<iostream>
#include<cstdlib>
#include "ABODAstd.h"

using namespace std;

void DiceRoller()
{
	cout << "DICE 1 FACE = " << RandomNumber(1, 6) << "\n";
	cout << "DICE 2 FACE = " << RandomNumber(1, 6) << "\n";
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