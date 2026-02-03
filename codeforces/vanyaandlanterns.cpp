#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int l;
    cin >> n >> l;

    vector<int> a(n);
    for(int i = 0 ; i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    double resp= 0.0;
    resp = max(resp,(double)a[0]);

    for(int i = 1; i < n;i++) {
        resp = max(resp,(a[i] - a[i -1]) / 2.0);
    }

    resp = max(resp,(double)(l-a[n-1]));
    cout << fixed << setprecision(10) << resp << endl;


    return 0;
}