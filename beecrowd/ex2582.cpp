#include <iostream>
using namespace std;


int main() {


	int soma;
	int x, y, nvezes;

	cin >> nvezes;



	for (int i = 0; i < nvezes; ++i) {

		cin >> x >> y;
		soma = x + y;

		switch (soma) {

		case 0: cout << "PROXYCITY" << endl; break;
		case 1: cout << "P.Y.N.G." << endl; break;
		case 2: cout << "DNSUEY!" << endl; break;
		case 3: cout << "SERVERS" << endl; break;
		case 4: cout << "HOST!" << endl; break;
		case 5: cout << "CRIPTONIZE" << endl; break;
		case 6: cout << "OFFLINE DAY" << endl; break;
		case 7: cout << "SALT" << endl; break;
		case 8: cout << "ANSWER!" << endl; break;
		case 9: cout << "RAR?" << endl; break;
		case 10: cout << "WIFI ANTENNAS" << endl; break;
		default: break;
		}

	}
	return 0;
}