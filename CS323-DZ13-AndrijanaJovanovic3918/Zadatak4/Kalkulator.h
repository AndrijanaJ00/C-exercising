#pragma once
#include <iostream>
using namespace std;
#include <exception>

class DeljenjeSaNulomException : public exception {
	virtual const char* what() const noexcept {
		return "Ne mozete deliti nulom";
	}

};

class NeparanBrojException : public exception {
	virtual const char* what() const noexcept {
		return "Neparan broj";
	}

};

class DeljenjeSaNulomExceptionNew {
	string message;
public:
	DeljenjeSaNulomExceptionNew(string m) : message(m) {}
	string getMessage() { return message; }
};

class NeparanBrojExceptionNew {
	string message;
public:
	NeparanBrojExceptionNew(string m) : message(m) {}
	string getMessage() { return message; }
};

class Kalkulator
{
	int a, b;
public:
	Kalkulator() {}
	Kalkulator(int x, int y) {
		setA(x);
		setB(y);
	}
	void setA(int x);
	void setB(int y);
	double getA() { return a; }
	double getB() { return b; }

	double podeli(double x, double y);
};

