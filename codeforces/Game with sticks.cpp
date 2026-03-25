#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int movimento = min(n,m);
    if(movimento % 2 == 1) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }

    return 0;
}