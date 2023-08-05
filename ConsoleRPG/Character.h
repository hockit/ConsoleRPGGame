#pragma once
class Character
{
public:

	Character();

	int getLevel() const { return level_; }
	int getBaseHp() const { return baseHp_; }
	int getStrenght() const { return strenght_; }
	int getDexterity() const { return dexterity_; }

	void setLevel() { ++level_; }
	void setHp(int hpAdded) { baseHp_ = 10 + hpAdded; }
	void setStrenght(int strAdded) { strenght_ += strAdded; }
	void setDexterity(int dexAdded) { dexterity_ += dexAdded; }

	//Load function

	void loadLevel(int lvlLoaded) { level_ = lvlLoaded; }
	void loadHp(int hpLoaded) { baseHp_ = hpLoaded; }
	void loadStrenght(int strLoaded) { strenght_ = strLoaded; }
	void loadDexterity(int dexLoaded) { dexterity_ = dexLoaded; }

	void displayStats() const;

private:

	int level_{ 1 };
	int baseHp_{ 10 };
	int strenght_{ 4 };
	int dexterity_{ 2 };
	int dungeon_{ 0 };
};

