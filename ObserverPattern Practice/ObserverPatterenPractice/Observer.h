#pragma once
class Observer
{
public:
	Observer(void);
	~Observer(void);
	 virtual void UpdateData(int value) = 0;
};

