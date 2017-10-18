#include "stdafx.h"


Duck::Duck()
{

}

void Duck::display()
{
	std::cout << "not implemented." << std::endl;
}

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
	flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
	quackBehavior = qb;
}

void Duck::swim()
{
	std::cout << "every duck can swim." << std::endl;
}