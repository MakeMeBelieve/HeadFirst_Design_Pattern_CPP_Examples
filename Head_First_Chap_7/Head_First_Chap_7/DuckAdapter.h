#pragma once
class DuckAdapter: public Turkey
{
public:
	DuckAdapter(Duck* duck);
	void gobble();
	void fly();
private:
	Duck* duck;
};

