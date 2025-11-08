#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    string resultado = "";

    for(int i = 0 ; i < a.size();i++) {
        if(a[i] != b[i]) {
            resultado += '1';
        } else {
            resultado += '0';
        }
    }

    cout << resultado << endl;
    return 0;
}