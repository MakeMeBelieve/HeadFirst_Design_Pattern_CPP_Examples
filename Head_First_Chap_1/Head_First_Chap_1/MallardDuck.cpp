#include "stdafx.h"



MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

void MallardDuck::display()
{
	std::cout << "i am a real mallard duck." << std::endl;
}