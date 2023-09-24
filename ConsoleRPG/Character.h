#pragma once
#include "AttributeComponent.h"


class Character : public AttributeComponent
{
public:
	Character();
	//AttributeComponent attributeComp = AttributeComponent::AttributeComponent(10, 10, 5, 10);
	void displayStats() const;

private:

};

