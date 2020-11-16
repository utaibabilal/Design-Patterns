#pragma once
#include "strategy.h"
class RightToLeft : public Strategy
{
public:
	RightToLeft(void);
	~RightToLeft(void);
	void Execute();
};

