#include "Character.h"
#include <iostream>


Character::Character()
{

}


void Character::displayStats() const
{
	system("CLS");
	std::cout << "Character attributes" << std::endl;
	std::cout << "HP: " << baseHp_ << " / " << maxHp_ << std::endl;
	std::cout << "Strenght: " << strenght_ << std::endl;
	std::cout << "Dexterity: " << dexterity_ << std::endl;
	std::cout << "Expirience: " << expirience_ << std::endl;
	system("pause");
}