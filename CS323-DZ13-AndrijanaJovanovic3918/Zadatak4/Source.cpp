#include "Kalkulator.h"

int main() {
	double result;
	int a = 4;
	int b = 3;
	try{
		Kalkulator k(a,b);
		result = k.podeli(a, b);
	cout <<"Rezultat: " << result << endl;
	}catch (exception& e) {
		cout << e.what() << endl;
	}


	return 0;
}