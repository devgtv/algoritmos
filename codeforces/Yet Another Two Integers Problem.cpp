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
        int d = abs(a - b);
        cout << (d + 9) / 10 << endl;
    }
    

    return 0;
}