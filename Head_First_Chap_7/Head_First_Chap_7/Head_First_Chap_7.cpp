// Head_First_Chap_7.cpp : Konsol uygulamasý için giriþ noktasýný tanýmlar.
// Adapter and Facade Patterns

#include "stdafx.h"


int main()
{

	MallardDuck* duck = new MallardDuck();

	WildTurkey* turkey = new WildTurkey();
	Duck* turkeyAdapter = new TurkeyAdapter(turkey);

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	cout << "The Duck says..." << endl;
	duck->fly();
	duck->quack();

	cout << "The TurkeyAdapter says..." << endl;
	turkeyAdapter->fly();
	turkeyAdapter->quack();

	uint16_t a;
	cin >> a;

    return 0;
}

