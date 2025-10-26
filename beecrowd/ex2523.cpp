#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string alfabeto;
	int n;

	while (cin >> alfabeto) {

		cin >> n;
		vector<int> indeces(n);
		for (int i = 0; i < n; i++) {
			cin >> indeces[i];
		}
		for (int i = 0; i < n; i++) {
			cout << alfabeto[indeces[i] - 1];
		}
		cout << endl;
	}

	return 0;
}