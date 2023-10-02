#pragma once
#include "AttributeComponent.h"

class Character : public AttributeComponent
{
public:
	Character(expType level, expType expNextLevel, expType currentExp, expType learningPoints, equType coins);
	void displayStats() const;
	void nextLevel();

private:
	
	expType level_;
	expType expNextLevel_;
	expType currentExp_;
	expType learningPoints_;
	equType coins_;
};

