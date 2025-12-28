#include <iostream>
#include <queue>
using namespace std;


int dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
int dx[] = { -1,  0,  1, -1, 1, -1, 0, 1 }; 

bool dentroTabuleiro(int linha, int coluna) {
    return (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8);
}

struct Estado {
    int linha, coluna, passo;
};

int bfs(int l1, int c1, int l2, int c2, int l3, int c3) {
    bool visitado[9][9] = { false };

    

    queue<Estado> fila;
    fila.push({ l1, c1, 0 });
    visitado[l1][c1] = true;

    while (!fila.empty()) {
        Estado atual = fila.front();
        fila.pop();

        if (atual.linha == l2 && atual.coluna == c2) {
            return atual.passo;
        }

        for (int i = 0; i < 8; i++) {
            int novaLinha = atual.linha + dy[i];
            int novaColuna = atual.coluna + dx[i];

            if (dentroTabuleiro(novaLinha, novaColuna) &&
                !visitado[novaLinha][novaColuna] &&
                !(novaLinha == l3 && novaColuna == c3)) {

                visitado[novaLinha][novaColuna] = true;
                fila.push({ novaLinha, novaColuna, atual.passo + 1 });
            }
        }
    }

    return -1;
}

int main() {
    int l1, c1, l2, c2, l3, c3;
    int casoAtual = 1;

    while (cin >> l1 >> c1 >> l2 >> c2 >> l3 >> c3) {
        int resultado = bfs(l1, c1, l2, c2, l3, c3);
        cout << "Case " << casoAtual++ << ": " << resultado << endl;
    }

    return 0;
}
