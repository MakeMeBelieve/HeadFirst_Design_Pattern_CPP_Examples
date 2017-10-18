#include "stdafx.h"

StaticsDisplay::StaticsDisplay(Subject* nesne) {
	weatherStation = nesne;
	weatherStation->registerObserver(this);
}

StaticsDisplay::~StaticsDisplay() {
	weatherStation->removeObserver(this);
}

void StaticsDisplay::update(float temperature, float humidity, float pressure) {
	this->temp = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void StaticsDisplay::display() {
	cout << "Static Conditions: " << " degree :" << temp  << "  " <<"humidity :" << humidity << "  " << "pressure: " << pressure << endl;
}