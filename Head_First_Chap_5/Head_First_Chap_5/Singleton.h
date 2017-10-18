#pragma once
class Singleton
{
public:
	static Singleton& getInstance();
	uint16_t GetValue();
	Singleton(Singleton const&) = delete;
	void operator=(Singleton const&) = delete;
private:
	Singleton();
	uint16_t hesap_no;
//	Singleton(Singleton const&);
//	void operator=(Singleton const&);

};

