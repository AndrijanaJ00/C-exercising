#pragma once
#include <iostream>

using namespace std;

class Lice {

protected:
	string ime, prezime, adresa, brojTelefona;

public:
	void setIme(string ime) {
		this->ime = ime;
	}
	string getIme() {
		return this->ime;
	}
	void setPrezime(string prezime){
		this->prezime = prezime;
	}
	string getPrezime() {
		return this->prezime;
	}
	void setAdresa(string adresa) {
		this->adresa = adresa;
	}
	string getAdresa() {
		return this->adresa;
	}
	void setBrojTelefona(string brojTelefona) {
		this->brojTelefona = brojTelefona;
	}
	string getBrojTelefona() {
		return this->brojTelefona;
	}

	void info() {
		cout << this->brojTelefona << endl;
	}
};