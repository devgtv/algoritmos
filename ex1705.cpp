#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct infoCompetidor {
    int id;
    int r, e;
    int fase = 0;
};

int main() {
    int n;
    cin >> n;

    vector<infoCompetidor> competidores(n);
    for (int i = 0; i < n; ++i) {
        cin >> competidores[i].r >> competidores[i].e;
        competidores[i].id = i;
    }

    string s;
    cin.ignore();
    getline(cin, s);
    int tamanhoTexto = s.size();
    vector<int> fases(n, 0);

    vector<infoCompetidor> competidorAtual = competidores;
    while (competidorAtual.size() > 1) {
        vector<infoCompetidor> proxima_fase;
        for (size_t i = 0; i < competidorAtual.size(); i += 2) {
            infoCompetidor a = competidorAtual[i];
            infoCompetidor b = competidorAtual[i + 1];
            int tempoA = a.r + a.e * tamanhoTexto;
            int tempoB = b.r + b.e * tamanhoTexto;
            if (tempoA < tempoB || (tempoA == tempoB && a.id < b.id)) {
                fases[a.id]++;
                proxima_fase.push_back(a);
            }
            else {
                fases[b.id]++;
                proxima_fase.push_back(b);
            }
        }
        competidorAtual = proxima_fase;
        tamanhoTexto *= 2; // texto 2* 
    }

    for (int i = 0; i < n; ++i) {
        if (i != 0) cout << " ";
        cout << fases[i] + 1;
    }
    cout << endl;

    return 0;
}
