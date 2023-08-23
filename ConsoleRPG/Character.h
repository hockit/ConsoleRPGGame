#pragma once
class Character
{
public:

	Character();

	int getLevel() const { return level_; }
	int getBaseHp() const { return baseHp_; }
	int getStrenght() const { return strenght_; }
	int getDexterity() const { return dexterity_; }
	int getExpirience() const { return expirience_; }

	void setMaxHp(int hpAdded) { maxHp_ = hpAdded; }
	void setStrenght(int strAdded) { strenght_ += strAdded; }
	void setDexterity(int dexAdded) { dexterity_ += dexAdded; }

	//Load function

	void loadHp(int hpLoaded) { baseHp_ = hpLoaded; }
	void loadStrenght(int strLoaded) { strenght_ = strLoaded; }
	void loadDexterity(int dexLoaded) { dexterity_ = dexLoaded; }
	void loadExpirience(int expLoaded) { expirience_ = expLoaded; }

	void displayStats() const;

private:

	int level_{ 1 };
	int maxHp_{ 10 };
	int baseHp_{ maxHp_ };
	int strenght_{ 4 };
	int dexterity_{ 2 };
	int expirience_{ 0 };
};

