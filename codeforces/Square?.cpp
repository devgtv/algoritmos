#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        int a,b,c,d;
        
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }

    return 0;
}