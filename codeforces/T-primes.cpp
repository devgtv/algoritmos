#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int limite =  1000000;
vector<bool> ehprimo(limite+1,true);


void crivo () {
    ehprimo[0] = ehprimo[1] = false;
    for(int i = 2; i * i <= limite;i++) {
        if(ehprimo[i]) {
            for(int j = i * i; j<=limite; j += i) {
                ehprimo[j] = false;
            }
        }
    }
}
signed main () {
    ios::sync_with_stdio(false) ;
    cin.tie(nullptr);
    crivo();
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;

        long long r  = sqrt(n);

        if(r *r == n && ehprimo[r]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}