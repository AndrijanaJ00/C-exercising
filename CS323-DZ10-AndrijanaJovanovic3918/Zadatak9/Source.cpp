#include "DivljaZivotinja.h"

int main() {

	Zivotinja z;
	DivljaZivotinja dz;

	dz.setIme("Riki");
	dz.setIshrana("Bambus");
	dz.setBoja("crno-bela");
	dz.setStarost(5);
	dz.setVrsta("Panda");
	dz.setNazivLovista("BB lov");

	dz.info();

	z.setIme("Papi");
	z.setIshrana("Zitarice");
	z.setBoja("crvena");
	z.setStarost(2);
	z.setVrsta("Papagaj");

	z.info();

	return 0;
}