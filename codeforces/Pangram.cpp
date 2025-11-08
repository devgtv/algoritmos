#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;

    for(char &c : s) {
        c = towlower(c);
    }
    set<char> le;
    for(char c : s) {
        if  (c >= 'a' && c <='z') {
            le.insert(c);
        }
    }
    if(le.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}