#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;

	while (cin >> n) {
		vector<int> calcado_esqueda(61, 0);
		vector<int> calcado_direita(61, 0);

		for (int i = 0; i < n; ++i) {
			int tamanho;
			char tipo_dope;
			cin >> tamanho >> tipo_dope;

			if (tipo_dope == 'E') {
				calcado_esqueda[tamanho]++;
			}
			else {
				calcado_direita[tamanho]++;
			}
		}

		int pares = 0;

		for (int tamanho = 30; tamanho <= 60; ++tamanho) {
			pares += min(calcado_esqueda[tamanho], calcado_direita[tamanho]);
		}
		cout << pares << endl;
	}



	return 0;
}