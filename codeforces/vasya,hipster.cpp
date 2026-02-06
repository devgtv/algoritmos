#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(int &a,int &b) {
    int dif = min(a,b);

    a = a - dif;
    b = b - dif;
    int dias = (a + b) / 2 ;
    cout << dif << " " << dias << endl;
}

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    solve(a,b);   
    return 0;
}