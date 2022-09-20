#include "Firma.h"


int  Firma::ugovori(Firma* f, char* imeFirme, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		if (f[i].getIme() == 0)
		{
			suma += f[i].getVrednost();
		}
	}

	return suma;
}