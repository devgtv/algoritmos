#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int grandao = 1e4 ;

struct Ponto {
    int x, y;
};

bool vistados[grandao][grandao] = {false};
int distacia[grandao][grandao] = {0};

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int linhas, colunas;

bool podeir(int nx, int ny) {
    if(nx >= 0 && nx < linhas && ny >= 0 && ny < colunas && !vistados[nx][ny]) {
        return true;
    } else {
        return false;
    }
   
}

void bfs(int x, int y) {
    queue<Ponto> fila;
    fila.push({x, y});
    vistados[x][y] = true;

    while (!fila.empty()) {
        Ponto atual = fila.front();
        fila.pop();

        for (int k = 0; k < 4; k++) {
            int nx = atual.x + dx[k];
            int ny = atual.y + dy[k];

            if (podeir(nx, ny)) {
                fila.push({nx, ny});
                vistados[nx][ny] = true;
                distacia[nx][ny] = distacia[atual.x][atual.y] + 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nlboms, lbomb, qtbombs, cbomb;

    while (cin >> linhas >> colunas) {
        if (linhas == 0 && colunas == 0) break;

        cin >> nlboms;

    
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                vistados[i][j] = false;
                distacia[i][j] = 0;
            }
        }

        for (int i = 0; i < nlboms; i++) {
            cin >> lbomb >> qtbombs;

            for (int j = 0; j < qtbombs; j++) {
                cin >> cbomb;
                vistados[lbomb][cbomb] = true;
            }
        }

        int linicio, cinicio, lfinal, cfinal;
        cin >> linicio >> cinicio >> lfinal >> cfinal;

        bfs(linicio, cinicio);
        cout << distacia[lfinal][cfinal] << "\n";
    }
}
