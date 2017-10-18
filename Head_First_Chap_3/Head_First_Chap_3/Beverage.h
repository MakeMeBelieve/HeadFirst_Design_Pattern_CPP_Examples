#pragma once
class Beverage
{
public:
	virtual string getDescription();
	virtual double cost();
	string description = "Unknown Beverage";
};

