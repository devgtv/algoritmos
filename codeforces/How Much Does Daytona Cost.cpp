#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool found = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == k) found = true;
        }

        if(found) {
            cout << "YES" << endl;
        } else {
              cout << "NO" << endl;
        }
        
    }

    return 0;
}