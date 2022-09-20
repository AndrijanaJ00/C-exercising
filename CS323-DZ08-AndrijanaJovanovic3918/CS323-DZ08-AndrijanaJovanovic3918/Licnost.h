#pragma once
#include <iostream>
using namespace std;

class Licnost
{
private:
	string ime, adresa;
	int dan, mesec, godina;
public:
	Licnost() {};
	Licnost(string i, string a, int d, int m, int gg);
	~Licnost();
	Licnost(const Licnost& licnost) {};

	void setIme(string i) { ime = i; };
	string getIme() const { return ime; };

	void setAdresa(string a) { adresa = a; };
	string getAdresa()const { return adresa; };

	void setDan(int d) { dan = d; };
	int getDan()const { return dan; };

	void setMesec(int m) { mesec = m; };
	int getMesec()const { return mesec; };

	void setGodina(int g) { godina = g; };
	int getGodina()const { return godina; };

};

