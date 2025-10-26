#include <iostream>
using namespace std;
int main() {
	int a, n;
	cin >> a;

	while (cin >> n) {
		if (n > 0) break;
	}
	int soma = 0;

	for (int i = 0; i < n; i++) {
		soma += a + i;
	}
	cout << soma << endl;

	return 0;
}