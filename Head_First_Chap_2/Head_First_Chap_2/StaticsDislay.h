#pragma once
class StaticsDisplay : public Observer, DisplayElement
{
public:
	StaticsDisplay(Subject* nesne);
	~StaticsDisplay();
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float temp;
	float humidity;
	float pressure;
	Subject* weatherStation;
};

