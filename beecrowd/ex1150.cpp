#include <iostream>
using namespace std;
int main() {
	int x, z;
	cin >> x;

	cin >> z;
	while (z <= x) {
		cin >> z;
	}

	int soma = 0;
	int contador = 0;
	int atual = x;
	while (soma <= z) {
		soma += atual;
		atual++;
		contador++;
	}	

	cout << contador << endl;
	return 0;
}