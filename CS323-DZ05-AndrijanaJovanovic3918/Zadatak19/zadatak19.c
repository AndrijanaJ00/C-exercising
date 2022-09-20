#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char imeFirme[50];
	int vrednostUgovora;
} Ugovor;

int ugovori(Ugovor* u, char* imeFirme, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(u[i].imeFirme, imeFirme) == 0)
		{
			suma += u[i].vrednostUgovora;
		}
	}

	return suma;
}

int main() {

	Ugovor u[20];
	int n, count = 0;
	printf("Unesite broj ugovora: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Unesite ime firme: ");
		scanf("%s", &u[i].imeFirme);
		printf("Unesite vrednost ugovora: ");
		scanf("%d", &u[i].vrednostUgovora);

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (strcmp(u[i].imeFirme, u[j].imeFirme) == 0) {
				count++;
			}
		}
		if (count < 2) {
			printf("Ukupna vrednost ugovora firme %s je %d\n", u[i].imeFirme, ugovori(&u, u[i].imeFirme, n));
		}
		count = 0;
	}

	return 0;
}