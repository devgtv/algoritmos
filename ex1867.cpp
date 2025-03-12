#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	char lixo;
	int d, m, a;
	cin >> d >> lixo >> m >> lixo >> a;

	cout << setw(2) << setfill('0') << m << "/" << setw(2) << setfill('0') << d << "/" << setw(2) << setfill('0') << a << endl;
	cout << setw(2) << setfill('0') << a << "/" << setw(2) << setfill('0') << m << "/" << setw(2) << setfill('0') << d << endl;
	cout << setw(2) << setfill('0') << d << "/" << setw(2) << setfill('0') << m << "/" << setw(2) << setfill('0') << a << endl;
	return 0;
}


