#pragma once
#include <iostream>
using namespace std;

class Zivotinja
{
protected:
	string ime;
	string vrsta;
	string ishrana;
	int starost;
	string boja;

public:
	Zivotinja() {}
	Zivotinja(string i, string v, string is, int s, string b) : ime(i), vrsta(v), ishrana(is), starost(s), boja(b) {}
	~Zivotinja() {}

	void setIme(string i) { ime = i; }
	void setVrsta(string v) { vrsta = v; }
	void setIshrana(string i) { ishrana = i; }
	void setStarost(int s) { starost = s; }
	void setBoja(string b) { boja = b; }

	string getIme() { return ime; }
	string getVrsta() { return vrsta; }
	string getIshrana() { return ishrana; }
	int getStarost() { return starost; }
	string getBoja() { return boja; }

	virtual void info() = 0;
};


