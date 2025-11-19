#include<bits/stdc++.h>
using namespace std;
#define int long long      
     
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b,c;
        cin >> a >> b >> c;

        int resp = a + b + c;
        resp = max(resp,(a + b) * c);
        resp = max(resp, a * (b + c));
        resp = max(resp, a*b * c);

        cout << resp << endl;
    }