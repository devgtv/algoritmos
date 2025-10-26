#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int mapear(char c) {
    return c - 'A';
}

void dfs(vector<vector<int>>& grafo, vector<int>& visitados, int nat) {
    visitados[nat] = 1;
    for (int vizinho : grafo[nat]) {
        if (!visitados[vizinho]) {
            dfs(grafo, visitados, vizinho);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos;
    cin >> casos;
    cin.ignore();
    bool primeiroc = true;
    while (casos--) {
        if (!primeiroc) {
            cout << '\n';
        }
        primeiroc = false;
        char maiorno;
        cin >> maiorno;
        cin.ignore();
        int n = mapear(maiorno) + 1;

        vector<vector<int>> grafo(n);
        string linha;
        while (getline(cin, linha) && !linha.empty()) {
            char u = linha[0];
            char v = linha[1];
            int indiceU = mapear(u);
            int indiceV = mapear(v);

            grafo[indiceU].push_back(indiceV);
            grafo[indiceV].push_back(indiceU);
        }

        vector<int> visitados(n, 0);
        int componentes = 0;
        for (int i = 0; i < n; i++) {
            if (!visitados[i]) {
                dfs(grafo, visitados, i);
                componentes++;
            }
        }
        cout << componentes << '\n';
    }
    return 0;
}
