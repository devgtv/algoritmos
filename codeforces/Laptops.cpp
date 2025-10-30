#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x != y) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;    

    return 0;
}