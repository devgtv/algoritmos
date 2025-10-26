#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> bomba(3);
    while (t--) {
        
        for(int i = 0 ; i < 3;i++) {
            cin >> bomba[i];
        }
       sort(bomba.begin(),bomba.end());
       cout << bomba[1] << endl;
    }

    return 0;
}