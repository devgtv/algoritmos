#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


void solve(const string &s) {
    int soma1 =0;
    int soma2 = 0;
    for(int i = 0; i < 3;i++) {
        soma1 += s[i] - '0';
        soma2 += s[i + 3]- '0';
    }
    if(soma1 == soma2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        solve(s);
    }
    
    return 0;
}