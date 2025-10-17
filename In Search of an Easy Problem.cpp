#include <bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,o;
    cin >> n;
    bool v = false;
    for(int i = 0 ; i < n;i++) {
        cin >> o;
        if(o == 1) {
            v = true;
            break;
        }
    }

    if(v) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }


    return 0;
}