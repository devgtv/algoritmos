#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> leveis;
    int p;
    cin >> p;
    for(int i = 0; i < p;i++) {
        int x;
        cin >> x;
        leveis.insert(x);
    }
    int q;
    cin >> q;
    for(int i = 0 ; i < q;i++) {
        int y;
        cin >> y;
        leveis.insert(y);
    }

    if(leveis.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}