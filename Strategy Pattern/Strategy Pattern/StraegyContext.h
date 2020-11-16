#pragma once
#include "strategy.h"
class StraegyContext 
{
public:
	StraegyContext();
	~StraegyContext(void);
	Strategy *ptrStrategy;
	void Execute();
	void SetStrategy(Strategy *ptr);

};

