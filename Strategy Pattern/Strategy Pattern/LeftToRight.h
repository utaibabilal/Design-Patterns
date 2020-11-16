#pragma once
#include "strategy.h"
class LeftToRight :
	public Strategy
{
public:
	LeftToRight(void);
	~LeftToRight(void);
	void Execute();
};

