#pragma once
#include"Subject.h"
class Weather : public Subject
{
public:
	Weather(void);
	~Weather(void);
	void ChangeInWeather( int weather);
};

