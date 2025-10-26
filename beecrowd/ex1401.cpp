#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> entradas(n);

	for (int i = 0; i < n; i++) {
		cin >> entradas[i];
	}
	for (int i = 0; i < n; i++) {
		string s = entradas[i];
		sort(s.begin(), s.end());

		set<string> permuta;
		permuta.insert(s);

		while (next_permutation(s.begin(), s.end())) {
			permuta.insert(s);
		}
		for (const string& sexo : permuta) {
			cout << sexo << endl;
		}
		cout << endl;
	}
	return 0;
}