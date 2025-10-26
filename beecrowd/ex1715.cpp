#include <iostream>
#include <vector>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> metriz(n,vector<int>(m));
    
    
    
    
    for(int i = 0 ; i < n;i++) {
        for(int j = 0 ; j < m;j++) {
            cin >> metriz[i][j];
        }
    }
        int contador = 0;
        int jogadores = 0;
        for(int i = 0 ; i < n;i++) {
        for(int j = 0 ; j < m;j++) {
            if(metriz[i][j] != 0) {
                contador++;
            }
        }
        if(contador == m) {
            jogadores++;
        }
        contador = 0;
    }
    
    cout << jogadores << endl;
    return 0;
}