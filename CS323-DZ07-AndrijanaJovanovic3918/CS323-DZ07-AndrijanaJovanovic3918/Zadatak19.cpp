#include <iostream>
#include <fstream>
#include "Test.h"
using namespace std;

int main() {
	int* a;
	int* b;
	int n, m;
	int* niz;
	int duzinaNovogNiza = 0;
	
	ofstream output;

	cout << "Unesite duzinu prvog niza: " << endl;
	cin >> n;
	cout << "Unesite duzinu drugog niza: " << endl;
	cin >> m;

	a = new int[n];
	b = new int[m];
	cout << "-------- PRVI NIZ -------- " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Unesite element: ";
		cin >> a[i];
	}
	cout << "-------- DRUGI NIZ -------- " << endl;

	for (int i = 0; i < m; i++) {
		cout << "Unesite element: ";
		cin >> b[i];
	}

	output.open("numbers.txt");

	niz = noviNiz(a, b, n, m, duzinaNovogNiza);

	for (int i = 0; i < duzinaNovogNiza; i++) {
		output << " " << niz[i];
	}

	output.close();

	delete[] a;
	delete[] b;
	return 0;
}