#include <bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string a = "hello";
    int j =  0;
    for(int i = 0 ; i < s.length();i++) {
        if(s[i] == a[j]) {
            j++;
        }
        if(j == a.length()) {
            break;
        }
    }
    if(j == a.length()) {
        cout << "YES" << endl;
    } else {
        cout  << "NO" << endl;
    }
   
    return 0;
}