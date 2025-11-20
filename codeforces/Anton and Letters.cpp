#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin ,s);

    set<char> letras;

    for(char c : s) {
        if(c >= 'a' && c <= 'z') {
            letras.insert(c);
        }
    }
    cout << letras.size() << endl;
    

    return 0;
}