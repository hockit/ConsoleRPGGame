#pragma once
class Game
{
public:

	void mainMenu();
	void makeChoice(int choice);

	bool getGameStatus() const { return gameStatus_; }

private:

	bool gameStatus_{ true };
	int choice_{ 0 };
};

