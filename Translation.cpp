#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    string frase,frase2;
    cin >> frase >> frase2;

    reverse(frase.begin(),frase.end());
    if(frase == frase2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}