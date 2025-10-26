#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t = 0;
    while (t < n) {
        if (t > 0) {
            cout << endl;
        }
        int m, c;
        cin >> m >> c;

        map<int, vector<int>> tabelahas;

        for (int i = 0; i < c; ++i) {
            int chave;
            cin >> chave;
            int local = chave % m;
            tabelahas[local].push_back(chave);
        }

        for (int i = 0; i < m; ++i) {
            cout << i << " -> ";
            for (auto chave : tabelahas[i]) {
                cout << chave << " -> ";
            }
            cout << "\\" << endl;
        }

        t++;
    }

    return 0;
}
