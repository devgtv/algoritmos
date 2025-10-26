#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int codigop1, numerop1;
	int codigop2, numerop2;
	double valorp1, valorp2, total;
	cin >> codigop1 >> numerop1 >> valorp1;
	cin >> codigop2 >> numerop2 >> valorp2;
	total = (numerop1 * valorp1) + (numerop2 * valorp2);
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) <<  total << endl;
	return 0;
} 