#pragma once
#include "Types.h"
#include <string>

enum class EnemyType
{
	GOBLIN = 2,
	CURSE = 5,
	DEMON = 7,
	TITAN = 10
};

class Enemy
{
public:

	Enemy(EnemyType enemyType);

	void displayEnemy() const;

	std::string getName() const { return name_; }
	statType getHealth() const { return health_; }

private:

	std::string name_{ "" };
	EnemyType enemyType_;
	statType health_{ 8 };
	statType damageMin_{ 2 };
	statType damageMax_{ 5 };
	expType expReward_{ 10 };
	
};

