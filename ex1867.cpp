#include <iostream>
#include <string>
using namespace std;

int main() {
	string n, m;
	
	while (cin >> n >> m) {
		if (n == "0" && m == "0") {
			break;
		}

		int somaden = 0;
		for (char c : n) {
			somaden += c - '0';
		}
		// formula da raiz digital  : dr b ⁡ ( n ) ≡ d 2 b 2 + d 1 b 1 + d 0 b 0 ≡ d 2 ( 1 ) + d 1 ( 1 ) + d 0 ( 1 ) ≡ d 2 + d 1 + d 0 ( mod ( b − 1 ) ) 
		if (somaden != 0) {
			somaden = 1 + ((somaden - 1) % 9);
		}



		int somadem = 0;
		for (char c : m) {
			somadem += c - '0';
		}
		if (somadem != 0) {
			somadem = 1 + ((somadem - 1) % 9);
		}

		if (somaden > somadem) {
			cout << 1 << endl;
		}
		else if (somaden < somadem) {
			cout << 2 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
	
}
