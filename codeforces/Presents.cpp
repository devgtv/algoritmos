#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> p(n+1);
    vector<int> presentes(n+1);


    for(int i = 1 ; i  <=n;i++) {
        cin >> p[i];
        presentes[p[i]] = i;
    }

    for(int i = 1;i <=n;i++) {
        cout << presentes[i];
        if(i < n) cout << " ";
    }
    cout << endl;
    return 0;
}