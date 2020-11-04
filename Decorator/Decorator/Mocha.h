#pragma once
#include "condimentdecorator.h"
class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage *ptrBeverage);
	~Mocha(void);
	float GetCost();
	Beverage *ptrBeverage;
};

