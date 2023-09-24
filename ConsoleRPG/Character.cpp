#include "Character.h"
#include <iostream>

Character::Character()
{}

void Character::displayStats() const
{
	system("CLS");
	std::cout << "Character attributes" << std::endl;
	std::cout << "Strenght " << getStrenght() << std::endl;
	std::cout << "Dexterity " << getDexterity() << std::endl;
	std::cout << "Mana " << getCurrentMana() << "/" << getMaxMana() << std::endl;
	std::cout << "Health Points " << getCurrentHp() << "/" << getMaxHp() << std::endl;
	system("pause");
}