// Head_First_Chap_1.cpp : Konsol uygulaması için giriş noktasını tanımlar.
// Strategy Pattern

#include "stdafx.h"


int main()
{

	Duck* mallard = new MallardDuck();
	
	mallard->display();
	mallard->performFly();
	mallard->performQuack();
	mallard->swim();

	Duck* model = new ModelDuck();

	model->performFly();
	model->performQuack();
	model->setFlyBehavior( new FlyRocketPowered );
	model->setQuackBehavior(new Quack);
	model->performFly();
	model->performQuack();


	int a;
	std::cin >> a;
    return 0;
}

