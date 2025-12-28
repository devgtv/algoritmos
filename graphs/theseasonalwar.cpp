#include <iostream>
#include <vector>
#include <string>

using namespace std;
// EU NAO AGUENTO MAIS
void dfs(int x, int y, vector<vector<int>>& imagem, vector<vector<bool>>& visitado) {
    int dx[] = {-1,1,0,0,-1,1,-1,1};
    int dy[] = {0,0,-1,1,-1,-1,1,1};
    visitado[x][y] = true;
    
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < imagem.size() && ny >= 0 && ny < imagem[0].size() && imagem[nx][ny] == 1 && !visitado[nx][ny]) {
            dfs(nx, ny, imagem, visitado);
        }
    }
}

int contaraguisguerra(vector<vector<int>>& imagem) {
    int m = imagem.size();
    int n = imagem[0].size();
    vector<vector<bool>> visitado(m, vector<bool>(n, false));
    int quantaguias = 0;
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (imagem[i][j] == 1 && !visitado[i][j]) {
                dfs(i, j, imagem, visitado);
                quantaguias++;
            }
        }
    }
    
    return quantaguias;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numeroiamgem = 1;
    string linha;
    int n;
    while (cin >> n) {
        vector<vector<int>> imagem(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            cin >> linha;
            for (int j = 0; j < n; j++) {
                imagem[i][j] = linha[j] - '0';
            }
        }

        int quantidadeaguias = contaraguisguerra(imagem);

        cout << "Image number " << numeroiamgem << " contains " << quantidadeaguias << " war eagles." << endl;
        numeroiamgem++;
    }

    return 0;
}
