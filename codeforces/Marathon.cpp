#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


void solve(int a,int b,int c,int d) {
    int contador  = 0;

    if(b > a ) contador++;
    if(c > a ) contador++;
    if(d > a) contador++;
    cout << contador << endl;
}

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        solve(a,b,c,d);
    }
    
    return 0;
}