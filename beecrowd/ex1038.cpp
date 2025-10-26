#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
	int codigo, quantidade;
	double tot;
	cin >> codigo >> quantidade;
	if (codigo == 1) {
		tot = quantidade * 4.00;
	}
	else if (codigo == 2) {
		tot = quantidade * 4.50;
	}
	else if (codigo == 3) {
		tot = quantidade * 5.00;
	}
	else if (codigo == 4) {
		tot = quantidade * 2.00;
	}
	else if (codigo == 5) {
		tot = quantidade * 1.50;
	}
	cout << "Total: R$ " << fixed << setprecision(2) << tot << endl;
	return 0;
}