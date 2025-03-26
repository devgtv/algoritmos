#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int instacias = 1;
    while (n--) {
        int matriz[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> matriz[i][j];
            }
        }

        bool validado = true;
        // VErificar todas as colunas primeiro para no futuro cortar o programa caso necessario
        for (int j = 0; j < 9 && validado; j++) {
            bool javisto[10] = {false};
            for (int i = 0; i < 9; i++) {
                int num = matriz[i][j];
                if (javisto[num]) {
                    validado = false;
                    break;
                }
                javisto[num] = true;
            }
        }
        // verificar as  linhas por favor .. 
        for (int i = 0; i < 9 && validado; i++) {
            bool javisto[10] = {false};
            for (int j = 0; j < 9; j++) {
                int num = matriz[i][j];
                if (javisto[num]) {
                    validado = false;
                    break;
                }
                javisto[num] = true;
            }
        }
        // verificar algumas em 3 por 3 
        for (int i = 0; i < 9 && validado; i += 3) {
            for (int j = 0; j < 9 && validado; j += 3) {
                bool javisto[10] = {false};
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        int num = matriz[i + x][j + y];
                        if (javisto[num]) {
                            validado = false;
                            break;
                        }
                        javisto[num] = true;
                    }
                    if (!validado) break;
                }
            }
        }
        
       

        
        // NAO ESQUECER DOS DOIS ENDL...// carai de asa =_=..
        
        cout << "Instancia " << instacias << endl;
        if (validado) {

            cout << "SIM" << endl;
            cout << endl;
        }
        else {
            cout << "NAO" << endl;
            cout << endl;
        }
        instacias++;
       
    }

    return 0;
}
