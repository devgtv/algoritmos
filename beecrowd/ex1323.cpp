#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		int total = 0;
		for (int i = 1; i <= n; i++) {
			total += i * i;
			
		}
		cout << total << endl;
	}


	return 0;
}