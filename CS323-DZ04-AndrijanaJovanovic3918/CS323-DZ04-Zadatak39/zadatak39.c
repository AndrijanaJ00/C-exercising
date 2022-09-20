#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*Napisati program kojim se sa ulaza ucitava ceo broj k (k<=10) i niska s maksimalne
duine 20 karaktera, a zatim se ispisuje nova niska formirana nadovezivanje polazne
stringa n puta. Na primer: za unos 4 i ana izlaz je ana_ana_ana_ana
*/

void nadovezi(char* s, char* s1, int k) {
	for (int i = 0; i < k; i++)
	{
		strcat(s1, s);
		if (i != k - 1)
		{
			strcat(s1, "_");
		}
	}
}


int main() {
	char s[20];
	int k;
	char s1[100] = "";

	printf("Unesite neki broj: ");
	scanf("%d", &k);

	printf("Unesite neki string: ");
	scanf("%s", s);

	nadovezi(s, s1, k);
	printf("%s", s1);
	return 0;
}