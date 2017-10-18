// Head_First_Chap_3.cpp : Konsol uygulamasý için giriþ noktasýný tanýmlar.
// Decorator Pattern

#include "stdafx.h"


int main()
{
	Beverage* beverage1 = new HouseBlend();
	cout << beverage1->getDescription() << ": $" << beverage1->cost() << endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Milk(beverage2);
	beverage2 = new Milk(beverage2);
	beverage2 = new Soy(beverage2);
	cout << beverage2->getDescription() << ": $" << beverage2->cost() << endl;
	 
	Beverage* beverage3 = new Milk(new Milk(new Soy(new Mocha(new Whip(new Espresso())))));
	cout << beverage3->getDescription() << ": $" << beverage3->cost() << endl;

	int a;
	cin >> a ;
    return 0;
}

