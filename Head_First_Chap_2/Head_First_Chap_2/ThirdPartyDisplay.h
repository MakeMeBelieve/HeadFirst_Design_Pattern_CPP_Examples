#pragma once
class ThirdPartyDisplay : public Observer, DisplayElement
{
public:
	ThirdPartyDisplay(Subject* nesne);
	~ThirdPartyDisplay();
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float temp;
	float humidity;
	float pressure;
	Subject* weatherStation;
};

