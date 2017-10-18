#pragma once
class Pizza
{
public:
	string name;
	string dough;
	string sauce;
	vector<string> toppings;

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	string getName();


};

