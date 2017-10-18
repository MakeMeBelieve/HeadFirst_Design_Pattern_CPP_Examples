#pragma once
class PizzaStore
{
public:	
	Pizza OrderPizza(string type);
	virtual Pizza createPizza(string type);
};

