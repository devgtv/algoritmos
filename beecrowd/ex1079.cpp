#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		float a, b, c;
		cin >> a >> b >> c;
		
		float media = (a * 2 + b * 3 + c * 5) / 10.0;

		cout << fixed << setprecision(1) << media << endl;
	}
	
	return 0;
}