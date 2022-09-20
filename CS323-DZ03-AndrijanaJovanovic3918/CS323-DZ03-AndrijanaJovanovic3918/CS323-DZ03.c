#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stampajNiz(int niz[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", niz[i]);
	}

}
int pojavljivanje(char s[]) {
	int brojac = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] == 'c' && s[i + 1] == 'h') {
			brojac++;
		}
	}

	return brojac;
}

int main() {
	// Zadatak broj 4
	/*int niz[1000];
	int n = sizeof(niz) / sizeof(int);
	int max;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		niz[i] = rand() % 9999;
	}

	max = niz[0];
	for (int i = 1; i < n; i++){
		if (max < niz[i]){
			max = niz[i];
		}
	}

	stampajNiz(niz, n);
	printf("\nNajveci element u nizu je: %d", max);*/

	//Zadatak 19

	char s[100];

	printf("Unesite neku recenicu: ");
	gets(s);

	printf("Broj pojavljivanja 'ch' je: %d\n", pojavljivanje(s));

	return 0;
}
