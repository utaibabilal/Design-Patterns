#pragma once
#include "stdafx.h"
#include <iostream>
#include"Observer.h"
#include <cstring>
using namespace std;



class Display : public Observer 
{
public:
	Display(string n);
	~Display(void);
	int value;
	string nameOfDisplay;
	void UpdateData(int value);
};

