#include <iostream>
#include "Game.h"

void Game::mainMenu()
{
	system("CLS");
	std::cout << "==== MAIN MENU ====" << std::endl;
	std::cout << "[1] New game" << std::endl;
	std::cout << "[2] Load game" << std::endl;
	std::cout << "[3] Exit" << std::endl;
	std::cout << " >> ";
	std::cin >> choice_;
	mainChoice(choice_);
}

void Game::mainChoice(int choice)
{
	switch (choice)
	{
	case 1:
		//Character::createCharacter();
		//gameMenu();
		break;

	case 2:
		//Character::loadCharacter();
		break;
	case 3:
		gameStatus_ = false;
		break;

	default:
		std::cout << "Invalid input";
	}
}

void Game::gameMenu()
{
	system("CLS");
	std::cout << "==== MAIN MENU ====" << std::endl;
	std::cout << "[1] Character sheet" << std::endl;
	std::cout << "[2] Master" << std::endl;
	std::cout << "[3] Dungeon" << std::endl;
	std::cout << "[4] Save character" << std::endl;
	std::cout << "[5] Load character" << std::endl;
	std::cout << "[6] Exit" << std::endl;
	std::cout << " >> ";
	std::cin >> choice_;
	gameChoice(choice_);
}

void Game::gameChoice(int choice)
{
	switch (choice)
	{
	case 1:
		//printStat();
		break;
	case 2:
		//updateStats();
		break;
	case 3:
		//goDungeon();
		break;
	case 4:
		//saveCharacter():
		break;
	case 5:
		//loadCharacter();
	case 6:
		//saveCharacter();
		gameStatus_ = false;
	default:
		std::cout << "Invalid input" << std::endl;
		break;
	}
}