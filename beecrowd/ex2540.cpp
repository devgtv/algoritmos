#include  <iostream>
using namespace std;

int main() {

	int n, escolha;
	
	
	while (cin >> n) {
		int cont = 0;
		for (int i = 0; i < n; i++) {
			cin >> escolha;
			if (escolha == 1) {
				cont += 1;
			}
		}
		if  (cont >= (2.0/3.0) * n) {
			cout << "impeachment" << endl;
		}
		else {
			cout << "acusacao arquivada" << endl;
		}

	}

	return 0;
}