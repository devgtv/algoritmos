#include <bits/stdc++.h>
#define endl '\n'
#define int long long

using namespace std;

struct posi {
    int x, y, tempo;
};

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool dentrolimite(int x, int y, int r, int c) {
    return x >= 0 && x < r && y >= 0 && y < c;
}


void bfsf(queue<posi> &filaf, vector<string> &mapa, vector<vector<int>> &tempofire, int r, int c) {
    while (!filaf.empty()) {
        posi atual = filaf.front();
        filaf.pop();

        for (int d = 0; d < 4; d++) {
            int nx = atual.x + dx[d];
            int ny = atual.y + dy[d];

            if (dentrolimite(nx, ny, r, c) && mapa[nx][ny] != '#' && tempofire[nx][ny] > atual.tempo + 1) {
                tempofire[nx][ny] = atual.tempo + 1;
                filaf.push({nx, ny, atual.tempo + 1});
            }
        }
    }
}


int bfsj(posi joe, vector<string> &mapa, vector<vector<int>> &tempofire, int r, int c) {
    vector<vector<bool>> visitado(r, vector<bool>(c, false));
    queue<posi> filaj;

    filaj.push(joe);
    visitado[joe.x][joe.y] = true;

    while (!filaj.empty()) {
        posi atual = filaj.front();
        filaj.pop();

        
        if (atual.x == 0 || atual.x == r - 1 || atual.y == 0 || atual.y == c - 1) {
            return atual.tempo + 1; 
        }

        for (int d = 0; d < 4; d++) {
            int nx = atual.x + dx[d];
            int ny = atual.y + dy[d];

            if (dentrolimite(nx, ny, r, c) && mapa[nx][ny] == '.' && !visitado[nx][ny]) {
              
                if (atual.tempo + 1 < tempofire[nx][ny]) {
                    visitado[nx][ny] = true;
                    filaj.push({nx,ny,atual.tempo + 1});
                }
            }
        }
    }

    return -1; 
}

int32_t  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<string> mapa(r);
        vector<vector<int>> tempofire(r, vector<int>(c, INT_MAX));
        queue<posi> filafire;
        posi joe;

        for (int i = 0; i < r; i++) {
            cin >> mapa[i];
            for (int j = 0; j < c; j++) {
                if (mapa[i][j] == 'F') {
                    filafire.push({i, j, 0});
                    tempofire[i][j] = 0;
                } else if (mapa[i][j] == 'J') {
                    joe = {i,j,0};
                }
            }
        }

        bfsf(filafire, mapa, tempofire, r, c);
        int tempofugir = bfsj(joe, mapa, tempofire, r, c);

        if (tempofugir != -1) {
            cout << tempofugir << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
