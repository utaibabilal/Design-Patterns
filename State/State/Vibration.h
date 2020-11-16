#pragma once
#include"MobileAlertState.h"
class Vibration : public MobileAlertState
{
public:
	Vibration(void);
	~Vibration(void);
	void Alert();
};

