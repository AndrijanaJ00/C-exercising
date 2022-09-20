#include "Test.h"

int* noviNiz(int* a, int* b, int n, int m, int& duzina) {
	int* niz;
	int j = 0;
	niz = new int[duzina];

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			niz[j] = a[i];
			j++;
			duzina++;
		}
	}

	for (int i = 0; i < m; i++) {
		if (b[i] % 2 != 0) {
			niz[j] = b[i];
			j++;
			duzina++;
		}
	}

	return niz;

}