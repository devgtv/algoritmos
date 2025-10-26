#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    // lembrar do campo minado 
    while (cin >> n >> m) {
        vector<vector<int>> tabuleiro(n, vector<int>(m));
        vector<vector<int>> saida(n, vector<int>(m));
        // le todos os dados da matriz
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> tabuleiro[i][j];
            }
        }
        // condicoes especificas
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tabuleiro[i][j] == 1) {
                    saida[i][j] = 9;
                }
                else {
                    int count = 0;
                    if (i > 0 && tabuleiro[i - 1][j] == 1) count++;
                    if (i < n - 1 && tabuleiro[i + 1][j] == 1) count++;
                    if (j > 0 && tabuleiro[i][j - 1] == 1) count++;
                    if (j < m - 1 && tabuleiro[i][j + 1] == 1) count++;
                    saida[i][j] = count;
                }
            }
        }
        // saida da matriz
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << saida[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
