#pragma once
class Soy: public CondimentDecorator 
{
public:
	Beverage* beverage;
	Soy(Beverage* beverage);
	string getDescription();
	double cost();
};

