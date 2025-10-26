#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Aluno {
	string nome;
	char regiao;
	int custo;
};
bool comparar(const Aluno& a, const Aluno& b) {
	if (a.custo < b.custo) {
		return true;
	}
	else if (a.custo > b.custo) {
		return false;
	}

	if (a.regiao < b.regiao) {
		return true;
	}
	else if (a.regiao > b.regiao) {
		return false;
	}

	if (a.nome < b.nome) {
		return true;
	}
	else {
		return false;
	}
}
	

int main() {
	int q;
	while (cin >> q) {
		vector<Aluno> pessoas(q);

		for (int i = 0; i < q; i++) {
			cin >> pessoas[i].nome >> pessoas[i].regiao >> pessoas[i].custo;
		}

		sort(pessoas.begin(), pessoas.end(), comparar);


		for (int i = 0; i < pessoas.size();i++) {
			cout << pessoas[i].nome << endl;
		}
	}
	return 0;
}