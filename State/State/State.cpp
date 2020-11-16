// State.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

#include"MobileAlertState.h"
#include"Scilent.h"
#include"Vibration.h"
#include"AlertStateContext.h"


int _tmain(int argc, _TCHAR* argv[])
{
	AlertStateContext *ptrAlertStateContext = new AlertStateContext();
	ptrAlertStateContext->DispalyAlert();
	ptrAlertStateContext->SetCurrentState(new Scilent());
	ptrAlertStateContext->DispalyAlert();
	system("pause");
	return 0;
}

