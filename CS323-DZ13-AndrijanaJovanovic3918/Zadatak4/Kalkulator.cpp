#include "Kalkulator.h"

double Kalkulator::podeli(double x, double y) {
	if (y == 0)
	{
		throw DeljenjeSaNulomException();
	}
	return (x / y);
}
void Kalkulator::setA(int x) {
	if (x % 2 != 0) {
		throw NeparanBrojException();
	}
	else {
		a = x;
		cout << "a - nije neparan broj" << endl;
	}
}

void Kalkulator::setB(int y) {
	if (y % 2 != 0) {
		throw NeparanBrojException();
	}
	else {
		b = y;
		cout << "b - nije neparan broj" << endl;
	}
}