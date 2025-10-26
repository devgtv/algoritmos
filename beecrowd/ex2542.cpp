#include <iostream>
#include <vector>

using namespace std;
int main() {
	int n, m, cm, l, cl, a;
	while (cin >> n) {
		cin >> m >> l;

		vector<vector<int>> marcos(m, vector<int>(n));
		vector<vector<int>> leonardo(l, vector<int>(n));

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> marcos[i][j];
			}
		}

		for (int i = 0; i < l; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> leonardo[i][j];
			}
		}
		cin >> cm >> cl;
		cin >> a;

		--cm;
		--cl;
		--a;

		if (marcos[cm][a] > leonardo[cl][a]) {
			cout << "Marcos" << endl;
		}
		else if (marcos[cm][a] < leonardo[cl][a]){
			cout << "Leonardo" << endl;
		}
		else {
			cout << "Empate" << endl;
		}

	}




	return 0;
}