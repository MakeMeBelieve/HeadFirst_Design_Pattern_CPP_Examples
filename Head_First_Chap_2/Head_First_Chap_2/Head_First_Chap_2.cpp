// Head_First_Chap_2.cpp : Konsol uygulaması için giriş noktasını tanımlar.
// Observer Pattern

#include "stdafx.h"


int main()
{

	WeatherData* Airtower1 = new WeatherData();
	WeatherData* Airtower2 = new WeatherData();

	CurrentConditionDisplay* currentDisplay = new CurrentConditionDisplay(Airtower1);
	ForecastDisplay* forecastDisplay = new ForecastDisplay(Airtower1);
	StaticsDisplay* staticDisplay = new StaticsDisplay(Airtower1);
	ThirdPartyDisplay* thirdpartyDisplay = new ThirdPartyDisplay(Airtower1);

	CurrentConditionDisplay* currentDisplay2 = new CurrentConditionDisplay(Airtower2);
	ForecastDisplay* forecastDisplay2 = new ForecastDisplay(Airtower2);
	StaticsDisplay* staticDisplay2 = new StaticsDisplay(Airtower2);
	ThirdPartyDisplay* thirdpartyDisplay2 = new ThirdPartyDisplay(Airtower2);


	Airtower1->setMeasurement(1.111,22.142,32.1242);
	cout << endl; cout << endl;
	Airtower2->setMeasurement(123.123, 123.123, 123.124);
	cout << endl; cout << endl;

	Airtower1->removeObserver(currentDisplay);
	
	Airtower1->setMeasurement(4.223, 122.341, 241.13);
	cout << endl;

	int a;
	cin >> a;
    return 0;
}

