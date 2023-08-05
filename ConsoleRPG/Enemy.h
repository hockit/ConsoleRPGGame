#pragma once
#include "HEADERS.h"

class Enemy
{
public:

	Enemy(int level = 0);

	void displayStat() const;

	int getHp() const { return hp_; }
	int getDmgMin() const { return damageMin_; }
	int getDmgMax() const { return damageMax_; }

	void setHp(int hpSubstract) { hp_ -= hpSubstract; }
private:

	std::string name_{ "" };
	// Base attributes
	int hp_{ 5 };
	int damageMin_{ 1 };
	int damageMax_{ 2 };

	/*enum class EnemyPower
	{
		LOW,
		MID,
		HIGH,
		BOSS
	};*/

	/* TODO: Lootbox: After victory against enemy, some random item drop.
		Power of item will depend on dungeon level*/
};

