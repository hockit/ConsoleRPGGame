#pragma once
#include "HEADERS.h"

class Enemy
{
public:

	Enemy();

	void displayStat() const;

	int getHp() const { return hp_; }
	int getDmgMin() const { return damageMin_; }
	int getDmgMax() const { return damageMax_; }
	int getRewardExp() const { return rewardExp_; }

	void setHp(int hpSubstract) { hp_ -= hpSubstract; }
private:

	std::string name_{ "" };
	// Base attributes
	int hp_{ 3 };
	int damageMin_{ 1 };
	int damageMax_{ 2 };
	int rewardExp_{ 10 };

	enum class FEnemyPower
	{
		GOBLIN = 2,
		CURSE = 4,
		DEMON = 6,
		TITAN = 10
	};

	void CreateEnemy();
	
};

