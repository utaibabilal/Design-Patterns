#pragma once
class Strategy
{
public:
	Strategy(void);
	~Strategy(void);
	virtual void Execute() = 0;
};

