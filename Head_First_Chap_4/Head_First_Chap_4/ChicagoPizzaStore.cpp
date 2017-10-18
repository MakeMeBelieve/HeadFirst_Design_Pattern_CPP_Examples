#include "stdafx.h"

Pizza ChicagoPizzaStore::createPizza(string type) {
	
	if (type == "cheese") {
		return ChicagoStyleCheesePizza();
	}
	else if (type == "veggie") {
		return  ChicagoStyleVeggiePizza();
	}
	else if (type == "clam") {
		return ChicagoStyleClamPizza();
	}
	else if (type == "pepperoni") {
		return ChicagoStylePepperoniPizza();
	}
	else {
		Pizza pizza;
		return pizza;
	}
}