#include <iostream>
#include <iomanip>
using namespace std;


void hexadecimal(int v) {
	cout << uppercase << hex << v << endl;
}

int main() {
	int v;
	cin >> v;
	hexadecimal(v);
	return 0;
}