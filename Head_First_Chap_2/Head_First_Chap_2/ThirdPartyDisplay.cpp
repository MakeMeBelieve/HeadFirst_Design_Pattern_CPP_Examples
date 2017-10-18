#include "stdafx.h"



ThirdPartyDisplay::ThirdPartyDisplay(Subject* nesne) {
	weatherStation = nesne;
	weatherStation->registerObserver(this);
}

ThirdPartyDisplay::~ThirdPartyDisplay() {
	weatherStation->removeObserver(this);
}

void ThirdPartyDisplay::update(float temperature, float humidity, float pressure) {
	this->temp = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void ThirdPartyDisplay::display() {
	cout << "ThirdParty Conditions: " << " degree " <<  temp  << "  humidity :" << humidity << "  pressure: " << pressure << endl;
}