#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int x, y, z;
	while (cin >> x >> y >> z) {
		int a, b, c;
		// colocar c sempre como maior para eu evitar problemas no futuro.
		if (x > y && x > z) {
			c = x;
			a = y;
			b = z;
		}
		else if (y > x && y > z) {
			c = y;
			a = x;
			b = z;

		}
		else {
			c = z;
			a = x;
			b = y;
		}
		
		// verificar se e tripla e for uma tripla entrar no funil de saber o mdc para 1 .
		if (a * a + b * b == c * c) {
			if (gcd(gcd(a, b), c) == 1) {
				cout << "tripla pitagorica primitiva" << endl;
			}
			else {
				cout << "tripla pitagorica" << endl;
			}
		}
		else {
			cout << "tripla" << endl;
		}
		
	}

	return 0;
}