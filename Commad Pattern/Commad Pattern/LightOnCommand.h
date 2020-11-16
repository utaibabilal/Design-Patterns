#pragma once
#include"Command.h"
#include"Light.h"
class LightOnCommand : public Command
{
public:
	LightOnCommand(Light *ptr);
	~LightOnCommand(void);
	  Light *lightObj;
	
	void Execute();
};

