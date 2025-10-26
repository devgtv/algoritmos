#include <iostream> 
#include <vector>
using namespace std;

int main() {

	int t;
	cin >> t;

	vector<long long> fib(61);
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= 60; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	while (t--) {
		int n;
		cin >> n;
		cout << "Fib(" << n << ") = " << fib[n] << endl;
	}
	return 0;

}