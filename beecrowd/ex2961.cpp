#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int erros[4] = {0};

    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);

        string palpites[4];
        for (int i = 0; i < 4; i++) {
            getline(cin, palpites[i]);
        }

        getline(cin, linha);

        string vencedores[4];
        for (int i = 0; i < 4; i++) {
            getline(cin, vencedores[i]);
        }

        for (int i = 0; i < 4; i++) {
            if (palpites[i] != vencedores[i]) {
                erros[i]++;
            }
        }
    }

    int errosMaximos = 0;
    for (int i = 0; i < 4; i++) {
        if (erros[i] > errosMaximos) {
            errosMaximos = erros[i];
        }
    }

    vector<int> categorias;
    for (int i = 0; i < 4; i++) {
        if (erros[i] == errosMaximos) {
            categorias.push_back(i + 1);
        }
    }

    for (size_t i = 0; i < categorias.size(); i++) {
       
        if (i != 0) {
            cout << " ";
        }
        cout << categorias[i];
    }
    cout << endl;
   return 0;
}