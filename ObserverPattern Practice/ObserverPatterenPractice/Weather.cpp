#include "StdAfx.h"
#include "Weather.h"


Weather::Weather(void)
{
}


Weather::~Weather(void)
{
}

void   Weather::ChangeInWeather( int weather)
{
	 Notify(weather);
}

