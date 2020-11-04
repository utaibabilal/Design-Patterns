#pragma once
#include "condimentdecorator.h"
class Whip :
	public CondimentDecorator
{
public:
	Whip(void);
	~Whip(void);
	float GetCost();
};

