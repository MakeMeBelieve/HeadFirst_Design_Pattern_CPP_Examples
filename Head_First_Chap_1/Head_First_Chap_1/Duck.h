#pragma once
class Duck
{
public:
	Duck();
	virtual void display();
	void performFly();
	void performQuack();
	void setFlyBehavior(FlyBehavior* fb);
	void setQuackBehavior(QuackBehavior* qb);
	void swim();

protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;


};

