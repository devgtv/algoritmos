#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <vector>

using namespace std;

int bfs(const map<int, vector<int>>& grafo, const set<int>& nos, int inicio, int conexao) {
    map<int, int> distancia;
    queue<int> fila;

    distancia[inicio] = 0;
    fila.push(inicio);

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();





        
        for (int vizinho : grafo.at(atual)) {
            if (distancia.find(vizinho) == distancia.end()) {
                distancia[vizinho] = distancia[atual] + 1;
                if (distancia[vizinho] <= conexao) {
                    fila.push(vizinho);
                }
            }
        }
    }
    int daprachegar = 0;
    for (int no : nos) {
        if (distancia.find(no) != distancia.end() && distancia[no] <= conexao) {
            daprachegar++;
        }
    }  

    return nos.size() - daprachegar;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ncasos = 1;

    while (true) {
        int conexoes;
        cin >> conexoes;
        if (conexoes == 0) break;

        map<int, vector<int>> grafo;
        set<int> nos;

        for (int i = 0; i < conexoes; i++) {
            int a, b;
            cin >> a >> b;
            grafo[a].push_back(b);
            grafo[b].push_back(a);
            nos.insert(a);
            nos.insert(b);
        }






        while (true) {
            int inicio, ttl;
            cin >> inicio >> ttl;
            if (inicio == 0 && ttl == 0) break;

            int nao;
            if (nos.find(inicio) == nos.end()) {
                
                nao = nos.size();
            } else {
                nao = bfs(grafo, nos, inicio, ttl);
            }

            cout << "Case " << ncasos++ << ": " << nao
                 << " nodes not reachable from node " << inicio
                 << " with TTL = " << ttl << "." << "\n";
        }
    }

    return 0;
}
