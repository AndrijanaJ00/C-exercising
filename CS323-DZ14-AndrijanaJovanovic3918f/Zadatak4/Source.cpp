#include <stdio.h>
#include <string.h>
#define MAX_LINE 256

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

void citaj(Ugovor* u) {
	printf("Unesite ime firme: ");
	gets(u->imeFirme);
	printf("Unesite vrednost ugovora: ");
	scanf("%d", &u->vrednostUgovora);
}

int main(int argc, char* argv[]) {

	Ugovor u;
	Ugovor u1[MAX_LINE];
	char line[MAX_LINE];
	int n, count = 0;
	FILE* f, * read;
	int line_num;
	f = fopen("ugovor.txt", "w");

	printf("Unesite broj ugovora: ");
	scanf("%d", &n);
	while (getchar() != '\n');
	for (int i = 0; i < n; i++)
	{
		printf("Unesite podatke za |%d| firmu: \n", i + 1);
		citaj(&u);
		u1[i] = u;
		while (getchar() != '\n');
		fprintf(f, "Ime firme: %s, vrednost ugovora: %d\n", u.imeFirme, u.vrednostUgovora);
	}
	fclose(f);
	f = fopen("ugovor.txt", "r");

	read = fopen(argv[1], "w");
	if (read == NULL) {
		fprintf(stderr, "Greska");
		return 1;
	}
	fprintf(read, "Ukupan broj ugovora: %d\n", n);
	line_num = 1;
	while (fgets(line, MAX_LINE, f) != NULL) {
		fprintf(read, "%d. ", line_num++);
		fputs(line, read);
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (strcmp(u1[i].imeFirme, u1[j].imeFirme) == 0) {
				count++;
			}
		}
		if (count < 2) {
			fprintf(read, "Ukupna vrednost ugovora firme %s je %d\n", u1[i].imeFirme, ugovori(u1, u1[i].imeFirme, n));
		}
		count = 0;
	}

	fclose(f);
	fclose(read);
	return 0;
}