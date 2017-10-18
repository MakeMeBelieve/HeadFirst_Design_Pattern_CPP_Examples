#include "stdafx.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* nesne) {
	weatherStation = nesne;
	weatherStation->registerObserver(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay() {
	weatherStation->removeObserver(this);
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure) {
	this->temp = temperature;
	this->humidity = humidity;
	display();
}

void CurrentConditionDisplay::display() {
	cout << "Current Conditions : " << " degree :"<< temp  <<"  " << "humidity :" << humidity << endl;
}