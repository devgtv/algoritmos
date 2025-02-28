#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {


	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;

		if (x <= 1) {
			cout << "Not Prime" << endl;
		}
		else if (x == 2) {
			cout << "Prime" << endl;
		}
		else if (x % 2 == 0) {
			cout << "Not Prime" << endl;
		}
		else {
			bool isprime = true;
			for (int i = 3; i <= sqrt(x); i += 2) {
				if (x % i == 0) {
					isprime = false;
					break;
				}
			}
			if (isprime) {
				cout << "Prime" << endl;
			}
			else {
				cout << "Not Prime" << endl;
			}
		}

	}
	return 0;
}