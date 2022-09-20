#pragma once
#include <iostream>
using namespace std;

enum Tip {
	farmerke, duks, majica
};

class Odeca
{
private:
	string ime, brend, barKod;
	double cena;
	Tip tipOdece;
public:
	void setIme(string i) { ime = i; }
	void setBrend(string b) { brend = b; }
	void setBarKod(string k) { barKod = k; }
	void setCena(double c) { cena = c; }
	void setTip(Tip t) { tipOdece = t; }

};

