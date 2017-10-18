#pragma once
class TurkeyAdapter: public Duck
{
public:
	TurkeyAdapter(Turkey* turkey);
	void quack();
	void fly();
private:
	Turkey* turkey;
};

