#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> sequencia;

    int x = 1;
    while (sequencia.size() < 1000) {
        if (x % 3 != 0 && x % 10 != 3) {
            sequencia.push_back(x);
        }
        x++;
    }

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        cout << sequencia[k - 1] << '\n';
    }

    return 0;
}