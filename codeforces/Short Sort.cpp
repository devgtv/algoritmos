#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
string abc = "abc";
signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    
    
    int t;
    cin >> t;
    
    while(t--) {
        int contador = 0;
        cin >> s;
        for(int i = 0 ; i < 3;i++) {
            contador+= (s[i] != abc[i]);
        }
        if(contador <=2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }   
    return 0;
}