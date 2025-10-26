#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;

	int contador = 0;

	while (contador < 6) {
		if (x % 2 != 0) {
			cout << x << endl;
			contador++;
		}
		x++;
	}
	



}