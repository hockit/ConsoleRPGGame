#pragma once
#include "Event.h"
class Game
{
public:

	void mainMenu();

	bool getGameStatus() const { return gameStatus_; }

private:

	bool gameStatus_{ true };
	int choice_{ 0 };
};

