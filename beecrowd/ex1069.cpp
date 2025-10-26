#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string tesouro;
		getline(cin, tesouro);
		int contador = 0;
		int abridor = 0;


		for (char c : tesouro) {
			if (c == '<') {
				abridor++;
			}
			else if (c == '>' && abridor > 0) {
				contador++;
				abridor--;
			}
		}
		cout << contador << endl;
	}

	return 0;
}