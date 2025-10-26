#include <iostream>
#include <vector>
#include <algorithm>

struct problema {
    int criticidade;
    char tipo;
};

bool comparar(const problema& prob1, const problema& prob2) {
    // 'V' tem prioridade sobre 'D'
    if (prob1.tipo == 'V' && prob2.tipo == 'D') return true;
    if (prob1.tipo == 'D' && prob2.tipo == 'V') return false;

    // Para o mesmo tipo, ordena por criticidade decrescente
    return prob1.criticidade > prob2.criticidade;
}

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<problema> problemas;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int criticidade;
            char tipo;
            cin >> criticidade >> tipo;
            problemas.push_back({ criticidade, tipo });
        }
    }

    sort(problemas.begin(), problemas.end(), comparar);

    for (int i = 0; i < problemas.size(); i++) {
        cout << problemas[i].criticidade << problemas[i].tipo << endl;
    }

    return 0;
}