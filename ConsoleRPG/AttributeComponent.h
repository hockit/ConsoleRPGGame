#pragma once
#include "Types.h"

class AttributeComponent
{
public:
	//AttributeComponent(statType strenght, statType dexterity, statType healthPoints , statType manaPoints);

	bool IsAlive() const;

	statType getStrenght() const { return strenght_; }
	statType getDexterity() const { return dexterity_; }
	statType getMaxHp() const { return maxHp_; }
	statType getCurrentHp() const { return currentHp_; }
	statType getMaxMana() const { return maxMana_; }
	statType getCurrentMana() const { return currentMana_; }

	void setStrenght(int delta) { strenght_ += delta; }
	void setDexterity(int delta) { dexterity_ += delta; }
	void setMaxHp(int delta) { maxHp_ += delta; }
	void setCurrentHp(int delta) { currentHp_ += delta; }
	void setMaxMana(int delta) { maxMana_ += delta; }
	void setCurrentMana(int delta) { currentMana_ += delta; }

private:

	statType strenght_ = 1;
	statType dexterity_ = 1;
	statType maxHp_ = 1;
	statType currentHp_ = 1;
	statType maxMana_ = 1;
	statType currentMana_ = 1;
};

