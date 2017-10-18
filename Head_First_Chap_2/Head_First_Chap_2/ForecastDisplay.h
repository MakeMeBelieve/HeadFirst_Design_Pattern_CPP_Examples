#pragma once
class ForecastDisplay : public Observer, DisplayElement
{
public:
	ForecastDisplay(Subject* observableObject);
	~ForecastDisplay();
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float pressure;
	Subject* weatherStation;
	
};

