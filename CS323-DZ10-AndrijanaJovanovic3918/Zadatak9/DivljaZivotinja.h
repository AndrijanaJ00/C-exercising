#pragma once
#include "Zivotinja.h"

class DivljaZivotinja: public Zivotinja
{
private:
	string nazivLovista;
public:
	DivljaZivotinja() {}
	~DivljaZivotinja() {}
	void setNazivLovista(string n) { nazivLovista = n; }
	string getNazivLovista() { return nazivLovista; }
	
	void info() {
		cout << "Naziv: " << ime << endl;
		cout << "Vrsta: " << vrsta << endl;
		cout << "Ishrana: " << ishrana << endl;
		cout << "Starost: " << starost << endl;
		cout << "Boja: " << boja << endl;
		cout << "Naziv lovista: " << nazivLovista << endl;
		cout << " " << endl;
	}
};

