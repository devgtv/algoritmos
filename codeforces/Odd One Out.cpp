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

        if(a == b) {
            cout << c << endl;
        } else if (a == c) {    
            cout << b << endl;
        } else {
            cout << a << endl;
        }


    }
    return 0;
}