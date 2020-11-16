#include "StdAfx.h"
#include "LightOnCommand.h"



LightOnCommand::LightOnCommand(Light *ptr)
{
	this->lightObj = ptr;
}


LightOnCommand::~LightOnCommand()
{
}

void LightOnCommand:: Execute()
{
	this->lightObj->On();
	
}
