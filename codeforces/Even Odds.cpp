#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;

    int cont = (n +1) / 2;
    if(k <= cont){
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k -cont) << endl;
    }

    return 0;
}