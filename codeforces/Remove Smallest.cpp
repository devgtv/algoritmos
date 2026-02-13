#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
   
    while(t--) {
    int n;
    cin >> n;
    vector<int> a (n);

    for(int i = 0 ; i < n;i++) {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    bool possivel = true;


    for(int i = 1;i < n;i++) {
        if(a[i] - a[i - 1] > 1) {
            possivel = false;
            break;
        }
    }

    if(possivel) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
   
    }
     return 0;
}