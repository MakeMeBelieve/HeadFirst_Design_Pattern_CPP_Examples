#include "stdafx.h"

WeatherData::WeatherData()
{

}

void WeatherData::registerObserver(Observer* o)
{
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
	int pos = find(observers.begin(), observers.end(), o) - observers.begin(); //get index of the element
	if (pos >= observers.size()) {
		//not found
	}
	else {
		observers.erase(observers.begin() + pos);
	}

}
void WeatherData::notifyObserver()
{
	for (int i = 0; i < observers.size(); i++)
	{
		Observer* ob = observers[i];
		ob->update(temperature, humidity, pressure);
	}
}

void WeatherData::getTemperature(){}
void WeatherData::getHumidity(){}
void WeatherData::getPressure(){}

void WeatherData::measurementChanged(){
	notifyObserver();
}

void WeatherData::setMeasurement(float temperature, float humidity, float pressure){
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementChanged();
}
