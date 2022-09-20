#include "Licnost.h"

Licnost::Licnost(string i, string a, int d, int m, int g) {
	this->ime = i;
	this->adresa = a;
	this->dan = d;
	this->mesec = m;
	this->godina = g;
}
/* 
Licnost::Licnost(string ime, string adresa, int dan, int mesec, int godina): ime(ime), adresa(adresa), dan(dan), mesec(mesec), godina(godina) {}
*/
Licnost::~Licnost() {
	cout << "Objekat je unisten" << endl;
}