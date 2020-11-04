// ObserverPatterenPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"Display.h"
#include"Weather.h"
#include<cstring>


int _tmain(int argc, _TCHAR* argv[])
{
	Weather weatherObj;
	Display objDisplayOne("Display 1");
	Display objDisplayTwo("Display 2");

	weatherObj.SuscribeObserver(&objDisplayOne);
	weatherObj.SuscribeObserver(&objDisplayTwo);

	weatherObj.ChangeInWeather(21);

	weatherObj.UnsuscribeObserver(&objDisplayTwo);


	 
	system("pause");
	return 0;
}

