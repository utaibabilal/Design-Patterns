#include "StdAfx.h"
#include "Mocha.h"


Mocha::Mocha(Beverage *ptrBeverage)
{
	this->ptrBeverage = ptrBeverage;
}


Mocha::~Mocha(void)
{
}

float Mocha::GetCost()
{
	return  ptrBeverage ->GetCost() +  20.0 ;
}