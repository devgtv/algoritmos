#include <iostream>
using namespace std;

int main() {
	int ultimo, atual;
	bool primeiro = true;
	while (cin >> atual) {
		if (primeiro) {
			ultimo = atual;
			primeiro = false;
		}
		else {
			if (atual <= ultimo) {

				break;
			}
			ultimo = atual;
		}
	
	}
	cout << ultimo + 1 << endl;

	return 0;
}