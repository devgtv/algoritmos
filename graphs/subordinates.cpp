#include <iostream>
#include <vector>

using namespace std;

int dfs(int empregado, const vector<vector<int>>& subordinados, vector<int>& resultado) {
    int totalsubordinados = 0;
    
    for (int it : subordinados[empregado]) {
        totalsubordinados += 1 + dfs(it, subordinados, resultado);
    }
    
    resultado[empregado] = totalsubordinados;
    return totalsubordinados;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<vector<int>> subordinados(n + 1);

    for (int i = 2; i <= n; i++) {
        int mandao;
        cin >> mandao;
        subordinados[mandao].push_back(i);
    }

    vector<int> resultado(n + 1, 0);

    dfs(1, subordinados, resultado);

    for (int i = 1; i <= n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
