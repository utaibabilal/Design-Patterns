#pragma once
#include "condimentdecorator.h"
class Soya :
	public CondimentDecorator
{
public:
	Soya(void);
	~Soya(void);
	float GetCost();
};

