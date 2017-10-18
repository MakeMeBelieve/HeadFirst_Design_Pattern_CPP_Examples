#include "stdafx.h"


void Pizza::prepare() {
	cout << "Preparing "  << name << endl ;
	cout << "Tossing dough..." << endl;
	cout << "Adding source..." << endl;
	cout << "Adding toppings: ";
	for (vector<string>::iterator i = toppings.begin(); i != toppings.end(); ++i)
		cout << ' ' << *i;
	cout << endl;

}

void Pizza::bake() {
	cout << "Bake for 25 min. at 350 cel." << endl;
}

void Pizza::cut() {
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box() {
	cout << "Place pizza in official PizzaStore box" << endl;
}

string Pizza::getName() {
	return name;
}