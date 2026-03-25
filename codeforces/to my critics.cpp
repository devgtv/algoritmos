#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;


    while(t--) {

        int a,b,c;

        cin >> a >> b >> c;


        if (a + b >= 10 || a + c >= 10 || b + c >= 10 ) {
            cout << "YES" << endl;
        }  else {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}