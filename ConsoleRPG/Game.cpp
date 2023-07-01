#include <iostream>
#include "Game.h"

void Game::mainMenu()
{
	system("CLS");
	std::cout << "==== MAIN MENU ====" << std::endl;
	std::cout << "[1] New game" << std::endl;
	std::cout << "[2] Exit" << std::endl;
	std::cout << ">> ";
	std::cin >> choice_;
	makeChoice(choice_);
}

void Game::makeChoice(int choice)
{
	switch (choice)
	{
	case 1:
		break;

	case 2:
		gameStatus_ = false;
		break;

	default:
		std::cout << "Invalid input";
	}
}