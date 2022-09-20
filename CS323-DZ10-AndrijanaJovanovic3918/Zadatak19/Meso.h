#pragma once
#include "Proizvod.h"

class Meso: public Proizvod
{
private:
	string odCega;
public:
	Meso() {};
	~Meso() {};

	void setOdCega(string o) { odCega = o; }
	string getOdCega() { return odCega; }
	void setCena(double c) {
		cena = c;
		cena += cena * 0.08;
	}

	void info() {
		cout << "Ime proizvoda: " << ime << endl;
		cout << "Rok trajanja: " << rok << endl;
		cout << "Cena: " << cena << endl;
		cout << "Od cega je meso: " << odCega << endl;
	}
};

