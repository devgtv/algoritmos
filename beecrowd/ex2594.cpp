#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int q;
	cin >> q;
	cin.ignore(); 

	for (int i = 0; i < q; i++) {
		string texto, palavra;
		getline(cin, texto);
		getline(cin, palavra);
		vector<int> posicoes;
		istringstream a(texto);
		string patualizada;
		int indice = 0;

		while (a >> patualizada) {
			if (patualizada == palavra) {
				posicoes.push_back(indice);
			}
			indice += patualizada.length() + 1;

		}
		if (posicoes.empty()) {
			cout << "-1" << endl;
		}
		else {
			for (int i = 0; i < posicoes.size(); i++) {
				cout << posicoes[i];
				if (i != posicoes.size() - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}



	return 0;
}