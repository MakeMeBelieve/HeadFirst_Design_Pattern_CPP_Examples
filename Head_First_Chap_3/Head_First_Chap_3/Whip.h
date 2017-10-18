#pragma once
class Whip : public CondimentDecorator
{
public:
	Beverage* beverage;
	Whip(Beverage* beverage);
	string getDescription();
	double cost();
};

