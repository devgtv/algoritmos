#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,r;
    cin >> k >> r;

    for(int i = 1;  i<= 10;i++) {
        int constante = i * k;
        if(constante % 10 == 0  || constante % 10 == r) {
            cout << i << endl;
            break;
        }   
    }
    
    return 0;
}   