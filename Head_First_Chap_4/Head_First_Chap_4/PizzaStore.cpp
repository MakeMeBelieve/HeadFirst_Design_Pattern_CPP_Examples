#include "stdafx.h"

Pizza PizzaStore::OrderPizza(string type) {
	Pizza pizza = createPizza(type);

	pizza.prepare();
	pizza.bake();
	pizza.box();
	
	return pizza;
}

Pizza PizzaStore::createPizza(string type) {
	// other methods
	Pizza pizza = createPizza(type);	
	return pizza;
}