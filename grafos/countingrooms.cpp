#include <iostream>
#include <vector>

using namespace std;


int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


void dfs(int x, int y, vector<vector<char>>& mapa, vector<vector<bool>>& vistados) {
    vistados[x][y] = true;
    
   
    for (int i = 0; i < 4; i++) {
        int novox = x + dx[i];
        int novoy = y + dy[i];
        
      
        if (novox >= 0 && novox < mapa.size() && novoy >= 0 && novoy < mapa[0].size() && 
            mapa[novox][novoy] == '.' && !vistados[novox][novoy]) {
            dfs(novox, novoy, mapa, vistados);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m; 

    vector<vector<char>> mapa(n, vector<char>(m));
    vector<vector<bool>> visitado(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mapa[i][j];
        }
    }

    int contador = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mapa[i][j] == '.' && !visitado[i][j]) {

                dfs(i, j, mapa, visitado);
                contador++;
            }
        }
    }

    cout << contador << "\n";

    return 0;
}
