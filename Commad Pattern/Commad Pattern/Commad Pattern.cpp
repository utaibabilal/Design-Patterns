// Commad Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"LightOnCommand.h"
#include"SimpleRemort.h"



int _tmain(int argc, _TCHAR* argv[])
{
	SimpleRemort *ptrSRemorte = new SimpleRemort();
	Light *ptrlight = new Light();

	ptrSRemorte->SetCommand(new LightOnCommand(ptrlight));
	ptrSRemorte->ptrCmd->Execute();
	
	system("pause");
	return 0;
}

