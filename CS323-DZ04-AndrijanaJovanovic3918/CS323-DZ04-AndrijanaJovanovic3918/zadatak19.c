#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 20

/*Napisati funkciju void izbaci(int a[], int *pn, int x) koja iz niza a izbacuje
sva pojavljivanja elementa x. Funkcija azurira dimenziju niza preko pokazivaca pn. Na
primer: za niz 8 4 2 8 0 -3 dužine 6 i element 8 novi niz je 4 2 0 -3 i nova duzina je 4. U
glavnom programu ucitati dimenziju niza (n<20) i elemente niza i testirati rad funkcije.*/

void izbaci(int a[], int* pn, int x) {
	int count = 0;
	int i = 0, j = 0;
	for (i = 0; i < *pn; i++) {
		if (a[i] == x) {
			count++;
		}
		else {
			a[j] = a[i];
			j++;
		}
	}
	*pn -= count;
}

void print_array(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
}

int main() {
	int a[N];
	int duzina;
	int x;
	printf("Unesite duzinu niza: ");
	scanf("%d", &duzina);

	for (int i = 0; i < duzina; i++)
	{
		printf("Unesite elemente niza: ");
		scanf("%d", &a[i]);
	}

	printf("Unesite elemente koji zelite da izbacite iz niza: ");
	scanf("%d", &x);
	int* pn = &duzina;
	izbaci(a, pn, x);

	printf("Novi niz bez elementa x: ");
	print_array(a, *pn);
	printf("Nova duzina niza je %d", *pn);

	return 0;
}