#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool podeescolher(const vector<int>& pecas,int n,int diferenca) {
    for(int i = 0 ; i <= pecas.size() - n;i++) {
        if(pecas[i + n - 1] - pecas[i] <= diferenca) {
            return true;
        }
    }
    return false;
}

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int nalunos,mpecas;
    cin >> nalunos >> mpecas;
    vector<int> pecas(mpecas);
    for(int i = 0; i < mpecas;i++) {
        cin >> pecas[i];
    }


    sort(pecas.begin(),pecas.end());
    int esquerda = 0;
    
    int direita = pecas.back() - pecas[0];
    int resp = direita;
    while(esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if(podeescolher(pecas,nalunos,meio)) {
            resp = meio;
            direita = meio-1;
        } else {
            esquerda = meio + 1;
        }
    }
    cout << resp << endl;
    return 0;
}