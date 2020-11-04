//Header File
#pragma once
#include <vector>
#include <list>
#include "shop.h"
using namespace std;

class Subject
{
    //Lets keep a track of all the shops we have observing
    vector<Shop*> list;

public:
    void Attach(Shop *ptrShop);
    void Detach(Shop *ptrShop);
    void Notify(float price); 
};