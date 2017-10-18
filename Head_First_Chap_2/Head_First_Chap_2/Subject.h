#pragma once
class Subject
{
public:
	virtual void registerObserver(Observer* o);
	virtual void removeObserver(Observer* o);
	virtual void notifyObserver();
};

