#include <iostream>
using namespace std;
int main() {
	int m, n;
	
	while (cin >> m >> n) {
	
		long long int soma1 = 1, soma2 = 1, total;
		for (int i = 1; i <= m; i++) {
			soma1 *= i;
		}

		for (int i = 1; i <= n; i++) {
			soma2 *= i;
		}
		total = soma1 + soma2;
		cout << total << endl;
	}
	return 0;
}