#pragma once
#include <string>
class Character
{
public:
	Character();
private:
	//std::string& name_;
	int level_{ 0 };
	int strenght_{ 5 };
	int dexterity_{ 2 };
	int hpMin_{ 10 };
	int hpMax_{ 10 };

};

