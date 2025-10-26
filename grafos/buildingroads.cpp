#include <iostream>
#include <vector>
using namespace std;




void dfs(vector<vector<int>> &garfo,vector<bool>&vistados,int pos) {
    vistados[pos] = true;
    
    for(int i = 0 ; i < garfo[pos].size();i++) {
        if(!vistados[garfo[pos][i]]) {
            dfs(garfo,vistados,garfo[pos][i]);
      }

    }

}






int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    
    int nn;
    cin >> nn;
    int mm;
    cin >> mm;

    vector<vector<int>> bomba(nn);
    for(int i = 0 ; i < mm;i++) {
        int aux;
        cin >> aux;
        aux--;
        int aux2;
        cin >> aux2;
        aux2--;
        bomba[aux].push_back(aux2);
        bomba[aux2].push_back(aux);
    }
    vector<bool> vistados(nn,false);
    vector<int> becos;
    int contador = 0;
    for(int i = 0 ; i < nn;i++) {
            if(!vistados[i]) {
                dfs(bomba,vistados,i);
                contador++;
                becos.push_back(i);
            }
    }

    cout << contador -1 << endl;

    for(int i = 0 ; i < becos.size() -1;i++) {
        cout << becos[i] + 1 << " " << becos[i+1] + 1 << endl; 
    }
}