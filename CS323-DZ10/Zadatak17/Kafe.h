#pragma once
#include "Proizvod.h";

class Kafe : public Proizvod {

	string tip;

public:
	void setTip(string tip) {
		this->tip = tip;
	}
	string getTip(){
		return this->tip;
	}
	void setCenaProizvoda(double cenaProizvoda) {
		this->cenaProizvoda = cenaProizvoda;
		this->cenaProizvoda += this->cenaProizvoda * 0.12;
	}

	void info() {
		cout << this->imeProizvoda << " " << this->cenaProizvoda << " " << this->rokTrajanja << " " << this->tip << endl;
	}
};