// Strategy Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"StraegyContext.h"
#include"LeftToRight.h"
#include"RightToLeft.h"


int _tmain(int argc, _TCHAR* argv[])
{

	StraegyContext * ptrStraegyContext = new StraegyContext(); 

	//ptrStraegyContext->Execute();
	ptrStraegyContext->SetStrategy(new LeftToRight());
	ptrStraegyContext->Execute();
	ptrStraegyContext->SetStrategy(new RightToLeft());
	ptrStraegyContext->Execute();
	system("pause");
	return 0;
}

