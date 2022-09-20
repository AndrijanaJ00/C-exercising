#include "DivljaZivotinja.h"

int main() {

	DivljaZivotinja dz;

	dz.setIme("Riki");
	dz.setIshrana("Bambus");
	dz.setBoja("crno-bela");
	dz.setStarost(5);
	dz.setVrsta("Panda");
	dz.setNazivLovista("BB lov");

	dz.info();

	return 0;
}