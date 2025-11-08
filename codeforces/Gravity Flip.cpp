#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int bomba[100];
    for(int i = 0 ; i < n;i++) {
        cin >> bomba[i];
    }
    sort(bomba,bomba+n);

    for(int i = 0 ; i < n;i++) {
        cout << bomba[i] << " ";
    }
    cout << endl;

    return 0;
}