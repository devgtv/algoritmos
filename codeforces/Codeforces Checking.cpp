#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    string s = "codeforces";

    while(t--) {
        char c;
        cin >> c;

        bool encontro = false;


        for(int i = 0 ; i < s.size();i++) {
            if (s[i] == c) {
                encontro = c;
                break;
             }
        }
        if(encontro) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        
        }
    }
    
    return 0;
}