#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;

    while (cin >> t) {
        vector<vector<int>> m(t, vector<int>(t, 0));
        int l, c;

        for (l = 0; l < t; l++) {
            for (c = 0; c < t; c++) {
                if (l == c) {
                    m[l][c] = 2;
                }
                else if (l == t - c - 1) {
                    m[l][c] = 3;
                }
                else {
                    m[l][c] = 0;
                }
            }
        }

        int i = t / 3;
        int f = t - i;

        for (l = i; l < f; l++) {
            for (c = i; c < f; c++) {
                m[l][c] = 1;
            }
        }

        m[t / 2][t / 2] = 4;

        for (l = 0; l < t; l++) {
            for (c = 0; c < t; c++) {
                cout << m[l][c];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
