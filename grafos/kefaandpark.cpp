#include <iostream>
#include <vector>
using namespace std;

void dfs(int no, int gatosrepetitivos, int m, const vector<int>& temgatinho, const vector<vector<int>>& adj, vector<bool>& visitado, int& resposta) {
    visitado[no] = true;
    if (temgatinho[no] == 1)
        gatosrepetitivos++;
    else
        gatosrepetitivos = 0;

    if (gatosrepetitivos > m)
        return;

    bool folha = true;
    for (int vizinho : adj[no]) {
        if (!visitado[vizinho]) {
            folha = false;
            dfs(vizinho, gatosrepetitivos, m, temgatinho, adj, visitado, resposta);
        }
    }

    if (folha)
        resposta++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<int> temgatinho(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> temgatinho[i];
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<bool> visitado(n + 1, false);
    int resposta = 0;
    dfs(1, 0, m, temgatinho, adj, visitado, resposta);
    cout << resposta << endl;

    return 0;
}
