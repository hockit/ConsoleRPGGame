#include "Character.h"
#include <iostream>


Character::Character()
{

}


void Character::displayStats() const
{
	system("CLS");
	std::cout << "Character attributes" << std::endl;
	std::cout << "Level: " << level_ << std::endl;
	std::cout << "HP: " << baseHp_ << std::endl;
	std::cout << "Strenght: " << strenght_ << std::endl;
	std::cout << "Dexterity: " << dexterity_ << std::endl;
	std::cout << "Dungeon: " << dungeon_ << std::endl;
	system("pause");
}