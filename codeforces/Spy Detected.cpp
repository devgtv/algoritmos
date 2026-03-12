#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
#define endl '\n'

signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int bomba[n]; 
        for(int i = 0; i < n; i++) {
            cin >> bomba[i];
        }

        int c;
        if (bomba[0] == bomba[1]) {
            c = bomba[0];
        } else {
            if (bomba[0] == bomba[2]) { 
                c = bomba[0];
            } else {
                c = bomba[1]; 
            }
        }

        for(int i = 0; i < n; i++) {
            if (bomba[i] != c) {
                cout << i + 1 << endl; 
                break; 
            }
        }
    }
    return 0;}
