#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int tam;
        cin >> tam;

        string s;
        cin >> s;

        int l = 0;
        int r = tam - 1;

        while (l < r && s[l] != s[r]) {
            l++;
            r--;
        }

        if (l > r) {
            cout << 0 << endl;
        } else {
            cout << r - l + 1 << endl;
        }
    }

    return 0;
}
