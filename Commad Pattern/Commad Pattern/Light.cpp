#include "StdAfx.h"
#include "Light.h"
#include<iostream>
using namespace std;


Light::Light(void)
{
}


Light::~Light(void)
{
}

void Light:: On()
{
	cout<<" Light is turned on";
	cout<<endl;
}
void Light:: Off()
{
	cout<<"Light is turned off";
	cout<<endl;

}
