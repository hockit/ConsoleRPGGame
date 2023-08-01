#include "Enemy.h"
#include <iostream>

Enemy::Enemy(int level)
{

	hp_ *= level;
	damageMin_ += level;
	damageMax_ += level;
}

void Enemy::displayStat() const
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "Enemy attributes" << std::endl;
	std::cout << "HP: " << hp_ << std::endl;
	std::cout << "Damage: " << damageMin_ << "-" << damageMax_ << std::endl;
}
