#include "stdafx.h"

Mocha::Mocha(Beverage* beverage) {
	this->beverage = beverage;
}

string Mocha::getDescription() {
	return beverage->getDescription() + ", Mocha ";
}
double Mocha::cost() {
	return beverage->cost() + 0.20;
}
