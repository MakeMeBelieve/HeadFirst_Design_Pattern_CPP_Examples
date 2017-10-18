#pragma once
class CurrentConditionDisplay : public Observer , DisplayElement
{
public:
	CurrentConditionDisplay(Subject* nesne);
	~CurrentConditionDisplay();
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float temp;
	float humidity;
	Subject* weatherStation;
};

