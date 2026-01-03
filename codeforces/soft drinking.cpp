#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int bebida = k * l;
    int fatias = c * d;
    int sal = p;
    int brindesbebida = bebida / nl;
    int brindesfatia = fatias;
    int brindessal = sal / np;

    int totbrindes = min ({brindesbebida,brindesfatia,brindessal});
    cout << totbrindes / n << endl;
    

    return 0;
}