#include "Alat.h"

int main() {

	try {
		Alat a("aa", 2, -5);
	
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	return 0;
}