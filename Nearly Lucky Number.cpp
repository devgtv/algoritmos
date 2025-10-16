#include <bits/stdc++.h>
using namespace std;

bool esortudo(int& x) {
    if (x == 0) return false;
    while(x > 0) {
        int d  = x % 10;
        if( d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int cont = 0;
    for(char c : s) {
        if ( c == '4' || c == '7') cont++;
    }
    
    cout << (esortudo(cont) ? "YES\n" : "NO\n");
    return 0;
}