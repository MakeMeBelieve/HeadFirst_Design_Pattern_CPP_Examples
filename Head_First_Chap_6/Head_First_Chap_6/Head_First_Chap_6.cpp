// Head_First_Chap_6.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
// Command pattern

#include "stdafx.h"


int main()
{

	SimpleRemoteController *controller = new SimpleRemoteController();
	Light *lamba = new  Light();
	LightOnCommand *LightOn = new LightOnCommand(lamba);

	controller->setCommand(LightOn);
	controller->buttonWasPressed();

	int a;
	cin >> a;
    return 0;
}

