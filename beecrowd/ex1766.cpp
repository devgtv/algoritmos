#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Rena // minha estrutura contendo o nome peso idade e altura da rena 
{
	string nome;
	int peso;
	int idade;
	float altura;
};
// funcao lambda para poder ordenar 
bool compara(const Rena& a, const Rena& b) {
	if (a.peso != b.peso) return a.peso > b.peso;
	if (a.idade != b.idade) return a.idade < b.idade;
	if (a.altura != b.altura) return a.altura < b.altura;
	return a.nome < b.nome;
}
int main() {
	int t;
	cin >> t;

	for (int caso = 1; caso <= t;caso++) {
		int n, m;
		cin >> n >> m;
		vector<Rena> renas(n); // Crio um Vetor dinamico que contem n objetos do tipo Rena da minha struck
		for (int i = 0; i < n;i++) {
			cin >> renas[i].nome >> renas[i].peso >> renas[i].idade >> renas[i].altura;
		}
		// vamos ordenar o vetor com base nas descricoes pedidas
		// precisamos de uma funcao lambda para isso...
		sort(renas.begin(), renas.end(),compara);

		cout << "CENARIO " << "{" << caso << "}" << endl;

		for (int i = 0; i < m;i++) { // imprimindo o nome das renas ja ordenadas
			cout << i << " - " << renas[i].nome << "\n";
		}
	}
	return 0;
}


