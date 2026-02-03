#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> pontos(n);
    for(int i = 0 ; i < n;i++) {
        cin >> pontos[i];
    }
    
    int ml = pontos[0];
    int pior = pontos[0];
    int resp = 0;

    for(int i = 1; i < n;i++) {
        if(pontos[i] > ml) {
            ml = pontos[i];
            resp++;
        } else if (pontos[i] < pior) {
            pior = pontos[i];
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}