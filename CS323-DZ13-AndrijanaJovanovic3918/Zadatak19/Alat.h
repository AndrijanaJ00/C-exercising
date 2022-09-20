#pragma once
#include <iostream>
using namespace std;
#include <exception>

class CenaNijeValidnaException : public exception {
	virtual const char* what() const noexcept {
		return "Cena nije validna";
	}
};


class CenaNijeValidnaExceptionNew {
	string message;
public:
	CenaNijeValidnaExceptionNew(string m) : message(m) {}
	string getMessage() { return message; }
};

class Alat
{
private:
	string ime;
	int serijskiBroj;
	double cena;
public:
	Alat() {}
	Alat(string i, int s, double c) {
		ime = i;
		serijskiBroj = s;
		setCena(c);
	}
	void setIme(string i) { ime = i; }
	void setSerijskiBroj(int b) { serijskiBroj = b; }
	void setCena(double c) {
		if (c < 0)
		{
			throw CenaNijeValidnaException();
		}
	}

	string getIme() { return ime; }
	int getSerijskiBroj() { return serijskiBroj; }
	double getCena() { return cena; }


};

