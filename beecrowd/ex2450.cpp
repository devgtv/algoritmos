#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int>(m));

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    int verificador_das_posicoes = 0;
    int quantidade_de_zeros, linha, coluna;
    bool problema, ok = true;  
    int ultima_coluna = m;

    for (linha = 0; linha < n; ++linha) {
        quantidade_de_zeros = 0;
        problema = true;

        
        for (coluna = 0; coluna < m; ++coluna) {
            if (matriz[linha][coluna] == 0 && problema)
                quantidade_de_zeros++;
            else
                problema = false;
        }

        if (linha != 0) {
            if ((quantidade_de_zeros > verificador_das_posicoes || (quantidade_de_zeros == verificador_das_posicoes && quantidade_de_zeros == m)) && ok)
                verificador_das_posicoes = quantidade_de_zeros;
            else
                verificador_das_posicoes = 0, ok = false;
        }
        else {
            verificador_das_posicoes = quantidade_de_zeros;
        }
    }

   
    if (verificador_das_posicoes)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}
