#pragma once
class Character
{
public:

	Character();

	int getLevel() const { return level_; }
	int getHpMax() const { return hpMax_; }
	int getHpMin() const { return hpMin_; }
	int getStrenght() const { return strenght_; }
	int getDexterity() const { return dexterity_; }

	void setHpMax(int hpAdded) { hpMax_ += hpAdded; hpMin_ = hpMax_; }
	void setHpMin(int hpSubstract) { hpMin_ -= hpSubstract; }
	void setStrenght(int strAdded) { strenght_ += strAdded; }
	void setDexterity(int dexAdded) { dexterity_ += dexAdded; }

	//Load function

	void loadLevel(int lvlLoaded) { level_ = lvlLoaded; }
	void loadHpMax(int hpLoaded) { hpMax_ = hpLoaded; }
	void loadHpMin(int hpLoaded) { hpMin_ = hpLoaded; }
	void loadStrenght(int strLoaded) { strenght_ = strLoaded; }
	void loadDexterity(int dexLoaded) { dexterity_ = dexLoaded; }

	void displayStats() const;

private:

	int level_{ 1 };
	int hpMax_{ 10 };
	int hpMin_{ hpMax_ };
	int strenght_{ 4 };
	int dexterity_{ 2 };
	int dungeon_{ 0 };
};

