#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.length();

    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }
    vector<vector<int>> esq(10, vector<int>(n, 0));
    vector<vector<int>> dir(10, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        int dig = s[i] - '0';
        for (int d = 0; d < 10; ++d) {
            if (dig == d) {
                if (i > 0) {
                    esq[d][i] = esq[d][i - 1] + 1;
                } else {
                    esq[d][i] = 1;
                }
            } else {
                esq[d][i] = 0;
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        int aux = s[i] - '0';
        for (int d = 0; d < 10; ++d) {
            if (aux == d) {
                if (i < n - 1) {
                    dir[d][i] = dir[d][i + 1] + 1;
                } else {
                    dir[d][i] = 1;
                }
            } else {
                dir[d][i] = 0;
            }
        }
    }
    int resp = 0;
    for (int i = 1; i < n; ++i) {
        int d2 = s[i] - '0'; 
        if (d2 > 0) {
            int d1 = d2 - 1;
            int l = esq[d1][i - 1];
            int ddq = dir[d2][i]
            ;
            if (l < ddq) {
                resp += l;
            } else {
                resp += ddq;
            }
        }
    }
    cout << resp << endl;
    return 0;
}


