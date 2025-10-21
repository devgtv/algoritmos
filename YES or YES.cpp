#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

// funcao para converter tudo para maiusclas

string converter (string &s) {
    int tam =  s.size();

    for(int i = 0 ; i < tam;i++) {
        s[i] = toupper(s[i]);
    }
    return s;
} 


signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;

    for(int i = 0 ; i < n;i++) {
        cin >> s;
        s = converter(s);
        if(s == "YES") {
            cout << "YES" <<  endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}