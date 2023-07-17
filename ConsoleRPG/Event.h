#pragma once
#include "Character.h"
#include "Enemy.h"

class Event
{
private:
	int choice_{ 0 };
	bool bWin_{ false };

public:
	void Master(Character& character);
	void Fight(Character& character, Enemy& enemy);
};

