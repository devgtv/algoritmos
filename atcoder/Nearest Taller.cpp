#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> bomba(n);
    for(int i = 0 ; i < n;i++) {
        cin >> bomba[i];
    }
    for(int i = 0 ; i < n;i++) {
        int resp = -1;
        for(int j = i - 1; j >=0;j--) {
            if(bomba[j] > bomba[i]) {
                resp = j + 1;
                break;
            }
        }
        cout << resp << endl;
    }

    return 0;
}