#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> c(n), v(n);

    for(int i = 0; i < n; i++) {
        cin >> c[i] >> v[i];
    }

    int resp = 0;
    for(int i = 0; i < n; i++) {          
        for(int j = 0; j < n; j++) {     
            if(i == j) {
                continue;
            }
            if(c[i] == v[j]) {
                resp++;
            }
        }
    }

    cout << resp << endl;

    return 0;
}