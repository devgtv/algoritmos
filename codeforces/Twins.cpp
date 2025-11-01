#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> moedas(n);
    int soma = 0;

    for(int i = 0 ; i < n;i++) {
        cin >> moedas[i];
        soma += moedas[i];
    }

    
    sort(moedas.rbegin(), moedas.rend());
    int ms = 0;
    int cont =0;
    for(int i = 0 ; i < n;i++) {
        ms += moedas[i];
        cont++;
        if(ms > soma - ms) {
            break;
        }
    }
    cout << cont << endl;

    return 0;
}