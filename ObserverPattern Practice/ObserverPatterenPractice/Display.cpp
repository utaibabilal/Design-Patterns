#include "StdAfx.h"
#include "Display.h"
#include <string>


Display::Display(string display)
{
	this->nameOfDisplay = display;
}


Display::~Display(void)
{
}

void Display::UpdateData(int value)
{
	 this->value = value;  

	 cout << "Price at ";
	std::cout<< nameOfDisplay ;
	cout<< " is now ";
	cout<< value << "\n";
}
