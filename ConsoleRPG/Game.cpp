#include <iostream>
#include "Game.h"
#include "Character.h"
#include "Enemy.h"

class Event* event;
class Character character;
class Enemy enemy;

void Game::mainMenu()
{
	system("CLS");
	std::cout << "==== MAIN MENU ====" << std::endl;
	std::cout << "[1] Character sheet" << std::endl;
	std::cout << "[2] Master" << std::endl;
	std::cout << "[3] Dungeon" << std::endl;
	std::cout << "[4] Save character" << std::endl;
	std::cout << "[5] Load character" << std::endl;
	std::cout << "[6] Exit" << std::endl;
	std::cout << ">> ";
	std::cin >> choice_;

	switch (choice_)
	{
	case 1:
		character.displayStats();
		break;
	case 2:
		event->updateStats(character);
		break;
	case 3:
		event->Fight(character, enemy);
		break;
	case 4:
		//saveCharacter():
		break;
	case 5:
		//loadCharacter();
		break;
	case 6:
		//saveCharacter();
		gameStatus_ = false;
		break;
	default:
		std::cout << "Invalid input" << std::endl;
		break;
	}
}

