#include "Game.h"
#include "Character.h"

class Event* event;
class Character character;

void Game::mainMenu()
{
	system("CLS");
	std::cout << "==== MAIN MENU ====" << std::endl;
	std::cout << "[1] Character sheet" << std::endl;
	std::cout << "[2] Dungeon" << std::endl;
	std::cout << "[3] Save character" << std::endl;
	std::cout << "[4] Load character" << std::endl;
	std::cout << "[5] Exit" << std::endl;
	std::cout << ">> ";
	std::cin >> choice_;

	switch (choice_)
	{
	case 1:
		character.displayStats();
		break;
	case 2:
		event->Fight(character);
		break;
	case 3:
		saveGame();
		break;
	case 4:
		loadGame();
		break;
	case 5:
		gameStatus_ = false;
		break;
	default:
		std::cout << "Invalid input" << std::endl;
		break;
	}
}

void Game::saveGame()
{
	gameFile_.open(fileName_, std::ios::out);

	if (gameFile_.is_open())
	{
		gameFile_ << character.getBaseHp() << std::endl
				<< character.getStrenght() << std::endl
				<< character.getDexterity() << std::endl
				<< character.getExpirience() << std::endl;
	}

	gameFile_.close();

	std::cout << "Game saved." << std::endl;
}

void Game::loadGame()
{	
	gameFile_.open(fileName_, std::ios::in);
	std::string line;
	int lineCount{ 1 };

	if (gameFile_.is_open())
	{
		while (std::getline(gameFile_, line))
		{
			switch (lineCount)
			{
			case 1: character.loadHp(atoi(line.c_str()));
			case 2: character.loadStrenght(atoi(line.c_str()));
			case 3: character.loadDexterity(atoi(line.c_str()));
			case 4: character.loadExpirience(atoi(line.c_str()));
				break;
			}
			++lineCount;
		}
	}
	
	gameFile_.close();
}

