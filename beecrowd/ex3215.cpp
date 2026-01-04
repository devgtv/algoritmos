#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int bfs(int inicio, const vector<vector<int>>&amizades,const vector<int>&valores,
    vector<bool>& visitado) {
        queue<int> fila;
        fila.push(inicio);
        visitado[inicio] = true;

        int soma = 0;

        while(!fila.empty()) {
            int atual = fila.front();
            fila.pop();
            soma += valores[atual];

            for(int amigo : amizades[atual]) {
                if(!visitado[amigo]) {
                    visitado[amigo] = true;
                    fila.push(amigo);
                }
            }
        }
        return  soma;

    }



signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> valores(n);
    for(int i = 0 ; i < n;i++) {
        cin >> valores[i];
    }
    vector<vector<int>> amizades(n);
    for(int i = 0 ; i < m;i++) {
        int x,y;
        cin >> x >> y;
        amizades[x].push_back(y);
        amizades[y].push_back(x);
    }
    vector<bool> visitado(n,false);

    for(int pessoa = 0 ; pessoa <n;pessoa++) {
        if(!visitado[pessoa]) {
            int somacomponente = bfs(pessoa,amizades,valores,visitado);
            if(somacomponente != 0) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }
    cout << "POSSIBLE" << endl;
    return 0;
}