#pragma once
#include"Command.h"
class SimpleRemort
{
public:
	SimpleRemort();
	~SimpleRemort(void);
	void SetCommand(Command *ptrCmd);

	Command *ptrCmd;


};

