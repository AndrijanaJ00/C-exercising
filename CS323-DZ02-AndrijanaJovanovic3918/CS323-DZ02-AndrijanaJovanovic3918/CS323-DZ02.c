#include <stdio.h>

void stampaZvezdice(int n) {
    int m = 1;
   
    for (int i = n;i >= 1;i--)
    {
        for (int j = 1;j <= i - 1;j++)
        {
            printf(" ");
        }
        for (int k = 1;k <= m;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
}

int main() {
    // Ovo je 13 zadatak pa sam ga stavila pod komentar 

	int n;

	printf("Unesite neki broj: ");
	scanf("%d", &n);
	//Ovde nisam bila sigurna da li se trazi da bude deljiv sa 2,3,5 ili sa bilo kojim od tih brojeva. Ukoliko treba sa bilo kojim od tih brojeva umesto && treba da stoji ||
	for (int i = 1; i < n; i++) {
		if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			printf("%d\n", i);
		}
	}
    /* 
    int broj;
    printf("Izaberite broj redova:");
    scanf("%d", &broj);

    stampaZvezdice(broj);*/
    return 0;
}
