#include "stdafx.h"

ForecastDisplay::ForecastDisplay(Subject* observableObject) {
	weatherStation = observableObject;
	weatherStation->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() {
	weatherStation->removeObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure) {
	this->pressure = pressure;
	display();
}

void ForecastDisplay::display() {
	cout << "Forecast Conditions: " <<"pressure: " <<  pressure << endl;
}
