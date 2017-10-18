#include "stdafx.h"


Singleton::Singleton() {

	hesap_no = 10;
}

uint16_t Singleton::GetValue()
{
	return hesap_no;
}

Singleton& Singleton::getInstance() {
	static Singleton *INSTANCE = new Singleton();
	return *INSTANCE;

	/*
	static Singleton INSTANCE;
	return INSTANCE;
	*/
}
