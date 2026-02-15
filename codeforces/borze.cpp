#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int tamanho = s.size();

    for (int i = 0; i < tamanho; i++) {
        if (s[i] == '.') {
            cout << "0"; 
        } else {
            if (i + 1 < tamanho && s[i + 1] == '.') {
                cout << "1"; 
            } else {
                cout << "2"; 
            }
            i++; 
        }
    }

    cout << '\n';
    return 0;
}
