//Header File
#pragma once
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "Observer.h"
using namespace std;

class Shop : Observer
{
    //Name of the Shop
    string name;
    float price;
public:
    Shop(string n); 
    void Update(float price);          
};
