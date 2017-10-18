#include "stdafx.h"



ModelDuck::ModelDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new MuteQuack();
}

void ModelDuck::display()
{
	std::cout << "i am a model duck not real." << std::endl;
}