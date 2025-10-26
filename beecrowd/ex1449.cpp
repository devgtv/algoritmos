#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;
int main() {
	int m, n;

	int t;
	cin >> t;
	while (t--) {

		cin >> m >> n;

		unordered_map<string, string> dicio;
		string jopones, portugues;
		string line;
		cin.ignore();

		// le as m palavras
		for (int i = 0;i < m;i++) {
			getline(cin, jopones);
			getline(cin, portugues);
			dicio[jopones] = portugues;
		}
		// le e trud as n linhas da musica
		for (int i = 0; i < n;i++) {
			getline(cin, line);
			istringstream iss(line); // o objeto iss vai para um futoro de estracao de dados
			string palavra;
			bool primeiro = true;

			while (iss >> palavra) { // extacao de dados. basicamente enquanto e possivel ler no fluxo de dados faca este bomba
				if (!primeiro) cout << " ";
				primeiro = false;

				if (dicio.find(palavra) != dicio.end()) { // ve se a atual palavra tem no dicionario se nao so imprima ela mesma.
					cout << dicio[palavra];
				}
				else {
					cout << palavra;
				}
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}