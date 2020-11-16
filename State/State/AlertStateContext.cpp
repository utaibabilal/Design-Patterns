#include "StdAfx.h"
#include "AlertStateContext.h"
#include"Vibration.h"
#include"Scilent.h"


AlertStateContext::AlertStateContext(void)
{
	ptrContext = new Vibration();
}


AlertStateContext::~AlertStateContext(void)
{
}

void AlertStateContext::SetCurrentState(MobileAlertState *ptrContext)
{
	this->ptrContext =  ptrContext;
}

void AlertStateContext:: DispalyAlert()
{
	this->ptrContext->Alert();
}
