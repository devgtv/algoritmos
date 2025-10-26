#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> x(n);
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];

	}
	
	int menor_valor = x[0];
	int posicao = 0;
	for (int i = 1; i < n; i++) {
		if (x[i] < menor_valor) {
			menor_valor = x[i];
			posicao = i;
		}

	}

	cout << "Menor valor: " << menor_valor << endl;
	cout << "Posicao: " << posicao << endl;
	return 0;
}