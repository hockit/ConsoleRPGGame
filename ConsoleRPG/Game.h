#pragma once
#include "Event.h"
class Game
{
public:

	void mainMenu();
	void gameMenu();
	void mainChoice(int choice);
	void gameChoice(int choice);

	bool getGameStatus() const { return gameStatus_; }

private:

	bool gameStatus_{ true };
	int choice_{ 0 };
};

