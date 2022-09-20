#pragma once
#include <iostream>
#include <string>
using namespace std;

class Firma
{
private:
	string ime;
	int vrednost;
public:
	Firma() {};
	Firma(string i, int v): ime(i), vrednost(v) {};
	void setIme(string i) { ime = i; };
	void setVrednost(int v) { vrednost = v; };
	string getIme() { return ime; };
	int getVrednost() { return vrednost; };


};

