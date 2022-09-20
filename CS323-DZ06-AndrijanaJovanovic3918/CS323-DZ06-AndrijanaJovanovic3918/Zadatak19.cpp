#include <iostream>
using namespace std;double povrsina(double h, double w) {	return h * w;}int main() {	double h1, h2, w1, w2;	cout << "---------PRVI PRAVOUGAONIK----------" << endl;	cout << "Unesite H za prvi pravougaonik: " << endl;	cin >> h1;	cout << "Unesite W za prvi pravougaonik: " << endl;	cin >> w1;	cout << "---------DRUGI PRAVOUGAONIK----------" << endl;	cout << "Unesite H za drugi pravougaonik: " << endl;	cin >> h2;	cout << "Unesite W za drugi pravougaonik: " << endl;	cin >> w2;	if (h1 <= 0 || h2 <= 0 || w1 <= 0 || w2 <= 0)
	{
		cerr << "Uneli ste negativan broj!" << endl;
		exit(1);
	}		double povrsina1 = povrsina(h1, w1);	double povrsina2 = povrsina(h2, w2);	cout << "Povrsina prvog pravougaonik: " << povrsina1 << endl;	cout << "Povrsina drugog pravougaonik: " << povrsina2 << endl;	cout << (povrsina1 > povrsina2 ? "Prvi ima vecu povrsinu" : "Drugi ima vecu povrsinu") << endl;	return 0;}