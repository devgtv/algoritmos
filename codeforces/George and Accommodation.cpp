#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int contador = 0;
    int n ;
    cin >> n;
    for(int i = 0 ; i < n;i++) {
        int x,y;
        cin >> x >> y;
        if(y - x >= 2) {
            contador++;
        }
    }
    cout << contador << endl;
    

    return 0;
} 