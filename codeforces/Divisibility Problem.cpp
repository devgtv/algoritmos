#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        if(a%b == 0) {
             cout << 0 << endl;

        } else {
            cout << b -a %b << endl;
        }
        
    }
    return 0;
}