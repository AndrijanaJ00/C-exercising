#pragma once
#include <iostream>
using namespace std;

class Proizvod
{
protected:
	string ime, rok;
	double cena;
public:
	Proizvod() {}
	Proizvod(string i, string r, int c): ime(i), rok(r), cena(c){}
	~Proizvod() {}

	void setIme(string i) { ime = i; }
	void setRok(string r) { rok = r; }
	void setCena(int c) {
		cena = c;
		cena += cena * 0.2;
	}

	string getIme() { return ime; }
	string getRok() { return rok; }
	int getCena() { return cena; }

	void info() {
		cout << "Ime proizvoda: " << ime << endl;
		cout << "Rok trajanja: " << rok << endl;
		cout << "Cena: " << cena << endl;
		cout << " " <<  endl;
	}
};

