#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int contador = 1;
    
    for(int i = 0 ; i < s.size();i++) {
        if(s[i] == s[i - 1]) {
          contador++;
          if(contador >= 7) {
            cout << "YES\n";
            return 0;  
          } 
        } else {
            contador = 1;
        }
    }
    cout << "NO\n";

    return 0;
}