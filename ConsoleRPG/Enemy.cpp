#include "Enemy.h"

Enemy::Enemy()
{
	CreateEnemy();
}

void Enemy::displayStat() const
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "Enemy attributes" << std::endl;
	std::cout << "HP: " << hp_ << std::endl;
	std::cout << "Damage: " << damageMin_ << "-" << damageMax_ << std::endl;
}


void Enemy::CreateEnemy()
{
	int power = rand() % 101;
	int enemyModifier{ 0 };

	if (power < 50)
	{
		enemyModifier = static_cast<int>(FEnemyPower::GOBLIN);
		name_ = "GOBLIN";
	}
	else if (50 <= power && power < 80)
	{
		enemyModifier = static_cast<int>(FEnemyPower::CURSE);
		name_ = "CURSE";
	}
	else if (80 <= power && power < 95)
	{
		enemyModifier = static_cast<int>(FEnemyPower::DEMON);
		name_ = "CUDEMONRSE";
	}
	else if (95 <= power && power <= 100)
	{
		enemyModifier = static_cast<int>(FEnemyPower::TITAN);
		name_ = "TITAN";
	}

	hp_ *= enemyModifier;
	damageMin_ *= enemyModifier;
	damageMax_ *= enemyModifier;
	rewardExp_ *= enemyModifier;
}