// Head_First_Chap_5.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
//  Singleton Pattern

#include "stdafx.h"


int main()
{
	Singleton& uniqe = Singleton::getInstance();
	uint16_t Sayi =  uniqe.GetValue();
	cout << "Sayi : " << Sayi << endl;

	Singleton& uniqe2 = Singleton::getInstance();
	uint16_t Sayi2 = uniqe2.GetValue();
	cout << "Sayi : " << Sayi2 << endl;

	uint16_t a;
	cin >> a;
    return 0;
}

