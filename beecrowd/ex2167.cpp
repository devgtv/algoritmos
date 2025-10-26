#include <iostream>
#include <vector>

using namespace std;
int main() {
	
	int n;
	cin >> n;

	vector<int> rpm(n);
	for (int i = 0; i < n; i++) {
		cin >> rpm[i];
	}

	for (int i = 1; i < n; i++) {
		if (rpm[i] < rpm[i - 1]) {
			cout << i + 1 << endl;
			
			return 0;
		}
	}
	cout << 0 << endl;
		return 0;
}