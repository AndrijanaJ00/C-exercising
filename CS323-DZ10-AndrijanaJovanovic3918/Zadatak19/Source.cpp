#include "Meso.h"

int main() {
	Meso m;
	Proizvod p;

	m.setIme("AA");
	m.setCena(500);
	m.setRok("29.09.2021.");
	m.setOdCega("Pilece");

	p.setIme("BB");
	p.setCena(400);
	p.setRok("02.09.2021.");

	p.info();
	m.info();

	return 0;
}