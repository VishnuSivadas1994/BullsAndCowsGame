#include <iostream>
#include <string>
using namespace std;
void PrintIntro();	//Prints the introduction
void PlayGame(); //Game Logic
string GetGuess();	//Gets the Guess from the user
bool AskToPlayAgain();
int main()	//Entry point for the application
{
	bool bPlayAgain = true;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while(bPlayAgain);

	return 0;
}
void PlayGame()
{
	string Guess = "";
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		Guess = GetGuess();
		cout << "You entered::" << Guess << endl;
	}
}
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows Game!" << endl;
	cout << "Guess the " << WORD_LENGTH << " lettered word\n";
	return;
}

string GetGuess()
{
	string Guess = "";
	//cin >> Guess;
	cout << "Enter Your Guess::";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "\nPlay Again?(y/n):";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
