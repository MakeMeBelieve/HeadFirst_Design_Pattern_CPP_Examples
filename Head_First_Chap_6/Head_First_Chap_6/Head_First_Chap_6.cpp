// Head_First_Chap_6.cpp : Konsol uygulaması için giriş noktasını tanımlar.
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

