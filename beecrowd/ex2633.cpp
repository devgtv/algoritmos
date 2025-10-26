#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Carne {
    string nome;
    int validade;
};

bool comparador_validade(const Carne& a, const Carne& b) {
    return a.validade < b.validade;
}

int main() {
    int n;
    while (cin >> n) {
        vector<Carne> churas;

        for (int i = 0; i < n; i++) {
            Carne c;
            cin >> c.nome >> c.validade;
            churas.push_back(c);
        }

        sort(churas.begin(), churas.end(), comparador_validade);

        for (int i = 0; i < churas.size(); i++) {
            for (char letra : churas[i].nome) {
                cout << letra;
            }
            if (i != churas.size() - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
