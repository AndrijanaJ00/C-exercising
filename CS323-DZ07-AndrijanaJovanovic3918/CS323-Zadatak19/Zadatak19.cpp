#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Zdravo svima, ovo je 19. zadatak";
	int found = str.find(" ");

	string novi = str.substr(0, found);

	cout << "Podstring pre prve praznine je: " << novi;

	return 0;
}