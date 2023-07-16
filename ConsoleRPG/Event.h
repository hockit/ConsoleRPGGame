#pragma once
#include "Character.h"

class Event
{
private:
	int choice_;
public:
	void Master(Character& character);
	void Fight(Character& character/*, Enemy& enemy*/);
};

