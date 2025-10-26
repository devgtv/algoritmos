#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	int n;
	cin >> n;


	int totals = 0, totalb = 0, totala = 0;
	int sucessos = 0, sucessob = 0, sucessoa = 0;

	for (int i = 0; i < n; i++) {
		string nome;
		cin >> nome;


		int s, b, a;
		int s1, b1, a1;
		cin >> s >> b >> a;
		cin >> s1 >> b1 >> a1;
		

		totals += s;
		totalb += b;
		totala += a;
		

		sucessos += s1;
		sucessob += b1;
		sucessoa += a1;
		
	}

	cout << "Pontos de Saque: " << fixed << setprecision(2) << (100.0 * sucessos / totals) << " %." << endl;
		cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (100.0 * sucessob / totalb) << " %." << endl;
		cout << "Pontos de Ataque: " << fixed << setprecision(2) << (100.0 * sucessoa / totala) << " %." << endl;
		



	return 0;
}