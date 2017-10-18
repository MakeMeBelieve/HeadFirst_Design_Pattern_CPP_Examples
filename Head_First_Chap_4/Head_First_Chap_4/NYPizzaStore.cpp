#include "stdafx.h"

Pizza NYPizzaStore::createPizza(string type) {

	if (type == "cheese" ) {
		return NYStyleCheesePizza();
	}
	else if (type ==  "veggie" ) {
		return  NYStyleVeggiePizza();
	}
	else if (type == "clam" ) {
		return NYStyleClamPizza();
	}
	else if (type == "pepperoni" ) {
		return NYStylePepperoniPizza();
	}
	else {
		Pizza pizza;
		return pizza;
	}
}
