#include "Enemy.h"
#include <iostream>

void Enemy::displayStat() const
{
	std::cout << "Enemy attributes" << std::endl;
	std::cout << "HP: " << hp_ << std::endl;
	std::cout << "Damage: " << damageMin_ << "-" << damageMax_ << std::endl;
}