#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* neparni(int* niz, int* niz1, int n, int* n1) {
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (niz[i] % 2 != 0) {
			niz1[j] = niz[i];
			j++;
		}
		else {
			--* n1;
		}
	}

	niz1 = (int*)realloc(niz1, sizeof(int) * *n1);

	return niz1;
}

int main() {

	int n, n1;
	int* niz, * niz1;

	printf("Unesite velicinu niza: ");
	scanf("%d", &n);

	n1 = n;

	niz = (int*)calloc(n, sizeof(int));
	niz1 = (int*)calloc(n1, sizeof(int));

	for (int i = 0; i < n; i++)
	{
		printf("Unesite element niza: ");
		scanf("%d", &niz[i]);
	}

	niz1 = neparni(niz, niz1, n, &n1);

	printf("Niz sa neparnim elementima: ");
	for (int i = 0; i < n1; i++)
	{
		printf("%d ", niz1[i]);
	}

	free(niz);
	free(niz1);

	return 0;
}
