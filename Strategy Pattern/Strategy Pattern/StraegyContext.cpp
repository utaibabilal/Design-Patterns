#include "StdAfx.h"
#include "StraegyContext.h"
#include"LeftToRight.h"


StraegyContext::StraegyContext()
{
	this->ptrStrategy =  new LeftToRight();
}


StraegyContext::~StraegyContext(void)
{
}


void  StraegyContext::Execute()
{
	this->ptrStrategy->Execute();
}


void  StraegyContext::SetStrategy(Strategy *ptr)
{
	 this->ptrStrategy = ptr;
}

