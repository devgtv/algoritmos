    #include <iostream>
    using namespace std;
    int main () {
     
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        int pontuacao [50];
        for(int i = 0 ; i < n;i++) {
            cin >> pontuacao[i];
        }
     
        int threshold = pontuacao[k-1];
        int contador = 0;
     
        for (int i = 0 ; i < n;i++) {
            if(pontuacao[i] >= threshold && pontuacao[i] > 0) {
                contador++;
            }
        }
        cout << contador << endl;
     
        return 0;
    }