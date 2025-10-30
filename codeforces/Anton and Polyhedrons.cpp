#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    int soma = 0;
    for(int i = 0 ; i < n;i++) {
        cin >> s;
        if(s == "Tetrahedron") {
            soma += 4;
        } else if (s== "Dodecahedron") {
            soma += 12;
        }  else if( s== "Cube") {
            soma += 6;
        } else if (s == "Octahedron") {
            soma += 8;
        } else {
            soma += 20;
        }
    }
    cout << soma << endl;
    return 0;
}