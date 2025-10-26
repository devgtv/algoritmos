#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

const int MAX = 105;
struct Posicao {
    int linha;
    int coluna;
};

struct Estado {
    Posicao posicao;
    int d;
};

int t, l, c;
char floresta[MAX][MAX];
bool ameacada[MAX][MAX];
bool visitado[MAX][MAX];

int mlr[] = {-1,-1,-1,0,1,1,1,0};
int mcr[] = {-1,0,1,1,1,0,-1,-1};
int mlc[] = {-2,-2,-1,-1,1,1,2,2};
int mcc[] = {-1,1,-2,2,-2,2,-1,1};

bool tafora(int linha, int coluna) {
    return linha >= 0 && linha < l && coluna >= 0 && coluna < c;
}

void la() {
    for (int i = 0; i < l; ++i)
        for (int j = 0; j < c; ++j)
            ameacada[i][j] = false;
}
void lv() {
    for (int i = 0; i < l; ++i)
        for (int j = 0; j < c; ++j)
            visitado[i][j] = false;
}

void marcaa() {
    la();
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (floresta[i][j] == 'Z') {
                for (int d = 0; d < 8; d++) {
                    int novaLinha = i + mlc[d];
                    int novaColuna = j + mcc[d];
                    if (tafora(novaLinha, novaColuna) && floresta[novaLinha][novaColuna] != 'Z') {
                        ameacada[novaLinha][novaColuna] = true;
                    }
                }
            }
        }
    }
}

int bfs(Posicao inicio, Posicao fim) {
    lv();
    queue<Estado> fila;
    fila.push({inicio, 0});
    visitado[inicio.linha][inicio.coluna] = true;
    while (!fila.empty()) {
        Estado atual = fila.front();
        fila.pop();

        if (atual.posicao.linha == fim.linha && atual.posicao.coluna == fim.coluna)
            return atual.d;

        for (int d = 0; d < 8; ++d) {
            int noval = atual.posicao.linha + mlr[d];
            int novac = atual.posicao.coluna + mcr[d];

            if (!tafora(noval, novac)) continue;
            if (visitado[noval][novac]) continue;
            if (floresta[noval][novac] == 'Z') continue;
            if (ameacada[noval][novac] && floresta[noval][novac] != 'A' && floresta[noval][novac] != 'B') continue;

            visitado[noval][novac] = true;
            fila.push({{noval,novac},atual.d + 1});
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;

    while (t--) {
        cin >> l >> c;

        Posicao inicio, fim;

        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> floresta[i][j];
                if (floresta[i][j] == 'A')
                    inicio = {i, j};
                else if (floresta[i][j] == 'B')
                    fim = {i,j};
            }
        }

        marcaa();
        int resultado = bfs(inicio, fim);
        if (resultado == -1)
            cout << "King Peter, you can't go now!" << endl;
        else
            cout << "Minimal possible length of a trip is " << resultado << endl;
    }
    return 0;
}
