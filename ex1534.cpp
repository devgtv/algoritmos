#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned short int tamanho, l, c;

    while (cin >> tamanho) {
     
        vector<vector<int>> matriz(tamanho, vector<int>(tamanho));

        for (l = 0; l < tamanho; l++) {
            for (c = 0; c < tamanho; c++) {
                if (l == c)
                    matriz[l][c] = 1;
                if (l == tamanho - c - 1)
                    matriz[l][c] = 2;
                if (l != c && l != tamanho - c - 1)
                    matriz[l][c] = 3;
            }
        }

        for (l = 0; l < tamanho; l++) {
            for (c = 0; c < tamanho; c++)
                cout << matriz[l][c];

            cout << endl; 
        }
    }
    
    return 0;
}
