#define _CRT_SECURE_NO_WARNINGS
#include "Licnost.h"
#include <iostream>
using namespace std;

int main() {
	// vodolija u horoskopu pocije od 20 januara do 18 februara ukljucujuci i te dane
	int n;
	string ime, adresa;
	int dan, mesec, godina;

	cout << "Unesite broj licnosti: ";
	cin >> n;
	const int SIZE = n;

	Licnost* licnosti = new Licnost[n];

	for (int i = 0; i < n; i++) {
		cout << "\nUnesite " << i + 1 << " licnost" << endl;
		cout << "Ime: ";
		cin >> ime;
		licnosti[i].setIme(ime);
		cout << "Adresa: ";
		cin >> adresa;
		licnosti[i].setAdresa(adresa);
		cout << "Dan: ";
		cin >> dan;
		licnosti[i].setDan(dan);
		cout << "Mesec: ";
		cin >> mesec;
		licnosti[i].setMesec(mesec);
		cout << "Godina: ";
		cin >> godina;
		licnosti[i].setGodina(godina);
	}
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (licnosti[i].getDan() >= 20 && licnosti[i].getDan() <= 31 && licnosti[i].getMesec() == 1 || (licnosti[i].getDan() >= 1 && licnosti[i].getDan() <= 18 && licnosti[i].getMesec() == 2)) {
			cout << "Vodolija u horoskopu: " << licnosti[i].getIme() << endl;
		}

	}

	return 0;
}
