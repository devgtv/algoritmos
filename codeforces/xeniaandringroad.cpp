#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n, m;
    cin >> n >> m;

    int  tempo = 0;
    int casatual = 1;

    for (int i = 0; i < m; i++) {
        int  tarefa;
        cin >> tarefa;
        if (tarefa >= casatual) {
            tempo += tarefa - casatual;
        } else {
            tempo += n - (casatual - tarefa);
        }

        casatual = tarefa;
    }

    cout << tempo << endl;

    

    return 0;
}