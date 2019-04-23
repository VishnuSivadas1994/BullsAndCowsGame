#include <iostream>
#include <string>

void PrintIntro();	//Prints the introduction
void PlayGame(); //Game Logic
std::string GetGuess();	//Gets the Guess from the user
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
	std::string Guess = "";
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		Guess = GetGuess();
		std::cout << "You entered::" << Guess << std::endl;
	}
}
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows Game!" << std::endl;
	std::cout << "Guess the " << WORD_LENGTH << " lettered word\n";
	return;
}

std::string GetGuess()
{
	std::string Guess = "";
	//std::cin >> Guess;
	std::cout << "Enter Your Guess::";
	getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "\nPlay Again?(y/n):";
	std::string Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
