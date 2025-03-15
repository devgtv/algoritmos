#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, d;

    while (cin >> n >> d) {
        string data;
        vector<string> datas;
        vector<vector<int>> disponibilidades(d, vector<int>(n));

        bool encontro_possivel = false;
        string resultado;

        // Coleta os dados das datas e disponibilidades
        for (int i = 0; i < d; ++i) {
            cin >> data;
            datas.push_back(data);
            for (int j = 0; j < n; ++j) {
                cin >> disponibilidades[i][j];
            }
        }

        // Verificador das data
        for (int i = 0; i < d; ++i) {
            bool todosPodem = true;
            for (int j = 0; j < n; ++j) {
                if (disponibilidades[i][j] == 0) {
                    todosPodem = false;
                    break;
                }
            }

            if (todosPodem) {
                resultado = datas[i]; 
                encontro_possivel = true;
                break;
            }
        }

        if (encontro_possivel) {
            cout << resultado << endl;
        }
        else {
            cout << "Pizza antes de FdI" << endl;
        }
    }

    return 0;
}
