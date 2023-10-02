#include "Enemy.h"
#include <iostream>

Enemy::Enemy(EnemyType enemyType)
	: enemyType_(enemyType)
{
	int modifier = static_cast<int>(enemyType);
	switch (enemyType)
	{
	case EnemyType::GOBLIN: name_ = "GOBLIN";
		break;
	case EnemyType::CURSE: name_ = "CURSE";
		break;
	case EnemyType::DEMON: name_ = "DEMON";
		break;
	case EnemyType::TITAN: name_ = "TITAN";
		break;
	}
	health_ *= modifier;
}

void Enemy::displayEnemy() const
{
	std::cout << "--- ENEMY SHEET ---" << std::endl;
	std::cout << name_ << std::endl;
	std::cout << "Health " << health_ << std::endl;
	std::cout << "Damage " << damageMin_ << "/" << damageMax_ << std::endl;
}