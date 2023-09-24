#include "AttributeComponent.h"


//AttributeComponent::AttributeComponent(statType strenght, statType dexterity, statType manaPoints, statType healthPoints)
//	: strenght_(strenght)
//	, dexterity_(dexterity)
//	, maxMana_(manaPoints)
//	, maxHp_(healthPoints)
//{
//	currentMana_ = maxMana_;
//	currentHp_ = maxHp_;
//}

bool AttributeComponent::IsAlive() const
{
	return currentHp_ >= 0;
}

//inline statType AttributeComponent::getStrenght() const { return strenght_; }
//inline statType AttributeComponent::getDexterity() const { return dexterity_; }
//inline statType AttributeComponent::getMaxHp() const { return maxHp_; }
////inline statType AttributeComponent::getCurrentHp() const { return currentHp_; }
//inline statType AttributeComponent::getMaxMana() const { return maxMana_; }
//inline statType AttributeComponent::getCurrentMana() const { return currentMana_; }
//
//void AttributeComponent::setStrenght(int delta) { strenght_ += delta; }
//void AttributeComponent::setDexterity(int delta) { dexterity_ += delta; }
//void AttributeComponent::setMaxHp(int delta) { maxHp_ += delta; }
//void AttributeComponent::setCurrentHp(int delta) { currentHp_ += delta; }
//void AttributeComponent::setMaxMana(int delta) { maxMana_ += delta; }
//void AttributeComponent::setCurrentMana(int delta) { currentMana_ += delta; }