#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++) {
        int k = 0;
        while (k < n - 1) {
            if (s[k] == 'B' && s[k + 1] == 'G') {
                swap(s[k], s[k + 1]);
                k += 2;  
            } else {
                k++;
            }
        }
    }
    cout << s << "\n";

    return 0;
}
