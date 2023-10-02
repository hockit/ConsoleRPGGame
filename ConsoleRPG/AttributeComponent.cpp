#include "AttributeComponent.h"


bool AttributeComponent::IsAlive() const
{
	return currentHp_ >= 0;
}

