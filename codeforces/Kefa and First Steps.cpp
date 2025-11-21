#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> valores(n);
    for(int i = 0; i < n; i++){
        cin >> valores[i];
    }
    int mt = 1;
    int ta = 1;

    for(int i = 1; i < n; i++){
        if(valores[i] >= valores[i - 1]) {
            ta++;
        } else {
            ta = 1;
        }
        mt = max(mt, ta);
    }

    cout << mt << endl;

    return 0;
}
