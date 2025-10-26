#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		int sum = 0;
		int count = 0;

		if (x % 2 == 0) {
			x++;
		}
		while (count < y) {
			sum += x;
			x += 2;
			count++;
		}
		cout << sum << endl;
	}

	return 0;
}