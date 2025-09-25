#include <iostream>
#include <vector>

using namespace std;

void dfs(int no, const vector<vector<int>>& garfo, vector<bool>& visitado, int& contarvertice, int& contaresta) {
    visitado[no] = true;
    contarvertice++;
    for (int i = 0; i < garfo[no].size(); i++) {
        int vizinho = garfo[no][i];
        contaresta++;
        if (!visitado[vizinho]) {
            dfs(vizinho, garfo, visitado, contarvertice, contaresta);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> garfo(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        garfo[a].push_back(b);
        garfo[b].push_back(a);
    }

    vector<bool> visitado(n + 1, false);

    for (int i = 1; i <= n; i++) {
        if (!visitado[i]) {
            int contarvertice = 0;
            int contaresta = 0;
            dfs(i, garfo, visitado, contarvertice, contaresta);

            contaresta /= 2;

            if (contarvertice != contaresta) {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}