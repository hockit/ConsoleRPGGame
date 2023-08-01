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

	void displayStats() const;

private:

	int level_{ 1 };
	int hpMin_{ 10 };
	int hpMax_{ 10 };
	int strenght_{ 4 };
	int dexterity_{ 2 };
	int dungeon_{ 0 };
};

