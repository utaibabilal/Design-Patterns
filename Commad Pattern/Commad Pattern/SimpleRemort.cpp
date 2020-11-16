#include "StdAfx.h"
#include "SimpleRemort.h"


SimpleRemort::SimpleRemort()
{
	
}


SimpleRemort::~SimpleRemort(void)
{
}

void SimpleRemort:: SetCommand(Command *ptrCmd)
{
	this->ptrCmd = ptrCmd;
}
