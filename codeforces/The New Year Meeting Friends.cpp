#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int bomba[3];

    cin >> bomba[0]  >> bomba[1]  >> bomba [2];
    sort(bomba,bomba + 3);

    int d = (bomba[2] - bomba [1]) + (bomba[1] - bomba[0]);
    cout << d << endl;
    
    return 0;
}