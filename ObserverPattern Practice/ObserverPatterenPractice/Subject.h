#pragma once
#include <vector>
#include <list>
#include"Display.h"
using namespace std;
class Subject
{
public:

	Subject(void);
	~Subject(void);
	void SuscribeObserver(Display *ptrDisplay);
	void UnsuscribeObserver(Display *ptrDisplay);
	void Notify(int price);
	vector<Display*> list;
};

