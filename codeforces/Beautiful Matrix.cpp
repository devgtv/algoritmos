#include <iostream>
using namespace std;

int abs(int x) {
    return (x < 0) ? -x : x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int matriz[5][5];
    int linha = 0, coluna = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] == 1) {
                linha = i;
                coluna = j;
            }
        }
    }
    int movimentos = abs(linha - 2) + abs(coluna - 2);
    cout << movimentos << endl;
    
    return 0;
}
