#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool right = true;  
    for(int l = 1; l <= n; l++) {
        if(l % 2 == 1) {
            for(int i = 0; i < m; i++) cout << '#';
        } 
        else {
            if(right) {
                for(int i = 0; i < m - 1; i++) cout << '.';
                cout << '#';
            } else {
                cout << '#';
                for(int i = 0; i < m - 1; i++) cout << '.';
            }
            right = !right; 
        }
        cout << endl;
    }

    return 0;
}
