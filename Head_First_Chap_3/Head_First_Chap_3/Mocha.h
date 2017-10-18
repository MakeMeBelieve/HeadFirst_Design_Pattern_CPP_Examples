#pragma once
class Mocha : public CondimentDecorator
{
public:
	Beverage* beverage;
	Mocha(Beverage* beverage);
	string getDescription();
	double cost();
};

