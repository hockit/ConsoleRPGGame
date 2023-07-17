#pragma once
class Enemy
{
public:

	void displayStat() const;
	int getHp() const { return hp_; }
private:

	// Base attributes
	int hp_{ 5 };
	int damageMin_{ 1 };
	int damageMax_{ 3 };

	enum class EnemyPower
	{
		Low = 4,
		Mid = 7,
		High = 10,
		Boss = 15
	};

	/* TODO: Lootbox: After victory against enemy, some random item drop.
		Power of item will depend on dungeon level*/
};

