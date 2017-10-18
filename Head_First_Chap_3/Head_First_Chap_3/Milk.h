#pragma once
class Milk : public CondimentDecorator
{
public:
	Beverage* beverage;
	Milk(Beverage* beverage);
	string getDescription();
	double cost();
};

