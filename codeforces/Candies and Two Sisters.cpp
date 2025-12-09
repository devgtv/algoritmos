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
        int n;
        cin >> n;
        int resp = (n - 1) / 2;
        resp = (resp < 0 ? 0 : resp);
        cout << resp << endl;
   }

    return 0;
}