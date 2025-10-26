#include <iostream>
using namespace std;

int main() {
	int num = 0,par = 0,impar = 0 ,negativos = 0,positivos = 0 ;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num > 0) {
			positivos += 1;
		}
		else if (num < 0) {
			negativos += 1;
		}
		if (num % 2 == 0) {
			par += 1;

		}
		else   {
			impar += 1;

		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << positivos << " valor(es) positivo(s)" << endl;
	cout << negativos << " valor(es) negativo(s)" << endl;
	return 0;
}