#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n % 2 == 0) {
        cout << n/2 << endl;
    } else {

        if(n > 100) {
             n = ((n / 2) * -1 ) -1 ;
            cout << n << endl;
        } else if(n == 1) {
            cout << -1 << endl;
        } else {
            n = (n - 2) * -1;
            cout << n << endl;
        }
       
    }
 
    return 0;
}