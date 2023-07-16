#include "Event.h"
#include <iostream>


void Event::Fight(Character& character/*, Enemy& enemy*/)
{

}

void Event::Master(Character& character)
{
	std::cout << "Welcome apprentice." << std::endl;
	std::cout << "[1] Add health points (+10)" << std::endl;
	std::cout << "[2] Add strenght (+2)" << std::endl;
	std::cout << "[3] Add dexterity (+2)" << std::endl;
	std::cout << " >> ";
	std::cin >> choice_;

	do
	{
		switch (choice_)
		{
		case 1: character.setHpMax(10);
			std::cout << "You upgrade health points." << std::endl;
			break;
		case 2: character.setStrenght(2);
			std::cout << "You upgrade strenght." << std::endl;
			break;
		case 3: character.setDexterity(2);
			std::cout << "You upgrade dexterity." << std::endl;
			break;
		default:
			std::cout << "Ivalid input" << std::endl;
			break;
		}
	} while (choice_ < 1 || choice_ > 3);
}

