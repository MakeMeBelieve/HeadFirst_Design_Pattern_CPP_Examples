#include "stdafx.h"

Whip::Whip(Beverage* beverage) {
	this->beverage = beverage;
}

string Whip::getDescription() {
	return beverage->getDescription() + ", Whip";
}

double Whip::cost() {
	return beverage->cost() + 0.10;
}