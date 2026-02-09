#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if( a + b == c ) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
    }
    
    return 0;
}