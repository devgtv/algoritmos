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
        int maxzero = 0, currentzero = 0;
        for(int i = 0  ; i < n;i++) {
            int x;
            cin >> x;
            
            if(x == 0) {
                currentzero++;
                maxzero = max(maxzero,currentzero);
            } else {
                currentzero = 0;
            }
        }
        cout << maxzero << endl;
    }

    return 0;
}