// ObserverPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include"Product.h"
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	Product product;
                    
    // We have four shops wanting to keep updated price set by product owner
    Shop shop1("Shop 1");
    Shop shop2("Shop 2");
	product.Attach(&shop1);
    product.Attach(&shop2);

    //Now lets try changing the products price, this should update the shops automatically
    product.ChangePrice(23);

    //Now shop2 is not interested in new prices so they unsubscribe
    product.Detach(&shop2);            

    //Now lets try changing the products price again
    product.ChangePrice(26.0f);


	system("pause"); 
	return 0;
                    
   



}

