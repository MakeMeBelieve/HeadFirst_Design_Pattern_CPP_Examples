#pragma once
class WeatherData : public Subject
{
public:
	WeatherData();
	void registerObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObserver();

	void getTemperature();
	void getHumidity();
	void getPressure();
	
	void setMeasurement(float temperature, float humidity, float pressure);
private:
	vector<Observer*> observers;
	void measurementChanged();
	float temperature;
	float humidity;
	float pressure;
};

