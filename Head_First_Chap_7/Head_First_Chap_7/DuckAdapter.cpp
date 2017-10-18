#include "stdafx.h"



DuckAdapter::DuckAdapter(Duck* duck) 
{
	this->duck = duck;
}

void DuckAdapter::gobble() 
{
	duck->quack();
}

void DuckAdapter::fly() 
{
	duck->fly();
}