// Head_First_Chap_4.cpp : Konsol uygulamasý için giriþ noktasýný tanýmlar.
// Factory Pattern

#include "stdafx.h"


int main()
{

	PizzaStore *nyStore = new NYPizzaStore();
	PizzaStore *chicagoStore = new ChicagoPizzaStore();

	Pizza pizza = nyStore->OrderPizza("cheese");
	cout << "Mumin ordered a " << pizza.getName() << endl;

	cout << "=============================================" << endl;

	pizza = chicagoStore->OrderPizza("cheese");
	cout << "Melike ordered a " << pizza.getName() << endl;

	cout << "=============================================" << endl;
	
	pizza = nyStore->OrderPizza("clam");
	cout << "Seyma ordered a " << pizza.getName() << endl;

	cout << "=============================================" << endl;

	pizza = chicagoStore->OrderPizza("clam");
	cout << "Irmak ordered a " << pizza.getName() << endl;

	int a;
	cin >> a;
    return 0;
}

