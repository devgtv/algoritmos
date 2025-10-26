#include <iostream> 
using namespace std;

int main() {
	
	int n;
	cin >> n;

	while (n--) {
	
		int x;
		cin >> x;
		int soma = 0;
		for (int z = 1; z <= x / 2; z++) {
			if (x % z == 0) {
				soma += z;
			}
		}
		if (soma == x) cout << x << " eh perfeito" << endl;
		else cout << x << " nao eh perfeito" << endl;
	}

	return 0;
}