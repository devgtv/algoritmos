#include <iostream>

using namespace std;

int main() {

	int num_pessoas = 0, cont = 0;
	float alt_min, alt_max, altura;
	int cont_pode = 0;
	


	while (cin >> num_pessoas >> alt_min >> alt_max) {
		cont_pode = 0;
			
		for (int i = 0; i < num_pessoas; ++i) {

			cin >> altura;
			if (altura >= alt_min && altura <= alt_max) {
				cont_pode += 1;
			}
			
		}
		cout << cont_pode << endl;
	}

	
	return 0;
}