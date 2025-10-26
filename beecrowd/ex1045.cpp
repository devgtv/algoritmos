#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c; 
	if (a < b) swap(a,b);
	if (a < c) swap(a,c);
	if (b < c) swap(b,c);
	if (a >= b + c) {
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	 if (a * a == b * b + c * c) {
		cout << "TRIANGULO RETANGULO" << endl;
	}
	 if (a * a > b * b + c * c) {
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	 if (a * a < b * b + c * c) {
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	 if (a == b && b == c) {
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	 else if  (a == b || b == c || c == a) {
		 cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}