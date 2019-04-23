#pragma once
#include<string>
class FBullCowGame
{
public:
	void Reset(); //TODO reset data &
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);



private:
	int MyCurrentTry;
	int MyMaxTries;
	//bool IsIsogram(string);
};

