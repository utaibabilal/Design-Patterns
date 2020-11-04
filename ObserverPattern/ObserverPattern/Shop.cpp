
#include"stdafx.h"
#include "Shop.h"
#include <string>


Shop::Shop(string name)
{
    this->name = name;
}

void Shop::Update(float price)
{
    this->price = price;

    //Lets print on console just to test the working
    cout << "Price at ";
	std::cout<< name ;
	cout<< " is now ";
	cout<< price << "\n";
}
