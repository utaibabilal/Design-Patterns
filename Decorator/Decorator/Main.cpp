// Decorator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
#include"DarkRost.h"
#include "Mocha.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Beverage *ptrBeverage = NULL;

	ptrBeverage = new DarkRost();


	float abc = ptrBeverage->GetCost();

	ptrBeverage = new Mocha(ptrBeverage);

	float def = ptrBeverage->GetCost();
	system("pause");
	return 0;
}

