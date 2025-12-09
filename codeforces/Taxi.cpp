#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            c1++;
        } else if (x == 2) {
            c2++;
        } else if (x == 3) {
            c3++;
        } else {
            c4++;
        }
    }

    int ta = 0;
    ta += c4;
    ta += c3;

    int bomba = min(c3, c1);
    c1 -= bomba;

    ta += c2 / 2;
    if (c2 % 2 == 1) {
        ta++;
        c1 -= min(2LL, c1);
    }

    if (c1 > 0) {
        ta += (c1 + 3) / 4;
    }

    cout << ta << endl;
    return 0;
}
