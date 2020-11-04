#include "StdAfx.h"
#include "Subject.h"
#include <algorithm>


Subject::Subject(void)
{
}


Subject::~Subject(void)
{
}

void Subject:: SuscribeObserver(Display *ptrDisplay)
{
	this->list.push_back(ptrDisplay);
}

void Subject:: UnsuscribeObserver(Display *ptrDisplay)
{
	list.erase(std::remove(list.begin(), list.end(), ptrDisplay), list.end()); 
}

void Subject::Notify(int price)
{
	for(vector<Display*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
		
            (*iter)->UpdateData(price);
        }
    }
}


