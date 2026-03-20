#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int packages = n / m;

    int remaining = n % m;

    int c1 = packages * b + remaining * a;

    int c2 = (packages + 1)* b;

    int c3 = n * a ;

    int mimm = min({c1,c2,c3});

    cout << mimm << endl;

    return 0;
}