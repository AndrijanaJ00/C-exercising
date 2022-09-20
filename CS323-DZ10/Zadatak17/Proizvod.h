#pragma once
#include <iostream>

using namespace std;

class Proizvod {

protected: 
	string imeProizvoda, rokTrajanja;
	double cenaProizvoda;

public:
	void setImeProizvoda(string imeProizvoda) {
		this->imeProizvoda = imeProizvoda;
	}
	string getImeProizvoda() {
		return this->imeProizvoda;
	}
	void setCenaProizvoda(double cenaProizvoda) {
		this->cenaProizvoda = cenaProizvoda;
		this->cenaProizvoda += this->cenaProizvoda * 0.2;
	}
	double getCenaProizvoda() {
		return this->cenaProizvoda;
	}
	void setRokTrajanja(string rokTrajanja) {
		this->rokTrajanja = rokTrajanja;
	}
	string getRokTrajanja() {
		return this->rokTrajanja;
	}

	void info() {
		cout << this->imeProizvoda << " " << this->cenaProizvoda << " " << this->rokTrajanja << endl;
	}
};