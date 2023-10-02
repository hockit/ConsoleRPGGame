#include "Character.h"
#include <iostream>

Character::Character(expType level, expType expNextLevel, expType currentExp, expType learningPoints, equType coins)
	: level_(level)
	, expNextLevel_(expNextLevel)
	, currentExp_(currentExp)
	, learningPoints_(learningPoints)
	, coins_(coins)
{
}

void Character::displayStats() const
{
	system("CLS");
	std::cout << "Character profile" << std::endl;
	std::cout << "Level " << level_ << std::endl;
	std::cout << "Experience " << currentExp_ << "/" << expNextLevel_ << std::endl;
	std::cout << std::endl << "Character attributes" << std::endl;
	std::cout << "Strenght " << getStrenght() << std::endl;
	std::cout << "Dexterity " << getDexterity() << std::endl;
	std::cout << "Mana " << getCurrentMana() << "/" << getMaxMana() << std::endl;
	std::cout << "Health Points " << getCurrentHp() << "/" << getMaxHp() << std::endl;
	system("pause");
}


void Character::nextLevel()
{
	if (currentExp_ >= expNextLevel_)
	{
		++level_;
		setMaxHp(5);
		learningPoints_ += 6;
		expNextLevel_ *= 2;
	}
	
}