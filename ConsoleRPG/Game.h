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
	std::string fileName_{ "gameData.txt" };
	std::fstream gameFile_;

	void loadGame();
	void saveGame();
};

