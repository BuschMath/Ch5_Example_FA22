#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void WelcomeMessage();
int Ini();
int UserGuess();
void Evaluation(int randNum, int guess);

int main()
{
	WelcomeMessage();
	int randNum = Ini();
	int guess = UserGuess();

	Evaluation(randNum, guess);

	return 0;
}

void WelcomeMessage()
{
	cout << "Welcome to the number guessing program.\n";
	cout << "Please enter your guess integer between 1 and 10.\n";
}

int Ini()
{
	srand(time(NULL));

	return rand() % 10 + 1;
}

int UserGuess()
{
	cout << "What is your guess: ";
	int guess;
	cin >> guess;
	cout << endl;

	return guess;
}

void Evaluation(int randNum, int guess)
{
	if (randNum == guess)
	{
		cout << "You are correct!\n";
		return;
	}
	else
	{
		cout << "You are incorrect. :-(\n";
		cout << "Guess again: ";
		guess = UserGuess();
		if (randNum == guess)
		{
			cout << "You are correct!\n";
			return;
		}
		else
		{
			cout << "You are incorrect. :-(\n";
			cout << "Last guess: ";
			guess = UserGuess();
			if (randNum == guess)
				cout << "You are correct!\n";
			else
				cout << "You are incorrect. :-(\n";
		}
	}
}
