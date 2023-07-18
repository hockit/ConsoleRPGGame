#pragma once
#include "Character.h"
#include "Enemy.h"

class Event
{
private:
	
	bool bWin_{ false };

public:
	void updateStats(Character& character);
	void Fight(Character& character, Enemy& enemy);
};

