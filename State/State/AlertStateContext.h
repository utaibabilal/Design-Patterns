#pragma once
#include"MobileAlertState.h"
class AlertStateContext
{
public:
	AlertStateContext(void);
	~AlertStateContext(void);
	MobileAlertState *ptrContext;
	void SetCurrentState(MobileAlertState *ptrContext);
	void DispalyAlert();

};

