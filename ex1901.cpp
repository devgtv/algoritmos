#include <iostream>
#include <vector>
using namespace std;
int main() {

	int n;
	cin >> n;
	int floresta[200][200];

	//le a porra toda 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> floresta[i][j];
		}
	}

	vector<int> especies_coletadas;
	for (int i = 0; i < 2 * n; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		int especie = floresta[x][y];

		bool foramcoletadas = false;
		for (int i = 0; i < especies_coletadas.size(); i++) {
			if (especies_coletadas[i] == especie) {
				foramcoletadas = true;
				break;
			}
		}
		// tem que usar o push back para colocar na ultima posicao do vetor se vai  dar merda!.
		if (!foramcoletadas) {
			especies_coletadas.push_back(especie);
		}
	}
	cout << especies_coletadas.size() << endl;
	return 0;
}