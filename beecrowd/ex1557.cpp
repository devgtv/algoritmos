#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    unsigned int N;

    while (cin >> N && N != 0) {
        if (N > 15) {
            continue; 
        }

        vector<vector<int>> matriz(N, vector<int>(N));
        int elementos = 1;

        for (int l = 0; l < N; l++) {
            for (int c = 0; c < N; c++) {
                matriz[l][c] = elementos;
                elementos *= 2;
            }
            elementos = matriz[l][0] * 2;
        }

        int maior_valor = matriz[N - 1][N - 1];
        int quantidade_digitos = log10(maior_valor) + 1;

        for (int l = 0; l < N; l++) {
            for (int c = 0; c < N; c++) {
                if (c == 0)
                    cout << setw(quantidade_digitos) << matriz[l][c];
                else
                    cout << " " << setw(quantidade_digitos) << matriz[l][c];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
