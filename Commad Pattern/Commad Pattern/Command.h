#pragma once
class Command
{
public:
	Command(void);
	~Command(void);
	 virtual void Execute() = 0;
};

