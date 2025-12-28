#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string cv, an, pi;
    cin >> cv >> an >> pi;
    string com = cv + an;
    int contagemc[26] = {0};
    int contagemp[26] = {0};

    for (char c : com) contagemc[c - 'A']++;
    for (char c : pi) contagemp[c - 'A']++;
    bool iguais = true;
    for (int i = 0; i < 26; i++) {
        if (contagemc[i] != contagemp[i]) {
            iguais = false;
            break;
        }
    }
    if (iguais) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
