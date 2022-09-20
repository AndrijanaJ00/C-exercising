#pragma once
#include "Lice.h"

class FizickoLice : public Lice {

	string brojLicneKarte;

public:
	void setBrojLicneKarte(string brojLicneKarte) {
		this->brojLicneKarte = brojLicneKarte;
	}

	void info() {
		cout << this->ime << " " << this->prezime << " " << this->adresa << " " << this->brojTelefona << " " << this->brojLicneKarte << endl;
	}
};