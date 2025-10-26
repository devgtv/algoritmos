#include <iostream>
using namespace std;


int main() {
	int n;
	long long num1,num2,soma;
	cin >> n;

	string nome_jogador1, nome_jogador2 , escolha1, escolha2;

	for (int i = 0; i < n; i++) {

		cin >> nome_jogador1 >> escolha1 >> nome_jogador2 >> escolha2;
		cin >> num1 >> num2;

		soma = num1 + num2;
		if ((soma % 2 == 0 && escolha1 == "PAR") || (soma % 2 != 0 && escolha1 == "IMPAR")) {
			cout << nome_jogador1 << endl;
		}
		else {
			cout << nome_jogador2 << endl;
		}
	} 
		
	return 0;
}