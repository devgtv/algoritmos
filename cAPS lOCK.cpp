#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int contador = 0;
    for(int i  = 0 ; i < s.size();i++) {
        if(s[i] >='A' && s[i] <= 'Z') {
            contador++;
        }
    }
    

    if(contador == s.size() -1 && islower(s[0])) {
        s[0] = toupper(s[0]);
        cout << s[0];
        int tam = s.size();
        for(int i = 1 ; i < tam;i++) {
            cout<< tolower(s[i],locale());
        }
        
    } else if (contador == s.size()) {
        int tam = s.size();
        for(int i = 0 ; i < tam;i++) {
            cout<< tolower(s[i],locale());
        }
    } else {
        cout << s ;
    }
    cout << endl;
  
    return 0;
}