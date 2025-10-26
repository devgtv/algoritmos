#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct produto {
	string nome;
	double preco = 0;
};

int main() {
	int n;
	cin >> n;

	while (n--) {
		int m;
		cin >> m;

		produto produtos[100];
		for (int i = 0; i < m; i++) {
			cin >> produtos[i].nome >> produtos[i].preco;
		}

		int p;
		cin >> p;
		double total = 0;

		for (int i = 0; i < p; i++) {
			string nomecomprado;
			int quantidade;
			cin >> nomecomprado >> quantidade;

			for (int j = 0; j < m; j++) {
				if (produtos[j].nome == nomecomprado) {
					total += produtos[j].preco * quantidade;
					break;
				}
			}
		}

		cout << fixed << setprecision(2) << "R$ " << total << endl;
	}

	return 0;
}
